/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/

// bdd_sift/bw_12/conf_core_0_ep_0.40/run.00001.chr
module add12u_011(A, B, O);
  input [11:0] A, B;
  output [12:0] O;
  wire sig_25, sig_26, sig_27, sig_30, sig_31, sig_36;
  wire sig_37, sig_38, sig_40, sig_41, sig_42, sig_43;
  wire sig_45, sig_46, sig_47, sig_48, sig_50, sig_51;
  wire sig_52, sig_53, sig_55, sig_56, sig_57, sig_58;
  wire sig_60, sig_61, sig_62, sig_63, sig_65, sig_66;
  wire sig_67, sig_68, sig_70, sig_71, sig_72, sig_73;
  wire sig_75, sig_76, sig_77, sig_78;
  assign sig_25 = A[0] & B[0];
  assign sig_26 = A[1] ^ B[1];
  assign sig_27 = A[1] & B[1];
  assign O[0] = B[0] ^ A[0];
  assign O[1] = sig_26 | sig_25;
  assign sig_30 = sig_27;
  assign sig_31 = A[2] ^ B[2];
  assign O[2] = sig_31 ^ sig_30;
  assign sig_36 = A[3] ^ B[3];
  assign sig_37 = A[3] & B[3];
  assign sig_38 = sig_36 & B[2];
  assign O[3] = sig_36 ^ B[2];
  assign sig_40 = sig_37 | sig_38;
  assign sig_41 = A[4] ^ B[4];
  assign sig_42 = A[4] & B[4];
  assign sig_43 = sig_41 & sig_40;
  assign O[4] = sig_41 ^ sig_40;
  assign sig_45 = sig_42 | sig_43;
  assign sig_46 = A[5] ^ B[5];
  assign sig_47 = A[5] & B[5];
  assign sig_48 = sig_46 & sig_45;
  assign O[5] = sig_46 ^ sig_45;
  assign sig_50 = sig_47 | sig_48;
  assign sig_51 = A[6] ^ B[6];
  assign sig_52 = A[6] & B[6];
  assign sig_53 = sig_51 & sig_50;
  assign O[6] = sig_51 ^ sig_50;
  assign sig_55 = sig_52 | sig_53;
  assign sig_56 = A[7] ^ B[7];
  assign sig_57 = A[7] & B[7];
  assign sig_58 = sig_56 & sig_55;
  assign O[7] = sig_56 ^ sig_55;
  assign sig_60 = sig_57 | sig_58;
  assign sig_61 = A[8] ^ B[8];
  assign sig_62 = A[8] & B[8];
  assign sig_63 = sig_61 & sig_60;
  assign O[8] = sig_61 ^ sig_60;
  assign sig_65 = sig_62 | sig_63;
  assign sig_66 = A[9] ^ B[9];
  assign sig_67 = A[9] & B[9];
  assign sig_68 = sig_66 & sig_65;
  assign O[9] = sig_66 ^ sig_65;
  assign sig_70 = sig_67 | sig_68;
  assign sig_71 = A[10] ^ B[10];
  assign sig_72 = A[10] & B[10];
  assign sig_73 = sig_71 & sig_70;
  assign O[10] = sig_71 ^ sig_70;
  assign sig_75 = sig_72 | sig_73;
  assign sig_76 = A[11] ^ B[11];
  assign sig_77 = A[11] & B[11];
  assign sig_78 = sig_76 & sig_75;
  assign O[11] = sig_76 ^ sig_75;
  assign O[12] = sig_77 | sig_78;
endmodule


// internal reference: cgp-add-bdd.12.add12u_011

