/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint16_t mul8s_E1C4(uint8_t A, uint8_t B)
{
 uint16_t O;
 uint8_t n38,n39,n88,O10,n95,O5,n36,n37,n209,O2,n132,n133,n130,n131,n136,n137,n134,n100,n222,n208,n138,n139,n226,n227,n224,n235,n234,n236,O12,n231,O4,n230,n85,n84,n237,n86,n81,n80,n83,n82,n118,n232,n239,n119,n129,n128,n125,n124,n127,n126,n121,n120,n123,n122,n89,n92,n238,n240,n98,n99,n245,n246,n247,n248,n249,n90,n91,n96,n97,n94,O0,n158,n159,n210,n150,n152,n153,n154,n155,n203,n157,n67,n66,n65,n64,n63,n62,n60,n189,n69,n68,n156,n173,n252,n250,n93,O15,O3,n233,n161,n149,n148,n143,n142,n141,n140,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,O9,n78,n79,n176,n177,n174,n175,n172,O6,n170,n171,n228,n178,n179,n229,n49,n48,n40,n43,n42,n45,n44,n47,O14,O8,n220,O1,n160,n163,n162,n165,n164,n167,n166,n169,n168,n194,n225,O11,n58,n59,n56,n57,n54,n55,n52,n53,n50,n51,n223,n198,n199,n195,n196,n197,n190,n191,n192,n193,n114,n115,n117,n110,n111,n112,n113,n204,n205,n206,n207,n200,n201,n202,n102,O13,n135,n242,n221,n243,n244,O7,n188,n186,n185,n184,n183,n182,n181,n180,n107,n106,n105,n104,n103,n211,n101,n218,n217,n216,n215,n214,n213,n212,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=((B >> 2)&1)&((A >> 2)&1);
 n111=((B >> 5)&1)&((A >> 4)&1);
 n113=((B >> 7)&1)&((A >> 2)&1);
 n114=((B >> 4)&1)&((A >> 5)&1);
 n115=((B >> 3)&1)&((A >> 6)&1);
 n129=((B >> 3)&1)&((A >> 7)&1);
 n147=((B >> 6)&1)&((A >> 4)&1);
 n148=((B >> 7)&1)&((A >> 3)&1);
 n149=((B >> 5)&1)&((A >> 5)&1);
 n150=((B >> 4)&1)&((A >> 6)&1);
 n166=((B >> 4)&1)&((A >> 7)&1);
 n174=((B >> 5)&1)&((A >> 6)&1);
 n182=((B >> 6)&1)&((A >> 5)&1);
 n185=~(((A >> 4)&1)|((A >> 3)&1));
 n206=((B >> 5)&1)&((A >> 7)&1);
 n216=((B >> 7)&1)&((A >> 5)&1);
 n218=((B >> 6)&1)&((A >> 6)&1);
 n239=((B >> 7)&1)&((A >> 6)&1);
 n240=((B >> 6)&1)&((A >> 7)&1);
 n250=((B >> 7)&1)&((A >> 7)&1);
 n37=((B >> 3)&1)&((A >> 3)&1);
 n39=((B >> 2)&1)&((A >> 3)&1);
 n40=((B >> 3)&1)&((A >> 2)&1);
 n43=((B >> 2)&1)&((A >> 4)&1);
 n45=((B >> 4)&1)&((A >> 2)&1);
 n56=((B >> 3)&1)&((A >> 4)&1);
 n58=((B >> 5)&1)&((A >> 2)&1);
 n59=((B >> 4)&1)&((A >> 3)&1);
 n60=((B >> 2)&1)&((A >> 5)&1);
 n78=((B >> 6)&1)&((A >> 3)&1);
 n80=((B >> 5)&1)&((A >> 3)&1);
 n81=((B >> 6)&1)&((A >> 2)&1);
 n84=((B >> 4)&1)&((A >> 4)&1);
 n85=((B >> 3)&1)&((A >> 5)&1);
 n86=((B >> 2)&1)&((A >> 6)&1);
 n94=((B >> 2)&1)&((A >> 7)&1);
 n112=~(n113^n78);
 n146=~n113&n78;
 n180=n147&n148;
 n184=((B >> 7)&1)&~n185;
 n186=((A >> 4)&1)&n148;
 n36=n37&O4;
 n38=~(n40|n39);
 n44=n45^n37;
 n55=n45&n37;
 n57=n59^n58;
 n77=n78&n58;
 n79=~(n81|n80);
 n83=n59&n58;
 O5=~(n38|n36);
 n107=n84&n83;
 n110=~(n111^n77);
 n141=n111&n77;
 n142=n111&n112;
 n143=n112&n77;
 n145=~(n147^n146);
 n179=n147&n146;
 n181=n148&n146;
 n183=~n186&n184;
 n215=~(n216|n184);
 n217=((A >> 5)&1)&n184;
 n42=~(n43^n36);
 n50=n43&n36;
 n51=n43&n44;
 n52=n44&n36;
 n54=~(n56^n55);
 n72=n56&n55;
 n73=n56&n57;
 n74=n57&n55;
 n76=~(n79|n77);
 n82=~(n84^n83);
 O6=~(n44^n42);
 n106=n84&n76;
 n108=n83&n76;
 n109=n112^n110;
 n140=~(n142|n141);
 n144=n148^n145;
 n178=~(n180|n179);
 n212=n182&n183;
 n214=~(n217|n215);
 n238=~(n239^n215);
 n249=~n239&n215;
 n49=~(n51|n50);
 n53=n57^n54;
 n71=~(n73|n72);
 n75=n82^n76;
 n100=n85&~n75;
 n105=~(n107|n106);
 n135=n114&~n109;
 n139=~n143&n140;
 n172=n149&~n144;
 n177=~n181&n178;
 n236=n218&n214;
 n248=~(n250^n249);
 n48=~n52&n49;
 n66=n60&~n53;
 n70=~n74&n71;
 n101=n85&~n70;
 n104=~n108&n105;
 n138=~(n144^n139);
 n171=~(n144|n139);
 n173=n149&~n139;
 n176=n182^n177;
 n211=n182&~n177;
 n213=n183&~n177;
 n47=~(n53^n48);
 n65=~(n53|n48);
 n67=n60&~n48;
 n69=~(n75^n70);
 n99=~(n75|n70);
 O7=~(n60^n47);
 n103=~(n109^n104);
 n134=~(n109|n104);
 n136=n114&~n104;
 n137=n149^n138;
 n170=~(n172|n171);
 n175=n183^n176;
 n210=~(n212|n211);
 n64=~(n66|n65);
 n68=n85^n69;
 n98=~(n100|n99);
 n102=n114^n103;
 n133=~(n135|n134);
 n165=n150&~n137;
 n169=~n173&n170;
 n204=n174&~n175;
 n209=~n213&n210;
 n63=~n67&n64;
 n93=n86&~n68;
 n97=~n101&n98;
 n126=~(n102|n97);
 n127=n115&~n97;
 n128=n115&~n102;
 n132=~n136&n133;
 n168=n174^n169;
 n203=n174&~n169;
 n205=~(n175|n169);
 n208=n214^n209;
 n235=n214&~n209;
 n237=n218&~n209;
 n62=~(n68^n63);
 n91=~(n68|n63);
 n92=n86&~n63;
 n96=~(n102^n97);
 O8=~(n86^n62);
 n125=~(n127|n126);
 n131=~(n137^n132);
 n163=~(n137|n132);
 n164=n150&~n132;
 n167=~(n175^n168);
 n202=~(n204|n203);
 n207=n218^n208;
 n234=~(n236|n235);
 n90=~(n92|n91);
 n95=n115^n96;
 n120=~(n94|n95);
 n124=~n128&n125;
 n130=n150^n131;
 n162=~(n164|n163);
 n197=~(n166|n167);
 n201=~n205&n202;
 n229=~(n206|n207);
 n233=~n237&n234;
 n89=~n93&n90;
 n119=~(n94|n89);
 n121=~(n95|n89);
 n123=~(n129^n124);
 n156=~(n129|n124);
 n157=~(n129|n130);
 n158=~(n124|n130);
 n161=~n165&n162;
 n200=~(n206^n201);
 n228=~(n206|n201);
 n230=~(n207|n201);
 n232=~(n238^n233);
 n88=~(n94^n89);
 O9=n95^n88;
 n118=~(n120|n119);
 n122=~(n130^n123);
 n155=~(n157|n156);
 n160=~(n166^n161);
 n196=~(n166|n161);
 n198=~(n167|n161);
 n199=~(n207^n200);
 n227=~(n229|n228);
 n231=~(n240^n232);
 n117=~n121&n118;
 n154=~n158&n155;
 n159=~(n167^n160);
 n195=~(n197|n196);
 n226=~n230&n227;
 O10=n122^n117;
 n152=~(n122|n117);
 n153=~(n159^n154);
 n192=~(n159|n154);
 n194=~n198&n195;
 O11=~(n153^n152);
 n191=~n159&n152;
 n193=~n154&n152;
 n224=~(n199|n194);
 n190=~(n192|n191);
 n189=~n193&n190;
 n188=~(n194^n189);
 n223=~(n194|n189);
 n225=~(n199|n189);
 O12=n199^n188;
 n222=~(n224|n223);
 n221=~n225&n222;
 n220=n226^n221;
 n245=n226&n221;
 O13=n231^n220;
 n244=n233&n245;
 n247=~(n233|n245);
 n243=~(n240|n244);
 n246=~(n238|n247);
 n242=n246&~n243;
 O14=n248^n242;
 n252=n249&~n242;
 O15=~(n250|n252);
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15);
 return O;
}

// internal reference: truncation-tm.08.trun8_tams02a

