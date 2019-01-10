/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint64_t mul11u_0DF(uint64_t a, uint64_t b) {
  int wa[11];
  int wb[11];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  wa[8] = (a >> 8) & 0x01;
  wb[8] = (b >> 8) & 0x01;
  wa[9] = (a >> 9) & 0x01;
  wb[9] = (b >> 9) & 0x01;
  wa[10] = (a >> 10) & 0x01;
  wb[10] = (b >> 10) & 0x01;
  int sig_42 = wa[9] & wb[1];
  int sig_43 = wa[10] & wb[1];
  int sig_53 = wa[4] & wb[6];
  int sig_54 = wa[10] & wb[2];
  int sig_59 = wa[4] & wb[10];
  int sig_64 = wa[9] & wb[3];
  int sig_65 = wa[10] & wb[3];
  int sig_74 = wa[8] & wb[10];
  int sig_75 = wa[9] & wb[4];
  int sig_76 = wa[10] & wb[4];
  int sig_83 = wa[6] & wb[5];
  int sig_84 = wa[9] & wb[5];
  int sig_85 = wa[8] & wb[5];
  int sig_86 = wa[9] & wb[5];
  int sig_87 = wa[10] & wb[5];
  int sig_94 = wa[6] & wb[6];
  int sig_95 = wa[3] & wb[10];
  int sig_96 = wa[8] & wb[6];
  int sig_97 = wa[9] & wb[6];
  int sig_98 = wa[10] & wb[6];
  int sig_103 = wa[4] & wb[7];
  int sig_104 = wa[5] & wb[7];
  int sig_105 = wa[6] & wb[7];
  int sig_106 = wa[7] & wb[7];
  int sig_107 = wa[8] & wb[7];
  int sig_108 = wa[9] & wb[7];
  int sig_109 = wa[10] & wb[7];
  int sig_113 = wa[3] & wb[7];
  int sig_114 = wa[4] & wb[8];
  int sig_115 = wa[5] & wb[8];
  int sig_116 = wa[6] & wb[8];
  int sig_117 = wa[7] & wb[8];
  int sig_118 = wa[8] & wb[8];
  int sig_119 = wa[9] & wb[8];
  int sig_120 = wa[10] & wb[8];
  int sig_124 = wa[3] & wb[9];
  int sig_125 = wa[4] & wb[9];
  int sig_126 = wa[5] & wb[9];
  int sig_127 = wa[6] & wb[9];
  int sig_128 = wa[7] & wb[9];
  int sig_129 = wa[8] & wb[9];
  int sig_130 = wa[9] & wb[9];
  int sig_131 = wa[10] & wb[9];
  int sig_133 = wa[1] & wb[5];
  int sig_134 = wa[2] & wb[10];
  int sig_135 = wa[3] & wb[4];
  int sig_136 = wa[4] & wb[10];
  int sig_137 = wa[5] & wb[10];
  int sig_138 = wa[6] & wb[10];
  int sig_139 = wa[7] & wb[10];
  int sig_140 = wa[8] & wb[10];
  int sig_141 = wa[9] & wb[10];
  int sig_142 = wa[10] & wb[10];
  int sig_186 = wa[4] & sig_42;
  int sig_189 = sig_186;
  int sig_190 = sig_43 & sig_53;
  int sig_191 = sig_43 & sig_53;
  int sig_219 = wb[6];
  int sig_220 = wa[4] & wb[4];
  int sig_221 = sig_219 & wb[5];
  int sig_223 = sig_220 | sig_221;
  int sig_225 = wa[5] & wb[9];
  int sig_226 = wa[8] & sig_83;
  int sig_228 = sig_225 | sig_226;
  int sig_229 = sig_64 | sig_74;
  int sig_230 = sig_64 & wa[4];
  int sig_231 = sig_229 & sig_84;
  int sig_232 = sig_229 ^ sig_84;
  int sig_233 = sig_230 | sig_231;
  int sig_234 = sig_65 ^ sig_75;
  int sig_235 = sig_65 & sig_75;
  int sig_236 = sig_234 & sig_85;
  int sig_237 = sig_234 ^ sig_85;
  int sig_238 = sig_235 | sig_236;
  int sig_239 = sig_76 & sig_86;
  int sig_240 = sig_76 ^ sig_86;
  int sig_255 = !wb[4];
  int sig_257 = wa[8] | sig_255;
  int sig_259 = wb[10] & sig_103;
  int sig_260 = wa[1] & sig_113;
  int sig_262 = sig_259;
  int sig_263 = sig_94 ^ sig_104;
  int sig_264 = sig_94 & wb[7];
  int sig_266 = sig_263 ^ sig_114;
  int sig_267 = sig_264;
  int sig_268 = sig_95 ^ sig_105;
  int sig_269 = sig_95 & sig_105;
  int sig_270 = sig_268 & sig_115;
  int sig_271 = sig_268 ^ sig_115;
  int sig_272 = sig_269 ^ sig_270;
  int sig_273 = sig_96 ^ sig_106;
  int sig_274 = sig_96 & sig_106;
  int sig_275 = sig_273 & sig_116;
  int sig_276 = sig_273 ^ sig_116;
  int sig_277 = sig_274 | sig_275;
  int sig_278 = sig_97 ^ sig_107;
  int sig_279 = sig_97 & sig_107;
  int sig_280 = sig_278 & sig_117;
  int sig_281 = sig_278 ^ sig_117;
  int sig_282 = sig_279 | sig_280;
  int sig_283 = sig_98 ^ sig_108;
  int sig_284 = sig_98 & sig_108;
  int sig_285 = sig_283 & sig_118;
  int sig_286 = sig_283 ^ sig_118;
  int sig_287 = sig_284 | sig_285;
  int sig_288 = sig_109 & sig_119;
  int sig_289 = sig_109 ^ sig_119;
  int sig_332 = sig_191 ^ sig_189;
  int sig_333 = sig_191;
  int sig_334 = sig_332 & wa[8];
  int sig_336 = sig_333 ^ sig_334;
  int sig_337 = sig_54 | sig_190;
  int sig_338 = sig_54 & sig_190;
  int sig_339 = sig_337 & sig_232;
  int sig_340 = sig_337 ^ sig_232;
  int sig_341 = sig_338 | sig_339;
  int sig_361 = sig_223;
  int sig_362 = wb[6] & wa[2];
  int sig_363 = sig_361 & sig_257;
  int sig_365 = sig_362 | sig_363;
  int sig_366 = sig_228 ^ sig_266;
  int sig_367 = sig_228 & sig_266;
  int sig_368 = wb[8] & sig_262;
  int sig_369 = sig_366 | sig_262;
  int sig_370 = sig_367 | sig_368;
  int sig_371 = sig_233 ^ sig_271;
  int sig_372 = sig_233 & sig_271;
  int sig_373 = sig_371 & sig_267;
  int sig_374 = sig_371 ^ sig_267;
  int sig_375 = sig_372 | sig_373;
  int sig_376 = sig_238 ^ sig_276;
  int sig_377 = sig_238 & sig_276;
  int sig_378 = sig_376 & sig_272;
  int sig_379 = sig_376 ^ sig_272;
  int sig_380 = sig_377 | sig_378;
  int sig_381 = sig_239 ^ sig_281;
  int sig_382 = sig_239 & sig_281;
  int sig_383 = sig_381 & sig_277;
  int sig_384 = sig_381 ^ sig_277;
  int sig_385 = sig_382 | sig_383;
  int sig_386 = sig_286 & sig_282;
  int sig_387 = sig_286 ^ sig_282;
  int sig_388 = sig_289 & sig_287;
  int sig_389 = sig_289 ^ sig_287;
  int sig_390 = sig_120 & sig_288;
  int sig_391 = sig_120 ^ sig_288;
  int sig_427 = wa[3] & wb[2];
  int sig_430 = sig_427;
  int sig_431 = sig_340 ^ sig_336;
  int sig_432 = sig_340 & sig_336;
  int sig_433 = sig_431 & sig_369;
  int sig_434 = sig_431 ^ sig_369;
  int sig_435 = sig_432 | sig_433;
  int sig_436 = sig_237 ^ sig_341;
  int sig_437 = sig_237 & sig_341;
  int sig_438 = sig_436 & sig_374;
  int sig_439 = sig_436 ^ sig_374;
  int sig_440 = sig_437 | sig_438;
  int sig_441 = sig_240 & sig_379;
  int sig_442 = sig_240 ^ sig_379;
  int sig_443 = sig_87 & sig_384;
  int sig_444 = sig_87 ^ sig_384;
  int sig_457 = sig_365 ^ sig_124;
  int sig_458 = sig_365 & sig_124;
  int sig_459 = sig_457 & sig_134;
  int sig_460 = sig_457 ^ sig_134;
  int sig_461 = sig_458 | sig_459;
  int sig_462 = sig_370 ^ sig_125;
  int sig_463 = sig_370 & sig_125;
  int sig_464 = sig_462 & wa[7];
  int sig_465 = sig_462 ^ sig_135;
  int sig_466 = sig_463 | sig_464;
  int sig_467 = sig_375 ^ sig_126;
  int sig_468 = sig_375 & sig_126;
  int sig_469 = sig_467 & sig_136;
  int sig_470 = sig_467 ^ sig_136;
  int sig_471 = sig_468 | sig_469;
  int sig_472 = sig_380 ^ sig_127;
  int sig_473 = sig_380 & sig_127;
  int sig_474 = sig_472 & sig_137;
  int sig_475 = sig_472 ^ sig_137;
  int sig_476 = sig_473 | sig_474;
  int sig_477 = sig_385 ^ sig_128;
  int sig_478 = sig_385 & sig_128;
  int sig_479 = sig_477 & sig_138;
  int sig_480 = sig_477 ^ sig_138;
  int sig_481 = sig_478 | sig_479;
  int sig_482 = sig_386 ^ sig_129;
  int sig_483 = sig_386 & sig_129;
  int sig_484 = sig_482 & sig_139;
  int sig_485 = sig_482 ^ sig_139;
  int sig_486 = sig_483 | sig_484;
  int sig_487 = sig_388 ^ sig_130;
  int sig_488 = sig_388 & sig_130;
  int sig_489 = sig_487 & sig_140;
  int sig_490 = sig_487 ^ sig_140;
  int sig_491 = sig_488 | sig_489;
  int sig_492 = sig_390 ^ sig_131;
  int sig_493 = sig_390 & sig_131;
  int sig_494 = sig_492 & sig_141;
  int sig_495 = sig_492 ^ sig_141;
  int sig_496 = sig_493 | sig_494;
  int sig_524 = wa[3] & wa[5];
  int sig_527 = sig_524;
  int sig_528 = sig_434 ^ sig_430;
  int sig_529 = sig_434 & sig_430;
  int sig_530 = sig_528 & sig_460;
  int sig_531 = sig_528 ^ sig_460;
  int sig_532 = sig_529 ^ sig_530;
  int sig_533 = sig_439 ^ sig_435;
  int sig_534 = sig_439 & sig_435;
  int sig_535 = sig_533 & sig_465;
  int sig_536 = sig_533 ^ sig_465;
  int sig_537 = sig_534 | sig_535;
  int sig_538 = sig_442 ^ sig_440;
  int sig_539 = sig_442 & sig_440;
  int sig_540 = sig_538 & sig_470;
  int sig_541 = sig_538 ^ sig_470;
  int sig_542 = sig_539 | sig_540;
  int sig_543 = sig_444 ^ sig_441;
  int sig_544 = sig_444 & sig_441;
  int sig_545 = sig_543 & sig_475;
  int sig_546 = sig_543 ^ sig_475;
  int sig_547 = sig_544 ^ sig_545;
  int sig_548 = sig_387 ^ sig_443;
  int sig_549 = sig_387 & sig_443;
  int sig_550 = sig_548 & sig_480;
  int sig_551 = sig_548 ^ sig_480;
  int sig_552 = sig_549 | sig_550;
  int sig_553 = sig_389 & sig_485;
  int sig_554 = sig_389 ^ sig_485;
  int sig_555 = sig_391 & sig_490;
  int sig_556 = sig_391 ^ sig_490;
  int sig_570 = wb[4] & wa[1];
  int sig_578 = sig_531 & sig_527;
  int sig_581 = sig_578;
  int sig_582 = sig_536 ^ sig_532;
  int sig_583 = sig_536 & sig_532;
  int sig_584 = sig_582 & sig_461;
  int sig_585 = sig_582 ^ sig_461;
  int sig_586 = sig_583 | sig_584;
  int sig_587 = sig_541 ^ sig_537;
  int sig_588 = sig_541 & sig_537;
  int sig_589 = sig_587 & sig_466;
  int sig_590 = sig_587 ^ sig_466;
  int sig_591 = sig_588 | sig_589;
  int sig_592 = sig_546 ^ sig_542;
  int sig_593 = sig_546 & sig_542;
  int sig_594 = sig_592 & sig_471;
  int sig_595 = sig_592 ^ sig_471;
  int sig_596 = sig_593 | sig_594;
  int sig_597 = sig_551 ^ sig_547;
  int sig_598 = sig_551 & sig_547;
  int sig_599 = sig_597 & sig_476;
  int sig_600 = sig_597 ^ sig_476;
  int sig_601 = sig_598 | sig_599;
  int sig_602 = sig_554 ^ sig_552;
  int sig_603 = sig_554 & sig_552;
  int sig_604 = sig_602 & sig_481;
  int sig_605 = sig_602 ^ sig_481;
  int sig_606 = sig_603 | sig_604;
  int sig_607 = sig_556 ^ sig_553;
  int sig_608 = sig_556 & sig_553;
  int sig_609 = sig_607 & sig_486;
  int sig_610 = sig_607 ^ sig_486;
  int sig_611 = sig_608 | sig_609;
  int sig_612 = sig_495 ^ sig_555;
  int sig_613 = sig_495 & sig_555;
  int sig_614 = sig_612 & sig_491;
  int sig_615 = sig_612 ^ sig_491;
  int sig_616 = sig_613 | sig_614;
  int sig_617 = sig_142 & sig_496;
  int sig_618 = sig_142 ^ sig_496;
  int sig_636 = sig_570;
  int sig_639 = sig_636;
  int sig_647 = wa[1] & wb[10];
  int sig_650 = sig_647;
  int sig_651 = sig_585 ^ sig_581;
  int sig_652 = sig_585 & sig_581;
  int sig_653 = sig_651 & sig_650;
  int sig_654 = sig_651 ^ sig_650;
  int sig_655 = sig_652 | sig_653;
  int sig_656 = sig_590 ^ sig_586;
  int sig_657 = sig_590 & sig_586;
  int sig_658 = sig_656 & sig_655;
  int sig_659 = sig_656 ^ sig_655;
  int sig_660 = sig_657 | sig_658;
  int sig_661 = sig_595 ^ sig_591;
  int sig_662 = sig_595 & sig_591;
  int sig_663 = sig_661 & sig_660;
  int sig_664 = sig_661 ^ sig_660;
  int sig_665 = sig_662 | sig_663;
  int sig_666 = sig_600 ^ sig_596;
  int sig_667 = sig_600 & sig_596;
  int sig_668 = sig_666 & sig_665;
  int sig_669 = sig_666 ^ sig_665;
  int sig_670 = sig_667 | sig_668;
  int sig_671 = sig_605 ^ sig_601;
  int sig_672 = sig_605 & sig_601;
  int sig_673 = sig_671 & sig_670;
  int sig_674 = sig_671 ^ sig_670;
  int sig_675 = sig_672 | sig_673;
  int sig_676 = sig_610 ^ sig_606;
  int sig_677 = sig_610 & sig_606;
  int sig_678 = sig_676 & sig_675;
  int sig_679 = sig_676 ^ sig_675;
  int sig_680 = sig_677 | sig_678;
  int sig_681 = sig_615 ^ sig_611;
  int sig_682 = sig_615 & sig_611;
  int sig_683 = sig_681 & sig_680;
  int sig_684 = sig_681 ^ sig_680;
  int sig_685 = sig_682 | sig_683;
  int sig_686 = sig_618 ^ sig_616;
  int sig_687 = sig_618 & sig_616;
  int sig_688 = sig_686 & sig_685;
  int sig_689 = sig_686 ^ sig_685;
  int sig_690 = sig_687 | sig_688;
  int sig_692 = sig_617 ^ sig_690;
  y |=  (sig_260 & 0x01) << 0; // default output
  y |=  (sig_462 & 0x01) << 1; // default output
  y |=  (sig_133 & 0x01) << 2; // default output
  y |=  (sig_333 & 0x01) << 3; // default output
  y |=  (sig_274 & 0x01) << 4; // default output
  y |=  (sig_581 & 0x01) << 5; // default output
  y |=  (sig_592 & 0x01) << 6; // default output
  y |=  (sig_682 & 0x01) << 7; // default output
  y |=  (sig_76 & 0x01) << 8; // default output
  y |=  (sig_59 & 0x01) << 9; // default output
  y |=  (sig_639 & 0x01) << 10; // default output
  y |=  (sig_680 & 0x01) << 11; // default output
  y |=  (sig_386 & 0x01) << 12; // default output
  y |=  (sig_654 & 0x01) << 13; // default output
  y |=  (sig_659 & 0x01) << 14; // default output
  y |=  (sig_664 & 0x01) << 15; // default output
  y |=  (sig_669 & 0x01) << 16; // default output
  y |=  (sig_674 & 0x01) << 17; // default output
  y |=  (sig_679 & 0x01) << 18; // default output
  y |=  (sig_684 & 0x01) << 19; // default output
  y |=  (sig_689 & 0x01) << 20; // default output
  y |=  (sig_692 & 0x01) << 21; // default output
   return y;
}

// internal reference: cgp-nn-iccad16.11.cgpnn_mul11_e01_0_00156_wtmrca

