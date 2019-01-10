/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/

// bdd_sift/bw_16/conf_core_2_wce_06554/run.00001.chr
module add16u_328(A, B, O);
  input [15:0] A, B;
  output [16:0] O;
  wire sig_93, sig_94, sig_95, sig_96, sig_98, sig_99;
  wire sig_100, sig_101, sig_103, sig_104, sig_105, sig_106;
  assign O[11] = A[11];
  assign O[2] = B[6];
  assign O[12] = 1'b0;
  assign O[4] = B[5];
  assign O[10] = 1'b0;
  assign sig_93 = A[12] | B[12];
  assign sig_94 = A[13] ^ B[13];
  assign sig_95 = A[13] & B[13];
  assign sig_96 = sig_94 & sig_93;
  assign O[13] = sig_94 ^ sig_93;
  assign sig_98 = sig_95 | sig_96;
  assign sig_99 = A[14] ^ B[14];
  assign sig_100 = A[14] & B[14];
  assign sig_101 = sig_99 & sig_98;
  assign O[14] = sig_99 ^ sig_98;
  assign sig_103 = sig_100 | sig_101;
  assign sig_104 = A[15] ^ B[15];
  assign sig_105 = A[15] & B[15];
  assign sig_106 = sig_104 & sig_103;
  assign O[15] = sig_104 ^ sig_103;
  assign O[16] = sig_105 | sig_106;
  assign O[0] = A[1]; // default output
  assign O[1] = B[5]; // default output
  assign O[3] = B[8]; // default output
  assign O[5] = B[9]; // default output
  assign O[6] = A[2]; // default output
  assign O[7] = B[13]; // default output
  assign O[8] = B[13]; // default output
  assign O[9] = B[12]; // default output
endmodule


// internal reference: cgp-add-bdd.16.add16u_328

