/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY440 TY440;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef NU8 TY21602[32];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY440 {
  TY416 Sup;
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
typedef NI TY25123[256];
typedef NimStringDesc* TY46866[1];
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_23417);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_23723, NimStringDesc* Formatstr_23724, NimStringDesc** A_23726, NI A_23726Len0);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18382, NI Addlen_18383);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NI, Findnormalized_23697)(NimStringDesc* X_23699, NimStringDesc** Inarray_23701, NI Inarray_23701Len0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23624, NimStringDesc* B_23625);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(void, raiseException)(E_Base* E_5204, NCSTRING Ename_5205);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_25226, TY21602 Chars_25228, NI Start_25229);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_22047, NI* Number_22049, NI Start_22050);
N_NIMCALL(void, Preprocesssub_25124)(NimStringDesc* Sub_25126, NI* A_25128);
N_NIMCALL(NI, Findaux_25153)(NimStringDesc* S_25155, NimStringDesc* Sub_25156, NI Start_25157, TY25123 A_25158);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_23943, NimStringDesc** A_23945, NI A_23945Len0);
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_22416, NF* Number_22418, NI Start_22419);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_22040, NI64* Number_22042, NI Start_22043);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19003);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18425, NI Newlen_18426);
NIM_CONST TY21602 Whitespace_23403 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Letters_23405 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Digits_23407 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Hexdigits_23409 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0x7E, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Identchars_23411 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY21602 Identstartchars_23413 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP193602, "", 0);
NIM_CONST TY21602 Patternchars_23727 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP193603, "invalid format string", 21);
static NIM_CONST TY21602 TMP193631 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP193652, "invalid integer: ", 17);
NIM_CONST TY21602 Chars_23963 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP193699, "invalid float: ", 15);
STRING_LITERAL(TMP193741, "0123456789ABCDEF", 16);
extern TNimType* NTI23849; /* ref EInvalidValue */
extern TNimType* NTI440; /* EInvalidValue */
extern TY10790 Gch_10808;
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR C_23417) {
NIM_CHAR Result_23418;
Result_23418 = 0;
if (!(((NU8)(C_23417)) >= ((NU8)(65)) && ((NU8)(C_23417)) <= ((NU8)(90)))) goto LA2;
Result_23418 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_23417)) + 32)))));
goto LA1;
LA2: ;
Result_23418 = C_23417;
LA1: ;
return Result_23418;
}
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23582, NimStringDesc* B_23583) {
NI Result_23584;
NI I_23585;
NIM_BOOL LOC2;
NIM_CHAR LOC4;
NIM_CHAR LOC5;
Result_23584 = 0;
I_23585 = 0;
I_23585 = 0;
while (1) {
LOC2 = (I_23585 < A_23582->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = (I_23585 < B_23583->Sup.len);
LA3: ;
if (!LOC2) goto LA1;
LOC4 = nsuToLowerChar(A_23582->data[I_23585]);
LOC5 = nsuToLowerChar(B_23583->data[I_23585]);
Result_23584 = (NI64)(((NU8)(LOC4)) - ((NU8)(LOC5)));
if (!!((Result_23584 == 0))) goto LA7;
goto BeforeRet;
LA7: ;
I_23585 += 1;
} LA1: ;
Result_23584 = (NI64)(A_23582->Sup.len - B_23583->Sup.len);
BeforeRet: ;
return Result_23584;
}
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23624, NimStringDesc* B_23625) {
NI Result_23626;
NI I_23627;
NI J_23628;
NIM_CHAR Aa_23657;
NIM_CHAR Bb_23658;
NIM_BOOL LOC5;
Result_23626 = 0;
I_23627 = 0;
I_23627 = 0;
J_23628 = 0;
J_23628 = 0;
while (1) {
while (1) {
if (!((NU8)(A_23624->data[I_23627]) == (NU8)(95))) goto LA2;
I_23627 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_23625->data[J_23628]) == (NU8)(95))) goto LA3;
J_23628 += 1;
} LA3: ;
Aa_23657 = 0;
Aa_23657 = nsuToLowerChar(A_23624->data[I_23627]);
Bb_23658 = 0;
Bb_23658 = nsuToLowerChar(B_23625->data[J_23628]);
Result_23626 = (NI64)(((NU8)(Aa_23657)) - ((NU8)(Bb_23658)));
LOC5 = !((Result_23626 == 0));
if (LOC5) goto LA6;
LOC5 = ((NU8)(Aa_23657) == (NU8)(0));
LA6: ;
if (!LOC5) goto LA7;
goto LA1;
LA7: ;
I_23627 += 1;
J_23628 += 1;
} LA1: ;
return Result_23626;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI64)((NI64)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
N_NIMCALL(NI, Findnormalized_23697)(NimStringDesc* X_23699, NimStringDesc** Inarray_23701, NI Inarray_23701Len0) {
NI Result_23702;
NI I_23703;
NI LOC3;
Result_23702 = 0;
I_23703 = 0;
I_23703 = 0;
while (1) {
if (!(I_23703 < (Inarray_23701Len0-1))) goto LA1;
LOC3 = nsuCmpIgnoreStyle(X_23699, Inarray_23701[I_23703]);
if (!(LOC3 == 0)) goto LA4;
Result_23702 = I_23703;
goto BeforeRet;
LA4: ;
I_23703 += 2;
} LA1: ;
Result_23702 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_23702;
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
N_NIMCALL(void, nsuAddf)(NimStringDesc** S_23723, NimStringDesc* Formatstr_23724, NimStringDesc** A_23726, NI A_23726Len0) {
NI I_23729;
NI Num_23730;
NI J_23773;
NI J_23819;
NI X_23844;
NimStringDesc* LOC7;
NIM_BOOL LOC9;
TY440* E_23850;
NI J_23866;
NI X_23890;
NimStringDesc* LOC15;
NIM_BOOL LOC17;
TY440* E_23896;
TY440* E_23913;
I_23729 = 0;
I_23729 = 0;
Num_23730 = 0;
Num_23730 = 0;
while (1) {
if (!(I_23729 < Formatstr_23724->Sup.len)) goto LA1;
if (!((NU8)(Formatstr_23724->data[I_23729]) == (NU8)(36))) goto LA3;
switch (((NU8)(Formatstr_23724->data[(NI64)(I_23729 + 1)]))) {
case 35:
(*S_23723) = resizeString((*S_23723), A_23726[Num_23730]->Sup.len + 0);
appendString((*S_23723), A_23726[Num_23730]);
I_23729 += 2;
Num_23730 += 1;
break;
case 36:
(*S_23723) = addChar((*S_23723), 36);
I_23729 += 2;
break;
case 49 ... 57:
J_23773 = 0;
J_23773 = 0;
I_23729 += 1;
while (1) {
if (!(((NU8)(Formatstr_23724->data[I_23729])) >= ((NU8)(48)) && ((NU8)(Formatstr_23724->data[I_23729])) <= ((NU8)(57)))) goto LA5;
J_23773 = (NI64)((NI64)((NI64)(J_23773 * 10) + ((NU8)(Formatstr_23724->data[I_23729]))) - 48);
I_23729 += 1;
} LA5: ;
Num_23730 = J_23773;
(*S_23723) = resizeString((*S_23723), A_23726[(NI64)(J_23773 - 1)]->Sup.len + 0);
appendString((*S_23723), A_23726[(NI64)(J_23773 - 1)]);
break;
case 123:
J_23819 = 0;
J_23819 = (NI64)(I_23729 + 1);
while (1) {
if (!!((((NU8)(Formatstr_23724->data[J_23819])) == ((NU8)(0)) || ((NU8)(Formatstr_23724->data[J_23819])) == ((NU8)(125))))) goto LA6;
J_23819 += 1;
} LA6: ;
X_23844 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Formatstr_23724, (NI64)(I_23729 + 2), (NI64)(J_23819 - 1));
X_23844 = Findnormalized_23697(LOC7, A_23726, A_23726Len0);
LOC9 = (0 <= X_23844);
if (!(LOC9)) goto LA10;
LOC9 = (X_23844 < (A_23726Len0-1));
LA10: ;
if (!LOC9) goto LA11;
(*S_23723) = resizeString((*S_23723), A_23726[(NI64)(X_23844 + 1)]->Sup.len + 0);
appendString((*S_23723), A_23726[(NI64)(X_23844 + 1)]);
goto LA8;
LA11: ;
E_23850 = 0;
E_23850 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_23850).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_23850).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193603)));
raiseException((E_Base*)E_23850, "EInvalidValue");
LA8: ;
I_23729 = (NI64)(J_23819 + 1);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
case 95:
J_23866 = 0;
J_23866 = (NI64)(I_23729 + 1);
while (1) {
if (!(((NU8)(Formatstr_23724->data[J_23866])) >= ((NU8)(97)) && ((NU8)(Formatstr_23724->data[J_23866])) <= ((NU8)(122)) || ((NU8)(Formatstr_23724->data[J_23866])) >= ((NU8)(65)) && ((NU8)(Formatstr_23724->data[J_23866])) <= ((NU8)(90)) || ((NU8)(Formatstr_23724->data[J_23866])) >= ((NU8)(48)) && ((NU8)(Formatstr_23724->data[J_23866])) <= ((NU8)(57)) || ((NU8)(Formatstr_23724->data[J_23866])) >= ((NU8)(128)) && ((NU8)(Formatstr_23724->data[J_23866])) <= ((NU8)(255)) || ((NU8)(Formatstr_23724->data[J_23866])) == ((NU8)(95)))) goto LA14;
J_23866 += 1;
} LA14: ;
X_23890 = 0;
LOC15 = 0;
LOC15 = copyStrLast(Formatstr_23724, (NI64)(I_23729 + 1), (NI64)(J_23866 - 1));
X_23890 = Findnormalized_23697(LOC15, A_23726, A_23726Len0);
LOC17 = (0 <= X_23890);
if (!(LOC17)) goto LA18;
LOC17 = (X_23890 < (A_23726Len0-1));
LA18: ;
if (!LOC17) goto LA19;
(*S_23723) = resizeString((*S_23723), A_23726[(NI64)(X_23890 + 1)]->Sup.len + 0);
appendString((*S_23723), A_23726[(NI64)(X_23890 + 1)]);
goto LA16;
LA19: ;
E_23896 = 0;
E_23896 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_23896).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_23896).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193603)));
raiseException((E_Base*)E_23896, "EInvalidValue");
LA16: ;
I_23729 = J_23866;
break;
default:
E_23913 = 0;
E_23913 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_23913).Sup.Sup.Sup.m_type = NTI440;
asgnRefNoCycle((void**) &(*E_23913).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193603)));
raiseException((E_Base*)E_23913, "EInvalidValue");
break;
}
goto LA2;
LA3: ;
(*S_23723) = addChar((*S_23723), Formatstr_23724->data[I_23729]);
I_23729 += 1;
LA2: ;
} LA1: ;
}
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_23943, NimStringDesc** A_23945, NI A_23945Len0) {
NimStringDesc* Result_23946;
Result_23946 = 0;
Result_23946 = copyString(((NimStringDesc*) &TMP193602));
nsuAddf(&Result_23946, Formatstr_23943, A_23945, A_23945Len0);
return Result_23946;
}
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_23536) {
NimStringDesc* Result_23537;
NI I_23547;
NI HEX3Atmp_23577;
NI Res_23579;
Result_23537 = 0;
Result_23537 = copyString(((NimStringDesc*) &TMP193602));
I_23547 = 0;
HEX3Atmp_23577 = 0;
HEX3Atmp_23577 = (NI64)(S_23536->Sup.len - 1);
Res_23579 = 0;
Res_23579 = 0;
while (1) {
if (!(Res_23579 <= HEX3Atmp_23577)) goto LA1;
I_23547 = Res_23579;
if (!(((NU8)(S_23536->data[I_23547])) >= ((NU8)(65)) && ((NU8)(S_23536->data[I_23547])) <= ((NU8)(90)))) goto LA3;
Result_23537 = addChar(Result_23537, ((NIM_CHAR) (((NI) ((NI64)(((NU8)(S_23536->data[I_23547])) + 32))))));
goto LA2;
LA3: ;
if (!!(((NU8)(S_23536->data[I_23547]) == (NU8)(95)))) goto LA5;
Result_23537 = addChar(Result_23537, S_23536->data[I_23547]);
goto LA2;
LA5: ;
LA2: ;
Res_23579 += 1;
} LA1: ;
return Result_23537;
}
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* S_25226, TY21602 Chars_25228, NI Start_25229) {
NI Result_25230;
NI I_25240;
NI HEX3Atmp_25252;
NI Res_25254;
Result_25230 = 0;
I_25240 = 0;
HEX3Atmp_25252 = 0;
HEX3Atmp_25252 = (NI64)(S_25226->Sup.len - 1);
Res_25254 = 0;
Res_25254 = Start_25229;
while (1) {
if (!(Res_25254 <= HEX3Atmp_25252)) goto LA1;
I_25240 = Res_25254;
if (!((Chars_25228[((NU8)(S_25226->data[I_25240]))/8] &(1<<(((NU8)(S_25226->data[I_25240]))%8)))!=0)) goto LA3;
Result_25230 = I_25240;
goto BeforeRet;
LA3: ;
Res_25254 += 1;
} LA1: ;
Result_25230 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_25230;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410) {
(*Dest_18409).data[((*Dest_18409).Sup.len)-0] = C_18410;
(*Dest_18409).data[((NI64)((*Dest_18409).Sup.len + 1))-0] = 0;
(*Dest_18409).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25255)(NimStringDesc* S_25257) {
NimStringDesc* Result_25258;
NIM_BOOL LOC2;
NI LOC3;
NimStringDesc* LOC7;
Result_25258 = 0;
LOC3 = nsuFindCharSet(S_25257, TMP193631, 0);
LOC2 = (0 <= LOC3);
if (!(LOC2)) goto LA4;
LOC2 = !(((NU8)(S_25257->data[0]) == (NU8)(34)));
LA4: ;
if (!LOC2) goto LA5;
LOC7 = 0;
LOC7 = rawNewString(S_25257->Sup.len + 2);
appendChar(LOC7, 34);
appendString(LOC7, S_25257);
appendChar(LOC7, 34);
Result_25258 = LOC7;
goto LA1;
LA5: ;
Result_25258 = copyString(S_25257);
LA1: ;
return Result_25258;
}
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25205, NIM_CHAR Sub_25206, NI Start_25207) {
NI Result_25208;
NI I_25218;
NI HEX3Atmp_25221;
NI Res_25223;
Result_25208 = 0;
I_25218 = 0;
HEX3Atmp_25221 = 0;
HEX3Atmp_25221 = (NI64)(S_25205->Sup.len - 1);
Res_25223 = 0;
Res_25223 = Start_25207;
while (1) {
if (!(Res_25223 <= HEX3Atmp_25221)) goto LA1;
I_25218 = Res_25223;
if (!((NU8)(Sub_25206) == (NU8)(S_25205->data[I_25218]))) goto LA3;
Result_25208 = I_25218;
goto BeforeRet;
LA3: ;
Res_25223 += 1;
} LA1: ;
Result_25208 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_25208;
}
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_23448) {
NimStringDesc* Result_23449;
NI I_23476;
NI HEX3Atmp_23477;
NI Res_23479;
Result_23449 = 0;
Result_23449 = mnewString(S_23448->Sup.len);
I_23476 = 0;
HEX3Atmp_23477 = 0;
HEX3Atmp_23477 = (NI64)(S_23448->Sup.len - 1);
Res_23479 = 0;
Res_23479 = 0;
while (1) {
if (!(Res_23479 <= HEX3Atmp_23477)) goto LA1;
I_23476 = Res_23479;
Result_23449->data[I_23476] = nsuToLowerChar(S_23448->data[I_23476]);
Res_23479 += 1;
} LA1: ;
return Result_23449;
}
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24805, NimStringDesc* Prefix_24806) {
NIM_BOOL Result_24807;
NI I_24808;
Result_24807 = 0;
I_24808 = 0;
I_24808 = 0;
while (1) {
if (!((NU8)(Prefix_24806->data[I_24808]) == (NU8)(0))) goto LA3;
Result_24807 = NIM_TRUE;
goto BeforeRet;
LA3: ;
if (!!(((NU8)(S_24805->data[I_24808]) == (NU8)(Prefix_24806->data[I_24808])))) goto LA6;
Result_24807 = NIM_FALSE;
goto BeforeRet;
LA6: ;
I_24808 += 1;
}
BeforeRet: ;
return Result_24807;
}
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_24425) {
NI Result_24426;
NI L_24428;
TY440* E_24434;
NimStringDesc* LOC5;
Result_24426 = 0;
L_24428 = 0;
L_24428 = npuParseInt(S_24425, &Result_24426, 0);
if (!!((L_24428 == S_24425->Sup.len))) goto LA2;
E_24434 = 0;
E_24434 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_24434).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_24425->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP193652));
appendString(LOC5, S_24425);
asgnRefNoCycle((void**) &(*E_24434).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_24434, "EInvalidValue");
LA2: ;
return Result_24426;
}
N_NIMCALL(void, Preprocesssub_25124)(NimStringDesc* Sub_25126, NI* A_25128) {
NI M_25131;
NI I_25139;
NI Res_25149;
NI I_25147;
NI HEX3Atmp_25150;
NI Res_25152;
M_25131 = 0;
M_25131 = Sub_25126->Sup.len;
I_25139 = 0;
Res_25149 = 0;
Res_25149 = 0;
while (1) {
if (!(Res_25149 <= 255)) goto LA1;
I_25139 = Res_25149;
A_25128[(((NU8)(((NIM_CHAR) (((NI) (I_25139)))))))-0] = (NI64)(M_25131 + 1);
Res_25149 += 1;
} LA1: ;
I_25147 = 0;
HEX3Atmp_25150 = 0;
HEX3Atmp_25150 = (NI64)(M_25131 - 1);
Res_25152 = 0;
Res_25152 = 0;
while (1) {
if (!(Res_25152 <= HEX3Atmp_25150)) goto LA2;
I_25147 = Res_25152;
A_25128[(((NU8)(Sub_25126->data[I_25147])))-0] = (NI64)(M_25131 - I_25147);
Res_25152 += 1;
} LA2: ;
}
N_NIMCALL(NI, Findaux_25153)(NimStringDesc* S_25155, NimStringDesc* Sub_25156, NI Start_25157, TY25123 A_25158) {
NI Result_25159;
NI M_25162;
NI N_25165;
NI J_25166;
NI K_25177;
NI HEX3Atmp_25192;
NI Res_25194;
Result_25159 = 0;
M_25162 = 0;
M_25162 = Sub_25156->Sup.len;
N_25165 = 0;
N_25165 = S_25155->Sup.len;
J_25166 = 0;
J_25166 = Start_25157;
while (1) {
if (!(J_25166 <= (NI64)(N_25165 - M_25162))) goto LA1;
K_25177 = 0;
HEX3Atmp_25192 = 0;
HEX3Atmp_25192 = (NI64)(M_25162 - 1);
Res_25194 = 0;
Res_25194 = 0;
while (1) {
if (!(Res_25194 <= HEX3Atmp_25192)) goto LA3;
K_25177 = Res_25194;
if (!!(((NU8)(Sub_25156->data[K_25177]) == (NU8)(S_25155->data[(NI64)(K_25177 + J_25166)])))) goto LA5;
goto LA2;
LA5: ;
Res_25194 += 1;
} LA3: ;
Result_25159 = J_25166;
goto BeforeRet;
LA2: ;
J_25166 += A_25158[(((NU8)(S_25155->data[(NI64)(J_25166 + M_25162)])))-0];
} LA1: ;
Result_25159 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_25159;
}
N_NIMCALL(NI, nsuFindStr)(NimStringDesc* S_25197, NimStringDesc* Sub_25198, NI Start_25199) {
NI Result_25200;
TY25123 A_25201;
Result_25200 = 0;
memset((void*)&A_25201, 0, sizeof(A_25201));
Preprocesssub_25124(Sub_25198, A_25201);
Result_25200 = Findaux_25153(S_25197, Sub_25198, Start_25199, A_25201);
return Result_25200;
}
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* Formatstr_23950, NimStringDesc* A_23951) {
NimStringDesc* Result_23952;
TY46866 LOC1;
Result_23952 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(A_23951);
Result_23952 = nsuFormatOpenArray(Formatstr_23950, LOC1, 1);
goto BeforeRet;
BeforeRet: ;
return Result_23952;
}
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_23959, NIM_BOOL Leading_23960, NIM_BOOL Trailing_23961) {
NimStringDesc* Result_23962;
NI First_23965;
NI Last_23968;
NIM_BOOL LOC9;
Result_23962 = 0;
First_23965 = 0;
First_23965 = 0;
Last_23968 = 0;
Last_23968 = (NI64)(S_23959->Sup.len - 1);
if (!Leading_23960) goto LA2;
while (1) {
if (!(((NU8)(S_23959->data[First_23965])) == ((NU8)(32)) || ((NU8)(S_23959->data[First_23965])) == ((NU8)(9)) || ((NU8)(S_23959->data[First_23965])) == ((NU8)(11)) || ((NU8)(S_23959->data[First_23965])) == ((NU8)(13)) || ((NU8)(S_23959->data[First_23965])) == ((NU8)(10)) || ((NU8)(S_23959->data[First_23965])) == ((NU8)(12)))) goto LA4;
First_23965 += 1;
} LA4: ;
LA2: ;
if (!Trailing_23961) goto LA6;
while (1) {
LOC9 = (0 <= Last_23968);
if (!(LOC9)) goto LA10;
LOC9 = (((NU8)(S_23959->data[Last_23968])) == ((NU8)(32)) || ((NU8)(S_23959->data[Last_23968])) == ((NU8)(9)) || ((NU8)(S_23959->data[Last_23968])) == ((NU8)(11)) || ((NU8)(S_23959->data[Last_23968])) == ((NU8)(13)) || ((NU8)(S_23959->data[Last_23968])) == ((NU8)(10)) || ((NU8)(S_23959->data[Last_23968])) == ((NU8)(12)));
LA10: ;
if (!LOC9) goto LA8;
Last_23968 -= 1;
} LA8: ;
LA6: ;
Result_23962 = copyStrLast(S_23959, First_23965, Last_23968);
return Result_23962;
}
N_NIMCALL(NF, nsuParseFloat)(NimStringDesc* S_24479) {
NF Result_24480;
NI L_24482;
TY440* E_24488;
NimStringDesc* LOC5;
Result_24480 = 0;
L_24482 = 0;
L_24482 = npuParseFloat(S_24479, &Result_24480, 0);
if (!!((L_24482 == S_24479->Sup.len))) goto LA2;
E_24488 = 0;
E_24488 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_24488).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_24479->Sup.len + 15);
appendString(LOC5, ((NimStringDesc*) &TMP193699));
appendString(LOC5, S_24479);
asgnRefNoCycle((void**) &(*E_24488).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_24488, "EInvalidValue");
LA2: ;
return Result_24480;
}
N_NIMCALL(NI64, nsuParseBiggestInt)(NimStringDesc* S_24452) {
NI64 Result_24453;
NI L_24455;
TY440* E_24461;
NimStringDesc* LOC5;
Result_24453 = 0;
L_24455 = 0;
L_24455 = npuParseBiggestInt(S_24452, &Result_24453, 0);
if (!!((L_24455 == S_24452->Sup.len))) goto LA2;
E_24461 = 0;
E_24461 = (TY440*) newObj(NTI23849, sizeof(TY440));
(*E_24461).Sup.Sup.Sup.m_type = NTI440;
LOC5 = 0;
LOC5 = rawNewString(S_24452->Sup.len + 17);
appendString(LOC5, ((NimStringDesc*) &TMP193652));
appendString(LOC5, S_24452);
asgnRefNoCycle((void**) &(*E_24461).Sup.Sup.message, LOC5);
raiseException((E_Base*)E_24461, "EInvalidValue");
LA2: ;
return Result_24453;
}
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_24638, NIM_CHAR C_24639) {
NimStringDesc* Result_24640;
NI I_24648;
NI HEX3Atmp_24649;
NI Res_24651;
Result_24640 = 0;
Result_24640 = mnewString(Count_24638);
I_24648 = 0;
HEX3Atmp_24649 = 0;
HEX3Atmp_24649 = (NI64)(Count_24638 - 1);
Res_24651 = 0;
Res_24651 = 0;
while (1) {
if (!(Res_24651 <= HEX3Atmp_24649)) goto LA1;
I_24648 = Res_24651;
Result_24640->data[I_24648] = C_24639;
Res_24651 += 1;
} LA1: ;
return Result_24640;
}
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_24385, NI Len_24386) {
NimStringDesc* Result_24387;
NI64 Shift_24389;
NI J_24397;
NI HEX3Atmp_24398;
NI Res_24400;
Result_24387 = 0;
Shift_24389 = 0;
Result_24387 = mnewString(Len_24386);
J_24397 = 0;
HEX3Atmp_24398 = 0;
HEX3Atmp_24398 = (NI64)(Len_24386 - 1);
Res_24400 = 0;
Res_24400 = HEX3Atmp_24398;
while (1) {
if (!(0 <= Res_24400)) goto LA1;
J_24397 = Res_24400;
Result_24387->data[J_24397] = ((NimStringDesc*) &TMP193741)->data[(NI32)(((NI32)(NU32)(NU64)((NI64)((NU64)(X_24385) >> (NU64)(Shift_24389)))) & ((NI32) 15))];
Shift_24389 = (NI64)(Shift_24389 + 4);
Res_24400 -= 1;
} LA1: ;
return Result_24387;
}
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_25288, NimStringDesc* Sub_25289, NimStringDesc* By_25290) {
NimStringDesc* Result_25291;
TY25123 A_25292;
NI I_25294;
NI J_25295;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
Result_25291 = 0;
memset((void*)&A_25292, 0, sizeof(A_25292));
Result_25291 = copyString(((NimStringDesc*) &TMP193602));
Preprocesssub_25124(Sub_25289, A_25292);
I_25294 = 0;
I_25294 = 0;
while (1) {
J_25295 = 0;
J_25295 = Findaux_25153(S_25288, Sub_25289, I_25294, A_25292);
if (!(J_25295 < 0)) goto LA3;
goto LA1;
LA3: ;
LOC5 = 0;
LOC5 = copyStrLast(S_25288, I_25294, (NI64)(J_25295 - 1));
Result_25291 = resizeString(Result_25291, LOC5->Sup.len + 0);
appendString(Result_25291, LOC5);
Result_25291 = resizeString(Result_25291, By_25290->Sup.len + 0);
appendString(Result_25291, By_25290);
I_25294 = (NI64)(J_25295 + Sub_25289->Sup.len);
} LA1: ;
LOC6 = 0;
LOC6 = copyStr(S_25288, I_25294);
Result_25291 = resizeString(Result_25291, LOC6->Sup.len + 0);
appendString(Result_25291, LOC6);
return Result_25291;
}
N_NIMCALL(NimStringDesc*, nsuToBin)(NI64 X_25465, NI Len_25466) {
NimStringDesc* Result_25467;
NI64 Mask_25468;
NI64 Shift_25469;
NI J_25479;
NI HEX3Atmp_25485;
NI Res_25487;
Result_25467 = 0;
Mask_25468 = 0;
Mask_25468 = 1;
Shift_25469 = 0;
Shift_25469 = 0;
Result_25467 = mnewString(Len_25466);
J_25479 = 0;
HEX3Atmp_25485 = 0;
HEX3Atmp_25485 = (NI64)(Len_25466 - 1);
Res_25487 = 0;
Res_25487 = HEX3Atmp_25485;
while (1) {
if (!(0 <= Res_25487)) goto LA1;
J_25479 = Res_25487;
Result_25467->data[J_25479] = ((NIM_CHAR) (((NI) ((NI64)(((NI) ((NI64)((NU64)((X_25465 & Mask_25468)) >> (NU64)(Shift_25469)))) + 48)))));
Shift_25469 = (NI64)(Shift_25469 + 1);
Mask_25468 = (NI64)((NU64)(Mask_25468) << (NU64)(1));
Res_25487 -= 1;
} LA1: ;
return Result_25467;
}
N_NIMCALL(NimStringDesc*, nsuToOct)(NI64 X_25440, NI Len_25441) {
NimStringDesc* Result_25442;
NI64 Mask_25443;
NI64 Shift_25444;
NI J_25454;
NI HEX3Atmp_25460;
NI Res_25462;
Result_25442 = 0;
Mask_25443 = 0;
Mask_25443 = 7;
Shift_25444 = 0;
Shift_25444 = 0;
Result_25442 = mnewString(Len_25441);
J_25454 = 0;
HEX3Atmp_25460 = 0;
HEX3Atmp_25460 = (NI64)(Len_25441 - 1);
Res_25462 = 0;
Res_25462 = HEX3Atmp_25460;
while (1) {
if (!(0 <= Res_25462)) goto LA1;
J_25454 = Res_25462;
Result_25442->data[J_25454] = ((NIM_CHAR) (((NI) ((NI64)(((NI) ((NI64)((NU64)((X_25440 & Mask_25443)) >> (NU64)(Shift_25444)))) + 48)))));
Shift_25444 = (NI64)(Shift_25444 + 3);
Mask_25443 = (NI64)((NU64)(Mask_25443) << (NU64)(3));
Res_25462 -= 1;
} LA1: ;
return Result_25442;
}
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI X_24403, NI Minchars_24404) {
NimStringDesc* Result_24405;
NI I_24417;
NI HEX3Atmp_24420;
NI Res_24422;
NimStringDesc* LOC2;
NimStringDesc* LOC6;
Result_24405 = 0;
Result_24405 = nimIntToStr((NI64)abs(X_24403));
I_24417 = 0;
HEX3Atmp_24420 = 0;
HEX3Atmp_24420 = (NI64)(Minchars_24404 - Result_24405->Sup.len);
Res_24422 = 0;
Res_24422 = 1;
while (1) {
if (!(Res_24422 <= HEX3Atmp_24420)) goto LA1;
I_24417 = Res_24422;
LOC2 = 0;
LOC2 = rawNewString(Result_24405->Sup.len + 1);
appendChar(LOC2, 48);
appendString(LOC2, Result_24405);
Result_24405 = LOC2;
Res_24422 += 1;
} LA1: ;
if (!(X_24403 < 0)) goto LA4;
LOC6 = 0;
LOC6 = rawNewString(Result_24405->Sup.len + 1);
appendChar(LOC6, 45);
appendString(LOC6, Result_24405);
Result_24405 = LOC6;
LA4: ;
return Result_24405;
}
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_24019) {
NimStringDesc* Result_24020;
NI Val_24026;
NI I_24049;
NI Res_24056;
Result_24020 = 0;
Result_24020 = mnewString(3);
Val_24026 = 0;
Val_24026 = ((NU8)(C_24019));
I_24049 = 0;
Res_24056 = 0;
Res_24056 = 2;
while (1) {
if (!(0 <= Res_24056)) goto LA1;
I_24049 = Res_24056;
Result_24020->data[I_24049] = ((NIM_CHAR) (((NI) ((NI64)((NI64)(Val_24026 % 8) + 48)))));
Val_24026 = (NI64)(Val_24026 / 8);
Res_24056 -= 1;
} LA1: ;
return Result_24020;
}
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** A_25004, NI A_25004Len0, NimStringDesc* Sep_25005) {
NimStringDesc* Result_25006;
NI L_25031;
NI I_25039;
NI HEX3Atmp_25062;
NI Res_25064;
NI I_25061;
NI HEX3Atmp_25065;
NI Res_25067;
Result_25006 = 0;
if (!(0 < A_25004Len0)) goto LA2;
L_25031 = 0;
L_25031 = (NI64)(Sep_25005->Sup.len * (NI64)(A_25004Len0 - 1));
I_25039 = 0;
HEX3Atmp_25062 = 0;
HEX3Atmp_25062 = (A_25004Len0-1);
Res_25064 = 0;
Res_25064 = 0;
while (1) {
if (!(Res_25064 <= HEX3Atmp_25062)) goto LA4;
I_25039 = Res_25064;
L_25031 += A_25004[I_25039]->Sup.len;
Res_25064 += 1;
} LA4: ;
Result_25006 = mnewString(L_25031);
Result_25006 = setLengthStr(Result_25006, 0);
Result_25006 = resizeString(Result_25006, A_25004[0]->Sup.len + 0);
appendString(Result_25006, A_25004[0]);
I_25061 = 0;
HEX3Atmp_25065 = 0;
HEX3Atmp_25065 = (A_25004Len0-1);
Res_25067 = 0;
Res_25067 = 1;
while (1) {
if (!(Res_25067 <= HEX3Atmp_25065)) goto LA5;
I_25061 = Res_25067;
Result_25006 = resizeString(Result_25006, Sep_25005->Sup.len + 0);
appendString(Result_25006, Sep_25005);
Result_25006 = resizeString(Result_25006, A_25004[I_25061]->Sup.len + 0);
appendString(Result_25006, A_25004[I_25061]);
Res_25067 += 1;
} LA5: ;
goto LA1;
LA2: ;
Result_25006 = copyString(((NimStringDesc*) &TMP193602));
LA1: ;
return Result_25006;
}
N_NIMCALL(NIM_BOOL, Allcharsinset_24864)(NimStringDesc* S_24866, TY21602 Theset_24867) {
NIM_BOOL Result_24868;
NIM_CHAR C_24871;
NI I_24884;
Result_24868 = 0;
C_24871 = 0;
I_24884 = 0;
I_24884 = 0;
while (1) {
if (!(I_24884 < S_24866->Sup.len)) goto LA1;
C_24871 = S_24866->data[I_24884];
if (!!(((Theset_24867[((NU8)(C_24871))/8] &(1<<(((NU8)(C_24871))%8)))!=0))) goto LA3;
Result_24868 = NIM_FALSE;
goto BeforeRet;
LA3: ;
I_24884 += 1;
} LA1: ;
Result_24868 = NIM_TRUE;
goto BeforeRet;
BeforeRet: ;
return Result_24868;
}
N_NOINLINE(void, strutilsInit)(void) {
}

