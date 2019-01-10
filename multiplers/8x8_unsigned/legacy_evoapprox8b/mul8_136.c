/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from evoapprox8b dataset
***/
#include <stdint.h>
#include <stdlib.h>

uint16_t mul8_136(uint8_t a, uint8_t b)
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
  uint8_t n32;
  uint8_t n33;
  uint8_t n38;
  uint8_t n44;
  uint8_t n50;
  uint8_t n56;
  uint8_t n62;
  uint8_t n68;
  uint8_t n74;
  uint8_t n82;
  uint8_t n88;
  uint8_t n94;
  uint8_t n100;
  uint8_t n106;
  uint8_t n112;
  uint8_t n118;
  uint8_t n126;
  uint8_t n132;
  uint8_t n138;
  uint8_t n144;
  uint8_t n150;
  uint8_t n156;
  uint8_t n162;
  uint8_t n168;
  uint8_t n176;
  uint8_t n182;
  uint8_t n188;
  uint8_t n194;
  uint8_t n200;
  uint8_t n206;
  uint8_t n212;
  uint8_t n220;
  uint8_t n226;
  uint8_t n232;
  uint8_t n238;
  uint8_t n244;
  uint8_t n250;
  uint8_t n256;
  uint8_t n262;
  uint8_t n270;
  uint8_t n276;
  uint8_t n282;
  uint8_t n288;
  uint8_t n294;
  uint8_t n300;
  uint8_t n306;
  uint8_t n314;
  uint8_t n320;
  uint8_t n326;
  uint8_t n332;
  uint8_t n338;
  uint8_t n344;
  uint8_t n350;
  uint8_t n358;
  uint8_t n364;
  uint8_t n370;
  uint8_t n376;
  uint8_t n382;
  uint8_t n388;
  uint8_t n394;
  uint8_t n400;
  uint8_t n408;
  uint8_t n414;
  uint8_t n420;
  uint8_t n426;
  uint8_t n432;
  uint8_t n433;
  uint8_t n438;
  uint8_t n439;
  uint8_t n444;
  uint8_t n445;
  uint8_t n452;
  uint8_t n453;
  uint8_t n458;
  uint8_t n459;
  uint8_t n464;
  uint8_t n465;
  uint8_t n470;
  uint8_t n471;
  uint8_t n476;
  uint8_t n482;
  uint8_t n488;
  uint8_t n489;
  uint8_t n494;
  uint8_t n495;
  uint8_t n502;
  uint8_t n503;
  uint8_t n508;
  uint8_t n509;
  uint8_t n514;
  uint8_t n515;
  uint8_t n520;
  uint8_t n521;
  uint8_t n526;
  uint8_t n527;
  uint8_t n532;
  uint8_t n538;
  uint8_t n546;
  uint8_t n547;
  uint8_t n552;
  uint8_t n553;
  uint8_t n558;
  uint8_t n559;
  uint8_t n564;
  uint8_t n565;
  uint8_t n570;
  uint8_t n571;
  uint8_t n576;
  uint8_t n577;
  uint8_t n582;
  uint8_t n583;
  uint8_t n588;
  uint8_t n589;
  uint8_t n596;
  uint8_t n602;
  uint8_t n603;
  uint8_t n608;
  uint8_t n609;
  uint8_t n614;
  uint8_t n615;
  uint8_t n620;
  uint8_t n621;
  uint8_t n626;
  uint8_t n627;
  uint8_t n632;
  uint8_t n633;
  uint8_t n640;
  uint8_t n641;
  uint8_t n646;
  uint8_t n652;
  uint8_t n653;
  uint8_t n658;
  uint8_t n659;
  uint8_t n664;
  uint8_t n665;
  uint8_t n670;
  uint8_t n671;
  uint8_t n676;
  uint8_t n677;
  uint8_t n684;
  uint8_t n685;
  uint8_t n690;
  uint8_t n691;
  uint8_t n696;
  uint8_t n697;
  uint8_t n702;
  uint8_t n708;
  uint8_t n714;
  uint8_t n720;
  uint8_t n726;
  uint8_t n727;
  uint8_t n734;
  uint8_t n735;
  uint8_t n740;
  uint8_t n741;
  uint8_t n746;
  uint8_t n747;
  uint8_t n752;
  uint8_t n753;
  uint8_t n758;
  uint8_t n759;
  uint8_t n764;
  uint8_t n765;
  uint8_t n770;
  uint8_t n771;
  uint8_t n778;
  uint8_t n779;
  uint8_t n784;
  uint8_t n785;
  uint8_t n796;
  uint8_t n802;
  uint8_t n803;
  uint8_t n808;
  uint8_t n809;
  uint8_t n814;
  uint8_t n815;
  uint8_t n820;
  uint8_t n821;
  uint8_t n828;
  uint8_t n829;
  uint8_t n834;
  uint8_t n835;
  uint8_t n840;
  uint8_t n841;
  uint8_t n846;
  uint8_t n847;
  uint8_t n852;
  uint8_t n853;
  uint8_t n858;
  uint8_t n859;
  uint8_t n916;
  uint8_t n922;
  uint8_t n946;
  uint8_t n952;
  uint8_t n958;
  uint8_t n966;
  uint8_t n996;
  uint8_t n1002;
  uint8_t n1010;
  uint8_t n1016;
  uint8_t n1022;
  uint8_t n1034;
  uint8_t n1060;
  uint8_t n1072;
  uint8_t n1078;
  uint8_t n1090;
  uint8_t n1096;
  uint8_t n1104;
  uint8_t n1105;
  uint8_t n1140;
  uint8_t n1146;
  uint8_t n1160;
  uint8_t n1161;
  uint8_t n1166;
  uint8_t n1184;
  uint8_t n1190;
  uint8_t n1204;
  uint8_t n1205;
  uint8_t n1242;
  uint8_t n1248;
  uint8_t n1254;
  uint8_t n1260;
  uint8_t n1266;
  uint8_t n1272;
  uint8_t n1278;
  uint8_t n1284;
  uint8_t n1292;
  uint8_t n1298;
  uint8_t n1304;
  uint8_t n1310;
  uint8_t n1354;
  uint8_t n1355;
  uint8_t n1360;
  uint8_t n1366;
  uint8_t n1372;
  uint8_t n1378;
  uint8_t n1386;
  uint8_t n1392;
  uint8_t n1398;
  uint8_t n1404;
  uint8_t n1410;
  uint8_t n1416;
  uint8_t n1422;
  uint8_t n1430;
  uint8_t n1436;
  uint8_t n1454;
  uint8_t n1492;
  uint8_t n1493;
  uint8_t n1498;
  uint8_t n1504;
  uint8_t n1505;
  uint8_t n1510;
  uint8_t n1516;
  uint8_t n1524;
  uint8_t n1530;
  uint8_t n1536;
  uint8_t n1542;
  uint8_t n1548;
  uint8_t n1554;
  uint8_t n1561;
  uint8_t n1568;
  uint8_t n1574;
  uint8_t n1580;
  uint8_t n1586;
  uint8_t n1592;
  uint8_t n1598;
  uint8_t n1662;
  uint8_t n1668;
  uint8_t n1674;
  uint8_t n1680;
  uint8_t n1681;
  uint8_t n1686;
  uint8_t n1692;
  uint8_t n1698;
  uint8_t n1704;
  uint8_t n1712;
  uint8_t n1718;
  uint8_t n1724;
  uint8_t n1730;
  uint8_t n1736;
  uint8_t n1742;
  uint8_t n1748;
  uint8_t n1756;
  uint8_t n1762;
  uint8_t n1768;
  uint8_t n1774;
  uint8_t n1968;
  uint8_t n1974;
  uint8_t n1980;
  uint8_t n1988;
  uint8_t n1994;
  uint8_t n2000;
  uint8_t n2006;
  uint8_t n2012;
  uint8_t n2018;
  uint8_t n2024;

  n32 = n0 & n16;
  n33 = n0 & n16;
  n38 = n2 & n16;
  n44 = n4 & n16;
  n50 = n6 & n16;
  n56 = n8 & n16;
  n62 = n10 & n16;
  n68 = n12 & n16;
  n74 = n14 & n16;
  n82 = n0 & n18;
  n88 = n2 & n18;
  n94 = n4 & n18;
  n100 = n6 & n18;
  n106 = n8 & n18;
  n112 = n10 & n18;
  n118 = n12 & n18;
  n126 = n14 & n18;
  n132 = n0 & n20;
  n138 = n2 & n20;
  n144 = n4 & n20;
  n150 = n6 & n20;
  n156 = n8 & n20;
  n162 = n10 & n20;
  n168 = n12 & n20;
  n176 = n14 & n20;
  n182 = n0 & n22;
  n188 = n2 & n22;
  n194 = n4 & n22;
  n200 = n6 & n22;
  n206 = n8 & n22;
  n212 = n10 & n22;
  n220 = n12 & n22;
  n226 = n14 & n22;
  n232 = n0 & n24;
  n238 = n2 & n24;
  n244 = n4 & n24;
  n250 = n6 & n24;
  n256 = n8 & n24;
  n262 = n10 & n24;
  n270 = n12 & n24;
  n276 = n14 & n24;
  n282 = n0 & n26;
  n288 = n2 & n26;
  n294 = n4 & n26;
  n300 = n6 & n26;
  n306 = n8 & n26;
  n314 = n10 & n26;
  n320 = n12 & n26;
  n326 = n14 & n26;
  n332 = n0 & n28;
  n338 = n2 & n28;
  n344 = n33 & n28;
  n350 = n6 & n28;
  n358 = n8 & n28;
  n364 = n10 & n28;
  n370 = n12 & n28;
  n376 = n14 & n28;
  n382 = n0 & n30;
  n388 = n2 & n30;
  n394 = n4 & n30;
  n400 = n6 & n30;
  n408 = n8 & n30;
  n414 = n10 & n30;
  n420 = n12 & n30;
  n426 = n14 & n30;
  n432 = n38 ^ n82;
  n433 = n38 & n82;
  n438 = (n44 ^ n88) ^ n132;
  n439 = (n44 & n88) | (n88 & n132) | (n44 & n132);
  n444 = (n50 ^ n94) ^ n138;
  n445 = (n50 & n94) | (n94 & n138) | (n50 & n138);
  n452 = (n56 ^ n100) ^ n144;
  n453 = (n56 & n100) | (n100 & n144) | (n56 & n144);
  n458 = (n62 ^ n106) ^ n150;
  n459 = (n62 & n106) | (n106 & n150) | (n62 & n150);
  n464 = (n68 ^ n112) ^ n156;
  n465 = (n68 & n112) | (n112 & n156) | (n68 & n156);
  n470 = (n74 ^ n118) ^ n162;
  n471 = (n74 & n118) | (n118 & n162) | (n74 & n162);
  n476 = n126 & n168;
  n482 = n126 ^ n168;
  n488 = n188 ^ n232;
  n489 = n188 & n232;
  n494 = (n194 ^ n238) ^ n282;
  n495 = (n194 & n238) | (n238 & n282) | (n194 & n282);
  n502 = (n200 ^ n244) ^ n288;
  n503 = (n200 & n244) | (n244 & n288) | (n200 & n288);
  n508 = (n206 ^ n250) ^ n294;
  n509 = (n206 & n250) | (n250 & n294) | (n206 & n294);
  n514 = (n212 ^ n256) ^ n300;
  n515 = (n212 & n256) | (n256 & n300) | (n212 & n300);
  n520 = (n220 ^ n262) ^ n306;
  n521 = (n220 & n262) | (n262 & n306) | (n220 & n306);
  n526 = (n226 ^ n270) ^ n314;
  n527 = (n226 & n270) | (n270 & n314) | (n226 & n314);
  n532 = n276 & n320;
  n538 = n276 ^ n320;
  n546 = n438 ^ n433;
  n547 = n438 & n433;
  n552 = (n444 ^ n439) ^ n182;
  n553 = (n444 & n439) | (n439 & n182) | (n444 & n182);
  n558 = (n452 ^ n445) ^ n488;
  n559 = (n452 & n445) | (n445 & n488) | (n452 & n488);
  n564 = (n458 ^ n453) ^ n494;
  n565 = (n458 & n453) | (n453 & n494) | (n458 & n494);
  n570 = (n464 ^ n459) ^ n502;
  n571 = (n464 & n459) | (n459 & n502) | (n464 & n502);
  n576 = (n470 ^ n465) ^ n508;
  n577 = (n470 & n465) | (n465 & n508) | (n470 & n508);
  n582 = (n482 ^ n471) ^ n514;
  n583 = (n482 & n471) | (n471 & n514) | (n482 & n514);
  n588 = (n176 ^ n476) ^ n520;
  n589 = (n176 & n476) | (n476 & n520) | (n176 & n520);
  n596 = n495 ^ n332;
  n602 = (n503 ^ n338) ^ n382;
  n603 = (n503 & n338) | (n338 & n382) | (n503 & n382);
  n608 = (n509 ^ n344) ^ n388;
  n609 = (n509 & n344) | (n344 & n388) | (n509 & n388);
  n614 = (n515 ^ n350) ^ n394;
  n615 = (n515 & n350) | (n350 & n394) | (n515 & n394);
  n620 = (n521 ^ n358) ^ n400;
  n621 = (n521 & n358) | (n358 & n400) | (n521 & n400);
  n626 = (n527 ^ n364) ^ n408;
  n627 = (n527 & n364) | (n364 & n408) | (n527 & n408);
  n632 = (n532 ^ n370) ^ n414;
  n633 = (n532 & n370) | (n370 & n414) | (n532 & n414);
  n640 = n376 & n420;
  n641 = n376 & n420;
  n646 = n376 ^ n420;
  n652 = n552 ^ n547;
  n653 = n552 & n547;
  n658 = n558 ^ n553;
  n659 = n558 & n553;
  n664 = (n564 ^ n559) ^ n489;
  n665 = (n564 & n559) | (n559 & n489) | (n564 & n489);
  n670 = (n570 ^ n565) ^ n596;
  n671 = (n570 & n565) | (n565 & n596) | (n570 & n596);
  n676 = (n576 ^ n571) ^ n602;
  n677 = (n576 & n571) | (n571 & n602) | (n576 & n602);
  n684 = (n582 ^ n577) ^ n608;
  n685 = (n582 & n577) | (n577 & n608) | (n582 & n608);
  n690 = (n588 ^ n583) ^ n614;
  n691 = (n588 & n583) | (n583 & n614) | (n588 & n614);
  n696 = (n526 ^ n589) ^ n620;
  n697 = (n526 & n589) | (n589 & n620) | (n526 & n620);
  n702 = n538 & n626;
  n708 = n538 ^ n626;
  n714 = n326 & n632;
  n720 = n326 ^ n632;
  n726 = n658 ^ n653;
  n727 = n658 & n653;
  n734 = n664 ^ n659;
  n735 = n664 & n659;
  n740 = n670 ^ n665;
  n741 = n670 & n665;
  n746 = n676 ^ n671;
  n747 = n676 & n671;
  n752 = (n684 ^ n677) ^ n603;
  n753 = (n684 & n677) | (n677 & n603) | (n684 & n603);
  n758 = (n690 ^ n685) ^ n609;
  n759 = (n690 & n685) | (n685 & n609) | (n690 & n609);
  n764 = (n696 ^ n691) ^ n615;
  n765 = (n696 & n691) | (n691 & n615) | (n696 & n615);
  n770 = (n708 ^ n697) ^ n621;
  n771 = (n708 & n697) | (n697 & n621) | (n708 & n621);
  n778 = (n720 ^ n702) ^ n627;
  n779 = (n720 & n702) | (n702 & n627) | (n720 & n627);
  n784 = (n646 ^ n714) ^ n633;
  n785 = (n646 & n714) | (n714 & n633) | (n646 & n633);
  n796 = n426 ^ n640;
  n802 = n734 ^ n727;
  n803 = n734 & n727;
  n808 = n740 ^ n735;
  n809 = n740 & n735;
  n814 = n746 ^ n741;
  n815 = n746 & n741;
  n820 = n752 ^ n747;
  n821 = n752 & n747;
  n828 = n758 ^ n753;
  n829 = n758 & n753;
  n834 = n764 ^ n759;
  n835 = n764 & n759;
  n840 = n770 ^ n765;
  n841 = n770 & n765;
  n846 = n778 ^ n771;
  n847 = n778 & n771;
  n852 = n784 ^ n779;
  n853 = n784 & n779;
  n858 = n796 ^ n785;
  n859 = n796 & n785;
  n916 = n808 & n803;
  n922 = n809 | n916;
  n946 = n814 & n916;
  n952 = n814 & n809;
  n958 = n815 | n952;
  n966 = n958 | n946;
  n996 = n820 & n966;
  n1002 = n820 & n815;
  n1010 = n821;
  n1016 = n996;
  n1022 = n1010 | n1016;
  n1034 = n828 & n1016;
  n1060 = n1034 & n922;
  n1072 = n828 & n821;
  n1078 = n829 | n1072;
  n1090 = n1078 | n1034;
  n1096 = n1090;
  n1104 = n834 & n828;
  n1105 = n834 & n828;
  n1140 = n1105 & n1022;
  n1146 = n1104 & n1002;
  n1160 = n834 & n829;
  n1161 = n834 & n829;
  n1166 = n835 | n1160;
  n1184 = n1166;
  n1190 = n1184 | n1140;
  n1204 = n840 & n834;
  n1205 = n840 & n834;
  n1242 = n1204 & n1140;
  n1248 = n1161 & n1146;
  n1254 = n1204 & n1072;
  n1260 = n1205 & n1160;
  n1266 = n840 & n835;
  n1272 = n841 | n1266;
  n1278 = n1260;
  n1284 = n1248 | n1242;
  n1292 = n1272 | n1278;
  n1298 = n1284;
  n1304 = n1292 | n1298;
  n1310 = n846 & n1204;
  n1354 = n846 & n1204;
  n1355 = n846 & n1204;
  n1360 = n1354 & n1060;
  n1366 = n1355 & n1146;
  n1372 = n846 & n1254;
  n1378 = n1310 & n1278;
  n1386 = n846 & n1266;
  n1392 = n846 & n841;
  n1398 = n847 | n1392;
  n1404 = n1386 | n1378;
  n1410 = n1372 | n1366;
  n1416 = n1360;
  n1422 = n1398 | n1404;
  n1430 = n1410 | n1416;
  n1436 = n1422 | n1430;
  n1454 = n852 & n846;
  n1492 = n1454 & n1354;
  n1493 = n1454 & n1354;
  n1498 = n1492 & n1060;
  n1504 = n852 & n1310;
  n1505 = n852 & n1310;
  n1510 = n1504 & n1146;
  n1516 = n1493 & n1254;
  n1524 = n1505 & n1378;
  n1530 = n1454 & n1266;
  n1536 = n852 & n1392;
  n1542 = n852 & n847;
  n1548 = n853 | n1542;
  n1554 = n1536 | n1530;
  n1561 = n1524 | n1516;
  n1568 = n1510 | n1498;
  n1574 = n1548 | n1554;
  n1580 = n1561 | n1568;
  n1586 = n1574 | n1580;
  n1592 = n1586;
  n1598 = n858 & n852;
  n1662 = n2 & n1498;
  n1668 = n1598 & n1366;
  n1674 = n1668 & n1146;
  n1680 = n858 & n1454;
  n1681 = n858 & n1454;
  n1686 = n1680 & n1254;
  n1692 = n1681 & n1378;
  n1698 = n1681 & n1530;
  n1704 = n1681 & n1392;
  n1712 = n858 & n1542;
  n1718 = n858 & n853;
  n1724 = n859 | n1718;
  n1730 = n1712 | n1704;
  n1736 = n1698 | n1692;
  n1742 = n1686 | n1674;
  n1748 = n1662;
  n1756 = n1724 | n1730;
  n1762 = n1736 | n1742;
  n1768 = n1756 | n1762;
  n1774 = n1768 | n1748;
  n1968 = n808 ^ n803;
  n1974 = n814 ^ n922;
  n1980 = n820;
  n1988 = n828 ^ n1022;
  n1994 = n834 ^ n1096;
  n2000 = n840 ^ n1190;
  n2006 = n846 ^ n1304;
  n2012 = n852 ^ n1436;
  n2018 = n858 ^ n1592;
  n2024 = n641 | n1774;

  c |= (n32 & 0x1) << 0;
  c |= (n432 & 0x1) << 1;
  c |= (n546 & 0x1) << 2;
  c |= (n652 & 0x1) << 3;
  c |= (n726 & 0x1) << 4;
  c |= (n802 & 0x1) << 5;
  c |= (n1968 & 0x1) << 6;
  c |= (n1974 & 0x1) << 7;
  c |= (n1980 & 0x1) << 8;
  c |= (n1988 & 0x1) << 9;
  c |= (n1994 & 0x1) << 10;
  c |= (n2000 & 0x1) << 11;
  c |= (n2006 & 0x1) << 12;
  c |= (n2012 & 0x1) << 13;
  c |= (n2018 & 0x1) << 14;
  c |= (n2024 & 0x1) << 15;

  return c;
}

// internal reference: cgp-evoapproxlib.08.mul8_136

