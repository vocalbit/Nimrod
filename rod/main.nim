#
#
#           The Nimrod Compiler
#        (c) Copyright 2009 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# implements the command dispatcher and several commands as well as the
# module handling

import 
  llstream, strutils, ast, astalgo, scanner, syntaxes, rnimsyn, options, msgs, 
  os, lists, condsyms, paslex, pasparse, rodread, rodwrite, ropes, trees, 
  wordrecg, sem, semdata, idents, passes, docgen, extccomp, cgen, ecmasgen, 
  platform, interact, nimconf, importer, passaux, depends, transf, evals, types

proc MainCommand*(cmd, filename: string)
# implementation
# ------------------ module handling -----------------------------------------

type 
  TFileModuleRec{.final.} = object 
    filename*: string
    module*: PSym

  TFileModuleMap = seq[TFileModuleRec]

var compMods: TFileModuleMap = @ []

proc registerModule(filename: string, module: PSym) = 
  # all compiled modules
  var length = len(compMods)
  setlen(compMods, length + 1)
  compMods[length].filename = filename
  compMods[length].module = module

proc getModule(filename: string): PSym = 
  for i in countup(0, high(compMods)): 
    if sameFile(compMods[i].filename, filename): 
      return compMods[i].module
  result = nil

proc newModule(filename: string): PSym = 
  # We cannot call ``newSym`` here, because we have to circumvent the ID
  # mechanism, which we do in order to assign each module a persistent ID. 
  new(result)
  result.id = - 1             # for better error checking
  result.kind = skModule
  result.name = getIdent(splitFile(filename).name)
  if not isNimrodIdentifier(result.name.s):
    rawMessage(errIdentifierExpected, result.name.s)
  
  result.owner = result       # a module belongs to itself
  result.info = newLineInfo(filename, 1, 1)
  incl(result.flags, sfUsed)
  initStrTable(result.tab)
  RegisterModule(filename, result)
  StrTableAdd(result.tab, result) # a module knows itself
  
proc CompileModule(filename: string, isMainFile, isSystemFile: bool): PSym
proc importModule(filename: string): PSym = 
  # this is called by the semantic checking phase
  result = getModule(filename)
  if result == nil: 
    # compile the module
    result = compileModule(filename, false, false)
  elif sfSystemModule in result.flags: 
    liMessage(result.info, errAttemptToRedefine, result.Name.s)
  
proc CompileModule(filename: string, isMainFile, isSystemFile: bool): PSym = 
  var rd: PRodReader = nil
  var f = addFileExt(filename, nimExt)
  result = newModule(filename)
  if isMainFile: incl(result.flags, sfMainModule)
  if isSystemFile: incl(result.flags, sfSystemModule)
  if (gCmd == cmdCompileToC) or (gCmd == cmdCompileToCpp): 
    rd = handleSymbolFile(result, f)
    if result.id < 0: 
      InternalError("handleSymbolFile should have set the module\'s ID")
  else: 
    result.id = getID()
  processModule(result, f, nil, rd)

proc CompileProject(filename: string) = 
  discard CompileModule(JoinPath(options.libpath, addFileExt("system", nimExt)), 
                        false, true)
  discard CompileModule(addFileExt(filename, nimExt), true, false)

proc semanticPasses() = 
  registerPass(verbosePass())
  registerPass(sem.semPass())
  registerPass(transf.transfPass())

proc CommandGenDepend(filename: string) = 
  semanticPasses()
  registerPass(genDependPass())
  registerPass(cleanupPass())
  compileProject(filename)
  generateDot(filename)
  execExternalProgram("dot -Tpng -o" & changeFileExt(filename, "png") & ' ' &
      changeFileExt(filename, "dot"))

proc CommandCheck(filename: string) = 
  semanticPasses()            # use an empty backend for semantic checking only
  compileProject(filename)

proc CommandCompileToC(filename: string) = 
  semanticPasses()
  registerPass(cgen.cgenPass())
  registerPass(rodwrite.rodwritePass())
  #registerPass(cleanupPass())
  compileProject(filename)
  extccomp.CallCCompiler(changeFileExt(filename, ""))

proc CommandCompileToEcmaScript(filename: string) = 
  incl(gGlobalOptions, optSafeCode)
  setTarget(osEcmaScript, cpuEcmaScript)
  initDefines()
  semanticPasses()
  registerPass(ecmasgenPass())
  compileProject(filename)

proc CommandInteractive() = 
  incl(gGlobalOptions, optSafeCode)
  setTarget(osNimrodVM, cpuNimrodVM)
  initDefines()
  registerPass(verbosePass())
  registerPass(sem.semPass())
  registerPass(transf.transfPass())
  registerPass(evals.evalPass()) # load system module:
  discard CompileModule(JoinPath(options.libpath, addFileExt("system", nimExt)), 
                        false, true)
  var m = newModule("stdin")
  m.id = getID()
  incl(m.flags, sfMainModule)
  processModule(m, "stdin", LLStreamOpenStdIn(), nil)

