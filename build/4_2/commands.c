/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50036 TY50036;
typedef struct TY50448 TY50448;
typedef struct TY46536 TY46536;
typedef struct TY42019 TY42019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY42013 TY42013;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TNimObject TNimObject;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY72026[3];
struct TY50036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY50036 TY50054[21];
struct TY50448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY50448 TY50461[12];
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
typedef NimStringDesc* TY47016[4];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY10788 Stat;
};
typedef NimStringDesc* TY46498[13];
typedef NimStringDesc* TY46478[15];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(void, Messageout_46554)(NimStringDesc* S_46556);
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_72021)(void);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_23943, NimStringDesc** A_23945, NI A_23945Len0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(NU8, Whichkeyword_71474)(NimStringDesc* Id_71476);
N_NIMCALL(void, Expectarg_72211)(NimStringDesc* Switch_72213, NimStringDesc* Arg_72214, NU8 Pass_72215, TY46536 Info_72216);
N_NIMCALL(void, Limessage_46566)(TY46536 Info_46568, NU8 Msg_46569, NimStringDesc* Arg_46570);
N_NIMCALL(NimStringDesc*, Processpath_72345)(NimStringDesc* Path_72347);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_35856);
N_NIMCALL(NimStringDesc*, Getprefixdir_45108)(void);
N_NIMCALL(NIM_BOOL, Contains_42159)(TY42019* List_42161, NimStringDesc* Data_42162);
N_NIMCALL(void, Prependstr_42071)(TY42019* List_42074, NimStringDesc* Data_42075);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(void, Definesymbol_63053)(NimStringDesc* Symbol_63055);
N_NIMCALL(void, Undefsymbol_63056)(NimStringDesc* Symbol_63058);
N_NIMCALL(void, Processcompile_72353)(NimStringDesc* Filename_72355);
N_NIMCALL(NimStringDesc*, Findfile_45089)(NimStringDesc* F_45091);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37820, NimStringDesc* Ext_37821);
N_NIMCALL(void, Addexternalfiletocompile_69544)(NimStringDesc* Filename_69546);
N_NIMCALL(void, Addfiletolink_69559)(NimStringDesc* Filename_69561);
N_NIMCALL(NimStringDesc*, Completecfilepath_69500)(NimStringDesc* Cfile_69502, NIM_BOOL Createsubdir_69503);
N_NIMCALL(void, Expectnoarg_72217)(NimStringDesc* Switch_72219, NimStringDesc* Arg_72220, NU8 Pass_72221, TY46536 Info_72222);
N_NIMCALL(void, Processonoffswitch_72159)(NU32 Op_72161, NimStringDesc* Arg_72162, NU8 Pass_72163, TY46536 Info_72164);
N_NIMCALL(void, Processspecificnote_72223)(NimStringDesc* Arg_72225, NU8 State_72226, NU8 Pass_72227, TY46536 Info_72228);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Invalidcmdlineoption_72077)(NU8 Pass_72079, NimStringDesc* Switch_72080, TY46536 Info_72081);
N_NIMCALL(NI, Findstr_71477)(NimStringDesc** A_71480, NI A_71480Len0, NimStringDesc* S_71481);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(void, Processonoffswitchg_72185)(NU32 Op_72187, NimStringDesc* Arg_72188, NU8 Pass_72189, TY46536 Info_72190);
N_NIMCALL(void, Listsymbols_63062)(void);
N_NIMCALL(void, Addcompileoption_69460)(NimStringDesc* Option_69462);
N_NIMCALL(void, Addlinkoption_69454)(NimStringDesc* Option_69456);
N_NIMCALL(void, Addimplicitmod_45141)(NimStringDesc* Filename_45143);
N_NIMCALL(NU8, Nametoos_50564)(NimStringDesc* Name_50566);
N_NIMCALL(void, Settarget_50574)(NU8 O_50576, NU8 C_50577);
N_NIMCALL(void, Initdefines_63049)(void);
N_NIMCALL(NU8, Nametocpu_50567)(NimStringDesc* Name_50569);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_24425);
N_NIMCALL(void, Writeversioninfo_72059)(NU8 Pass_72061);
N_NIMCALL(void, Writeadvancedusage_72043)(NU8 Pass_72045);
N_NIMCALL(void, Helponerror_72031)(NU8 Pass_72033);
N_NIMCALL(void, Splitswitch_72082)(NimStringDesc* Switch_72084, NimStringDesc** Cmd_72086, NimStringDesc** Arg_72087, NU8 Pass_72088, TY46536 Info_72089);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(void, Putenv_38431)(NimStringDesc* Key_38433, NimStringDesc* Val_38434);
N_NIMCALL(void, Setcc_69397)(NimStringDesc* Ccname_69399);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25205, NIM_CHAR Sub_25206, NI Start_25207);
N_NIMCALL(void, Setconfigvar_45137)(NimStringDesc* Key_45139, NimStringDesc* Val_45140);
STRING_LITERAL(TMP193623, "Nimrod Compiler Version $1 (2011-01-18) [$2: $3]\012Copyright (c) "
"2004-2011 by Andreas Rumpf\012", 90);
STRING_LITERAL(TMP193624, "0.8.11", 6);
extern NIM_CONST TY50054 Os_50053;
extern NIM_CONST TY50461 Cpu_50460;
STRING_LITERAL(TMP193625, "Usage:\012  nimrod command [options] inputfile [arguments]\012Command"
":\012  compile, c                compile project with default code "
"generator (C)\012  compileToC, cc            compile project with C"
" code generator\012  doc                       generate the documen"
"tation for inputfile\012  rst2html                  converts a reSt"
"ructuredText file to HTML\012  rst2tex                   converts a"
" reStructuredText file to TeX\012Arguments:\012  arguments are passed "
"to the program being run (if --run option is selected)\012Options:\012"
"  -p, --path:PATH           add path to search paths\012  -o, --out"
":FILE            set the output filename\012  -d, --define:SYMBOL  "
"     define a conditional symbol\012  -u, --undef:SYMBOL        und"
"efine a conditional symbol\012  -f, --forceBuild          force reb"
"uilding of all modules\012  --stackTrace:on|off       turn stack tr"
"acing on|off\012  --lineTrace:on|off        turn line tracing on|of"
"f\012  --debugger:on|off         turn Embedded Nimrod Debugger on|o"
"ff\012  -x, --checks:on|off       turn all runtime checks on|off\012  "
"--objChecks:on|off        turn obj conversion checks on|off\012  --"
"fieldChecks:on|off      turn case variant field checks on|off\012  "
"--rangeChecks:on|off      turn range checks on|off\012  --boundChec"
"ks:on|off      turn bound checks on|off\012  --overflowChecks:on|of"
"f   turn int over-/underflow checks on|off\012  -a, --assertions:on"
"|off   turn assertions on|off\012  --floatChecks:on|off      turn a"
"ll floating point (NaN/Inf) checks on|off\012  --nanChecks:on|off  "
"      turn NaN checks on|off\012  --infChecks:on|off        turn In"
"f checks on|off\012  --deadCodeElim:on|off     whole program dead c"
"ode elimination on|off\012  --opt:none|speed|size     optimize not "
"at all or for speed|size\012  --app:console|gui|lib     generate a "
"console|GUI application|dynamic library\012  -r, --run             "
"    run the compiled program with given arguments\012  --advanced  "
"              show advanced command line switches\012  -h, --help  "
"              show this help\012", 1948);
STRING_LITERAL(TMP193635, "nimrod", 6);
STRING_LITERAL(TMP193639, "lib", 3);
STRING_LITERAL(TMP193640, "", 0);
STRING_LITERAL(TMP193656, "boehmgc", 7);
STRING_LITERAL(TMP193657, "nogc", 4);
extern NIM_CONST TY46498 Hintstostr_46497;
extern NIM_CONST TY46478 Warningstostr_46477;
STRING_LITERAL(TMP193658, "endb", 4);
STRING_LITERAL(TMP193659, "profiler", 8);
STRING_LITERAL(TMP193660, "guiapp", 6);
STRING_LITERAL(TMP193661, "library", 7);
STRING_LITERAL(TMP193665, "Advanced commands:\012  compileToOC, oc           compile project "
"to Objective C code\012  run                       run the project "
"(with Tiny C backend; buggy!)\012  pretty                    pretty"
" print the inputfile\012  genDepend                 generate a DOT "
"file containing the\012                            module dependenc"
"y graph\012  listDef                   list all defined conditional"
"s and exit\012  check                     checks the project for sy"
"ntax and semantic\012  parse                     parses a single fi"
"le (for debugging Nimrod)\012Advanced options:\012  -w, --warnings:on|"
"off     turn all warnings on|off\012  --warning[X]:on|off       tur"
"n specific warning X on|off\012  --hints:on|off            turn all"
" hints on|off\012  --hint[X]:on|off          turn specific hint X o"
"n|off\012  --lib:PATH                set the system library path\012  "
"-c, --compileOnly         compile only; do not assemble or link\012"
"  --noLinking               compile but do not link\012  --noMain  "
"                do not generate a main procedure\012  --genScript  "
"             generate a compile script (in the \'nimcache\'\012      "
"                      subdirectory named \'compile_$project$scrip"
"text\')\012  --os:SYMBOL               set the target operating syst"
"em (cross-compilation)\012  --cpu:SYMBOL              set the targe"
"t processor (cross-compilation)\012  --debuginfo               enab"
"les debug information\012  -t, --passc:OPTION        pass an option"
" to the C compiler\012  -l, --passl:OPTION        pass an option to"
" the linker\012  --genMapping              generate a mapping file "
"containing\012                            (Nimrod, mangled) identif"
"ier pairs\012  --lineDir:on|off          generation of #line direct"
"ive on|off\012  --checkpoints:on|off      turn checkpoints on|off; "
"for debugging Nimrod\012  --skipCfg                 do not read the"
" general configuration file\012  --skipProjCfg             do not r"
"ead the project\'s configuration file\012  --gc:refc|boehm|none     "
" use Nimrod\'s native GC|Boehm GC|no GC\012  --index:FILE           "
"   use FILE to generate a documenation index file\012  --putenv:key"
"=value        set an environment variable\012  --listCmd           "
"      list the commands used to execute external programs\012  --pa"
"rallelBuild=0|1|...   perform a parallel build\012                 "
"           value = number of processors (0 for auto-detect)\012  --"
"verbosity:0|1|2|3       set Nimrod\'s verbosity level (0 is defau"
"lt)\012  -v, --version             show detailed version informatio"
"n\012", 2433);
NIM_BOOL Helpwritten_72028;
NIM_BOOL Versionwritten_72029;
NIM_BOOL Advhelpwritten_72030;
extern NU8 Hostos_50563;
extern NU8 Hostcpu_50561;
extern NimStringDesc* Libpath_45111;
extern TY42019 Searchpaths_45080;
extern NimStringDesc* Outfile_45081;
extern TY10790 Gch_10808;
extern NU32 Gglobaloptions_45078;
extern NU32 Goptions_45076;
extern NU32 Gnotes_46543;
extern NimStringDesc* Gindexfile_45082;
extern NU8 Targetcpu_50560;
extern NU8 Targetos_50562;
extern NI Gverbosity_45084;
extern NI Gnumberofprocessors_45085;
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI64)((NI64)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_72021)(void) {
NimStringDesc* Result_72023;
NimStringDesc* LOC1;
TY72026 LOC2;
NimStringDesc* LOC3;
Result_72023 = 0;
LOC1 = 0;
memset((void*)&LOC2, 0, sizeof(LOC2));
LOC2[0] = copyString(((NimStringDesc*) &TMP193624));
LOC2[1] = copyString(Os_50053[(Hostos_50563)-1].Name);
LOC2[2] = copyString(Cpu_50460[(Hostcpu_50561)-1].Name);
LOC3 = 0;
LOC3 = nsuFormatOpenArray(((NimStringDesc*) &TMP193623), LOC2, 3);
LOC1 = rawNewString(LOC3->Sup.len + 1948);
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP193625));
Result_72023 = LOC1;
return Result_72023;
}
N_NIMCALL(void, Writecommandlineusage_72001)(void) {
NimStringDesc* LOC4;
if (!!(Helpwritten_72028)) goto LA2;
LOC4 = 0;
LOC4 = Getcommandlinedesc_72021();
Messageout_46554(LOC4);
Helpwritten_72028 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(void, Expectarg_72211)(NimStringDesc* Switch_72213, NimStringDesc* Arg_72214, NU8 Pass_72215, TY46536 Info_72216) {
if (!((Arg_72214) && (Arg_72214)->Sup.len == 0)) goto LA2;
Limessage_46566(Info_72216, ((NU8) 42), Switch_72213);
LA2: ;
}
N_NIMCALL(NimStringDesc*, Processpath_72345)(NimStringDesc* Path_72347) {
NimStringDesc* Result_72348;
TY47016 LOC1;
NimStringDesc* LOC2;
Result_72348 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(((NimStringDesc*) &TMP193635));
LOC1[1] = Getprefixdir_45108();
LOC1[2] = copyString(((NimStringDesc*) &TMP193639));
LOC1[3] = copyString(Libpath_45111);
LOC2 = 0;
LOC2 = nsuFormatOpenArray(Path_72347, LOC1, 4);
Result_72348 = nosUnixToNativePath(LOC2);
return Result_72348;
}
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_11214))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_11215;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7407;
Result_7407 = 0;
(*Memloc_3004) += X_3005;
Result_7407 = (*Memloc_3004);
return Result_7407;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7606;
Result_7606 = 0;
(*Memloc_3009) -= X_3010;
Result_7606 = (*Memloc_3009);
return Result_7606;
}
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203) {
Addzct_11201(&Gch_10808.Zct, C_12203);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819) {
TY10402* C_12820;
NI LOC4;
TY10402* C_12822;
NI LOC9;
if (!!((Src_12819 == NIM_NIL))) goto LA2;
C_12820 = 0;
C_12820 = Usrtocell_11212(Src_12819);
LOC4 = Atomicinc_3001(&(*C_12820).Refcount, 8);
LA2: ;
if (!!(((*Dest_12818) == NIM_NIL))) goto LA6;
C_12822 = 0;
C_12822 = Usrtocell_11212((*Dest_12818));
LOC9 = Atomicdec_3006(&(*C_12822).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(void, Processcompile_72353)(NimStringDesc* Filename_72355) {
NimStringDesc* Found_72356;
NimStringDesc* Trunc_72357;
NimStringDesc* LOC4;
Found_72356 = 0;
Found_72356 = Findfile_45089(Filename_72355);
if (!((Found_72356) && (Found_72356)->Sup.len == 0)) goto LA2;
Found_72356 = copyString(Filename_72355);
LA2: ;
Trunc_72357 = 0;
Trunc_72357 = nosChangeFileExt(Found_72356, ((NimStringDesc*) &TMP193640));
Addexternalfiletocompile_69544(Found_72356);
LOC4 = 0;
LOC4 = Completecfilepath_69500(Trunc_72357, NIM_FALSE);
Addfiletolink_69559(LOC4);
}
N_NIMCALL(void, Expectnoarg_72217)(NimStringDesc* Switch_72219, NimStringDesc* Arg_72220, NU8 Pass_72221, TY46536 Info_72222) {
if (!!(((Arg_72220) && (Arg_72220)->Sup.len == 0))) goto LA2;
Limessage_46566(Info_72222, ((NU8) 43), Switch_72219);
LA2: ;
}
N_NIMCALL(void, Processonoffswitch_72159)(NU32 Op_72161, NimStringDesc* Arg_72162, NU8 Pass_72163, TY46536 Info_72164) {
NU8 LOC1;
LOC1 = Whichkeyword_71474(Arg_72162);
switch (LOC1) {
case ((NU8) 125):
Goptions_45076 = (Goptions_45076 | Op_72161);
break;
case ((NU8) 126):
Goptions_45076 = (Goptions_45076 & ~ Op_72161);
break;
default:
Limessage_46566(Info_72164, ((NU8) 47), Arg_72162);
break;
}
}
N_NIMCALL(void, Invalidcmdlineoption_72077)(NU8 Pass_72079, NimStringDesc* Switch_72080, TY46536 Info_72081) {
Limessage_46566(Info_72081, ((NU8) 41), Switch_72080);
}
N_NIMCALL(void, Processspecificnote_72223)(NimStringDesc* Arg_72225, NU8 State_72226, NU8 Pass_72227, TY46536 Info_72228) {
NimStringDesc* Id_72229;
NI I_72230;
NU8 N_72231;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI X_72305;
NI X_72313;
NimStringDesc* LOC23;
NU8 LOC24;
Id_72229 = 0;
Id_72229 = copyString(((NimStringDesc*) &TMP193640));
I_72230 = 0;
I_72230 = 0;
N_72231 = 0;
N_72231 = ((NU8) 224);
while (1) {
LOC2 = (I_72230 < (NI64)(Arg_72225->Sup.len + 0));
if (!(LOC2)) goto LA3;
LOC2 = !(((NU8)(Arg_72225->data[I_72230]) == (NU8)(93)));
LA3: ;
if (!LOC2) goto LA1;
Id_72229 = addChar(Id_72229, Arg_72225->data[I_72230]);
I_72230 += 1;
} LA1: ;
LOC5 = (I_72230 < (NI64)(Arg_72225->Sup.len + 0));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Arg_72225->data[I_72230]) == (NU8)(93));
LA6: ;
if (!LOC5) goto LA7;
I_72230 += 1;
goto LA4;
LA7: ;
Invalidcmdlineoption_72077(Pass_72227, Arg_72225, Info_72228);
LA4: ;
LOC10 = (I_72230 < (NI64)(Arg_72225->Sup.len + 0));
if (!(LOC10)) goto LA11;
LOC10 = (((NU8)(Arg_72225->data[I_72230])) == ((NU8)(58)) || ((NU8)(Arg_72225->data[I_72230])) == ((NU8)(61)));
LA11: ;
if (!LOC10) goto LA12;
I_72230 += 1;
goto LA9;
LA12: ;
Invalidcmdlineoption_72077(Pass_72227, Arg_72225, Info_72228);
LA9: ;
if (!(State_72226 == ((NU8) 96))) goto LA15;
X_72305 = 0;
X_72305 = Findstr_71477(Hintstostr_46497, 13, Id_72229);
if (!(0 <= X_72305)) goto LA18;
N_72231 = ((NU8) (((NU8) ((NI64)(X_72305 + 224)))));
goto LA17;
LA18: ;
Invalidcmdlineoption_72077(Pass_72227, Arg_72225, Info_72228);
LA17: ;
goto LA14;
LA15: ;
X_72313 = 0;
X_72313 = Findstr_71477(Warningstostr_46477, 15, Id_72229);
if (!(0 <= X_72313)) goto LA21;
N_72231 = ((NU8) (((NU8) ((NI64)(X_72313 + 209)))));
goto LA20;
LA21: ;
Invalidcmdlineoption_72077(Pass_72227, Arg_72225, Info_72228);
LA20: ;
LA14: ;
LOC23 = 0;
LOC23 = copyStr(Arg_72225, I_72230);
LOC24 = Whichkeyword_71474(LOC23);
switch (LOC24) {
case ((NU8) 125):
Gnotes_46543 |=(1<<((NI32)((((NU8) (N_72231))-209))%(sizeof(NI32)*8)));
break;
case ((NU8) 126):
Gnotes_46543 &= ~(1 << ((NI32)((((NU8) (N_72231))-209)) % (sizeof(NI32)*8)));
break;
default:
Limessage_46566(Info_72228, ((NU8) 47), Arg_72225);
break;
}
}
N_NIMCALL(void, Processonoffswitchg_72185)(NU32 Op_72187, NimStringDesc* Arg_72188, NU8 Pass_72189, TY46536 Info_72190) {
NU8 LOC1;
LOC1 = Whichkeyword_71474(Arg_72188);
switch (LOC1) {
case ((NU8) 125):
Gglobaloptions_45078 = (Gglobaloptions_45078 | Op_72187);
break;
case ((NU8) 126):
Gglobaloptions_45078 = (Gglobaloptions_45078 & ~ Op_72187);
break;
default:
Limessage_46566(Info_72190, ((NU8) 47), Arg_72188);
break;
}
}
N_NIMCALL(void, Writeversioninfo_72059)(NU8 Pass_72061) {
NIM_BOOL LOC2;
TY72026 LOC6;
NimStringDesc* LOC7;
LOC2 = (Pass_72061 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Versionwritten_72029);
LA3: ;
if (!LOC2) goto LA4;
Versionwritten_72029 = NIM_TRUE;
Helpwritten_72028 = NIM_TRUE;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(((NimStringDesc*) &TMP193624));
LOC6[1] = copyString(Os_50053[(Hostos_50563)-1].Name);
LOC6[2] = copyString(Cpu_50460[(Hostcpu_50561)-1].Name);
LOC7 = 0;
LOC7 = nsuFormatOpenArray(((NimStringDesc*) &TMP193623), LOC6, 3);
Messageout_46554(LOC7);
exit(0);
LA4: ;
}
N_NIMCALL(void, Writeadvancedusage_72043)(NU8 Pass_72045) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
TY72026 LOC7;
NimStringDesc* LOC8;
LOC2 = (Pass_72045 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Advhelpwritten_72030);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(((NimStringDesc*) &TMP193624));
LOC7[1] = copyString(Os_50053[(Hostos_50563)-1].Name);
LOC7[2] = copyString(Cpu_50460[(Hostcpu_50561)-1].Name);
LOC8 = 0;
LOC8 = nsuFormatOpenArray(((NimStringDesc*) &TMP193623), LOC7, 3);
LOC6 = rawNewString(LOC8->Sup.len + 2433);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP193665));
Messageout_46554(LOC6);
Advhelpwritten_72030 = NIM_TRUE;
Helpwritten_72028 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Helponerror_72031)(NU8 Pass_72033) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
LOC2 = (Pass_72033 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Helpwritten_72028);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
LOC6 = Getcommandlinedesc_72021();
Messageout_46554(LOC6);
Helpwritten_72028 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Splitswitch_72082)(NimStringDesc* Switch_72084, NimStringDesc** Cmd_72086, NimStringDesc** Arg_72087, NU8 Pass_72088, TY46536 Info_72089) {
NI I_72090;
NIM_BOOL LOC2;
NIM_BOOL LOC7;
unsureAsgnRef((void**) &(*Cmd_72086), copyString(((NimStringDesc*) &TMP193640)));
I_72090 = 0;
I_72090 = 0;
LOC2 = (I_72090 < Switch_72084->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Switch_72084->data[I_72090]) == (NU8)(45));
LA3: ;
if (!LOC2) goto LA4;
I_72090 += 1;
LA4: ;
LOC7 = (I_72090 < Switch_72084->Sup.len);
if (!(LOC7)) goto LA8;
LOC7 = ((NU8)(Switch_72084->data[I_72090]) == (NU8)(45));
LA8: ;
if (!LOC7) goto LA9;
I_72090 += 1;
LA9: ;
while (1) {
if (!(I_72090 < Switch_72084->Sup.len)) goto LA11;
switch (((NU8)(Switch_72084->data[I_72090]))) {
case 97 ... 122:
case 65 ... 90:
case 48 ... 57:
case 95:
case 46:
(*Cmd_72086) = addChar((*Cmd_72086), Switch_72084->data[I_72090]);
break;
default:
goto LA11;
break;
}
I_72090 += 1;
} LA11: ;
if (!(Switch_72084->Sup.len <= I_72090)) goto LA13;
unsureAsgnRef((void**) &(*Arg_72087), copyString(((NimStringDesc*) &TMP193640)));
goto LA12;
LA13: ;
if (!(((NU8)(Switch_72084->data[I_72090])) == ((NU8)(58)) || ((NU8)(Switch_72084->data[I_72090])) == ((NU8)(61)) || ((NU8)(Switch_72084->data[I_72090])) == ((NU8)(91)))) goto LA15;
unsureAsgnRef((void**) &(*Arg_72087), copyStr(Switch_72084, (NI64)(I_72090 + 1)));
goto LA12;
LA15: ;
Invalidcmdlineoption_72077(Pass_72088, Switch_72084, Info_72089);
LA12: ;
}
N_NIMCALL(void, Processswitch_72012)(NimStringDesc* Switch_72014, NimStringDesc* Arg_72015, NU8 Pass_72016, TY46536 Info_72017) {
NU8 Theos_72782;
NU8 Cpu_72783;
NimStringDesc* Key_72784;
NimStringDesc* Val_72785;
NimStringDesc* Path_72786;
NU8 LOC1;
NIM_BOOL LOC3;
NU8 LOC12;
NU8 LOC19;
NU8 LOC20;
NI LOC52;
Theos_72782 = 0;
Cpu_72783 = 0;
Key_72784 = 0;
Val_72785 = 0;
Path_72786 = 0;
LOC1 = Whichkeyword_71474(Switch_72014);
switch (LOC1) {
case ((NU8) 143):
case ((NU8) 144):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Path_72786 = Processpath_72345(Arg_72015);
LOC3 = Contains_42159(&Searchpaths_45080, Path_72786);
if (!!(LOC3)) goto LA4;
Prependstr_42071(&Searchpaths_45080, Path_72786);
LA4: ;
break;
case ((NU8) 45):
case ((NU8) 161):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
asgnRefNoCycle((void**) &Outfile_45081, copyString(Arg_72015));
break;
case ((NU8) 100):
case ((NU8) 145):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Definesymbol_63053(Arg_72015);
break;
case ((NU8) 101):
case ((NU8) 146):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Undefsymbol_63056(Arg_72015);
break;
case ((NU8) 107):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA7;
Processcompile_72353(Arg_72015);
LA7: ;
break;
case ((NU8) 106):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA10;
Addfiletolink_69559(Arg_72015);
LA10: ;
break;
case ((NU8) 147):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 9))%(sizeof(NI32)*8)));
break;
case ((NU8) 148):
case ((NU8) 176):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
break;
case ((NU8) 149):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 7))%(sizeof(NI32)*8)));
break;
case ((NU8) 196):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 18))%(sizeof(NI32)*8)));
break;
case ((NU8) 150):
case ((NU8) 151):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 1))%(sizeof(NI32)*8)));
break;
case ((NU8) 156):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC12 = Whichkeyword_71474(Arg_72015);
switch (LOC12) {
case ((NU8) 158):
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 2))%(sizeof(NI32)*8)));
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP193656));
break;
case ((NU8) 157):
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 3))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP193657));
break;
default:
Limessage_46566(Info_72017, ((NU8) 48), Arg_72015);
break;
}
break;
case ((NU8) 136):
case ((NU8) 137):
Processonoffswitch_72159(2048, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 95):
Processspecificnote_72223(Arg_72015, ((NU8) 95), Pass_72016, Info_72017);
break;
case ((NU8) 96):
Processspecificnote_72223(Arg_72015, ((NU8) 96), Pass_72016, Info_72017);
break;
case ((NU8) 138):
Processonoffswitch_72159(4096, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 195):
Processonoffswitch_72159(524288, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 103):
Processonoffswitch_72159(32768, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 104):
Processonoffswitch_72159(65536, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 114):
Processonoffswitch_72159(131072, Arg_72015, Pass_72016, Info_72017);
if (!((Goptions_45076 &(1<<((((NU8) 17))&31)))!=0)) goto LA14;
Definesymbol_63053(((NimStringDesc*) &TMP193658));
goto LA13;
LA14: ;
Undefsymbol_63056(((NimStringDesc*) &TMP193658));
LA13: ;
break;
case ((NU8) 74):
Processonoffswitch_72159(1048576, Arg_72015, Pass_72016, Info_72017);
if (!((Goptions_45076 &(1<<((((NU8) 20))&31)))!=0)) goto LA17;
Definesymbol_63053(((NimStringDesc*) &TMP193659));
goto LA16;
LA17: ;
Undefsymbol_63056(((NimStringDesc*) &TMP193659));
LA16: ;
break;
case ((NU8) 127):
case ((NU8) 187):
Processonoffswitch_72159(1022, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 132):
Processonoffswitch_72159(384, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 134):
Processonoffswitch_72159(256, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 133):
Processonoffswitch_72159(128, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 75):
Processonoffswitch_72159(2, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 186):
Processonoffswitch_72159(4, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 128):
Processonoffswitch_72159(8, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 129):
Processonoffswitch_72159(16, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 130):
Processonoffswitch_72159(32, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 102):
Processonoffswitch_72159(1024, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 135):
case ((NU8) 159):
Processonoffswitch_72159(512, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 152):
Processonoffswitchg_72185(16, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 160):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC19 = Whichkeyword_71474(Arg_72015);
switch (LOC19) {
case ((NU8) 140):
Goptions_45076 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
Goptions_45076 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
case ((NU8) 141):
Goptions_45076 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_45076 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Goptions_45076 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_45076 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
default:
Limessage_46566(Info_72017, ((NU8) 49), Arg_72015);
break;
}
break;
case ((NU8) 162):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
LOC20 = Whichkeyword_71474(Arg_72015);
switch (LOC20) {
case ((NU8) 164):
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 11))%(sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP193660));
break;
case ((NU8) 163):
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
break;
case ((NU8) 89):
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 10))%(sizeof(NI32)*8)));
Gglobaloptions_45078 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
Definesymbol_63053(((NimStringDesc*) &TMP193661));
break;
default:
Limessage_46566(Info_72017, ((NU8) 50), Arg_72015);
break;
}
break;
case ((NU8) 208):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA22;
Listsymbols_63062();
LA22: ;
break;
case ((NU8) 165):
case ((NU8) 166):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA25;
Addcompileoption_69460(Arg_72015);
LA25: ;
break;
case ((NU8) 167):
case ((NU8) 168):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA28;
Addlinkoption_69454(Arg_72015);
LA28: ;
break;
case ((NU8) 199):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!((6 &(1<<((Pass_72016)&7)))!=0)) goto LA31;
asgnRefNoCycle((void**) &Gindexfile_45082, copyString(Arg_72015));
LA31: ;
break;
case ((NU8) 28):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Addimplicitmod_45141(Arg_72015);
break;
case ((NU8) 169):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
break;
case ((NU8) 171):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
break;
case ((NU8) 172):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!(Pass_72016 == ((NU8) 0))) goto LA34;
Theos_72782 = Nametoos_50564(Arg_72015);
if (!(Theos_72782 == ((NU8) 0))) goto LA37;
Limessage_46566(Info_72017, ((NU8) 51), Arg_72015);
LA37: ;
if (!!((Theos_72782 == Hostos_50563))) goto LA40;
Settarget_50574(Theos_72782, Targetcpu_50560);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_63049();
LA40: ;
LA34: ;
break;
case ((NU8) 173):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
if (!(Pass_72016 == ((NU8) 0))) goto LA43;
Cpu_72783 = Nametocpu_50567(Arg_72015);
if (!(Cpu_72783 == ((NU8) 0))) goto LA46;
Limessage_46566(Info_72017, ((NU8) 52), Arg_72015);
LA46: ;
if (!!((Cpu_72783 == Hostcpu_50561))) goto LA49;
Settarget_50574(Targetos_50562, Cpu_72783);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_63049();
LA49: ;
LA43: ;
break;
case ((NU8) 179):
case ((NU8) 180):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 181):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gverbosity_45084 = nsuParseInt(Arg_72015);
break;
case ((NU8) 105):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gnumberofprocessors_45085 = nsuParseInt(Arg_72015);
break;
case ((NU8) 188):
case ((NU8) 182):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Writeversioninfo_72059(Pass_72016);
break;
case ((NU8) 189):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Writeadvancedusage_72043(Pass_72016);
break;
case ((NU8) 183):
case ((NU8) 184):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Helponerror_72031(Pass_72016);
break;
case ((NU8) 185):
Processonoffswitchg_72185(32768, Arg_72015, Pass_72016, Info_72017);
break;
case ((NU8) 190):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
break;
case ((NU8) 191):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 17))%(sizeof(NI32)*8)));
break;
case ((NU8) 193):
Expectnoarg_72217(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Gglobaloptions_45078 |=(1<<((NI32)(((NU8) 12))%(sizeof(NI32)*8)));
break;
case ((NU8) 89):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
asgnRefNoCycle((void**) &Libpath_45111, Processpath_72345(Arg_72015));
break;
case ((NU8) 218):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Splitswitch_72082(Arg_72015, &Key_72784, &Val_72785, Pass_72016, Info_72017);
Putenv_38431(Key_72784, Val_72785);
break;
case ((NU8) 192):
Expectarg_72211(Switch_72014, Arg_72015, Pass_72016, Info_72017);
Setcc_69397(Arg_72015);
break;
default:
LOC52 = nsuFindChar(Switch_72014, 46, 0);
if (!(0 <= LOC52)) goto LA53;
Setconfigvar_45137(Switch_72014, Arg_72015);
goto LA51;
LA53: ;
Invalidcmdlineoption_72077(Pass_72016, Switch_72014, Info_72017);
LA51: ;
break;
}
}
N_NIMCALL(NIM_BOOL, Testcompileoption_72456)(NimStringDesc* Switch_72458, TY46536 Info_72459) {
NIM_BOOL Result_72460;
NU8 LOC1;
Result_72460 = 0;
LOC1 = Whichkeyword_71474(Switch_72458);
switch (LOC1) {
case ((NU8) 147):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 148):
case ((NU8) 176):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 6))&31)))!=0);
break;
case ((NU8) 149):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 196):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 18))&31)))!=0);
break;
case ((NU8) 150):
case ((NU8) 151):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 136):
case ((NU8) 137):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 11))&31)))!=0);
break;
case ((NU8) 138):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 12))&31)))!=0);
break;
case ((NU8) 195):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 19))&31)))!=0);
break;
case ((NU8) 103):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 104):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 16))&31)))!=0);
break;
case ((NU8) 114):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 17))&31)))!=0);
break;
case ((NU8) 74):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 20))&31)))!=0);
break;
case ((NU8) 127):
case ((NU8) 187):
Result_72460 = ((Goptions_45076 & 1022) == 1022);
break;
case ((NU8) 132):
Result_72460 = ((Goptions_45076 & 384) == 384);
break;
case ((NU8) 134):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 8))&31)))!=0);
break;
case ((NU8) 133):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 75):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 186):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 128):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 129):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 130):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 5))&31)))!=0);
break;
case ((NU8) 102):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 10))&31)))!=0);
break;
case ((NU8) 135):
case ((NU8) 159):
Result_72460 = ((Goptions_45076 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 152):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 179):
case ((NU8) 180):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 185):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 193):
Result_72460 = ((Gglobaloptions_45078 &(1<<((((NU8) 12))&31)))!=0);
break;
default:
Invalidcmdlineoption_72077(((NU8) 0), Switch_72458, Info_72459);
break;
}
return Result_72460;
}
N_NIMCALL(NIM_BOOL, Testcompileoptionarg_72358)(NimStringDesc* Switch_72360, NimStringDesc* Arg_72361, TY46536 Info_72362) {
NIM_BOOL Result_72363;
NU8 LOC1;
NU8 LOC2;
NU8 LOC3;
Result_72363 = 0;
LOC1 = Whichkeyword_71474(Switch_72360);
switch (LOC1) {
case ((NU8) 156):
LOC2 = Whichkeyword_71474(Arg_72361);
switch (LOC2) {
case ((NU8) 158):
Result_72363 = ((Gglobaloptions_45078 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 157):
Result_72363 = ((Gglobaloptions_45078 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 142):
Result_72363 = ((Gglobaloptions_45078 & 12) == 0);
break;
default:
Limessage_46566(Info_72362, ((NU8) 48), Arg_72361);
break;
}
break;
case ((NU8) 160):
LOC3 = Whichkeyword_71474(Arg_72361);
switch (LOC3) {
case ((NU8) 140):
Result_72363 = ((Goptions_45076 &(1<<((((NU8) 13))&31)))!=0);
break;
case ((NU8) 141):
Result_72363 = ((Goptions_45076 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 142):
Result_72363 = ((Goptions_45076 & 24576) == 0);
break;
default:
Limessage_46566(Info_72362, ((NU8) 49), Arg_72361);
break;
}
break;
default:
Invalidcmdlineoption_72077(((NU8) 0), Switch_72360, Info_72362);
break;
}
return Result_72363;
}
N_NOINLINE(void, commandsInit)(void) {
}

