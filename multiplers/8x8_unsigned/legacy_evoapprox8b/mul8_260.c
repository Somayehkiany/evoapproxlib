/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from evoapprox8b dataset
***/
#include <stdint.h>
#include <stdlib.h>

uint16_t mul8_260(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n36;
  uint8_t n37;
  uint8_t n41;
  uint8_t n43;
  uint8_t n49;
  uint8_t n50;
  uint8_t n51;
  uint8_t n55;
  uint8_t n57;
  uint8_t n60;
  uint8_t n61;
  uint8_t n62;
  uint8_t n63;
  uint8_t n70;
  uint8_t n71;
  uint8_t n75;
  uint8_t n78;
  uint8_t n79;
  uint8_t n81;
  uint8_t n83;
  uint8_t n86;
  uint8_t n88;
  uint8_t n89;
  uint8_t n92;
  uint8_t n93;
  uint8_t n97;
  uint8_t n106;
  uint8_t n110;
  uint8_t n115;
  uint8_t n121;
  uint8_t n122;
  uint8_t n128;
  uint8_t n129;
  uint8_t n134;
  uint8_t n147;
  uint8_t n150;
  uint8_t n153;
  uint8_t n160;
  uint8_t n163;
  uint8_t n222;
  uint8_t n233;
  uint8_t n238;
  uint8_t n253;
  uint8_t n254;
  uint8_t n273;
  uint8_t n274;
  uint8_t n294;
  uint8_t n313;
  uint8_t n339;
  uint8_t n352;
  uint8_t n356;
  uint8_t n372;
  uint8_t n374;
  uint8_t n417;
  uint8_t n432;
  uint8_t n435;
  uint8_t n446;
  uint8_t n460;
  uint8_t n476;
  uint8_t n490;
  uint8_t n505;
  uint8_t n550;
  uint8_t n564;
  uint8_t n580;
  uint8_t n594;
  uint8_t n608;
  uint8_t n625;
  uint8_t n633;
  uint8_t n654;
  uint8_t n668;
  uint8_t n669;
  uint8_t n682;
  uint8_t n691;
  uint8_t n698;
  uint8_t n712;
  uint8_t n728;
  uint8_t n729;
  uint8_t n756;
  uint8_t n786;
  uint8_t n802;
  uint8_t n816;
  uint8_t n832;
  uint8_t n846;
  uint8_t n876;
  uint8_t n890;
  uint8_t n906;
  uint8_t n920;
  uint8_t n934;
  uint8_t n950;
  uint8_t n964;
  uint8_t n1009;
  uint8_t n1068;
  uint8_t n1082;
  uint8_t n1098;
  uint8_t n1142;
  uint8_t n1156;
  uint8_t n1157;
  uint8_t n1172;
  uint8_t n1173;
  uint8_t n1186;
  uint8_t n1187;
  uint8_t n1202;
  uint8_t n1203;
  uint8_t n1232;
  uint8_t n1233;
  uint8_t n1277;
  uint8_t n1320;
  uint8_t n1321;
  uint8_t n1334;
  uint8_t n1335;
  uint8_t n1350;
  uint8_t n1351;
  uint8_t n1394;
  uint8_t n1395;
  uint8_t n1408;
  uint8_t n1409;
  uint8_t n1424;
  uint8_t n1425;
  uint8_t n1434;
  uint8_t n1438;
  uint8_t n1439;
  uint8_t n1449;
  uint8_t n1454;
  uint8_t n1455;
  uint8_t n1468;
  uint8_t n1482;
  uint8_t n1483;
  uint8_t n1528;
  uint8_t n1556;
  uint8_t n1572;
  uint8_t n1573;
  uint8_t n1586;
  uint8_t n1587;
  uint8_t n1602;
  uint8_t n1603;
  uint8_t n1616;
  uint8_t n1632;
  uint8_t n1646;
  uint8_t n1660;
  uint8_t n1690;
  uint8_t n1691;
  uint8_t n1720;
  uint8_t n1734;
  uint8_t n1735;
  uint8_t n1750;
  uint8_t n1751;
  uint8_t n1764;
  uint8_t n1765;
  uint8_t n1780;
  uint8_t n1781;
  uint8_t n1794;
  uint8_t n1795;
  uint8_t n1808;
  uint8_t n1809;
  uint8_t n1824;
  uint8_t n1838;
  uint8_t n1854;
  uint8_t n1868;
  uint8_t n1882;
  uint8_t n1898;
  uint8_t n1912;
  uint8_t n1928;
  uint8_t n1942;
  uint8_t n1943;
  uint8_t n1956;
  uint8_t n1957;
  uint8_t n1972;
  uint8_t n1973;
  uint8_t n1986;
  uint8_t n1987;
  uint8_t n2016;

  n36 = ~(n28 ^ n28);
  n37 = ~(n28 ^ n28);
  n41 = ~(n12 ^ n12);
  n43 = ~(n6 | n4 | n37);
  n49 = ~(n41 & n12 & n6);
  n50 = ~(n8 | n36);
  n51 = ~(n8 | n36);
  n55 = ~(n6 | n36);
  n57 = ~(n41 | n30);
  n60 = n41 | n50;
  n61 = n41 | n50;
  n62 = n41;
  n63 = n41;
  n70 = ~(n10 & n63);
  n71 = ~(n10 & n63);
  n75 = ~n57;
  n78 = ~(n63 | n60);
  n79 = ~(n63 | n60);
  n81 = n57 & n12;
  n83 = n63 & n60;
  n86 = n63;
  n88 = (n51 & n62) | (~n51 & n81);
  n89 = (n51 & n62) | (~n51 & n81);
  n92 = ~(n89 | n62);
  n93 = ~(n89 | n62);
  n97 = ~n41;
  n106 = ~((n71 & n12) | n75);
  n110 = ~(n79 & n0);
  n115 = ~((n6 | n86) & n49);
  n121 = n89 & n16;
  n122 = ~(n93 | n106);
  n128 = n110 & n86;
  n129 = n110 & n86;
  n134 = n61 & n78;
  n147 = ~(n83 & n86);
  n150 = (n115 & n16) | (~n115 & n22);
  n153 = n129;
  n160 = ~(n18 | n12);
  n163 = n121 | n88;
  n222 = ~(n43 | n92);
  n233 = ~(n81 & n134 & n22);
  n238 = n163;
  n253 = ~(n97 | n122);
  n254 = n14 & n18;
  n273 = ~(n18 | n12);
  n274 = ~(n129 & n134);
  n294 = n41;
  n313 = ~n233;
  n339 = ~(n75 & n160);
  n352 = (n147 & n12) | (~n147 & n313);
  n356 = n12 & n20;
  n372 = n14 & n20;
  n374 = n97;
  n417 = ~(n4 | n150 | n128);
  n432 = ~(n153 | n70);
  n435 = n55;
  n446 = n8 & n22;
  n460 = n10 & n22;
  n476 = n12 & n22;
  n490 = n14 & n22;
  n505 = n417 & n294;
  n550 = n6 & n24;
  n564 = n8 & n24;
  n580 = n10 & n24;
  n594 = n12 & n24;
  n608 = n14 & n24;
  n625 = n0 & n26;
  n633 = ~((n273 & n222) | n339);
  n654 = n4 & n26;
  n668 = n6 & n26;
  n669 = n6 & n26;
  n682 = n8 & n26;
  n691 = n6 & n254;
  n698 = n10 & n26;
  n712 = n12 & n26;
  n728 = n14 & n26;
  n729 = n14 & n26;
  n756 = n2 & n28;
  n786 = n6 & n28;
  n802 = n8 & n28;
  n816 = n10 & n28;
  n832 = n12 & n28;
  n846 = n14 & n28;
  n876 = n2 & n30;
  n890 = n4 & n30;
  n906 = n6 & n30;
  n920 = n8 & n30;
  n934 = n10 & n30;
  n950 = n12 & n30;
  n964 = n14 & n30;
  n1009 = n633;
  n1068 = (n134 ^ n238) ^ n435;
  n1082 = n254 & n356;
  n1098 = n254 | n356;
  n1142 = n432;
  n1156 = (n446 ^ n550) ^ n654;
  n1157 = (n446 & n550) | (n550 & n654) | (n446 & n654);
  n1172 = (n460 ^ n564) ^ n668;
  n1173 = (n460 & n564) | (n564 & n668) | (n460 & n668);
  n1186 = (n476 ^ n580) ^ n682;
  n1187 = (n476 & n580) | (n580 & n682) | (n476 & n682);
  n1202 = (n490 ^ n594) ^ n698;
  n1203 = (n490 & n594) | (n594 & n698) | (n490 & n698);
  n1232 = n608 ^ n712;
  n1233 = n608 & n712;
  n1277 = n625 | n1009;
  n1320 = (n1068 ^ n1142) ^ n1156;
  n1321 = (n1068 & n1142) | (n1142 & n1156) | (n1068 & n1156);
  n1334 = (n1098 ^ n756) ^ n1172;
  n1335 = (n1098 & n756) | (n756 & n1172) | (n1098 & n1172);
  n1350 = (n372 ^ n1082) ^ n1186;
  n1351 = (n372 & n1082) | (n1082 & n1186) | (n372 & n1186);
  n1394 = (n1157 ^ n374) ^ n876;
  n1395 = (n1157 & n374) | (n374 & n876) | (n1157 & n876);
  n1408 = (n1173 ^ n786) ^ n890;
  n1409 = (n1173 & n786) | (n786 & n890) | (n1173 & n890);
  n1424 = (n1187 ^ n802) ^ n906;
  n1425 = (n1187 & n802) | (n802 & n906) | (n1187 & n906);
  n1434 = n163;
  n1438 = (n1203 ^ n816) ^ n920;
  n1439 = (n1203 & n816) | (n816 & n920) | (n1203 & n920);
  n1449 = n505;
  n1454 = (n1233 ^ n832) ^ n934;
  n1455 = (n1233 & n832) | (n832 & n934) | (n1233 & n934);
  n1468 = n846 & n950;
  n1482 = n846 ^ n950;
  n1483 = n846 & n950;
  n1528 = n1449 | n1277;
  n1556 = (n1320 ^ n1434) ^ n1483;
  n1572 = (n1334 ^ n1321) ^ n1394;
  n1573 = (n1334 & n1321) | (n1321 & n1394) | (n1334 & n1394);
  n1586 = (n1350 ^ n1335) ^ n1408;
  n1587 = (n1350 & n1335) | (n1335 & n1408) | (n1350 & n1408);
  n1602 = (n1202 ^ n1351) ^ n1424;
  n1603 = (n1202 & n1351) | (n1351 & n1424) | (n1202 & n1424);
  n1616 = n1232 & n1438;
  n1632 = n1232 ^ n1438;
  n1646 = n729 & n1454;
  n1660 = n728 ^ n1454;
  n1690 = n1528 | n1156;
  n1691 = n1528 | n1156;
  n1720 = n1556;
  n1734 = n1572 ^ n106;
  n1735 = n1572 & n106;
  n1750 = (n1586 ^ n1573) ^ n1395;
  n1751 = (n1586 & n1573) | (n1573 & n1395) | (n1586 & n1395);
  n1764 = (n1602 ^ n1587) ^ n1409;
  n1765 = (n1602 & n1587) | (n1587 & n1409) | (n1602 & n1409);
  n1780 = (n1632 ^ n1603) ^ n1425;
  n1781 = (n1632 & n1603) | (n1603 & n1425) | (n1632 & n1425);
  n1794 = (n1660 ^ n1616) ^ n1439;
  n1795 = (n1660 & n1616) | (n1616 & n1439) | (n1660 & n1439);
  n1808 = (n1482 ^ n1646) ^ n1455;
  n1809 = (n1482 & n1646) | (n1646 & n1455) | (n1482 & n1455);
  n1824 = n964 & n1468;
  n1838 = n964 ^ n1468;
  n1854 = n1690 ^ n106;
  n1868 = n253 ^ n1691;
  n1882 = (n633 & n274) | (~n633 & n1720);
  n1898 = n1734;
  n1912 = n1750 ^ n1735;
  n1928 = n1764 | n1751;
  n1942 = n1780 ^ n1765;
  n1943 = n1780 & n1765;
  n1956 = (n1794 ^ n1781) ^ n1943;
  n1957 = (n1794 & n1781) | (n1781 & n1943) | (n1794 & n1943);
  n1972 = (n1808 ^ n1795) ^ n1957;
  n1973 = (n1808 & n1795) | (n1795 & n1957) | (n1808 & n1957);
  n1986 = (n1838 ^ n1809) ^ n1973;
  n1987 = (n1838 & n1809) | (n1809 & n1973) | (n1838 & n1973);
  n2016 = n1824 | n1987;

  c |= (n57 & 0x1) << 0;
  c |= (n1750 & 0x1) << 1;
  c |= (n691 & 0x1) << 2;
  c |= (n352 & 0x1) << 3;
  c |= (n669 & 0x1) << 4;
  c |= (n1854 & 0x1) << 5;
  c |= (n1868 & 0x1) << 6;
  c |= (n1882 & 0x1) << 7;
  c |= (n1898 & 0x1) << 8;
  c |= (n1912 & 0x1) << 9;
  c |= (n1928 & 0x1) << 10;
  c |= (n1942 & 0x1) << 11;
  c |= (n1956 & 0x1) << 12;
  c |= (n1972 & 0x1) << 13;
  c |= (n1986 & 0x1) << 14;
  c |= (n2016 & 0x1) << 15;

  return c;
}

// internal reference: cgp-evoapproxlib.08.mul8_260

