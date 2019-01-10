/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint32_t mul12s_D96(uint16_t A, uint16_t B)
{
 uint32_t O;
 uint8_t n557,n563,n550,O8,n492,n551,n552,n538,n447,n536,n537,n534,n553,n532,n530,n531,n657,O21,n656,n569,n568,n441,O14,O4,n85,n84,n87,n86,n81,n80,n83,n82,n402,n400,n401,n89,n404,n405,n659,n658,n710,n392,n393,n390,n391,n396,n397,n394,n395,n398,n399,n711,n240,n241,n242,n243,n244,n245,n246,n247,n248,n249,n718,n719,n499,n498,n329,n328,n327,n326,n325,n324,n323,n322,n321,n320,n407,n602,n662,n663,n149,n148,n666,n667,n664,n665,n143,n142,n141,n669,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,n79,n338,n738,n339,n701,n700,n703,n565,n564,n567,n250,n561,n560,n448,n449,n446,n257,n444,n445,n442,n443,n440,n256,O1,n733,n734,n706,n735,n736,n708,n737,O15,n693,n692,n691,n690,n697,n696,n695,n694,n699,n698,n363,n362,n361,n360,n367,n366,n365,n364,n369,n368,O17,n598,n599,n591,n592,n593,n594,n595,n596,n597,n510,O13,n223,n511,n627,n624,n625,n622,n623,n189,n188,n187,n186,n185,n184,n183,n182,n628,n629,n749,n748,n219,n745,n744,n215,n214,n213,n212,n211,n210,O5,O2,n133,n130,n131,n136,n137,n134,n135,n138,n139,n720,n408,n529,n528,n409,n521,n520,n523,n522,n525,n524,n527,n526,n740,n661,n406,n88,n415,n414,n417,n416,n411,n410,n413,n412,n419,n418,n98,n99,n558,n559,n645,n92,n93,n90,n91,n96,n97,n94,n95,n742,n641,n389,n388,n385,n384,n387,n386,n381,n380,n383,n382,n173,n253,n252,n251,n702,n705,n704,n255,n254,n709,n648,n259,n258,n649,n318,n319,n312,n313,n310,n311,n316,n317,n314,n315,O9,n484,O22,n176,n177,n174,n175,n172,O6,n170,n178,n179,n679,n678,n675,n674,n676,n671,n670,n673,n672,n626,O19,n620,n621,n222,O23,n741,n459,n458,n512,n513,n514,n515,n516,n517,n518,n450,n453,n452,n455,n454,n457,n456,O12,n716,n717,n181,n714,n493,n217,n715,n216,n712,n747,n713,n428,n429,n358,n359,n356,n425,n354,n355,n352,n353,n422,n423,n589,n588,n743,n583,n582,n581,n580,n587,n586,n585,n584,n545,n631,n630,n633,n632,n635,n634,n637,n639,n487,n610,O11,n739,n228,n229,n730,n731,n220,n221,n226,n227,n224,n225,n279,n555,n278,n495,n494,n497,n496,n491,n490,n644,n378,n646,n647,n129,n128,n642,n379,n125,n124,n127,n126,n121,n120,n123,n122,n566,O16,n460,n461,n462,n463,n464,n465,n466,n467,n468,n469,n549,n548,n547,n546,O3,n544,n543,n542,n541,n540,n341,n481,n340,n343,n562,n342,n345,n344,n424,n346,n305,n304,n307,n306,n301,n300,n268,n269,n266,n267,n264,n265,n309,n308,n260,n261,n638,n284,n285,n286,n287,n280,n281,n282,n283,n288,n289,n161,n160,n163,n162,n165,n164,n167,n166,n169,n168,n427,n608,n609,n600,n601,n603,n604,n605,n606,n607,n58,n59,n56,n54,n55,n52,n53,n451,n519,n421,n660,n114,n115,n116,n117,n110,n111,n112,n113,n539,n118,n119,n503,n502,n501,n500,n507,n506,n505,n504,n509,n508,n668,n140,O7,n750,n349,n348,n439,n438,n437,n436,n435,n434,n433,n432,n431,n430,n535,n618,n554,n613,n612,n611,n235,n234,n237,n236,n231,n230,n233,n232,n617,n337,n239,n238,n616,n482,n483,n729,n728,n486,n615,n485,n334,n335,n488,n614,n330,n331,n332,n333,O20,O18,n480,O0,n158,n159,n655,n654,n653,n652,n651,n650,n150,n151,n152,n153,n154,n155,n156,n157,n67,n66,n64,n63,n62,n61,n60,n69,n68,n723,n722,n721,n489,n303,n727,n302,n726,n725,n724,O10,n262,n263,n473,n472,n470,n477,n476,n475,n474,n479,n478,n578,n579,n572,n573,n570,n571,n576,n577,n574,n575,n680,n681,n682,n683,n684,n685,n686,n687,n688,n689,n347,n370,n371,n372,n373,n374,n375,n376,n377,n271,n270,n272,n275,n274,n277,n276,n357,n426,n297,n296,n295,n294,n293,n292,n291,n290,n420,n299,n298,n350,n351,n198,n199,n194,n195,n196,n197,n190,n191,n192,n193,n752,n619,n751,n208,n209,n204,n205,n206,n207,n200,n201,n202,n203,n640,n180,n643,n107,n106,n105,n104,n103,n102,n100,n556,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=((B >> 2)&1)&((A >> 2)&1);
 n100=((B >> 2)&1)&((A >> 6)&1);
 n125=((B >> 5)&1)&((A >> 4)&1);
 n127=((B >> 7)&1)&((A >> 2)&1);
 n128=((B >> 6)&1)&((A >> 3)&1);
 n129=((B >> 4)&1)&((A >> 5)&1);
 n130=((B >> 3)&1)&((A >> 6)&1);
 n131=((B >> 2)&1)&((A >> 7)&1);
 n163=((B >> 6)&1)&((A >> 4)&1);
 n165=((B >> 8)&1)&((A >> 2)&1);
 n166=((B >> 7)&1)&((A >> 3)&1);
 n167=((B >> 5)&1)&((A >> 5)&1);
 n168=((B >> 4)&1)&((A >> 6)&1);
 n169=((B >> 3)&1)&((A >> 7)&1);
 n170=((B >> 2)&1)&((A >> 8)&1);
 n209=((B >> 7)&1)&((A >> 4)&1);
 n211=((B >> 9)&1)&((A >> 2)&1);
 n212=((B >> 8)&1)&((A >> 3)&1);
 n213=((B >> 6)&1)&((A >> 5)&1);
 n214=((B >> 5)&1)&((A >> 6)&1);
 n215=((B >> 4)&1)&((A >> 7)&1);
 n216=((B >> 3)&1)&((A >> 8)&1);
 n217=((B >> 2)&1)&((A >> 9)&1);
 n263=((B >> 8)&1)&((A >> 4)&1);
 n265=((B >> 10)&1)&((A >> 2)&1);
 n266=((B >> 9)&1)&((A >> 3)&1);
 n267=((B >> 7)&1)&((A >> 5)&1);
 n268=((B >> 6)&1)&((A >> 6)&1);
 n269=((B >> 5)&1)&((A >> 7)&1);
 n270=((B >> 4)&1)&((A >> 8)&1);
 n271=((B >> 3)&1)&((A >> 9)&1);
 n272=((B >> 2)&1)&((A >> 10)&1);
 n280=((B >> 2)&1)&((A >> 11)&1);
 n326=((B >> 9)&1)&((A >> 4)&1);
 n328=((B >> 11)&1)&((A >> 2)&1);
 n329=((B >> 10)&1)&((A >> 3)&1);
 n330=((B >> 8)&1)&((A >> 5)&1);
 n331=((B >> 7)&1)&((A >> 6)&1);
 n332=((B >> 6)&1)&((A >> 7)&1);
 n333=((B >> 5)&1)&((A >> 8)&1);
 n334=((B >> 4)&1)&((A >> 9)&1);
 n335=((B >> 3)&1)&((A >> 10)&1);
 n349=((B >> 3)&1)&((A >> 11)&1);
 n395=((B >> 10)&1)&((A >> 4)&1);
 n396=((B >> 11)&1)&((A >> 3)&1);
 n397=((B >> 9)&1)&((A >> 5)&1);
 n398=((B >> 8)&1)&((A >> 6)&1);
 n399=((B >> 7)&1)&((A >> 7)&1);
 n400=((B >> 6)&1)&((A >> 8)&1);
 n401=((B >> 5)&1)&((A >> 9)&1);
 n402=((B >> 4)&1)&((A >> 10)&1);
 n418=((B >> 4)&1)&((A >> 11)&1);
 n454=((B >> 9)&1)&((A >> 6)&1);
 n462=((B >> 10)&1)&((A >> 5)&1);
 n465=~(((A >> 4)&1)|((A >> 3)&1));
 n467=((B >> 8)&1)&((A >> 7)&1);
 n468=((B >> 7)&1)&((A >> 8)&1);
 n469=((B >> 6)&1)&((A >> 9)&1);
 n470=((B >> 5)&1)&((A >> 10)&1);
 n490=((B >> 5)&1)&((A >> 11)&1);
 n527=((B >> 11)&1)&((A >> 5)&1);
 n528=((B >> 10)&1)&((A >> 6)&1);
 n529=((B >> 9)&1)&((A >> 7)&1);
 n53=((B >> 3)&1)&((A >> 3)&1);
 n530=((B >> 8)&1)&((A >> 8)&1);
 n531=((B >> 7)&1)&((A >> 9)&1);
 n532=((B >> 6)&1)&((A >> 10)&1);
 n55=((B >> 3)&1)&((A >> 2)&1);
 n552=((B >> 6)&1)&((A >> 11)&1);
 n56=((B >> 2)&1)&((A >> 3)&1);
 n574=((B >> 9)&1)&((A >> 8)&1);
 n582=((B >> 10)&1)&((A >> 7)&1);
 n586=((B >> 11)&1)&((A >> 6)&1);
 n588=((B >> 8)&1)&((A >> 9)&1);
 n589=((B >> 7)&1)&((A >> 10)&1);
 n60=((B >> 4)&1)&((A >> 3)&1);
 n609=((B >> 7)&1)&((A >> 11)&1);
 n62=((B >> 4)&1)&((A >> 2)&1);
 n632=((B >> 11)&1)&((A >> 7)&1);
 n633=((B >> 10)&1)&((A >> 8)&1);
 n634=((B >> 9)&1)&((A >> 9)&1);
 n635=((B >> 8)&1)&((A >> 10)&1);
 n64=((B >> 2)&1)&((A >> 4)&1);
 n655=((B >> 8)&1)&((A >> 11)&1);
 n663=((B >> 9)&1)&((A >> 10)&1);
 n671=((B >> 10)&1)&((A >> 9)&1);
 n675=((B >> 11)&1)&((A >> 8)&1);
 n696=((B >> 9)&1)&((A >> 11)&1);
 n705=((B >> 11)&1)&((A >> 9)&1);
 n706=((B >> 10)&1)&((A >> 10)&1);
 n726=((B >> 10)&1)&((A >> 11)&1);
 n730=((B >> 11)&1)&((A >> 10)&1);
 n74=((B >> 3)&1)&((A >> 4)&1);
 n745=((B >> 11)&1)&((A >> 11)&1);
 n76=((B >> 5)&1)&((A >> 2)&1);
 n77=((B >> 2)&1)&((A >> 5)&1);
 n95=((B >> 4)&1)&((A >> 4)&1);
 n97=((B >> 6)&1)&((A >> 2)&1);
 n98=((B >> 5)&1)&((A >> 3)&1);
 n99=((B >> 3)&1)&((A >> 5)&1);
 n124=n98&n97;
 n126=n128^n127;
 n162=n128&n127;
 n164=n166^n165;
 n208=n166&n165;
 n210=n212^n211;
 n262=n212&n211;
 n264=n266^n265;
 n325=n266&n265;
 n327=~(n329^n328);
 n394=n329&~n328;
 n460=n395&n396;
 n464=((B >> 11)&1)&~n465;
 n466=((A >> 4)&1)&n396;
 n52=n53&O4;
 n54=~(n56|n55);
 n59=n60&n55;
 n61=~(n62|n53);
 n75=n76^n60;
 n94=n76&n60;
 n96=n98^n97;
 O5=~(n54|n52);
 n119=n95&n94;
 n120=n95&n96;
 n121=n96&n94;
 n123=~(n125^n124);
 n157=n125&n124;
 n158=n125&n126;
 n159=n126&n124;
 n161=~(n163^n162);
 n203=n163&n162;
 n204=n163&n164;
 n205=n164&n162;
 n207=~(n209^n208);
 n257=n209&n208;
 n258=n209&n210;
 n259=n210&n208;
 n261=~(n263^n262);
 n320=n263&n262;
 n321=n263&n264;
 n322=n264&n262;
 n324=~(n326^n325);
 n389=n326&n325;
 n390=n326&n327;
 n391=n327&n325;
 n393=~(n395^n394);
 n459=n395&n394;
 n461=n396&n394;
 n463=~n466&n464;
 n526=n527^n464;
 n58=~(n61|n59);
 n585=~(n527|n464);
 n63=~(n64^n52);
 n70=n64&n52;
 n73=~(n74^n59);
 n89=n74&n59;
 n90=n74&n75;
 n91=n75&n59;
 n93=~(n95^n94);
 O6=~(n63^n58);
 n118=~(n120|n119);
 n122=n126^n123;
 n156=~(n158|n157);
 n160=n164^n161;
 n202=~(n204|n203);
 n206=n210^n207;
 n256=~(n258|n257);
 n260=n264^n261;
 n319=~(n321|n320);
 n323=n327^n324;
 n388=~(n390|n389);
 n392=n396^n393;
 n458=~(n460|n459);
 n524=n462&n463;
 n580=n528&n526;
 n584=~n586&n585;
 n587=((A >> 6)&1)&~n585;
 n69=n64&n58;
 n71=n52&n58;
 n72=n75^n73;
 n88=~(n90|n89);
 n92=n96^n93;
 n113=n99&~n92;
 n117=~n121&n118;
 n151=n129&~n122;
 n155=~n159&n156;
 n197=n167&~n160;
 n201=~n205&n202;
 n251=n213&~n206;
 n255=~n259&n256;
 n314=n267&~n260;
 n318=~n322&n319;
 n383=n330&~n323;
 n387=~n391&n388;
 n452=n397&~n392;
 n457=~n461&n458;
 n583=~(n587|n584);
 n631=~(n632^n584);
 n674=~n632&n584;
 n68=~(n70|n69);
 n83=n77&~n72;
 n87=~n91&n88;
 n112=~(n92|n87);
 n114=n99&~n87;
 n116=~(n122^n117);
 n150=~(n122|n117);
 n152=n129&~n117;
 n154=~(n160^n155);
 n196=~(n160|n155);
 n198=n167&~n155;
 n200=~(n206^n201);
 n250=~(n206|n201);
 n252=n213&~n201;
 n254=~(n260^n255);
 n313=~(n260|n255);
 n315=n267&~n255;
 n317=~(n323^n318);
 n382=~(n323|n318);
 n384=n330&~n318;
 n386=~(n392^n387);
 n451=~(n392|n387);
 n453=n397&~n387;
 n456=n462^n457;
 n523=n462&~n457;
 n525=n463&~n457;
 n629=n582&n583;
 n669=n633&n631;
 n67=~n71&n68;
 n673=~n675&n674;
 n676=((A >> 8)&1)&~n674;
 n86=~(n92^n87);
 n111=~(n113|n112);
 n115=n129^n116;
 n149=~(n151|n150);
 n153=n167^n154;
 n195=~(n197|n196);
 n199=n213^n200;
 n249=~(n251|n250);
 n253=n267^n254;
 n312=~(n314|n313);
 n316=n330^n317;
 n381=~(n383|n382);
 n385=n397^n386;
 n450=~(n452|n451);
 n455=n463^n456;
 n522=~(n524|n523);
 n66=~(n72^n67);
 n672=~(n676|n673);
 n704=~(n705^n673);
 n729=~n705&n673;
 n82=~(n72|n67);
 n84=n77&~n67;
 n85=n99^n86;
 O7=~(n77^n66);
 n107=n100&~n85;
 n110=~n114&n111;
 n145=n130&~n115;
 n148=~n152&n149;
 n191=n168&~n153;
 n194=~n198&n195;
 n245=n214&~n199;
 n248=~n252&n249;
 n308=n268&~n253;
 n311=~n315&n312;
 n377=n331&~n316;
 n380=~n384&n381;
 n446=n398&~n385;
 n449=~n453&n450;
 n517=n454&~n455;
 n521=~n525&n522;
 n702=n671&n672;
 n724=n706&n704;
 n728=~n730&n729;
 n731=((A >> 10)&1)&~n729;
 n81=~(n83|n82);
 n109=~(n115^n110);
 n143=~(n115|n110);
 n144=n130&~n110;
 n147=~(n153^n148);
 n189=~(n153|n148);
 n190=n168&~n148;
 n193=~(n199^n194);
 n243=~(n199|n194);
 n244=n214&~n194;
 n247=~(n253^n248);
 n306=~(n253|n248);
 n307=n268&~n248;
 n310=~(n316^n311);
 n375=~(n316|n311);
 n376=n331&~n311;
 n379=~(n385^n380);
 n444=~(n385|n380);
 n445=n398&~n380;
 n448=n454^n449;
 n516=n454&~n449;
 n518=~(n455|n449);
 n520=n526^n521;
 n579=n526&~n521;
 n581=n528&~n521;
 n727=~(n731|n728);
 n744=~(n745^n728);
 n751=n745&n728;
 n80=~n84&n81;
 n105=~(n85|n80);
 n106=n100&~n80;
 n108=n130^n109;
 n142=~(n144|n143);
 n146=n168^n147;
 n188=~(n190|n189);
 n192=n214^n193;
 n242=~(n244|n243);
 n246=n268^n247;
 n305=~(n307|n306);
 n309=n331^n310;
 n374=~(n376|n375);
 n378=n398^n379;
 n443=~(n445|n444);
 n447=~(n455^n448);
 n515=~(n517|n516);
 n519=n528^n520;
 n578=~(n580|n579);
 n742=~n726&n727;
 n79=~(n85^n80);
 O8=~(n100^n79);
 n104=~(n106|n105);
 n138=n131&~n108;
 n141=~n145&n142;
 n184=n169&~n146;
 n187=~n191&n188;
 n238=n215&~n192;
 n241=~n245&n242;
 n301=n269&~n246;
 n304=~n308&n305;
 n370=n332&~n309;
 n373=~n377&n374;
 n439=n399&~n378;
 n442=~n446&n443;
 n510=n467&~n447;
 n514=~n518&n515;
 n572=n529&~n519;
 n577=~n581&n578;
 n103=~n107&n104;
 n140=~(n146^n141);
 n182=~(n146|n141);
 n183=n169&~n141;
 n186=~(n192^n187);
 n236=~(n192|n187);
 n237=n215&~n187;
 n240=~(n246^n241);
 n299=~(n246|n241);
 n300=n269&~n241;
 n303=~(n309^n304);
 n368=~(n309|n304);
 n369=n332&~n304;
 n372=~(n378^n373);
 n437=~(n378|n373);
 n438=n399&~n373;
 n441=~(n447^n442);
 n509=~(n447|n442);
 n511=n467&~n442;
 n513=~(n519^n514);
 n571=~(n519|n514);
 n573=n529&~n514;
 n576=n582^n577;
 n628=n582&~n577;
 n630=n583&~n577;
 n102=~(n108^n103);
 n136=~(n108|n103);
 n137=n131&~n103;
 n139=n169^n140;
 n181=~(n183|n182);
 n185=n215^n186;
 n235=~(n237|n236);
 n239=n269^n240;
 n298=~(n300|n299);
 n302=n332^n303;
 n367=~(n369|n368);
 n371=n399^n372;
 n436=~(n438|n437);
 n440=n467^n441;
 n508=~(n510|n509);
 n512=n529^n513;
 n570=~(n572|n571);
 n575=n583^n576;
 n627=~(n629|n628);
 O9=~(n131^n102);
 n135=~(n137|n136);
 n177=n170&~n139;
 n180=~n184&n181;
 n231=n216&~n185;
 n234=~n238&n235;
 n294=n270&~n239;
 n297=~n301&n298;
 n363=n333&~n302;
 n366=~n370&n367;
 n432=n400&~n371;
 n435=~n439&n436;
 n503=n468&~n440;
 n507=~n511&n508;
 n565=n530&~n512;
 n569=~n573&n570;
 n622=n574&~n575;
 n626=~n630&n627;
 n134=~n138&n135;
 n179=~(n185^n180);
 n229=~(n185|n180);
 n230=n216&~n180;
 n233=~(n239^n234);
 n292=~(n239|n234);
 n293=n270&~n234;
 n296=~(n302^n297);
 n361=~(n302|n297);
 n362=n333&~n297;
 n365=~(n371^n366);
 n430=~(n371|n366);
 n431=n400&~n366;
 n434=~(n440^n435);
 n502=~(n440|n435);
 n504=n468&~n435;
 n506=~(n512^n507);
 n564=~(n512|n507);
 n566=n530&~n507;
 n568=n574^n569;
 n621=n574&~n569;
 n623=~(n575|n569);
 n625=n631^n626;
 n668=n631&~n626;
 n670=n633&~n626;
 n133=~(n139^n134);
 n175=~(n139|n134);
 n176=n170&~n134;
 n178=n216^n179;
 n228=~(n230|n229);
 n232=n270^n233;
 n291=~(n293|n292);
 n295=n333^n296;
 n360=~(n362|n361);
 n364=n400^n365;
 n429=~(n431|n430);
 n433=n468^n434;
 n501=~(n503|n502);
 n505=n530^n506;
 n563=~(n565|n564);
 n567=~(n575^n568);
 n620=~(n622|n621);
 n624=n633^n625;
 n667=~(n669|n668);
 O10=~(n170^n133);
 n174=~(n176|n175);
 n224=n217&~n178;
 n227=~n231&n228;
 n287=n271&~n232;
 n290=~n294&n291;
 n356=n334&~n295;
 n359=~n363&n360;
 n425=n401&~n364;
 n428=~n432&n429;
 n496=n469&~n433;
 n500=~n504&n501;
 n558=n531&~n505;
 n562=~n566&n563;
 n615=n588&~n567;
 n619=~n623&n620;
 n661=n634&~n624;
 n666=~n670&n667;
 n173=~n177&n174;
 n226=~(n232^n227);
 n285=~(n232|n227);
 n286=n271&~n227;
 n289=~(n295^n290);
 n354=~(n295|n290);
 n355=n334&~n290;
 n358=~(n364^n359);
 n423=~(n364|n359);
 n424=n401&~n359;
 n427=~(n433^n428);
 n495=~(n433|n428);
 n497=n469&~n428;
 n499=~(n505^n500);
 n557=~(n505|n500);
 n559=n531&~n500;
 n561=~(n567^n562);
 n614=~(n567|n562);
 n616=n588&~n562;
 n618=~(n624^n619);
 n660=~(n624|n619);
 n662=n634&~n619;
 n665=n671^n666;
 n701=n671&~n666;
 n703=n672&~n666;
 n172=~(n178^n173);
 n222=~(n178|n173);
 n223=n217&~n173;
 n225=n271^n226;
 n284=~(n286|n285);
 n288=n334^n289;
 n353=~(n355|n354);
 n357=n401^n358;
 n422=~(n424|n423);
 n426=n469^n427;
 n494=~(n496|n495);
 n498=n531^n499;
 n556=~(n558|n557);
 n560=n588^n561;
 n613=~(n615|n614);
 n617=n634^n618;
 n659=~(n661|n660);
 n664=n672^n665;
 n700=~(n702|n701);
 O11=~(n217^n172);
 n221=~(n223|n222);
 n279=n272&~n225;
 n283=~n287&n284;
 n348=n335&~n288;
 n352=~n356&n353;
 n417=n402&~n357;
 n421=~n425&n422;
 n488=n470&~n426;
 n493=~n497&n494;
 n550=n532&~n498;
 n555=~n559&n556;
 n607=n589&~n560;
 n612=~n616&n613;
 n653=n635&~n617;
 n658=~n662&n659;
 n694=n663&~n664;
 n699=~n703&n700;
 n220=~n224&n221;
 n282=~(n288^n283);
 n346=~(n288|n283);
 n347=n335&~n283;
 n351=~(n357^n352);
 n415=~(n357|n352);
 n416=n402&~n352;
 n420=~(n426^n421);
 n487=~(n426|n421);
 n489=n470&~n421;
 n492=~(n498^n493);
 n549=~(n498|n493);
 n551=n532&~n493;
 n554=~(n560^n555);
 n606=~(n560|n555);
 n608=n589&~n555;
 n611=~(n617^n612);
 n652=~(n617|n612);
 n654=n635&~n612;
 n657=n663^n658;
 n693=n663&~n658;
 n695=~(n664|n658);
 n698=n704^n699;
 n723=n704&~n699;
 n725=n706&~n699;
 n219=~(n225^n220);
 n277=~(n225|n220);
 n278=n272&~n220;
 n281=n335^n282;
 n345=~(n347|n346);
 n350=n402^n351;
 n414=~(n416|n415);
 n419=n470^n420;
 n486=~(n488|n487);
 n491=n532^n492;
 n548=~(n550|n549);
 n553=n589^n554;
 n605=~(n607|n606);
 n610=n635^n611;
 n651=~(n653|n652);
 n656=~(n664^n657);
 n692=~(n694|n693);
 n697=n706^n698;
 n722=~(n724|n723);
 O12=~(n272^n219);
 n276=~(n278|n277);
 n340=~(n280|n281);
 n344=~n348&n345;
 n409=~(n349|n350);
 n413=~n417&n414;
 n481=~(n418|n419);
 n485=~n489&n486;
 n543=~(n490|n491);
 n547=~n551&n548;
 n600=~(n552|n553);
 n604=~n608&n605;
 n646=~(n609|n610);
 n650=~n654&n651;
 n687=~(n655|n656);
 n691=~n695&n692;
 n717=~(n696|n697);
 n721=~n725&n722;
 n275=~n279&n276;
 n343=~(n349^n344);
 n408=~(n349|n344);
 n410=~(n350|n344);
 n412=~(n418^n413);
 n480=~(n418|n413);
 n482=~(n419|n413);
 n484=~(n490^n485);
 n542=~(n490|n485);
 n544=~(n491|n485);
 n546=~(n552^n547);
 n599=~(n552|n547);
 n601=~(n553|n547);
 n603=~(n609^n604);
 n645=~(n609|n604);
 n647=~(n610|n604);
 n649=~(n655^n650);
 n686=~(n655|n650);
 n688=~(n656|n650);
 n690=~(n696^n691);
 n716=~(n696|n691);
 n718=~(n697|n691);
 n720=~(n726^n721);
 n741=~(n726|n721);
 n743=n727&~n721;
 n274=~(n280^n275);
 n339=~(n280|n275);
 n341=~(n281|n275);
 n342=~(n350^n343);
 n407=~(n409|n408);
 n411=~(n419^n412);
 n479=~(n481|n480);
 n483=~(n491^n484);
 n541=~(n543|n542);
 n545=~(n553^n546);
 n598=~(n600|n599);
 n602=~(n610^n603);
 n644=~(n646|n645);
 n648=~(n656^n649);
 n685=~(n687|n686);
 n689=~(n697^n690);
 n715=~(n717|n716);
 n719=n727^n720;
 n740=~(n742|n741);
 O13=n281^n274;
 n338=~(n340|n339);
 n406=~n410&n407;
 n478=~n482&n479;
 n540=~n544&n541;
 n597=~n601&n598;
 n643=~n647&n644;
 n684=~n688&n685;
 n714=~n718&n715;
 n739=~n743&n740;
 n337=~n341&n338;
 n405=~(n411^n406);
 n476=~(n411|n406);
 n538=~(n483|n478);
 n595=~(n545|n540);
 n641=~(n602|n597);
 n682=~(n648|n643);
 n712=~(n689|n684);
 n737=~(n719|n714);
 n750=~(n744|n739);
 O14=n342^n337;
 n404=~(n342|n337);
 n749=~(n751|n750);
 O15=~(n405^n404);
 n475=~n411&n404;
 n477=~n406&n404;
 n474=~(n476|n475);
 n473=~n477&n474;
 n472=~(n478^n473);
 n537=~(n478|n473);
 n539=~(n483|n473);
 O16=n483^n472;
 n536=~(n538|n537);
 n535=~n539&n536;
 n534=~(n540^n535);
 n594=~(n540|n535);
 n596=~(n545|n535);
 O17=n545^n534;
 n593=~(n595|n594);
 n592=~n596&n593;
 n591=~(n597^n592);
 n640=~(n597|n592);
 n642=~(n602|n592);
 O18=n602^n591;
 n639=~(n641|n640);
 n638=~n642&n639;
 n637=~(n643^n638);
 n681=~(n643|n638);
 n683=~(n648|n638);
 O19=n648^n637;
 n680=~(n682|n681);
 n679=~n683&n680;
 n678=~(n684^n679);
 n711=~(n684|n679);
 n713=~(n689|n679);
 O20=n689^n678;
 n710=~(n712|n711);
 n709=~n713&n710;
 n708=~(n714^n709);
 n736=~(n714|n709);
 n738=~(n719|n709);
 O21=n719^n708;
 n735=~(n737|n736);
 n734=~n738&n735;
 n733=~(n739^n734);
 n748=~(n739|n734);
 n752=~(n744|n734);
 O22=n744^n733;
 n747=n749&~n748;
 O23=~n752&n747;
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15)|(O16 << 16)|(O17 << 17)|(O18 << 18)|(O19 << 19)|(O20 << 20)|(O21 << 21)|(O22 << 22)|(O23 << 23);
 return O;
}

// internal reference: truncation-tm.12.trun12_tams02a

