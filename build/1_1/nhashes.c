/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
N_NIMCALL(NI, Gethashstr_39031)(NimStringDesc* S_39033) {
NI Result_39128;
NI H_39129;
NI I_39154;
NI HEX3Atmp_39160;
NI Res_39162;
Result_39128 = 0;
H_39129 = 0;
H_39129 = 0;
I_39154 = 0;
HEX3Atmp_39160 = 0;
HEX3Atmp_39160 = S_39033->Sup.len;
Res_39162 = 0;
Res_39162 = 1;
while (1) {
if (!(Res_39162 <= HEX3Atmp_39160)) goto LA1;
I_39154 = Res_39162;
H_39129 = (NI32)((NU32)(H_39129) + (NU32)(((NU8)(S_39033->data[I_39154]))));
H_39129 = (NI32)((NU32)(H_39129) + (NU32)((NI32)((NU32)(H_39129) << (NU32)(10))));
H_39129 = (NI32)(H_39129 ^ (NI32)((NU32)(H_39129) >> (NU32)(6)));
Res_39162 += 1;
} LA1: ;
H_39129 = (NI32)((NU32)(H_39129) + (NU32)((NI32)((NU32)(H_39129) << (NU32)(3))));
H_39129 = (NI32)(H_39129 ^ (NI32)((NU32)(H_39129) >> (NU32)(11)));
H_39129 = (NI32)((NU32)(H_39129) + (NU32)((NI32)((NU32)(H_39129) << (NU32)(15))));
Result_39128 = ((NI) (H_39129));
return Result_39128;
}
N_NIMCALL(NI, Gethashstrci_39034)(NimStringDesc* S_39036) {
NI Result_39220;
NI H_39221;
NIM_CHAR C_39222;
NI I_39232;
NI HEX3Atmp_39265;
NI Res_39267;
Result_39220 = 0;
H_39221 = 0;
C_39222 = 0;
H_39221 = 0;
I_39232 = 0;
HEX3Atmp_39265 = 0;
HEX3Atmp_39265 = (NI32)((NI32)(S_39036->Sup.len + 0) - 1);
Res_39267 = 0;
Res_39267 = 0;
while (1) {
if (!(Res_39267 <= HEX3Atmp_39265)) goto LA1;
I_39232 = Res_39267;
C_39222 = S_39036->data[I_39232];
if (!(((NU8)(C_39222)) >= ((NU8)(65)) && ((NU8)(C_39222)) <= ((NU8)(90)))) goto LA3;
C_39222 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(C_39222)) + 32)))));
LA3: ;
H_39221 = (NI32)((NU32)(H_39221) + (NU32)(((NU8)(C_39222))));
H_39221 = (NI32)((NU32)(H_39221) + (NU32)((NI32)((NU32)(H_39221) << (NU32)(10))));
H_39221 = (NI32)(H_39221 ^ (NI32)((NU32)(H_39221) >> (NU32)(6)));
Res_39267 += 1;
} LA1: ;
H_39221 = (NI32)((NU32)(H_39221) + (NU32)((NI32)((NU32)(H_39221) << (NU32)(3))));
H_39221 = (NI32)(H_39221 ^ (NI32)((NU32)(H_39221) >> (NU32)(11)));
H_39221 = (NI32)((NU32)(H_39221) + (NU32)((NI32)((NU32)(H_39221) << (NU32)(15))));
Result_39220 = ((NI) (H_39221));
return Result_39220;
}
N_NIMCALL(NI, Getnormalizedhash_39037)(NimStringDesc* S_39039) {
NI Result_39166;
NI H_39167;
NIM_CHAR C_39168;
NI I_39178;
NI HEX3Atmp_39214;
NI Res_39216;
Result_39166 = 0;
H_39167 = 0;
C_39168 = 0;
H_39167 = 0;
I_39178 = 0;
HEX3Atmp_39214 = 0;
HEX3Atmp_39214 = (NI32)((NI32)(S_39039->Sup.len + 0) - 1);
Res_39216 = 0;
Res_39216 = 0;
while (1) {
if (!(Res_39216 <= HEX3Atmp_39214)) goto LA1;
I_39178 = Res_39216;
C_39168 = S_39039->data[I_39178];
if (!((NU8)(C_39168) == (NU8)(95))) goto LA4;
goto LA2;
LA4: ;
if (!(((NU8)(C_39168)) >= ((NU8)(65)) && ((NU8)(C_39168)) <= ((NU8)(90)))) goto LA7;
C_39168 = ((NIM_CHAR) (((NI) ((NI32)(((NU8)(C_39168)) + 32)))));
LA7: ;
H_39167 = (NI32)((NU32)(H_39167) + (NU32)(((NU8)(C_39168))));
H_39167 = (NI32)((NU32)(H_39167) + (NU32)((NI32)((NU32)(H_39167) << (NU32)(10))));
H_39167 = (NI32)(H_39167 ^ (NI32)((NU32)(H_39167) >> (NU32)(6)));
LA2: ;
Res_39216 += 1;
} LA1: ;
H_39167 = (NI32)((NU32)(H_39167) + (NU32)((NI32)((NU32)(H_39167) << (NU32)(3))));
H_39167 = (NI32)(H_39167 ^ (NI32)((NU32)(H_39167) >> (NU32)(11)));
H_39167 = (NI32)((NU32)(H_39167) + (NU32)((NI32)((NU32)(H_39167) << (NU32)(15))));
Result_39166 = ((NI) (H_39167));
return Result_39166;
}
N_NIMCALL(NI, Conchash_39040)(NI H_39042, NI Val_39043) {
NI Result_39051;
Result_39051 = 0;
Result_39051 = (NI32)((NU32)(H_39042) + (NU32)(Val_39043));
Result_39051 = (NI32)((NU32)(Result_39051) + (NU32)((NI32)((NU32)(Result_39051) << (NU32)(10))));
Result_39051 = (NI32)(Result_39051 ^ (NI32)((NU32)(Result_39051) >> (NU32)(6)));
return Result_39051;
}
N_NOINLINE(void, nhashesInit)(void) {
}

