/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/

//Broken Array Multiplier Signed(bw=16,v=2,h=1)
module mul16s_4517 ( A, B, O );
  input [15:0] A;
  input [15:0] B;
  output [31:0] O;

  wire C_10_0,C_10_1,C_10_10,C_10_11,C_10_12,C_10_13,C_10_14,C_10_15,C_10_2,C_10_3,C_10_4,C_10_5,C_10_6,C_10_7,C_10_8,C_10_9,C_11_0,C_11_1,C_11_10,C_11_11,C_11_12,C_11_13,C_11_14,C_11_15,C_11_2,C_11_3,C_11_4,C_11_5,C_11_6,C_11_7,C_11_8,C_11_9,C_12_0,C_12_1,C_12_10,C_12_11,C_12_12,C_12_13,C_12_14,C_12_15,C_12_2,C_12_3,C_12_4,C_12_5,C_12_6,C_12_7,C_12_8,C_12_9,C_13_0,C_13_1,C_13_10,C_13_11,C_13_12,C_13_13,C_13_14,C_13_15,C_13_2,C_13_3,C_13_4,C_13_5,C_13_6,C_13_7,C_13_8,C_13_9,C_14_0,C_14_1,C_14_10,C_14_11,C_14_12,C_14_13,C_14_14,C_14_15,C_14_2,C_14_3,C_14_4,C_14_5,C_14_6,C_14_7,C_14_8,C_14_9,C_15_0,C_15_1,C_15_10,C_15_11,C_15_12,C_15_13,C_15_14,C_15_15,C_15_2,C_15_3,C_15_4,C_15_5,C_15_6,C_15_7,C_15_8,C_15_9,C_16_0,C_16_1,C_16_10,C_16_11,C_16_12,C_16_13,C_16_14,C_16_15,C_16_2,C_16_3,C_16_4,C_16_5,C_16_6,C_16_7,C_16_8,C_16_9,C_1_14,C_1_15,C_2_0,C_2_1,C_2_10,C_2_11,C_2_12,C_2_13,C_2_14,C_2_15,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_2_8,C_2_9,C_3_0,C_3_1,C_3_10,C_3_11,C_3_12,C_3_13,C_3_14,C_3_15,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_3_8,C_3_9,C_4_0,C_4_1,C_4_10,C_4_11,C_4_12,C_4_13,C_4_14,C_4_15,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_4_8,C_4_9,C_5_0,C_5_1,C_5_10,C_5_11,C_5_12,C_5_13,C_5_14,C_5_15,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_5_8,C_5_9,C_6_0,C_6_1,C_6_10,C_6_11,C_6_12,C_6_13,C_6_14,C_6_15,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_6_8,C_6_9,C_7_0,C_7_1,C_7_10,C_7_11,C_7_12,C_7_13,C_7_14,C_7_15,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_7_8,C_7_9,C_8_0,C_8_1,C_8_10,C_8_11,C_8_12,C_8_13,C_8_14,C_8_15,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,C_8_8,C_8_9,C_9_0,C_9_1,C_9_10,C_9_11,C_9_12,C_9_13,C_9_14,C_9_15,C_9_2,C_9_3,C_9_4,C_9_5,C_9_6,C_9_7,C_9_8,C_9_9,S_0_15,S_10_0,S_10_1,S_10_10,S_10_11,S_10_12,S_10_13,S_10_14,S_10_15,S_10_2,S_10_3,S_10_4,S_10_5,S_10_6,S_10_7,S_10_8,S_10_9,S_11_0,S_11_1,S_11_10,S_11_11,S_11_12,S_11_13,S_11_14,S_11_15,S_11_2,S_11_3,S_11_4,S_11_5,S_11_6,S_11_7,S_11_8,S_11_9,S_12_0,S_12_1,S_12_10,S_12_11,S_12_12,S_12_13,S_12_14,S_12_15,S_12_2,S_12_3,S_12_4,S_12_5,S_12_6,S_12_7,S_12_8,S_12_9,S_13_0,S_13_1,S_13_10,S_13_11,S_13_12,S_13_13,S_13_14,S_13_15,S_13_2,S_13_3,S_13_4,S_13_5,S_13_6,S_13_7,S_13_8,S_13_9,S_14_0,S_14_1,S_14_10,S_14_11,S_14_12,S_14_13,S_14_14,S_14_15,S_14_2,S_14_3,S_14_4,S_14_5,S_14_6,S_14_7,S_14_8,S_14_9,S_15_0,S_15_1,S_15_10,S_15_11,S_15_12,S_15_13,S_15_14,S_15_15,S_15_2,S_15_3,S_15_4,S_15_5,S_15_6,S_15_7,S_15_8,S_15_9,S_16_0,S_16_1,S_16_10,S_16_11,S_16_12,S_16_13,S_16_14,S_16_15,S_16_2,S_16_3,S_16_4,S_16_5,S_16_6,S_16_7,S_16_8,S_16_9,S_1_1,S_1_10,S_1_11,S_1_12,S_1_13,S_1_14,S_1_15,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_1_8,S_1_9,S_2_0,S_2_1,S_2_10,S_2_11,S_2_12,S_2_13,S_2_14,S_2_15,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_2_8,S_2_9,S_3_0,S_3_1,S_3_10,S_3_11,S_3_12,S_3_13,S_3_14,S_3_15,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_3_8,S_3_9,S_4_0,S_4_1,S_4_10,S_4_11,S_4_12,S_4_13,S_4_14,S_4_15,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_4_8,S_4_9,S_5_0,S_5_1,S_5_10,S_5_11,S_5_12,S_5_13,S_5_14,S_5_15,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_5_8,S_5_9,S_6_0,S_6_1,S_6_10,S_6_11,S_6_12,S_6_13,S_6_14,S_6_15,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_6_8,S_6_9,S_7_0,S_7_1,S_7_10,S_7_11,S_7_12,S_7_13,S_7_14,S_7_15,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_7_8,S_7_9,S_8_0,S_8_1,S_8_10,S_8_11,S_8_12,S_8_13,S_8_14,S_8_15,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7,S_8_8,S_8_9,S_9_0,S_9_1,S_9_10,S_9_11,S_9_12,S_9_13,S_9_14,S_9_15,S_9_2,S_9_3,S_9_4,S_9_5,S_9_6,S_9_7,S_9_8,S_9_9;

  assign S_0_15 = 1'b1;
  assign S_1_1 = (A[1] & B[1]);
  assign S_1_2 = (A[1] & B[2]);
  assign S_1_3 = (A[1] & B[3]);
  assign S_1_4 = (A[1] & B[4]);
  assign S_1_5 = (A[1] & B[5]);
  assign S_1_6 = (A[1] & B[6]);
  assign S_1_7 = (A[1] & B[7]);
  assign S_1_8 = (A[1] & B[8]);
  assign S_1_9 = (A[1] & B[9]);
  assign S_1_10 = (A[1] & B[10]);
  assign S_1_11 = (A[1] & B[11]);
  assign S_1_12 = (A[1] & B[12]);
  assign S_1_13 = (A[1] & B[13]);
  HAX1 U96207 (.A(S_0_15), .B((A[1] & B[14])), .YS(S_1_14), .YC(C_1_14));
  HAX1 U96208 (.A(1'b1), .B(~(A[1] & B[15])), .YS(S_1_15), .YC(C_1_15));
  HAX1 U96209 (.A(S_1_1), .B((A[2] & B[0])), .YS(S_2_0), .YC(C_2_0));
  HAX1 U96210 (.A(S_1_2), .B((A[2] & B[1])), .YS(S_2_1), .YC(C_2_1));
  HAX1 U96211 (.A(S_1_3), .B((A[2] & B[2])), .YS(S_2_2), .YC(C_2_2));
  HAX1 U96212 (.A(S_1_4), .B((A[2] & B[3])), .YS(S_2_3), .YC(C_2_3));
  HAX1 U96213 (.A(S_1_5), .B((A[2] & B[4])), .YS(S_2_4), .YC(C_2_4));
  HAX1 U96214 (.A(S_1_6), .B((A[2] & B[5])), .YS(S_2_5), .YC(C_2_5));
  HAX1 U96215 (.A(S_1_7), .B((A[2] & B[6])), .YS(S_2_6), .YC(C_2_6));
  HAX1 U96216 (.A(S_1_8), .B((A[2] & B[7])), .YS(S_2_7), .YC(C_2_7));
  HAX1 U96217 (.A(S_1_9), .B((A[2] & B[8])), .YS(S_2_8), .YC(C_2_8));
  HAX1 U96218 (.A(S_1_10), .B((A[2] & B[9])), .YS(S_2_9), .YC(C_2_9));
  HAX1 U96219 (.A(S_1_11), .B((A[2] & B[10])), .YS(S_2_10), .YC(C_2_10));
  HAX1 U96220 (.A(S_1_12), .B((A[2] & B[11])), .YS(S_2_11), .YC(C_2_11));
  HAX1 U96221 (.A(S_1_13), .B((A[2] & B[12])), .YS(S_2_12), .YC(C_2_12));
  HAX1 U96222 (.A(S_1_14), .B((A[2] & B[13])), .YS(S_2_13), .YC(C_2_13));
  FAX1 U96223 (.A(S_1_15), .B(C_1_14), .C((A[2] & B[14])), .YS(S_2_14), .YC(C_2_14));
  HAX1 U96224 (.A(C_1_15), .B(~(A[2] & B[15])), .YS(S_2_15), .YC(C_2_15));
  FAX1 U96225 (.A(S_2_1), .B(C_2_0), .C((A[3] & B[0])), .YS(S_3_0), .YC(C_3_0));
  FAX1 U96226 (.A(S_2_2), .B(C_2_1), .C((A[3] & B[1])), .YS(S_3_1), .YC(C_3_1));
  FAX1 U96227 (.A(S_2_3), .B(C_2_2), .C((A[3] & B[2])), .YS(S_3_2), .YC(C_3_2));
  FAX1 U96228 (.A(S_2_4), .B(C_2_3), .C((A[3] & B[3])), .YS(S_3_3), .YC(C_3_3));
  FAX1 U96229 (.A(S_2_5), .B(C_2_4), .C((A[3] & B[4])), .YS(S_3_4), .YC(C_3_4));
  FAX1 U96230 (.A(S_2_6), .B(C_2_5), .C((A[3] & B[5])), .YS(S_3_5), .YC(C_3_5));
  FAX1 U96231 (.A(S_2_7), .B(C_2_6), .C((A[3] & B[6])), .YS(S_3_6), .YC(C_3_6));
  FAX1 U96232 (.A(S_2_8), .B(C_2_7), .C((A[3] & B[7])), .YS(S_3_7), .YC(C_3_7));
  FAX1 U96233 (.A(S_2_9), .B(C_2_8), .C((A[3] & B[8])), .YS(S_3_8), .YC(C_3_8));
  FAX1 U96234 (.A(S_2_10), .B(C_2_9), .C((A[3] & B[9])), .YS(S_3_9), .YC(C_3_9));
  FAX1 U96235 (.A(S_2_11), .B(C_2_10), .C((A[3] & B[10])), .YS(S_3_10), .YC(C_3_10));
  FAX1 U96236 (.A(S_2_12), .B(C_2_11), .C((A[3] & B[11])), .YS(S_3_11), .YC(C_3_11));
  FAX1 U96237 (.A(S_2_13), .B(C_2_12), .C((A[3] & B[12])), .YS(S_3_12), .YC(C_3_12));
  FAX1 U96238 (.A(S_2_14), .B(C_2_13), .C((A[3] & B[13])), .YS(S_3_13), .YC(C_3_13));
  FAX1 U96239 (.A(S_2_15), .B(C_2_14), .C((A[3] & B[14])), .YS(S_3_14), .YC(C_3_14));
  HAX1 U96240 (.A(C_2_15), .B(~(A[3] & B[15])), .YS(S_3_15), .YC(C_3_15));
  FAX1 U96241 (.A(S_3_1), .B(C_3_0), .C((A[4] & B[0])), .YS(S_4_0), .YC(C_4_0));
  FAX1 U96242 (.A(S_3_2), .B(C_3_1), .C((A[4] & B[1])), .YS(S_4_1), .YC(C_4_1));
  FAX1 U96243 (.A(S_3_3), .B(C_3_2), .C((A[4] & B[2])), .YS(S_4_2), .YC(C_4_2));
  FAX1 U96244 (.A(S_3_4), .B(C_3_3), .C((A[4] & B[3])), .YS(S_4_3), .YC(C_4_3));
  FAX1 U96245 (.A(S_3_5), .B(C_3_4), .C((A[4] & B[4])), .YS(S_4_4), .YC(C_4_4));
  FAX1 U96246 (.A(S_3_6), .B(C_3_5), .C((A[4] & B[5])), .YS(S_4_5), .YC(C_4_5));
  FAX1 U96247 (.A(S_3_7), .B(C_3_6), .C((A[4] & B[6])), .YS(S_4_6), .YC(C_4_6));
  FAX1 U96248 (.A(S_3_8), .B(C_3_7), .C((A[4] & B[7])), .YS(S_4_7), .YC(C_4_7));
  FAX1 U96249 (.A(S_3_9), .B(C_3_8), .C((A[4] & B[8])), .YS(S_4_8), .YC(C_4_8));
  FAX1 U96250 (.A(S_3_10), .B(C_3_9), .C((A[4] & B[9])), .YS(S_4_9), .YC(C_4_9));
  FAX1 U96251 (.A(S_3_11), .B(C_3_10), .C((A[4] & B[10])), .YS(S_4_10), .YC(C_4_10));
  FAX1 U96252 (.A(S_3_12), .B(C_3_11), .C((A[4] & B[11])), .YS(S_4_11), .YC(C_4_11));
  FAX1 U96253 (.A(S_3_13), .B(C_3_12), .C((A[4] & B[12])), .YS(S_4_12), .YC(C_4_12));
  FAX1 U96254 (.A(S_3_14), .B(C_3_13), .C((A[4] & B[13])), .YS(S_4_13), .YC(C_4_13));
  FAX1 U96255 (.A(S_3_15), .B(C_3_14), .C((A[4] & B[14])), .YS(S_4_14), .YC(C_4_14));
  HAX1 U96256 (.A(C_3_15), .B(~(A[4] & B[15])), .YS(S_4_15), .YC(C_4_15));
  FAX1 U96257 (.A(S_4_1), .B(C_4_0), .C((A[5] & B[0])), .YS(S_5_0), .YC(C_5_0));
  FAX1 U96258 (.A(S_4_2), .B(C_4_1), .C((A[5] & B[1])), .YS(S_5_1), .YC(C_5_1));
  FAX1 U96259 (.A(S_4_3), .B(C_4_2), .C((A[5] & B[2])), .YS(S_5_2), .YC(C_5_2));
  FAX1 U96260 (.A(S_4_4), .B(C_4_3), .C((A[5] & B[3])), .YS(S_5_3), .YC(C_5_3));
  FAX1 U96261 (.A(S_4_5), .B(C_4_4), .C((A[5] & B[4])), .YS(S_5_4), .YC(C_5_4));
  FAX1 U96262 (.A(S_4_6), .B(C_4_5), .C((A[5] & B[5])), .YS(S_5_5), .YC(C_5_5));
  FAX1 U96263 (.A(S_4_7), .B(C_4_6), .C((A[5] & B[6])), .YS(S_5_6), .YC(C_5_6));
  FAX1 U96264 (.A(S_4_8), .B(C_4_7), .C((A[5] & B[7])), .YS(S_5_7), .YC(C_5_7));
  FAX1 U96265 (.A(S_4_9), .B(C_4_8), .C((A[5] & B[8])), .YS(S_5_8), .YC(C_5_8));
  FAX1 U96266 (.A(S_4_10), .B(C_4_9), .C((A[5] & B[9])), .YS(S_5_9), .YC(C_5_9));
  FAX1 U96267 (.A(S_4_11), .B(C_4_10), .C((A[5] & B[10])), .YS(S_5_10), .YC(C_5_10));
  FAX1 U96268 (.A(S_4_12), .B(C_4_11), .C((A[5] & B[11])), .YS(S_5_11), .YC(C_5_11));
  FAX1 U96269 (.A(S_4_13), .B(C_4_12), .C((A[5] & B[12])), .YS(S_5_12), .YC(C_5_12));
  FAX1 U96270 (.A(S_4_14), .B(C_4_13), .C((A[5] & B[13])), .YS(S_5_13), .YC(C_5_13));
  FAX1 U96271 (.A(S_4_15), .B(C_4_14), .C((A[5] & B[14])), .YS(S_5_14), .YC(C_5_14));
  HAX1 U96272 (.A(C_4_15), .B(~(A[5] & B[15])), .YS(S_5_15), .YC(C_5_15));
  FAX1 U96273 (.A(S_5_1), .B(C_5_0), .C((A[6] & B[0])), .YS(S_6_0), .YC(C_6_0));
  FAX1 U96274 (.A(S_5_2), .B(C_5_1), .C((A[6] & B[1])), .YS(S_6_1), .YC(C_6_1));
  FAX1 U96275 (.A(S_5_3), .B(C_5_2), .C((A[6] & B[2])), .YS(S_6_2), .YC(C_6_2));
  FAX1 U96276 (.A(S_5_4), .B(C_5_3), .C((A[6] & B[3])), .YS(S_6_3), .YC(C_6_3));
  FAX1 U96277 (.A(S_5_5), .B(C_5_4), .C((A[6] & B[4])), .YS(S_6_4), .YC(C_6_4));
  FAX1 U96278 (.A(S_5_6), .B(C_5_5), .C((A[6] & B[5])), .YS(S_6_5), .YC(C_6_5));
  FAX1 U96279 (.A(S_5_7), .B(C_5_6), .C((A[6] & B[6])), .YS(S_6_6), .YC(C_6_6));
  FAX1 U96280 (.A(S_5_8), .B(C_5_7), .C((A[6] & B[7])), .YS(S_6_7), .YC(C_6_7));
  FAX1 U96281 (.A(S_5_9), .B(C_5_8), .C((A[6] & B[8])), .YS(S_6_8), .YC(C_6_8));
  FAX1 U96282 (.A(S_5_10), .B(C_5_9), .C((A[6] & B[9])), .YS(S_6_9), .YC(C_6_9));
  FAX1 U96283 (.A(S_5_11), .B(C_5_10), .C((A[6] & B[10])), .YS(S_6_10), .YC(C_6_10));
  FAX1 U96284 (.A(S_5_12), .B(C_5_11), .C((A[6] & B[11])), .YS(S_6_11), .YC(C_6_11));
  FAX1 U96285 (.A(S_5_13), .B(C_5_12), .C((A[6] & B[12])), .YS(S_6_12), .YC(C_6_12));
  FAX1 U96286 (.A(S_5_14), .B(C_5_13), .C((A[6] & B[13])), .YS(S_6_13), .YC(C_6_13));
  FAX1 U96287 (.A(S_5_15), .B(C_5_14), .C((A[6] & B[14])), .YS(S_6_14), .YC(C_6_14));
  HAX1 U96288 (.A(C_5_15), .B(~(A[6] & B[15])), .YS(S_6_15), .YC(C_6_15));
  FAX1 U96289 (.A(S_6_1), .B(C_6_0), .C((A[7] & B[0])), .YS(S_7_0), .YC(C_7_0));
  FAX1 U96290 (.A(S_6_2), .B(C_6_1), .C((A[7] & B[1])), .YS(S_7_1), .YC(C_7_1));
  FAX1 U96291 (.A(S_6_3), .B(C_6_2), .C((A[7] & B[2])), .YS(S_7_2), .YC(C_7_2));
  FAX1 U96292 (.A(S_6_4), .B(C_6_3), .C((A[7] & B[3])), .YS(S_7_3), .YC(C_7_3));
  FAX1 U96293 (.A(S_6_5), .B(C_6_4), .C((A[7] & B[4])), .YS(S_7_4), .YC(C_7_4));
  FAX1 U96294 (.A(S_6_6), .B(C_6_5), .C((A[7] & B[5])), .YS(S_7_5), .YC(C_7_5));
  FAX1 U96295 (.A(S_6_7), .B(C_6_6), .C((A[7] & B[6])), .YS(S_7_6), .YC(C_7_6));
  FAX1 U96296 (.A(S_6_8), .B(C_6_7), .C((A[7] & B[7])), .YS(S_7_7), .YC(C_7_7));
  FAX1 U96297 (.A(S_6_9), .B(C_6_8), .C((A[7] & B[8])), .YS(S_7_8), .YC(C_7_8));
  FAX1 U96298 (.A(S_6_10), .B(C_6_9), .C((A[7] & B[9])), .YS(S_7_9), .YC(C_7_9));
  FAX1 U96299 (.A(S_6_11), .B(C_6_10), .C((A[7] & B[10])), .YS(S_7_10), .YC(C_7_10));
  FAX1 U96300 (.A(S_6_12), .B(C_6_11), .C((A[7] & B[11])), .YS(S_7_11), .YC(C_7_11));
  FAX1 U96301 (.A(S_6_13), .B(C_6_12), .C((A[7] & B[12])), .YS(S_7_12), .YC(C_7_12));
  FAX1 U96302 (.A(S_6_14), .B(C_6_13), .C((A[7] & B[13])), .YS(S_7_13), .YC(C_7_13));
  FAX1 U96303 (.A(S_6_15), .B(C_6_14), .C((A[7] & B[14])), .YS(S_7_14), .YC(C_7_14));
  HAX1 U96304 (.A(C_6_15), .B(~(A[7] & B[15])), .YS(S_7_15), .YC(C_7_15));
  FAX1 U96305 (.A(S_7_1), .B(C_7_0), .C((A[8] & B[0])), .YS(S_8_0), .YC(C_8_0));
  FAX1 U96306 (.A(S_7_2), .B(C_7_1), .C((A[8] & B[1])), .YS(S_8_1), .YC(C_8_1));
  FAX1 U96307 (.A(S_7_3), .B(C_7_2), .C((A[8] & B[2])), .YS(S_8_2), .YC(C_8_2));
  FAX1 U96308 (.A(S_7_4), .B(C_7_3), .C((A[8] & B[3])), .YS(S_8_3), .YC(C_8_3));
  FAX1 U96309 (.A(S_7_5), .B(C_7_4), .C((A[8] & B[4])), .YS(S_8_4), .YC(C_8_4));
  FAX1 U96310 (.A(S_7_6), .B(C_7_5), .C((A[8] & B[5])), .YS(S_8_5), .YC(C_8_5));
  FAX1 U96311 (.A(S_7_7), .B(C_7_6), .C((A[8] & B[6])), .YS(S_8_6), .YC(C_8_6));
  FAX1 U96312 (.A(S_7_8), .B(C_7_7), .C((A[8] & B[7])), .YS(S_8_7), .YC(C_8_7));
  FAX1 U96313 (.A(S_7_9), .B(C_7_8), .C((A[8] & B[8])), .YS(S_8_8), .YC(C_8_8));
  FAX1 U96314 (.A(S_7_10), .B(C_7_9), .C((A[8] & B[9])), .YS(S_8_9), .YC(C_8_9));
  FAX1 U96315 (.A(S_7_11), .B(C_7_10), .C((A[8] & B[10])), .YS(S_8_10), .YC(C_8_10));
  FAX1 U96316 (.A(S_7_12), .B(C_7_11), .C((A[8] & B[11])), .YS(S_8_11), .YC(C_8_11));
  FAX1 U96317 (.A(S_7_13), .B(C_7_12), .C((A[8] & B[12])), .YS(S_8_12), .YC(C_8_12));
  FAX1 U96318 (.A(S_7_14), .B(C_7_13), .C((A[8] & B[13])), .YS(S_8_13), .YC(C_8_13));
  FAX1 U96319 (.A(S_7_15), .B(C_7_14), .C((A[8] & B[14])), .YS(S_8_14), .YC(C_8_14));
  HAX1 U96320 (.A(C_7_15), .B(~(A[8] & B[15])), .YS(S_8_15), .YC(C_8_15));
  FAX1 U96321 (.A(S_8_1), .B(C_8_0), .C((A[9] & B[0])), .YS(S_9_0), .YC(C_9_0));
  FAX1 U96322 (.A(S_8_2), .B(C_8_1), .C((A[9] & B[1])), .YS(S_9_1), .YC(C_9_1));
  FAX1 U96323 (.A(S_8_3), .B(C_8_2), .C((A[9] & B[2])), .YS(S_9_2), .YC(C_9_2));
  FAX1 U96324 (.A(S_8_4), .B(C_8_3), .C((A[9] & B[3])), .YS(S_9_3), .YC(C_9_3));
  FAX1 U96325 (.A(S_8_5), .B(C_8_4), .C((A[9] & B[4])), .YS(S_9_4), .YC(C_9_4));
  FAX1 U96326 (.A(S_8_6), .B(C_8_5), .C((A[9] & B[5])), .YS(S_9_5), .YC(C_9_5));
  FAX1 U96327 (.A(S_8_7), .B(C_8_6), .C((A[9] & B[6])), .YS(S_9_6), .YC(C_9_6));
  FAX1 U96328 (.A(S_8_8), .B(C_8_7), .C((A[9] & B[7])), .YS(S_9_7), .YC(C_9_7));
  FAX1 U96329 (.A(S_8_9), .B(C_8_8), .C((A[9] & B[8])), .YS(S_9_8), .YC(C_9_8));
  FAX1 U96330 (.A(S_8_10), .B(C_8_9), .C((A[9] & B[9])), .YS(S_9_9), .YC(C_9_9));
  FAX1 U96331 (.A(S_8_11), .B(C_8_10), .C((A[9] & B[10])), .YS(S_9_10), .YC(C_9_10));
  FAX1 U96332 (.A(S_8_12), .B(C_8_11), .C((A[9] & B[11])), .YS(S_9_11), .YC(C_9_11));
  FAX1 U96333 (.A(S_8_13), .B(C_8_12), .C((A[9] & B[12])), .YS(S_9_12), .YC(C_9_12));
  FAX1 U96334 (.A(S_8_14), .B(C_8_13), .C((A[9] & B[13])), .YS(S_9_13), .YC(C_9_13));
  FAX1 U96335 (.A(S_8_15), .B(C_8_14), .C((A[9] & B[14])), .YS(S_9_14), .YC(C_9_14));
  HAX1 U96336 (.A(C_8_15), .B(~(A[9] & B[15])), .YS(S_9_15), .YC(C_9_15));
  FAX1 U96337 (.A(S_9_1), .B(C_9_0), .C((A[10] & B[0])), .YS(S_10_0), .YC(C_10_0));
  FAX1 U96338 (.A(S_9_2), .B(C_9_1), .C((A[10] & B[1])), .YS(S_10_1), .YC(C_10_1));
  FAX1 U96339 (.A(S_9_3), .B(C_9_2), .C((A[10] & B[2])), .YS(S_10_2), .YC(C_10_2));
  FAX1 U96340 (.A(S_9_4), .B(C_9_3), .C((A[10] & B[3])), .YS(S_10_3), .YC(C_10_3));
  FAX1 U96341 (.A(S_9_5), .B(C_9_4), .C((A[10] & B[4])), .YS(S_10_4), .YC(C_10_4));
  FAX1 U96342 (.A(S_9_6), .B(C_9_5), .C((A[10] & B[5])), .YS(S_10_5), .YC(C_10_5));
  FAX1 U96343 (.A(S_9_7), .B(C_9_6), .C((A[10] & B[6])), .YS(S_10_6), .YC(C_10_6));
  FAX1 U96344 (.A(S_9_8), .B(C_9_7), .C((A[10] & B[7])), .YS(S_10_7), .YC(C_10_7));
  FAX1 U96345 (.A(S_9_9), .B(C_9_8), .C((A[10] & B[8])), .YS(S_10_8), .YC(C_10_8));
  FAX1 U96346 (.A(S_9_10), .B(C_9_9), .C((A[10] & B[9])), .YS(S_10_9), .YC(C_10_9));
  FAX1 U96347 (.A(S_9_11), .B(C_9_10), .C((A[10] & B[10])), .YS(S_10_10), .YC(C_10_10));
  FAX1 U96348 (.A(S_9_12), .B(C_9_11), .C((A[10] & B[11])), .YS(S_10_11), .YC(C_10_11));
  FAX1 U96349 (.A(S_9_13), .B(C_9_12), .C((A[10] & B[12])), .YS(S_10_12), .YC(C_10_12));
  FAX1 U96350 (.A(S_9_14), .B(C_9_13), .C((A[10] & B[13])), .YS(S_10_13), .YC(C_10_13));
  FAX1 U96351 (.A(S_9_15), .B(C_9_14), .C((A[10] & B[14])), .YS(S_10_14), .YC(C_10_14));
  HAX1 U96352 (.A(C_9_15), .B(~(A[10] & B[15])), .YS(S_10_15), .YC(C_10_15));
  FAX1 U96353 (.A(S_10_1), .B(C_10_0), .C((A[11] & B[0])), .YS(S_11_0), .YC(C_11_0));
  FAX1 U96354 (.A(S_10_2), .B(C_10_1), .C((A[11] & B[1])), .YS(S_11_1), .YC(C_11_1));
  FAX1 U96355 (.A(S_10_3), .B(C_10_2), .C((A[11] & B[2])), .YS(S_11_2), .YC(C_11_2));
  FAX1 U96356 (.A(S_10_4), .B(C_10_3), .C((A[11] & B[3])), .YS(S_11_3), .YC(C_11_3));
  FAX1 U96357 (.A(S_10_5), .B(C_10_4), .C((A[11] & B[4])), .YS(S_11_4), .YC(C_11_4));
  FAX1 U96358 (.A(S_10_6), .B(C_10_5), .C((A[11] & B[5])), .YS(S_11_5), .YC(C_11_5));
  FAX1 U96359 (.A(S_10_7), .B(C_10_6), .C((A[11] & B[6])), .YS(S_11_6), .YC(C_11_6));
  FAX1 U96360 (.A(S_10_8), .B(C_10_7), .C((A[11] & B[7])), .YS(S_11_7), .YC(C_11_7));
  FAX1 U96361 (.A(S_10_9), .B(C_10_8), .C((A[11] & B[8])), .YS(S_11_8), .YC(C_11_8));
  FAX1 U96362 (.A(S_10_10), .B(C_10_9), .C((A[11] & B[9])), .YS(S_11_9), .YC(C_11_9));
  FAX1 U96363 (.A(S_10_11), .B(C_10_10), .C((A[11] & B[10])), .YS(S_11_10), .YC(C_11_10));
  FAX1 U96364 (.A(S_10_12), .B(C_10_11), .C((A[11] & B[11])), .YS(S_11_11), .YC(C_11_11));
  FAX1 U96365 (.A(S_10_13), .B(C_10_12), .C((A[11] & B[12])), .YS(S_11_12), .YC(C_11_12));
  FAX1 U96366 (.A(S_10_14), .B(C_10_13), .C((A[11] & B[13])), .YS(S_11_13), .YC(C_11_13));
  FAX1 U96367 (.A(S_10_15), .B(C_10_14), .C((A[11] & B[14])), .YS(S_11_14), .YC(C_11_14));
  HAX1 U96368 (.A(C_10_15), .B(~(A[11] & B[15])), .YS(S_11_15), .YC(C_11_15));
  FAX1 U96369 (.A(S_11_1), .B(C_11_0), .C((A[12] & B[0])), .YS(S_12_0), .YC(C_12_0));
  FAX1 U96370 (.A(S_11_2), .B(C_11_1), .C((A[12] & B[1])), .YS(S_12_1), .YC(C_12_1));
  FAX1 U96371 (.A(S_11_3), .B(C_11_2), .C((A[12] & B[2])), .YS(S_12_2), .YC(C_12_2));
  FAX1 U96372 (.A(S_11_4), .B(C_11_3), .C((A[12] & B[3])), .YS(S_12_3), .YC(C_12_3));
  FAX1 U96373 (.A(S_11_5), .B(C_11_4), .C((A[12] & B[4])), .YS(S_12_4), .YC(C_12_4));
  FAX1 U96374 (.A(S_11_6), .B(C_11_5), .C((A[12] & B[5])), .YS(S_12_5), .YC(C_12_5));
  FAX1 U96375 (.A(S_11_7), .B(C_11_6), .C((A[12] & B[6])), .YS(S_12_6), .YC(C_12_6));
  FAX1 U96376 (.A(S_11_8), .B(C_11_7), .C((A[12] & B[7])), .YS(S_12_7), .YC(C_12_7));
  FAX1 U96377 (.A(S_11_9), .B(C_11_8), .C((A[12] & B[8])), .YS(S_12_8), .YC(C_12_8));
  FAX1 U96378 (.A(S_11_10), .B(C_11_9), .C((A[12] & B[9])), .YS(S_12_9), .YC(C_12_9));
  FAX1 U96379 (.A(S_11_11), .B(C_11_10), .C((A[12] & B[10])), .YS(S_12_10), .YC(C_12_10));
  FAX1 U96380 (.A(S_11_12), .B(C_11_11), .C((A[12] & B[11])), .YS(S_12_11), .YC(C_12_11));
  FAX1 U96381 (.A(S_11_13), .B(C_11_12), .C((A[12] & B[12])), .YS(S_12_12), .YC(C_12_12));
  FAX1 U96382 (.A(S_11_14), .B(C_11_13), .C((A[12] & B[13])), .YS(S_12_13), .YC(C_12_13));
  FAX1 U96383 (.A(S_11_15), .B(C_11_14), .C((A[12] & B[14])), .YS(S_12_14), .YC(C_12_14));
  HAX1 U96384 (.A(C_11_15), .B(~(A[12] & B[15])), .YS(S_12_15), .YC(C_12_15));
  FAX1 U96385 (.A(S_12_1), .B(C_12_0), .C((A[13] & B[0])), .YS(S_13_0), .YC(C_13_0));
  FAX1 U96386 (.A(S_12_2), .B(C_12_1), .C((A[13] & B[1])), .YS(S_13_1), .YC(C_13_1));
  FAX1 U96387 (.A(S_12_3), .B(C_12_2), .C((A[13] & B[2])), .YS(S_13_2), .YC(C_13_2));
  FAX1 U96388 (.A(S_12_4), .B(C_12_3), .C((A[13] & B[3])), .YS(S_13_3), .YC(C_13_3));
  FAX1 U96389 (.A(S_12_5), .B(C_12_4), .C((A[13] & B[4])), .YS(S_13_4), .YC(C_13_4));
  FAX1 U96390 (.A(S_12_6), .B(C_12_5), .C((A[13] & B[5])), .YS(S_13_5), .YC(C_13_5));
  FAX1 U96391 (.A(S_12_7), .B(C_12_6), .C((A[13] & B[6])), .YS(S_13_6), .YC(C_13_6));
  FAX1 U96392 (.A(S_12_8), .B(C_12_7), .C((A[13] & B[7])), .YS(S_13_7), .YC(C_13_7));
  FAX1 U96393 (.A(S_12_9), .B(C_12_8), .C((A[13] & B[8])), .YS(S_13_8), .YC(C_13_8));
  FAX1 U96394 (.A(S_12_10), .B(C_12_9), .C((A[13] & B[9])), .YS(S_13_9), .YC(C_13_9));
  FAX1 U96395 (.A(S_12_11), .B(C_12_10), .C((A[13] & B[10])), .YS(S_13_10), .YC(C_13_10));
  FAX1 U96396 (.A(S_12_12), .B(C_12_11), .C((A[13] & B[11])), .YS(S_13_11), .YC(C_13_11));
  FAX1 U96397 (.A(S_12_13), .B(C_12_12), .C((A[13] & B[12])), .YS(S_13_12), .YC(C_13_12));
  FAX1 U96398 (.A(S_12_14), .B(C_12_13), .C((A[13] & B[13])), .YS(S_13_13), .YC(C_13_13));
  FAX1 U96399 (.A(S_12_15), .B(C_12_14), .C((A[13] & B[14])), .YS(S_13_14), .YC(C_13_14));
  HAX1 U96400 (.A(C_12_15), .B(~(A[13] & B[15])), .YS(S_13_15), .YC(C_13_15));
  FAX1 U96401 (.A(S_13_1), .B(C_13_0), .C((A[14] & B[0])), .YS(S_14_0), .YC(C_14_0));
  FAX1 U96402 (.A(S_13_2), .B(C_13_1), .C((A[14] & B[1])), .YS(S_14_1), .YC(C_14_1));
  FAX1 U96403 (.A(S_13_3), .B(C_13_2), .C((A[14] & B[2])), .YS(S_14_2), .YC(C_14_2));
  FAX1 U96404 (.A(S_13_4), .B(C_13_3), .C((A[14] & B[3])), .YS(S_14_3), .YC(C_14_3));
  FAX1 U96405 (.A(S_13_5), .B(C_13_4), .C((A[14] & B[4])), .YS(S_14_4), .YC(C_14_4));
  FAX1 U96406 (.A(S_13_6), .B(C_13_5), .C((A[14] & B[5])), .YS(S_14_5), .YC(C_14_5));
  FAX1 U96407 (.A(S_13_7), .B(C_13_6), .C((A[14] & B[6])), .YS(S_14_6), .YC(C_14_6));
  FAX1 U96408 (.A(S_13_8), .B(C_13_7), .C((A[14] & B[7])), .YS(S_14_7), .YC(C_14_7));
  FAX1 U96409 (.A(S_13_9), .B(C_13_8), .C((A[14] & B[8])), .YS(S_14_8), .YC(C_14_8));
  FAX1 U96410 (.A(S_13_10), .B(C_13_9), .C((A[14] & B[9])), .YS(S_14_9), .YC(C_14_9));
  FAX1 U96411 (.A(S_13_11), .B(C_13_10), .C((A[14] & B[10])), .YS(S_14_10), .YC(C_14_10));
  FAX1 U96412 (.A(S_13_12), .B(C_13_11), .C((A[14] & B[11])), .YS(S_14_11), .YC(C_14_11));
  FAX1 U96413 (.A(S_13_13), .B(C_13_12), .C((A[14] & B[12])), .YS(S_14_12), .YC(C_14_12));
  FAX1 U96414 (.A(S_13_14), .B(C_13_13), .C((A[14] & B[13])), .YS(S_14_13), .YC(C_14_13));
  FAX1 U96415 (.A(S_13_15), .B(C_13_14), .C((A[14] & B[14])), .YS(S_14_14), .YC(C_14_14));
  HAX1 U96416 (.A(C_13_15), .B(~(A[14] & B[15])), .YS(S_14_15), .YC(C_14_15));
  FAX1 U96417 (.A(S_14_1), .B(C_14_0), .C(~(A[15] & B[0])), .YS(S_15_0), .YC(C_15_0));
  FAX1 U96418 (.A(S_14_2), .B(C_14_1), .C(~(A[15] & B[1])), .YS(S_15_1), .YC(C_15_1));
  FAX1 U96419 (.A(S_14_3), .B(C_14_2), .C(~(A[15] & B[2])), .YS(S_15_2), .YC(C_15_2));
  FAX1 U96420 (.A(S_14_4), .B(C_14_3), .C(~(A[15] & B[3])), .YS(S_15_3), .YC(C_15_3));
  FAX1 U96421 (.A(S_14_5), .B(C_14_4), .C(~(A[15] & B[4])), .YS(S_15_4), .YC(C_15_4));
  FAX1 U96422 (.A(S_14_6), .B(C_14_5), .C(~(A[15] & B[5])), .YS(S_15_5), .YC(C_15_5));
  FAX1 U96423 (.A(S_14_7), .B(C_14_6), .C(~(A[15] & B[6])), .YS(S_15_6), .YC(C_15_6));
  FAX1 U96424 (.A(S_14_8), .B(C_14_7), .C(~(A[15] & B[7])), .YS(S_15_7), .YC(C_15_7));
  FAX1 U96425 (.A(S_14_9), .B(C_14_8), .C(~(A[15] & B[8])), .YS(S_15_8), .YC(C_15_8));
  FAX1 U96426 (.A(S_14_10), .B(C_14_9), .C(~(A[15] & B[9])), .YS(S_15_9), .YC(C_15_9));
  FAX1 U96427 (.A(S_14_11), .B(C_14_10), .C(~(A[15] & B[10])), .YS(S_15_10), .YC(C_15_10));
  FAX1 U96428 (.A(S_14_12), .B(C_14_11), .C(~(A[15] & B[11])), .YS(S_15_11), .YC(C_15_11));
  FAX1 U96429 (.A(S_14_13), .B(C_14_12), .C(~(A[15] & B[12])), .YS(S_15_12), .YC(C_15_12));
  FAX1 U96430 (.A(S_14_14), .B(C_14_13), .C(~(A[15] & B[13])), .YS(S_15_13), .YC(C_15_13));
  FAX1 U96431 (.A(S_14_15), .B(C_14_14), .C(~(A[15] & B[14])), .YS(S_15_14), .YC(C_15_14));
  HAX1 U96432 (.A(C_14_15), .B((A[15] & B[15])), .YS(S_15_15), .YC(C_15_15));
  HAX1 U96433 (.A(S_15_1), .B(C_15_0), .YS(S_16_0), .YC(C_16_0));
  FAX1 U96434 (.A(S_15_2), .B(C_16_0), .C(C_15_1), .YS(S_16_1), .YC(C_16_1));
  FAX1 U96435 (.A(S_15_3), .B(C_16_1), .C(C_15_2), .YS(S_16_2), .YC(C_16_2));
  FAX1 U96436 (.A(S_15_4), .B(C_16_2), .C(C_15_3), .YS(S_16_3), .YC(C_16_3));
  FAX1 U96437 (.A(S_15_5), .B(C_16_3), .C(C_15_4), .YS(S_16_4), .YC(C_16_4));
  FAX1 U96438 (.A(S_15_6), .B(C_16_4), .C(C_15_5), .YS(S_16_5), .YC(C_16_5));
  FAX1 U96439 (.A(S_15_7), .B(C_16_5), .C(C_15_6), .YS(S_16_6), .YC(C_16_6));
  FAX1 U96440 (.A(S_15_8), .B(C_16_6), .C(C_15_7), .YS(S_16_7), .YC(C_16_7));
  FAX1 U96441 (.A(S_15_9), .B(C_16_7), .C(C_15_8), .YS(S_16_8), .YC(C_16_8));
  FAX1 U96442 (.A(S_15_10), .B(C_16_8), .C(C_15_9), .YS(S_16_9), .YC(C_16_9));
  FAX1 U96443 (.A(S_15_11), .B(C_16_9), .C(C_15_10), .YS(S_16_10), .YC(C_16_10));
  FAX1 U96444 (.A(S_15_12), .B(C_16_10), .C(C_15_11), .YS(S_16_11), .YC(C_16_11));
  FAX1 U96445 (.A(S_15_13), .B(C_16_11), .C(C_15_12), .YS(S_16_12), .YC(C_16_12));
  FAX1 U96446 (.A(S_15_14), .B(C_16_12), .C(C_15_13), .YS(S_16_13), .YC(C_16_13));
  FAX1 U96447 (.A(S_15_15), .B(C_16_13), .C(C_15_14), .YS(S_16_14), .YC(C_16_14));
  FAX1 U96448 (.A(1'b1), .B(C_16_14), .C(C_15_15), .YS(S_16_15), .YC(C_16_15));
  assign O = {S_16_15,S_16_14,S_16_13,S_16_12,S_16_11,S_16_10,S_16_9,S_16_8,S_16_7,S_16_6,S_16_5,S_16_4,S_16_3,S_16_2,S_16_1,S_16_0,S_15_0,S_14_0,S_13_0,S_12_0,S_11_0,S_10_0,S_9_0,S_8_0,S_7_0,S_6_0,S_5_0,S_4_0,S_3_0,S_2_0,1'b0,1'b0};

endmodule


// internal reference: truncation-bam.16.mul16s_4517

