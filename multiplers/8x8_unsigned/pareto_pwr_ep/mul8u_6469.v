/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/

module mul8u_6469 (
    A,
    B,
    O
);

input [7:0] A;
input [7:0] B;
output [15:0] O;

wire sig_16,sig_17,sig_18,sig_19,sig_20,sig_21,sig_22,sig_23,sig_24,sig_25,sig_26,sig_27,sig_28,sig_29,sig_30,sig_31,sig_32,sig_34,sig_39,sig_47;
wire sig_49,sig_54,sig_59,sig_66,sig_67,sig_68,sig_69,sig_70,sig_71,sig_72,sig_73,sig_74,sig_76,sig_81,sig_86,sig_94,sig_96,sig_101,sig_111,sig_112;
wire sig_113,sig_114,sig_115,sig_116,sig_117,sig_118,sig_119,sig_121,sig_126,sig_131,sig_136,sig_141,sig_146,sig_156,sig_157,sig_158,sig_159,sig_160,sig_161,sig_162;
wire sig_163,sig_164,sig_166,sig_168,sig_171,sig_172,sig_176,sig_177,sig_179,sig_180,sig_181,sig_182,sig_183,sig_184,sig_185,sig_186,sig_187,sig_188,sig_189,sig_190;
wire sig_191,sig_192,sig_193,sig_194,sig_195,sig_197,sig_198,sig_199,sig_201,sig_202,sig_203,sig_204,sig_205,sig_206,sig_207,sig_208,sig_209,sig_210,sig_211,sig_212;
wire sig_213,sig_214,sig_215,sig_216,sig_217,sig_218,sig_219,sig_220,sig_221,sig_222,sig_223,sig_224,sig_225,sig_226,sig_227,sig_228,sig_229,sig_230,sig_231,sig_232;
wire sig_233,sig_234,sig_235,sig_236,sig_237,sig_238,sig_239,sig_240,sig_241,sig_242,sig_243,sig_244,sig_245,sig_246,sig_247,sig_248,sig_249,sig_250,sig_251,sig_252;
wire sig_253,sig_254,sig_255,sig_256,sig_257,sig_258,sig_259,sig_260,sig_261,sig_262,sig_263,sig_264,sig_265,sig_266,sig_267,sig_268,sig_269,sig_270,sig_271,sig_272;
wire sig_273,sig_274,sig_275,sig_276,sig_277,sig_278,sig_279,sig_280,sig_281,sig_282,sig_283,sig_284,sig_285,sig_286,sig_287,sig_288,sig_289,sig_290,sig_291,sig_292;
wire sig_293,sig_294,sig_295,sig_296,sig_297,sig_298,sig_299,sig_300,sig_301,sig_302,sig_303,sig_304,sig_305,sig_306,sig_307,sig_308,sig_309,sig_310,sig_311,sig_312;
wire sig_313,sig_314,sig_315,sig_316,sig_317,sig_318,sig_319,sig_320,sig_321,sig_322,sig_323,sig_324,sig_325,sig_326,sig_327,sig_328,sig_329,sig_330,sig_331,sig_332;
wire sig_333,sig_334,sig_335;