proc exSymbols(n: PNode) = 
  case n.kind
  of nkEmpty..nkNilLit: 
    nil
  of nkProcDef..nkIteratorDef: 
    exSymbol(n.sons[namePos])
  of nkWhenStmt, nkStmtList: 
    for i in countup(0, sonsLen(n) - 1): exSymbols(n.sons[i])
  of nkVarSection, nkConstSection: 
    for i in countup(0, sonsLen(n) - 1): exSymbol(n.sons[i].sons[0])
  of nkTypeSection: 
    for i in countup(0, sonsLen(n) - 1): 
      exSymbol(n.sons[i].sons[0])
      if (n.sons[i].sons[2] != nil) and
          (n.sons[i].sons[2].kind == nkObjectTy): 
        fixRecordDef(n.sons[i].sons[2])
  else: 
    nil

proc CommandExportSymbols(filename: string) = 
  # now unused!
  var module: PNode
  module = parseFile(addFileExt(filename, NimExt))
  if module != nil: 
    exSymbols(module)
    renderModule(module, getOutFile(filename, "pretty." & NimExt))

proc CommandPretty(filename: string) = 
  var module: PNode
  module = parseFile(addFileExt(filename, NimExt))
  if module != nil: 
    renderModule(module, getOutFile(filename, "pretty." & NimExt))
  
proc CommandLexPas(filename: string) = 
  var 
    L: TPasLex
    tok: TPasTok
    f: string
    stream: PLLStream
  f = addFileExt(filename, "pas")
  stream = LLStreamOpen(f, fmRead)
  if stream != nil: 
    OpenLexer(L, f, stream)
    getPasTok(L, tok)
    while tok.xkind != pxEof: 
      printPasTok(tok)
      getPasTok(L, tok)
  else: 
    rawMessage(errCannotOpenFile, f)
  closeLexer(L)

proc CommandPas(filename: string) = 
  var 
    p: TPasParser
    module: PNode
    f: string
    stream: PLLStream
  f = addFileExt(filename, "pas")
  stream = LLStreamOpen(f, fmRead)
  if stream != nil: 
    OpenPasParser(p, f, stream)
    module = parseUnit(p)
    closePasParser(p)
    renderModule(module, getOutFile(filename, NimExt))
  else: 
    rawMessage(errCannotOpenFile, f)
  
proc CommandScan(filename: string) = 
  var 
    L: TLexer
    tok: PToken
    f: string
    stream: PLLStream
  new(tok)
  f = addFileExt(filename, nimExt)
  stream = LLStreamOpen(f, fmRead)
  if stream != nil: 
    openLexer(L, f, stream)
    while true: 
      rawGetTok(L, tok^)
      PrintTok(tok)
      if tok.tokType == tkEof: break 
    CloseLexer(L)
  else: 
    rawMessage(errCannotOpenFile, f)
  
proc WantFile(filename: string) = 
  if filename == "": 
    liMessage(newLineInfo("command line", 1, 1), errCommandExpectsFilename)
  
proc MainCommand(cmd, filename: string) = 
  appendStr(searchPaths, options.libpath)
  if filename != "": 
    # current path is always looked first for modules
    prependStr(searchPaths, splitFile(filename).dir)
  setID(100)
  passes.gIncludeFile = syntaxes.parseFile
  passes.gImportModule = importModule
  case whichKeyword(cmd)
  of wCompile, wCompileToC, wC, wCC: 
    # compile means compileToC currently
    gCmd = cmdCompileToC
    wantFile(filename)
    CommandCompileToC(filename)
  of wCompileToCpp: 
    gCmd = cmdCompileToCpp
    wantFile(filename)
    CommandCompileToC(filename)
  of wCompileToEcmaScript: 
    gCmd = cmdCompileToEcmaScript
    wantFile(filename)
    CommandCompileToEcmaScript(filename)
  of wCompileToLLVM: 
    gCmd = cmdCompileToLLVM
    wantFile(filename)
    CommandCompileToC(filename)
  of wPretty: 
    gCmd = cmdPretty
    wantFile(filename)        #CommandExportSymbols(filename);
    CommandPretty(filename)
  of wDoc: 
    gCmd = cmdDoc
    LoadSpecialConfig(DocConfig)
    wantFile(filename)
    CommandDoc(filename)
  of wRst2html: 
    gCmd = cmdRst2html
    LoadSpecialConfig(DocConfig)
    wantFile(filename)
    CommandRst2Html(filename)
  of wRst2tex: 
    gCmd = cmdRst2tex
    LoadSpecialConfig(DocTexConfig)
    wantFile(filename)
    CommandRst2TeX(filename)
  of wPas: 
    gCmd = cmdPas
    wantFile(filename)
    CommandPas(filename)
  of wBoot: 
    gCmd = cmdBoot
    wantFile(filename)
    CommandPas(filename)
  of wGenDepend: 
    gCmd = cmdGenDepend
    wantFile(filename)
    CommandGenDepend(filename)
  of wListDef: 
    gCmd = cmdListDef
    condsyms.ListSymbols()
  of wCheck: 
    gCmd = cmdCheck
    wantFile(filename)
    CommandCheck(filename)
  of wParse: 
    gCmd = cmdParse
    wantFile(filename)
    discard parseFile(addFileExt(filename, nimExt))
  of wScan: 
    gCmd = cmdScan
    wantFile(filename)
    CommandScan(filename)
    MessageOut("Beware: Indentation tokens depend on the parser\'s state!")
  of wI: 
    gCmd = cmdInteractive
    CommandInteractive()
  else: rawMessage(errInvalidCommandX, cmd)
  