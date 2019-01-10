/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8u_97BD(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_39, dout_42, dout_49, dout_54, dout_57, dout_59, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_74, dout_76, dout_81, dout_86, dout_91, dout_99, dout_103, dout_105, dout_106, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_121, dout_126, dout_131, dout_136, dout_141, dout_147, dout_149, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_166, dout_171, dout_176, dout_181, dout_186, dout_187, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_211, dout_216, dout_221, dout_226, dout_227, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_256, dout_261, dout_266, dout_267, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_301, dout_306, dout_307, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_39=dout_19|dout_26;
   dout_42=dout_39|dout_27;
   dout_49=dout_21|dout_28;
   dout_54=dout_22|dout_29;
   dout_57=dout_54|dout_31;
   dout_59=dout_23|dout_30;
   dout_66=((B >> 0)&1)&((A >> 2)&1);
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_74=dout_34|dout_66;
   dout_76=dout_42|dout_67;
   dout_81=dout_20|dout_68;
   dout_86=dout_49|dout_69;
   dout_91=dout_57|dout_70;
   dout_99=dout_59|dout_71;
   dout_103=((B >> 6)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_105=(((B >> 6)&1)|dout_103)^0xFFFFFFFFFFFFFFFFU;
   dout_106=((B >> 7)&1)&((A >> 2)&1);
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_114=((B >> 3)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_76|dout_111;
   dout_121=dout_81|dout_112;
   dout_126=dout_86|dout_113;
   dout_131=dout_91|dout_114;
   dout_136=dout_99|dout_115;
   dout_141=dout_72|dout_116;
   dout_147=dout_106&dout_117;
   dout_149=dout_106|dout_117;
   dout_154=dout_118^dout_147;
   dout_155=dout_147|dout_105;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_121|dout_156;
   dout_166=dout_126|dout_157;
   dout_171=dout_131|dout_158;
   dout_176=dout_136|dout_159;
   dout_181=dout_141|dout_160;
   dout_186=dout_149|dout_161;
   dout_187=dout_149&dout_161;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_187;
   dout_194=dout_191^dout_187;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_166|dout_201;
   dout_211=dout_171|dout_202;
   dout_216=dout_176|dout_203;
   dout_221=dout_181|dout_204;
   dout_226=dout_186|dout_205;
   dout_227=dout_186&dout_205;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_227;
   dout_234=dout_231^dout_227;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_211|dout_246;
   dout_256=dout_216|dout_247;
   dout_261=dout_221|dout_248;
   dout_266=dout_226|dout_249;
   dout_267=dout_226&dout_249;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_267;
   dout_274=dout_271^dout_267;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_256|dout_291;
   dout_301=dout_261|dout_292;
   dout_306=dout_266|dout_293;
   dout_307=dout_266&dout_293;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_307;
   dout_314=dout_311^dout_307;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&dout_298;
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_301&1) << 8;
   O |= (dout_306&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

// internal reference: cgp-approx14rewc.08.mult8_cgp14rewc_123699_rcam

