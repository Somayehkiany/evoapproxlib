/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint64_t mul11u_057(uint64_t a, uint64_t b) {
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
  int sig_30 = wa[4] & wb[0];
  int sig_31 = ~(wa[9] ^ wb[1]);
  int sig_32 = wa[10] & wb[0];
  int sig_41 = wa[7] & wb[1];
  int sig_42 = wa[9] & wb[1];
  int sig_43 = wa[10] & wb[1];
  int sig_51 = wa[7] & wb[2];
  int sig_52 = wa[8] & wb[2];
  int sig_53 = wa[9] & wb[2];
  int sig_54 = wa[10] & wb[2];
  int sig_62 = wa[7] & wb[9];
  int sig_63 = wa[8] & wb[3];
  int sig_64 = wa[9] & wb[3];
  int sig_65 = wa[10] & wb[3];
  int sig_71 = wa[7] & wb[4];
  int sig_72 = wa[6] & wb[4];
  int sig_73 = wa[9] & wb[2];
  int sig_74 = wa[8] & wb[4];
  int sig_75 = wa[9] & wb[4];
  int sig_76 = wa[10] & wb[4];
  int sig_81 = wa[6] & wb[5];
  int sig_82 = wa[5] & wb[5];
  int sig_83 = wa[6] & wb[5];
  int sig_84 = wa[7] & wb[5];
  int sig_85 = wa[8] & wb[5];
  int sig_86 = wa[9] & wb[5];
  int sig_87 = wa[10] & wb[5];
  int sig_91 = wa[3] & wb[6];
  int sig_92 = wa[4] & wb[6];
  int sig_93 = wa[5] & wb[6];
  int sig_94 = wa[6] & wb[6];
  int sig_95 = wa[7] & wb[6];
  int sig_96 = wa[8] & wb[6];
  int sig_97 = wa[9] & wb[6];
  int sig_98 = wa[10] & wb[6];
  int sig_102 = wa[3] & wb[7];
  int sig_103 = wa[4] & wb[7];
  int sig_104 = wa[5] & wb[7];
  int sig_105 = wa[6] & wb[7];
  int sig_106 = wa[7] & wb[7];
  int sig_107 = wa[8] & wb[7];
  int sig_108 = wa[9] & wb[7];
  int sig_109 = wa[10] & wb[7];
  int sig_111 = wa[0] & wb[8];
  int sig_112 = wa[2] & wb[8];
  int sig_113 = wa[3] & wb[8];
  int sig_114 = wa[4] & wb[8];
  int sig_115 = wa[5] & wb[8];
  int sig_116 = wa[6] & wb[8];
  int sig_117 = wa[7] & wb[8];
  int sig_118 = wa[8] & wb[8];
  int sig_119 = wa[9] & wb[8];
  int sig_120 = wa[10] & wb[8];
  int sig_121 = wa[0] & wb[4];
  int sig_122 = wa[1] & wb[9];
  int sig_123 = wa[2] & wb[9];
  int sig_124 = wa[3] & wb[9];
  int sig_125 = wa[4] & wb[9];
  int sig_126 = wa[5] & wb[9];
  int sig_127 = wa[6] & wb[9];
  int sig_128 = wa[7] & wb[9];
  int sig_129 = wa[8] & wb[9];
  int sig_130 = wa[9] & wb[9];
  int sig_131 = wa[10] & wb[9];
  int sig_132 = wa[0] & wb[10];
  int sig_133 = wa[1] & wb[10];
  int sig_134 = wa[2] & wb[10];
  int sig_135 = wa[3] & wb[10];
  int sig_136 = wa[4] & wb[10];
  int sig_137 = wa[5] & wb[10];
  int sig_138 = wa[6] & wb[10];
  int sig_139 = wa[7] & wb[10];
  int sig_140 = wa[8] & wb[10];
  int sig_141 = wa[9] & wb[10];
  int sig_142 = wa[10] & wb[10];
  int sig_176 = sig_30 & wb[7];
  int sig_179 = sig_176 & wa[4];
  int sig_180 = sig_31 ^ sig_41;
  int sig_181 = wa[5] & sig_41;
  int sig_182 = wa[4] & sig_51;
  int sig_183 = sig_180 & sig_51;
  int sig_184 = sig_181 | sig_182;
  int sig_185 = sig_32 ^ sig_42;
  int sig_186 = sig_32 & sig_42;
  int sig_187 = sig_185 & sig_52;
  int sig_188 = sig_185 ^ sig_52;
  int sig_189 = sig_186 & sig_187;
  int sig_190 = sig_43 & sig_53;
  int sig_191 = sig_43;
  int sig_214 = wa[7] | sig_71;
  int sig_215 = wb[3] & sig_71;
  int sig_217 = sig_214 ^ sig_81;
  int sig_218 = sig_215;
  int sig_219 = sig_62 ^ sig_72;
  int sig_220 = sig_62 & sig_72;
  int sig_222 = sig_219 ^ sig_82;
  int sig_223 = sig_220;
  int sig_224 = sig_63 | sig_73;
  int sig_225 = sig_63 & wb[8];
  int sig_226 = sig_224 & sig_83;
  int sig_227 = sig_224 | sig_83;
  int sig_228 = sig_225 | sig_226;
  int sig_229 = sig_64;
  int sig_230 = sig_64 & sig_74;
  int sig_231 = sig_229 & sig_84;
  int sig_233 = sig_230 | sig_231;
  int sig_234 = sig_65 ^ sig_75;
  int sig_235 = sig_65 & sig_75;
  int sig_236 = sig_234 & sig_85;
  int sig_237 = sig_234 ^ sig_85;
  int sig_238 = sig_235 | sig_236;
  int sig_239 = sig_76 & sig_86;
  int sig_240 = sig_76 ^ sig_86;
  int sig_248 = sig_91 | wb[0];
  int sig_249 = wb[5] & wa[4];
  int sig_250 = wa[9] & sig_111;
  int sig_251 = sig_248 ^ sig_111;
  int sig_252 = sig_249 | sig_250;
  int sig_253 = sig_92 ^ sig_102;
  int sig_254 = sig_92 & sig_102;
  int sig_255 = sig_253 & sig_112;
  int sig_256 = sig_253 ^ sig_112;
  int sig_257 = sig_254 ^ sig_255;
  int sig_258 = sig_93 ^ sig_103;
  int sig_259 = sig_93 & sig_103;
  int sig_260 = sig_258 & sig_113;
  int sig_261 = sig_258 ^ sig_113;
  int sig_262 = sig_259 | sig_260;
  int sig_263 = sig_94 ^ sig_104;
  int sig_264 = sig_94 & sig_104;
  int sig_265 = sig_263 & sig_114;
  int sig_266 = sig_263 ^ sig_114;
  int sig_267 = sig_264 | sig_265;
  int sig_268 = sig_95 ^ sig_105;
  int sig_269 = sig_95 & sig_105;
  int sig_270 = sig_268 & sig_115;
  int sig_271 = sig_268 ^ sig_115;
  int sig_272 = sig_269 | sig_270;
  int sig_273 = sig_96 ^ sig_106;
  int sig_274 = sig_96 & sig_106;
  int sig_275 = sig_273 & sig_116;
  int sig_276 = sig_273 ^ sig_116;
  int sig_277 = sig_274 | sig_275;
  int sig_278 = sig_97 ^ sig_107;
  int sig_279 = sig_97 & sig_107;
  int sig_280 = sig_278 & sig_117;
  int sig_281 = sig_278 ^ sig_117;
  int sig_282 = sig_279 ^ sig_280;
  int sig_283 = sig_98 ^ sig_108;
  int sig_284 = sig_98 & sig_108;
  int sig_285 = sig_283 & sig_118;
  int sig_286 = sig_283 ^ sig_118;
  int sig_287 = sig_284 | sig_285;
  int sig_288 = sig_109 & sig_119;
  int sig_289 = sig_109 ^ sig_119;
  int sig_316 = wa[1] & wb[8];
  int sig_322 = sig_183 ^ sig_179;
  int sig_324 = sig_322 & sig_217;
  int sig_325 = sig_322 | sig_217;
  int sig_326 = wa[9] & sig_324;
  int sig_327 = sig_188 ^ sig_184;
  int sig_328 = sig_188 & sig_184;
  int sig_329 = sig_327 & sig_222;
  int sig_330 = sig_327 ^ sig_222;
  int sig_331 = sig_328 | sig_329;
  int sig_332 = sig_191 | sig_189;
  int sig_333 = sig_191 & wb[3];
  int sig_334 = sig_332 & sig_227;
  int sig_335 = sig_332 ^ sig_227;
  int sig_336 = sig_333 | sig_334;
  int sig_337 = sig_54 ^ sig_190;
  int sig_338 = sig_54 & wa[8];
  int sig_339 = sig_337 & wa[6];
  int sig_340 = sig_337;
  int sig_341 = sig_338 | sig_339;
  int sig_352 = wa[6] & sig_251;
  int sig_354 = wa[4] & wa[1];
  int sig_355 = sig_352;
  int sig_356 = sig_218 ^ sig_256;
  int sig_357 = sig_218 & wb[5];
  int sig_358 = sig_356 & sig_252;
  int sig_359 = sig_356 ^ sig_252;
  int sig_360 = sig_357 ^ sig_358;
  int sig_361 = sig_223 ^ sig_261;
  int sig_362 = sig_223 & sig_261;
  int sig_363 = sig_361 & sig_257;
  int sig_364 = sig_361 ^ sig_257;
  int sig_365 = sig_362 | sig_363;
  int sig_366 = sig_228 ^ sig_266;
  int sig_367 = sig_228 & sig_266;
  int sig_368 = sig_366 & sig_262;
  int sig_369 = sig_366 ^ sig_262;
  int sig_370 = sig_367 ^ sig_368;
  int sig_371 = sig_233 ^ sig_271;
  int sig_372 = sig_233 & sig_271;
  int sig_373 = sig_371 & sig_267;
  int sig_374 = sig_371 ^ sig_267;
  int sig_375 = sig_372 | sig_373;
  int sig_376 = sig_238 ^ sig_276;
  int sig_377 = sig_238 & sig_276;
  int sig_378 = sig_376 & sig_272;
  int sig_379 = sig_376 ^ sig_272;
  int sig_380 = sig_377 ^ sig_378;
  int sig_381 = sig_239 ^ sig_281;
  int sig_382 = sig_239 & sig_281;
  int sig_383 = sig_381 & sig_277;
  int sig_384 = sig_381 ^ sig_277;
  int sig_385 = sig_382 ^ sig_383;
  int sig_386 = sig_286 & sig_282;
  int sig_387 = sig_286 ^ sig_282;
  int sig_388 = sig_289 & sig_287;
  int sig_389 = sig_289 ^ sig_287;
  int sig_390 = sig_120 & sig_288;
  int sig_391 = sig_120 ^ sig_288;
  int sig_412 = wa[6] & sig_316;
  int sig_415 = sig_412;
  int sig_416 = wb[4] ^ wb[4];
  int sig_417 = sig_325 & wb[2];
  int sig_418 = wb[1] & sig_354;
  int sig_419 = sig_416;
  int sig_420 = sig_417 | sig_418;
  int sig_421 = sig_330 ^ sig_326;
  int sig_422 = sig_330 & sig_326;
  int sig_423 = sig_421 & sig_359;
  int sig_424 = sig_421 ^ sig_359;
  int sig_425 = sig_422 | sig_423;
  int sig_426 = sig_335 ^ sig_331;
  int sig_427 = sig_335 & sig_331;
  int sig_428 = sig_426 & sig_364;
  int sig_429 = sig_426 ^ sig_364;
  int sig_430 = sig_427 | sig_428;
  int sig_431 = sig_340 ^ sig_336;
  int sig_432 = wb[6] & sig_336;
  int sig_433 = sig_431 & sig_369;
  int sig_434 = sig_431 ^ sig_369;
  int sig_435 = sig_432 | sig_433;
  int sig_436 = sig_237 ^ sig_341;
  int sig_437 = sig_237 & sig_341;
  int sig_438 = sig_436 & sig_374;
  int sig_439 = sig_436 ^ sig_374;
  int sig_440 = sig_437 ^ sig_438;
  int sig_441 = sig_240 & sig_379;
  int sig_442 = sig_240 ^ sig_379;
  int sig_443 = sig_87 & sig_384;
  int sig_444 = sig_87 ^ sig_384;
  int sig_445 = wa[9] ^ sig_121;
  int sig_446 = wb[3] & sig_121;
  int sig_447 = sig_355 ^ sig_122;
  int sig_448 = sig_355 & sig_122;
  int sig_449 = wa[3] & sig_132;
  int sig_450 = sig_447 ^ sig_132;
  int sig_451 = sig_448 | sig_449;
  int sig_452 = sig_360 ^ sig_123;
  int sig_453 = sig_360 & sig_123;
  int sig_454 = sig_452 & sig_133;
  int sig_455 = sig_452 ^ sig_133;
  int sig_456 = sig_453 | sig_454;
  int sig_457 = sig_365 ^ sig_124;
  int sig_458 = sig_365 & sig_124;
  int sig_459 = sig_457 & sig_134;
  int sig_460 = sig_457 ^ sig_134;
  int sig_461 = sig_458 ^ sig_459;
  int sig_462 = sig_370 ^ sig_125;
  int sig_463 = sig_370 & sig_125;
  int sig_464 = sig_462 & sig_135;
  int sig_465 = sig_462 ^ sig_135;
  int sig_466 = sig_463 ^ sig_464;
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
  int sig_513 = sig_419 ^ sig_415;
  int sig_514 = wa[5] & wb[5];
  int sig_515 = sig_513 & sig_445;
  int sig_517 = sig_514 | sig_515;
  int sig_518 = sig_424 ^ sig_420;
  int sig_519 = sig_424 & sig_420;
  int sig_520 = sig_518 & sig_450;
  int sig_521 = sig_518 ^ sig_450;
  int sig_522 = sig_519 | sig_520;
  int sig_523 = sig_429 ^ sig_425;
  int sig_524 = sig_429 & sig_425;
  int sig_525 = sig_523 & sig_455;
  int sig_526 = sig_523 ^ sig_455;
  int sig_527 = sig_524 | sig_525;
  int sig_528 = sig_434 ^ sig_430;
  int sig_529 = sig_434 & sig_430;
  int sig_530 = sig_528 & sig_460;
  int sig_531 = sig_528;
  int sig_532 = sig_529 | sig_530;
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
  int sig_547 = sig_544 | sig_545;
  int sig_548 = sig_387 ^ sig_443;
  int sig_549 = sig_387 & sig_443;
  int sig_550 = sig_548 & sig_480;
  int sig_551 = sig_548 ^ sig_480;
  int sig_552 = sig_549 | sig_550;
  int sig_553 = sig_389 & sig_485;
  int sig_554 = sig_389 ^ sig_485;
  int sig_555 = sig_391 & sig_490;
  int sig_556 = sig_391 ^ sig_490;
  int sig_564 = wb[7] & wa[4];
  int sig_566 = wa[7] & wb[9];
  int sig_567 = sig_521 ^ sig_517;
  int sig_568 = sig_521 & sig_517;
  int sig_569 = sig_567 & sig_446;
  int sig_570 = sig_567 ^ sig_446;
  int sig_571 = sig_568 | sig_569;
  int sig_572 = sig_526 ^ sig_522;
  int sig_573 = sig_526 & sig_522;
  int sig_574 = sig_572 & sig_451;
  int sig_575 = sig_572 ^ sig_451;
  int sig_576 = sig_573 | sig_574;
  int sig_577 = sig_531 ^ sig_527;
  int sig_578 = sig_531 & sig_527;
  int sig_579 = sig_577 & sig_456;
  int sig_580 = sig_577 ^ sig_456;
  int sig_581 = sig_578 | sig_579;
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
  int sig_611 = sig_608 ^ sig_609;
  int sig_612 = sig_495 ^ sig_555;
  int sig_613 = sig_495 & sig_555;
  int sig_614 = sig_612 & sig_491;
  int sig_615 = sig_612 ^ sig_491;
  int sig_616 = sig_613 ^ sig_614;
  int sig_617 = sig_142 & sig_496;
  int sig_618 = sig_142 ^ sig_496;
  int sig_631 = ~(wa[3] | wa[3]);
  int sig_632 = wa[7] & sig_564;
  int sig_633 = sig_631 & wa[3];
  int sig_635 = sig_632 | sig_633;
  int sig_636 = sig_570 ^ sig_566;
  int sig_637 = sig_570 & sig_566;
  int sig_638 = sig_636 & sig_635;
  int sig_639 = sig_636 ^ sig_635;
  int sig_640 = sig_637 | sig_638;
  int sig_641 = sig_575 ^ sig_571;
  int sig_642 = sig_575 & sig_571;
  int sig_643 = sig_641 & sig_640;
  int sig_644 = sig_641 ^ sig_640;
  int sig_645 = sig_642 | sig_643;
  int sig_646 = sig_580 ^ sig_576;
  int sig_647 = sig_580 & sig_576;
  int sig_648 = sig_646 & sig_645;
  int sig_649 = sig_646 ^ sig_645;
  int sig_650 = sig_647 | sig_648;
  int sig_651 = sig_585 ^ sig_581;
  int sig_652 = sig_585 & sig_581;
  int sig_653 = sig_651 & sig_650;
  int sig_654 = sig_651 ^ sig_650;
  int sig_655 = sig_652 | sig_653;
  int sig_656 = sig_590 ^ sig_586;
  int sig_657 = sig_590 & sig_586;
  int sig_658 = sig_656 & sig_655;
  int sig_659 = sig_656 ^ sig_655;
  int sig_660 = sig_657 ^ sig_658;
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
  int sig_680 = sig_677 ^ sig_678;
  int sig_681 = sig_615 ^ sig_611;
  int sig_682 = sig_615 & sig_611;
  int sig_683 = sig_681 & sig_680;
  int sig_684 = sig_681 ^ sig_680;
  int sig_685 = sig_682 ^ sig_683;
  int sig_686 = sig_618 ^ sig_616;
  int sig_687 = sig_618 & sig_616;
  int sig_688 = sig_686 & sig_685;
  int sig_689 = sig_686 ^ sig_685;
  int sig_690 = sig_687 | sig_688;
  int sig_692 = sig_617 ^ sig_690;
  y |=  (sig_120 & 0x01) << 0; // default output
  y |=  (sig_85 & 0x01) << 1; // default output
  y |=  (sig_42 & 0x01) << 2; // default output
  y |=  (sig_538 & 0x01) << 3; // default output
  y |=  (sig_326 & 0x01) << 4; // default output
  y |=  (sig_279 & 0x01) << 5; // default output
  y |=  (sig_108 & 0x01) << 6; // default output
  y |=  (sig_75 & 0x01) << 7; // default output
  y |=  (sig_633 & 0x01) << 8; // default output
  y |=  (sig_447 & 0x01) << 9; // default output
  y |=  (sig_639 & 0x01) << 10; // default output
  y |=  (sig_644 & 0x01) << 11; // default output
  y |=  (sig_649 & 0x01) << 12; // default output
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

// internal reference: cgp-nn-iccad16.11.cgpnn_mul11_e00_5_00047_wtmrca

