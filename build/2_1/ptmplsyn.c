/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY74013 TY74013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54525 TY54525;
typedef struct TY90009 TY90009;
typedef struct TY46536 TY46536;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54551 TY54551;
typedef struct TY54547 TY54547;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY53005 TY53005;
typedef struct TY54549 TY54549;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54543 TY54543;
typedef struct TY42013 TY42013;
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
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY90009 {
TY74013* Inp;
NU8 State;
TY46536 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
TY74013* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
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
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
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
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY46536, Newlineinfo_46578)(NimStringDesc* Filename_46580, NI Line_46581, NI Col_46582);
N_NIMCALL(TY74013*, Llstreamopen_74025)(NimStringDesc* Data_74027);
N_NIMCALL(NIM_CHAR, Chararg_89014)(TY54525* N_89016, NimStringDesc* Name_89017, NI Pos_89018, NIM_CHAR Default_89019);
N_NIMCALL(NimStringDesc*, Strarg_89020)(TY54525* N_89022, NimStringDesc* Name_89023, NI Pos_89024, NimStringDesc* Default_89025);
N_NIMCALL(NIM_BOOL, Llstreamatend_74071)(TY74013* S_74073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_74048)(TY74013* S_74050);
N_NIMCALL(void, Parseline_90173)(TY90009* P_90176);
N_NIMCALL(void, Newline_90030)(TY90009* P_90033);
N_NIMCALL(void, Llstreamwrite_74054)(TY74013* S_74056, NimStringDesc* Data_74057);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_24638, NIM_CHAR C_24639);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Scanpar_90036)(TY90009* P_90039, NI D_90040);
static N_INLINE(NIM_BOOL, Withinexpr_90163)(TY90009* P_90165);
N_NIMCALL(NIM_BOOL, Endswithopr_90126)(TY90009* P_90128);
N_NIMCALL(NU8, Whichkeyword_71474)(NimStringDesc* Id_71476);
N_NIMCALL(void, Limessage_46566)(TY46536 Info_46568, NU8 Msg_46569, NimStringDesc* Arg_46570);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_24385, NI Len_24386);
N_NIMCALL(void, Llstreamwrite_74058)(TY74013* S_74060, NIM_CHAR Data_74061);
N_NIMCALL(void, Llstreamclose_74040)(TY74013* S_74042);
NIM_CONST TY21602 Patternchars_90028 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP193823, "", 0);
STRING_LITERAL(TMP193824, "subschar", 8);
STRING_LITERAL(TMP193825, "metachar", 8);
STRING_LITERAL(TMP193826, "emit", 4);
STRING_LITERAL(TMP193827, "result.add", 10);
STRING_LITERAL(TMP193828, "conc", 4);
STRING_LITERAL(TMP193829, " & ", 3);
STRING_LITERAL(TMP193830, "tostring", 8);
STRING_LITERAL(TMP193831, "$", 1);
STRING_LITERAL(TMP193832, "\012", 1);
static NIM_CONST TY21602 TMP193833 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP193834, "end", 3);
STRING_LITERAL(TMP193835, "#end", 4);
STRING_LITERAL(TMP193836, "\"", 1);
STRING_LITERAL(TMP193837, "(\"", 2);
STRING_LITERAL(TMP193838, "\\x", 2);
STRING_LITERAL(TMP193839, "\\\\", 2);
STRING_LITERAL(TMP193840, "\\\'", 2);
STRING_LITERAL(TMP193841, "\\\"", 2);
STRING_LITERAL(TMP193842, "}", 1);
STRING_LITERAL(TMP193843, "\\n\"", 3);
N_NIMCALL(void, Newline_90030)(TY90009* P_90033) {
NimStringDesc* LOC1;
NimStringDesc* LOC8;
LOC1 = 0;
LOC1 = nsuRepeatChar((*P_90033).Emitpar, 41);
Llstreamwrite_74054((*P_90033).Outp, LOC1);
(*P_90033).Emitpar = 0;
if (!(((NI16) 1) < (*P_90033).Info.Line)) goto LA3;
Llstreamwrite_74054((*P_90033).Outp, ((NimStringDesc*) &TMP193832));
LA3: ;
if (!(*P_90033).Pendingexprline) goto LA6;
LOC8 = 0;
LOC8 = nsuRepeatChar(2, 32);
Llstreamwrite_74054((*P_90033).Outp, LOC8);
(*P_90033).Pendingexprline = NIM_FALSE;
LA6: ;
}
N_NIMCALL(void, Scanpar_90036)(TY90009* P_90039, NI D_90040) {
NI I_90041;
I_90041 = 0;
I_90041 = D_90040;
while (1) {
switch (((NU8)((*P_90039).X->data[I_90041]))) {
case 0:
goto LA1;
break;
case 40:
(*P_90039).Par += 1;
break;
case 41:
(*P_90039).Par -= 1;
break;
case 91:
(*P_90039).Bracket += 1;
break;
case 93:
(*P_90039).Bracket -= 1;
break;
case 123:
(*P_90039).Curly += 1;
break;
case 125:
(*P_90039).Curly -= 1;
break;
default:
break;
}
I_90041 += 1;
} LA1: ;
}
static N_INLINE(NIM_BOOL, Withinexpr_90163)(TY90009* P_90165) {
NIM_BOOL Result_90166;
NIM_BOOL LOC1;
NIM_BOOL LOC2;
Result_90166 = 0;
LOC2 = (0 < (*P_90165).Par);
if (LOC2) goto LA3;
LOC2 = (0 < (*P_90165).Bracket);
LA3: ;
LOC1 = LOC2;
if (LOC1) goto LA4;
LOC1 = (0 < (*P_90165).Curly);
LA4: ;
Result_90166 = LOC1;
return Result_90166;
}
N_NIMCALL(NIM_BOOL, Endswithopr_90126)(TY90009* P_90128) {
NIM_BOOL Result_90129;
NI I_90132;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
Result_90129 = 0;
I_90132 = 0;
I_90132 = (NI32)((*P_90128).X->Sup.len - 1);
while (1) {
LOC2 = (0 <= I_90132);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)((*P_90128).X->data[I_90132]) == (NU8)(32));
LA3: ;
if (!LOC2) goto LA1;
I_90132 -= 1;
} LA1: ;
LOC5 = (0 <= I_90132);
if (!(LOC5)) goto LA6;
LOC5 = ((TMP193833[((NU8)((*P_90128).X->data[I_90132]))/8] &(1<<(((NU8)((*P_90128).X->data[I_90132]))%8)))!=0);
LA6: ;
if (!LOC5) goto LA7;
Result_90129 = NIM_TRUE;
LA7: ;
return Result_90129;
}
N_NIMCALL(void, Parseline_90173)(TY90009* P_90176) {
NI D_90177;
NI J_90178;
NI Curly_90179;
NimStringDesc* Keyw_90180;
NIM_BOOL LOC3;
NIM_BOOL LOC11;
NU8 LOC13;
NimStringDesc* LOC17;
NimStringDesc* LOC18;
NimStringDesc* LOC19;
NimStringDesc* LOC20;
NimStringDesc* LOC21;
NimStringDesc* LOC22;
NimStringDesc* LOC23;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
NimStringDesc* LOC27;
D_90177 = 0;
J_90178 = 0;
Curly_90179 = 0;
Keyw_90180 = 0;
J_90178 = 0;
while (1) {
if (!((NU8)((*P_90176).X->data[J_90178]) == (NU8)(32))) goto LA1;
J_90178 += 1;
} LA1: ;
LOC3 = ((NU8)((*P_90176).X->data[0]) == (NU8)((*P_90176).Nimdirective));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)((*P_90176).X->data[1]) == (NU8)(33));
LA4: ;
if (!LOC3) goto LA5;
Newline_90030(P_90176);
goto LA2;
LA5: ;
if (!((NU8)((*P_90176).X->data[J_90178]) == (NU8)((*P_90176).Nimdirective))) goto LA7;
Newline_90030(P_90176);
J_90178 += 1;
while (1) {
if (!((NU8)((*P_90176).X->data[J_90178]) == (NU8)(32))) goto LA9;
J_90178 += 1;
} LA9: ;
D_90177 = J_90178;
Keyw_90180 = copyString(((NimStringDesc*) &TMP193823));
while (1) {
if (!(((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(97)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(122)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(65)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(90)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(48)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(57)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(128)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(255)) || ((NU8)((*P_90176).X->data[J_90178])) == ((NU8)(46)) || ((NU8)((*P_90176).X->data[J_90178])) == ((NU8)(95)))) goto LA10;
Keyw_90180 = addChar(Keyw_90180, (*P_90176).X->data[J_90178]);
J_90178 += 1;
} LA10: ;
Scanpar_90036(P_90176, J_90178);
LOC11 = Withinexpr_90163(&(*P_90176));
if (LOC11) goto LA12;
LOC11 = Endswithopr_90126(&(*P_90176));
LA12: ;
(*P_90176).Pendingexprline = LOC11;
LOC13 = Whichkeyword_71474(Keyw_90180);
switch (LOC13) {
case ((NU8) 19):
if (!(2 <= (*P_90176).Indent)) goto LA15;
(*P_90176).Indent -= 2;
goto LA14;
LA15: ;
(*P_90176).Info.Col = ((NI16) (J_90178));
Limessage_46566((*P_90176).Info, ((NU8) 160), ((NimStringDesc*) &TMP193834));
LA14: ;
LOC17 = 0;
LOC17 = nsuRepeatChar((*P_90176).Indent, 32);
Llstreamwrite_74054((*P_90176).Outp, LOC17);
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193835));
break;
case ((NU8) 26):
case ((NU8) 58):
case ((NU8) 54):
case ((NU8) 59):
case ((NU8) 23):
case ((NU8) 7):
case ((NU8) 9):
case ((NU8) 46):
case ((NU8) 33):
case ((NU8) 13):
case ((NU8) 36):
case ((NU8) 53):
case ((NU8) 37):
LOC18 = 0;
LOC18 = nsuRepeatChar((*P_90176).Indent, 32);
Llstreamwrite_74054((*P_90176).Outp, LOC18);
LOC19 = 0;
LOC19 = copyStr((*P_90176).X, D_90177);
Llstreamwrite_74054((*P_90176).Outp, LOC19);
(*P_90176).Indent += 2;
break;
case ((NU8) 17):
case ((NU8) 43):
case ((NU8) 18):
case ((NU8) 21):
case ((NU8) 22):
LOC20 = 0;
LOC20 = nsuRepeatChar((NI32)((*P_90176).Indent - 2), 32);
Llstreamwrite_74054((*P_90176).Outp, LOC20);
LOC21 = 0;
LOC21 = copyStr((*P_90176).X, D_90177);
Llstreamwrite_74054((*P_90176).Outp, LOC21);
break;
default:
LOC22 = 0;
LOC22 = nsuRepeatChar((*P_90176).Indent, 32);
Llstreamwrite_74054((*P_90176).Outp, LOC22);
LOC23 = 0;
LOC23 = copyStr((*P_90176).X, D_90177);
Llstreamwrite_74054((*P_90176).Outp, LOC23);
break;
}
(*P_90176).State = ((NU8) 0);
goto LA2;
LA7: ;
(*P_90176).Par = 0;
(*P_90176).Curly = 0;
(*P_90176).Bracket = 0;
J_90178 = 0;
switch ((*P_90176).State) {
case ((NU8) 1):
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Conc);
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193832));
LOC24 = 0;
LOC24 = nsuRepeatChar((NI32)((*P_90176).Indent + 2), 32);
Llstreamwrite_74054((*P_90176).Outp, LOC24);
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193836));
break;
case ((NU8) 0):
Newline_90030(P_90176);
LOC25 = 0;
LOC25 = nsuRepeatChar((*P_90176).Indent, 32);
Llstreamwrite_74054((*P_90176).Outp, LOC25);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Emit);
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193837));
(*P_90176).Emitpar += 1;
break;
}
(*P_90176).State = ((NU8) 1);
while (1) {
switch (((NU8)((*P_90176).X->data[J_90178]))) {
case 0:
goto LA26;
break;
case 1 ... 31:
case 128 ... 255:
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193838));
LOC27 = 0;
LOC27 = nsuToHex(((NI64) (((NU8)((*P_90176).X->data[J_90178])))), 2);
Llstreamwrite_74054((*P_90176).Outp, LOC27);
J_90178 += 1;
break;
case 92:
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193839));
J_90178 += 1;
break;
case 39:
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193840));
J_90178 += 1;
break;
case 34:
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193841));
J_90178 += 1;
break;
default:
if (!((NU8)((*P_90176).X->data[J_90178]) == (NU8)((*P_90176).Subschar))) goto LA29;
J_90178 += 1;
switch (((NU8)((*P_90176).X->data[J_90178]))) {
case 123:
(*P_90176).Info.Col = ((NI16) (J_90178));
Llstreamwrite_74058((*P_90176).Outp, 34);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Conc);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Tostr);
Llstreamwrite_74058((*P_90176).Outp, 40);
J_90178 += 1;
Curly_90179 = 0;
while (1) {
switch (((NU8)((*P_90176).X->data[J_90178]))) {
case 0:
Limessage_46566((*P_90176).Info, ((NU8) 184), ((NimStringDesc*) &TMP193842));
break;
case 123:
J_90178 += 1;
Curly_90179 += 1;
Llstreamwrite_74058((*P_90176).Outp, 123);
break;
case 125:
J_90178 += 1;
if (!(Curly_90179 == 0)) goto LA33;
goto LA31;
LA33: ;
if (!(0 < Curly_90179)) goto LA36;
Curly_90179 -= 1;
LA36: ;
Llstreamwrite_74058((*P_90176).Outp, 125);
break;
default:
Llstreamwrite_74058((*P_90176).Outp, (*P_90176).X->data[J_90178]);
J_90178 += 1;
break;
}
} LA31: ;
Llstreamwrite_74058((*P_90176).Outp, 41);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Conc);
Llstreamwrite_74058((*P_90176).Outp, 34);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
Llstreamwrite_74058((*P_90176).Outp, 34);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Conc);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Tostr);
Llstreamwrite_74058((*P_90176).Outp, 40);
while (1) {
if (!(((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(97)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(122)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(65)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(90)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(48)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(57)) || ((NU8)((*P_90176).X->data[J_90178])) >= ((NU8)(128)) && ((NU8)((*P_90176).X->data[J_90178])) <= ((NU8)(255)) || ((NU8)((*P_90176).X->data[J_90178])) == ((NU8)(46)) || ((NU8)((*P_90176).X->data[J_90178])) == ((NU8)(95)))) goto LA38;
Llstreamwrite_74058((*P_90176).Outp, (*P_90176).X->data[J_90178]);
J_90178 += 1;
} LA38: ;
Llstreamwrite_74058((*P_90176).Outp, 41);
Llstreamwrite_74054((*P_90176).Outp, (*P_90176).Conc);
Llstreamwrite_74058((*P_90176).Outp, 34);
break;
default:
if (!((NU8)((*P_90176).X->data[J_90178]) == (NU8)((*P_90176).Subschar))) goto LA40;
Llstreamwrite_74058((*P_90176).Outp, (*P_90176).Subschar);
J_90178 += 1;
goto LA39;
LA40: ;
(*P_90176).Info.Col = ((NI16) (J_90178));
Limessage_46566((*P_90176).Info, ((NU8) 165), ((NimStringDesc*) &TMP193831));
LA39: ;
break;
}
goto LA28;
LA29: ;
Llstreamwrite_74058((*P_90176).Outp, (*P_90176).X->data[J_90178]);
J_90178 += 1;
LA28: ;
break;
}
} LA26: ;
Llstreamwrite_74054((*P_90176).Outp, ((NimStringDesc*) &TMP193843));
LA2: ;
}
N_NIMCALL(TY74013*, Filtertmpl_90001)(TY74013* Stdin_90003, NimStringDesc* Filename_90004, TY54525* Call_90005) {
TY74013* Result_90485;
TY90009 P_90486;
NIM_BOOL LOC2;
Result_90485 = 0;
memset((void*)&P_90486, 0, sizeof(P_90486));
P_90486.Info = Newlineinfo_46578(Filename_90004, 0, 0);
P_90486.Outp = Llstreamopen_74025(((NimStringDesc*) &TMP193823));
P_90486.Inp = Stdin_90003;
P_90486.Subschar = Chararg_89014(Call_90005, ((NimStringDesc*) &TMP193824), 1, 36);
P_90486.Nimdirective = Chararg_89014(Call_90005, ((NimStringDesc*) &TMP193825), 2, 35);
P_90486.Emit = Strarg_89020(Call_90005, ((NimStringDesc*) &TMP193826), 3, ((NimStringDesc*) &TMP193827));
P_90486.Conc = Strarg_89020(Call_90005, ((NimStringDesc*) &TMP193828), 4, ((NimStringDesc*) &TMP193829));
P_90486.Tostr = Strarg_89020(Call_90005, ((NimStringDesc*) &TMP193830), 5, ((NimStringDesc*) &TMP193831));
while (1) {
LOC2 = Llstreamatend_74071(P_90486.Inp);
if (!!(LOC2)) goto LA1;
P_90486.X = Llstreamreadline_74048(P_90486.Inp);
P_90486.Info.Line = (NI16)(P_90486.Info.Line + ((NI16) 1));
Parseline_90173(&P_90486);
} LA1: ;
Newline_90030(&P_90486);
Result_90485 = P_90486.Outp;
Llstreamclose_74040(P_90486.Inp);
return Result_90485;
}
N_NOINLINE(void, ptmplsynInit)(void) {
}

