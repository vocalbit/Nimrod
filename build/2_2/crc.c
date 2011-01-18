/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NI TY49040[256];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021);
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NOCONV(void*, Alloc_1950)(NI Size_1952);
N_NIMCALL(NI, Readbuffer_3714)(FILE* F_3716, void* Buffer_3717, NI Len_3718);
N_NOCONV(void, Dealloc_1960)(void* P_1962);
NIM_CONST TY49040 Crc32table_49039 = {0,
1996959894,
-301047508,
-1727442502,
124634137,
1886057615,
-379345611,
-1637575261,
249268274,
2044508324,
-522852066,
-1747789432,
162941995,
2125561021,
-407360249,
-1866523247,
498536548,
1789927666,
-205950648,
-2067906082,
450548861,
1843258603,
-187386543,
-2083289657,
325883990,
1684777152,
-43845254,
-1973040660,
335633487,
1661365465,
-99664541,
-1928851979,
997073096,
1281953886,
-715111964,
-1570279054,
1006888145,
1258607687,
-770865667,
-1526024853,
901097722,
1119000684,
-608450090,
-1396901568,
853044451,
1172266101,
-589951537,
-1412350631,
651767980,
1373503546,
-925412992,
-1076862698,
565507253,
1454621731,
-809855591,
-1195530993,
671266974,
1594198024,
-972236366,
-1324619484,
795835527,
1483230225,
-1050600021,
-1234817731,
1994146192,
31158534,
-1731059524,
-271249366,
1907459465,
112637215,
-1614814043,
-390540237,
2013776290,
251722036,
-1777751922,
-519137256,
2137656763,
141376813,
-1855689577,
-429695999,
1802195444,
476864866,
-2056965928,
-228458418,
1812370925,
453092731,
-2113342271,
-183516073,
1706088902,
314042704,
-1950435094,
-54949764,
1658658271,
366619977,
-1932296973,
-69972891,
1303535960,
984961486,
-1547960204,
-725929758,
1256170817,
1037604311,
-1529756563,
-740887301,
1131014506,
879679996,
-1385723834,
-631195440,
1141124467,
855842277,
-1442165665,
-586318647,
1342533948,
654459306,
-1106571248,
-921952122,
1466479909,
544179635,
-1184443383,
-832445281,
1591671054,
702138776,
-1328506846,
-942167884,
1504918807,
783551873,
-1212326853,
-1061524307,
-306674912,
-1698712650,
62317068,
1957810842,
-355121351,
-1647151185,
81470997,
1943803523,
-480048366,
-1805370492,
225274430,
2053790376,
-468791541,
-1828061283,
167816743,
2097651377,
-267414716,
-2029476910,
503444072,
1762050814,
-144550051,
-2140837941,
426522225,
1852507879,
-19653770,
-1982649376,
282753626,
1742555852,
-105259153,
-1900089351,
397917763,
1622183637,
-690576408,
-1580100738,
953729732,
1340076626,
-776247311,
-1497606297,
1068828381,
1219638859,
-670225446,
-1358292148,
906185462,
1090812512,
-547295293,
-1469587627,
829329135,
1181335161,
-882789492,
-1134132454,
628085408,
1382605366,
-871598187,
-1156888829,
570562233,
1426400815,
-977650754,
-1296233688,
733239954,
1555261956,
-1026031705,
-1244606671,
752459403,
1541320221,
-1687895376,
-328994266,
1969922972,
40735498,
-1677130071,
-351390145,
1913087877,
83908371,
-1782625662,
-491226604,
2075208622,
213261112,
-1831694693,
-438977011,
2094854071,
198958881,
-2032938284,
-237706686,
1759359992,
534414190,
-2118248755,
-155638181,
1873836001,
414664567,
-2012718362,
-15766928,
1711684554,
285281116,
-1889165569,
-127750551,
1634467795,
376229701,
-1609899400,
-686959890,
1308918612,
956543938,
-1486412191,
-799009033,
1231636301,
1047427035,
-1362007478,
-640263460,
1088359270,
936918000,
-1447252397,
-558129467,
1202900863,
817233897,
-1111625188,
-893730166,
1404277552,
615818150,
-1160759803,
-841546093,
1423857449,
601450431,
-1285129682,
-1000256840,
1567103746,
711928724,
-1274298825,
-1022587231,
1510334235,
755167117}
;
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017) {
int Result_49048;
Result_49048 = 0;
Result_49048 = (NI32)(((int) (Crc32table_49039[((NI64)((NI64)(((NI) (Crc_49017)) ^ (NI64)(((NI) (Val_49016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_49017) >> (NU32)(((NI32) 8))));
return Result_49048;
}
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021) {
int Result_49053;
Result_49053 = 0;
Result_49053 = Updatecrc32_49014(((NI8) (((NU8)(Val_49020)))), Crc_49021);
return Result_49053;
}
N_NIMCALL(int, HEX3EHEX3C_49091)(int C_49093, NimStringDesc* S_49094) {
int Result_49095;
NI I_49105;
NI HEX3Atmp_49106;
NI Res_49108;
Result_49095 = 0;
Result_49095 = C_49093;
I_49105 = 0;
HEX3Atmp_49106 = 0;
HEX3Atmp_49106 = (NI64)(S_49094->Sup.len - 1);
Res_49108 = 0;
Res_49108 = 0;
while (1) {
if (!(Res_49108 <= HEX3Atmp_49106)) goto LA1;
I_49105 = Res_49108;
Result_49095 = Updatecrc32_49018(S_49094->data[I_49105], Result_49095);
Res_49108 += 1;
} LA1: ;
return Result_49095;
}
N_NIMCALL(int, Crcfromfile_49029)(NimStringDesc* Filename_49031) {
int Result_49134;
FILE* Bin_49136;
void* Buf_49137;
NI Readbytes_49138;
NI8* P_49139;
NIM_BOOL LOC2;
NI I_49148;
NI HEX3Atmp_49151;
NI Res_49153;
Result_49134 = 0;
Bin_49136 = 0;
Buf_49137 = 0;
Readbytes_49138 = 0;
P_49139 = 0;
Result_49134 = ((NI32) -1);
LOC2 = Open_3617(&Bin_49136, Filename_49031, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
goto BeforeRet;
LA3: ;
Buf_49137 = Alloc_1950(8192);
P_49139 = ((NI8*) (Buf_49137));
while (1) {
Readbytes_49138 = Readbuffer_3714(Bin_49136, Buf_49137, 8192);
I_49148 = 0;
HEX3Atmp_49151 = 0;
HEX3Atmp_49151 = (NI64)(Readbytes_49138 - 1);
Res_49153 = 0;
Res_49153 = 0;
while (1) {
if (!(Res_49153 <= HEX3Atmp_49151)) goto LA6;
I_49148 = Res_49153;
Result_49134 = Updatecrc32_49014(P_49139[(I_49148)-0], Result_49134);
Res_49153 += 1;
} LA6: ;
if (!!((Readbytes_49138 == 8192))) goto LA8;
goto LA5;
LA8: ;
} LA5: ;
Dealloc_1960(Buf_49137);
fclose(Bin_49136);
BeforeRet: ;
return Result_49134;
}
N_NOINLINE(void, crcInit)(void) {
}

