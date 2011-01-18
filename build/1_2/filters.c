/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50525 TY50525;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50551 TY50551;
typedef struct TY42536 TY42536;
typedef struct TY50547 TY50547;
typedef struct TY49011 TY49011;
typedef struct TY50519 TY50519;
typedef struct TY70013 TY70013;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50549 TY50549;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY50529 TY50529;
typedef struct TY50527 TY50527;
typedef struct TY50543 TY50543;
typedef struct TY38013 TY38013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50525 {
TY50551* Typ;
NimStringDesc* Comment;
TY42536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50547* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50519* Sons;
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
struct TNimObject {
TNimType* m_type;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY50539 {
NU8 K;
NU8 S;
NU8 Flags;
TY50551* T;
TY47008* R;
NI A;
};
struct TY50551 {
  TY49005 Sup;
NU8 Kind;
TY50549* Sons;
TY50525* N;
NU8 Flags;
NU8 Callconv;
TY50547* Owner;
TY50547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50539 Loc;
};
struct TY50529 {
TNimType* m_type;
NI Counter;
TY50527* Data;
};
struct TY50547 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50551* Typ;
TY49011* Name;
TY42536 Info;
TY50547* Owner;
NU32 Flags;
TY50529 Tab;
TY50525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50539 Loc;
TY50543* Annex;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY70013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY50543 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50525* Path;
};
struct TY50519 {
  TGenericSeq Sup;
  TY50525* data[SEQ_DECL_SIZE];
};
struct TY50549 {
  TGenericSeq Sup;
  TY50551* data[SEQ_DECL_SIZE];
};
struct TY50527 {
  TGenericSeq Sup;
  TY50547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY50525*, Getarg_85036)(TY50525* N_85038, NimStringDesc* Name_85039, NI Pos_85040);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805);
