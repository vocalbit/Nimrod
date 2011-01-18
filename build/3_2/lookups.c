/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY54547 TY54547;
typedef struct TY106012 TY106012;
typedef struct TY54525 TY54525;
typedef struct TY54551 TY54551;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46536 TY46536;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY59104 TY59104;
typedef struct TY59106 TY59106;
typedef struct TY54529 TY54529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54527 TY54527;
typedef struct TY104002 TY104002;
typedef struct TNimObject TNimObject;
typedef struct TY106006 TY106006;
typedef struct TY54900 TY54900;
typedef struct TY54896 TY54896;
typedef struct TY54898 TY54898;
typedef struct TY42019 TY42019;
typedef struct TY42013 TY42013;
typedef struct TY53005 TY53005;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY107004 TY107004;
typedef struct TY59089 TY59089;
typedef struct TY59076 TY59076;
typedef struct TY54549 TY54549;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54525 {
TY54551* Typ;
NimStringDesc* Comment;
TY46536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54547* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54519* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TY59104 {
NI Tos;
TY59106* Stack;
};
struct TNimObject {
TNimType* m_type;
};
struct TY104002 {
  TNimObject Sup;
};
struct TY54900 {
NI Counter;
NI Max;
TY54896* Head;
TY54898* Data;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY54525*, TY106032) (TY106012* C_106033, TY54525* N_106034);
typedef N_NIMCALL_PTR(TY54525*, TY106037) (TY106012* C_106038, TY54525* N_106039);
struct TY106012 {
  TY104002 Sup;
TY54547* Module;
TY106006* P;
NI Instcounter;
TY54525* Generics;
NI Lastgenericidx;
TY59104 Tab;
TY54900 Ambiguoussymbols;
TY54527* Converters;
TY42019 Optionstack;
TY42019 Libs;
NIM_BOOL Fromcache;
TY106032 Semconstexpr;
TY106037 Semexpr;
TY54900 Includedfiles;
NimStringDesc* Filename;
TY54529 Userpragmas;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
};
struct TY54547 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54551* Typ;
TY53011* Name;
TY46536 Info;
TY54547* Owner;
NU32 Flags;
TY54529 Tab;
TY54525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54539 Loc;
TY54543* Annex;
};
struct TY59089 {
NI H;
TY53011* Name;
};
struct TY107004 {
NI Stackptr;
TY59089 It;
TY54547* M;
NU8 Mode;
};
struct TY59076 {
NI H;
};
struct TY54551 {
  TY53005 Sup;
NU8 Kind;
TY54549* Sons;
TY54525* N;
NU8 Flags;
NU8 Callconv;
TY54547* Owner;
TY54547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54539 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY106006 {
TY54547* Owner;
TY54547* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8414[8];
struct TY54896 {
TY54896* Next;
NI Key;
TY8414 Bits;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY59106 {
  TGenericSeq Sup;
  TY54529 data[SEQ_DECL_SIZE];
};
struct TY54898 {
  TGenericSeq Sup;
  TY54896* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY54547*, Lookup_107049)(TY106012* C_107051, TY54525* N_107052);
N_NIMCALL(TY54547*, Symtabget_59116)(TY59104 Tab_59118, TY53011* S_59119);
N_NIMCALL(void, Limessage_46566)(TY46536 Info_46568, NU8 Msg_46569, NimStringDesc* Arg_46570);
N_NIMCALL(void, Internalerror_46571)(TY46536 Info_46573, NimStringDesc* Errmsg_46574);
N_NIMCALL(NIM_BOOL, Intsetcontains_54910)(TY54900* S_54912, NI Key_54913);
N_NIMCALL(void, Loadstub_92070)(TY54547* S_92072);
N_NIMCALL(TY54547*, Initidentiter_59092)(TY59089* Ti_59095, TY54529* Tab_59096, TY53011* S_59097);
N_NIMCALL(TY54547*, Qualifiedlookup_107053)(TY106012* C_107055, TY54525* N_107056, NIM_BOOL Ambiguouscheck_107057);
N_NIMCALL(TY54547*, Strtableget_59066)(TY54529* T_59068, TY53011* Name_59069);
N_NIMCALL(NimStringDesc*, Rendertree_84042)(TY54525* N_84044, NU8 Renderflags_84047);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(TY54547*, Initoverloaditer_107058)(TY107004* O_107061, TY106012* C_107062, TY54525* N_107063);
N_NIMCALL(TY54547*, Nextoverloaditer_107064)(TY107004* O_107067, TY106012* C_107068, TY54525* N_107069);
N_NIMCALL(TY54547*, Nextidentiter_59098)(TY59089* Ti_59101, TY54529* Tab_59102);
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805);
N_NIMCALL(NU8, Symtabaddunique_59135)(TY59104* Tab_59138, TY54547* E_59139);
N_NIMCALL(NU8, Symtabadduniqueat_59140)(TY59104* Tab_59143, TY54547* E_59144, NI At_59145);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
N_NIMCALL(TY54547*, Inittabiter_59078)(TY59076* Ti_59081, TY54529* Tab_59082);
N_NIMCALL(NimStringDesc*, Getsymrepr_107014)(TY54547* S_107016);
N_NIMCALL(NimStringDesc*, Getprocheader_96018)(TY54547* Sym_96020);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(TY54547*, Nextiter_59083)(TY59076* Ti_59086, TY54529* Tab_59087);
N_NIMCALL(void, Rawclosescope_59150)(TY59104* Tab_59153);
N_NIMCALL(void, Adddecl_107026)(TY106012* C_107028, TY54547* Sym_107029);
N_NIMCALL(void, Addinterfacedeclaux_107197)(TY106012* C_107199, TY54547* Sym_107200);
N_NIMCALL(void, Strtableadd_59061)(TY54529* T_59064, TY54547* N_59065);
N_NIMCALL(TY54547*, Getcurrowner_106107)(void);
N_NIMCALL(void, Addoverloadablesymat_107035)(TY106012* C_107037, TY54547* Fn_107038, NI At_107039);
N_NIMCALL(void, Symtabaddat_59129)(TY59104* Tab_59132, TY54547* E_59133, NI At_59134);
N_NIMCALL(void, Adddeclat_107030)(TY106012* C_107032, TY54547* Sym_107033, NI At_107034);
STRING_LITERAL(TMP193922, "lookUp", 6);
STRING_LITERAL(TMP194111, "CloseScope", 10);
STRING_LITERAL(TMP194142, "AddInterfaceDeclAux", 19);
STRING_LITERAL(TMP194169, "addOverloadableSymAt", 20);
N_NIMCALL(TY54547*, Lookup_107049)(TY106012* C_107051, TY54525* N_107052) {
TY54547* Result_107303;
NIM_BOOL LOC5;
Result_107303 = 0;
switch ((*N_107052).Kind) {
case ((NU8) 43):
Result_107303 = Lookup_107049(C_107051, (*N_107052).KindU.S6.Sons->data[0]);
break;
case ((NU8) 3):
Result_107303 = (*N_107052).KindU.S4.Sym;
break;
case ((NU8) 2):
Result_107303 = Symtabget_59116((*C_107051).Tab, (*N_107052).KindU.S5.Ident);
if (!(Result_107303 == NIM_NIL)) goto LA2;
Limessage_46566((*N_107052).Info, ((NU8) 58), (*(*N_107052).KindU.S5.Ident).S);
LA2: ;
break;
default:
Internalerror_46571((*N_107052).Info, ((NimStringDesc*) &TMP193922));
break;
}
LOC5 = Intsetcontains_54910(&(*C_107051).Ambiguoussymbols, (*Result_107303).Sup.Id);
if (!LOC5) goto LA6;
Limessage_46566((*N_107052).Info, ((NU8) 59), (*(*Result_107303).Name).S);
LA6: ;
if (!((*Result_107303).Kind == ((NU8) 20))) goto LA9;
Loadstub_92070(Result_107303);
LA9: ;
return Result_107303;
}
N_NIMCALL(TY54547*, Qualifiedlookup_107053)(TY106012* C_107055, TY54525* N_107056, NIM_BOOL Ambiguouscheck_107057) {
TY54547* Result_107377;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
TY54547* M_107461;
NIM_BOOL LOC14;
TY53011* Ident_107482;
NIM_BOOL LOC21;
NimStringDesc* LOC34;
NIM_BOOL LOC36;
Result_107377 = 0;
switch ((*N_107056).Kind) {
case ((NU8) 2):
Result_107377 = Symtabget_59116((*C_107055).Tab, (*N_107056).KindU.S5.Ident);
if (!(Result_107377 == NIM_NIL)) goto LA2;
Limessage_46566((*N_107056).Info, ((NU8) 58), (*(*N_107056).KindU.S5.Ident).S);
goto LA1;
LA2: ;
LOC4 = Ambiguouscheck_107057;
if (!(LOC4)) goto LA5;
LOC4 = Intsetcontains_54910(&(*C_107055).Ambiguoussymbols, (*Result_107377).Sup.Id);
LA5: ;
if (!LOC4) goto LA6;
Limessage_46566((*N_107056).Info, ((NU8) 59), (*(*N_107056).KindU.S5.Ident).S);
goto LA1;
LA6: ;
LA1: ;
break;
case ((NU8) 3):
Result_107377 = (*N_107056).KindU.S4.Sym;
LOC9 = Ambiguouscheck_107057;
if (!(LOC9)) goto LA10;
LOC9 = Intsetcontains_54910(&(*C_107055).Ambiguoussymbols, (*Result_107377).Sup.Id);
LA10: ;
if (!LOC9) goto LA11;
Limessage_46566((*N_107056).Info, ((NU8) 59), (*(*(*N_107056).KindU.S4.Sym).Name).S);
LA11: ;
break;
case ((NU8) 36):
Result_107377 = NIM_NIL;
M_107461 = 0;
M_107461 = Qualifiedlookup_107053(C_107055, (*N_107056).KindU.S6.Sons->data[0], NIM_FALSE);
LOC14 = !((M_107461 == NIM_NIL));
if (!(LOC14)) goto LA15;
LOC14 = ((*M_107461).Kind == ((NU8) 6));
LA15: ;
if (!LOC14) goto LA16;
Ident_107482 = 0;
Ident_107482 = NIM_NIL;
if (!((*(*N_107056).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA19;
Ident_107482 = (*(*N_107056).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA18;
LA19: ;
LOC21 = ((*(*N_107056).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC21)) goto LA22;
LOC21 = ((*(*(*N_107056).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA22: ;
if (!LOC21) goto LA23;
Ident_107482 = (*(*(*N_107056).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA18;
LA23: ;
LA18: ;
if (!!((Ident_107482 == NIM_NIL))) goto LA26;
if (!(M_107461 == (*C_107055).Module)) goto LA29;
Result_107377 = Strtableget_59066(&(*C_107055).Tab.Stack->data[1], Ident_107482);
goto LA28;
LA29: ;
Result_107377 = Strtableget_59066(&(*M_107461).Tab, Ident_107482);
LA28: ;
if (!(Result_107377 == NIM_NIL)) goto LA32;
Limessage_46566((*(*N_107056).KindU.S6.Sons->data[1]).Info, ((NU8) 58), (*Ident_107482).S);
LA32: ;
goto LA25;
LA26: ;
LOC34 = 0;
LOC34 = Rendertree_84042((*N_107056).KindU.S6.Sons->data[1], 0);
Limessage_46566((*(*N_107056).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC34);
LA25: ;
LA16: ;
break;
case ((NU8) 43):
Result_107377 = Qualifiedlookup_107053(C_107055, (*N_107056).KindU.S6.Sons->data[0], Ambiguouscheck_107057);
break;
default:
Result_107377 = NIM_NIL;
break;
}
LOC36 = !((Result_107377 == NIM_NIL));
if (!(LOC36)) goto LA37;
LOC36 = ((*Result_107377).Kind == ((NU8) 20));
LA37: ;
if (!LOC36) goto LA38;
Loadstub_92070(Result_107377);
LA38: ;
return Result_107377;
}
N_NIMCALL(TY54547*, Initoverloaditer_107058)(TY107004* O_107061, TY106012* C_107062, TY54525* N_107063) {
TY54547* Result_107723;
TY53011* Ident_107724;
NIM_BOOL LOC6;
NIM_BOOL LOC13;
NimStringDesc* LOC23;
NIM_BOOL LOC25;
Result_107723 = 0;
Ident_107724 = 0;
Result_107723 = NIM_NIL;
switch ((*N_107063).Kind) {
case ((NU8) 2):
(*O_107061).Stackptr = ((NI) ((*C_107062).Tab.Tos));
(*O_107061).Mode = ((NU8) 1);
while (1) {
if (!(Result_107723 == NIM_NIL)) goto LA1;
(*O_107061).Stackptr -= 1;
if (!((*O_107061).Stackptr < 0)) goto LA3;
goto LA1;
LA3: ;
Result_107723 = Initidentiter_59092(&(*O_107061).It, &(*C_107062).Tab.Stack->data[(*O_107061).Stackptr], (*N_107063).KindU.S5.Ident);
} LA1: ;
break;
case ((NU8) 3):
Result_107723 = (*N_107063).KindU.S4.Sym;
(*O_107061).Mode = ((NU8) 0);
break;
case ((NU8) 36):
(*O_107061).Mode = ((NU8) 3);
unsureAsgnRef((void**) &(*O_107061).M, Qualifiedlookup_107053(C_107062, (*N_107063).KindU.S6.Sons->data[0], NIM_FALSE));
LOC6 = !(((*O_107061).M == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*O_107061).M).Kind == ((NU8) 6));
LA7: ;
if (!LOC6) goto LA8;
Ident_107724 = NIM_NIL;
if (!((*(*N_107063).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA11;
Ident_107724 = (*(*N_107063).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA10;
LA11: ;
LOC13 = ((*(*N_107063).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC13)) goto LA14;
LOC13 = ((*(*(*N_107063).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA14: ;
if (!LOC13) goto LA15;
Ident_107724 = (*(*(*N_107063).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA10;
LA15: ;
LA10: ;
if (!!((Ident_107724 == NIM_NIL))) goto LA18;
if (!((*O_107061).M == (*C_107062).Module)) goto LA21;
Result_107723 = Initidentiter_59092(&(*O_107061).It, &(*C_107062).Tab.Stack->data[1], Ident_107724);
(*O_107061).Mode = ((NU8) 2);
goto LA20;
LA21: ;
Result_107723 = Initidentiter_59092(&(*O_107061).It, &(*(*O_107061).M).Tab, Ident_107724);
LA20: ;
goto LA17;
LA18: ;
LOC23 = 0;
LOC23 = Rendertree_84042((*N_107063).KindU.S6.Sons->data[1], 0);
Limessage_46566((*(*N_107063).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC23);
LA17: ;
LA8: ;
break;
case ((NU8) 43):
Result_107723 = Initoverloaditer_107058(O_107061, C_107062, (*N_107063).KindU.S6.Sons->data[0]);
break;
case ((NU8) 46):
(*O_107061).Mode = ((NU8) 4);
Result_107723 = (*(*N_107063).KindU.S6.Sons->data[0]).KindU.S4.Sym;
(*O_107061).Stackptr = 1;
break;
default:
break;
}
LOC25 = !((Result_107723 == NIM_NIL));
if (!(LOC25)) goto LA26;
LOC25 = ((*Result_107723).Kind == ((NU8) 20));
LA26: ;
if (!LOC25) goto LA27;
Loadstub_92070(Result_107723);
LA27: ;
return Result_107723;
}
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805) {
NI Result_55880;
Result_55880 = 0;
if (!(*N_54805).KindU.S6.Sons == 0) goto LA2;
Result_55880 = 0;
goto LA1;
LA2: ;
Result_55880 = (*N_54805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_55880;
}
N_NIMCALL(TY54547*, Nextoverloaditer_107064)(TY107004* O_107067, TY106012* C_107068, TY54525* N_107069) {
TY54547* Result_108050;
NI LOC11;
NIM_BOOL LOC15;
Result_108050 = 0;
switch ((*O_107067).Mode) {
case ((NU8) 0):
Result_108050 = NIM_NIL;
break;
case ((NU8) 1):
if (!((*N_107069).Kind == ((NU8) 43))) goto LA2;
Result_108050 = Nextoverloaditer_107064(O_107067, C_107068, (*N_107069).KindU.S6.Sons->data[0]);
goto LA1;
LA2: ;
if (!(0 <= (*O_107067).Stackptr)) goto LA4;
Result_108050 = Nextidentiter_59098(&(*O_107067).It, &(*C_107068).Tab.Stack->data[(*O_107067).Stackptr]);
while (1) {
if (!(Result_108050 == NIM_NIL)) goto LA6;
(*O_107067).Stackptr -= 1;
if (!((*O_107067).Stackptr < 0)) goto LA8;
goto LA6;
LA8: ;
Result_108050 = Initidentiter_59092(&(*O_107067).It, &(*C_107068).Tab.Stack->data[(*O_107067).Stackptr], (*O_107067).It.Name);
} LA6: ;
goto LA1;
LA4: ;
Result_108050 = NIM_NIL;
LA1: ;
break;
case ((NU8) 2):
Result_108050 = Nextidentiter_59098(&(*O_107067).It, &(*C_107068).Tab.Stack->data[1]);
break;
case ((NU8) 3):
Result_108050 = Nextidentiter_59098(&(*O_107067).It, &(*(*O_107067).M).Tab);
break;
case ((NU8) 4):
LOC11 = Sonslen_54803(N_107069);
if (!((*O_107067).Stackptr < LOC11)) goto LA12;
Result_108050 = (*(*N_107069).KindU.S6.Sons->data[(*O_107067).Stackptr]).KindU.S4.Sym;
(*O_107067).Stackptr += 1;
goto LA10;
LA12: ;
Result_108050 = NIM_NIL;
LA10: ;
break;
}
LOC15 = !((Result_108050 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = ((*Result_108050).Kind == ((NU8) 20));
LA16: ;
if (!LOC15) goto LA17;
Loadstub_92070(Result_108050);
LA17: ;
return Result_108050;
}
N_NIMCALL(void, Adddecl_107026)(TY106012* C_107028, TY54547* Sym_107029) {
NU8 LOC2;
LOC2 = Symtabaddunique_59135(&(*C_107028).Tab, Sym_107029);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_46566((*Sym_107029).Info, ((NU8) 37), (*(*Sym_107029).Name).S);
LA3: ;
}
N_NIMCALL(void, Adddeclat_107030)(TY106012* C_107032, TY54547* Sym_107033, NI At_107034) {
NU8 LOC2;
LOC2 = Symtabadduniqueat_59140(&(*C_107032).Tab, Sym_107033, At_107034);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_46566((*Sym_107033).Info, ((NU8) 37), (*(*Sym_107033).Name).S);
LA3: ;
}
N_NIMCALL(NimStringDesc*, Getsymrepr_107014)(TY54547* S_107016) {
NimStringDesc* Result_107073;
Result_107073 = 0;
switch ((*S_107016).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 12):
Result_107073 = Getprocheader_96018(S_107016);
break;
default:
Result_107073 = copyString((*(*S_107016).Name).S);
break;
}
return Result_107073;
}
N_NIMCALL(void, Closescope_107017)(TY59104* Tab_107020) {
TY59076 It_107078;
TY54547* S_107079;
NimStringDesc* LOC8;
NIM_BOOL LOC9;
NimStringDesc* LOC16;
memset((void*)&It_107078, 0, sizeof(It_107078));
S_107079 = 0;
if (!((*Tab_107020).Stack->Sup.len < ((NI) ((*Tab_107020).Tos)))) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP194111));
LA2: ;
S_107079 = Inittabiter_59078(&It_107078, &(*Tab_107020).Stack->data[(NI64)(((NI) ((*Tab_107020).Tos)) - 1)]);
while (1) {
if (!!((S_107079 == NIM_NIL))) goto LA4;
if (!(((*S_107079).Flags &(1<<((((NU8) 6))&31)))!=0)) goto LA6;
LOC8 = 0;
LOC8 = Getsymrepr_107014(S_107079);
Limessage_46566((*S_107079).Info, ((NU8) 135), LOC8);
goto LA5;
LA6: ;
LOC9 = ((9 & (*S_107079).Flags) == 0);
if (!(LOC9)) goto LA10;
LOC9 = (((*S_107079).Options &(1<<((((NU8) 12))&31)))!=0);
LA10: ;
if (!LOC9) goto LA11;
if (!!(((264201 &(1<<(((*S_107079).Kind)&31)))!=0))) goto LA14;
LOC16 = 0;
LOC16 = Getsymrepr_107014(S_107079);
Limessage_46566((*S_107079).Info, ((NU8) 227), LOC16);
LA14: ;
goto LA5;
LA11: ;
LA5: ;
S_107079 = Nextiter_59083(&It_107078, &(*Tab_107020).Stack->data[(NI64)(((NI) ((*Tab_107020).Tos)) - 1)]);
} LA4: ;
Rawclosescope_59150(Tab_107020);
}
N_NIMCALL(void, Addinterfacedeclaux_107197)(TY106012* C_107199, TY54547* Sym_107200) {
TY54547* LOC8;
if (!(((*Sym_107200).Flags &(1<<((((NU8) 3))&31)))!=0)) goto LA2;
if (!((*C_107199).Module == NIM_NIL)) goto LA5;
Internalerror_46571((*Sym_107200).Info, ((NimStringDesc*) &TMP194142));
LA5: ;
Strtableadd_59061(&(*(*C_107199).Module).Tab, Sym_107200);
LA2: ;
LOC8 = 0;
LOC8 = Getcurrowner_106107();
if (!((*LOC8).Kind == ((NU8) 6))) goto LA9;
(*Sym_107200).Flags |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
LA9: ;
}
N_NIMCALL(void, Addinterfacedecl_107040)(TY106012* C_107042, TY54547* Sym_107043) {
Adddecl_107026(C_107042, Sym_107043);
Addinterfacedeclaux_107197(C_107042, Sym_107043);
}
N_NIMCALL(void, Addoverloadablesymat_107035)(TY106012* C_107037, TY54547* Fn_107038, NI At_107039) {
TY54547* Check_107266;
NIM_BOOL LOC5;
if (!!(((15424 &(1<<(((*Fn_107038).Kind)&31)))!=0))) goto LA2;
Internalerror_46571((*Fn_107038).Info, ((NimStringDesc*) &TMP194169));
LA2: ;
Check_107266 = 0;
Check_107266 = Strtableget_59066(&(*C_107037).Tab.Stack->data[At_107039], (*Fn_107038).Name);
LOC5 = !((Check_107266 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !(((15424 &(1<<(((*Check_107266).Kind)&31)))!=0));
LA6: ;
if (!LOC5) goto LA7;
Limessage_46566((*Fn_107038).Info, ((NU8) 37), (*(*Fn_107038).Name).S);
LA7: ;
Symtabaddat_59129(&(*C_107037).Tab, Fn_107038, At_107039);
}
N_NIMCALL(void, Addinterfaceoverloadablesymat_107044)(TY106012* C_107046, TY54547* Sym_107047, NI At_107048) {
Addoverloadablesymat_107035(C_107046, Sym_107047, ((NI) (At_107048)));
Addinterfacedeclaux_107197(C_107046, Sym_107047);
}
N_NIMCALL(void, Addinterfacedeclat_107245)(TY106012* C_107247, TY54547* Sym_107248, NI At_107249) {
Adddeclat_107030(C_107247, Sym_107248, At_107249);
Addinterfacedeclaux_107197(C_107247, Sym_107248);
}
N_NOINLINE(void, lookupsInit)(void) {
}

