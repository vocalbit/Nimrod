/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY54529 TY54529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54527 TY54527;
typedef struct TY54547 TY54547;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY53011 TY53011;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TY54551 TY54551;
typedef struct TY46536 TY46536;
typedef struct TY54525 TY54525;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY50448 TY50448;
typedef struct TY50036 TY50036;
typedef struct TY59076 TY59076;
typedef struct TY54549 TY54549;
typedef struct TY54519 TY54519;
typedef struct TY42013 TY42013;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY50448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY50448 TY50461[12];
typedef NimStringDesc* TY50457[2];
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
struct TY59076 {
NI H;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_54746)(TY54529* X_54749);
N_NIMCALL(void, Definesymbol_63053)(NimStringDesc* Symbol_63055);
N_NIMCALL(TY53011*, Getident_53016)(NimStringDesc* Identifier_53018);
N_NIMCALL(TY54547*, Strtableget_59066)(TY54529* T_59068, TY53011* Name_59069);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
N_NIMCALL(void, objectInit)(void* Dest_19262, TNimType* Typ_19263);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(void, Strtableadd_59061)(TY54529* T_59064, TY54547* N_59065);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19003);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_23536);
N_NIMCALL(TY54547*, Inittabiter_59078)(TY59076* Ti_59081, TY54529* Tab_59082);
N_NIMCALL(void, Messageout_46554)(NimStringDesc* S_46556);
N_NIMCALL(TY54547*, Nextiter_59083)(TY59076* Ti_59086, TY54529* Tab_59087);
STRING_LITERAL(TMP193610, "nimrod", 6);
STRING_LITERAL(TMP193611, "x86", 3);
STRING_LITERAL(TMP193612, "itanium", 7);
STRING_LITERAL(TMP193613, "x8664", 5);
STRING_LITERAL(TMP193614, "msdos", 5);
STRING_LITERAL(TMP193615, "mswindows", 9);
STRING_LITERAL(TMP193616, "win32", 5);
STRING_LITERAL(TMP193617, "unix", 4);
STRING_LITERAL(TMP193618, "posix", 5);
STRING_LITERAL(TMP193619, "sunos", 5);
STRING_LITERAL(TMP193620, "bsd", 3);
STRING_LITERAL(TMP193621, "macintosh", 9);
STRING_LITERAL(TMP193622, "cpu", 3);
extern NIM_CONST TY50461 Cpu_50460;
extern NIM_CONST TY50457 Endiantostr_50456;
extern NIM_CONST TY50054 Os_50053;
STRING_LITERAL(TMP193661, "-- List of currently defined symbols --", 39);
STRING_LITERAL(TMP193662, "-- End of list --", 17);
TY54529 Gsymbols_63001;
extern TNimType* NTI54529; /* TStrTable */
extern TNimType* NTI54523; /* PSym */
extern TNimType* NTI54547; /* TSym */
extern TY10790 Gch_10808;
extern NU8 Targetcpu_50560;
extern NU8 Targetos_50562;
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
N_NIMCALL(void, Definesymbol_63053)(NimStringDesc* Symbol_63055) {
TY53011* I_63069;
TY54547* Sym_63070;
I_63069 = 0;
I_63069 = Getident_53016(Symbol_63055);
Sym_63070 = 0;
Sym_63070 = Strtableget_59066(&Gsymbols_63001, I_63069);
if (!(Sym_63070 == NIM_NIL)) goto LA2;
Sym_63070 = (TY54547*) newObj(NTI54523, sizeof(TY54547));
objectInit(Sym_63070, NTI54547);
(*Sym_63070).Kind = ((NU8) 1);
asgnRefNoCycle((void**) &(*Sym_63070).Name, I_63069);
Strtableadd_59061(&Gsymbols_63001, Sym_63070);
LA2: ;
(*Sym_63070).Position = 1;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI64)((NI64)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
N_NIMCALL(void, Initdefines_63049)(void) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Initstrtable_54746(&Gsymbols_63001);
Definesymbol_63053(((NimStringDesc*) &TMP193610));
switch (Targetcpu_50560) {
case ((NU8) 1):
Definesymbol_63053(((NimStringDesc*) &TMP193611));
break;
case ((NU8) 7):
Definesymbol_63053(((NimStringDesc*) &TMP193612));
break;
case ((NU8) 8):
Definesymbol_63053(((NimStringDesc*) &TMP193613));
break;
default:
break;
}
switch (Targetos_50562) {
case ((NU8) 1):
Definesymbol_63053(((NimStringDesc*) &TMP193614));
break;
case ((NU8) 2):
Definesymbol_63053(((NimStringDesc*) &TMP193615));
Definesymbol_63053(((NimStringDesc*) &TMP193616));
break;
case ((NU8) 4):
case ((NU8) 5):
case ((NU8) 6):
case ((NU8) 8):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 16):
case ((NU8) 12):
Definesymbol_63053(((NimStringDesc*) &TMP193617));
Definesymbol_63053(((NimStringDesc*) &TMP193618));
break;
case ((NU8) 7):
Definesymbol_63053(((NimStringDesc*) &TMP193619));
Definesymbol_63053(((NimStringDesc*) &TMP193617));
Definesymbol_63053(((NimStringDesc*) &TMP193618));
break;
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
Definesymbol_63053(((NimStringDesc*) &TMP193617));
Definesymbol_63053(((NimStringDesc*) &TMP193620));
Definesymbol_63053(((NimStringDesc*) &TMP193618));
break;
case ((NU8) 18):
Definesymbol_63053(((NimStringDesc*) &TMP193621));
break;
case ((NU8) 19):
Definesymbol_63053(((NimStringDesc*) &TMP193621));
Definesymbol_63053(((NimStringDesc*) &TMP193617));
Definesymbol_63053(((NimStringDesc*) &TMP193618));
break;
default:
break;
}
LOC1 = 0;
LOC2 = 0;
LOC2 = nimIntToStr(Cpu_50460[(Targetcpu_50560)-1].Bit);
LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &TMP193622));
appendString(LOC1, LOC2);
Definesymbol_63053(LOC1);
LOC3 = 0;
LOC3 = nsuNormalize(Endiantostr_50456[(Cpu_50460[(Targetcpu_50560)-1].Endian)-0]);
Definesymbol_63053(LOC3);
Definesymbol_63053(Cpu_50460[(Targetcpu_50560)-1].Name);
Definesymbol_63053(Os_50053[(Targetos_50562)-1].Name);
}
N_NIMCALL(void, Undefsymbol_63056)(NimStringDesc* Symbol_63058) {
TY54547* Sym_63101;
TY53011* LOC1;
Sym_63101 = 0;
LOC1 = 0;
LOC1 = Getident_53016(Symbol_63058);
Sym_63101 = Strtableget_59066(&Gsymbols_63001, LOC1);
if (!!((Sym_63101 == NIM_NIL))) goto LA3;
(*Sym_63101).Position = 0;
LA3: ;
}
N_NIMCALL(void, Listsymbols_63062)(void) {
TY59076 It_63133;
TY54547* S_63135;
memset((void*)&It_63133, 0, sizeof(It_63133));
S_63135 = 0;
S_63135 = Inittabiter_59078(&It_63133, &Gsymbols_63001);
Messageout_46554(((NimStringDesc*) &TMP193661));
while (1) {
if (!!((S_63135 == NIM_NIL))) goto LA1;
if (!((*S_63135).Position == 1)) goto LA3;
Messageout_46554((*(*S_63135).Name).S);
LA3: ;
S_63135 = Nextiter_59083(&It_63133, &Gsymbols_63001);
} LA1: ;
Messageout_46554(((NimStringDesc*) &TMP193662));
}
N_NIMCALL(NIM_BOOL, Isdefined_63059)(TY53011* Symbol_63061) {
NIM_BOOL Result_63116;
TY54547* Sym_63117;
NIM_BOOL LOC1;
Result_63116 = 0;
Sym_63117 = 0;
Sym_63117 = Strtableget_59066(&Gsymbols_63001, Symbol_63061);
LOC1 = !((Sym_63117 == NIM_NIL));
if (!(LOC1)) goto LA2;
LOC1 = ((*Sym_63117).Position == 1);
LA2: ;
Result_63116 = LOC1;
return Result_63116;
}
N_NIMCALL(NI, Countdefinedsymbols_63064)(void) {
NI Result_63152;
TY59076 It_63153;
TY54547* S_63155;
Result_63152 = 0;
memset((void*)&It_63153, 0, sizeof(It_63153));
S_63155 = 0;
S_63155 = Inittabiter_59078(&It_63153, &Gsymbols_63001);
Result_63152 = 0;
while (1) {
if (!!((S_63155 == NIM_NIL))) goto LA1;
if (!((*S_63155).Position == 1)) goto LA3;
Result_63152 += 1;
LA3: ;
S_63155 = Nextiter_59083(&It_63153, &Gsymbols_63001);
} LA1: ;
return Result_63152;
}
N_NOINLINE(void, condsymsInit)(void) {
Gsymbols_63001.m_type = NTI54529;
}