N_NIMCALL(void, Invalidpragma_85032)(TY50525* N_85034);
N_NIMCALL(void, Limessage_42566)(TY42536 Info_42568, NU8 Msg_42569, NimStringDesc* Arg_42570);
N_NIMCALL(NimStringDesc*, Rendertree_80042)(TY50525* N_80044, NU8 Renderflags_80047);
N_NIMCALL(NIM_BOOL, Identeq_49028)(TY49011* Id_49030, NimStringDesc* Name_49031);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18108);
N_NIMCALL(NimStringDesc*, Strarg_85020)(TY50525* N_85022, NimStringDesc* Name_85023, NI Pos_85024, NimStringDesc* Default_85025);
N_NIMCALL(NIM_BOOL, Boolarg_85026)(TY50525* N_85028, NimStringDesc* Name_85029, NI Pos_85030, NIM_BOOL Default_85031);
N_NIMCALL(TY70013*, Llstreamopen_70025)(NimStringDesc* Data_70027);
N_NIMCALL(NIM_BOOL, Llstreamatend_70071)(TY70013* S_70073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_70048)(TY70013* S_70050);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_23959, NIM_BOOL Leading_23960, NIM_BOOL Trailing_23961);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24805, NimStringDesc* Prefix_24806);
N_NIMCALL(void, Llstreamwriteln_70067)(TY70013* S_70069, NimStringDesc* Data_70070);
N_NIMCALL(void, Llstreamclose_70040)(TY70013* S_70042);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_25288, NimStringDesc* Sub_25289, NimStringDesc* By_25290);
STRING_LITERAL(TMP189850, "startswith", 10);
STRING_LITERAL(TMP189851, "", 0);
STRING_LITERAL(TMP189852, "true", 4);
STRING_LITERAL(TMP189853, "false", 5);
STRING_LITERAL(TMP189854, "leading", 7);
STRING_LITERAL(TMP189855, "trailing", 8);
STRING_LITERAL(TMP189856, "sub", 3);
STRING_LITERAL(TMP189857, "by", 2);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805) {
NI Result_51880;
Result_51880 = 0;
if (!(*N_50805).KindU.S6.Sons == 0) goto LA2;
Result_51880 = 0;
goto LA1;
LA2: ;
Result_51880 = (*N_50805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_51880;
}
N_NIMCALL(void, Invalidpragma_85032)(TY50525* N_85034) {
NimStringDesc* LOC1;
LOC1 = 0;
LOC1 = Rendertree_80042(N_85034, 4);
Limessage_42566((*N_85034).Info, ((NU8) 160), LOC1);
}
N_NIMCALL(TY50525*, Getarg_85036)(TY50525* N_85038, NimStringDesc* Name_85039, NI Pos_85040) {
TY50525* Result_85041;
NI I_85076;
NI HEX3Atmp_85205;
NI LOC4;
NI Res_85207;
NIM_BOOL LOC13;
Result_85041 = 0;
Result_85041 = NIM_NIL;
if (!((*N_85038).Kind >= ((NU8) 1) && (*N_85038).Kind <= ((NU8) 18))) goto LA2;
goto BeforeRet;
LA2: ;
I_85076 = 0;
HEX3Atmp_85205 = 0;
LOC4 = Sonslen_50803(N_85038);
HEX3Atmp_85205 = (NI64)(LOC4 - 1);
Res_85207 = 0;
Res_85207 = 1;
while (1) {
if (!(Res_85207 <= HEX3Atmp_85205)) goto LA5;
I_85076 = Res_85207;
if (!((*(*N_85038).KindU.S6.Sons->data[I_85076]).Kind == ((NU8) 23))) goto LA7;
if (!!(((*(*(*N_85038).KindU.S6.Sons->data[I_85076]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA10;
Invalidpragma_85032(N_85038);
LA10: ;
LOC13 = Identeq_49028((*(*(*N_85038).KindU.S6.Sons->data[I_85076]).KindU.S6.Sons->data[0]).KindU.S5.Ident, Name_85039);
if (!LOC13) goto LA14;
Result_85041 = (*(*N_85038).KindU.S6.Sons->data[I_85076]).KindU.S6.Sons->data[1];
goto BeforeRet;
LA14: ;
goto LA6;
LA7: ;
if (!(I_85076 == Pos_85040)) goto LA16;
Result_85041 = (*N_85038).KindU.S6.Sons->data[I_85076];
goto BeforeRet;
goto LA6;
LA16: ;
LA6: ;
Res_85207 += 1;
} LA5: ;
BeforeRet: ;
return Result_85041;
}
N_NIMCALL(NIM_CHAR, Chararg_85014)(TY50525* N_85016, NimStringDesc* Name_85017, NI Pos_85018, NIM_CHAR Default_85019) {
NIM_CHAR Result_85214;
TY50525* X_85215;
Result_85214 = 0;
X_85215 = 0;
X_85215 = Getarg_85036(N_85016, Name_85017, Pos_85018);
if (!(X_85215 == NIM_NIL)) goto LA2;
Result_85214 = Default_85019;
goto LA1;
LA2: ;
if (!((*X_85215).Kind == ((NU8) 5))) goto LA4;
Result_85214 = ((NIM_CHAR) (((NI) (((NI) ((*X_85215).KindU.S1.Intval))))));
goto LA1;
LA4: ;
Invalidpragma_85032(N_85016);
LA1: ;
return Result_85214;
}
N_NIMCALL(NimStringDesc*, Strarg_85020)(TY50525* N_85022, NimStringDesc* Name_85023, NI Pos_85024, NimStringDesc* Default_85025) {
NimStringDesc* Result_85254;
TY50525* X_85255;
Result_85254 = 0;
X_85255 = 0;
X_85255 = Getarg_85036(N_85022, Name_85023, Pos_85024);
if (!(X_85255 == NIM_NIL)) goto LA2;
Result_85254 = copyString(Default_85025);
goto LA1;
LA2: ;
if (!((*X_85255).Kind >= ((NU8) 14) && (*X_85255).Kind <= ((NU8) 16))) goto LA4;
Result_85254 = copyString((*X_85255).KindU.S3.Strval);
goto LA1;
LA4: ;
Invalidpragma_85032(N_85022);
LA1: ;
return Result_85254;
}
N_NIMCALL(NIM_BOOL, Boolarg_85026)(TY50525* N_85028, NimStringDesc* Name_85029, NI Pos_85030, NIM_BOOL Default_85031) {
NIM_BOOL Result_85297;
TY50525* X_85298;
NIM_BOOL LOC4;
NIM_BOOL LOC8;
Result_85297 = 0;
X_85298 = 0;
X_85298 = Getarg_85036(N_85028, Name_85029, Pos_85030);
if (!(X_85298 == NIM_NIL)) goto LA2;
Result_85297 = Default_85031;
goto LA1;
LA2: ;
LOC4 = ((*X_85298).Kind == ((NU8) 2));
if (!(LOC4)) goto LA5;
LOC4 = Identeq_49028((*X_85298).KindU.S5.Ident, ((NimStringDesc*) &TMP189852));
LA5: ;
if (!LOC4) goto LA6;
Result_85297 = NIM_TRUE;
goto LA1;
LA6: ;
LOC8 = ((*X_85298).Kind == ((NU8) 2));
if (!(LOC8)) goto LA9;
LOC8 = Identeq_49028((*X_85298).KindU.S5.Ident, ((NimStringDesc*) &TMP189853));
LA9: ;
if (!LOC8) goto LA10;
Result_85297 = NIM_FALSE;
goto LA1;
LA10: ;
Invalidpragma_85032(N_85028);
LA1: ;
return Result_85297;
}
N_NIMCALL(TY70013*, Filterstrip_85009)(TY70013* Stdin_85011, NimStringDesc* Filename_85012, TY50525* Call_85013) {
TY70013* Result_85357;
NimStringDesc* Pattern_85358;
NIM_BOOL Leading_85359;
NIM_BOOL Trailing_85360;
NIM_BOOL LOC2;
NimStringDesc* Line_85361;
NimStringDesc* Stripped_85362;
NIM_BOOL LOC4;
Result_85357 = 0;
Pattern_85358 = 0;
Pattern_85358 = Strarg_85020(Call_85013, ((NimStringDesc*) &TMP189850), 1, ((NimStringDesc*) &TMP189851));
Leading_85359 = 0;
Leading_85359 = Boolarg_85026(Call_85013, ((NimStringDesc*) &TMP189854), 2, NIM_TRUE);
Trailing_85360 = 0;
Trailing_85360 = Boolarg_85026(Call_85013, ((NimStringDesc*) &TMP189855), 3, NIM_TRUE);
Result_85357 = Llstreamopen_70025(((NimStringDesc*) &TMP189851));
while (1) {
LOC2 = Llstreamatend_70071(Stdin_85011);
if (!!(LOC2)) goto LA1;
Line_85361 = 0;
Line_85361 = Llstreamreadline_70048(Stdin_85011);
Stripped_85362 = 0;
Stripped_85362 = nsuStrip(Line_85361, Leading_85359, Trailing_85360);
LOC4 = (Pattern_85358->Sup.len == 0);
if (LOC4) goto LA5;
LOC4 = nsuStartsWith(Stripped_85362, Pattern_85358);
LA5: ;
if (!LOC4) goto LA6;
Llstreamwriteln_70067(Result_85357, Stripped_85362);
goto LA3;
LA6: ;
Llstreamwriteln_70067(Result_85357, Line_85361);
LA3: ;
} LA1: ;
Llstreamclose_70040(Stdin_85011);
return Result_85357;
}
N_NIMCALL(TY70013*, Filterreplace_85004)(TY70013* Stdin_85006, NimStringDesc* Filename_85007, TY50525* Call_85008) {
TY70013* Result_85372;
NimStringDesc* Sub_85373;
NimStringDesc* By_85378;
NIM_BOOL LOC5;
NimStringDesc* Line_85379;
NimStringDesc* LOC6;
Result_85372 = 0;
Sub_85373 = 0;
Sub_85373 = Strarg_85020(Call_85008, ((NimStringDesc*) &TMP189856), 1, ((NimStringDesc*) &TMP189851));
if (!(Sub_85373->Sup.len == 0)) goto LA2;
Invalidpragma_85032(Call_85008);
LA2: ;
By_85378 = 0;
By_85378 = Strarg_85020(Call_85008, ((NimStringDesc*) &TMP189857), 2, ((NimStringDesc*) &TMP189851));
Result_85372 = Llstreamopen_70025(((NimStringDesc*) &TMP189851));
while (1) {
LOC5 = Llstreamatend_70071(Stdin_85006);
if (!!(LOC5)) goto LA4;
Line_85379 = 0;
Line_85379 = Llstreamreadline_70048(Stdin_85006);
LOC6 = 0;
LOC6 = nsuReplaceStr(Line_85379, Sub_85373, By_85378);
Llstreamwriteln_70067(Result_85372, LOC6);
} LA4: ;
Llstreamclose_70040(Stdin_85006);
return Result_85372;
}
N_NOINLINE(void, filtersInit)(void) {
}

