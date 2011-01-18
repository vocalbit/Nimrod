/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY51008 TY51008;
typedef struct TY104006 TY104006;
typedef struct TY104002 TY104002;
typedef struct TY54547 TY54547;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY92031 TY92031;
typedef struct TY54525 TY54525;
typedef struct TY185010 TY185010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY54551 TY54551;
typedef struct TY46536 TY46536;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY37660 TY37660;
typedef struct TY53005 TY53005;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54539 TY54539;
typedef struct TY54543 TY54543;
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
struct TY104002 {
  TNimObject Sup;
};
struct TY185010 {
  TY104002 Sup;
TY54547* Module;
NimStringDesc* Filename;
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
struct TY37660 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef TY51008* TY174640[2];
struct TY53005 {
  TNimObject Sup;
NI Id;
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
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
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
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
N_NIMCALL(TY104002*, Myopen_185124)(TY54547* Module_185126, NimStringDesc* Filename_185127);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815);
static N_INLINE(void, Incref_12802)(TY10402* C_12804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(void, Decref_12601)(TY10402* C_12603);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(TY54525*, Adddotdependency_185025)(TY104002* C_185027, TY54525* N_185028);
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_37659, TY37660* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_109013)(TY54525* N_109015);
N_NIMCALL(void, Adddependencyaux_185016)(NimStringDesc* Importing_185018, NimStringDesc* Imported_185019);
N_NIMCALL(void, Appf_51071)(TY51008** C_51074, NimStringDesc* Frmt_51075, TY51008** Args_51077, NI Args_51077Len0);
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048);
N_NIMCALL(void, Writerope_51055)(TY51008* Head_51057, NimStringDesc* Filename_51058);
N_NIMCALL(TY51008*, Ropef_51066)(NimStringDesc* Frmt_51068, TY51008** Args_51070, NI Args_51070Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37820, NimStringDesc* Ext_37821);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_37727);
STRING_LITERAL(TMP195481, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP195482, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP195483, "", 0);
STRING_LITERAL(TMP195484, "dot", 3);
TY51008* Gdotgraph_185015;
extern TNimType* NTI185012; /* PGen */
extern TNimType* NTI185010; /* TGen */
extern TY10790 Gch_10808;
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7407;
Result_7407 = 0;
(*Memloc_3004) += X_3005;
Result_7407 = (*Memloc_3004);
return Result_7407;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218) {
NIM_BOOL Result_11219;
Result_11219 = 0;
Result_11219 = !((((*(*C_11218).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11219;
}
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854) {
Incl_10674(&Gch_10808.Cycleroots, C_11854);
}
static N_INLINE(void, Incref_12802)(TY10402* C_12804) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_12804).Refcount, 8);
LOC3 = Canbecycleroot_11216(C_12804);
if (!LOC3) goto LA4;
Rtladdcycleroot_11852(C_12804);
LA4: ;
}
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_11214))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
return Result_11215;
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
static N_INLINE(void, Decref_12601)(TY10402* C_12603) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12603).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12201(C_12603);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11216(C_12603);
if (!LOC5) goto LA6;
Rtladdcycleroot_11852(C_12603);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815) {
TY10402* LOC4;
TY10402* LOC8;
if (!!((Src_12815 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11212(Src_12815);
Incref_12802(LOC4);
LA2: ;
if (!!(((*Dest_12814) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11212((*Dest_12814));
Decref_12601(LOC8);
LA6: ;
(*Dest_12814) = Src_12815;
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
N_NIMCALL(TY104002*, Myopen_185124)(TY54547* Module_185126, NimStringDesc* Filename_185127) {
TY104002* Result_185128;
TY185010* G_185129;
Result_185128 = 0;
G_185129 = 0;
G_185129 = (TY185010*) newObj(NTI185012, sizeof(TY185010));
(*G_185129).Sup.Sup.m_type = NTI185010;
asgnRef((void**) &(*G_185129).Module, Module_185126);
asgnRefNoCycle((void**) &(*G_185129).Filename, copyString(Filename_185127));
Result_185128 = &G_185129->Sup;
return Result_185128;
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
N_NIMCALL(void, Adddependencyaux_185016)(NimStringDesc* Importing_185018, NimStringDesc* Imported_185019) {
TY174640 LOC1;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = Torope_51046(Importing_185018);
LOC1[1] = Torope_51046(Imported_185019);
Appf_51071(&Gdotgraph_185015, ((NimStringDesc*) &TMP195481), LOC1, 2);
}
N_NIMCALL(TY54525*, Adddotdependency_185025)(TY104002* C_185027, TY54525* N_185028) {
TY54525* Result_185029;
TY185010* G_185041;
NI I_185064;
NI HEX3Atmp_185111;
NI LOC4;
NI Res_185113;
NimStringDesc* Imported_185077;
NimStringDesc* LOC6;
TY37660 LOC7;
NimStringDesc* Imported_185090;
NimStringDesc* LOC8;
TY37660 LOC9;
NI I_185098;
NI HEX3Atmp_185114;
NI LOC10;
NI Res_185116;
TY54525* LOC12;
Result_185029 = 0;
Result_185029 = N_185028;
if (!(N_185028 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
G_185041 = 0;
G_185041 = ((TY185010*) (C_185027));
switch ((*N_185028).Kind) {
case ((NU8) 102):
I_185064 = 0;
HEX3Atmp_185111 = 0;
LOC4 = Sonslen_54803(N_185028);
HEX3Atmp_185111 = (NI32)(LOC4 - 1);
Res_185113 = 0;
Res_185113 = 0;
while (1) {
if (!(Res_185113 <= HEX3Atmp_185111)) goto LA5;
I_185064 = Res_185113;
Imported_185077 = 0;
LOC6 = 0;
LOC6 = Getmodulefile_109013((*N_185028).KindU.S6.Sons->data[I_185064]);
memset((void*)&LOC7, 0, sizeof(LOC7));
nossplitFile(LOC6, &LOC7);
Imported_185077 = copyString(LOC7.Name);
Adddependencyaux_185016((*(*(*G_185041).Module).Name).S, Imported_185077);
Res_185113 += 1;
} LA5: ;
break;
case ((NU8) 103):
Imported_185090 = 0;
LOC8 = 0;
LOC8 = Getmodulefile_109013((*N_185028).KindU.S6.Sons->data[0]);
memset((void*)&LOC9, 0, sizeof(LOC9));
nossplitFile(LOC8, &LOC9);
Imported_185090 = copyString(LOC9.Name);
Adddependencyaux_185016((*(*(*G_185041).Module).Name).S, Imported_185090);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_185098 = 0;
HEX3Atmp_185114 = 0;
LOC10 = Sonslen_54803(N_185028);
HEX3Atmp_185114 = (NI32)(LOC10 - 1);
Res_185116 = 0;
Res_185116 = 0;
while (1) {
if (!(Res_185116 <= HEX3Atmp_185114)) goto LA11;
I_185098 = Res_185116;
LOC12 = 0;
LOC12 = Adddotdependency_185025(C_185027, (*N_185028).KindU.S6.Sons->data[I_185098]);
Res_185116 += 1;
} LA11: ;
break;
default:
break;
}
BeforeRet: ;
return Result_185029;
}
N_NIMCALL(TY104006, Gendependpass_185004)(void) {
TY104006 Result_185147;
memset((void*)&Result_185147, 0, sizeof(Result_185147));
Initpass_104031(&Result_185147);
Result_185147.Open = Myopen_185124;
Result_185147.Process = Adddotdependency_185025;
return Result_185147;
}
N_NIMCALL(void, Generatedot_185006)(NimStringDesc* Project_185008) {
TY174640 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY51008* LOC4;
NimStringDesc* LOC5;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC2 = 0;
LOC2 = nosextractFilename(Project_185008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP195483));
LOC1[0] = Torope_51046(LOC3);
LOC1[1] = Gdotgraph_185015;
LOC4 = 0;
LOC4 = Ropef_51066(((NimStringDesc*) &TMP195482), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_185008, ((NimStringDesc*) &TMP195484));
Writerope_51055(LOC4, LOC5);
}
N_NOINLINE(void, dependsInit)(void) {
}

