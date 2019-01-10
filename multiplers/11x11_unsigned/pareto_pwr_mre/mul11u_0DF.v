/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/

// ../../../cgp.nn/res/11b_160129\wtm_rca\e01.0\run.00156.txt
module mul11u_0DF(A, B, O);
  input [10:0] A, B;
  output [21:0] O;
  wire [10:0] A, B;
  wire [21:0] O;
  wire sig_42, sig_43, sig_53, sig_54, sig_64, sig_65;
  wire sig_74, sig_75, sig_83, sig_84, sig_85, sig_86;
  wire sig_87, sig_94, sig_95, sig_96, sig_97, sig_98;
  wire sig_103, sig_104, sig_105, sig_106, sig_107, sig_108;
  wire sig_109, sig_113, sig_114, sig_115, sig_116, sig_117;
  wire sig_118, sig_119, sig_120, sig_124, sig_125, sig_126;
  wire sig_127, sig_128, sig_129, sig_130, sig_131, sig_134;
  wire sig_135, sig_136, sig_137, sig_138, sig_139, sig_140;
  wire sig_141, sig_142, sig_186, sig_189, sig_190, sig_191;
  wire sig_219, sig_220, sig_221, sig_223, sig_225, sig_226;
  wire sig_228, sig_229, sig_230, sig_231, sig_232, sig_233;
  wire sig_234, sig_235, sig_236, sig_237, sig_238, sig_239;
  wire sig_240, sig_255, sig_257, sig_259, sig_262, sig_263;
  wire sig_264, sig_266, sig_267, sig_268, sig_269, sig_270;
  wire sig_271, sig_272, sig_273, sig_275, sig_276, sig_277;
  wire sig_278, sig_279, sig_280, sig_281, sig_282, sig_283;
  wire sig_284, sig_285, sig_286, sig_287, sig_288, sig_289;
  wire sig_332, sig_334, sig_336, sig_337, sig_338, sig_339;
  wire sig_340, sig_341, sig_361, sig_362, sig_363, sig_365;
  wire sig_366, sig_367, sig_368, sig_369, sig_370, sig_371;
  wire sig_372, sig_373, sig_374, sig_375, sig_376, sig_377;
  wire sig_378, sig_379, sig_380, sig_381, sig_382, sig_383;
  wire sig_384, sig_385, sig_387, sig_388, sig_389, sig_390;
  wire sig_391, sig_427, sig_430, sig_431, sig_432, sig_433;
  wire sig_434, sig_435, sig_436, sig_437, sig_438, sig_439;
  wire sig_440, sig_441, sig_442, sig_443, sig_444, sig_457;
  wire sig_458, sig_459, sig_460, sig_461, sig_463, sig_464;
  wire sig_465, sig_466, sig_467, sig_468, sig_469, sig_470;
  wire sig_471, sig_472, sig_473, sig_474, sig_475, sig_476;
  wire sig_477, sig_478, sig_479, sig_480, sig_481, sig_482;
  wire sig_483, sig_484, sig_485, sig_486, sig_487, sig_488;
  wire sig_489, sig_490, sig_491, sig_492, sig_493, sig_494;
  wire sig_495, sig_496, sig_524, sig_527, sig_528, sig_529;
  wire sig_530, sig_531, sig_532, sig_533, sig_534, sig_535;
  wire sig_536, sig_537, sig_538, sig_539, sig_540, sig_541;
  wire sig_542, sig_543, sig_544, sig_545, sig_546, sig_547;
  wire sig_548, sig_549, sig_550, sig_551, sig_552, sig_553;
  wire sig_554, sig_555, sig_556, sig_570, sig_578, sig_582;
  wire sig_583, sig_584, sig_585, sig_586, sig_587, sig_588;
  wire sig_589, sig_590, sig_591, sig_593, sig_594, sig_595;
  wire sig_596, sig_597, sig_598, sig_599, sig_600, sig_601;
  wire sig_602, sig_603, sig_604, sig_605, sig_606, sig_607;
  wire sig_608, sig_609, sig_610, sig_611, sig_612, sig_613;
  wire sig_614, sig_615, sig_616, sig_617, sig_618, sig_636;
  wire sig_647, sig_650, sig_651, sig_652, sig_653, sig_655;
  wire sig_656, sig_657, sig_658, sig_660, sig_661, sig_662;
  wire sig_663, sig_665, sig_666, sig_667, sig_668, sig_670;
  wire sig_671, sig_672, sig_673, sig_675, sig_676, sig_677;
  wire sig_678, sig_681, sig_683, sig_685, sig_686, sig_687;
  wire sig_688, sig_690;
  assign sig_42 = A[9] & B[1];
  assign sig_43 = A[10] & B[1];
  assign sig_53 = A[4] & B[6];
  assign sig_54 = A[10] & B[2];
  assign O[9] = A[4] & B[10];
  assign sig_64 = A[9] & B[3];
  assign sig_65 = A[10] & B[3];
  assign sig_74 = A[8] & B[10];
  assign sig_75 = A[9] & B[4];
  assign O[8] = A[10] & B[4];
  assign sig_83 = A[6] & B[5];
  assign sig_84 = A[9] & B[5];
  assign sig_85 = A[8] & B[5];
  assign sig_86 = A[9] & B[5];
  assign sig_87 = A[10] & B[5];
  assign sig_94 = A[6] & B[6];
  assign sig_95 = A[3] & B[10];
  assign sig_96 = A[8] & B[6];
  assign sig_97 = A[9] & B[6];
  assign sig_98 = A[10] & B[6];
  assign sig_103 = A[4] & B[7];
  assign sig_104 = A[5] & B[7];
  assign sig_105 = A[6] & B[7];
  assign sig_106 = A[7] & B[7];
  assign sig_107 = A[8] & B[7];
  assign sig_108 = A[9] & B[7];
  assign sig_109 = A[10] & B[7];
  assign sig_113 = A[3] & B[7];
  assign sig_114 = A[4] & B[8];
  assign sig_115 = A[5] & B[8];
  assign sig_116 = A[6] & B[8];
  assign sig_117 = A[7] & B[8];
  assign sig_118 = A[8] & B[8];
  assign sig_119 = A[9] & B[8];
  assign sig_120 = A[10] & B[8];
  assign sig_124 = A[3] & B[9];
  assign sig_125 = A[4] & B[9];
  assign sig_126 = A[5] & B[9];
  assign sig_127 = A[6] & B[9];
  assign sig_128 = A[7] & B[9];
  assign sig_129 = A[8] & B[9];
  assign sig_130 = A[9] & B[9];
  assign sig_131 = A[10] & B[9];
  assign O[2] = A[1] & B[5];
  assign sig_134 = A[2] & B[10];
  assign sig_135 = A[3] & B[4];
  assign sig_136 = A[4] & B[10];
  assign sig_137 = A[5] & B[10];
  assign sig_138 = A[6] & B[10];
  assign sig_139 = A[7] & B[10];
  assign sig_140 = A[8] & B[10];
  assign sig_141 = A[9] & B[10];
  assign sig_142 = A[10] & B[10];
  assign sig_186 = A[4] & sig_42;
  assign sig_189 = sig_186;
  assign sig_190 = sig_43 & sig_53;
  assign sig_191 = sig_43 & sig_53;
  assign sig_219 = B[6];
  assign sig_220 = A[4] & B[4];
  assign sig_221 = sig_219 & B[5];
  assign sig_223 = sig_220 | sig_221;
  assign sig_225 = A[5] & B[9];
  assign sig_226 = A[8] & sig_83;
  assign sig_228 = sig_225 | sig_226;
  assign sig_229 = sig_64 | sig_74;
  assign sig_230 = sig_64 & A[4];
  assign sig_231 = sig_229 & sig_84;
  assign sig_232 = sig_229 ^ sig_84;
  assign sig_233 = sig_230 | sig_231;
  assign sig_234 = sig_65 ^ sig_75;
  assign sig_235 = sig_65 & sig_75;
  assign sig_236 = sig_234 & sig_85;
  assign sig_237 = sig_234 ^ sig_85;
  assign sig_238 = sig_235 | sig_236;
  assign sig_239 = O[8] & sig_86;
  assign sig_240 = O[8] ^ sig_86;
  assign sig_255 = !B[4];
  assign sig_257 = A[8] | sig_255;
  assign sig_259 = B[10] & sig_103;
  assign O[0] = A[1] & sig_113;
  assign sig_262 = sig_259;
  assign sig_263 = sig_94 ^ sig_104;
  assign sig_264 = sig_94 & B[7];
  assign sig_266 = sig_263 ^ sig_114;
  assign sig_267 = sig_264;
  assign sig_268 = sig_95 ^ sig_105;
  assign sig_269 = sig_95 & sig_105;
  assign sig_270 = sig_268 & sig_115;
  assign sig_271 = sig_268 ^ sig_115;
  assign sig_272 = sig_269 ^ sig_270;
  assign sig_273 = sig_96 ^ sig_106;
  assign O[4] = sig_96 & sig_106;
  assign sig_275 = sig_273 & sig_116;
  assign sig_276 = sig_273 ^ sig_116;
  assign sig_277 = O[4] | sig_275;
  assign sig_278 = sig_97 ^ sig_107;
  assign sig_279 = sig_97 & sig_107;
  assign sig_280 = sig_278 & sig_117;
  assign sig_281 = sig_278 ^ sig_117;
  assign sig_282 = sig_279 | sig_280;
  assign sig_283 = sig_98 ^ sig_108;
  assign sig_284 = sig_98 & sig_108;
  assign sig_285 = sig_283 & sig_118;
  assign sig_286 = sig_283 ^ sig_118;
  assign sig_287 = sig_284 | sig_285;
  assign sig_288 = sig_109 & sig_119;
  assign sig_289 = sig_109 ^ sig_119;
  assign sig_332 = sig_191 ^ sig_189;
  assign O[3] = sig_191;
  assign sig_334 = sig_332 & A[8];
  assign sig_336 = O[3] ^ sig_334;
  assign sig_337 = sig_54 | sig_190;
  assign sig_338 = sig_54 & sig_190;
  assign sig_339 = sig_337 & sig_232;
  assign sig_340 = sig_337 ^ sig_232;
  assign sig_341 = sig_338 | sig_339;
  assign sig_361 = sig_223;
  assign sig_362 = B[6] & A[2];
  assign sig_363 = sig_361 & sig_257;
  assign sig_365 = sig_362 | sig_363;
  assign sig_366 = sig_228 ^ sig_266;
  assign sig_367 = sig_228 & sig_266;
  assign sig_368 = B[8] & sig_262;
  assign sig_369 = sig_366 | sig_262;
  assign sig_370 = sig_367 | sig_368;
  assign sig_371 = sig_233 ^ sig_271;
  assign sig_372 = sig_233 & sig_271;
  assign sig_373 = sig_371 & sig_267;
  assign sig_374 = sig_371 ^ sig_267;
  assign sig_375 = sig_372 | sig_373;
  assign sig_376 = sig_238 ^ sig_276;
  assign sig_377 = sig_238 & sig_276;
  assign sig_378 = sig_376 & sig_272;
  assign sig_379 = sig_376 ^ sig_272;
  assign sig_380 = sig_377 | sig_378;
  assign sig_381 = sig_239 ^ sig_281;
  assign sig_382 = sig_239 & sig_281;
  assign sig_383 = sig_381 & sig_277;
  assign sig_384 = sig_381 ^ sig_277;
  assign sig_385 = sig_382 | sig_383;
  assign O[12] = sig_286 & sig_282;
  assign sig_387 = sig_286 ^ sig_282;
  assign sig_388 = sig_289 & sig_287;
  assign sig_389 = sig_289 ^ sig_287;
  assign sig_390 = sig_120 & sig_288;
  assign sig_391 = sig_120 ^ sig_288;
  assign sig_427 = A[3] & B[2];
  assign sig_430 = sig_427;
  assign sig_431 = sig_340 ^ sig_336;
  assign sig_432 = sig_340 & sig_336;
  assign sig_433 = sig_431 & sig_369;
  assign sig_434 = sig_431 ^ sig_369;
  assign sig_435 = sig_432 | sig_433;
  assign sig_436 = sig_237 ^ sig_341;
  assign sig_437 = sig_237 & sig_341;
  assign sig_438 = sig_436 & sig_374;
  assign sig_439 = sig_436 ^ sig_374;
  assign sig_440 = sig_437 | sig_438;
  assign sig_441 = sig_240 & sig_379;
  assign sig_442 = sig_240 ^ sig_379;
  assign sig_443 = sig_87 & sig_384;
  assign sig_444 = sig_87 ^ sig_384;
  assign sig_457 = sig_365 ^ sig_124;
  assign sig_458 = sig_365 & sig_124;
  assign sig_459 = sig_457 & sig_134;
  assign sig_460 = sig_457 ^ sig_134;
  assign sig_461 = sig_458 | sig_459;
  assign O[1] = sig_370 ^ sig_125;
  assign sig_463 = sig_370 & sig_125;
  assign sig_464 = O[1] & A[7];
  assign sig_465 = O[1] ^ sig_135;
  assign sig_466 = sig_463 | sig_464;
  assign sig_467 = sig_375 ^ sig_126;
  assign sig_468 = sig_375 & sig_126;
  assign sig_469 = sig_467 & sig_136;
  assign sig_470 = sig_467 ^ sig_136;
  assign sig_471 = sig_468 | sig_469;
  assign sig_472 = sig_380 ^ sig_127;
  assign sig_473 = sig_380 & sig_127;
  assign sig_474 = sig_472 & sig_137;
  assign sig_475 = sig_472 ^ sig_137;
  assign sig_476 = sig_473 | sig_474;
  assign sig_477 = sig_385 ^ sig_128;
  assign sig_478 = sig_385 & sig_128;
  assign sig_479 = sig_477 & sig_138;
  assign sig_480 = sig_477 ^ sig_138;
  assign sig_481 = sig_478 | sig_479;
  assign sig_482 = O[12] ^ sig_129;
  assign sig_483 = O[12] & sig_129;
  assign sig_484 = sig_482 & sig_139;
  assign sig_485 = sig_482 ^ sig_139;
  assign sig_486 = sig_483 | sig_484;
  assign sig_487 = sig_388 ^ sig_130;
  assign sig_488 = sig_388 & sig_130;
  assign sig_489 = sig_487 & sig_140;
  assign sig_490 = sig_487 ^ sig_140;
  assign sig_491 = sig_488 | sig_489;
  assign sig_492 = sig_390 ^ sig_131;
  assign sig_493 = sig_390 & sig_131;
  assign sig_494 = sig_492 & sig_141;
  assign sig_495 = sig_492 ^ sig_141;
  assign sig_496 = sig_493 | sig_494;
  assign sig_524 = A[3] & A[5];
  assign sig_527 = sig_524;
  assign sig_528 = sig_434 ^ sig_430;
  assign sig_529 = sig_434 & sig_430;
  assign sig_530 = sig_528 & sig_460;
  assign sig_531 = sig_528 ^ sig_460;
  assign sig_532 = sig_529 ^ sig_530;
  assign sig_533 = sig_439 ^ sig_435;
  assign sig_534 = sig_439 & sig_435;
  assign sig_535 = sig_533 & sig_465;
  assign sig_536 = sig_533 ^ sig_465;
  assign sig_537 = sig_534 | sig_535;
  assign sig_538 = sig_442 ^ sig_440;
  assign sig_539 = sig_442 & sig_440;
  assign sig_540 = sig_538 & sig_470;
  assign sig_541 = sig_538 ^ sig_470;
  assign sig_542 = sig_539 | sig_540;
  assign sig_543 = sig_444 ^ sig_441;
  assign sig_544 = sig_444 & sig_441;
  assign sig_545 = sig_543 & sig_475;
  assign sig_546 = sig_543 ^ sig_475;
  assign sig_547 = sig_544 ^ sig_545;
  assign sig_548 = sig_387 ^ sig_443;
  assign sig_549 = sig_387 & sig_443;
  assign sig_550 = sig_548 & sig_480;
  assign sig_551 = sig_548 ^ sig_480;
  assign sig_552 = sig_549 | sig_550;
  assign sig_553 = sig_389 & sig_485;
  assign sig_554 = sig_389 ^ sig_485;
  assign sig_555 = sig_391 & sig_490;
  assign sig_556 = sig_391 ^ sig_490;
  assign sig_570 = B[4] & A[1];
  assign sig_578 = sig_531 & sig_527;
  assign O[5] = sig_578;
  assign sig_582 = sig_536 ^ sig_532;
  assign sig_583 = sig_536 & sig_532;
  assign sig_584 = sig_582 & sig_461;
  assign sig_585 = sig_582 ^ sig_461;
  assign sig_586 = sig_583 | sig_584;
  assign sig_587 = sig_541 ^ sig_537;
  assign sig_588 = sig_541 & sig_537;
  assign sig_589 = sig_587 & sig_466;
  assign sig_590 = sig_587 ^ sig_466;
  assign sig_591 = sig_588 | sig_589;
  assign O[6] = sig_546 ^ sig_542;
  assign sig_593 = sig_546 & sig_542;
  assign sig_594 = O[6] & sig_471;
  assign sig_595 = O[6] ^ sig_471;
  assign sig_596 = sig_593 | sig_594;
  assign sig_597 = sig_551 ^ sig_547;
  assign sig_598 = sig_551 & sig_547;
  assign sig_599 = sig_597 & sig_476;
  assign sig_600 = sig_597 ^ sig_476;
  assign sig_601 = sig_598 | sig_599;
  assign sig_602 = sig_554 ^ sig_552;
  assign sig_603 = sig_554 & sig_552;
  assign sig_604 = sig_602 & sig_481;
  assign sig_605 = sig_602 ^ sig_481;
  assign sig_606 = sig_603 | sig_604;
  assign sig_607 = sig_556 ^ sig_553;
  assign sig_608 = sig_556 & sig_553;
  assign sig_609 = sig_607 & sig_486;
  assign sig_610 = sig_607 ^ sig_486;
  assign sig_611 = sig_608 | sig_609;
  assign sig_612 = sig_495 ^ sig_555;
  assign sig_613 = sig_495 & sig_555;
  assign sig_614 = sig_612 & sig_491;
  assign sig_615 = sig_612 ^ sig_491;
  assign sig_616 = sig_613 | sig_614;
  assign sig_617 = sig_142 & sig_496;
  assign sig_618 = sig_142 ^ sig_496;
  assign sig_636 = sig_570;
  assign O[10] = sig_636;
  assign sig_647 = A[1] & B[10];
  assign sig_650 = sig_647;
  assign sig_651 = sig_585 ^ O[5];
  assign sig_652 = sig_585 & O[5];
  assign sig_653 = sig_651 & sig_650;
  assign O[13] = sig_651 ^ sig_650;
  assign sig_655 = sig_652 | sig_653;
  assign sig_656 = sig_590 ^ sig_586;
  assign sig_657 = sig_590 & sig_586;
  assign sig_658 = sig_656 & sig_655;
  assign O[14] = sig_656 ^ sig_655;
  assign sig_660 = sig_657 | sig_658;
  assign sig_661 = sig_595 ^ sig_591;
  assign sig_662 = sig_595 & sig_591;
  assign sig_663 = sig_661 & sig_660;
  assign O[15] = sig_661 ^ sig_660;
  assign sig_665 = sig_662 | sig_663;
  assign sig_666 = sig_600 ^ sig_596;
  assign sig_667 = sig_600 & sig_596;
  assign sig_668 = sig_666 & sig_665;
  assign O[16] = sig_666 ^ sig_665;
  assign sig_670 = sig_667 | sig_668;
  assign sig_671 = sig_605 ^ sig_601;
  assign sig_672 = sig_605 & sig_601;
  assign sig_673 = sig_671 & sig_670;
  assign O[17] = sig_671 ^ sig_670;
  assign sig_675 = sig_672 | sig_673;
  assign sig_676 = sig_610 ^ sig_606;
  assign sig_677 = sig_610 & sig_606;
  assign sig_678 = sig_676 & sig_675;
  assign O[18] = sig_676 ^ sig_675;
  assign O[11] = sig_677 | sig_678;
  assign sig_681 = sig_615 ^ sig_611;
  assign O[7] = sig_615 & sig_611;
  assign sig_683 = sig_681 & O[11];
  assign O[19] = sig_681 ^ O[11];
  assign sig_685 = O[7] | sig_683;
  assign sig_686 = sig_618 ^ sig_616;
  assign sig_687 = sig_618 & sig_616;
  assign sig_688 = sig_686 & sig_685;
  assign O[20] = sig_686 ^ sig_685;
  assign sig_690 = sig_687 | sig_688;
  assign O[21] = sig_617 ^ sig_690;
endmodule


// internal reference: cgp-nn-iccad16.11.mul11u_0DF

