/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from evoapprox8b dataset
***/

// Library = cgp-evoapproxlib
// Circuit = mul8_475.v
// Area   (45) = 384.000000
// Delay  (45) = 1.060000
// Power  (45) = 0.198600
// MAE = 239.188290
// MSE = 96179.229490
// MRE = 6.430000 %
// WCE = 1291
// WCRE = 200.000000 %
// EP = 98.800000 %

module mul8_475(A, B, O);
  input [7:0] A;
  input [7:0] B;
  output [15:0] O;
  wire [2031:0] N;

  assign N[0] = A[0];
  assign N[1] = A[0];
  assign N[2] = A[1];
  assign N[3] = A[1];
  assign N[4] = A[2];
  assign N[5] = A[2];
  assign N[6] = A[3];
  assign N[7] = A[3];
  assign N[8] = A[4];
  assign N[9] = A[4];
  assign N[10] = A[5];
  assign N[11] = A[5];
  assign N[12] = A[6];
  assign N[13] = A[6];
  assign N[14] = A[7];
  assign N[15] = A[7];
  assign N[16] = B[0];
  assign N[17] = B[0];
  assign N[18] = B[1];
  assign N[19] = B[1];
  assign N[20] = B[2];
  assign N[21] = B[2];
  assign N[22] = B[3];
  assign N[23] = B[3];
  assign N[24] = B[4];
  assign N[25] = B[4];
  assign N[26] = B[5];
  assign N[27] = B[5];
  assign N[28] = B[6];
  assign N[29] = B[6];
  assign N[30] = B[7];
  assign N[31] = B[7];

  AND2X1 n36(.A(N[2]), .B(N[28]), .Y(N[36]));
  assign N[37] = N[36];
  NAND3X1 n38(.A(N[37]), .B(N[24]), .C(N[22]), .Y(N[38]));
  OR2X1 n40(.A(N[28]), .B(N[38]), .Y(N[40]));
  assign N[41] = N[40];
  NAND2X1 n48(.A(N[18]), .B(N[12]), .Y(N[48]));
  AND2X1 n50(.A(N[30]), .B(N[0]), .Y(N[50]));
  assign N[51] = N[50];
  NAND3X1 n54(.A(N[22]), .B(N[12]), .C(N[18]), .Y(N[54]));
  AND2X1 n62(.A(N[51]), .B(N[36]), .Y(N[62]));
  assign N[63] = N[62];
  NOR2X1 n64(.A(N[18]), .B(N[54]), .Y(N[64]));
  assign N[65] = N[64];
  AND2X1 n76(.A(N[18]), .B(N[62]), .Y(N[76]));
  AND2X1 n78(.A(N[63]), .B(N[8]), .Y(N[78]));
  AND2X1 n86(.A(N[65]), .B(N[28]), .Y(N[86]));
  assign N[87] = N[86];
  BUFX2 n118(.A(N[51]), .Y(N[118]));
  NOR2X1 n120(.A(N[2]), .B(N[78]), .Y(N[120]));
  assign N[121] = N[120];
  AND2X1 n134(.A(N[14]), .B(N[76]), .Y(N[134]));
  INVX1 n136(.A(N[41]), .Y(N[136]));
  assign N[137] = N[136];
  INVX1 n142(.A(N[137]), .Y(N[142]));
  assign N[143] = N[142];
  BUFX2 n150(.A(N[87]), .Y(N[150]));
  AND2X1 n238(.A(N[12]), .B(N[18]), .Y(N[238]));
  AND2X1 n254(.A(N[14]), .B(N[18]), .Y(N[254]));
  NAND2X1 n264(.A(N[121]), .B(N[86]), .Y(N[264]));
  assign N[265] = N[264];
  AND2X1 n334(.A(N[87]), .B(N[48]), .Y(N[334]));
  assign N[335] = N[334];
  AND2X1 n342(.A(N[10]), .B(N[20]), .Y(N[342]));
  assign N[343] = N[342];
  AND2X1 n356(.A(N[12]), .B(N[20]), .Y(N[356]));
  AND2X1 n372(.A(N[14]), .B(N[20]), .Y(N[372]));
  INVX1 n392(.A(N[265]), .Y(N[392]));
  assign N[393] = N[392];
  AND2X1 n446(.A(N[8]), .B(N[22]), .Y(N[446]));
  AND2X1 n460(.A(N[10]), .B(N[22]), .Y(N[460]));
  assign N[461] = N[460];
  AND2X1 n476(.A(N[12]), .B(N[22]), .Y(N[476]));
  AND2X1 n490(.A(N[14]), .B(N[22]), .Y(N[490]));
  OR2X1 n550(.A(N[143]), .B(N[24]), .Y(N[550]));
  AND2X1 n564(.A(N[8]), .B(N[24]), .Y(N[564]));
  AND2X1 n580(.A(N[10]), .B(N[24]), .Y(N[580]));
  AND2X1 n594(.A(N[12]), .B(N[24]), .Y(N[594]));
  AND2X1 n608(.A(N[14]), .B(N[24]), .Y(N[608]));
  AND2X1 n668(.A(N[6]), .B(N[26]), .Y(N[668]));
  AND2X1 n682(.A(N[8]), .B(N[26]), .Y(N[682]));
  AND2X1 n698(.A(N[10]), .B(N[26]), .Y(N[698]));
  AND2X1 n712(.A(N[12]), .B(N[26]), .Y(N[712]));
  AND2X1 n728(.A(N[14]), .B(N[26]), .Y(N[728]));
  AND2X1 n772(.A(N[4]), .B(N[28]), .Y(N[772]));
  assign N[773] = N[772];
  AND2X1 n786(.A(N[6]), .B(N[28]), .Y(N[786]));
  AND2X1 n802(.A(N[8]), .B(N[28]), .Y(N[802]));
  AND2X1 n816(.A(N[10]), .B(N[28]), .Y(N[816]));
  AND2X1 n832(.A(N[12]), .B(N[28]), .Y(N[832]));
  AND2X1 n846(.A(N[14]), .B(N[28]), .Y(N[846]));
  AND2X1 n876(.A(N[2]), .B(N[30]), .Y(N[876]));
  AND2X1 n890(.A(N[4]), .B(N[30]), .Y(N[890]));
  AND2X1 n906(.A(N[6]), .B(N[30]), .Y(N[906]));
  AND2X1 n920(.A(N[8]), .B(N[30]), .Y(N[920]));
  AND2X1 n934(.A(N[10]), .B(N[30]), .Y(N[934]));
  AND2X1 n950(.A(N[12]), .B(N[30]), .Y(N[950]));
  AND2X1 n964(.A(N[14]), .B(N[30]), .Y(N[964]));
  assign N[965] = N[964];
  OR2X1 n980(.A(N[965]), .B(N[150]), .Y(N[980]));
  FAX1 n1068(.A(N[134]), .B(N[238]), .C(N[335]), .YS(N[1068]), .YC(N[1069]));
  AND2X1 n1082(.A(N[254]), .B(N[356]), .Y(N[1082]));
  HAX1 n1098(.A(N[773]), .B(N[356]), .YS(N[1098]), .YC(N[1099]));
  AND2X1 n1156(.A(N[446]), .B(N[550]), .Y(N[1156]));
  assign N[1157] = N[1156];
  FAX1 n1172(.A(N[460]), .B(N[564]), .C(N[668]), .YS(N[1172]), .YC(N[1173]));
  FAX1 n1186(.A(N[476]), .B(N[580]), .C(N[682]), .YS(N[1186]), .YC(N[1187]));
  FAX1 n1202(.A(N[490]), .B(N[594]), .C(N[698]), .YS(N[1202]), .YC(N[1203]));
  HAX1 n1232(.A(N[608]), .B(N[712]), .YS(N[1232]), .YC(N[1233]));
  OR2X1 n1320(.A(N[1068]), .B(N[118]), .Y(N[1320]));
  assign N[1321] = N[1320];
  FAX1 n1334(.A(N[1098]), .B(N[1069]), .C(N[1172]), .YS(N[1334]), .YC(N[1335]));
  FAX1 n1350(.A(N[372]), .B(N[1082]), .C(N[1186]), .YS(N[1350]), .YC(N[1351]));
  FAX1 n1394(.A(N[1157]), .B(N[772]), .C(N[876]), .YS(N[1394]), .YC(N[1395]));
  FAX1 n1408(.A(N[1173]), .B(N[786]), .C(N[890]), .YS(N[1408]), .YC(N[1409]));
  FAX1 n1424(.A(N[1187]), .B(N[802]), .C(N[906]), .YS(N[1424]), .YC(N[1425]));
  FAX1 n1438(.A(N[1203]), .B(N[816]), .C(N[920]), .YS(N[1438]), .YC(N[1439]));
  FAX1 n1454(.A(N[1233]), .B(N[832]), .C(N[934]), .YS(N[1454]), .YC(N[1455]));
  AND2X1 n1468(.A(N[846]), .B(N[950]), .Y(N[1468]));
  HAX1 n1482(.A(N[846]), .B(N[950]), .YS(N[1482]), .YC(N[1483]));
  FAX1 n1572(.A(N[1334]), .B(N[1321]), .C(N[1394]), .YS(N[1572]), .YC(N[1573]));
  FAX1 n1586(.A(N[1350]), .B(N[1335]), .C(N[1408]), .YS(N[1586]), .YC(N[1587]));
  FAX1 n1602(.A(N[1202]), .B(N[1351]), .C(N[1424]), .YS(N[1602]), .YC(N[1603]));
  AND2X1 n1616(.A(N[1232]), .B(N[1438]), .Y(N[1616]));
  HAX1 n1632(.A(N[1232]), .B(N[1438]), .YS(N[1632]), .YC(N[1633]));
  AND2X1 n1646(.A(N[728]), .B(N[1454]), .Y(N[1646]));
  HAX1 n1660(.A(N[728]), .B(N[1454]), .YS(N[1660]), .YC(N[1661]));
  BUFX2 n1734(.A(N[1572]), .Y(N[1734]));
  FAX1 n1750(.A(N[1586]), .B(N[1573]), .C(N[1395]), .YS(N[1750]), .YC(N[1751]));
  FAX1 n1764(.A(N[1602]), .B(N[1587]), .C(N[1409]), .YS(N[1764]), .YC(N[1765]));
  FAX1 n1780(.A(N[1632]), .B(N[1603]), .C(N[1425]), .YS(N[1780]), .YC(N[1781]));
  FAX1 n1794(.A(N[1660]), .B(N[1616]), .C(N[1439]), .YS(N[1794]), .YC(N[1795]));
  FAX1 n1808(.A(N[1482]), .B(N[1646]), .C(N[1455]), .YS(N[1808]), .YC(N[1809]));
  AND2X1 n1824(.A(N[964]), .B(N[1468]), .Y(N[1824]));
  HAX1 n1838(.A(N[964]), .B(N[1468]), .YS(N[1838]), .YC(N[1839]));
  BUFX2 n1898(.A(N[1734]), .Y(N[1898]));
  BUFX2 n1912(.A(N[1750]), .Y(N[1912]));
  HAX1 n1928(.A(N[1764]), .B(N[1751]), .YS(N[1928]), .YC(N[1929]));
  FAX1 n1942(.A(N[1780]), .B(N[1765]), .C(N[1929]), .YS(N[1942]), .YC(N[1943]));
  FAX1 n1956(.A(N[1794]), .B(N[1781]), .C(N[1943]), .YS(N[1956]), .YC(N[1957]));
  FAX1 n1972(.A(N[1808]), .B(N[1795]), .C(N[1957]), .YS(N[1972]), .YC(N[1973]));
  FAX1 n1986(.A(N[1838]), .B(N[1809]), .C(N[1973]), .YS(N[1986]), .YC(N[1987]));
  OR2X1 n2016(.A(N[1824]), .B(N[1987]), .Y(N[2016]));

  assign O[0] = N[393];
  assign O[1] = N[980];
  assign O[2] = N[1587];
  assign O[3] = N[1632];
  assign O[4] = N[461];
  assign O[5] = N[1098];
  assign O[6] = N[343];
  assign O[7] = N[1572];
  assign O[8] = N[1898];
  assign O[9] = N[1912];
  assign O[10] = N[1928];
  assign O[11] = N[1942];
  assign O[12] = N[1956];
  assign O[13] = N[1972];
  assign O[14] = N[1986];
  assign O[15] = N[2016];

endmodule



// internal reference: cgp-evoapproxlib.08.mul8_475

