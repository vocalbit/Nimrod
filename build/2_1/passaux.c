/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY104006 TY104006;
typedef struct TY104002 TY104002;
typedef struct TY54547 TY54547;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY92031 TY92031;
typedef struct TY54525 TY54525;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54551 TY54551;
typedef struct TY53011 TY53011;
typedef struct TY46536 TY46536;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY54519 TY54519;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY38221 TY38221;
typedef struct TY92029 TY92029;
typedef struct TY59220 TY59220;
typedef struct TY59218 TY59218;
typedef struct TY59216 TY59216;
typedef struct TY54563 TY54563;
typedef struct TY54561 TY54561;
typedef struct TY54559 TY54559;
typedef struct TY54549 TY54549;
typedef struct TY42013 TY42013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY104002*, TY104007) (TY54547* Module_104008, NimStringDesc* Filename_104009);
typedef N_NIMCALL_PTR(TY104002*, TY104012) (TY54547* Module_104013, NimStringDesc* Filename_104014, TY92031* Rd_104015);
typedef N_NIMCALL_PTR(TY54525*, TY104018) (TY104002* P_104019, TY54525* N_104020);
typedef N_NIMCALL_PTR(TY54525*, TY104023) (TY104002* P_104024, TY54525* Toplevelstmt_104025);
struct TY104006 {
TY104007 Open;
TY104012 Opencached;
TY104018 Close;
TY104023 Process;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
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
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
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
struct TY104002 {
  TNimObject Sup;
};
struct TY59216 {
NI Key;
NI Val;
};
struct TY59220 {
NI Counter;
TY59218* Data;
};
struct TY92029 {
NI Lastidxkey;
NI Lastidxval;
TY59220 Tab;
TY51008* R;
NI Offset;
};
struct TY54559 {
TY53005* Key;
TNimObject* Val;
};
struct TY54563 {
NI Counter;
TY54561* Data;
};
struct TY92031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY38221* Moddeps;
TY38221* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY92029 Index;
TY92029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY54563 Syms;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY38221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY59218 {
  TGenericSeq Sup;
  TY59216 data[SEQ_DECL_SIZE];
};
struct TY54561 {
  TGenericSeq Sup;
  TY54559 data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_104031)(TY104006* P_104034);
N_NIMCALL(TY104002*, Verboseopen_184008)(TY54547* S_184010, NimStringDesc* Filename_184011);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc* Arg_46560);
N_NIMCALL(TY54525*, Verboseprocess_184015)(TY104002* Context_184017, TY54525* N_184018);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
N_NIMCALL(void, Limessage_46566)(TY46536 Info_46568, NU8 Msg_46569, NimStringDesc* Arg_46570);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19003);
N_NIMCALL(TY54525*, Cleanup_184039)(TY104002* C_184041, TY54525* N_184042);
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805);
N_NIMCALL(TY54547*, Getmodule_59203)(TY54547* S_59205);
N_NIMCALL(NIM_BOOL, Astneeded_104041)(TY54547* S_104043);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
STRING_LITERAL(TMP193914, "logpass: context is not nil", 27);
extern NI Gverbosity_45084;
extern NI Gid_54692;
extern NU32 Gglobaloptions_45078;
extern TY10790 Gch_10808;
N_NIMCALL(TY104002*, Verboseopen_184008)(TY54547* S_184010, NimStringDesc* Filename_184011) {
TY104002* Result_184012;
Result_184012 = 0;
Result_184012 = NIM_NIL;
if (!(0 < Gverbosity_45084)) goto LA2;
Rawmessage_46557(((NU8) 232), (*(*S_184010).Name).S);
LA2: ;
return Result_184012;
}
N_NIMCALL(TY54525*, Verboseprocess_184015)(TY104002* Context_184017, TY54525* N_184018) {
TY54525* Result_184019;
NimStringDesc* LOC7;
Result_184019 = 0;
Result_184019 = N_184018;
if (!!((Context_184017 == NIM_NIL))) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP193914));
LA2: ;
if (!(Gverbosity_45084 == 3)) goto LA5;
LOC7 = 0;
LOC7 = nimIntToStr(Gid_54692);
Limessage_46566((*N_184018).Info, ((NU8) 232), LOC7);
LA5: ;
return Result_184019;
}
N_NIMCALL(TY104006, Verbosepass_184004)(void) {
TY104006 Result_184037;
memset((void*)&Result_184037, 0, sizeof(Result_184037));
Initpass_104031(&Result_184037);
Result_184037.Open = Verboseopen_184008;
Result_184037.Process = Verboseprocess_184015;
return Result_184037;
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
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_11214))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(TY54525*, Cleanup_184039)(TY104002* C_184041, TY54525* N_184042) {
TY54525* Result_184043;
TY54547* S_184044;
NI I_184078;
NI HEX3Atmp_184159;
NI LOC4;
NI Res_184161;
TY54525* LOC6;
NIM_BOOL LOC11;
TY54547* LOC12;
NIM_BOOL LOC14;
Result_184043 = 0;
S_184044 = 0;
Result_184043 = N_184042;
if (!((Gglobaloptions_45078 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_184042).Kind) {
case ((NU8) 101):
I_184078 = 0;
HEX3Atmp_184159 = 0;
LOC4 = Sonslen_54803(N_184042);
HEX3Atmp_184159 = (NI32)(LOC4 - 1);
Res_184161 = 0;
Res_184161 = 0;
while (1) {
if (!(Res_184161 <= HEX3Atmp_184159)) goto LA5;
I_184078 = Res_184161;
LOC6 = 0;
LOC6 = Cleanup_184039(C_184041, (*N_184042).KindU.S6.Sons->data[I_184078]);
Res_184161 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_184042).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_184044 = (*(*N_184042).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = 0;
LOC12 = Getmodule_59203(S_184044);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_104041(S_184044);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_184044).Ast).KindU.S6.Sons->data[4], NIM_NIL);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_184043;
}
N_NIMCALL(TY104006, Cleanuppass_184006)(void) {
TY104006 Result_184164;
memset((void*)&Result_184164, 0, sizeof(Result_184164));
Initpass_104031(&Result_184164);
Result_184164.Process = Cleanup_184039;
Result_184164.Close = Cleanup_184039;
return Result_184164;
}
N_NOINLINE(void, passauxInit)(void) {
}