assign sig_16 = B[0] & A[0]; //1 
assign sig_17 = B[1] & A[0]; //2 
assign sig_18 = B[2] & A[0]; //3 
assign sig_19 = B[3] & A[0]; //4 
assign sig_20 = B[4] & A[0]; //5 
assign sig_21 = B[5] & A[0]; //6 
assign sig_22 = B[6] & A[0]; //7 
assign sig_23 = B[7] & A[0]; //8 
assign sig_24 = B[0] & A[1]; //9 
assign sig_25 = B[1] & A[1]; //10 
assign sig_26 = B[2] & A[1]; //11 
assign sig_27 = B[3] & A[1]; //12 
assign sig_28 = B[4] & A[1]; //13 
assign sig_29 = B[5] & A[1]; //14 
assign sig_30 = B[6] & A[1]; //15 
assign sig_31 = B[7] & A[1]; //16 
assign sig_32 = sig_17 | sig_24; //17 
assign sig_34 = sig_18 | sig_25; //18 
assign sig_39 = sig_19 | sig_26; //19 
assign sig_47 = sig_20 | sig_27; //20 
assign sig_49 = sig_21 | sig_28; //21 
assign sig_54 = sig_22 | sig_29; //22 
assign sig_59 = sig_23 | sig_30; //23 
assign sig_66 = B[0] & A[2]; //24 
assign sig_67 = B[1] & A[2]; //25 
assign sig_68 = B[2] & A[2]; //26 
assign sig_69 = B[3] & A[2]; //27 
assign sig_70 = B[4] & A[2]; //28 
assign sig_71 = B[5] & A[2]; //29 
assign sig_72 = B[6] & A[2]; //30 
assign sig_73 = B[7] & A[2]; //31 
assign sig_74 = sig_34 | sig_66; //32 
assign sig_76 = sig_39 | sig_67; //33 
assign sig_81 = sig_47 | sig_68; //34 
assign sig_86 = sig_49 | sig_69; //35 
assign sig_94 = sig_70 | sig_54; //36 
assign sig_96 = sig_59 | sig_71; //37 
assign sig_101 = sig_31 | sig_72; //38 
assign sig_111 = B[0] & A[3]; //39 
assign sig_112 = B[1] & A[3]; //40 
assign sig_113 = B[2] & A[3]; //41 
assign sig_114 = B[3] & A[3]; //42 
assign sig_115 = B[4] & A[3]; //43 
assign sig_116 = B[5] & A[3]; //44 
assign sig_117 = B[6] & A[3]; //45 
assign sig_118 = B[7] & A[3]; //46 
assign sig_119 = sig_76 | sig_111; //47 
assign sig_121 = sig_81 | sig_112; //48 
assign sig_126 = sig_86 | sig_113; //49 
assign sig_131 = sig_94 | sig_114; //50 
assign sig_136 = sig_96 | sig_115; //51 
assign sig_141 = sig_101 | sig_116; //52 
assign sig_146 = sig_73 | sig_117; //53 
assign sig_156 = B[0] & A[4]; //54 
assign sig_157 = B[1] & A[4]; //55 
assign sig_158 = B[2] & A[4]; //56 
assign sig_159 = B[3] & A[4]; //57 
assign sig_160 = B[4] & A[4]; //58 
assign sig_161 = B[5] & A[4]; //59 
assign sig_162 = B[6] & A[4]; //60 
assign sig_163 = B[7] & A[4]; //61 
assign sig_164 = sig_121 | sig_156; //62 
assign sig_166 = sig_126 | sig_157; //63 
assign sig_168 = sig_126 | sig_157; //64 
assign sig_171 = sig_131 ^ sig_158; //65 
assign sig_172 = sig_131 & sig_158; //66 
assign sig_176 = sig_136 ^ sig_159; //67 
assign sig_177 = sig_136 & sig_159; //68 
assign sig_179 = sig_176 ^ sig_172; //69 
assign sig_180 = sig_177 | sig_172; //70 
assign sig_181 = sig_141 ^ sig_160; //71 
assign sig_182 = sig_141 & sig_160; //72 
assign sig_183 = sig_181 & sig_180; //73 
assign sig_184 = sig_181 ^ sig_180; //74 
assign sig_185 = sig_182 | sig_183; //75 
assign sig_186 = sig_146 ^ sig_161; //76 
assign sig_187 = sig_146 & sig_161; //77 
assign sig_188 = sig_186 & sig_185; //78 
assign sig_189 = sig_186 ^ sig_185; //79 
assign sig_190 = sig_187 | sig_188; //80 
assign sig_191 = sig_118 ^ sig_162; //81 
assign sig_192 = sig_118 & sig_162; //82 
assign sig_193 = sig_191 & sig_190; //83 
assign sig_194 = sig_191 ^ sig_190; //84 
assign sig_195 = sig_192 | sig_193; //85 
assign sig_197 = sig_131 | B[1]; //86 
assign sig_198 = sig_163 & sig_195; //87 
assign sig_199 = sig_163 ^ sig_195; //88 
assign sig_201 = B[0] & A[5]; //89 
assign sig_202 = B[1] & A[5]; //90 
assign sig_203 = B[2] & A[5]; //91 
assign sig_204 = B[3] & A[5]; //92 
assign sig_205 = B[4] & A[5]; //93 
assign sig_206 = B[5] & A[5]; //94 
assign sig_207 = B[6] & A[5]; //95 
assign sig_208 = B[7] & A[5]; //96 
assign sig_209 = sig_168 ^ sig_201; //97 
assign sig_210 = sig_166 & sig_201; //98 
assign sig_211 = sig_171 ^ sig_202; //99 
assign sig_212 = sig_171 & sig_202; //100 
assign sig_213 = sig_197 & sig_210; //101 
assign sig_214 = sig_211 ^ sig_210; //102 
assign sig_215 = sig_212 | sig_213; //103 
assign sig_216 = sig_179 ^ sig_203; //104 
assign sig_217 = sig_179 & sig_203; //105 
assign sig_218 = sig_216 & sig_215; //106 
assign sig_219 = sig_216 ^ sig_215; //107 
assign sig_220 = sig_217 | sig_218; //108 
assign sig_221 = sig_184 ^ sig_204; //109 
assign sig_222 = sig_184 & sig_204; //110 
assign sig_223 = sig_221 & sig_220; //111 
assign sig_224 = sig_221 ^ sig_220; //112 
assign sig_225 = sig_222 | sig_223; //113 
assign sig_226 = sig_189 ^ sig_205; //114 
assign sig_227 = sig_189 & sig_205; //115 
assign sig_228 = sig_226 & sig_225; //116 
assign sig_229 = sig_226 ^ sig_225; //117 
assign sig_230 = sig_227 | sig_228; //118 
assign sig_231 = sig_194 ^ sig_206; //119 
assign sig_232 = sig_194 & sig_206; //120 
assign sig_233 = sig_231 & sig_230; //121 
assign sig_234 = sig_231 ^ sig_230; //122 
assign sig_235 = sig_232 | sig_233; //123 
assign sig_236 = sig_199 ^ sig_207; //124 
assign sig_237 = sig_199 & sig_207; //125 
assign sig_238 = sig_236 & sig_235; //126 
assign sig_239 = sig_236 ^ sig_235; //127 
assign sig_240 = sig_237 | sig_238; //128 
assign sig_241 = sig_198 ^ sig_208; //129 
assign sig_242 = sig_195 & sig_208; //130 
assign sig_243 = sig_241 & sig_240; //131 
assign sig_244 = sig_241 ^ sig_240; //132 
assign sig_245 = sig_242 | sig_243; //133 
assign sig_246 = B[0] & A[6]; //134 
assign sig_247 = B[1] & A[6]; //135 
assign sig_248 = B[2] & A[6]; //136 
assign sig_249 = B[3] & A[6]; //137 
assign sig_250 = B[4] & A[6]; //138 
assign sig_251 = B[5] & A[6]; //139 
assign sig_252 = B[6] & A[6]; //140 
assign sig_253 = B[7] & A[6]; //141 
assign sig_254 = sig_214 ^ sig_246; //142 
assign sig_255 = sig_214 & sig_246; //143 
assign sig_256 = sig_219 ^ sig_247; //144 
assign sig_257 = sig_219 & sig_247; //145 
assign sig_258 = sig_256 & sig_255; //146 
assign sig_259 = sig_256 ^ sig_255; //147 
assign sig_260 = sig_257 | sig_258; //148 
assign sig_261 = sig_224 ^ sig_248; //149 
assign sig_262 = sig_224 & sig_248; //150 
assign sig_263 = sig_261 & sig_260; //151 
assign sig_264 = sig_261 ^ sig_260; //152 
assign sig_265 = sig_262 | sig_263; //153 
assign sig_266 = sig_229 ^ sig_249; //154 
assign sig_267 = sig_229 & sig_249; //155 
assign sig_268 = sig_266 & sig_265; //156 
assign sig_269 = sig_266 ^ sig_265; //157 
assign sig_270 = sig_267 | sig_268; //158 
assign sig_271 = sig_234 ^ sig_250; //159 
assign sig_272 = sig_234 & sig_250; //160 
assign sig_273 = sig_271 & sig_270; //161 
assign sig_274 = sig_271 ^ sig_270; //162 
assign sig_275 = sig_272 | sig_273; //163 
assign sig_276 = sig_239 ^ sig_251; //164 
assign sig_277 = sig_239 & sig_251; //165 
assign sig_278 = sig_276 & sig_275; //166 
assign sig_279 = sig_276 ^ sig_275; //167 
assign sig_280 = sig_277 | sig_278; //168 
assign sig_281 = sig_244 ^ sig_252; //169 
assign sig_282 = sig_244 & sig_252; //170 
assign sig_283 = sig_281 & sig_280; //171 
assign sig_284 = sig_281 ^ sig_280; //172 
assign sig_285 = sig_282 | sig_283; //173 
assign sig_286 = sig_245 ^ sig_253; //174 
assign sig_287 = sig_245 & A[6]; //175 
assign sig_288 = B[7] & sig_285; //176 
assign sig_289 = sig_286 ^ sig_285; //177 
assign sig_290 = sig_287 | sig_288; //178 
assign sig_291 = B[0] & A[7]; //179 
assign sig_292 = B[1] & A[7]; //180 
assign sig_293 = B[2] & A[7]; //181 
assign sig_294 = B[3] & A[7]; //182 
assign sig_295 = B[4] & A[7]; //183 
assign sig_296 = B[5] & A[7]; //184 
assign sig_297 = B[6] & A[7]; //185 
assign sig_298 = B[7] & A[7]; //186 
assign sig_299 = sig_259 ^ sig_291; //187 
assign sig_300 = sig_259 & sig_291; //188 
assign sig_301 = sig_264 ^ sig_292; //189 
assign sig_302 = sig_264 & sig_292; //190 
assign sig_303 = sig_301 & sig_300; //191 
assign sig_304 = sig_301 ^ sig_300; //192 
assign sig_305 = sig_302 | sig_303; //193 
assign sig_306 = sig_269 ^ sig_293; //194 
assign sig_307 = sig_269 & sig_293; //195 
assign sig_308 = sig_306 & sig_305; //196 
assign sig_309 = sig_306 ^ sig_305; //197 
assign sig_310 = sig_307 | sig_308; //198 
assign sig_311 = sig_274 ^ sig_294; //199 
assign sig_312 = sig_274 & sig_294; //200 
assign sig_313 = sig_311 & sig_310; //201 
assign sig_314 = sig_311 ^ sig_310; //202 
assign sig_315 = sig_312 | sig_313; //203 
assign sig_316 = sig_279 ^ sig_295; //204 
assign sig_317 = sig_279 & sig_295; //205 
assign sig_318 = sig_316 & sig_315; //206 
assign sig_319 = sig_316 ^ sig_315; //207 
assign sig_320 = sig_317 | sig_318; //208 
assign sig_321 = sig_284 ^ sig_296; //209 
assign sig_322 = sig_284 & sig_296; //210 
assign sig_323 = sig_321 & sig_320; //211 
assign sig_324 = sig_321 ^ sig_320; //212 
assign sig_325 = sig_322 | sig_323; //213 
assign sig_326 = sig_289 ^ sig_297; //214 
assign sig_327 = sig_289 & sig_297; //215 
assign sig_328 = sig_326 & sig_325; //216 
assign sig_329 = sig_326 ^ sig_325; //217 
assign sig_330 = sig_327 | sig_328; //218 
assign sig_331 = sig_290 ^ sig_298; //219 
assign sig_332 = sig_290 & A[7]; //220 
assign sig_333 = B[7] & sig_330; //221 
assign sig_334 = sig_331 ^ sig_330; //222 
assign sig_335 = sig_332 | sig_333; //223 

assign O[15] = sig_335;
assign O[14] = sig_334;
assign O[13] = sig_329;
assign O[12] = sig_324;
assign O[11] = sig_319;
assign O[10] = sig_314;
assign O[9] = sig_309;
assign O[8] = sig_304;
assign O[7] = sig_299;
assign O[6] = sig_254;
assign O[5] = sig_209;
assign O[4] = sig_164;
assign O[3] = sig_119;
assign O[2] = sig_74;
assign O[1] = sig_32;
assign O[0] = sig_16;

endmodule



// internal reference: cgp-approx14ep.08.mul8u_6469

