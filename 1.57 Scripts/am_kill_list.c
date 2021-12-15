#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<617> Local_84 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_86[4] = { 0, 0, 0, 0 };
	struct<18> Local_87[32];
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[5] = { 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95[4] = { 0, 0, 0, 0 };
	struct<8> Local_96[24];
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100[4] = { 0, 0, 0, 0 };
	int iLocal_101[4] = { 0, 0, 0, 0 };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<42> Local_105[32];
	struct<104> Local_106 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = -1;
	var uLocal_113 = -1;
	var uLocal_114 = -1;
	var uLocal_115 = -1;
	var uLocal_116 = -1;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = 32;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546[4] = { 0, 0, 0, 0 };
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	struct<2> Local_552[10];
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	struct<2> Local_563[5];
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	struct<3> Local_569 = { 0, 0, 0 } ;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_576 = 0;
	int iLocal_577[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_578 = 0;
	var uLocal_579[4] = { 0, 0, 0, 0 };
	var uLocal_580[4] = { 0, 0, 0, 0 };
	struct<21> Local_581 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_94 = -100f;
	iLocal_544 = -1;
	iLocal_545 = -1;
	iLocal_572 = -1;
	if (unk_0x02BFF15CAA701972() && func_857(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		func_845(ScriptParam_581);
	}
	else
	{
		func_799();
	}
	while (true)
	{
		func_798();
		if (func_791())
		{
			func_799();
		}
		else if (func_788(19))
		{
			func_799();
		}
		if (func_787())
		{
			func_799();
		}
		func_763();
		switch (func_762(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if ((func_761() == 1 && Local_84.f_1 != -1) && Local_84.f_2 != -1)
				{
					func_759();
					func_755(129, Local_84.f_1, Local_84.f_2, 0);
					if (Global_2544210.f_5115 == -1)
					{
						if (!func_754())
						{
							Global_2544210.f_5115 = 0;
						}
						else
						{
							Global_2544210.f_5115 = 1;
						}
					}
					func_753(Local_84.f_30[0 /*3*/]);
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 1;
				}
				else if (func_761() == 4)
				{
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_761() == 1)
				{
					func_748();
					func_747();
					func_729();
					func_427();
					func_165();
					func_164();
					func_163();
				}
				else if (func_761() == 4)
				{
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_162(&(Local_84.f_320));
				if (func_161(&(Local_84.f_320)))
				{
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 4;
			
			case 4:
				func_799();
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			switch (func_761())
			{
				case 0:
					if (func_146())
					{
						if (func_141())
						{
							func_137(func_139(129, Local_84.f_1, Local_84.f_2, 0));
							Local_84 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_84 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_84.f_241 > 0)
	{
		if (Local_84 != 4)
		{
			if (func_23())
			{
				if (Local_84.f_241 == 3)
				{
					if (func_21())
					{
						if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_84.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_84.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_84.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x5E72DF7B8C03AA05())
				{
					if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
					{
						if (!func_16(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1)), 0))
						{
							if (Local_87[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2)) && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 6)) && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 15);
				}
				func_7();
			}
			else if (Local_84.f_241 < 3)
			{
				if (func_3())
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 16);
					unk_0x191DDA30577F440A(&(Local_84.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			if (!func_4(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (iParam4 || !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x7D2B9E6A64637269())
				{
				}
				else if (bParam2)
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_5()) && func_857(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x6C9038EC46DA62DE(unk_0xCB567ED25393C1DF(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, iParam1);
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x4E8DA737B686529A(iVar0, 451360105) == 1 || unk_0x4E8DA737B686529A(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xD6E677FAD7521410(iParam0, 0), unk_0xD6E677FAD7521410(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_7()
{
	if (Local_84.f_241 != 3)
	{
		func_9();
		func_8(&(Local_84.f_324), 0, 0);
		Local_84.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x02BFF15CAA701972();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x551F46B3C7DFB654();
		Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_13();
		unk_0xEDA1E269A9237146();
	}
}

void func_13()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			unk_0x38CD3C04C877C35F(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_14()
{
	if (!func_15())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_13();
	return unk_0xB4BAEA083E2652CB();
}

int func_15()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1312763;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_84.f_328)))
	{
		func_20(&(Local_84.f_328), 0, 0);
	}
	else if (func_19(&(Local_84.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
		{
			if (Local_84.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar1]))
		{
			if (!func_31(Local_84.f_48[iVar1]))
			{
				switch (Local_84.f_85[iVar1])
				{
					case 0:
						if (!unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iVar1]), 0))
						{
							Local_84.f_85[iVar1] = 1;
						}
						else if (unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_84.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_84.f_241 == 1)
						{
							if (!func_23())
							{
								if (unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iVar1]), 0))
								{
									iVar4 = unk_0x75B58B38E45C6F9A(unk_0x8A437068C87289B7(Local_84.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_84.f_85[iVar1] = 2;
									}
									else if (unk_0x48E10529AEAE00F9(unk_0x6471F4759775FCA4(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_84.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = unk_0xD56332194D622ECE(iVar2);
														if (!unk_0xECEC7528A52B4EE8(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_84.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_84.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_84.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_84.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_84.f_241 == 1)
						{
							if (func_23())
							{
								Local_84.f_85[iVar1] = 3;
							}
							else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
							{
								Local_84.f_85[iVar1] = 3;
							}
							else if (unk_0x234B68AC2E35ED5A(Local_84.f_464, iVar1))
							{
								Local_84.f_85[iVar1] = 1;
								unk_0xC664C0067EEAB8D1(&(Local_84.f_464), iVar1);
							}
						}
						else
						{
							Local_84.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0x11DBA82F76F3C4C2(unk_0x8A437068C87289B7(Local_84.f_48[iVar1])))
						{
							func_25(&(Local_84.f_48[iVar1]));
							Local_84.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var1, iParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (iVar0 == func_5())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
			{
				if (Local_87[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_87[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_84.f_110[iVar0] != -1)
			{
				iVar3 = Local_84.f_110[iVar0];
				iVar1 = unk_0xC502CD39B4994F3A(iVar3);
				if (unk_0x8CFC2F41A749E236(iVar1))
				{
					if (func_857(iVar1, 1, 1))
					{
						if (unk_0xFCC26BA7572E9F1F(iVar1))
						{
							iVar2 = unk_0x4645C707A0067CB6(iVar1);
							iVar3 = iVar2;
							if (Local_87[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (Local_87[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_87[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
					iVar2 = unk_0xD56332194D622ECE(iVar1);
					if (!unk_0xECEC7528A52B4EE8(iVar2))
					{
						if (func_26(uParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 0);
	if (!unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_84.f_463 > 0)
	{
		if (Local_84.f_28 != Local_84.f_463)
		{
			Local_84.f_28 = Local_84.f_463;
		}
	}
	switch (Local_84.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_84.f_28)
			{
				if (Local_84.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 4))
			{
				Local_84.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_84.f_241 = 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_84.f_241 = 1;
			}
			if (!func_754())
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]))
				{
					if (!func_109(Local_84.f_7[0]))
					{
						Var2.f_2 = -1760228064;
						func_107(Var2, func_108(unk_0x854C404AEB476240(Local_84.f_7[0]), 1, 0));
						Local_84.f_241 = 2;
					}
				}
			}
			if (Local_84.f_241 == 0)
			{
				if (!func_22(&(Local_84.f_330)))
				{
					if (!func_22(&(Local_84.f_326)))
					{
						func_20(&(Local_84.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_84.f_326)))
				{
					func_106(&(Local_84.f_330));
				}
				else if (func_19(&(Local_84.f_330), func_105(), 0))
				{
					Var2.f_2 = -1760228064;
					func_107(Var2, func_104(1));
					unk_0x191DDA30577F440A(&(Local_84.f_3), 12);
					func_7();
				}
				if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
			{
				Local_84.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 19))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
	{
		if (!func_22(&(Local_84.f_332)))
		{
			func_20(&(Local_84.f_332), 0, 0);
			unk_0x191DDA30577F440A(&(Local_84.f_3), 7);
		}
		else if (func_19(&(Local_84.f_332), func_34(), 0))
		{
			unk_0x191DDA30577F440A(&(Local_84.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_754())
	{
		return Global_262145.f_11287;
	}
	return Global_262145.f_11264;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_84.f_278 > 0)
	{
		if (Local_84.f_279 >= Local_84.f_278)
		{
			if (Local_84.f_254 >= Local_84.f_255)
			{
				unk_0x191DDA30577F440A(&(Local_84.f_3), 0);
				unk_0x191DDA30577F440A(&(Local_84.f_3), 1);
				unk_0x191DDA30577F440A(&(Local_84.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_84.f_278 > 0)
		{
			if (Local_84.f_279 >= Local_84.f_278)
			{
				if (Local_84.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_84.f_256[0]);
				}
				if (Local_84.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_84.f_256[1]);
				}
				if (Local_84.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_84.f_256[2]);
				}
				if (Local_84.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_84.f_256[3]);
				}
				if (iVar5 >= Local_84.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar4]))
						{
							if (!func_31(Local_84.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0x191DDA30577F440A(&(Local_84.f_3), 0);
						unk_0x191DDA30577F440A(&(Local_84.f_3), 1);
						unk_0x191DDA30577F440A(&(Local_84.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar4]))
					{
						if (!func_31(Local_84.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_84.f_347)))
					{
						func_20(&(Local_84.f_347), 0, 0);
					}
					else if (func_19(&(Local_84.f_347), 3000, 0))
					{
						unk_0x191DDA30577F440A(&(Local_84.f_3), 0);
						unk_0x191DDA30577F440A(&(Local_84.f_3), 1);
						unk_0x191DDA30577F440A(&(Local_84.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) || !unk_0x234B68AC2E35ED5A(Local_84.f_3, 1))
	{
		if (Local_84.f_249 >= func_103())
		{
			unk_0x191DDA30577F440A(&(Local_84.f_3), 0);
			unk_0x191DDA30577F440A(&(Local_84.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_84.f_242)
		{
			if (unk_0xB7D6400C89373777(Local_84.f_73[iVar0]))
			{
				if (func_102(iVar0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_245, iVar0))
					{
						if ((Local_84.f_27 != joaat("hydra") && !func_4(unk_0x854C404AEB476240(Local_84.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_84.f_27 == joaat("hydra"))
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
							if (func_22(&(Local_563[iVar0 /*2*/])))
							{
								func_106(&(Local_563[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0x854C404AEB476240(Local_84.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 0))
							{
								unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
							}
							if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 18))
							{
								func_101(func_104(1), iVar0);
								unk_0x191DDA30577F440A(&(Local_84.f_3), 18);
							}
						}
						else if (func_100(iVar0) || !func_754())
						{
							if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 0))
							{
								unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
							}
							if (!unk_0x234B68AC2E35ED5A(Local_84.f_303, iVar0))
							{
								func_99(func_104(1), iVar0);
								unk_0x191DDA30577F440A(&(Local_84.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_84.f_73[iVar0]));
							if (!unk_0x234B68AC2E35ED5A(Local_84.f_253, iVar0))
							{
								Local_84.f_251 = (Local_84.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_84.f_252 > 0)
									{
										Local_84.f_302++;
										func_97(iVar0, func_104(1));
									}
								}
								unk_0x191DDA30577F440A(&(Local_84.f_253), iVar0);
							}
							func_106(&(Local_563[iVar0 /*2*/]));
						}
					}
				}
				else if (func_96(iVar0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_253, iVar0))
					{
						Local_84.f_251 = (Local_84.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_84.f_252 > 0)
							{
								Local_84.f_302++;
								func_97(iVar0, func_104(1));
							}
						}
						if (Local_84.f_27 == joaat("hydra"))
						{
							Local_84.f_254++;
						}
						unk_0x191DDA30577F440A(&(Local_84.f_253), iVar0);
					}
					if (func_22(&(Local_84.f_336[iVar0 /*2*/])))
					{
						func_106(&(Local_84.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_84.f_73[iVar0]));
				}
				else
				{
					if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 0))
					{
						unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
					}
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar0))
					{
						if (!func_22(&(Local_84.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_84.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_84.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0x191DDA30577F440A(&(Local_84.f_271), iVar0);
						}
						else if (func_19(&(Local_84.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 18))
								{
									func_101(func_104(1), iVar0);
									unk_0x191DDA30577F440A(&(Local_84.f_3), 18);
								}
							}
							else if (func_100(iVar0) || !func_754())
							{
								if (!unk_0x234B68AC2E35ED5A(Local_84.f_303, iVar0))
								{
									func_99(func_104(1), iVar0);
									unk_0x191DDA30577F440A(&(Local_84.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_84.f_116)
			{
				if (unk_0xB7D6400C89373777(Local_84.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_84.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_94((iVar0 * 4 + iVar1)))
							{
								unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
							}
							else if (func_93(iVar6))
							{
								if (!func_19(&(Local_84.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0x91D137360A62E65D(unk_0x8A437068C87289B7(Local_84.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_96[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_84.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (Local_84.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_89((iVar0 * 4 + iVar1), func_104(1));
										Local_84.f_254++;
									}
								}
								Local_84.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_84.f_364[iVar6 /*2*/])))
								{
									func_106(&(Local_84.f_364[iVar6 /*2*/]));
								}
								if (unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0xC664C0067EEAB8D1(&(Local_84.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
							else
							{
								if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (!func_22(&(Local_84.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_84.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_84.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0x191DDA30577F440A(&(Local_84.f_272[func_91(iVar6)]), func_90(iVar6));
										func_106(&(Local_84.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0x191DDA30577F440A(&(Local_84.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
						}
					}
					else if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar6)], func_90(iVar6)) || Local_84.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_84.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_84.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (Local_84.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_84.f_254++;
								func_89((iVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_84.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
					else
					{
						if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (!func_22(&(Local_84.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_84.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_84.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0x191DDA30577F440A(&(Local_84.f_272[func_91(iVar6)]), func_90(iVar6));
								func_106(&(Local_84.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0x191DDA30577F440A(&(Local_84.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_84.f_249 < func_103())
			{
				if (func_73(iVar0))
				{
				}
				unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
	{
		if (Local_84.f_247 >= Global_262145.f_10379)
		{
			unk_0x191DDA30577F440A(&(Local_84.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_84.f_243)
		{
			if (unk_0xB7D6400C89373777(Local_84.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0xE50EB54E0F21BED0(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iVar1)]), 0))
				{
					unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 2);
				}
				else if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar7)], func_90(iVar7)))
				{
					if (!func_19(&(Local_84.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_84.f_364[iVar7 /*2*/])))
					{
						func_106(&(Local_84.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_84.f_48[(20 + iVar1)]));
					if (Local_84.f_85[(20 + iVar1)] > 0)
					{
						Local_84.f_254++;
						if (func_98() > 1)
						{
							if (Local_84.f_317 > 0)
							{
								Local_84.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_84.f_85[(20 + iVar1)] = 0;
					if (unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0xC664C0067EEAB8D1(&(Local_84.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
				else
				{
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar7)], func_90(iVar7)))
					{
						if (!func_22(&(Local_84.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_84.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_84.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0x191DDA30577F440A(&(Local_84.f_272[func_91(iVar7)]), func_90(iVar7));
							func_106(&(Local_84.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0x191DDA30577F440A(&(Local_84.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
			}
			if (Local_84.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_84.f_252 > 0)
		{
			if (Local_84.f_302 > 0)
			{
				if (Local_84.f_302 >= (Local_84.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_84.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_84.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_84.f_279++;
									func_40();
								}
								else if (Local_84.f_318 >= func_39())
								{
									func_47();
									Local_84.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_84.f_317 > 0)
		{
			if (Local_84.f_316 > 0)
			{
				if (Local_84.f_316 >= Local_84.f_317)
				{
					if (Local_84.f_317 >= func_38())
					{
						func_47();
						Local_84.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_84.f_316 > 0)
		{
			if (Local_84.f_302 > 0)
			{
				if (Local_84.f_317 > 0)
				{
					if (Local_84.f_316 >= (Local_84.f_317 - 2))
					{
						if (Local_84.f_252 > 0)
						{
							if (Local_84.f_302 >= (Local_84.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_84.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_84.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_84.f_279++;
												func_40();
											}
											else if (Local_84.f_318 >= func_39())
											{
												func_47();
												Local_84.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_84.f_252 > 0)
		{
			if (Local_84.f_302 > 0)
			{
				if (Local_84.f_302 >= (Local_84.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_84.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_84.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_84.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_84.f_305[Local_84.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_84.f_278)
	{
		iVar0 = (iVar0 + Local_84.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_84.f_29 == -1)
	{
		iVar0 = func_46(Local_84.f_27);
		Local_84.f_29 = unk_0xB36B8558948EA7A8(0, iVar0);
		if (func_754())
		{
			if (Local_84.f_27 == joaat("hydra"))
			{
				if (Local_84.f_29 == 2)
				{
					Local_84.f_29 = 4;
				}
			}
			else if (Local_84.f_27 == joaat("savage"))
			{
				if (Local_84.f_29 == 0)
				{
					Local_84.f_29 = 1;
				}
				else if (Local_84.f_29 == 1)
				{
					Local_84.f_29 = 2;
				}
				else if (Local_84.f_29 == 2)
				{
					Local_84.f_29 = 3;
				}
			}
			else if (Local_84.f_27 == joaat("valkyrie"))
			{
				if (Local_84.f_29 == 2)
				{
					Local_84.f_29 = 3;
				}
				else if (Local_84.f_29 == 3)
				{
					Local_84.f_29 = 4;
				}
			}
			else if (Local_84.f_27 == joaat("buzzard"))
			{
				if (Local_84.f_29 == 0)
				{
					Local_84.f_29 = 1;
				}
				else if (Local_84.f_29 == 1)
				{
					Local_84.f_29 = 2;
				}
				else if (Local_84.f_29 == 2)
				{
					Local_84.f_29 = 3;
				}
				else if (Local_84.f_29 == 3)
				{
					Local_84.f_29 = 4;
				}
			}
		}
		else if (Local_84.f_27 == joaat("savage"))
		{
			if (Local_84.f_29 == 0)
			{
				Local_84.f_29 = 1;
			}
			else if (Local_84.f_29 == 1)
			{
				Local_84.f_29 = 2;
			}
			else if (Local_84.f_29 == 2)
			{
				Local_84.f_29 = 3;
			}
		}
	}
	switch (Local_84.f_27)
	{
		case joaat("rhino"):
			Local_84.f_280[0] = 4;
			Local_84.f_291[0] = func_45(4);
			Local_84.f_305[0] = func_44(4);
			Local_84.f_280[1] = 4;
			Local_84.f_291[1] = func_45(4);
			Local_84.f_305[1] = func_44(4);
			Local_84.f_280[2] = 4;
			Local_84.f_291[2] = func_45(4);
			Local_84.f_305[2] = func_44(4);
			if (Local_84.f_12 <= 2 || !func_754())
			{
				Local_84.f_278 = 3;
			}
			else if (Local_84.f_12 == 3)
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_278 = 4;
			}
			else
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 4;
				Local_84.f_291[4] = func_45(4);
				Local_84.f_305[4] = func_44(4);
				Local_84.f_278 = 5;
			}
			Local_84.f_255 = func_41();
			if (!func_754())
			{
				Local_84.f_1 = 0;
			}
			else
			{
				Local_84.f_1 = 5;
			}
			Local_84.f_2 = Local_84.f_29;
			switch (Local_84.f_29)
			{
				case 0:
					Local_84.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_84.f_43[0] = 269.414f;
					Local_84.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_84.f_43[1] = 3.5491f;
					Local_84.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_84.f_43[2] = 54.4509f;
					Local_84.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_84.f_43[3] = 178.1948f;
					Local_84.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_84.f_175[0] = 270.8322f;
					Local_84.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_84.f_175[1] = 177.3506f;
					Local_84.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_84.f_175[2] = 318.1089f;
					Local_84.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_84.f_175[3] = 272.0801f;
					Local_84.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_84.f_175[4] = 104.0591f;
					Local_84.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_84.f_148[0] = 296.4225f;
					Local_84.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_84.f_148[1] = 164.9695f;
					Local_84.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_84.f_148[2] = 136.0596f;
					Local_84.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_84.f_148[3] = 116.379f;
					Local_84.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_84.f_148[4] = 86.6586f;
					Local_84.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_84.f_148[5] = 74.6822f;
					Local_84.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_84.f_148[6] = 206.8863f;
					Local_84.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_84.f_148[7] = 267.8581f;
					Local_84.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_84.f_148[8] = 267.5856f;
					Local_84.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_84.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_84.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_84.f_43[0] = 194.8062f;
					Local_84.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_84.f_43[1] = 238.9372f;
					Local_84.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_84.f_43[2] = 16.3071f;
					Local_84.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_84.f_43[3] = 209.9883f;
					Local_84.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_84.f_148[0] = 221.3913f;
					Local_84.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_84.f_148[1] = 246.3415f;
					Local_84.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_84.f_148[2] = 213.4087f;
					Local_84.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_84.f_148[3] = 100.5405f;
					Local_84.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_84.f_148[4] = 289.6017f;
					Local_84.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_84.f_148[5] = 285.6456f;
					Local_84.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_84.f_148[6] = 310.9245f;
					Local_84.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_84.f_148[7] = 46.7117f;
					Local_84.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_84.f_148[8] = 35.9192f;
					Local_84.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_84.f_148[9] = 207.53f;
					Local_84.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_84.f_175[0] = 286.6127f;
					Local_84.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_84.f_175[1] = 124.1428f;
					Local_84.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_84.f_175[2] = 275.0147f;
					Local_84.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_84.f_175[3] = 287.91f;
					Local_84.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_84.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_84.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_84.f_43[0] = 172.439f;
					Local_84.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_84.f_43[1] = 53.9805f;
					Local_84.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_84.f_43[2] = 303.2142f;
					Local_84.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_84.f_43[3] = 218.5974f;
					Local_84.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_84.f_148[0] = 264.5842f;
					Local_84.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_84.f_148[1] = 133.7932f;
					Local_84.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_84.f_148[2] = 205.1215f;
					Local_84.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_84.f_148[3] = 66.1065f;
					Local_84.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_84.f_148[4] = 7.8064f;
					Local_84.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_84.f_148[5] = 358.7563f;
					Local_84.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_84.f_148[6] = 142.1748f;
					Local_84.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_84.f_148[7] = 247.816f;
					Local_84.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_84.f_148[8] = 124.4666f;
					Local_84.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_84.f_148[9] = 348.6588f;
					Local_84.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_84.f_175[0] = 89.8563f;
					Local_84.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_84.f_175[1] = 163.8004f;
					Local_84.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_84.f_175[2] = 270.0754f;
					Local_84.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_84.f_175[3] = 184.9752f;
					Local_84.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_84.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_84.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_84.f_43[0] = 0.5044f;
					Local_84.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_84.f_43[1] = 179.2507f;
					Local_84.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_84.f_43[2] = 0.3066f;
					Local_84.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_84.f_43[3] = 180.2973f;
					Local_84.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_84.f_148[0] = 336.7541f;
					Local_84.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_84.f_148[1] = 6.0929f;
					Local_84.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_84.f_148[2] = 4.2803f;
					Local_84.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_84.f_148[3] = 274.985f;
					Local_84.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_84.f_148[4] = 267.2555f;
					Local_84.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_84.f_148[5] = 6.5529f;
					Local_84.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_84.f_148[6] = 89.1724f;
					Local_84.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_84.f_148[7] = 348.279f;
					Local_84.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_84.f_148[8] = 267.8075f;
					Local_84.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_84.f_148[9] = 0.5237f;
					Local_84.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_84.f_175[0] = 357.9713f;
					Local_84.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_84.f_175[1] = 269.3234f;
					Local_84.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_84.f_175[2] = 269.3055f;
					Local_84.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_84.f_175[3] = 359.1497f;
					Local_84.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_84.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_84.f_240 = joaat("insurgent");
			Local_84.f_280[0] = 2;
			Local_84.f_291[0] = func_45(2);
			Local_84.f_280[1] = 4;
			Local_84.f_291[1] = func_45(4);
			Local_84.f_305[1] = func_44(4);
			Local_84.f_280[2] = 2;
			Local_84.f_291[2] = func_45(2);
			if (Local_84.f_12 <= 2 || !func_754())
			{
				Local_84.f_280[3] = 5;
				Local_84.f_291[3] = func_45(5);
				Local_84.f_278 = 4;
			}
			else if (Local_84.f_12 == 3)
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 5;
				Local_84.f_291[5] = func_45(5);
				Local_84.f_278 = 6;
			}
			else
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 4;
				Local_84.f_291[5] = func_45(4);
				Local_84.f_305[5] = func_44(4);
				Local_84.f_280[6] = 5;
				Local_84.f_291[6] = func_45(5);
				Local_84.f_278 = 7;
			}
			Local_84.f_255 = func_41();
			if (!func_754())
			{
				Local_84.f_1 = 2;
			}
			else
			{
				Local_84.f_1 = 7;
			}
			Local_84.f_2 = Local_84.f_29;
			switch (Local_84.f_29)
			{
				case 0:
					Local_84.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_84.f_43[0] = 331.74f;
					Local_84.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_84.f_43[1] = 327.7335f;
					Local_84.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_84.f_43[2] = 149.1604f;
					Local_84.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_84.f_43[3] = 150.6753f;
					Local_84.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_84.f_148[0] = 147.2177f;
					Local_84.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_84.f_148[1] = 103.9461f;
					Local_84.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_84.f_148[2] = 160.822f;
					Local_84.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_84.f_148[3] = 205.8375f;
					Local_84.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_84.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_84.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_84.f_43[0] = 344.2504f;
					Local_84.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_84.f_43[1] = 340.3425f;
					Local_84.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_84.f_43[2] = 351.5693f;
					Local_84.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_84.f_43[3] = 354.2446f;
					Local_84.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_84.f_148[0] = 245.2865f;
					Local_84.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_84.f_148[1] = 74.1185f;
					Local_84.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_84.f_148[2] = 10.2312f;
					Local_84.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_84.f_148[3] = 222.4017f;
					Local_84.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_84.f_148[4] = 150.2763f;
					Local_84.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_84.f_148[5] = 105.4526f;
					Local_84.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_84.f_148[6] = 88.9429f;
					Local_84.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_84.f_148[7] = 51.1733f;
					Local_84.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_84.f_148[8] = 169.7083f;
					Local_84.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_84.f_148[9] = 29.5849f;
					Local_84.f_243 = 3;
					break;
				
				case 2:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_84.f_43[0] = 319.153f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_84.f_43[0] = 319.153f;
						Local_84.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_84.f_43[1] = 316.7079f;
						Local_84.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_84.f_43[2] = 316.9623f;
						Local_84.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_84.f_43[3] = 314.2003f;
					}
					Local_84.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_84.f_148[0] = 326.4292f;
					Local_84.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_84.f_148[1] = 6.8118f;
					Local_84.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_84.f_148[2] = 32.8776f;
					Local_84.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_84.f_148[3] = 8.387f;
					Local_84.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_84.f_148[4] = 291.5504f;
					Local_84.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_84.f_148[5] = 333.1838f;
					Local_84.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_84.f_148[6] = 203.8353f;
					Local_84.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_84.f_148[7] = 32.2329f;
					Local_84.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_84.f_148[8] = 195.4847f;
					Local_84.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_84.f_148[9] = 327.4941f;
					Local_84.f_243 = 4;
					break;
				
				case 3:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_84.f_43[0] = 156.0209f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_84.f_43[0] = 156.0209f;
						Local_84.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_84.f_43[1] = 41.8571f;
						Local_84.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_84.f_43[2] = 305.7411f;
						Local_84.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_84.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_84.f_242 = 3;
					}
					else
					{
						Local_84.f_242 = 4;
					}
					Local_84.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_84.f_148[0] = 197.3456f;
					Local_84.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_84.f_148[1] = 140.7211f;
					Local_84.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_84.f_148[2] = 98.9528f;
					Local_84.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_84.f_148[3] = 107.0238f;
					Local_84.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_84.f_148[4] = 202.129f;
					Local_84.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_84.f_148[5] = 230.1207f;
					Local_84.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_84.f_148[6] = 36.194f;
					Local_84.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_84.f_148[7] = 48.2522f;
					Local_84.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_84.f_148[8] = 296.114f;
					Local_84.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_84.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_84.f_240 = joaat("lazer");
			Local_84.f_280[0] = 2;
			Local_84.f_291[0] = func_45(2);
			Local_84.f_280[1] = 2;
			Local_84.f_291[1] = func_45(2);
			Local_84.f_280[2] = 2;
			Local_84.f_291[2] = func_45(2);
			if (Local_84.f_12 <= 2 || !func_754())
			{
				Local_84.f_278 = 3;
			}
			else if (Local_84.f_12 == 3)
			{
				Local_84.f_280[3] = 2;
				Local_84.f_291[3] = func_45(2);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_278 = 5;
			}
			else
			{
				Local_84.f_280[3] = 2;
				Local_84.f_291[3] = func_45(2);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 2;
				Local_84.f_291[5] = func_45(2);
				Local_84.f_278 = 6;
			}
			Local_84.f_255 = func_41();
			if (!func_754())
			{
				Local_84.f_1 = 1;
			}
			else
			{
				Local_84.f_1 = 6;
			}
			Local_84.f_2 = Local_84.f_29;
			switch (Local_84.f_29)
			{
				case 0:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_84.f_43[0] = 197.4435f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_84.f_43[0] = 197.4435f;
						Local_84.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_84.f_43[1] = 197.1133f;
						Local_84.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_84.f_43[2] = 272.2065f;
						Local_84.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_84.f_43[3] = 142.941f;
					}
					Local_84.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_84.f_175[0] = 34.149f;
					Local_84.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_84.f_175[1] = -26.0182f;
					Local_84.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_84.f_175[2] = 88.3998f;
					Local_84.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_84.f_175[3] = -141.7949f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_84.f_148[0] = 143.4012f;
					Local_84.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_84.f_148[1] = 212.1136f;
					Local_84.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_84.f_148[2] = 95.8248f;
					Local_84.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_84.f_148[3] = 113.3084f;
					Local_84.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_84.f_148[4] = 260.1329f;
					Local_84.f_242 = 4;
					break;
				
				case 1:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_84.f_43[0] = 131.0993f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_84.f_43[0] = 131.0993f;
						Local_84.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_84.f_43[1] = 127.8408f;
						Local_84.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_84.f_43[2] = 131.1571f;
						Local_84.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_84.f_43[3] = 132.943f;
					}
					Local_84.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_84.f_175[0] = 316.9068f;
					Local_84.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_84.f_175[1] = 142.3075f;
					Local_84.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_84.f_175[2] = 93.1231f;
					Local_84.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_84.f_175[3] = -9.0334f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_84.f_148[0] = 236.3566f;
					Local_84.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_84.f_148[1] = 212.7533f;
					Local_84.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_84.f_148[2] = 299.3619f;
					Local_84.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_84.f_148[3] = 115.7556f;
					Local_84.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_84.f_148[4] = 191.3862f;
					Local_84.f_242 = 4;
					break;
				
				case 2:
					Local_84.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_84.f_43[0] = 176.244f;
					Local_84.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_84.f_175[0] = 93.8354f;
					Local_84.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_84.f_175[1] = 250.5173f;
					Local_84.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_84.f_175[2] = 337.8961f;
					Local_84.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_84.f_175[3] = 142.1369f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_84.f_148[0] = 208.2624f;
					Local_84.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_84.f_148[1] = 349.048f;
					Local_84.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_84.f_148[2] = 69.8162f;
					Local_84.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_84.f_148[3] = 286.6181f;
					Local_84.f_242 = 4;
					Local_84.f_243 = 4;
					break;
				
				case 3:
					Local_84.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_84.f_43[0] = 292.0822f;
					Local_84.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_84.f_43[1] = 43.3907f;
					Local_84.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_84.f_43[2] = 124.2279f;
					Local_84.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_84.f_43[3] = 129.3366f;
					Local_84.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_84.f_175[0] = 137.5025f;
					Local_84.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_84.f_175[1] = 227.9336f;
					Local_84.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_84.f_175[2] = 6.0299f;
					Local_84.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_84.f_175[3] = -87.5596f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_242 = 4;
					Local_84.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_84.f_148[0] = 338.8487f;
					Local_84.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_84.f_148[1] = 272.5443f;
					Local_84.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_84.f_148[2] = 223.0158f;
					Local_84.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_84.f_148[3] = 355.6682f;
					Local_84.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_84.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_84.f_43[0] = 331.7771f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_84.f_43[0] = 331.7771f;
						Local_84.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_84.f_43[1] = 324.1843f;
						Local_84.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_84.f_43[2] = 330.0586f;
						Local_84.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_84.f_43[3] = 329.5413f;
					}
					Local_84.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_84.f_175[0] = 146.9594f;
					Local_84.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_84.f_175[1] = 137.6555f;
					Local_84.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_84.f_175[2] = 114.7478f;
					Local_84.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_84.f_175[3] = -84.6269f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_242 = 4;
					Local_84.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_84.f_148[0] = 153.0449f;
					Local_84.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_84.f_148[1] = 153.1271f;
					Local_84.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_84.f_148[2] = 331.3771f;
					Local_84.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_84.f_148[3] = 183.2579f;
					Local_84.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_84.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_84.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_84.f_43[0] = 184.7817f;
					Local_84.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_84.f_175[0] = 91.7761f;
					Local_84.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_84.f_175[1] = 269.7376f;
					Local_84.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_84.f_175[1] = 211.4614f;
					Local_84.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_84.f_175[3] = 148.9204f;
					Local_84.f_228[0] = 10000;
					Local_84.f_228[1] = 10000;
					Local_84.f_228[2] = 10000;
					Local_84.f_228[3] = 10000;
					Local_84.f_242 = 4;
					Local_84.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_84.f_148[0] = 113.298f;
					Local_84.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_84.f_148[1] = 353.0292f;
					Local_84.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_84.f_148[2] = 216.1793f;
					Local_84.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_84.f_148[3] = 347.4008f;
					Local_84.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_84.f_240 = joaat("buzzard");
			Local_84.f_280[0] = 2;
			Local_84.f_291[0] = func_45(2);
			Local_84.f_305[0] = func_44(4);
			Local_84.f_280[1] = 4;
			Local_84.f_291[1] = func_45(4);
			Local_84.f_305[1] = func_44(4);
			Local_84.f_280[2] = 2;
			Local_84.f_291[2] = func_45(2);
			Local_84.f_305[2] = func_44(4);
			if (Local_84.f_12 <= 2 || !func_754())
			{
				Local_84.f_280[3] = 5;
				Local_84.f_291[3] = func_45(5);
				Local_84.f_278 = 4;
			}
			else if (Local_84.f_12 == 3)
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 5;
				Local_84.f_291[5] = func_45(5);
				Local_84.f_278 = 6;
			}
			else
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 4;
				Local_84.f_291[5] = func_45(4);
				Local_84.f_305[5] = func_44(4);
				Local_84.f_280[6] = 5;
				Local_84.f_291[6] = func_45(5);
				Local_84.f_278 = 7;
			}
			Local_84.f_255 = func_41();
			if (!func_754())
			{
				Local_84.f_1 = 3;
			}
			else
			{
				Local_84.f_1 = 8;
			}
			Local_84.f_2 = Local_84.f_29;
			switch (Local_84.f_29)
			{
				case 0:
					if (!func_754())
					{
						Local_84.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_84.f_43[0] = 290.0732f;
					}
					else
					{
						Local_84.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_84.f_43[0] = 290.0732f;
						Local_84.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_84.f_43[1] = 231.5867f;
						Local_84.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_84.f_43[2] = 49.6234f;
						Local_84.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_84.f_43[3] = 229.3317f;
					}
					Local_84.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_84.f_148[0] = 230.0049f;
					Local_84.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_84.f_148[1] = 147.9421f;
					Local_84.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_84.f_148[2] = 22.3204f;
					Local_84.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_84.f_148[3] = 80.7676f;
					Local_84.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_84.f_148[4] = 162.0507f;
					Local_84.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_84.f_148[5] = 225.9002f;
					Local_84.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_84.f_148[6] = 140.0515f;
					Local_84.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_84.f_148[7] = 90.6966f;
					Local_84.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_84.f_148[8] = 226.042f;
					Local_84.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_84.f_148[9] = 79.7294f;
					Local_84.f_243 = 4;
					break;
				
				case 1:
					Local_84.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_84.f_43[0] = 122.9714f;
					Local_84.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_84.f_43[1] = 118.6931f;
					Local_84.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_84.f_43[2] = 26.5272f;
					Local_84.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_84.f_43[3] = 211.0638f;
					Local_84.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_84.f_148[0] = 203.4084f;
					Local_84.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_84.f_148[1] = 123.7895f;
					Local_84.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_84.f_148[2] = 115.9053f;
					Local_84.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_84.f_148[3] = 330.5807f;
					Local_84.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_84.f_148[4] = 116.311f;
					Local_84.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_84.f_148[5] = 145.855f;
					Local_84.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_84.f_148[6] = 41.353f;
					Local_84.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_84.f_148[7] = 266.0158f;
					Local_84.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_84.f_148[8] = 290.3963f;
					Local_84.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_84.f_148[9] = 243.2495f;
					Local_84.f_243 = 4;
					break;
				
				case 2:
					Local_84.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_84.f_43[0] = 280.2862f;
					Local_84.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_84.f_43[1] = 32.9157f;
					Local_84.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_84.f_43[2] = 106.2954f;
					Local_84.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_84.f_43[3] = 272.3807f;
					Local_84.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_84.f_148[0] = 254.5411f;
					Local_84.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_84.f_148[1] = 183.227f;
					Local_84.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_84.f_148[2] = 338.6039f;
					Local_84.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_84.f_148[3] = 71.8258f;
					Local_84.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_84.f_148[4] = 179.6626f;
					Local_84.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_84.f_148[5] = 272.7491f;
					Local_84.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_84.f_148[6] = 270.8252f;
					Local_84.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_84.f_148[7] = 180.4937f;
					Local_84.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_84.f_148[8] = 107.4297f;
					Local_84.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_84.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_84.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_84.f_43[0] = 117.7311f;
					Local_84.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_84.f_43[1] = 46.3958f;
					Local_84.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_84.f_43[2] = 189.2091f;
					Local_84.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_84.f_43[3] = 50.0778f;
					Local_84.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_84.f_148[0] = 229.5714f;
					Local_84.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_84.f_148[1] = 136.4963f;
					Local_84.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_84.f_148[2] = 88.3908f;
					Local_84.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_84.f_148[3] = 271.8922f;
					Local_84.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_84.f_148[4] = 316.4374f;
					Local_84.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_84.f_148[5] = 246.1521f;
					Local_84.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_84.f_148[6] = 198.8985f;
					Local_84.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_84.f_148[7] = 257.2332f;
					Local_84.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_84.f_148[8] = 104.7808f;
					Local_84.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_84.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_84.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_84.f_43[0] = 306.7662f;
					Local_84.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_84.f_43[1] = 303.3918f;
					Local_84.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_84.f_43[2] = 302.365f;
					Local_84.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_84.f_43[3] = 304.9788f;
					Local_84.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_84.f_148[0] = 30.9787f;
					Local_84.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_84.f_148[1] = 97.3626f;
					Local_84.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_84.f_148[2] = 218.2636f;
					Local_84.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_84.f_148[3] = 257.6324f;
					Local_84.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_84.f_148[4] = 244.6777f;
					Local_84.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_84.f_148[5] = 12.745f;
					Local_84.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_84.f_148[6] = 196.3743f;
					Local_84.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_84.f_148[7] = 283.2556f;
					Local_84.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_84.f_148[8] = 243.4268f;
					Local_84.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_84.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_84.f_240 = joaat("buzzard");
			Local_84.f_280[0] = 2;
			Local_84.f_291[0] = func_45(2);
			Local_84.f_280[1] = 4;
			Local_84.f_291[1] = func_45(4);
			Local_84.f_305[1] = func_44(4);
			Local_84.f_280[2] = 2;
			Local_84.f_291[2] = func_45(2);
			if (Local_84.f_12 <= 2 || !func_754())
			{
				Local_84.f_280[3] = 5;
				Local_84.f_291[3] = func_45(5);
				Local_84.f_278 = 4;
			}
			else if (Local_84.f_12 == 3)
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 5;
				Local_84.f_291[5] = func_45(5);
				Local_84.f_278 = 6;
			}
			else
			{
				Local_84.f_280[3] = 4;
				Local_84.f_291[3] = func_45(4);
				Local_84.f_305[3] = func_44(4);
				Local_84.f_280[4] = 2;
				Local_84.f_291[4] = func_45(2);
				Local_84.f_280[5] = 4;
				Local_84.f_291[5] = func_45(4);
				Local_84.f_305[5] = func_44(4);
				Local_84.f_280[6] = 5;
				Local_84.f_291[6] = func_45(5);
				Local_84.f_278 = 7;
			}
			Local_84.f_255 = func_41();
			if (!func_754())
			{
				Local_84.f_1 = 4;
			}
			else
			{
				Local_84.f_1 = 9;
			}
			Local_84.f_2 = Local_84.f_29;
			switch (Local_84.f_29)
			{
				case 0:
					Local_84.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_84.f_43[0] = 180.7904f;
					Local_84.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_84.f_43[1] = 269.3001f;
					Local_84.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_84.f_43[2] = 180.39f;
					Local_84.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_84.f_43[3] = 276.7351f;
					Local_84.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_84.f_148[0] = 329.9165f;
					Local_84.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_84.f_148[1] = 264.7702f;
					Local_84.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_84.f_148[2] = 359.5203f;
					Local_84.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_84.f_148[3] = 111.3101f;
					Local_84.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_84.f_148[4] = 176.3058f;
					Local_84.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_84.f_148[5] = 213.1969f;
					Local_84.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_84.f_148[6] = 275.2275f;
					Local_84.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_84.f_148[7] = 220.0349f;
					Local_84.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_84.f_148[8] = 359.15f;
					Local_84.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_84.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_84.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_84.f_43[0] = 247.4892f;
					Local_84.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_84.f_43[1] = 66.129f;
					Local_84.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_84.f_43[2] = 340.0713f;
					Local_84.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_84.f_43[3] = 245.7466f;
					Local_84.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_84.f_148[0] = 252.6017f;
					Local_84.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_84.f_148[1] = 245.262f;
					Local_84.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_84.f_148[2] = 44.7945f;
					Local_84.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_84.f_148[3] = 255.6518f;
					Local_84.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_84.f_148[4] = 124.8391f;
					Local_84.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_84.f_148[5] = 188.9979f;
					Local_84.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_84.f_148[6] = 159.3613f;
					Local_84.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_84.f_148[7] = 5.7762f;
					Local_84.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_84.f_148[8] = 89.3388f;
					Local_84.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_84.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_84.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_84.f_43[0] = 310.6241f;
					Local_84.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_84.f_43[1] = 166.0191f;
					Local_84.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_84.f_43[2] = 343.1715f;
					Local_84.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_84.f_43[3] = 342.4984f;
					Local_84.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_84.f_148[0] = 248.8594f;
					Local_84.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_84.f_148[1] = 195.7758f;
					Local_84.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_84.f_148[2] = 28.6127f;
					Local_84.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_84.f_148[3] = 296.7476f;
					Local_84.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_84.f_148[4] = 240.9422f;
					Local_84.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_84.f_148[5] = 2.473f;
					Local_84.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_84.f_148[6] = 343.6776f;
					Local_84.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_84.f_148[7] = 0.2495f;
					Local_84.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_84.f_148[8] = 72.7889f;
					Local_84.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_84.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_84.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_84.f_43[0] = 351.0324f;
					Local_84.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_84.f_43[1] = 3.5452f;
					Local_84.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_84.f_43[2] = 7.3237f;
					Local_84.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_84.f_43[3] = 332.0844f;
					Local_84.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_84.f_148[0] = 2.6416f;
					Local_84.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_84.f_148[1] = 171.8638f;
					Local_84.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_84.f_148[2] = 257.0332f;
					Local_84.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_84.f_148[3] = 91.7869f;
					Local_84.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_84.f_148[4] = 4.2016f;
					Local_84.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_84.f_148[5] = 339.729f;
					Local_84.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_84.f_148[6] = 359.2033f;
					Local_84.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_84.f_148[7] = 333.6298f;
					Local_84.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_84.f_148[8] = 73.2788f;
					Local_84.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_84.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_84.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_84.f_43[0] = 42.1535f;
					Local_84.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_84.f_43[1] = 315.0261f;
					Local_84.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_84.f_43[2] = 1.2527f;
					Local_84.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_84.f_43[3] = 1.9403f;
					Local_84.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_84.f_148[0] = 352.9674f;
					Local_84.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_84.f_148[1] = 88.8285f;
					Local_84.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_84.f_148[2] = 177.2297f;
					Local_84.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_84.f_148[3] = 273.1487f;
					Local_84.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_84.f_148[4] = 225.394f;
					Local_84.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_84.f_148[5] = 175.5423f;
					Local_84.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_84.f_148[6] = 191.1842f;
					Local_84.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_84.f_148[7] = 269.6831f;
					Local_84.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_84.f_148[8] = 29.4203f;
					Local_84.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_84.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_84.f_255 != -1)
	{
		return Local_84.f_255;
	}
	if (Local_84.f_278 == 0)
	{
		return ((4 * Global_262145.f_10378) + Global_262145.f_10379);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_84.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_84.f_278)
			{
				iVar0 = (iVar0 + ((Local_84.f_291[iVar1] * iVar4) + Local_84.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_84.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_84.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_84.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_84.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_754())
			{
				iVar0 = Global_262145.f_11560;
			}
			else
			{
				iVar0 = Global_262145.f_11280;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_754())
			{
				iVar0 = Global_262145.f_11561;
			}
			else
			{
				iVar0 = Global_262145.f_11281;
			}
			break;
		
		case 5:
			if (func_754())
			{
				iVar0 = Global_262145.f_11562;
			}
			else
			{
				iVar0 = Global_262145.f_11282;
			}
			break;
		
		case 4:
			if (func_754())
			{
				iVar0 = Global_262145.f_11559;
			}
			else
			{
				iVar0 = Global_262145.f_11279;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_754())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_84.f_252 = 0;
	Local_84.f_302 = 0;
	Local_84.f_317 = 0;
	Local_84.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_84.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_84.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_84.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_84.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_84.f_318 == 0 || Local_84.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_84.f_317 >= func_38())
		{
			iVar0 = Local_84.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_84.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_84.f_317 == 2)
	{
		iVar0 = Local_84.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_84.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_84.f_318 == func_39())
	{
		return 0;
	}
	if (Local_84.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(Local_84.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_84.f_239) && unk_0x3550A1A1A4D8BAFF(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_84.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_84.f_48[(20 + iParam0)]), 22, Local_84.f_239, Local_84.f_117[iVar3 /*3*/], Local_84.f_148[iVar3], 1, 1, 1))
					{
						unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), iLocal_98);
						unk_0xEA44C65D5434D223(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1, 0);
						unk_0xD30B1DC5605A4D93(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0xD82D50E4AC0D46B9(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0xFA13CA7EC498AD09(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), round(fVar6));
						unk_0x095503B9F1CAC814(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0xEA480A62F5D29812(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 2);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 0, 1);
						unk_0x2BDB866C1791F9D7(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0x7BC3A9305442B7FD(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 42, 1);
						unk_0xC595907BB71C921D(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), round((200f * Global_262145.f_154)), 0);
						unk_0x15EEBCDA5164F71B(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0xB8FD45B9686D7177(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 1);
						unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0x5E7C0A485B91DB87(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = round((fVar5 * to_float(iVar4)));
						unk_0xC595907BB71C921D(unk_0x8A437068C87289B7(Local_84.f_48[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar7)], func_90(iVar7)))
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_272[func_91(iVar7)]), func_90(iVar7));
						}
						Local_84.f_247++;
						Local_84.f_317++;
						Local_84.f_250++;
						Local_84.f_318++;
						func_106(&(Local_84.f_414[iVar7 /*2*/]));
						func_20(&(Local_84.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_84.f_364[iVar7 /*2*/])))
						{
							func_106(&(Local_84.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_552[iVar3 /*2*/]), 0, 0);
						unk_0x7C25F5BCDD3E96FF(unk_0x8A437068C87289B7(Local_84.f_48[iVar7]), 1, iLocal_97);
					}
				}
			}
		}
	}
	if (!unk_0xB7D6400C89373777(Local_84.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_754())
	{
		return Global_262145.f_11548;
	}
	return Global_262145.f_11268;
}

float func_53()
{
	if (func_754())
	{
		return Global_262145.f_11550;
	}
	return Global_262145.f_11270;
}

int func_54(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	iVar0 = unk_0x0FDCFECB2EF2BC1C(iParam1, uParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0x818C6D67AB3F266B(iVar0);
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(iVar0, iParam7);
		if (unk_0x895470BB92940DC6(iVar0))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405077.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x95F3ABD15748A3D6(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x091D6114DC63264E(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam11)
	{
		if (unk_0x1009A332C2986B7C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_857(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_58(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_857(iVar1, 1, 1))
		{
			if (!func_16(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x0BABEFEA577FCFA4(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam6 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x0BABEFEA577FCFA4(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590908[iVar0 /*874*/].f_844) && !func_60(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2453009.f_19;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam6 == 0)
		{
			if (func_857(iVar1, bParam2, bParam3))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam5 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_59(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_67(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_66(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_64(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_5();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_66(iParam0) };
		Global_2518266 = { func_66(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 10);
	if (!func_69(Local_84.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_552[iVar0 /*2*/])) || (func_22(&(Local_552[iVar0 /*2*/])) && func_19(&(Local_552[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_84.f_279 == 0)
	{
		iVar0 = Local_84.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_84.f_279)
		{
			iVar0 = (iVar0 + Local_84.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_84.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_84.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_84.f_242 < iVar0)
	{
	}
	if (Local_84.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_84.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_84.f_240) && func_70(Local_84.f_239))
	{
		if (func_74(iParam0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_84.f_245, iParam0))
			{
				Local_84.f_249++;
				Local_84.f_251++;
				Local_84.f_252++;
				unk_0xC664C0067EEAB8D1(&(Local_84.f_245), iParam0);
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 19))
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (unk_0x3550A1A1A4D8BAFF(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_109(Local_84.f_73[iParam0]) && unk_0x234B68AC2E35ED5A(Local_84.f_245, iParam0))
	{
		if (func_79(Local_84.f_73[iParam0]))
		{
			if (Local_84.f_116 <= 0)
			{
				if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_84.f_116 = 2;
				}
				else
				{
					Local_84.f_116 = unk_0x3CF5ADE443D18312(unk_0x854C404AEB476240(Local_84.f_73[iParam0])) + 1;
					if (Local_84.f_116 > 4)
					{
						Local_84.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_84.f_116)
			{
				if (!unk_0xB7D6400C89373777(Local_84.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_84.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_84.f_48[(iParam0 * 4 + iVar6)]), Local_84.f_73[iParam0], 22, Local_84.f_239, iVar4, 1, 1, 1))
						{
							unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), iLocal_98);
							unk_0xEA44C65D5434D223(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0xD30B1DC5605A4D93(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xFA13CA7EC498AD09(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_77())
							{
								unk_0xFA13CA7EC498AD09(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0xFA13CA7EC498AD09(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
							unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x095503B9F1CAC814(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xEA480A62F5D29812(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x2BDB866C1791F9D7(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x7BC3A9305442B7FD(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xC595907BB71C921D(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), round((200f * Global_262145.f_154)), 0);
							unk_0x15EEBCDA5164F71B(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 42, 1);
							unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0x472BD05C38FE7A6B(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xEA38A0CECA79D07B(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x4D63B727F53E09E9(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x087B9DEC55AB5B29(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
									unk_0xA1217FA3D209873F(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x4A0E99CBD1247EDA(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_11532;
								uVar1 = Global_262145.f_11533;
								uVar2 = Global_262145.f_11534;
								uVar3 = Global_262145.f_11535;
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0x48E10529AEAE00F9(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0]))))
							{
								unk_0x087B9DEC55AB5B29(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
								unk_0xA1217FA3D209873F(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_11532;
								uVar1 = Global_262145.f_11533;
								uVar2 = Global_262145.f_11534;
								uVar3 = Global_262145.f_11535;
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0x817234E2BB671752(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 26, uVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar7)], func_90(iVar7)))
							{
								unk_0xC664C0067EEAB8D1(&(Local_84.f_272[func_91(iVar7)]), func_90(iVar7));
							}
							unk_0xB8FD45B9686D7177(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x5249BC3946DCDA75(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x7C25F5BCDD3E96FF(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_97);
							Local_84.f_250++;
							func_106(&(Local_84.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_84.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_84.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_84.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_84.f_116)
			{
				if (!unk_0xB7D6400C89373777(Local_84.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_84.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0x2C10A11A684CFE96(unk_0x8A437068C87289B7(Local_84.f_48[(iParam0 * 4 + iVar6)]), unk_0x854C404AEB476240(Local_84.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_754())
	{
		return Global_262145.f_11551;
	}
	return Global_262145.f_11271;
}

int func_77()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(uParam1))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0x8A437068C87289B7(*uParam0), iParam7);
		if (unk_0x895470BB92940DC6(unk_0x8A437068C87289B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	int iVar12;
	
	iVar0 = func_98();
	Local_84.f_240 = func_43(iVar0);
	if (!unk_0xB7D6400C89373777(Local_84.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_84.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0xB7D6400C89373777(Local_84.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_84.f_240) && !unk_0x234B68AC2E35ED5A(Local_84.f_245, iParam0))
		{
			fVar8 = 300f;
			if (unk_0xE267416B80E7921F(Local_84.f_240) || unk_0x48E10529AEAE00F9(Local_84.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (unk_0x48E10529AEAE00F9(Local_84.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_84.f_242)
			{
				if (func_87(iVar9))
				{
					func_86(Local_84.f_240, iVar9, &Var10, &uVar11);
					if (!func_69(Var10, 0f, 0f, 0f, 0))
					{
						if (func_55(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							Var4 = { Var10 };
							uVar5 = uVar11;
							iVar6 = 1;
							func_8(&(Local_84.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_84.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				iVar12 = 1;
				if (unk_0xE267416B80E7921F(Local_84.f_240) || unk_0x48E10529AEAE00F9(Local_84.f_240))
				{
					iVar12 = 0;
				}
				if (func_85(iParam0))
				{
					if (func_82(&(Local_84.f_73[iParam0]), Local_84.f_240, Var4, uVar5, 1, 1, 1, 0, iVar12, 1, 0, 0, 0, 0))
					{
						unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 2);
						unk_0x9467B0584C318BAD(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1);
						unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0, 0);
						unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 2);
						unk_0x89E171705EA920DA(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1, 1, 0);
						unk_0x821EBB8C473B5AC5(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
						unk_0x040C47F5DFA52DB2(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
						if (unk_0xE267416B80E7921F(Local_84.f_240))
						{
							unk_0x4B43AFBD2CEE7724(unk_0x854C404AEB476240(Local_84.f_73[iParam0]));
							unk_0x0B87A8220B73252D(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1);
							unk_0xC5DE9743D6DA2C15(unk_0x854C404AEB476240(Local_84.f_73[iParam0]));
							unk_0x8B58E7AC53EED9F1(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
						}
						else if (unk_0x48E10529AEAE00F9(Local_84.f_240))
						{
							unk_0x0DF115F2DFB9476F(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 3);
							unk_0x8B58E7AC53EED9F1(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
							unk_0x0B87A8220B73252D(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1);
							unk_0xC5DE9743D6DA2C15(unk_0x854C404AEB476240(Local_84.f_73[iParam0]));
							unk_0x49CB177958B472A8(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 30f);
							unk_0xA4099DE1318CC227(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1);
							unk_0x587EA57CAF325AC7(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0xC595907BB71C921D(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), round(fVar1), 0);
						}
						else
						{
							unk_0x46EDFC827DC67D89(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = to_float(func_81());
							unk_0xC595907BB71C921D(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), round(fVar1), 0);
							unk_0xF8E5239A2E6E0754(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), round(fVar1));
							unk_0xAFB5FBF26893A713(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), fVar1);
							unk_0xFA657401A11FF221(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), fVar1);
							unk_0xEBF08082D648C482(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), fVar1);
							unk_0x1F7ED1C13023483B(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0xC083602F50680BA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), fVar1);
							unk_0x487E714EBA43B50F(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_84.f_336[iParam0 /*2*/])))
						{
							func_106(&(Local_84.f_336[iParam0 /*2*/]));
						}
						unk_0xC664C0067EEAB8D1(&(Local_84.f_253), iParam0);
						unk_0x191DDA30577F440A(&(Local_84.f_245), iParam0);
						unk_0x7C25F5BCDD3E96FF(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 1, iLocal_97);
						if (unk_0x234B68AC2E35ED5A(Local_84.f_271, iParam0))
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_271), iParam0);
						}
						if (unk_0x234B68AC2E35ED5A(Local_84.f_303, iParam0))
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_303), iParam0);
						}
						if (Local_84.f_240 == joaat("hydra") || Local_84.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0xB7D6400C89373777(Local_84.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_754())
	{
		return Global_262145.f_11549;
	}
	return Global_262145.f_11269;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F1DFD4C1BC6827A(iParam1))
	{
		return 0;
	}
	if (!unk_0xA8911798335DCDA2(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7D390F8F682127B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0x419E13582192CFEA(iVar1))
	{
		*uParam0 = unk_0x431E33F39AEFC4C4(iVar1);
		Global_2544210.f_6610 = iVar1;
		if (unk_0xB7D6400C89373777(*uParam0))
		{
			if (bParam13)
			{
				unk_0x6DA4D1FB7DCE9FD8(iVar1, 1);
			}
			unk_0x8B58E7AC53EED9F1(iVar1, iParam8);
			if (unk_0x895470BB92940DC6(iVar1))
			{
				if (bParam6)
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
				}
				else
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x84CE5E7CD3A7E197(*uParam0, unk_0x1146A9AE09CE2B14(), 1);
				}
			}
			unk_0x2AC1ECA957EB9158(iVar1, iParam7);
			unk_0xF4B0F1D16C5ECDB7(iVar1, 1);
			if (bParam10)
			{
				unk_0xD1A5295FE7ADF001(iVar1);
				unk_0x65FFB0A9D15E084E(iVar1, 5, 5, 1f);
			}
			func_83(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
	{
		if ((Global_2405077.f_2919[1 /*6*/].f_5 == iParam3 && Global_2405077.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2405077.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405077.f_2919[iVar0 /*6*/] = { Global_2405077.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405077.f_2919[1 /*6*/] = { Param0 };
		Global_2405077.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_84(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0BCA9ADE67DF9DD8((Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (unk_0x234B68AC2E35ED5A(Local_87[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0x48E10529AEAE00F9(iParam0) || unk_0xE267416B80E7921F(iParam0));
	switch (Local_84.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_84.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_84.f_159[iParam1 /*3*/] };
				*uParam3 = Local_84.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_84.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_84.f_159[iParam1 /*3*/] };
				*uParam3 = Local_84.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_84.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_84.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_84.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_84.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_84.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_84.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_84.f_207[iParam0 /*2*/]), Local_84.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_84.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_84.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()
{
	return Local_84.f_291[Local_84.f_279];
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -893196843;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam1);
	}
}

int func_90(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_91(iParam0) * 31);
}

int func_91(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

void func_92(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		unk_0x1AD5BCFEC31BB8D9(uParam0);
		bVar0 = true;
	}
	if (unk_0x575B7C28D81C0B4D(uParam0->f_1))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x419E13582192CFEA(uParam0->f_7))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_7, 0))
		{
			if (unk_0x91D137360A62E65D(uParam0->f_7))
			{
				unk_0x3AC990743D2354F7(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_93(int iParam0)
{
	if (Local_84.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iParam0)], func_90(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 0);
	if (unk_0xE50EB54E0F21BED0(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0x234B68AC2E35ED5A(Local_84.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0x234B68AC2E35ED5A(Local_84.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_84.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_84.f_27 == joaat("hydra"))
		{
			if (unk_0x234B68AC2E35ED5A(Local_84.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -472621949;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam1);
	}
}

int func_98()
{
	return Local_84.f_280[Local_84.f_279];
}

void func_99(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 2009359150;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam0);
	}
}

int func_100(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0))
			{
				if (unk_0xFE475C49222245C5(iVar2, unk_0x854C404AEB476240(Local_84.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0xA0C4009A98ED2161(iVar2, unk_0x854C404AEB476240(Local_84.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -748817352;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iParam0]));
	if (unk_0x48E10529AEAE00F9(iVar0) || unk_0xE267416B80E7921F(iVar0))
	{
		return !unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
	}
	return !unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_73[iParam0]), 0);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_84.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_84.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_84.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_857(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_105()
{
	if (func_754())
	{
		return Global_262145.f_11542;
	}
	return Global_262145.f_11265;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_857(iVar2, 1, 0))
		{
			if (!unk_0xF41EB7643E61A928(unk_0xD56332194D622ECE(iVar2), iParam0, 0))
			{
				if (unk_0x7C3E030BC3ED6671(iVar2) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) || !bParam2)
				{
					if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam1)
					{
						unk_0x191DDA30577F440A(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_109(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_110(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_110(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_566))
	{
		func_20(&uLocal_566, 0, 0);
		return;
	}
	if (!func_19(&uLocal_566, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_84.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0x191DDA30577F440A(&(Local_84.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_84.f_12 != 0)
	{
		return Local_84.f_12;
	}
	if (!func_754())
	{
		Local_84.f_12 = 1;
		return Local_84.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar0);
		if (unk_0x8CFC2F41A749E236(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_84.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_84.f_12 = 3;
	}
	else
	{
		Local_84.f_12 = 4;
	}
	return Local_84.f_12;
}

int func_113()
{
	return Global_262145.f_11290;
}

int func_114()
{
	return Global_262145.f_11289;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_84.f_256[iVar0], Local_84.f_22[iVar0]);
		}
		else if (Local_84.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
			func_118(iVar0);
			if (Local_87[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_87[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_87[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_87[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_84.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_84.f_465[iVar1 /*4*/].f_1 > Local_84.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_84.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_84.f_465[iVar1 /*4*/];
					uVar4 = Local_84.f_465[iVar1 /*4*/].f_2;
					Local_84.f_465[iVar1 /*4*/].f_1 = Local_84.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_84.f_465[iVar1 /*4*/] = Local_84.f_465[(iVar1 - 1) /*4*/];
					Local_84.f_465[iVar1 /*4*/].f_2 = Local_84.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_84.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_84.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_84.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_84.f_465[iParam2 /*4*/] = iParam0;
	Local_84.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_84.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_84.f_465[iParam0 /*4*/] = -1;
	Local_84.f_465[iParam0 /*4*/].f_2 = -1;
	Local_84.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_84.f_594[iVar1 /*4*/].f_1 > Local_84.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_84.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_84.f_594[iVar1 /*4*/];
					uVar4 = Local_84.f_594[iVar1 /*4*/].f_2;
					Local_84.f_594[iVar1 /*4*/].f_1 = Local_84.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_84.f_594[iVar1 /*4*/] = Local_84.f_594[(iVar1 - 1) /*4*/];
					Local_84.f_594[iVar1 /*4*/].f_2 = Local_84.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_84.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_84.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_84.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_84.f_594[iParam0 /*4*/] = iParam0;
	Local_84.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_84.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_84.f_594[iParam0 /*4*/] = -1;
	Local_84.f_594[iParam0 /*4*/].f_1 = -1;
	Local_84.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_123(iVar1))
		{
			func_106(&(Local_84.f_5));
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_13, iVar1))
		{
			func_106(&(Local_84.f_5));
			return 0;
		}
		else if (func_4(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_84.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_22(&(Local_84.f_5)))
	{
		func_20(&(Local_84.f_5), 0, 0);
	}
	else if (func_19(&(Local_84.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_109(Local_84.f_7[iParam0]))
	{
		if (unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_754())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			if (func_109(Local_84.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_84.f_12)
	{
		Local_84.f_12 = iVar1;
	}
	if (Local_84.f_12 <= 1)
	{
		unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 8);
		if (!func_109(Local_84.f_7[0]))
		{
			if (func_109(Local_84.f_7[iVar2]))
			{
				func_25(&(Local_84.f_7[0]));
				Local_84.f_7[0] = Local_84.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_754())
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]))
		{
			if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_84.f_15 != false;
			}
			else
			{
				bVar0 = Local_84.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x234B68AC2E35ED5A(Local_84.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_84.f_413 == -1)
		{
			Local_84.f_413 = func_127();
		}
		if (!func_22(&(Local_84.f_326)))
		{
			func_20(&(Local_84.f_326), 0, 0);
		}
		else if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 4))
		{
			if ((Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0)) < 0)
			{
				unk_0x191DDA30577F440A(&(Local_84.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_84.f_326)))
	{
		func_106(&(Local_84.f_326));
		Local_84.f_413 = (Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

var func_127()
{
	if (func_754())
	{
		return Global_262145.f_11552;
	}
	return Global_262145.f_11272;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_100[iVar0] = 0;
		iLocal_86[iVar0] = -2;
		iLocal_101[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_84 != 4)
	{
		iLocal_91 = 0;
		while (iLocal_91 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_91)))
			{
				iVar7 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_91));
				if (!func_16(iVar7, 0))
				{
					if (Local_87[iLocal_91 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_135(iLocal_91, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_134(iLocal_91, iVar0);
						iVar0++;
					}
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_87[iLocal_91 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_133(iLocal_91, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0x234B68AC2E35ED5A(Local_87[iLocal_91 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(iLocal_91, iVar7);
					if (func_857(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_84.f_17[iVar0] == func_5())
							{
								if (unk_0x234B68AC2E35ED5A(Local_87[iLocal_91 /*18*/].f_2, (0 + iVar0)))
								{
									Local_84.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_84.f_17[iVar0] == iVar7 && Local_84.f_241 == 0)
							{
								if (!unk_0x234B68AC2E35ED5A(Local_87[iLocal_91 /*18*/].f_2, (0 + iVar0)))
								{
									Local_84.f_17[iVar0] = func_5();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_91++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_13, iVar0))
		{
			if (iLocal_100[iVar0] == func_130() && func_123(iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_84.f_13), iVar0);
			}
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_14, iVar0))
			{
				if (iLocal_100[iVar0] >= 1 && func_123(iVar0))
				{
					unk_0x191DDA30577F440A(&(Local_84.f_14), iVar0);
				}
			}
			else if (iLocal_100[iVar0] == 0 || !func_123(iVar0))
			{
				if (unk_0x234B68AC2E35ED5A(Local_84.f_14, iVar0))
				{
					unk_0xC664C0067EEAB8D1(&(Local_84.f_14), iVar0);
					if (iLocal_100[iVar0] == 0)
					{
						if (Local_84.f_241 >= 1)
						{
							if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
							{
								func_25(&(Local_84.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_15, iVar0) && func_123(iVar0))
			{
				if (iLocal_100[iVar0] >= 2)
				{
					unk_0x191DDA30577F440A(&(Local_84.f_15), iVar0);
				}
			}
			else if (iLocal_100[iVar0] <= 1 || !func_123(iVar0))
			{
				if (unk_0x234B68AC2E35ED5A(Local_84.f_15, iVar0))
				{
					unk_0xC664C0067EEAB8D1(&(Local_84.f_15), iVar0);
				}
			}
		}
		else if (iLocal_100[iVar0] < func_130() || !func_123(iVar0))
		{
			unk_0xC664C0067EEAB8D1(&(Local_84.f_13), iVar0);
		}
		if (Local_84.f_266[iVar0] != iLocal_100[iVar0])
		{
			Local_84.f_266[iVar0] = iLocal_100[iVar0];
			if (Local_84.f_241 == 1)
			{
				if (Local_84.f_266[iVar0] == 0)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_84.f_616, iVar0))
					{
						unk_0x191DDA30577F440A(&(Local_84.f_616), iVar0);
					}
				}
			}
		}
		if (Local_84.f_241 == 0)
		{
			if (func_754())
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
				{
					iVar3 = unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iVar0]));
					if (iLocal_100[iVar0] >= func_129(iVar3) && func_123(iVar0))
					{
						iLocal_101[iVar0] = 1;
					}
				}
			}
		}
		if (Local_84.f_241 == 1)
		{
			if (Local_84.f_256[iVar0] != iLocal_86[iVar0])
			{
				if (iLocal_86[iVar0] >= 0)
				{
					if (iLocal_86[iVar0] > Local_84.f_256[iVar0])
					{
						Local_84.f_256[iVar0] = iLocal_86[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_84.f_256[iVar0] - iLocal_86[iVar0]);
						if (Local_84.f_261[iVar0] != iVar8)
						{
							Local_84.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0x191DDA30577F440A(&(Local_84.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_84.f_241 == 0)
	{
		if (func_754())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_101[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0xC664C0067EEAB8D1(&(Local_84.f_3), 9);
			}
		}
	}
	if (Local_84.f_241 == 0)
	{
		if (!func_22(&(Local_84.f_360)))
		{
			func_20(&(Local_84.f_360), 0, 0);
		}
		else if (func_19(&(Local_84.f_360), 5000, 0))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
			{
				if (func_754())
				{
					if (Local_84.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0x191DDA30577F440A(&(Local_84.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0x191DDA30577F440A(&(Local_84.f_3), 14);
					}
				}
				else if (Local_84.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0x191DDA30577F440A(&(Local_84.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_84.f_614)
	{
		Local_84.f_614 = iVar1;
	}
	else
	{
		Local_84.f_613 = (Local_84.f_614 - iVar1);
	}
	if (iVar2 > Local_84.f_615)
	{
		Local_84.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()
{
	return Local_84.f_28;
}

void func_131(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_16, iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 1);
			unk_0x191DDA30577F440A(&(Local_84.f_16), iParam0);
		}
		else if (Local_84.f_241 >= 1)
		{
			if (Local_87[iParam0 /*18*/].f_1 == 0)
			{
				func_132(iParam1, 1);
				unk_0x191DDA30577F440A(&(Local_84.f_16), iParam0);
			}
			else if (Local_87[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar1]))
					{
						if (func_109(Local_84.f_7[iVar1]))
						{
							if (unk_0xF41EB7643E61A928(unk_0xD56332194D622ECE(iParam1), unk_0x854C404AEB476240(Local_84.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 1);
					unk_0x191DDA30577F440A(&(Local_84.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_84.f_241 < 1)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 0);
			unk_0xC664C0067EEAB8D1(&(Local_84.f_16), iParam0);
		}
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			unk_0xFF9949B46A7C6F95(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iParam1)], func_90(iParam1)))
	{
		if (unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_3[func_91(iParam1)], func_90(iParam1)))
		{
			unk_0x191DDA30577F440A(&(Local_84.f_272[func_91(iParam1)]), func_90(iParam1));
			if (Local_87[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iParam1]))
			{
				if (!func_31(Local_84.f_48[iParam1]))
				{
					if (!func_94(iParam1))
					{
						unk_0xC664C0067EEAB8D1(&(Local_84.f_272[func_91(iParam1)]), func_90(iParam1));
					}
					else if (!unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0xC664C0067EEAB8D1(&(Local_84.f_272[func_91(iParam1)]), func_90(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iParam1))
	{
		if (unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0x191DDA30577F440A(&(Local_84.f_271), iParam1);
			if (Local_87[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x234B68AC2E35ED5A(Local_84.f_303, iParam1))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_253, iParam1))
				{
					Local_84.f_251 = (Local_84.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_84.f_252 > 0)
						{
							Local_84.f_302++;
							func_97(iParam1, func_104(1));
						}
					}
					unk_0x191DDA30577F440A(&(Local_84.f_253), iParam1);
				}
				if (func_22(&(Local_84.f_336[iParam1 /*2*/])))
				{
					func_106(&(Local_84.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_84.f_73[iParam1]));
				unk_0xC664C0067EEAB8D1(&(Local_84.f_303), iParam1);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_100[iParam1]++;
		if (iLocal_86[iParam1] < 0)
		{
			if (Local_87[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_84.f_261[iParam1] > 0)
				{
					iLocal_86[iParam1] = Local_84.f_261[iParam1];
				}
				else
				{
					iLocal_86[iParam1] = 0;
				}
			}
		}
		iLocal_86[iParam1] = (iLocal_86[iParam1] + Local_87[iParam0 /*18*/].f_8);
		if (Local_84.f_241 >= 1)
		{
			if (Local_84.f_22[iParam1] == func_5())
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iParam1]))
				{
					if (func_109(Local_84.f_7[iParam1]))
					{
						iVar1 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0x72D30262CF8C8603(iVar1))
							{
								iVar0 = unk_0xCB567ED25393C1DF(iVar1);
								if (iVar0 == iParam2)
								{
									Local_84.f_22[iParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_319, iParam1))
		{
			if (Local_87[iParam0 /*18*/].f_10 > -1)
			{
				unk_0x191DDA30577F440A(&(Local_84.f_319), iParam1);
				func_20(&(Local_84.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_84.f_22[iParam1] != func_5())
	{
		if (!unk_0x8CFC2F41A749E236(Local_84.f_22[iParam1]))
		{
			iVar0 = func_136(iParam1, 1);
			if (iVar0 != func_5())
			{
				Local_84.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_84.f_22[iParam1] = func_5();
			}
		}
		else if (func_16(Local_84.f_22[iParam1], 0))
		{
			Local_84.f_22[iParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = unk_0xD56332194D622ECE(Local_84.f_22[iParam1]);
			if (!unk_0xECEC7528A52B4EE8(iVar1))
			{
				if (func_109(Local_84.f_7[iParam1]))
				{
					if (!unk_0xF41EB7643E61A928(iVar1, unk_0x854C404AEB476240(Local_84.f_7[iParam1]), 0))
					{
						iVar0 = func_136(iParam1, 1);
						if (iVar0 != func_5())
						{
							Local_84.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_84.f_22[iParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_87[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0x234B68AC2E35ED5A(Local_87[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar3));
							}
							else
							{
								iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar3));
								if (func_109(Local_84.f_7[iParam0]))
								{
									iVar2 = unk_0xD56332194D622ECE(iVar1);
									if (!unk_0xECEC7528A52B4EE8(iVar2))
									{
										if (unk_0xF41EB7643E61A928(iVar2, unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -851196171;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	iVar1 = func_138(1, 1);
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iVar1);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_857(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_140(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_141()
{
	func_112();
	if (func_70(Local_84.f_27))
	{
		if (func_142())
		{
			unk_0x824F744352C8BC82(Local_84.f_27);
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_84.f_12)
	{
		if (!unk_0xB7D6400C89373777(Local_84.f_7[iVar0]))
		{
			if (func_70(Local_84.f_27))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_244, iVar0))
				{
					unk_0x6AF7EE4DD9F8B944(Local_84.f_30[iVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0x191DDA30577F440A(&(Local_84.f_244), iVar0);
				}
				if (func_82(&(Local_84.f_7[iVar0]), Local_84.f_27, Local_84.f_30[iVar0 /*3*/], Local_84.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0xFC4706297CB9D7D2(unk_0xD93F965CFAC1D06A(Local_84.f_7[iVar0]), 1, 1);
					unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					unk_0x788A8B142314D1E9(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
					unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0, 0);
					unk_0xA2C015B68CE01357(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
					unk_0x0B87A8220B73252D(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					unk_0xC5DE9743D6DA2C15(unk_0x854C404AEB476240(Local_84.f_7[iVar0]));
					unk_0x89E171705EA920DA(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1, 1, 0);
					unk_0x8B58E7AC53EED9F1(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					unk_0x821EBB8C473B5AC5(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
					if (unk_0xE267416B80E7921F(Local_84.f_27) || unk_0x48E10529AEAE00F9(Local_84.f_27))
					{
						unk_0x1F7ED1C13023483B(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
						if (unk_0xE267416B80E7921F(Local_84.f_27))
						{
							fVar1 = to_float(func_145());
						}
						else if (unk_0x48E10529AEAE00F9(Local_84.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else
						{
							fVar1 = to_float(func_143());
						}
						unk_0xC595907BB71C921D(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), round(fVar1), 0);
						unk_0xF8E5239A2E6E0754(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), round(fVar1));
						unk_0xAFB5FBF26893A713(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						unk_0xFA657401A11FF221(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						unk_0xEBF08082D648C482(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						if (unk_0x48E10529AEAE00F9(Local_84.f_27))
						{
							unk_0xA4099DE1318CC227(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
						}
						if (unk_0xE267416B80E7921F(Local_84.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0xC083602F50680BA4(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
							unk_0x487E714EBA43B50F(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xE267416B80E7921F(Local_84.f_27))
						{
							fVar1 = to_float(func_145());
						}
						else if (unk_0x48E10529AEAE00F9(Local_84.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else
						{
							fVar1 = to_float(func_143());
						}
						unk_0xC595907BB71C921D(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), round(fVar1), 0);
						unk_0xF8E5239A2E6E0754(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), round(fVar1));
						unk_0xAFB5FBF26893A713(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						unk_0xFA657401A11FF221(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
						unk_0xEBF08082D648C482(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), fVar1);
					}
					unk_0xAC2B08493719B297(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					if (Local_84.f_27 == joaat("savage"))
					{
					}
					if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
					{
						if (unk_0x5B38E054B758C032(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x05351AF95891EE5C(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), "MPBitset");
						}
						unk_0x191DDA30577F440A(&iVar2, 10);
						unk_0x191DDA30577F440A(&iVar2, 15);
						unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0xE6907D2E2D8505A3(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0, iLocal_97);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0xE6907D2E2D8505A3(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0, Global_1574988[iVar3]);
						iVar3++;
					}
					unk_0x78683FED1CF3DDE3(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0, 0);
					unk_0x522DE64D1BE35BAD(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
					unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1);
					unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), false);
					unk_0x040C47F5DFA52DB2(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_84.f_12)
	{
		if (!unk_0xB7D6400C89373777(Local_84.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_143()
{
	if (func_754())
	{
		return Global_262145.f_11546;
	}
	return Global_262145.f_11285;
}

var func_144()
{
	if (func_754())
	{
		return Global_262145.f_11547;
	}
	return Global_262145.f_11286;
}

var func_145()
{
	if (func_754())
	{
		return Global_262145.f_11545;
	}
	return Global_262145.f_11284;
}

bool func_146()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_84.f_362)))
	{
		func_20(&(Local_84.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_84.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 10))
	{
		if (func_160(&iVar0))
		{
			if (iVar0 < func_159())
			{
				unk_0x191DDA30577F440A(&(Local_84.f_3), 10);
			}
			else
			{
				iVar1 = unk_0xB36B8558948EA7A8(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11540) && !Global_262145.f_11538) || Global_262145.f_11539)
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 8);
					unk_0x191DDA30577F440A(&(Local_84.f_3), 10);
				}
				else
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 10);
				}
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 10))
	{
		if (Local_84.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 13))
		{
			if (func_155())
			{
				if (!func_153(129, Local_84.f_1, Local_84.f_2, 0))
				{
					if (func_147())
					{
						unk_0x191DDA30577F440A(&(Local_84.f_3), 13);
					}
					else
					{
						Local_84.f_29 = -1;
					}
				}
				else
				{
					Local_84.f_29 = -1;
				}
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(Local_84.f_3, 13);
}

int func_147()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_148(Local_84.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_84.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_148(struct<3> Param0, float fParam1)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_2425308.f_354.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2425308.f_354[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = unk_0x15173FB88ABC94F9(&(Global_2425308.f_354[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2425308.f_354.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	Var4 = { 0f, 0f, 0f };
	Var5 = { Param0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1311741)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2359721[iVar2 /*26*/].f_12, 11))
		{
			Var4 = { Global_2359721[iVar2 /*26*/].f_3 };
			Var5.f_2 = Var4.f_2;
			if (unk_0x0BABEFEA577FCFA4(Var4, Var5, 1) < fParam1)
			{
				Var7 = { Global_2359721[iVar2 /*26*/].f_15 };
				iVar8 = func_149(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (unk_0xAB6A270F84A8781E(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_152(uParam0->f_1))
	{
		if (func_151(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x234B68AC2E35ED5A(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0x234B68AC2E35ED5A(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x234B68AC2E35ED5A(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0x234B68AC2E35ED5A(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_151(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return iParam0 == 9999;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_154(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8283)
		{
			if (Global_2511173.f_136[iVar0 /*2*/] == iVar1 && Global_2511173.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_155()
{
	if (func_157(&(Local_84.f_27)))
	{
		if (Local_84.f_4)
		{
			func_156();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_1679103 = 1;
	if (!unk_0x234B68AC2E35ED5A(Global_2553359, 0))
	{
		unk_0x191DDA30577F440A(&Global_2553359, 0);
		unk_0x191DDA30577F440A(&Global_1679104, 0);
	}
	if (!unk_0x234B68AC2E35ED5A(Global_2553359, 1))
	{
		unk_0x191DDA30577F440A(&Global_2553359, 1);
		unk_0x191DDA30577F440A(&Global_1679104, 1);
	}
	if (!unk_0x234B68AC2E35ED5A(Global_2553359, 5))
	{
		unk_0x191DDA30577F440A(&Global_2553359, 5);
		unk_0x191DDA30577F440A(&Global_1679104, 5);
	}
	if (unk_0x4336DC3297C47528(-355737150))
	{
		unk_0x1EA8B94F4F446F35(-355737150, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(-580979506))
	{
		unk_0x1EA8B94F4F446F35(-580979506, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(-1426452475))
	{
		unk_0x1EA8B94F4F446F35(-1426452475, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(745417724))
	{
		unk_0x1EA8B94F4F446F35(745417724, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(-1305304906))
	{
		unk_0x1EA8B94F4F446F35(-1305304906, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(-1543175077))
	{
		unk_0x1EA8B94F4F446F35(-1543175077, 0, 0, 0);
	}
	if (unk_0x4336DC3297C47528(-811770997))
	{
		unk_0x1EA8B94F4F446F35(-811770997, 0, 0, 0);
	}
}

int func_157(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_158(joaat("rhino")))
			{
				Local_84.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_158(joaat("hydra")))
			{
				Local_84.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_84.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_158(joaat("savage")))
			{
				Local_84.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_84.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_158(joaat("valkyrie")))
			{
				Local_84.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_158(joaat("buzzard")))
			{
				Local_84.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (!func_754())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11274;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11276;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11275;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11278;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11277;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11554;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11556;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11555;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11558;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11557;
				break;
			}
	}
	return 0;
}

int func_159()
{
	return Global_262145.f_11288;
}

int func_160(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_84.f_334)))
	{
		func_20(&(Local_84.f_334), 0, 0);
	}
	else if (func_19(&(Local_84.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
			{
				if (!func_16(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0)), 0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_161(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x443E2CA72E118E64())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_163()
{
	struct<3> Var0;
	
	if (iLocal_573 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iLocal_573]))
		{
			if (unk_0xB364346471C3B028(Local_84.f_7[iLocal_573]))
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iLocal_573]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_84.f_7[iLocal_573]));
				}
			}
		}
	}
	iLocal_573++;
	if (iLocal_573 >= 4)
	{
		iLocal_573 = 0;
	}
}

void func_164()
{
	if (func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_89, 13))
		{
			unk_0x191DDA30577F440A(&iLocal_89, 13);
			unk_0x2287F6D727F498F6(1, 0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(iLocal_89, 13))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				unk_0x2287F6D727F498F6(0, 0);
				unk_0xC664C0067EEAB8D1(&iLocal_89, 13);
			}
		}
	}
}

void func_165()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	if (func_425())
	{
		func_276(0);
	}
	iVar0 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
	{
		Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (unk_0x8CFC2F41A749E236(iVar0))
		{
			if (unk_0xFCC26BA7572E9F1F(iVar0))
			{
				uVar1 = unk_0x4645C707A0067CB6(iVar0);
				iVar2 = uVar1;
				iVar3 = Local_87[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_200();
						func_197(iVar2);
						break;
					
					case 1:
						func_196();
						func_170();
						func_166(1);
						break;
					
					case 2:
						func_166(0);
						break;
					}
				}
			}
	}
}

void func_166(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_167(Local_84.f_48[iVar0], &(Local_96[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
		}
		else
		{
			func_167(Local_84.f_48[iVar0], &(Local_96[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0);
		}
		if (unk_0x575B7C28D81C0B4D(Local_96[iVar0 /*8*/]))
		{
			unk_0xDD944E3FD2028A48(Local_96[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x72D460C6FC1A44BE(Local_96[iVar0 /*8*/], 1);
			}
		}
		if (unk_0x575B7C28D81C0B4D(Local_96[iVar0 /*8*/].f_1))
		{
			unk_0xDD944E3FD2028A48(Local_96[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x72D460C6FC1A44BE(Local_96[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_84.f_27 != joaat("hydra"))
		{
			if (unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar0)], func_90(iVar0)) || unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar0)], func_90(iVar0)))
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
				{
					func_92(&(Local_96[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar1) || unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar1))
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
				{
					func_92(&(Local_96[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_167(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		if (func_169())
		{
			Global_2441237 = unk_0x1146A9AE09CE2B14();
		}
		if (bParam3)
		{
			func_168(unk_0x8A437068C87289B7(uParam0), uParam1, 1, Global_2441237, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_168(unk_0x8A437068C87289B7(uParam0), uParam1, -1, Global_2441237, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (unk_0x575B7C28D81C0B4D(*uParam1))
	{
		func_92(uParam1);
	}
}

int func_168(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0x638BDC79E655C1C2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (!unk_0x91D137360A62E65D(iParam0))
		{
			bVar0 = true;
			if (unk_0x6A86865E010A134F(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x3AC990743D2354F7(iParam0, 1);
				}
				else
				{
					unk_0x69C541DE38607868(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x1934F7E4E24F3FA5(iParam0, iParam2);
				unk_0xF7DBAEA10D027AEE(iParam0, fParam6);
				if (unk_0x575B7C28D81C0B4D(*uParam1))
				{
					unk_0xC5BBAB0F8336ECB7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA83471E5EF1B0F8F(iParam0, iParam9);
		}
		unk_0x5587484C0CD0306E(iParam0, uParam4);
		unk_0x4846DFBEB498024C(iParam0, uParam5);
		*uParam1 = unk_0xC9B8E88428C4C45A(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xFA3E6ADC3E5D386E(*uParam1, iParam8);
				}
				if (!unk_0xAB6A270F84A8781E(uParam7))
				{
					unk_0x0702C81DAF64325D("STRING");
					if (bParam10)
					{
						unk_0xA91D83F2CC1345A6(sParam7);
					}
					else
					{
						unk_0x1896EC0B030A48A2(sParam7);
					}
					unk_0x5AC2C33175100EF3(*uParam1);
				}
				unk_0xC5BBAB0F8336ECB7(*uParam1, 7);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(uParam1->f_6, 2))
		{
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC49311A2A500FF09(iParam0, 0))
		{
			uParam1->f_1 = unk_0xA4920568F5B9D8E9(iParam0);
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_6, 3))
			{
				if (unk_0x575B7C28D81C0B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xFA3E6ADC3E5D386E(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB6A270F84A8781E(sParam7))
					{
						unk_0x0702C81DAF64325D("STRING");
						if (bParam10)
						{
							unk_0xA91D83F2CC1345A6(sParam7);
						}
						else
						{
							unk_0x1896EC0B030A48A2(sParam7);
						}
						unk_0x5AC2C33175100EF3(uParam1->f_1);
					}
					unk_0xC5BBAB0F8336ECB7(uParam1->f_1, 7);
					unk_0x191DDA30577F440A(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x575B7C28D81C0B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xC664C0067EEAB8D1(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x575B7C28D81C0B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xC664C0067EEAB8D1(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return Global_1312878;
}

void func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_126(&(Local_84.f_332), 0, 0));
	if (iLocal_551 == 0)
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_88, 26))
		{
			if ((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
			{
				iLocal_551 = (func_34() - func_126(&(Local_84.f_332), 0, 0));
				iVar2 = iLocal_551;
			}
		}
	}
	else
	{
		iVar2 = iLocal_551;
	}
	if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_754())
	{
		iVar0 = (((Local_84.f_256[0] + Local_84.f_256[1]) + Local_84.f_256[2]) + Local_84.f_256[3]);
	}
	else
	{
		iVar0 = Local_84.f_256[0];
	}
	func_192(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_754())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = unk_0xC502CD39B4994F3A(Local_84.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != func_5())
			{
				if (unk_0x8CFC2F41A749E236(iVar9))
				{
					sVar4[iVar1] = unk_0xF04DBC0AC5A2AB23(iVar9);
					iVar6[iVar1] = Local_84.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_84.f_594[iVar1 /*4*/];
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_84.f_332), 0, 0)) >= 0)
		{
			if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
			{
				func_188(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_189(), iVar8);
			}
			else
			{
				func_186(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_189(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_84.f_255)
		{
			iVar0 = Local_84.f_255;
		}
		if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
		{
			func_185(unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), iVar0, iVar0, Local_84.f_255, iVar2, iVar3, 0, func_189());
		}
		else
		{
			func_171(iVar0, iVar0, Local_84.f_255, iVar2, iVar3, 0, func_189(), 1);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_177(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_175(sParam6))
	{
		sVar1 = sParam6;
	}
	func_172(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_173(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_173(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_174(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

int func_175(char* sParam0)
{
	if (unk_0x4030103C8B148AFC(uParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(uParam0, "") || unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_173(4, iVar0);
		Global_1380638.f_3305[iVar0] = iParam0;
		Global_1380638.f_3305.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1380638.f_3305.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1380638.f_3305.f_183[iVar0] = iParam3;
		Global_1380638.f_3305.f_216[iVar0] = iParam5;
		Global_1380638.f_3305.f_194[iVar0] = iParam4;
		Global_1380638.f_3305.f_227[iVar0] = iParam6;
		Global_1380638.f_3305.f_270[iVar0] = iParam7;
		Global_1380638.f_3305.f_281[iVar0] = iParam8;
		Global_1380638.f_3305.f_292[iVar0] = iParam9;
		Global_1380638.f_3305.f_303[iVar0] = iParam10;
		Global_1380638.f_3305.f_314[iVar0] = iParam11;
		Global_1380638.f_3305.f_325[iVar0] = iParam13;
		Global_1380638.f_3305.f_336[iVar0] = iParam14;
		Global_1380638.f_3305.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x3640D836D145B814()) && iParam12)
		{
			Global_1380638.f_1130 = 1;
		}
	}
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_174(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_173(6, iVar0);
		Global_1380638.f_3999[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_3999.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_3999.f_183[iVar0] = iParam3;
		Global_1380638.f_3999.f_172[iVar0] = iParam2;
		Global_1380638.f_3999.f_260[iVar0] = iParam4;
		Global_1380638.f_3999.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1380638.f_3999.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1380638.f_3999.f_443[iVar0] = iParam7;
		Global_1380638.f_3999.f_454[iVar0] = iParam8;
		Global_1380638.f_3999.f_497[iVar0] = iParam9;
		Global_1380638.f_3999.f_508[iVar0] = iParam10;
		Global_1380638.f_3999.f_205[iVar0] = iParam11;
		Global_1380638.f_3999.f_216[iVar0] = iParam12;
		Global_1380638.f_3999.f_227[iVar0] = iParam13;
		Global_1380638.f_3999.f_238[iVar0] = iParam14;
		Global_1380638.f_3999.f_249[iVar0] = iParam15;
		Global_1380638.f_3999.f_519[iVar0] = iParam16;
		Global_1380638.f_3999.f_530[iVar0] = iParam17;
		Global_1380638.f_3999.f_541[iVar0] = iParam18;
		Global_1380638.f_3999.f_552[iVar0] = iParam19;
		Global_1380638.f_3999.f_563[iVar0] = iParam20;
		Global_1380638.f_3999.f_574[iVar0] = iParam21;
		Global_1380638.f_3999.f_585[iVar0] = iParam22;
		Global_1380638.f_3999.f_596[iVar0] = iParam23;
		Global_1380638.f_3999.f_607[iVar0] = iParam24;
		Global_1380638.f_3999.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_179())
		{
			Global_1380638.f_1130 = 1;
		}
		if (unk_0x3640D836D145B814())
		{
			iVar2 = 0;
			unk_0x32C9F8FADAAEEFE6(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1380638.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1380638.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1380638.f_1130 = 1;
			}
			if (func_178())
			{
				Global_1380638.f_1134 = 1;
			}
		}
	}
}

int func_178()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x3640D836D145B814())
	{
		unk_0x32C9F8FADAAEEFE6(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_179()
{
	if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 12)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	unk_0xEFD424FDD55A6EC7(8);
	unk_0xEFD424FDD55A6EC7(9);
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(7);
	Global_2465052 = 1;
}

void func_181()
{
	Global_1380638.f_1130 = 1;
}

int func_182(bool bParam0)
{
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_857(unk_0x1146A9AE09CE2B14(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_183()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_184()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 12);
}

void func_185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_180();
	func_181();
	if (bParam6)
	{
		func_177(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_175(sParam7))
	{
		sVar0 = sParam7;
	}
	func_172(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam0 > -1)
	{
		Var0 = { func_187(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_177(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_187(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_177(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_187(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_177(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_187(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_177(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_175(sParam10))
	{
		sVar5 = sParam10;
	}
	func_172(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_187(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x3A2A8DAFDBEC4CFE("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_188(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_177(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_177(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_177(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_177(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_175(sParam14))
	{
		sVar4 = sParam14;
	}
	func_172(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_189()
{
	return "HUD_COUNTDOWN";
	switch (func_191(unk_0x1146A9AE09CE2B14()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_190()
{
	if (func_191(unk_0x1146A9AE09CE2B14()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

void func_192(int iParam0)
{
	if (func_194(unk_0x1146A9AE09CE2B14()) || func_193(unk_0x1146A9AE09CE2B14()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x7FF6ACE380ED166C())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 0))
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_2544210.f_5030)))
			{
				unk_0x28914D795612530C(&(Global_2544210.f_5030));
			}
			unk_0x4F62815699141072(1);
			unk_0xFB8A6909539A30B1("FM_COUNTDOWN_30S_FIRA");
			unk_0xC0BBE340BE2AA02D("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
			unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
			unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
			if (Global_2544210.f_5038 > -1)
			{
				unk_0xBAB6F7501A822416(Global_2544210.f_5038);
				Global_2544210.f_5038 = -1;
			}
			Global_2544210.f_5028 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 0))
		{
			if (unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 4))
			{
				if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 2))
				{
					if (unk_0xBAE46728EC10BE94())
					{
						if ((!unk_0xDA654EB115F9FF7D(unk_0x6E1F1D2CB9DFB793(unk_0x35A1BC0F4035B2F2()), "OFF") && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && !unk_0xAB6A270F84A8781E(&(Global_2544210.f_5030)))
						{
							StringCopy(&(Global_2544210.f_5030), "", 32);
							unk_0xFB8A6909539A30B1("FM_COUNTDOWN_30S_FIRA");
							unk_0xC0BBE340BE2AA02D("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
							unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
							unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
							unk_0x4F62815699141072(1);
							unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 2);
						}
					}
				}
				else if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 5))
				{
					unk_0x28914D795612530C("OFF");
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0xFB8A6909539A30B1("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0xFB8A6909539A30B1("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xFB8A6909539A30B1("FM_COUNTDOWN_30S");
				}
				unk_0xB84B43B766630B5C("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 1);
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x7785488C353E6BAD() != 0)
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xF0DABE056C7B70AB())
						{
							StringCopy(&(Global_2544210.f_5030), unk_0xCC269A238CA6DE56(), 32);
							unk_0x28914D795612530C("OFF");
						}
						unk_0x4F62815699141072(1);
						unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 3))
				{
					Global_2544210.f_5038 = unk_0x5AD02BBC63E31E46();
					unk_0x9B0169E27978C1A2(Global_2544210.f_5038, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 0))
			{
				Global_2544210.f_5028 = 0;
				Global_2544210.f_5038 = -1;
				unk_0x8A54885A635DC8D1("FM_COUNTDOWN_30S_KILL");
				unk_0x4F62815699141072(0);
				unk_0xFB8A6909539A30B1("FM_PRE_COUNTDOWN_30S");
				unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
				unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
				unk_0x8FF71A24509DA743("AllowScoreAndRadio", 1);
				unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 0);
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 2))
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 2);
					unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 5);
				}
				else
				{
					unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5028), 5);
					unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5028), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 0))
		{
			Global_2544210.f_5028 = 0;
			Global_2544210.f_5038 = -1;
			unk_0x8A54885A635DC8D1("FM_COUNTDOWN_30S_KILL");
			unk_0x4F62815699141072(0);
			unk_0xFB8A6909539A30B1("FM_PRE_COUNTDOWN_30S");
			unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
			unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
			unk_0x8FF71A24509DA743("AllowScoreAndRadio", 1);
			unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 0);
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 2);
				unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 5);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5028), 2);
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5028), 5);
			}
		}
	}
}

int func_193(int iParam0)
{
	if (iParam0 != func_5() && func_857(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_194(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_857(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_195(Global_2426865[iParam0 /*449*/].f_319.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
		{
			if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_13, iVar0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[iParam0 /*18*/].f_1, iVar0))
					{
						uLocal_95[iVar0] = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(Local_84.f_7[iVar0]));
						unk_0x252BE56DB93DF816(uLocal_95[iVar0], 429);
						func_198(&(uLocal_95[iVar0]), 29);
						if (func_754())
						{
							unk_0xDD944E3FD2028A48(uLocal_95[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0xDD944E3FD2028A48(uLocal_95[iVar0], "UW_BLIP");
						}
						unk_0xC5BBAB0F8336ECB7(uLocal_95[iVar0], 9);
					}
					else if (unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
					{
						unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
					}
				}
				else if (unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_198(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		uVar0 = func_199(iParam1);
		unk_0xFA3E6ADC3E5D386E(*uParam0, uVar0);
	}
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xB4D5E37C91862216(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_200()
{
	bool bVar0;
	
	bVar0 = func_268();
	if (bVar0)
	{
		if (Local_84.f_413 > -1)
		{
			if ((Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0)) >= 0)
			{
				if (!func_204())
				{
					func_203((Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0)));
					func_201((Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0)), func_202(-1));
				}
			}
			else
			{
				if (!func_204())
				{
					func_201(0, func_202(-1));
				}
				if (unk_0x443E2CA72E118E64())
				{
					unk_0x191DDA30577F440A(&(Local_84.f_3), 4);
				}
			}
		}
	}
}

void func_201(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_175(sParam1))
	{
		sVar0 = sParam1;
	}
	func_172(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_202(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x471C98FD94C0A5FD();
	return "HUD_STARTING";
	if (unk_0xDA654EB115F9FF7D(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_203(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x7FF6ACE380ED166C())
	{
		Global_2544210.f_5028 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 1))
		{
			unk_0x9B0169E27978C1A2(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2544210.f_5028 = 0;
			unk_0x191DDA30577F440A(&(Global_2544210.f_5028), 1);
		}
	}
}

bool func_204()
{
	bool bVar0;
	var uVar1;
	
	if (func_266(8))
	{
		bVar0 = true;
	}
	if (func_266(0))
	{
		bVar0 = true;
	}
	if (!func_257(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_211(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 9))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				uVar1 = unk_0xC96B0C85BE0E0287(unk_0x7D2B9E6A64637269());
				if (!unk_0xBFCE58B2B3249999(uVar1, 0))
				{
					func_209(0, -1);
					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 9))
	{
		unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 9);
	}
	if (Global_1669334)
	{
		bVar0 = true;
	}
	if (func_208(unk_0x1146A9AE09CE2B14()))
	{
		bVar0 = true;
	}
	if (func_207(unk_0x1146A9AE09CE2B14(), 2))
	{
		bVar0 = true;
	}
	if (func_205(unk_0x1146A9AE09CE2B14()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_205(int iParam0)
{
	if (func_206(iParam0))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8);
}

bool func_206(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

bool func_207(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_208(int iParam0)
{
	if (!func_857(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

void func_209(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590781)
		{
			if (!func_266(0) && !func_266(func_210(iParam1)))
			{
				Global_1590781 = 1;
			}
		}
	}
	else if (Global_1590781)
	{
		Global_1590781 = 0;
	}
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23822;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_256(unk_0x1146A9AE09CE2B14(), 29))
	{
		return 0;
	}
	if (func_207(unk_0x1146A9AE09CE2B14(), 21))
	{
		return 0;
	}
	if (func_207(unk_0x1146A9AE09CE2B14(), 25))
	{
		return 0;
	}
	if (unk_0xD09C9D030AFD3F25())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x2D61488C347F8402())
		{
			return 0;
		}
	}
	if (func_254(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_252(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_251())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_250(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	else if (func_235(unk_0x1146A9AE09CE2B14()) == 3)
	{
		return 0;
	}
	if (func_234(unk_0x1146A9AE09CE2B14()) != func_5() && func_234(unk_0x1146A9AE09CE2B14()) == func_65(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_231(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if (func_229(func_230()) && !func_228(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_225(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_223())
	{
		return 0;
	}
	if (func_207(unk_0x1146A9AE09CE2B14(), 0) || func_207(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if ((func_207(unk_0x1146A9AE09CE2B14(), 12) || func_207(unk_0x1146A9AE09CE2B14(), 14)) || func_207(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 0;
	}
	if (func_222(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (!func_221() && !Global_2518522)
		{
			return 0;
		}
	}
	if (func_220(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_219())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_208(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (func_216(unk_0x1146A9AE09CE2B14()) && Global_1590554.f_172)
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (func_214(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_2543269)
	{
		return 0;
	}
	if (Global_1701002)
	{
		return 0;
	}
	if (!func_213(unk_0x1146A9AE09CE2B14()))
	{
		if (func_212(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_214(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_215()
{
	return Global_1683970.f_502;
}

int func_216(int iParam0)
{
	if (func_217(Global_1590908[iParam0 /*874*/].f_267.f_29))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_218()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_99422.f_364 > 0;
}

bool func_220(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11);
}

bool func_221()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_222(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_223()
{
	if (func_224() == 0)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return Global_1312485.f_18;
}

bool func_225(int iParam0)
{
	return func_226(iParam0);
}

bool func_226(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_227()
{
	return Global_1312902;
}

int func_228(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_230()
{
	return Global_2441237.f_2841[0 /*80*/].f_1;
}

int func_231(int iParam0, int iParam1)
{
	if (func_233(iParam0, 0))
	{
		return func_232(Global_1630816[iParam0 /*597*/].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_233(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_235(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_249(iParam0) && !func_206(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_250(iParam0);
	bVar3 = func_248();
	uVar4 = func_240();
	if ((bVar1 && (func_213(iParam0) || func_239(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_238(iParam0)) && !func_236(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_236(int iParam0)
{
	return func_237(iParam0, 19);
}

bool func_237(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_237(iParam0, 9);
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_240()
{
	if ((func_237(unk_0x1146A9AE09CE2B14(), 21) || func_237(unk_0x1146A9AE09CE2B14(), 22)) || func_245())
	{
		return 1;
	}
	if (func_242())
	{
		func_241(22);
		return 1;
	}
	return 0;
}

void func_241(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

int func_242()
{
	if (func_233(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (((func_248() && !func_244()) || func_207(unk_0x1146A9AE09CE2B14(), 21)) || func_207(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		else
		{
			func_243(27);
		}
	}
	return 0;
}

void func_243(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_244()
{
	return Global_1312436.f_1;
}

int func_245()
{
	return func_246(390, -1);
}

int func_246(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_247(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

bool func_248()
{
	return Global_1312436;
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

bool func_250(int iParam0)
{
	return func_237(iParam0, 20);
}

bool func_251()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

int func_252(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_253()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_254(int iParam0)
{
	if (func_255(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_225(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_256(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

bool func_257(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7857 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_261(unk_0x1146A9AE09CE2B14(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_260() || func_259())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_258())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1574658[iVar1], iVar0);
}

int func_258()
{
	var uVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 23))
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259())
	{
		return 1;
	}
	uVar0 = Global_1390515[func_247(-1)];
	if (unk_0x234B68AC2E35ED5A(uVar0, 7))
	{
		unk_0x191DDA30577F440A(&(Global_2544210.f_1794), 23);
		return 1;
	}
	return 0;
}

bool func_259()
{
	return Global_1312890;
}

bool func_260()
{
	return Global_1312892;
}

int func_261(int iParam0, int iParam1)
{
	if (!func_265())
	{
		return 0;
	}
	if (func_264())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_262(&(Global_1590908[iParam0 /*874*/].f_745), func_263(iParam1));
}

bool func_262(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2);
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		default:
	}
	return 1;
}

bool func_264()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_143, 3);
}

int func_265()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259())
	{
		return 1;
	}
	return func_246(120, -1);
}

bool func_266(int iParam0)
{
	var uVar0;
	
	uVar0 = func_267(2482, -1, 0);
	return unk_0x234B68AC2E35ED5A(uVar0, iParam0);
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_247(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_268()
{
	bool bVar0;
	
	if (!func_754())
	{
		if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_754())
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]))
		{
			if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_84.f_15 != false;
			}
			else
			{
				bVar0 = Local_84.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0x234B68AC2E35ED5A(Local_84.f_3, 9);
	}
	if (!func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (bVar0 && !func_204())
		{
			if (func_754())
			{
				if (!func_275("UW_ABTSC"))
				{
					func_269("UW_ABTSC", 0);
				}
			}
			else if (!func_275("UW_ABTS"))
			{
				func_269("UW_ABTS", 0);
			}
		}
		else if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_269(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_273(sParam0))
	{
		return;
	}
	func_10();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_272();
	func_271(bParam1);
	func_270();
}

void func_270()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_272()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

bool func_273(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_274(uParam0);
	}
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_274(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

int func_275(char* sParam0)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (unk_0xCF7E9D7EE2349689(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return 0;
	}
	return func_273(sParam0);
}

void func_276(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_424() };
	bVar2 = false;
	if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_105[iVar0 /*42*/] = -1;
			Local_105[iVar0 /*42*/].f_1 = func_5();
			Local_105[iVar0 /*42*/].f_9 = 0;
			Local_105[iVar0 /*42*/].f_31 = -1;
			if (Local_84.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_105[iVar0 /*42*/].f_1 = Local_84.f_465[iVar0 /*4*/].f_2;
				Local_105[iVar0 /*42*/].f_9 = Local_84.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_423())
			{
				if (Local_106.f_103 != 129)
				{
					Local_106.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_106.f_103 != 129)
		{
			Local_106.f_103 = 129;
		}
		func_281(&Local_105, &uLocal_104, 27, &Local_106, &uLocal_119, -1, 0, 0);
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 1)
		{
			if (Local_105[0 /*42*/].f_1 != unk_0x1146A9AE09CE2B14())
			{
				if (Local_84.f_465[0 /*4*/].f_1 > 0)
				{
					func_280();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_105[iVar0 /*42*/] = -1;
			Local_105[iVar0 /*42*/].f_1 = func_5();
			Local_105[iVar0 /*42*/].f_9 = 0;
			Local_105[iVar0 /*42*/].f_31 = -1;
			Local_105[iVar0 /*42*/].f_39 = -1;
			if (Local_84.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_105[iVar0 /*42*/].f_39 = Local_84.f_465[iVar0 /*4*/] + 1;
				Local_105[iVar0 /*42*/].f_1 = unk_0xC502CD39B4994F3A(Local_84.f_465[iVar0 /*4*/].f_2);
				Local_105[iVar0 /*42*/].f_40 = Local_84.f_465[iVar0 /*4*/].f_1;
				Local_105[iVar0 /*42*/].f_9 = Local_84.f_465[iVar0 /*4*/].f_1;
				Local_105[iVar0 /*42*/].f_2 = Local_84.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_277();
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 1)
		{
			if (Local_84.f_594[0 /*4*/] > 0)
			{
				if (Local_84.f_594[0 /*4*/] != Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9)
				{
					if (Local_84.f_256[Local_84.f_594[0 /*4*/]] > 0)
					{
						func_280();
					}
				}
			}
		}
		func_281(&Local_105, &uLocal_104, 27, &Local_106, &uLocal_119, -1, 1, 0);
		if (bParam0)
		{
			if (!func_423())
			{
				if (Local_106.f_103 != 129)
				{
					Local_106.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_106.f_103 != 129)
		{
			Local_106.f_103 = 129;
		}
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_579[0] = Local_84.f_594[0 /*4*/];
	uLocal_579[1] = Local_84.f_594[1 /*4*/];
	uLocal_579[2] = Local_84.f_594[2 /*4*/];
	uLocal_579[3] = Local_84.f_594[3 /*4*/];
	iVar3 = Local_84.f_594[0 /*4*/];
	iVar4 = Local_84.f_594[1 /*4*/];
	iVar5 = Local_84.f_594[2 /*4*/];
	iVar6 = Local_84.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_84.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_84.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_84.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_84.f_266[iVar6];
	}
	uLocal_580[0] = uVar7;
	uLocal_580[1] = uVar8;
	uLocal_580[2] = uVar9;
	uLocal_580[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xAB0F784335D14AC3())
	{
		iVar2 = func_279(uLocal_579[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_105[iVar2 /*42*/].f_9 = Local_84.f_594[iVar0 /*4*/].f_1;
		}
		func_278(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_580[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_278(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_105[iParam1 /*42*/] };
	Local_105[iParam1 /*42*/] = { Local_105[iParam0 /*42*/] };
	Local_105[iParam0 /*42*/] = { Var0 };
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xAB0F784335D14AC3() - 1))
	{
		if (iParam0 == Local_105[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xAB0F784335D14AC3();
		}
		iVar0++;
	}
	return iVar1;
}

void func_280()
{
	unk_0x191DDA30577F440A(&(Global_2544210.f_1797), 19);
}

void func_281(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_422(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_420() || iParam2 == 28)
	{
		if (func_371(uParam1, iParam2, uParam3, Global_1574200, 0, func_425(), iParam7))
		{
			func_370(1);
			if ((!func_368() && !func_366()) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
			{
				if (func_365())
				{
					func_360();
				}
				else
				{
					unk_0x53CE6C5893F65093(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_359(1);
						Global_1574200 = 0;
						iVar19 = -1;
						if (Global_1574421 != 1)
						{
							func_358(uParam1, 0, 0);
							if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
							{
								unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_857(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
									if (!func_16(iVar3, 0))
									{
										if ((func_354(iVar3) || Global_2426865[iVar3 /*449*/].f_245 != -1) || func_353(iVar3))
										{
											iVar9 = iVar3;
											if (func_352(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_349(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_346(unk_0x1146A9AE09CE2B14(), 0) && func_345(unk_0x1146A9AE09CE2B14()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_344())
							{
								if (func_857(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
								}
								else
								{
									iVar3 = func_5();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_343(iVar3) && func_340(iVar3, iParam2)) && func_857(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
								Var6 = { func_335(iVar3) };
								if (iVar3 == unk_0x1146A9AE09CE2B14())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xF04DBC0AC5A2AB23(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
								iVar5 = func_329(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
								}
								Global_1574200++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_344())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_324(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_323(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_318(iVar3, 0);
								if (bVar2)
								{
									if (func_317(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_316(iParam5))
								{
									func_315(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_315(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x191DDA30577F440A(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							if (func_857(iVar3, 0, 1) && !unk_0x234B68AC2E35ED5A(iVar14, iVar3))
							{
								iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							}
							else
							{
								iVar3 = func_5();
							}
							if (func_343(iVar3))
							{
								if (func_857(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
									Var6 = { func_335(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
									iVar5 = func_329(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
									}
									Global_1574200++;
									iVar16 = func_318(iVar3, 1);
									if (bVar2)
									{
										if (func_317(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_294(iVar3, unk_0xF04DBC0AC5A2AB23(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							func_291(uParam3, uParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_290();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
						{
							func_289(uParam3, uParam1);
							func_288(uParam1, 0, 1);
							unk_0x191DDA30577F440A(&(uParam3->f_33), 7);
						}
						func_289(uParam3, uParam1);
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							unk_0x191DDA30577F440A(&(uParam3->f_33), 11);
						}
						if (func_284(uParam3))
						{
							Global_1574421 = 1;
						}
						func_282(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xDAE4BC89A198A6AF(*uParam1))
					{
						unk_0x0F33095580A670CE(7);
						unk_0x43D93129BD1AD792(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0F33095580A670CE(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_290();
			func_359(0);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
			}
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 10))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x17552FF90A99ABEA();
}

void func_282(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_283(0);
	}
}

void func_283(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xC502CD39B4994F3A(uParam0->f_37);
	if (iVar3 != func_5() && func_857(iVar3, 0, 1))
	{
		Var2 = { func_66(iVar3) };
		iVar1 = func_287(uParam0, uParam0->f_37);
		if (func_286(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_285(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_285(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_285(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_285(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x9FA24EA712B9DC35(&Var2))
						{
							iVar4 = 1;
							func_285(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_285(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_286(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

var func_287(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x704F8697BB515627(*uParam0, "COLLAPSE"))
	{
		unk_0x9D7453DF8B7E9E0B(iParam1);
		unk_0x392841D58D2EED1D();
	}
	if (iParam2 == 1)
	{
		if (unk_0x704F8697BB515627(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_289(var uParam0, var uParam1)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_33, 10))
	{
		unk_0x704F8697BB515627(*uParam1, "SET_HIGHLIGHT");
		unk_0x9E3D03981E2E9AD9(uParam0->f_35);
		unk_0x392841D58D2EED1D();
		unk_0x191DDA30577F440A(&(uParam0->f_33), 10);
	}
}

void func_290()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_291(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar0);
		if (iVar2 != func_5())
		{
			if (func_857(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_293(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_292(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		if (unk_0x704F8697BB515627(*uParam0, "SET_ICON"))
		{
			unk_0x9E3D03981E2E9AD9(iParam1);
			unk_0x9E3D03981E2E9AD9(iParam2);
			if (iParam2 == 65)
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

int func_293(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_294(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_314() && iParam4 < func_313())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x704F8697BB515627(*uParam2, sVar1))
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_312("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(iParam10);
			}
			func_312(sParam1);
			unk_0x9E3D03981E2E9AD9(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_312("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(65);
			}
			unk_0x9E3D03981E2E9AD9(-1);
			func_312("");
			if (uParam3->f_108 == 6)
			{
				func_312("");
			}
			else
			{
				func_312(&sParam5);
			}
			func_299(uParam3, iParam0);
			unk_0x386C67F2B8055D74(sParam9);
			unk_0x386C67F2B8055D74(sParam9);
			if (func_298(uParam3))
			{
				func_297("DPAD_FRIEND");
			}
			else if (func_296(uParam3))
			{
				func_297("DPAD_FRIEND");
			}
			else if (func_295(uParam3))
			{
				func_297("DPAD_CREW");
			}
			else
			{
				func_297("");
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

bool func_295(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 6);
}

bool func_296(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 5);
}

void func_297(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

int func_298(var uParam0)
{
	if (func_296(uParam0) && func_295(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0, int iParam1)
{
	if (func_311(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(121);
	}
	else if (func_304(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(122);
	}
	else if (((unk_0x234B68AC2E35ED5A(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x234B68AC2E35ED5A(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		unk_0x9E3D03981E2E9AD9(123);
	}
	else
	{
		if (func_300())
		{
			uParam0->f_36 = 0;
		}
		unk_0x9D7453DF8B7E9E0B(uParam0->f_36);
	}
}

int func_300()
{
	if (unk_0xE45310E861787FC2())
	{
		if (func_302() || func_301())
		{
			return 1;
		}
	}
	return 0;
}

var func_301()
{
	return Global_2453009.f_17;
}

int func_302()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_301();
	}
	return func_303(Global_4456448.f_85535);
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0)
{
	if ((func_857(iParam0, 0, 1) && func_308()) && func_305(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_305(int iParam0, bool bParam1)
{
	return func_306(iParam0, bParam1, 1);
}

int func_306(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_307(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_5() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_5())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308()
{
	if (func_249(unk_0x1146A9AE09CE2B14()) || func_310())
	{
		if (!func_309(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	return 1;
}

int func_309(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return func_213(iParam0);
	}
	return 0;
}

int func_310()
{
	switch (func_345(unk_0x1146A9AE09CE2B14()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_311(int iParam0)
{
	if (func_300())
	{
		if (func_857(iParam0, 0, 1))
		{
			return func_352(iParam0);
		}
	}
	if ((func_857(iParam0, 0, 1) && func_308()) && func_307(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_312(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

int func_313()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_314()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_315(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_314() && iParam3 < func_313())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xDAE4BC89A198A6AF(*uParam1))
		{
			if (unk_0x704F8697BB515627(*uParam1, sVar1))
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
				if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_312("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					func_297(sParam16);
				}
				else
				{
					func_312(&(uParam2->f_1));
				}
				unk_0x9E3D03981E2E9AD9(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_312("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(65);
				}
				if (iParam12 == 1)
				{
					unk_0x9E3D03981E2E9AD9(iVar0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(-1);
				}
				if (func_344())
				{
					func_312("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_TWO_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21300A5159EC89B1(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x38CD3C04C877C35F(iParam10);
					}
					unk_0x1896EC0B030A48A2(&(uParam2->f_104));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x35CA0C119E6A2A27("FM_AE_CASH");
					unk_0xDA0C49A6D01B065C(iParam10, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x35CA0C119E6A2A27("FM_AE_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						unk_0x35CA0C119E6A2A27("FM_NG_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
					{
						func_297(&(uParam2->f_104));
					}
					else
					{
						func_312("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam14, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (fParam13 != -1f)
				{
					unk_0x35CA0C119E6A2A27("NUMBER");
					unk_0x21300A5159EC89B1(fParam13, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (iParam10 != -1)
				{
					unk_0x9E3D03981E2E9AD9(iParam10);
				}
				else
				{
					func_312("");
				}
				if (uParam2->f_108 == 6)
				{
					func_312("");
				}
				else
				{
					func_312(&sParam4);
				}
				func_299(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB6A270F84A8781E(sParam8))
				{
					func_312("");
					func_312("");
				}
				else
				{
					unk_0x386C67F2B8055D74(sParam8);
					unk_0x386C67F2B8055D74(sParam8);
				}
				if (func_298(uParam2))
				{
					func_297("DPAD_FRIEND");
				}
				else if (func_296(uParam2))
				{
					func_297("DPAD_FRIEND");
				}
				else if (func_295(uParam2))
				{
					func_297("DPAD_CREW");
				}
				else
				{
					func_297("");
				}
				unk_0x392841D58D2EED1D();
			}
		}
	}
}

int func_316(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_317(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_352(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_5();
}

int func_318(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_249(iParam0)) && !func_250(iParam0))
	{
		iVar0 = func_322();
	}
	iVar1 = func_321(iParam0);
	if (!iVar1 == -1)
	{
		return func_319(iVar1);
	}
	return iVar0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_320(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_320(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_321(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_317(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_322()
{
	return 21;
}

char* func_323(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA700E2BE6F531543())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_324(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_328(iParam3))
	{
		*fParam1 = (func_325(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_316(iParam3))
	{
		*fParam1 = (func_325(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_327(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_326(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_326(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_327(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_329(int iParam0)
{
	int iVar0;
	
	iVar0 = func_332(iParam0);
	if (iVar0 == -1)
	{
		func_330(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_330(int iParam0, bool bParam1)
{
	if (!func_857(iParam0, 0, 1))
	{
		return;
	}
	if (func_332(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_331(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (!func_857(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEC92E04062037949(Global_1391551[iVar0 /*5*/].f_2) && unk_0x80B82FD1974E28E0(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_333(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_333(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1391712)
	{
		Global_1391551[iVar2 /*5*/] = { Global_1391551[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_334(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_334(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

struct<4> func_335(int iParam0)
{
	struct<4> Var0;
	
	if (func_857(iParam0, 0, 1))
	{
		Global_2518253 = { func_66(iParam0) };
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (func_286(Global_2518253))
			{
				if (!unk_0x94D4A49E53F5209A(&Global_2518253))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x68B90AB279E39C7B(0))
		{
			return Var0;
		}
		if (func_339(&Global_2518253))
		{
			Global_2518183 = { func_337(iParam0) };
			func_336(&Global_2518183, &Var0);
		}
	}
	return Var0;
}

void func_336(var uParam0, var uParam1)
{
	unk_0xDE25303DF0CA8E75(uParam0, 35, uParam1);
}

struct<35> func_337(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_338(iParam0))
	{
		return Global_1312934[unk_0x1146A9AE09CE2B14() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	unk_0xEDDAF8F99F371228(&Var1, 35, &Var0);
	return Var1;
}

int func_338(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return 1;
	}
	return 0;
}

int func_339(var uParam0)
{
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_340(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_206(iParam0) || func_342(iParam0)) || func_205(iParam0))
		{
			return 0;
		}
	}
	if (!func_341(iParam0))
	{
		return 0;
	}
	if ((!func_354(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_353(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_341(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 10) || unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_16(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_344()
{
	switch (func_345(unk_0x1146A9AE09CE2B14()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_191(unk_0x1146A9AE09CE2B14()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_250(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_345(unk_0x1146A9AE09CE2B14()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_309(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)
{
	if (func_233(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_346(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_347(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_347(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_348(iParam0, 0);
	return 0;
}

int func_348(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_349(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_857(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_16(iVar1, 0))
			{
				if ((func_354(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_353(iVar1))
				{
					if (func_350(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_350(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_351(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_5())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_5())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_5())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_353(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_354(int iParam0)
{
	if (!func_857(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_857(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		return 0;
	}
	if (!func_355(iParam0))
	{
		return 0;
	}
	if ((unk_0xEBB066F8EADD0C1F(iParam0, unk_0x1146A9AE09CE2B14()) || func_345(iParam0) == 233) || func_345(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_356(unk_0x1146A9AE09CE2B14());
	bVar1 = func_356(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_356(int iParam0)
{
	return func_357(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_357(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

void func_358(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x9E3D03981E2E9AD9(iParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x392841D58D2EED1D();
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_360()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
	{
		if (func_364())
		{
			func_361();
		}
	}
}

void func_361()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_362(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_362(var uParam0, int iParam1)
{
	func_363(uParam0, iParam1);
}

void func_363(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_364()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

int func_365()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0) && func_364())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1) && func_364())
	{
		return 1;
	}
	return 0;
}

int func_366()
{
	if (func_364())
	{
		if (func_367(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_368()
{
	if (func_364())
	{
		if (func_369(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_370(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_371(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_419(iParam1);
	fVar4 = func_418();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_417())
		{
			if (func_416() > 0 && Global_1574202)
			{
				unk_0xD8A14DD983454D11();
				unk_0x643A5EAD42A4060C(fVar4);
				unk_0xEFD424FDD55A6EC7(18);
				if (unk_0xE8FFE38E2BA32BD6())
				{
					unk_0xBD35EB504610C23C();
				}
				unk_0xEFD424FDD55A6EC7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_403())
		{
			func_402(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
	{
		func_402(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_416() == 1)
		{
			func_401(bVar3, uParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_402(uParam0, uParam2, 0);
			unk_0x191DDA30577F440A(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE8FFE38E2BA32BD6())
		{
			unk_0xBD35EB504610C23C();
		}
		unk_0xEFD424FDD55A6EC7(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_416() == 0 && !bParam5))
		{
			func_402(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_400();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD8A14DD983454D11();
				}
				unk_0xEFD424FDD55A6EC7(18);
			}
			if (!unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_400();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD8A14DD983454D11();
					}
					unk_0xEFD424FDD55A6EC7(18);
				}
				unk_0x643A5EAD42A4060C(fVar4);
				if (func_401(bVar3, uParam0, 0))
				{
					func_358(uParam0, 0, 0);
					uVar1 = func_398(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_396(iParam1) };
					if (bParam4)
					{
						func_393(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_388(uParam0, func_390(uParam2), func_389(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_381(uParam2);
						if (!unk_0xAB6A270F84A8781E(uParam6))
						{
							sVar6 = sParam6;
						}
						func_379(uParam0, sVar6, func_380(), -1);
					}
					else if (func_300())
					{
						uParam2->f_34 = Global_1574201;
						func_393(uParam0, uVar1, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_372(iParam1);
						uParam2->f_34 = Global_1574201;
						func_393(uParam0, uVar1, "", 0, iVar5, Global_1574201, 1);
					}
					else
					{
						iVar5 = func_372(iParam1);
						func_393(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x191DDA30577F440A(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				unk_0x643A5EAD42A4060C(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						unk_0xC664C0067EEAB8D1(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_378())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_377(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 20;
			}
			if (func_376(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_375(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = 2;
	}
	if (func_373())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_373()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_61();
	}
	return func_374(Global_4456448.f_85535);
}

int func_374(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_375(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_376(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_377(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_378()
{
	return Global_4456448.f_1 == 0;
}

void func_379(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_297(sParam1);
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_297("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_380()
{
	switch (func_345(unk_0x1146A9AE09CE2B14()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_381(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_345(unk_0x1146A9AE09CE2B14()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_384())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_383(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_383(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_382(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_383(bool bParam0)
{
	return func_305(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_384()
{
	return (func_387() && func_385(func_386()));
}

int func_385(int iParam0)
{
	return func_307(iParam0, 1);
}

int func_386()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

bool func_387()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

void func_388(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(uParam2))
		{
			func_297(uParam1);
		}
		else if (func_191(unk_0x1146A9AE09CE2B14()) == 133)
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT_C");
			unk_0x1896EC0B030A48A2(uParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_297("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_389(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(unk_0x1146A9AE09CE2B14());
	if (func_423())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_390(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(unk_0x1146A9AE09CE2B14());
	if (func_423())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_392() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_392() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_391() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_391()
{
	return Global_2544210.f_5115;
}

int func_392()
{
	if (func_191(unk_0x1146A9AE09CE2B14()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_393(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_312(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x35CA0C119E6A2A27(uParam1);
			unk_0x38CD3C04C877C35F(iParam5);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_297(sParam1);
		}
		if (func_417() && iParam6)
		{
			if (func_395())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x35CA0C119E6A2A27("LBD_DPD_CNT");
			unk_0x38CD3C04C877C35F(iVar0);
			unk_0x38CD3C04C877C35F(iVar1);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_297(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (func_394(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x9E3D03981E2E9AD9(166);
			}
			else if (func_61())
			{
				unk_0x9E3D03981E2E9AD9(220);
			}
		}
		unk_0x392841D58D2EED1D();
	}
}

int func_394(int iParam0)
{
	if (func_377(iParam0) || func_376(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_395()
{
	return Global_1574202;
}

struct<4> func_396(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_397(unk_0x1146A9AE09CE2B14()) || func_375(unk_0x1146A9AE09CE2B14()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_300() && unk_0xE45310E861787FC2())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_397(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_398(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_300() || unk_0xAB6A270F84A8781E(uParam1)))
	{
		uVar0 = func_399();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_399()
{
	if (unk_0xC33B9889A311ABB0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5381ADE2AB48C34C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8E3B6139DCC5E397())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4FCCBCCCB1A46E9F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_400()
{
	Global_42937 = 1;
}

bool func_401(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_matchmaking_card");
	}
	return unk_0xDAE4BC89A198A6AF(*uParam1);
}

void func_402(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_290();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 5);
		}
	}
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x3D9BC07C93913E04(uParam0);
	}
	if (unk_0x234B68AC2E35ED5A(uParam1->f_33, 0))
	{
		unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 0);
	}
	unk_0x643A5EAD42A4060C(0f);
}

int func_403()
{
	if (func_415())
	{
		return 0;
	}
	if (func_251())
	{
		return 0;
	}
	if (!func_413())
	{
		return 0;
	}
	if (!func_223())
	{
		return 0;
	}
	if (func_412(8, -1))
	{
		return 0;
	}
	if (func_416() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	else if (!func_255(unk_0x1146A9AE09CE2B14(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_411(1) || func_409(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (func_408() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_406(unk_0x1146A9AE09CE2B14()) && !func_408())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_405(0))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_404(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_404(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_405(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

int func_406(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_407())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_407()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_408()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_409(bool bParam0)
{
	if (unk_0x4AA05D0E8631839E())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_410(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5C6675393464A814(0, 25) || unk_0x5C6675393464A814(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (unk_0x5C6675393464A814(0, 19) || (!bParam0 && unk_0x51794501073F0A33(0, 19)))
	{
		return 1;
	}
	if (unk_0x3640D836D145B814())
	{
		if (((unk_0x5C6675393464A814(0, 166) || unk_0x5C6675393464A814(0, 167)) || unk_0x5C6675393464A814(0, 168)) || unk_0x5C6675393464A814(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x51794501073F0A33(0, 166) || unk_0x51794501073F0A33(0, 167)) || unk_0x51794501073F0A33(0, 168)) || unk_0x51794501073F0A33(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	
	if (unk_0x8ACA9ACB93EC151E())
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_411(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

bool func_412(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

int func_413()
{
	if (func_414())
	{
		return 1;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB())
	{
		return 0;
	}
	if (unk_0xA2DFFBCD9CFB74A3())
	{
		return 0;
	}
	return 1;
}

bool func_414()
{
	return Global_1312458;
}

bool func_415()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_416()
{
	return Global_1379108.f_68;
}

int func_417()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_418()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x037D8E0CFB994CB5()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_420()
{
	if (func_425())
	{
		return 1;
	}
	if (func_205(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_423())
	{
		return 1;
	}
	if (func_249(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_191(unk_0x1146A9AE09CE2B14()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_421(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_421(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_421(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_421(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_422(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_249(unk_0x1146A9AE09CE2B14()) && !func_250(unk_0x1146A9AE09CE2B14())) && !func_309(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_233(unk_0x1146A9AE09CE2B14(), 0) && func_250(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
		if (func_235(unk_0x1146A9AE09CE2B14()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_423()
{
	return Global_1590781;
}

struct<4> func_424()
{
	struct<4> Var0;
	
	switch (Local_84.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_425()
{
	if (func_426(unk_0x1146A9AE09CE2B14()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_426(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (func_16(iParam0, 0))
		{
			return unk_0x206C14525FF9EA88(iParam0);
		}
	}
	return 0;
}

void func_427()
{
	struct<2> Var0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	switch (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17)
	{
		case 0:
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 == 0)
			{
				if (Local_84.f_241 == 0)
				{
					func_759();
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 22))
			{
				if (Local_84.f_27 == joaat("rhino") && Local_84.f_29 == 2)
				{
					func_728(Local_84.f_30[0 /*3*/]);
					unk_0x191DDA30577F440A(&iLocal_88, 22);
				}
				else if (!func_69(Local_84.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_728(Local_84.f_30[0 /*3*/]);
					unk_0x191DDA30577F440A(&iLocal_88, 22);
				}
			}
			func_727();
			func_721();
			if (Local_84.f_241 == 0)
			{
				func_718(1);
			}
			func_717(0);
			if (Local_84.f_241 == 0)
			{
				if (!Local_84.f_27 == joaat("hydra") && !Local_84.f_27 == joaat("rhino"))
				{
					func_200();
				}
				else if (func_754())
				{
					func_200();
				}
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_89, 1))
					{
						func_716(129);
						func_695(1);
						unk_0x191DDA30577F440A(&iLocal_89, 1);
						unk_0x6FB1EB7F73800604(0);
					}
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 6))
					{
						if (Local_84.f_28 > 1 || (Local_84.f_28 == 1 && func_112() > 1))
						{
							if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 4))
							{
								Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 = 0;
								unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0x234B68AC2E35ED5A(iLocal_89, 1))
				{
					unk_0xC664C0067EEAB8D1(&iLocal_89, 1);
					func_694(1);
					func_693();
					func_695(0);
				}
			}
			if (Local_84.f_241 == 1)
			{
				func_692(&iVar1, &uVar2);
				iLocal_545 = iVar1;
				func_691(0);
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
					if (!func_690())
					{
						unk_0x191DDA30577F440A(&iLocal_89, 19);
					}
					if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
					{
						func_9();
					}
					unk_0x6FB1EB7F73800604(0);
					if ((func_689("UW_MINV") || func_689("UW_TIMELA")) || func_689("UW_TIMEL"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					func_196();
					func_678(129, 0f, 0f, 1, 1, 1, 0);
					func_668(1);
					func_667();
					unk_0x5E84945E26CAEF1F(0.1f);
					iLocal_93 = unk_0x8E9D6E2DA3B756D5();
					unk_0x20D884FB6567BAD5(0);
					func_666(1);
					func_665(1);
					if (Local_84.f_27 != joaat("rhino"))
					{
						func_644(1);
					}
					iLocal_99 = unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269());
					unk_0x2271ED1E65FB75EE(unk_0x7D2B9E6A64637269(), iLocal_97);
					unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
					unk_0xFB8A6909539A30B1("MP_MC_START");
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 184, 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 151, 0);
					func_643(0);
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 = iLocal_545;
					if (!func_754())
					{
						func_642(63, "UW_TITLE", "UW_DESC", func_322(), -1, func_322(), 1, 0);
					}
					else if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
					{
						func_642(63, "UW_TITLEC", "UW_DESCC", func_322(), -1, func_322(), 1, 0);
					}
					else
					{
						iVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_641(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_322(), func_322(), 0);
					}
					Local_85.f_9 = unk_0x666C16A4ED8F3098();
					func_643(0);
					func_639(3, 0, 1);
					func_20(&uLocal_559, 0, 0);
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 1;
				}
				else
				{
					func_196();
					if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
					{
						func_9();
					}
					if (func_636("UW_HELP1", func_638(), func_637(1)) || func_636("UW_HELP1C", func_638(), func_637(1)))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
					func_643(0);
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 == 0)
					{
					}
					else if (!func_635())
					{
					}
				}
			}
			else if (Local_84.f_241 == 3)
			{
				func_643(0);
				if (func_636("UW_HELP1", func_638(), func_637(1)) || func_636("UW_HELP1C", func_638(), func_637(1)))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				if (!func_634())
				{
				}
				if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
				{
					func_9();
				}
				func_196();
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 3;
			}
			else if (Local_84.f_241 > 3)
			{
				if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
				{
					func_9();
				}
				func_643(0);
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
					func_633();
					func_632();
					if (func_122())
					{
						func_667();
					}
				}
				if (func_754())
				{
					if (func_626(2, 0, 1, 0, 0))
					{
						if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
						{
							func_9();
						}
						func_643(0);
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
					}
				}
				else if (Local_84.f_27 == joaat("valkyrie"))
				{
					if (func_626(2, 0, 1, 0, 0))
					{
						if (func_275("UW_ABTSC") || func_275("UW_ABTS"))
						{
							func_9();
						}
						func_643(0);
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_166(1);
			func_721();
			func_552();
			func_170();
			func_550();
			func_538();
			func_276(0);
			func_534();
			func_531();
			func_633();
			func_632();
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 26))
			{
				if (!func_530(55))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 10))
						{
							if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 == -1)
							{
								if (!func_754())
								{
									if (!func_275("UW_ATTK"))
									{
										func_269("UW_ATTK", 0);
									}
								}
								else if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
								{
									if (!func_275("UW_ATTK"))
									{
										func_269("UW_ATTK", 0);
									}
								}
								else if (!func_275("UW_ATTK"))
								{
									func_692(&iVar1, &uVar2);
									iVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar1, 16);
									func_269("UW_ATTK", 0);
								}
							}
							else if (func_275("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_529();
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
			{
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 == -1)
				{
					func_667();
				}
			}
			if (!func_857(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
				func_9();
				unk_0x191DDA30577F440A(&iLocal_88, 21);
			}
			else if (func_183())
			{
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 1)
			{
				if (!func_528())
				{
					unk_0x191DDA30577F440A(&iLocal_88, 23);
					func_9();
					if (iLocal_545 > -1)
					{
						if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iLocal_545]))
						{
							func_25(&(Local_84.f_7[iLocal_545]));
						}
					}
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
				}
			}
			if (Local_84.f_241 == 3)
			{
				func_694(1);
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 3;
			}
			else if (Local_84.f_241 > 3)
			{
				func_694(1);
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
			}
			else if (func_754())
			{
				if (func_626(2, 0, 1, 0, 0))
				{
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_84.f_241 == 3)
			{
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 3;
			}
			else if (Local_84.f_241 > 3)
			{
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
			}
			func_462();
			if (func_634())
			{
				if (func_191(unk_0x1146A9AE09CE2B14()) == 129)
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0x232F50D37AC94ECF())
					{
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 398, 0);
						if (unk_0x234B68AC2E35ED5A(iLocal_88, 22))
						{
							func_461();
							unk_0xC664C0067EEAB8D1(&iLocal_88, 22);
						}
						func_693();
						func_458();
						func_456(0);
						func_454(0);
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 184, 0);
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 151, 1);
						func_695(0);
						func_694(1);
					}
					func_453();
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(iLocal_89, 8))
			{
				unk_0x191DDA30577F440A(&iLocal_89, 8);
			}
			if (!func_204())
			{
				func_452();
				func_550();
				func_166(0);
				func_538();
				func_276(1);
				func_534();
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_451();
			}
			func_444();
			func_443();
			func_552();
			if (!unk_0x234B68AC2E35ED5A(iLocal_89, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar3]))
					{
						if (!func_31(Local_84.f_48[iVar3]))
						{
							unk_0x1233D1F2204DE71D(unk_0x8A437068C87289B7(Local_84.f_48[iVar3]), unk_0x1146A9AE09CE2B14(), 0);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_80[iVar3]))
					{
						if (!func_31(Local_84.f_80[iVar3]))
						{
							unk_0x1233D1F2204DE71D(unk_0x8A437068C87289B7(Local_84.f_80[iVar3]), unk_0x1146A9AE09CE2B14(), 0);
						}
					}
					iVar3++;
				}
				unk_0x191DDA30577F440A(&iLocal_89, 7);
			}
			else if (Local_84.f_247 != iLocal_543)
			{
				iLocal_543 = Local_84.f_247;
				unk_0xC664C0067EEAB8D1(&iLocal_89, 7);
			}
			if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
			{
				unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 11);
			}
			if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 10))
			{
				unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 10);
			}
			if (unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()) == iLocal_97)
			{
				unk_0x2271ED1E65FB75EE(unk_0x7D2B9E6A64637269(), iLocal_99);
			}
			break;
		
		case 3:
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 31))
			{
				if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 12))
				{
					func_196();
					unk_0x191DDA30577F440A(&iLocal_88, 31);
				}
			}
			func_529();
			func_438();
			if (!func_204())
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 14) && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 12))
				{
					func_276(1);
				}
				func_538();
				func_550();
				func_534();
				func_429();
			}
			func_462();
			func_443();
			func_552();
			if (Local_84.f_241 > 3)
			{
				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_799();
			break;
	}
	func_428();
}

void func_428()
{
	int iVar0;
	
	if (iLocal_570 != Local_84.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x234B68AC2E35ED5A(Local_84.f_616, iVar0))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_570, iVar0))
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
					{
						if (unk_0xB364346471C3B028(Local_84.f_7[iVar0]))
						{
							unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 2);
							func_25(&(Local_84.f_7[iVar0]));
							unk_0x191DDA30577F440A(&iLocal_570, iVar0);
						}
					}
					else
					{
						unk_0x191DDA30577F440A(&iLocal_570, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_429()
{
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_89, 5))
		{
			if (func_432(0, 1, 1, 1))
			{
				if (func_754())
				{
					func_431("UW_TFEWC", 30000);
				}
				else
				{
					func_431("UW_TFEW", 30000);
				}
				func_430(1);
				unk_0x191DDA30577F440A(&iLocal_89, 5);
			}
		}
	}
}

void func_430(int iParam0)
{
	unk_0xC4EF004220364D2F(3, 21, 200, 0, 0);
	if (iParam0 && !func_364())
	{
		unk_0x9B0169E27978C1A2(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_431(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_432(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xE8FFE38E2BA32BD6())
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (func_415())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_255(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_436(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_435())
	{
		return 0;
	}
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (Global_1574199)
	{
		return 0;
	}
	if (func_434())
	{
		return 0;
	}
	if (func_433())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (Global_2554335)
	{
		return 0;
	}
	if (func_214(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

bool func_433()
{
	return Global_2453009.f_691;
}

bool func_434()
{
	return Global_2453009.f_844;
}

bool func_435()
{
	return Global_2441237.f_3165.f_578;
}

int func_436(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_437()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_438()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_275("UW_EXPL") && !func_275("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_88, (27 + iVar2)))
		{
			if (unk_0xB7D6400C89373777(Local_84.f_7[iVar2]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 0))
				{
					unk_0x191DDA30577F440A(&iLocal_88, (27 + iVar2));
					uLocal_546[iVar2] = unk_0x5AD02BBC63E31E46();
					unk_0xE2D24A37AFCF27BF(uLocal_546[iVar2], "Explosion_Countdown", unk_0x854C404AEB476240(Local_84.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xB76EE71E771BDAA1(uLocal_546[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_754())
	{
		if (unk_0xB7D6400C89373777(Local_84.f_7[0]))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_319, 0))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[0]), 0))
				{
					if ((func_442() - func_126(&(Local_84.f_324), 0, 0)) >= 0)
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
						{
							if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_204())
								{
									func_441();
									func_172((func_442() - func_126(&(Local_84.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
						{
							if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_204())
								{
									func_441();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
						{
							func_694(1);
						}
						if (unk_0xB364346471C3B028(Local_84.f_7[0]))
						{
							unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_84.f_7[0]), 0);
							unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_84.f_7[0]), true);
							if (!unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[0]))))
							{
								unk_0xF55761292A0FA0E8(unk_0x854C404AEB476240(Local_84.f_7[0]), 1, 0, -1);
								func_25(&(Local_84.f_7[0]));
							}
							else
							{
								unk_0x04C294C4E7154351(unk_0x854C404AEB476240(Local_84.f_7[0]), 1, 0, 0);
								func_25(&(Local_84.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_196();
		if (!func_204())
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 12))
			{
				if (func_109(Local_84.f_7[0]))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[0])))
						{
							if (!func_754())
							{
								if (!func_275("UW_EXPL"))
								{
									func_269("UW_EXPL", 0);
								}
							}
							else if (!func_275("UW_EXPLC"))
							{
								func_269("UW_EXPLC", 0);
							}
							unk_0x191DDA30577F440A(&iLocal_88, 12);
						}
					}
				}
			}
			else if (func_275("UW_EXPL") || func_275("UW_EXPLC"))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xB7D6400C89373777(Local_84.f_7[iVar0]))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_319, iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0))
					{
						if ((func_442() - func_126(&(Local_84.f_324), 0, 0)) >= 0)
						{
							if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_441();
											func_172((func_442() - func_126(&(Local_84.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_441();
											func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
							{
								func_694(1);
							}
							if (func_439(Local_84.f_7[iVar0]))
							{
								if (unk_0xB364346471C3B028(Local_84.f_7[iVar0]))
								{
									unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
									unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), true);
									if (!unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iVar0]))))
									{
										unk_0xF55761292A0FA0E8(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1, 0, -1);
										func_25(&(Local_84.f_7[iVar0]));
									}
									else
									{
										unk_0x04C294C4E7154351(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_84.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0x234B68AC2E35ED5A(iLocal_88, 12))
				{
					if (func_109(Local_84.f_7[iVar0]))
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar0])))
							{
								if (!func_204())
								{
									if (!func_754())
									{
										if (!func_275("UW_EXPL"))
										{
											func_269("UW_EXPL", 0);
										}
									}
									else if (!func_275("UW_EXPLC"))
									{
										func_269("UW_EXPLC", 0);
									}
									unk_0x191DDA30577F440A(&iLocal_88, 12);
								}
							}
						}
					}
				}
				else if (func_275("UW_EXPL") || func_275("UW_EXPLC"))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_439(var uParam0)
{
	if (unk_0xE5AEA27726895658(uParam0))
	{
		return 1;
	}
	if (func_440(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return 0;
	}
	if (!unk_0x159BC3DDA80D71AC(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_441()
{
	Global_1380638.f_1131 = 1;
}

int func_442()
{
	if (func_754())
	{
		return Global_262145.f_11553;
	}
	return Global_262145.f_11273;
}

void func_443()
{
	if (!unk_0x234B68AC2E35ED5A(iLocal_89, 4))
	{
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					func_694(1);
					unk_0x191DDA30577F440A(&iLocal_89, 4);
				}
			}
		}
	}
}

void func_444()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6750311806FF130A(iLocal_92);
	if (unk_0xF46EDF82CA845956(iVar0))
	{
		iVar1 = unk_0x539ED6DF32477DE0(iVar0);
		if (unk_0x8CFC2F41A749E236(iVar1))
		{
			if (iLocal_92 != unk_0xDD0E57E73E5C4BF6())
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_571, iLocal_92))
				{
					if (!func_204())
					{
						if (Local_87[iLocal_92 /*18*/].f_17 == 1)
						{
							unk_0x191DDA30577F440A(&iLocal_571, iLocal_92);
							func_445(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_204())
				{
					func_445(iVar1, 55, 0, 0);
					unk_0xC664C0067EEAB8D1(&iLocal_571, iLocal_92);
				}
				else if (Local_87[iLocal_92 /*18*/].f_17 > 1)
				{
					unk_0xC664C0067EEAB8D1(&iLocal_571, iLocal_92);
					func_445(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_92++;
	if (iLocal_92 >= unk_0x5E72DF7B8C03AA05())
	{
		iLocal_92 = 0;
	}
}

void func_445(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_447(iParam0))
	{
		return;
	}
	if (func_446(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = iParam1;
		}
	}
}

int func_446(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x4BE697D014536271(*uParam1) || *uParam1 == unk_0x62D18D65FE22FF39())
		{
			*uParam1 = unk_0x62D18D65FE22FF39();
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
	}
	if (!unk_0x4BE697D014536271(*uParam0) || *uParam0 == unk_0x62D18D65FE22FF39())
	{
		if (bParam3)
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x191DDA30577F440A(uParam2, iParam4);
			}
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			if (unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xC664C0067EEAB8D1(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x62D18D65FE22FF39())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x4BE697D014536271(*uParam1) && !*uParam1 == unk_0x62D18D65FE22FF39())
	{
	}
	return 0;
}

int func_447(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_448())
	{
		return 1;
	}
	return 0;
}

int func_448()
{
	switch (func_450())
	{
		case 0:
			return func_449();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_449()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_450()
{
	return Global_31345;
}

void func_451()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x575B7C28D81C0B4D(Local_96[iVar0 /*8*/]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(Local_96[iVar0 /*8*/]));
		}
		if (unk_0x575B7C28D81C0B4D(Local_96[iVar0 /*8*/].f_1))
		{
			unk_0x1AD5BCFEC31BB8D9(&(Local_96[iVar0 /*8*/].f_1));
		}
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
		{
			if (!func_31(Local_84.f_48[iVar0]))
			{
				if (unk_0x91D137360A62E65D(unk_0x8A437068C87289B7(Local_84.f_48[iVar0])))
				{
					func_92(&(Local_96[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_452()
{
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 11))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 13))
			{
				if (func_191(unk_0x1146A9AE09CE2B14()) != 129)
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
					{
						if (!func_530(65) && !func_530(66))
						{
							if (unk_0x234B68AC2E35ED5A(iLocal_89, 11))
							{
								if (!unk_0x234B68AC2E35ED5A(iLocal_89, 12))
								{
									if (func_432(0, 1, 1, 1))
									{
										if (func_754())
										{
											func_431("UW_HELIMC", -1);
										}
										else
										{
											func_431("UW_HELIM", -1);
										}
										func_430(1);
										unk_0x191DDA30577F440A(&iLocal_89, 12);
									}
								}
							}
							else if (!(Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra")))
							{
								if (func_432(0, 1, 1, 1))
								{
									if (!func_754())
									{
										func_431("UW_TAVAIL", 30000);
									}
									else
									{
										func_431("UW_TAVAILC", 30000);
									}
									func_430(1);
									unk_0x191DDA30577F440A(&iLocal_88, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_453()
{
	float fVar0;
	
	if (iLocal_568 != 0)
	{
		return;
	}
	if (func_22(&uLocal_559))
	{
		iLocal_568 = func_126(&uLocal_559, 0, 0);
	}
	fVar0 = to_float(iLocal_568);
	fVar0 = (fVar0 / 60000f);
	iLocal_568 = floor(fVar0);
	if (iLocal_568 >= 1)
	{
	}
	else
	{
		iLocal_568 = 1;
	}
	if (iLocal_568 > Global_262145.f_11613)
	{
		iLocal_568 = Global_262145.f_11613;
	}
}

void func_454(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99422.f_8 = 1;
	}
	else
	{
		Global_99422.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 56)
	{
		func_455(iVar0);
		iVar0++;
	}
}

void func_455(int iParam0)
{
	Global_99422.f_190[iParam0] = 1;
	Global_99422.f_189 = 1;
}

void func_456(int iParam0)
{
	if (func_457() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_457()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

void func_458()
{
	unk_0x20D884FB6567BAD5(5);
	func_460();
	unk_0x5E84945E26CAEF1F(1f);
	unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 8);
	func_459();
}

void func_459()
{
	if (Global_1679103)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1679104, 0))
		{
			unk_0xC664C0067EEAB8D1(&Global_2553359, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_1679104, 1))
		{
			unk_0xC664C0067EEAB8D1(&Global_2553359, 1);
		}
		if (unk_0x234B68AC2E35ED5A(Global_1679104, 5))
		{
			unk_0xC664C0067EEAB8D1(&Global_2553359, 5);
		}
		if (unk_0x4336DC3297C47528(-355737150))
		{
			unk_0x1EA8B94F4F446F35(-355737150, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(-580979506))
		{
			unk_0x1EA8B94F4F446F35(-580979506, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(-1426452475))
		{
			unk_0x1EA8B94F4F446F35(-1426452475, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(745417724))
		{
			unk_0x1EA8B94F4F446F35(745417724, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(-1305304906))
		{
			unk_0x1EA8B94F4F446F35(-1305304906, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(-1543175077))
		{
			unk_0x1EA8B94F4F446F35(-1543175077, 1, 0, 0);
		}
		if (unk_0x4336DC3297C47528(-811770997))
		{
			unk_0x1EA8B94F4F446F35(-811770997, 1, 0, 0);
		}
		Global_1679104 = 0;
	}
	Global_1679103 = 0;
}

void func_460()
{
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && Global_2544210.f_5186 < 1f)
		{
			return;
		}
	}
	Global_2544210.f_5187 = -1;
	Global_2544210.f_5186 = 1f;
}

void func_461()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_462()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (unk_0x234B68AC2E35ED5A(iLocal_88, 13))
	{
		return;
	}
	bVar0 = unk_0x234B68AC2E35ED5A(Local_84.f_3, 6);
	bVar1 = unk_0x234B68AC2E35ED5A(iLocal_88, 21);
	bVar2 = unk_0x234B68AC2E35ED5A(iLocal_88, 23);
	bVar3 = Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_634())
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_89, 17))
		{
			if (func_857(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || bVar2)
				{
					if (!func_204())
					{
						if (!func_754())
						{
							if (bVar0)
							{
								func_642(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
								{
									func_642(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]) && func_109(Local_84.f_7[0]))
								{
									unk_0x191DDA30577F440A(&iLocal_89, 11);
									unk_0x191DDA30577F440A(&iLocal_89, 16);
									func_642(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_642(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_642(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 16))
							{
								func_642(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_642(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
							{
								if (func_527())
								{
									unk_0x191DDA30577F440A(&iLocal_89, 11);
									unk_0x191DDA30577F440A(&iLocal_89, 16);
									func_642(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_642(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_527())
							{
								unk_0x191DDA30577F440A(&iLocal_89, 11);
								unk_0x191DDA30577F440A(&iLocal_89, 16);
								func_642(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_642(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_527())
							{
								unk_0x191DDA30577F440A(&iLocal_89, 11);
								unk_0x191DDA30577F440A(&iLocal_89, 16);
								func_642(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_642(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || unk_0x234B68AC2E35ED5A(Local_84.f_3, 16))
						{
							func_642(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_526(1);
					Local_85.f_6 = (Local_85.f_6 + iVar4);
					if (!Global_262145.f_11680)
					{
						if (Local_85.f_6 > 0)
						{
							func_525(19, Local_85.f_6);
						}
					}
					Global_2465707 = iVar4;
					if (iVar4 > 0)
					{
						if (func_524())
						{
							func_512(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0xAD592DB2F96ECA57(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_511(1);
					Local_85.f_7 = (Local_85.f_7 + iVar7);
					func_510();
					func_463(0, unk_0x7D2B9E6A64637269(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
					Local_85.f_5 = 2;
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 398, 0);
					if (!unk_0x234B68AC2E35ED5A(iLocal_89, 16))
					{
						unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
					}
					unk_0x191DDA30577F440A(&iLocal_89, 17);
					unk_0x191DDA30577F440A(&iLocal_89, 18);
				}
			}
		}
	}
}

int func_463(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_464(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_464(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_474(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				iVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_470(unk_0x885F3A431ECE75E3(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_465(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_465(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_468(iParam0, 1) };
	if (iParam0 == func_467(unk_0x7D2B9E6A64637269()))
	{
		func_466(1);
	}
	func_470(Var0, iParam1, 0, sParam2, iParam3);
}

void func_466(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_467(int iParam0)
{
	return iParam0;
}

Vector3 func_468(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var1 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_469(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar2 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_469(int iParam0)
{
	return iParam0;
}

void func_470(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_473(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam1;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam2;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_472();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_471();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam4);
		}
	}
}

int func_471()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_472()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_473(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_474(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_475(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_475(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_509(unk_0x1146A9AE09CE2B14()) || func_508(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_373() || func_506(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_175(uParam2))
	{
	}
	if (func_505())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_503(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_502(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_500(0, &iVar1);
					break;
				
				case 3:
					func_500(1, &iVar1);
					break;
				
				case 1:
					func_497(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_495(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_485((func_494(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_495(1166, iVar1, -1);
				}
				func_480(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_476((func_478(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_476((func_478(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_476(int iParam0)
{
	if (func_505())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_477(joaat("mpply_globalxp"), iParam0);
	}
}

void func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, 1);
	}
}

int func_478(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_857(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_479(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_479(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_479(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_480(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_483(func_484(&Var0));
			if (iVar1 == 0)
			{
				func_482(&Global_1390382, iParam0);
				func_481(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_482(&Global_1390383, iParam0);
				func_481(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_482(&Global_1390384, iParam0);
				func_481(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_482(&Global_1390385, iParam0);
				func_481(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_482(&Global_1390386, iParam0);
				func_481(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_481(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_482(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_483(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_484(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	if (func_505())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_247(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_247(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_493(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_491(iParam0, 1);
		}
		func_490(640, iParam0, -1, 1);
		func_489(641, func_491(iParam0, 1), -1, 1, 0);
		Global_1390527[func_247(-1)] = iParam0;
		func_486(-1109644434, 7, 0);
	}
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_488(iParam1, iParam2))
	{
		iVar0 = func_487();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_487()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_488(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_247(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

void func_490(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_247(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_247(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_247(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_247(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_247(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_247(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_247(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_247(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_247(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_247(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_247(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_247(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_247(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_247(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_247(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_247(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_247(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_247(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_247(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_247(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_247(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_247(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_247(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_247(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_247(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_247(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_247(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_247(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_247(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_247(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_247(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_247(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_247(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_247(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_247(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_247(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_247(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_247(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_247(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_247(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_247(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_247(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_247(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_247(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_247(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_247(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_247(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_247(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_247(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_247(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_247(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_247(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_247(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_491(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_492(iParam0, 0);
}

int func_492(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_493(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_494(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_247(-1)];
			}
			else if (func_493(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_247(-1)];
	}
	return 0;
}

void func_495(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_267(iParam0, func_247(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_496(iParam0))
	{
		func_489(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_490(iParam0, iVar0, iParam2, 1);
	}
}

int func_496(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

void func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_499(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_67(unk_0x1146A9AE09CE2B14(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_498(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_498(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_498(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_499(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_500(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_857(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_67(unk_0x1146A9AE09CE2B14(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_857(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_501(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(unk_0x1146A9AE09CE2B14(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_498(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_498(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_501(int iParam0, int iParam1)
{
	return vdist(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_502(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_498(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_503(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_494(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_494(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_504(8000, 0, 0) > 0)
	{
		if (func_504(8000, 0, 0) < (iParam0 + func_494(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_504(8000, 0, 0) - func_494(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_504(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_293361[iParam0];
}

int func_505()
{
	return 1;
}

int func_506(int iParam0)
{
	return func_507(func_345(iParam0));
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_508(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_509(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_510()
{
	Global_2465048 = 1;
}

int func_511(bool bParam0)
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(iLocal_89, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_754())
		{
			return Global_262145.f_11494;
		}
		else
		{
			return Global_262145.f_11433;
		}
	}
	func_453();
	if (func_754())
	{
		iVar0 = (Global_262145.f_11494 * iLocal_568);
	}
	else
	{
		iVar0 = (Global_262145.f_11433 * iLocal_568);
	}
	return iVar0;
}

void func_512(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_524())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_513(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_513(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_513(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			func_513(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_513(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_524())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_18()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_520(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_519(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_514(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_514(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_515(iParam0);
	}
}

void func_515(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_524())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_518(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_516(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_516(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_517(&(uParam0->f_14));
	func_517(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_517(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_518(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_519(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_520(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_524())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_521(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_521(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_523(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_522();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_522()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

var func_523(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_524()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

void func_525(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!unk_0x3640D836D145B814() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_526(bool bParam0)
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(iLocal_89, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_754())
		{
			return Global_262145.f_11493;
		}
		else
		{
			return Global_262145.f_11432;
		}
	}
	func_453();
	if (func_754())
	{
		iVar0 = (Global_262145.f_11493 * iLocal_568);
	}
	else
	{
		iVar0 = (Global_262145.f_11432 * iLocal_568);
	}
	return iVar0;
}

int func_527()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iLocal_545]))
	{
		if (func_109(Local_84.f_7[iLocal_545]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_84.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_84.f_256[iLocal_545];
	if (!bVar0)
	{
		if (Local_84.f_594[0 /*4*/] != iLocal_545)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_84.f_594[0 /*4*/] == iLocal_545)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_84.f_256[Local_84.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_84.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_528()
{
	int iVar0;
	var uVar1;
	
	func_692(&iVar0, &uVar1);
	if (iLocal_545 > -1)
	{
		if (func_109(Local_84.f_7[iLocal_545]))
		{
			return 1;
		}
	}
	return 0;
}

void func_529()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_84.f_241 == 1)
	{
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_557) || (func_22(&uLocal_557) && func_19(&uLocal_557, 5000, 0)))
				{
					if (Local_84.f_27 == joaat("savage") || Local_84.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_545;
						if (iVar1 > -1)
						{
							if (func_109(Local_84.f_7[iVar1]))
							{
								iVar0 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xECEC7528A52B4EE8(iVar0))
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x72D30262CF8C8603(iVar0))
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_84.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_545;
						if (iVar1 > -1)
						{
							if (func_109(Local_84.f_7[iVar1]))
							{
								iVar0 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
								else if (unk_0xECEC7528A52B4EE8(iVar0))
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x72D30262CF8C8603(iVar0))
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
								}
								if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0xEF6894DFD91DE23D(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0xECEC7528A52B4EE8(iVar0))
											{
												if (unk_0x72D30262CF8C8603(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_557);
					func_20(&uLocal_557, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x234B68AC2E35ED5A(Local_84.f_319, iVar2))
		{
			if (unk_0xB7D6400C89373777(Local_84.f_7[iVar2]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 0))
				{
					if ((func_442() - func_126(&(Local_84.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
						{
							if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 0))
							{
								if (!func_204())
								{
									func_441();
									func_172((func_442() - func_126(&(Local_84.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
						{
							if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 0))
							{
								if (!func_204())
								{
									func_441();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (unk_0xB364346471C3B028(Local_84.f_7[iVar2]))
						{
							unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 0);
							unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), true);
							if (!unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iVar2]))))
							{
								unk_0xF55761292A0FA0E8(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 1, 0, -1);
								func_25(&(Local_84.f_7[iVar2]));
							}
							else
							{
								unk_0x04C294C4E7154351(unk_0x854C404AEB476240(Local_84.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_84.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 == iVar2)
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_89, 6))
				{
					if (func_432(0, 1, 1, 1))
					{
						if (func_754())
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_89, 19))
							{
								func_431("UW_NOPILC", 30000);
							}
							else
							{
								func_431("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_431("UW_NOPIL", 30000);
						}
						func_430(1);
						unk_0x191DDA30577F440A(&iLocal_89, 6);
					}
					else if (unk_0x234B68AC2E35ED5A(iLocal_89, 19))
					{
						if (unk_0xE8FFE38E2BA32BD6())
						{
							unk_0x66AE54CE92457FEE(1);
						}
					}
				}
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					iVar5 = Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10;
					if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar5]))
					{
						if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar5])))
						{
							if (!func_754())
							{
								if (!func_275("UW_EXPL"))
								{
									func_269("UW_EXPL", 0);
								}
							}
							else if (!func_275("UW_EXPLC"))
							{
								func_269("UW_EXPLC", 0);
							}
						}
						else if (func_275("UW_EXPL") || func_275("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_275("UW_EXPL") || func_275("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_530(int iParam0)
{
	return Global_2441237.f_2841[0 /*80*/].f_1 == iParam0;
}

void func_531()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
	{
		if (Local_84.f_27 == joaat("rhino"))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_553) || (func_22(&uLocal_553) && func_19(&uLocal_553, 5000, 0)))
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (func_69(Local_569, 0f, 0f, 0f, 0))
							{
								Local_569 = { Local_84.f_30[0 /*3*/] };
							}
							fVar0 = func_533(unk_0x7D2B9E6A64637269(), Local_569, 1);
							if (fVar0 > 750f)
							{
								unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_553);
						func_20(&uLocal_553, 0, 0);
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (!func_275("UW_OOB"))
					{
						func_269("UW_OOB", 0);
					}
					if (!func_22(&uLocal_555))
					{
						uVar2 = unk_0x5AD02BBC63E31E46();
						unk_0xE2D24A37AFCF27BF(uVar2, "Explosion_Countdown", unk_0x854C404AEB476240(Local_84.f_7[func_532()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0xB76EE71E771BDAA1(uVar2, "Time", 30f);
						func_20(&uLocal_555, 0, 0);
					}
					if (func_22(&uLocal_555))
					{
						if ((func_442() - func_126(&uLocal_555, 0, 0)) >= 0)
						{
							func_441();
							func_172((func_442() - func_126(&uLocal_555, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_441();
							func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 11);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
					{
						fVar0 = func_533(unk_0x7D2B9E6A64637269(), Local_84.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 10);
							func_106(&uLocal_555);
							unk_0x791B4C3811D53DFA(uVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
	{
		func_694(1);
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			iVar1 = func_532();
			if (iVar1 > -1)
			{
				if (func_109(Local_84.f_7[iVar1]))
				{
					if (unk_0xB364346471C3B028(Local_84.f_7[iVar1]))
					{
						unk_0x8F160110753EB17B(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), 0);
						unk_0x712766206A1FB244(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), true);
						unk_0xF55761292A0FA0E8(unk_0x854C404AEB476240(Local_84.f_7[iVar1]), 1, 0, -1);
						func_25(&(Local_84.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_532()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar1]))
			{
				if (func_109(Local_84.f_7[iVar1]))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_533(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam2);
}

void func_534()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 24))
	{
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 1)
		{
			func_692(&iVar1, &uVar0);
			if (func_537(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_84.f_22[iVar1] != func_5())
					{
						fLocal_94 = unk_0xD37A24583365B8E9();
						unk_0x84C39F568C7207FE(-1f);
						func_536(1, iVar1);
						unk_0x191DDA30577F440A(&iLocal_88, 24);
						func_535(1);
					}
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&iLocal_88, 24);
				unk_0x191DDA30577F440A(&iLocal_88, 25);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 25))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_88, 24))
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 > 1)
			{
				unk_0x84C39F568C7207FE(fLocal_94);
				func_692(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_536(0, iVar1);
					unk_0x191DDA30577F440A(&iLocal_88, 25);
					func_535(0);
				}
			}
		}
	}
}

void func_535(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 15);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 4);
	}
}

void func_536(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
			if (func_857(iVar1, 0, 1) && iVar1 != unk_0x1146A9AE09CE2B14())
			{
				if (unk_0x234B68AC2E35ED5A(Local_87[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x8A10C07236045CF1(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x8A10C07236045CF1(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_537(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (!bVar0)
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
			{
				if (iVar1 != unk_0xDD0E57E73E5C4BF6())
				{
					if (unk_0x234B68AC2E35ED5A(Local_87[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_538()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD09C9D030AFD3F25())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 15))
	{
		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 2)
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 == 0)
			{
				if (Local_84.f_22[0] != func_5())
				{
					if (func_432(0, 0, 1, 1))
					{
						if (!func_754())
						{
							if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
							{
								if (!func_754())
								{
									func_549("UW_START1P", unk_0xF04DBC0AC5A2AB23(Local_84.f_22[0]), 1, 30000);
								}
								else
								{
									func_549("UW_START1PC", unk_0xF04DBC0AC5A2AB23(Local_84.f_22[0]), 1, 30000);
								}
								func_430(1);
							}
							else if (unk_0x234B68AC2E35ED5A(Local_84.f_15, 0))
							{
								if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14))
								{
									if (!func_754())
									{
										func_431("UW_STARTM", 30000);
									}
									else
									{
										func_431("UW_STARTMC", 30000);
									}
									func_430(1);
								}
							}
							else
							{
								func_549("UW_START1P", unk_0xF04DBC0AC5A2AB23(Local_84.f_22[0]), 1, 30000);
								func_430(1);
							}
						}
						else if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14))
						{
							if (!func_754())
							{
								func_431("UW_STARTM", 30000);
							}
							else
							{
								func_431("UW_STARTMC", 30000);
							}
							func_430(1);
						}
						unk_0x191DDA30577F440A(&iLocal_88, 15);
					}
				}
			}
		}
	}
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 2)
	{
		if (Local_84.f_241 == 1)
		{
			if (Local_84.f_27 != joaat("hydra") && Local_84.f_27 != joaat("rhino"))
			{
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
					if (iLocal_545 >= 0)
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_89, 10))
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_89, 9))
							{
								if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iLocal_545]))
								{
									if (func_109(Local_84.f_7[iLocal_545]))
									{
										unk_0x191DDA30577F440A(&iLocal_89, 9);
									}
								}
							}
							else if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iLocal_545]))
							{
								if (!func_109(Local_84.f_7[iLocal_545]))
								{
									func_548("UW_TEAMV", 0);
									unk_0x191DDA30577F440A(&iLocal_89, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_754())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_88, (16 + iVar1)))
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 >= 2)
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 == 0)
						{
							if ((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
							{
								if (unk_0xB7D6400C89373777(Local_84.f_7[0]))
								{
									if (func_109(Local_84.f_7[0]))
									{
										if (unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_547(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_539("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											unk_0x191DDA30577F440A(&iLocal_88, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_539(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var1))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		unk_0xB2A9BDF905DC5A51(iParam2);
		unk_0xA91D83F2CC1345A6(func_545(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
		else
		{
			Global_2518253 = { func_66(iParam1) };
			if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
			{
				iVar2 = 0;
				if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2518183.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_544(&Var1) };
					}
					iVar0 = unk_0x05F3E4A6F62A5ACD(iVar3, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar2, 0, Global_2518183, &Var1, Global_1314059, Global_1314060, Global_1314061);
				}
				else
				{
					iVar0 = unk_0x3C42479A3436E320(iVar3, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar2, 0, Global_2518183, Global_1314059, Global_1314060, Global_1314061);
				}
			}
			else
			{
				iVar0 = unk_0x02B23FCAC192C764(0, 1);
			}
		}
		func_540(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_540(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_543() || !unk_0xE45310E861787FC2()) || !func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_541(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_541(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_542(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_542(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_543()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

struct<16> func_544(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_545(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_546(&cVar0);
}

var func_546(char[4] cParam0)
{
	return cParam0;
}

int func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (unk_0xB7D6400C89373777(Local_84.f_7[iParam1]))
	{
		if (func_109(Local_84.f_7[iParam1]))
		{
			iVar1 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0x72D30262CF8C8603(iVar1))
				{
					iVar0 = unk_0xCB567ED25393C1DF(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_548(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xAD97A7EDCF347FBB(sParam0);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	func_540(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_549(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	unk_0xA91D83F2CC1345A6(sParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam3);
}

void func_550()
{
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 9))
	{
		if (Local_84.f_241 == 1)
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
			{
				if (unk_0xFB8A6909539A30B1("KILL_LIST_START_MUSIC"))
				{
					unk_0x191DDA30577F440A(&iLocal_88, 9);
				}
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_88, 10))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_88, 9))
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 > 1)
			{
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
				{
					if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0xFB8A6909539A30B1("MP_MC_FAIL"))
						{
							unk_0x191DDA30577F440A(&iLocal_88, 10);
						}
					}
					else if (unk_0xFB8A6909539A30B1("KILL_LIST_STOP_MUSIC"))
					{
						unk_0x191DDA30577F440A(&iLocal_88, 10);
						func_551();
					}
				}
			}
		}
	}
}

void func_551()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_5028, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5028), 1);
	}
	if (Global_2544210.f_5028 > 0)
	{
		unk_0xFB8A6909539A30B1("FM_COUNTDOWN_30S_KILL");
		unk_0xFB8A6909539A30B1("FM_COUNTDOWN_30S_FIRA");
		unk_0xC0BBE340BE2AA02D("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x4F62815699141072(1);
		Global_2544210.f_5028 = 0;
		unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
		unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
		unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
		if (!unk_0xDA654EB115F9FF7D(unk_0x471C98FD94C0A5FD(), "am_pi_menu"))
		{
			if (Global_2544210.f_5038 > -1)
			{
				unk_0xBAB6F7501A822416(Global_2544210.f_5038);
				Global_2544210.f_5038 = -1;
			}
		}
	}
}

void func_552()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 8))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 26))
			{
				if ((((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2)) || (func_754() && unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))) || (func_754() && unk_0x234B68AC2E35ED5A(Local_84.f_3, 15)))
				{
					if (!func_22(&uLocal_564))
					{
						func_20(&uLocal_564, 0, 0);
					}
					if (func_19(&uLocal_564, 1000, 0))
					{
						if (func_275("UW_ATTK"))
						{
							func_9();
						}
						func_625();
						if (func_624())
						{
							iVar13 = func_526(1);
							if (iVar13 > 0)
							{
								Local_85.f_6 = (Local_85.f_6 + iVar13);
								if ((!Global_262145.f_11680 && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 8)) || (!Global_262145.f_11681 && unk_0x234B68AC2E35ED5A(Local_84.f_3, 8)))
								{
									if (Local_85.f_6 > 0)
									{
										func_525(19, Local_85.f_6);
									}
								}
								Global_2465707 = iVar13;
								if (func_524())
								{
									func_512(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_511(1);
							func_510();
							Local_85.f_7 = (Local_85.f_7 + iVar11);
							func_463(0, unk_0x7D2B9E6A64637269(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_85.f_5 = 2;
							func_642(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_754())
						{
							iVar13 = func_637(0);
							func_612(&iVar13, 1);
							iVar13 = (iVar13 + func_526(1));
							if (iVar13 > 0)
							{
								Local_85.f_6 = (Local_85.f_6 + iVar13);
								if (!Global_262145.f_11680)
								{
									if (Local_85.f_6 > 0)
									{
										func_525(19, Local_85.f_6);
									}
								}
								Global_2465707 = iVar13;
								if (func_524())
								{
									func_512(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_511(1);
							iVar11 = (iVar11 + func_611());
							Local_85.f_7 = (Local_85.f_7 + iVar11);
							func_510();
							func_463(0, unk_0x7D2B9E6A64637269(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_85.f_5 = 1;
							func_641(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_610())
						{
							if (!func_609(1))
							{
								if (!func_275("UW_EXPL") && !func_275("UW_EXPLC"))
								{
									func_9();
								}
								iVar13 = func_637(0);
								func_612(&iVar13, 1);
								iVar13 = (iVar13 + func_526(1));
								Local_85.f_6 = (Local_85.f_6 + iVar13);
								if (!Global_262145.f_11681)
								{
									if (Local_85.f_6 > 0)
									{
										func_525(19, Local_85.f_6);
									}
								}
								Global_2465707 = iVar13;
								if (iVar13 > 0)
								{
									if (func_524())
									{
										func_512(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
								{
									func_641(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_641(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_85.f_5 = 1;
								iVar11 = func_611();
								iVar11 = (iVar11 + func_511(1));
								Local_85.f_7 = (Local_85.f_7 + iVar11);
								func_510();
								func_463(0, unk_0x7D2B9E6A64637269(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_526(1);
								iVar11 = func_511(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_84.f_465[iVar10 /*4*/].f_1 == Local_84.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
										{
											if (Local_84.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_84.f_465[iVar10 /*4*/].f_2 != unk_0x1146A9AE09CE2B14())
												{
													if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_84.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = unk_0xC502CD39B4994F3A(Local_84.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_545 > -1)
										{
											if (iLocal_545 != Local_84.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_84.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_5())
									{
										bVar9 = true;
									}
									else
									{
										func_608(68, "UW_DRAWP", unk_0xF04DBC0AC5A2AB23(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_641(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar9)
								{
									if (!func_754())
									{
										func_642(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_642(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar14 = round((to_float(func_637(0)) / to_float(iVar8)));
								iVar12 = round((to_float(func_611()) / to_float(iVar8)));
								func_612(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_85.f_6 = (Local_85.f_6 + iVar13);
								if (!Global_262145.f_11681)
								{
									if (Local_85.f_6 > 0)
									{
										func_525(19, Local_85.f_6);
									}
								}
								Global_2465707 = iVar13;
								if (iVar13 > 0)
								{
									if (func_524())
									{
										func_512(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_85.f_7 = (Local_85.f_7 + iVar11);
								func_510();
								func_463(0, unk_0x7D2B9E6A64637269(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_606(1);
							iVar13 = func_526(1);
							iVar11 = func_511(1);
							Local_85.f_6 = (Local_85.f_6 + iVar13);
							if (!Global_262145.f_11681)
							{
								if (Local_85.f_6 > 0)
								{
									func_525(19, Local_85.f_6);
								}
							}
							Global_2465707 = iVar13;
							if (iVar13 > 0)
							{
								if (func_524())
								{
									func_512(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_85.f_7 = (Local_85.f_7 + iVar11);
							func_510();
							func_463(0, unk_0x7D2B9E6A64637269(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_609(0))
							{
								iVar5 = Local_84.f_465[0 /*4*/];
								if (!func_275("UW_EXPL") && !func_275("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
								{
									iVar2 = unk_0xC502CD39B4994F3A(Local_84.f_465[0 /*4*/].f_2);
									if (func_317(iVar2, 1))
									{
										iVar26 = func_321(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = func_319(iVar26);
											sVar27 = func_600(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_5())
									{
										if (!bVar25)
										{
											if (!func_754())
											{
												func_608(65, "UW_FWONP", unk_0xF04DBC0AC5A2AB23(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_608(65, "UW_FWONPC", unk_0xF04DBC0AC5A2AB23(iVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_754())
										{
											func_598(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_598(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_754())
									{
										func_641(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_641(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_275("UW_EXPL") && !func_275("UW_EXPLC"))
								{
									func_9();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_84.f_465[iVar10 /*4*/].f_1 == Local_84.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
										{
											if (Local_84.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_84.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = unk_0xC502CD39B4994F3A(Local_84.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_545 > -1)
										{
											if (iLocal_545 != Local_84.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_84.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_84.f_27 == joaat("hydra") || Local_84.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_5() && unk_0x8CFC2F41A749E236(iVar3[0]))
										{
											if (iVar3[1] != func_5() && unk_0x8CFC2F41A749E236(iVar3[1]))
											{
												func_558(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_322(), 15000, func_322(), unk_0xF04DBC0AC5A2AB23(iVar3[0]), unk_0xF04DBC0AC5A2AB23(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_641(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2, 0);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_642(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_665(0);
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
						{
							Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
						}
						unk_0x191DDA30577F440A(&iLocal_88, 13);
						unk_0x191DDA30577F440A(&iLocal_88, 26);
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6) || (!func_754() && unk_0x234B68AC2E35ED5A(Local_84.f_3, 15)))
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_10 != -1)
					{
						func_642(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_641(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_665(0);
					unk_0x191DDA30577F440A(&iLocal_88, 26);
					iVar13 = func_526(1);
					Local_85.f_6 = (Local_85.f_6 + iVar13);
					if (!Global_262145.f_11680)
					{
						if (Local_85.f_6 > 0)
						{
							func_525(19, Local_85.f_6);
						}
					}
					Global_2465707 = iVar13;
					if (iVar13 > 0)
					{
						if (func_524())
						{
							func_512(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_511(1);
					Local_85.f_7 = (Local_85.f_7 + iVar11);
					func_510();
					func_463(0, unk_0x7D2B9E6A64637269(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_85.f_5 = 2;
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
					{
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 14))
				{
					func_665(0);
					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 3)
					{
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 11))
				{
					func_641(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_665(0);
					unk_0x191DDA30577F440A(&iLocal_88, 26);
					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
					iVar13 = func_526(1);
					Local_85.f_6 = (Local_85.f_6 + iVar13);
					if (!Global_262145.f_11680)
					{
						if (Local_85.f_6 > 0)
						{
							func_525(19, Local_85.f_6);
						}
					}
					Global_2465707 = iVar13;
					if (iVar13 > 0)
					{
						if (func_524())
						{
							func_512(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							unk_0xAD592DB2F96ECA57(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_511(1);
					Local_85.f_7 = (Local_85.f_7 + iVar11);
					func_510();
					func_463(0, unk_0x7D2B9E6A64637269(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_85.f_5 = 2;
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
					{
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 12))
				{
					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 8))
			{
				if (unk_0x234B68AC2E35ED5A(iLocal_88, 26))
				{
					if (func_275("UW_ATTK"))
					{
						func_9();
					}
					if (func_553(&uLocal_536, 1))
					{
						unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
					}
					if (!func_275("UW_EXPL") && !func_275("UW_EXPLC"))
					{
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 > -1)
						{
							if (unk_0x159BC3DDA80D71AC(Local_84.f_7[Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9]))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
								{
									if (func_109(Local_84.f_7[Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9]))
									{
										if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 8))
	{
		unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 8);
	}
}

int func_553(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_364()) && !(func_233(unk_0x1146A9AE09CE2B14(), 0) && (func_238(unk_0x1146A9AE09CE2B14()) || func_236(unk_0x1146A9AE09CE2B14())))) && !func_557(unk_0x1146A9AE09CE2B14()))
	{
		func_556();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 25);
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_555(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_554();
				func_555(uParam0, 2);
			}
			break;
		
		case 2:
			func_554();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_689("AMEV_LBD_HELP"))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_555(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
				func_555(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
			return 1;
	}
	return 0;
}

void func_554()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0))
	{
		if (((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_857(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0x8B6A925F148E0E94())
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 1);
			func_431("AMEV_LBD_HELP", -1);
			func_430(1);
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_555(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_556()
{
	Global_2465049 = 1;
}

int func_557(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_857(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_195(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_558(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_597(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_559(&Var0);
}

int func_559(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_570(uParam0, uParam0->f_17);
	func_569(uParam0);
	if (func_61())
	{
		func_569(uParam0);
	}
	if (func_568(uParam0->f_1))
	{
		func_561();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_560(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_561();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_362(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_560(uParam0->f_69, 128))
			{
				if (func_367(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_362(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_560(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_561()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_562();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_562()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_566(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_563(&(Global_2441237.f_3165.f_1), 1);
}

void func_563(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_565(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_564(0);
}

void func_564(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_565(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_566(var uParam0)
{
	func_567(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_567(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_568(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_569(var uParam0)
{
	if (func_369(uParam0->f_1))
	{
		uParam0->f_72 = func_322();
	}
}

void func_570(var uParam0, int iParam1)
{
	if (func_369(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_857(iParam1, 0, 1))
	{
		return;
	}
	if (func_367(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_571(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_571(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_406(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_406(unk_0x1146A9AE09CE2B14()) || (func_596() && func_595())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		uVar1 = func_594();
		if (unk_0x419E13582192CFEA(uVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_857(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_592(iParam1, iParam0, 0);
							}
							else
							{
								return func_583(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_583(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_592(iParam1, iParam0, 0);
				}
				else
				{
					return func_572(0, -1, 0);
				}
			}
			else
			{
				return func_572(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_592(iParam1, iParam0, 0);
		}
		else
		{
			return func_583(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_583(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_572(bool bParam0, int iParam1, bool bParam2)
{
	return func_573(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_573(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_582() || (func_581() && func_579())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_578(iParam2, iVar0);
		}
		else
		{
			return func_578(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_499(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_577(1);
				}
				else
				{
					return func_577(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_574(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_574(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_577(1);
	}
	return func_577(0);
}

int func_574(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_576(iParam0, iParam1, iParam3);
	if (func_575(Global_4456448.f_85535, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_575(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_576(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_499(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_577(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_578(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_576(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_579()
{
	if (func_580())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_580()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_581()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_582()
{
	if (func_580() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_583(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_586())
			{
				iVar3 = func_321(iParam0);
				if (!iVar3 == -1)
				{
					return func_319(iVar3);
				}
			}
			if ((func_585(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_499(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_577(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_584(1);
			}
			else
			{
				return func_573(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_577(1);
			}
			else
			{
				return func_573(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_321(iParam0);
	if (!iVar4 == -1)
	{
		return func_319(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_584(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_585(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

int func_586()
{
	if (((((func_301() || func_591()) || func_61()) || func_590()) || func_589()) || func_587())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_587()
{
	return func_588(Global_4456448.f_85535);
}

int func_588(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_589()
{
	return Global_2453009.f_24;
}

bool func_590()
{
	return Global_2453009.f_21;
}

var func_591()
{
	return Global_2453009.f_18;
}

int func_592(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_586())
	{
		iVar2 = func_321(iParam1);
		if (!iVar2 == -1)
		{
			return func_319(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_573(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_593(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_499(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_584(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_593(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_594()
{
	return Global_2359302.f_2;
}

bool func_595()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_596()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_597(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_598(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_599(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_599(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_597(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_362(&(Var0.f_69), 4);
	return func_559(&Var0);
}

char* func_600(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		uVar0 = func_605(&(Global_1630816[iParam0 /*597*/].f_11.f_105));
		return uVar0;
	}
	if (Global_1630816[iParam0 /*597*/].f_11.f_121 != Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_121)
	{
		uVar0 = func_603(iParam0, 0);
		return uVar0;
	}
	if (((func_237(iParam0, 28) || func_237(unk_0x1146A9AE09CE2B14(), 28)) || func_602(iParam0)) && !func_601(iParam0))
	{
		return func_603(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != unk_0x1146A9AE09CE2B14())
		{
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_603(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		uVar0 = func_605(&(Global_1630816[iVar1 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(uVar0))
		{
			return func_603(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_601(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (unk_0x2322DD4FBF5E4E2F())
	{
		if (unk_0x68B90AB279E39C7B(0))
		{
			if (unk_0x94D4A49E53F5209A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_602(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if (unk_0xE22116C6D321FECA() || unk_0x3640D836D145B814())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				return 0;
			}
		}
		else if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				if (unk_0x94D4A49E53F5209A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_603(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_305(iParam0, 1))
		{
			return func_604();
		}
	}
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACC");
}

char* func_604()
{
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACCM");
}

var func_605(var uParam0)
{
	return uParam0;
}

void func_606(bool bParam0)
{
	if (bParam0)
	{
		if (func_607(1))
		{
			unk_0x191DDA30577F440A(&Global_1574696, 1);
		}
	}
	else if (func_607(2))
	{
		unk_0x191DDA30577F440A(&Global_1574696, 2);
	}
}

int func_607(int iParam0)
{
	var uVar0;
	
	uVar0 = func_267(2536, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x234B68AC2E35ED5A(uVar0, 0) && unk_0x234B68AC2E35ED5A(iVar0, 1)) && unk_0x234B68AC2E35ED5A(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x234B68AC2E35ED5A(iVar0, 3) && unk_0x234B68AC2E35ED5A(iVar0, 4)) && unk_0x234B68AC2E35ED5A(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x234B68AC2E35ED5A(iVar0, 6) && unk_0x234B68AC2E35ED5A(iVar0, 7)) && unk_0x234B68AC2E35ED5A(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x234B68AC2E35ED5A(iVar0, 9) && unk_0x234B68AC2E35ED5A(iVar0, 10)) && unk_0x234B68AC2E35ED5A(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_608(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_597(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_559(&Var0);
}

int func_609(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_692(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_84.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_84.f_27 == joaat("rhino") || Local_84.f_27 == joaat("hydra"))
	{
		return Local_84.f_465[0 /*4*/].f_1 == Local_84.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_84.f_594[0 /*4*/].f_1 == Local_84.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_610()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_692(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_84.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_611()
{
	if (!func_754())
	{
		return round((to_float(Global_262145.f_11429) * Global_262145.f_11619));
	}
	if ((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
	{
		return round((to_float(Global_262145.f_11490) * Global_262145.f_11621));
	}
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
	{
		return round((to_float(Global_262145.f_11490) * Global_262145.f_11621));
	}
	return 0;
}

void func_612(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_623())
		{
			if (func_622(0))
			{
				if (!func_383(0))
				{
					if (unk_0x8CFC2F41A749E236(func_621()))
					{
						if (func_620() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_620());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_618(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_617("GB_BCUT_TICK1", func_621(), iVar0, 0, 0, 1);
						}
						func_616(20);
						func_613(func_621(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_613(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_857(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_615(iParam0);
		func_614(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_523(iParam0));
	}
}

void func_614(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_615(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

void func_616(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_617(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var1))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		unk_0xB2A9BDF905DC5A51(func_571(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_545(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_540(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_618(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_619(1);
	}
	else
	{
		iVar1 = func_619(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_619(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_620()
{
	return Global_262145.f_12567;
}

int func_621()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

bool func_622(bool bParam0)
{
	return func_317(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_623()
{
	return func_352(unk_0x1146A9AE09CE2B14());
}

int func_624()
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 6) && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_84.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_625()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_73[iVar0]))
		{
			if (!func_109(Local_84.f_73[iVar0]))
			{
				func_25(&(Local_84.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
		{
			if (func_31(Local_84.f_48[iVar0]))
			{
				func_25(&(Local_84.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_626(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_233(unk_0x1146A9AE09CE2B14(), 0) || func_346(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_238(unk_0x1146A9AE09CE2B14()) || func_250(unk_0x1146A9AE09CE2B14()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xC1C987F7EC21C39A() < iParam0)
	{
		if (bParam2)
		{
			func_631(sParam3, sParam4, 1);
		}
		if (func_630(26, -1))
		{
			func_628(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1574671.f_18)))
	{
		if (!func_19(&(Global_1574671.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1574671.f_18));
	}
	if (func_627())
	{
		if (bParam2)
		{
			func_631(sParam3, sParam4, 0);
		}
		if (func_630(26, -1))
		{
			func_628(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xAB0F784335D14AC3() < iParam0)
	{
		if (bParam2)
		{
			func_631(sParam3, sParam4, 1);
		}
		if (func_630(26, -1))
		{
			func_628(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_627()
{
	return unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 0);
}

void func_628(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xC2D5316F6C82B7CC(0, iParam1);
			break;
		
		default:
			uVar1 = func_629(iParam1);
			iVar0 = unk_0xC82CD1DB42480082(uVar1);
			if (unk_0x234B68AC2E35ED5A(iVar0, iParam0))
			{
				unk_0xC664C0067EEAB8D1(&iVar0, iParam0);
				unk_0xC2D5316F6C82B7CC(iVar0, iParam1);
			}
			break;
	}
}

int func_629(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_630(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	uVar0 = func_629(iParam1);
	uVar1 = unk_0xC82CD1DB42480082(uVar0);
	return unk_0x234B68AC2E35ED5A(uVar1, iParam0);
}

void func_631(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 2) && !func_206(unk_0x1146A9AE09CE2B14())) && !func_205(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xAB6A270F84A8781E(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_642(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 2);
	}
}

void func_632()
{
	Global_2544210.f_1855.f_56 = 1;
}

void func_633()
{
	Global_2544210.f_1855.f_54 = 1;
}

bool func_634()
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_1797, 11);
}

int func_635()
{
	if (iLocal_545 > -1)
	{
		if (func_109(Local_84.f_7[iLocal_545]))
		{
			if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iLocal_545])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_636(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x38CD3C04C877C35F(uParam2);
	return unk_0x0222F263F70347A8(0);
}

int func_637(bool bParam0)
{
	if (!func_754())
	{
		return round((to_float(Global_262145.f_11428) * Global_262145.f_11618));
	}
	if (bParam0)
	{
		return round((to_float(Global_262145.f_11489) * Global_262145.f_11620));
	}
	if ((unk_0x234B68AC2E35ED5A(Local_84.f_3, 0) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 1)) && unk_0x234B68AC2E35ED5A(Local_84.f_3, 2))
	{
		return round((to_float(Global_262145.f_11489) * Global_262145.f_11620));
	}
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 6))
	{
		return round((to_float(Global_262145.f_11489) * Global_262145.f_11620));
	}
	return 0;
}

char* func_638()
{
	if (Local_84.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0x48E10529AEAE00F9(Local_84.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_639(int iParam0, int iParam1, bool bParam2)
{
	if (func_248())
	{
		if (iParam1 == 1)
		{
			if (Global_2544210.f_4461 == -1)
			{
				Global_2544210.f_4461 = Global_262145.f_26682;
			}
			func_8(&(Global_2544210.f_4459), 0, 0);
			if (bParam2)
			{
				if (Global_2544210.f_4464 == -1)
				{
					Global_2544210.f_4464 = Global_262145.f_26683;
				}
				func_8(&(Global_2544210.f_4462), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
				func_694(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
			func_694(1);
		}
		if ((!unk_0xE45310E861787FC2() && !func_640()) && !func_254(unk_0x1146A9AE09CE2B14()))
		{
			Global_968396 = 0;
		}
		unk_0xE6363D7A51B58AD2(0, -1, -1, iParam0);
	}
}

bool func_640()
{
	return Global_2453009.f_840;
}

int func_641(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_597(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_362(&(Var0.f_69), iParam10);
	}
	return func_559(&Var0);
}

int func_642(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_597(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_362(&(Var0.f_69), iParam7);
	}
	return func_559(&Var0);
}

void func_643(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 4);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 4);
	}
}

void func_644(bool bParam0)
{
	int iVar0;
	
	if (unk_0x094C1D2DFE050D6E(unk_0x7D2B9E6A64637269(), 5) != 0)
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 177, 1);
		func_663(unk_0x1146A9AE09CE2B14(), func_267(586, -1, 0), 0);
		if (func_660(3610, -1, -1))
		{
		}
		iVar0 = func_267(2042, -1, 0);
		unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_659(unk_0xD56332194D622ECE(unk_0x1146A9AE09CE2B14()), iVar0));
		if (func_622(0))
		{
			func_663(unk_0x1146A9AE09CE2B14(), func_267(586, -1, 0), 0);
		}
		else
		{
			func_663(unk_0x1146A9AE09CE2B14(), func_658(Global_2553660), 0);
		}
		func_657(unk_0x1146A9AE09CE2B14(), iVar0);
		unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_650(unk_0x7D2B9E6A64637269(), iVar0), func_649(unk_0x7D2B9E6A64637269(), iVar0), 0);
		func_648(func_267(2042, -1, 0), 1);
		Global_2544210.f_287 = 1;
		func_645(unk_0x1146A9AE09CE2B14(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_645(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x02BFF15CAA701972())
	{
		func_647();
		if (iParam2 == -1)
		{
			iParam2 = func_267(2042, -1, 0);
		}
		unk_0x36BDFFB529ECB71F(iParam0, 5, func_650(unk_0xD56332194D622ECE(iParam0), iParam2), func_649(unk_0xD56332194D622ECE(iParam0), iParam2), 0);
		unk_0x2CD796D9868722DB(iParam0, func_659(unk_0xD56332194D622ECE(iParam0), iParam2));
		unk_0x4170FE884DF7426D(unk_0xD56332194D622ECE(iParam0), 5, func_650(unk_0xD56332194D622ECE(iParam0), iParam2), func_649(unk_0xD56332194D622ECE(iParam0), iParam2), func_659(unk_0xD56332194D622ECE(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_267(586, -1, 0);
		}
		if (func_622(1) && func_646(iParam0))
		{
			func_663(iParam0, func_658(Global_2553660), 0);
		}
		else
		{
			func_663(iParam0, iParam1, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_28, 4))
		{
			func_663(iParam0, Global_1574453, 1);
		}
		func_657(iParam0, iParam2);
		unk_0xD991F7672CE8EAD3(unk_0xD56332194D622ECE(iParam0), 177, 1);
	}
}

bool func_646(int iParam0)
{
	return func_237(iParam0, 10);
}

void func_647()
{
	Global_77220 = 0;
	Global_77221 = -1;
	Global_77222 = -1;
	Global_77223 = -1;
	Global_77224 = -1;
	Global_77228 = -1;
}

void func_648(int iParam0, int iParam1)
{
	if (unk_0x02BFF15CAA701972())
	{
		func_647();
		func_489(2042, iParam0, -1, 1, 0);
		unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_650(unk_0x7D2B9E6A64637269(), iParam0), func_649(unk_0x7D2B9E6A64637269(), iParam0), 0);
		func_657(unk_0x1146A9AE09CE2B14(), iParam0);
		unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_659(unk_0x7D2B9E6A64637269(), iParam0));
		if ((iParam1 && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) && unk_0x094C1D2DFE050D6E(unk_0x7D2B9E6A64637269(), 5) != 0)
		{
			func_645(unk_0x1146A9AE09CE2B14(), -1, -1);
		}
	}
}

int func_649(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
	}
	return 0;
}

var func_650(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 8);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	iVar2 = unk_0x094C1D2DFE050D6E(iParam0, 4);
	bVar3 = unk_0x094C1D2DFE050D6E(iParam0, 9) != false;
	iVar4 = unk_0xF94D55021DC59203(iParam0, 8, iVar0, unk_0x288277F22D527487(iParam0, 8));
	iVar5 = unk_0xF94D55021DC59203(iParam0, 11, iVar1, unk_0x288277F22D527487(iParam0, 11));
	iVar6 = unk_0xF94D55021DC59203(iParam0, 4, iVar2, unk_0x288277F22D527487(iParam0, 4));
	if (((((((bVar3 != Global_77220 || iParam1 != Global_77221) || iVar4 != Global_77222) || iVar5 != Global_77223) || iVar6 != Global_77224) || iVar0 != Global_77225) || iVar1 != Global_77226) || iVar2 != Global_77227)
	{
		Global_77220 = bVar3;
		Global_77221 = iParam1;
		Global_77222 = iVar4;
		Global_77223 = iVar5;
		Global_77224 = iVar6;
		Global_77225 = iVar0;
		Global_77226 = iVar1;
		Global_77227 = iVar2;
		Global_77228 = func_651(iParam0, iParam1);
	}
	return Global_77228;
}

int func_651(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6471F4759775FCA4(iParam0);
	uVar3 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
	if (unk_0x01758128AAB0BA8F(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_656(iParam0, iParam1, 1);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_656(iParam0, iParam1, 6);
			}
			if ((unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8)) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_656(iParam0, iParam1, 7);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		return func_656(iParam0, iParam1, 9);
	}
	if (func_655(iParam0))
	{
		if (bVar1)
		{
			return func_656(iParam0, iParam1, 7);
		}
		else
		{
			return func_656(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0xF94D55021DC59203(iParam0, 11, iVar0, unk_0x288277F22D527487(iParam0, 11));
		if (unk_0x01758128AAB0BA8F(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_656(iParam0, iParam1, 5);
			}
			else
			{
				return func_656(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_656(iParam0, iParam1, 8);
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_654(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_656(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_656(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_653(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_656(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_653(iVar4);
						break;
					}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_652(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_656(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_656(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_656(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_656(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_656(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_656(iParam0, iParam1, 9);
					}
					else
					{
						return func_656(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_656(iParam0, iParam1, 9);
					}
					else
					{
						return func_656(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_656(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_653(iVar4);
					break;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 8);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_656(iParam0, iParam1, 10);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 6);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 9);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 0);
			}
			else
			{
				return func_656(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_656(iParam0, iParam1, 10);
				}
				else
				{
					return func_656(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 3);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 1);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 9);
			}
			else
			{
				return func_656(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 10);
			}
			else
			{
				return func_656(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_656(iParam0, iParam1, 7);
			}
			else
			{
				return func_656(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_656(iParam0, iParam1, 2);
			}
			else
			{
				return func_656(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0))
		{
			return func_656(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_653(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 2);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 2);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 2);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 2);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 5);
				}
				else
				{
					return func_656(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 3);
				}
				else
				{
					return func_656(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 5);
				}
				else
				{
					return func_656(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_656(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 6);
				}
				else
				{
					return func_656(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 7);
				}
				else
				{
					return func_656(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_656(iParam0, iParam1, 1);
				}
				else
				{
					return func_656(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_656(iParam0, iParam1, 0);
	return 0;
}

int func_652(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_653(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_654(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x01758128AAB0BA8F(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_655(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 4, unk_0x094C1D2DFE050D6E(iParam0, 4), unk_0x288277F22D527487(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_656(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
	}
	return 0;
}

void func_657(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x42B4D8C7E389E8B7(iParam0);
	}
}

int func_658(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	return 0;
}

int func_660(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_662(iParam0, iParam1);
	uVar2 = func_661(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_661(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_662(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

void func_663(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_664(iParam1, iParam2, &uVar0, &uVar1))
	{
		unk_0x46F4AB5A03B1D05B(iParam0, uVar1);
		unk_0x2B8FFBB76011CA06(iParam0, uVar0);
	}
	else
	{
		unk_0x46F4AB5A03B1D05B(iParam0, 0);
		unk_0xC4BFC80D1A8C7DF2(iParam0);
	}
}

bool func_664(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

void func_665(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1797, 11))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_1797), 11);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1797, 11))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1797), 11);
	}
}

void func_666(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1797, 9))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_1797), 9);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1797, 9))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1797), 9);
	}
}

void func_667()
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
}

void func_668(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
		{
			if (((!func_250(unk_0x1146A9AE09CE2B14()) && !func_205(unk_0x1146A9AE09CE2B14())) && !func_677(unk_0x1146A9AE09CE2B14())) && !func_214(unk_0x1146A9AE09CE2B14()))
			{
				if (func_248())
				{
					func_639(2, 0, 1);
					func_676();
				}
				if (func_266(0))
				{
					iVar0 = func_267(2482, -1, 0);
					unk_0xC664C0067EEAB8D1(&iVar0, 0);
					func_676();
				}
				if (func_266(func_210(func_191(unk_0x1146A9AE09CE2B14()))))
				{
					iVar0 = func_267(2482, -1, 0);
					unk_0xC664C0067EEAB8D1(&iVar0, func_210(func_191(unk_0x1146A9AE09CE2B14())));
					func_676();
				}
				if (func_675())
				{
					func_676();
				}
				if (func_191(unk_0x1146A9AE09CE2B14()) > -1)
				{
					unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 7);
					if (func_228(unk_0x1146A9AE09CE2B14()))
					{
						func_674();
					}
					func_671(func_673(func_191(unk_0x1146A9AE09CE2B14())));
				}
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 7);
		func_669();
	}
}

void func_669()
{
	if (func_670())
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 17);
	}
}

bool func_670()
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 17);
}

void func_671(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_672() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_672()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_674()
{
	if (!func_670())
	{
		Global_2544210.f_6680 = unk_0x551F46B3C7DFB654();
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 17);
	}
}

int func_675()
{
	if (Global_2441237.f_1274.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_676()
{
	if (func_675())
	{
		Global_2441237.f_1274.f_16 = 1;
	}
}

bool func_677(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		if (((func_248() && !func_244()) || func_207(unk_0x1146A9AE09CE2B14(), 21)) || func_207(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1574671.f_13)))
		{
			if (!func_19(&(Global_1574671.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1574671.f_13));
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 9);
}

void func_678(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
	}
	Global_2544210.f_5038 = -1;
	bVar0 = (func_233(unk_0x1146A9AE09CE2B14(), 0) && func_238(unk_0x1146A9AE09CE2B14()));
	if (bParam6)
	{
		func_687(func_688(iParam0), 1);
	}
	else
	{
		func_686(iParam0, -1);
		if (func_206(unk_0x1146A9AE09CE2B14()))
		{
			Global_1574671.f_3 = iParam0;
		}
		else
		{
			func_716(iParam0);
		}
		Global_1574671.f_4 = -1;
		if (func_206(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 5);
		}
		if (((func_248() && !func_244()) || func_207(unk_0x1146A9AE09CE2B14(), 21)) || func_207(unk_0x1146A9AE09CE2B14(), 25))
		{
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 4);
		}
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 17);
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 20);
		if (func_685(iParam0))
		{
			func_684();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_683(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x5E84945E26CAEF1F(fParam2);
			if (iParam0 == 146)
			{
				unk_0x20D884FB6567BAD5(0);
				unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
				unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			}
		}
		if (func_682(iParam0))
		{
			unk_0x20D884FB6567BAD5(0);
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_456(1);
				if (func_607(0))
				{
					unk_0x191DDA30577F440A(&(Global_1574671.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x191DDA30577F440A(&(Global_1574671.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_454(1);
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 12);
		}
		if (bParam5)
		{
			func_681();
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_679(iParam0))
			{
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 21);
			}
		}
	}
	Global_2518144 = 1;
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_140(iParam0) == 1)
	{
		return 1;
	}
	if (func_680())
	{
		return 1;
	}
	return 0;
}

int func_680()
{
	switch (func_190())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_681()
{
	unk_0x191DDA30577F440A(&(Global_2544210.f_5029), 0);
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_239(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_683(float fParam0)
{
	float fVar0;
	
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_448())
	{
		return;
	}
	fVar0 = (Global_2544210.f_5186 - fParam0);
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && unk_0x0BCA9ADE67DF9DD8(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2544210.f_5186 = fParam0;
	Global_2544210.f_5187 = unk_0x62D18D65FE22FF39();
}

void func_684()
{
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_209 = 0;
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4628), 1);
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_686(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_266(0) || func_266(func_210(iVar0)))
		{
			unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 2);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 2);
		}
	}
}

void func_687(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_217, iParam0))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_217), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_217, iParam0))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_217), iParam0);
	}
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_689(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

int func_690()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_84.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	iVar1 = unk_0xEF6894DFD91DE23D(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x27FC1B0077581B37(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0xECEC7528A52B4EE8(iVar4))
			{
				if (unk_0x72D30262CF8C8603(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_691(bool bParam0)
{
	var uVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0xA6BE8F025C6B653F(uVar0))
		{
			unk_0x8F160110753EB17B(uVar0, bParam0);
			unk_0x712766206A1FB244(iVar0, !bParam0);
		}
	}
}

void func_692(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_84.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_693()
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (iVar0 != -1)
	{
		Global_1630816[iVar0 /*597*/] = -1;
	}
}

void func_694(bool bParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_248())
		{
			if (func_857(unk_0x1146A9AE09CE2B14(), 1, 0))
			{
				unk_0x13812A3531901D7E(unk_0x7D2B9E6A64637269(), 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 342, 0);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 122, 0);
			}
			unk_0x235C361BD000E938(unk_0x1146A9AE09CE2B14(), 1f);
			unk_0x319666C195174A88(0);
			unk_0x6FB1EB7F73800604(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x2287F6D727F498F6(0, 0);
				}
			}
		}
		else
		{
			if (func_857(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				unk_0x13812A3531901D7E(unk_0x7D2B9E6A64637269(), 0);
				unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 342, 1);
				unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 122, 1);
				unk_0x235C361BD000E938(unk_0x1146A9AE09CE2B14(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x2287F6D727F498F6(1, 0);
				}
			}
			unk_0x319666C195174A88(1);
			unk_0x6FB1EB7F73800604(0);
		}
	}
}

void func_695(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 0))
		{
			Global_2465681 = func_191(unk_0x1146A9AE09CE2B14());
			if (Global_2465681 == -1)
			{
				Global_2465681 = Global_1574671.f_4;
			}
			if (func_715(Global_2465681) == 0)
			{
				if (func_714(1) > 0)
				{
					func_713(26, -1);
				}
			}
			if (func_248())
			{
				func_639(2, 0, 1);
				func_676();
			}
			if (func_266(0))
			{
				iVar1 = func_267(2482, -1, 0);
				unk_0xC664C0067EEAB8D1(&iVar1, 0);
				func_676();
			}
			if (func_266(func_210(func_191(unk_0x1146A9AE09CE2B14()))))
			{
				iVar1 = func_267(2482, -1, 0);
				unk_0xC664C0067EEAB8D1(&iVar1, func_210(func_191(unk_0x1146A9AE09CE2B14())));
				func_676();
			}
			if (func_675())
			{
				func_676();
			}
			unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 0))
	{
		if ((!func_227() && !func_712()) && !func_711())
		{
			Global_2465681 = -1;
			func_628(26, -1);
		}
		else if (func_715(Global_2465681) == 0)
		{
			iVar0 = func_698(1);
			if (iVar0 > 0)
			{
				func_696(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_495(1934, 1, -1);
				func_696(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_630(26, -1))
		{
			Global_2465681 = -1;
			func_628(26, -1);
		}
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 0);
	}
}

void func_696(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_479(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_697(iParam0))
	{
		func_477(iParam0, iVar0);
	}
	else
	{
		func_481(iParam0, iVar0);
	}
}

int func_697(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2464559 == 0)
	{
		return 0;
	}
	if (func_711())
	{
		if (unk_0xE45310E861787FC2() || (func_710() || func_708()))
		{
			Global_2463501 = 1;
		}
	}
	Global_2464559 = 0;
	if (Global_1315728)
	{
		iVar0 = 1;
	}
	if (Global_2463501)
	{
		iVar0 = 1;
	}
	if (Global_2463500)
	{
		iVar0 = 1;
	}
	if (func_560(Global_111321.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2463441)
	{
		iVar0 = 1;
	}
	if (func_707(512))
	{
		iVar0 = 1;
	}
	if (func_706(128))
	{
		iVar0 = 1;
	}
	if (Global_1315752 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	if (Global_2463995)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_704())
		{
			if (Global_4456448.f_86069 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = 0;
	}
	if (func_703())
	{
		iVar0 = 0;
	}
	if ((Global_2463501 || Global_2463500) || Global_1315728)
	{
		if (func_708())
		{
			iVar0 = 0;
		}
	}
	Global_2463995 = 0;
	Global_2463500 = 0;
	Global_2463501 = 0;
	Global_1315728 = 0;
	Global_2463441 = 0;
	func_701(&(Global_111321.f_1), 32);
	func_700(512);
	func_699(128);
	return iVar0;
}

void func_699(int iParam0)
{
	Global_111378 = (Global_111378 - (Global_111378 && iParam0));
}

void func_700(int iParam0)
{
	Global_111379 = (Global_111379 - (Global_111379 && iParam0));
}

void func_701(var uParam0, int iParam1)
{
	func_702(uParam0, iParam1);
}

void func_702(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_703()
{
	if (((Global_1574443 || Global_1574413) || func_16(unk_0x1146A9AE09CE2B14(), 0)) || func_596())
	{
		return 1;
	}
	return 0;
}

int func_704()
{
	switch (func_705())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_705()
{
	return Global_2453903.f_1.f_2822;
}

bool func_706(int iParam0)
{
	return (Global_111378 && iParam0) != 0;
}

bool func_707(int iParam0)
{
	return (Global_111379 && iParam0) != 0;
}

int func_708()
{
	if (func_715(Global_2465681))
	{
		return 0;
	}
	if (func_709(unk_0x1146A9AE09CE2B14(), 146))
	{
		return 1;
	}
	return 0;
}

int func_709(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/] == iParam1)
	{
		return func_239(iParam0);
	}
	return 0;
}

int func_710()
{
	if (func_715(Global_2465681))
	{
		return 0;
	}
	if (func_239(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

bool func_711()
{
	return unk_0x234B68AC2E35ED5A(Global_1312443, 0);
}

bool func_712()
{
	return Global_1312870;
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xC2D5316F6C82B7CC(0, iParam1);
			break;
		
		default:
			uVar1 = func_629(iParam1);
			iVar0 = unk_0xC82CD1DB42480082(uVar1);
			if (!unk_0x234B68AC2E35ED5A(iVar0, iParam0))
			{
				unk_0x191DDA30577F440A(&iVar0, iParam0);
				unk_0xC2D5316F6C82B7CC(iVar0, iParam1);
			}
			break;
	}
}

int func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315752 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_704())
		{
			if (Global_4456448.f_86069 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = 0;
	}
	if (func_703())
	{
		iVar0 = 0;
	}
	Global_2464559 = 1;
	return iVar0;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11567)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11569)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11566)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11570)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11571)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11572)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11568)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11573)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11574)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11575)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11576)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_716(int iParam0)
{
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/] = iParam0;
}

void func_717(int iParam0)
{
	Global_2464796 = iParam0;
}

void func_718(int iParam0)
{
	if (func_204())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0x234B68AC2E35ED5A(iLocal_88, 0))
			{
				if ((((func_720(60000) && !unk_0xE8FFE38E2BA32BD6()) && !func_415()) && !unk_0xA300BD5F71A8C704()) && func_432(0, 1, 1, 1))
				{
					if (!func_754())
					{
						func_719("UW_HELP1", func_638(), func_637(1), 30000);
					}
					else
					{
						func_719("UW_HELP1C", func_638(), func_637(1), 30000);
					}
					func_430(0);
					unk_0x9B0169E27978C1A2(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0x191DDA30577F440A(&iLocal_88, 0);
				}
			}
			break;
	}
}

void func_719(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x38CD3C04C877C35F(uParam2);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam3);
}

bool func_720(int iParam0)
{
	return unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2413978, unk_0x551F46B3C7DFB654())) > iParam0;
}

void func_721()
{
	int iVar0;
	
	unk_0xC664C0067EEAB8D1(&iLocal_89, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_722(iVar0);
		iVar0++;
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_89, 15))
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 15))
		{
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 15);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 15))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 15);
	}
}

void func_722(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (unk_0xB7D6400C89373777(Local_84.f_7[iParam0]))
	{
		if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 0))
		{
			if (Local_84.f_241 == 0)
			{
			}
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 0))
		{
			if (!func_204())
			{
				if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1, iParam0))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_89, 15))
						{
							if (unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269()) == unk_0x854C404AEB476240(Local_84.f_7[iParam0]))
							{
								unk_0x191DDA30577F440A(&iLocal_89, 15);
							}
						}
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 0))
						{
							if (func_726("UW_HELP2", func_638()) || func_726("UW_HELP2C", func_638()))
							{
								unk_0x66AE54CE92457FEE(1);
							}
							if (!func_421(unk_0x1146A9AE09CE2B14()))
							{
								func_643(1);
							}
							iVar0 = func_725(unk_0x7D2B9E6A64637269(), 0);
							if (func_636("UW_HELP1", func_638(), func_637(1)) || func_636("UW_HELP1C", func_638(), func_637(1)))
							{
								unk_0x66AE54CE92457FEE(1);
							}
							if (Local_84.f_463 != -1)
							{
								if (iVar0 > (Local_84.f_463 - 2))
								{
									iVar0 = (Local_84.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1), iParam0);
							Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 = iParam0;
							unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 398, 1);
							func_196();
							iLocal_572 = iVar0;
						}
						else if (Local_84.f_241 == 0)
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_88, 1))
							{
								if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
								{
									if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_432(0, 1, 1, 1))
										{
											if (!func_754())
											{
												func_724("UW_HELP2", func_638(), 30000);
											}
											else
											{
												func_724("UW_HELP2C", func_638(), 30000);
											}
											func_430(1);
											unk_0x191DDA30577F440A(&iLocal_88, 1);
										}
									}
								}
							}
							if (!func_248())
							{
								if (unk_0x234B68AC2E35ED5A(iLocal_89, 2))
								{
									unk_0xC664C0067EEAB8D1(&iLocal_89, 2);
								}
								if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
								{
									if (!unk_0x234B68AC2E35ED5A(iLocal_88, 4))
									{
										if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 12))
										{
											unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 12);
										}
										if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
										{
											if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_432(0, 1, 1, 1))
												{
													if (!func_754())
													{
														func_431("UW_COPS", 30000);
													}
													else
													{
														func_431("UW_COPSC", 30000);
													}
													func_430(1);
													unk_0x191DDA30577F440A(&iLocal_88, 4);
												}
											}
										}
									}
									else if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0xC664C0067EEAB8D1(&iLocal_88, 4);
									}
								}
								else
								{
									if (unk_0x234B68AC2E35ED5A(iLocal_88, 4))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_88, 4);
									}
									if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 12))
									{
										unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 12))
								{
									unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 12);
								}
								if (!unk_0x234B68AC2E35ED5A(iLocal_89, 2))
								{
									if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_432(0, 1, 1, 1))
										{
											if (!func_754())
											{
												func_431("UW_PASSMD", 30000);
											}
											else
											{
												func_431("UW_PASSMD", 30000);
											}
											func_430(1);
											unk_0x191DDA30577F440A(&iLocal_89, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 == 0)
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_84.f_28)
								{
									if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1, iParam0))
								{
									unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1), iParam0);
								}
								if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 != -1)
								{
									Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 = -1;
								}
								if (func_689("UW_TIMEL"))
								{
									unk_0x66AE54CE92457FEE(1);
								}
								if (func_689("UW_TIMELA"))
								{
									unk_0x66AE54CE92457FEE(1);
								}
								if (func_421(unk_0x1146A9AE09CE2B14()))
								{
									func_643(0);
								}
								unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 398, 0);
							}
							else
							{
								if (Local_84.f_241 == 0 && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 4))
								{
									iVar0 = func_725(unk_0x7D2B9E6A64637269(), 0);
									if (Local_84.f_463 != -1)
									{
										if (iVar0 > (Local_84.f_463 - 2))
										{
											iVar0 = (Local_84.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_572)
									{
										unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1), iParam0);
										unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), (0 + iLocal_572 + 1));
									}
								}
								bVar1 = false;
								if (func_268())
								{
									if (Local_84.f_413 > -1)
									{
										iVar3 = (Local_84.f_413 - func_126(&(Local_84.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_723(bVar1);
								if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0x7F8C42905CE3AC40(unk_0x854C404AEB476240(Local_84.f_7[iParam0]));
								}
								if (!func_22(&uLocal_102))
								{
									func_20(&uLocal_102, 0, 0);
								}
								else if (func_19(&uLocal_102, 2000, 0))
								{
									if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 9) || !func_754())
									{
										if (func_689("UW_MINV"))
										{
										}
										if (!unk_0x234B68AC2E35ED5A(iLocal_88, 5))
										{
											if (Local_84.f_28 > 1 || (Local_84.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_84.f_326)))
												{
													if (!unk_0xE8FFE38E2BA32BD6())
													{
														if (func_112() > 1)
														{
															func_431("UW_TIMELA", 30000);
														}
														else
														{
															func_431("UW_TIMEL", 30000);
														}
														func_430(1);
														unk_0x191DDA30577F440A(&iLocal_88, 5);
													}
												}
											}
										}
									}
									else if (func_754())
									{
										if (!unk_0x234B68AC2E35ED5A(Local_84.f_3, 9))
										{
											if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0x234B68AC2E35ED5A(iLocal_88, 14))
												{
													if (!unk_0xE8FFE38E2BA32BD6())
													{
														func_431("UW_MINV", 30000);
														func_430(1);
														unk_0x191DDA30577F440A(&iLocal_88, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_84.f_241 == 0)
					{
						if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_689("UW_VALK") && !func_689("UW_VALKC"))
							{
								unk_0x80382F8EBF76114E();
								if (unk_0x234B68AC2E35ED5A(iLocal_88, 8))
								{
									unk_0xC664C0067EEAB8D1(&iLocal_88, 8);
								}
							}
							if (!unk_0x234B68AC2E35ED5A(iLocal_88, 8))
							{
								if (!unk_0xE8FFE38E2BA32BD6())
								{
									iVar6 = 0;
									iVar4 = unk_0x3CF5ADE443D18312(unk_0x854C404AEB476240(Local_84.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0x9B73EB6255D4AE81(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_754())
										{
											func_431("UW_VALK", 30000);
										}
										else
										{
											func_431("UW_VALKC", 30000);
										}
										func_430(1);
										unk_0x191DDA30577F440A(&iLocal_88, 8);
									}
									if (!unk_0x234B68AC2E35ED5A(iLocal_88, 8))
									{
										if (func_754())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar7]))
														{
															if (func_109(Local_84.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0x9B73EB6255D4AE81(unk_0x854C404AEB476240(Local_84.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_431("UW_VALKC", 30000);
												func_430(1);
												unk_0x191DDA30577F440A(&iLocal_88, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_84.f_241 == 1)
					{
						if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1, iParam0))
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_88, 6))
							{
								if (func_109(Local_84.f_7[iParam0]))
								{
									if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
									{
										if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iParam0])))
										{
											if (!unk_0x234B68AC2E35ED5A(iLocal_88, 7))
											{
												if ((unk_0x86AF801D34E482FF(0, 75) || unk_0x5C6675393464A814(0, 75)) || unk_0x51794501073F0A33(0, 75))
												{
													unk_0x191DDA30577F440A(&iLocal_88, 7);
												}
											}
											if (unk_0x234B68AC2E35ED5A(iLocal_88, 7))
											{
												if (!unk_0xE8FFE38E2BA32BD6())
												{
													if (func_754())
													{
														func_431("UW_EXITVC", 30000);
													}
													else
													{
														func_431("UW_EXITV", 30000);
													}
													func_430(1);
													unk_0x191DDA30577F440A(&iLocal_88, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (unk_0xB7D6400C89373777(Local_84.f_7[iVar10]))
					{
						if (unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_84.f_7[iVar10]), 0))
						{
							if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_84.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_266(0))
					{
						iVar9 = func_267(2482, -1, 0);
						unk_0xC664C0067EEAB8D1(&iVar9, 0);
						func_489(2482, iVar9, -1, 1, 0);
						func_676();
						if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 9))
						{
							unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 9);
						}
					}
					if (func_266(8))
					{
						iVar9 = func_267(2482, -1, 0);
						unk_0xC664C0067EEAB8D1(&iVar9, 8);
						func_489(2482, iVar9, -1, 1, 0);
						func_676();
						if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 9))
						{
							unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
					{
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 = 0;
					}
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 12))
					{
						unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 12);
					}
				}
				if (!unk_0x234B68AC2E35ED5A(iLocal_89, 14))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (func_109(Local_84.f_7[iParam0]))
						{
							if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_432(0, 1, 1, 1))
								{
									if (!func_257(129, 0, 0))
									{
										if (!func_754())
										{
											func_431("UW_TUT", -1);
										}
										else
										{
											func_431("UW_TUTC", -1);
										}
										func_430(1);
										unk_0x191DDA30577F440A(&iLocal_89, 14);
									}
									else
									{
										if (!func_754())
										{
											func_431("UW_HIDE", -1);
										}
										else
										{
											func_431("UW_HIDEC", -1);
										}
										func_430(1);
										unk_0x191DDA30577F440A(&iLocal_89, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_857(unk_0x1146A9AE09CE2B14(), 1, 1) && Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_1 != 0)
			{
				if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_4659, 1))
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4659), 1);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4659, 1))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 1);
			}
		}
	}
}

void func_723(bool bParam0)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam0)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	unk_0x366E7F593105797F(0, 69, 1);
	unk_0x366E7F593105797F(0, 70, 1);
	unk_0x366E7F593105797F(0, 92, 1);
	unk_0x366E7F593105797F(0, 68, 1);
	unk_0x366E7F593105797F(0, 91, 1);
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 99, 1);
	unk_0x366E7F593105797F(0, 100, 1);
	unk_0x366E7F593105797F(0, 65, 1);
	unk_0x366E7F593105797F(0, 105, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 107, 1);
	unk_0x366E7F593105797F(0, 110, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 87, 1);
	unk_0x366E7F593105797F(0, 88, 1);
	unk_0x366E7F593105797F(0, 113, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 117, 1);
	unk_0x366E7F593105797F(0, 118, 1);
	unk_0x366E7F593105797F(0, 119, 1);
	unk_0x366E7F593105797F(0, 51, 1);
	unk_0x366E7F593105797F(0, 47, 1);
	unk_0x366E7F593105797F(0, 24, 1);
	unk_0x366E7F593105797F(0, 257, 1);
}

void func_724(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam2);
}

int func_725(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xC49311A2A500FF09(iParam0, iParam1))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(iParam0, iParam1);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				iVar1 = unk_0xEF6894DFD91DE23D(unk_0x6471F4759775FCA4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9B73EB6255D4AE81(iVar0, iVar3, 0))
					{
						if (unk_0x27FC1B0077581B37(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_726(char* sParam0, char* sParam1)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	return unk_0x0222F263F70347A8(0);
}

void func_727()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xB7D6400C89373777(Local_84.f_7[iVar0]) && unk_0xB364346471C3B028(Local_84.f_7[iVar0]))
		{
			iVar1 = unk_0x854C404AEB476240(Local_84.f_7[iVar0]);
			if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
			{
				unk_0x9FF2677053B4F2A9(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_728(struct<3> Param0)
{
	Global_2391049 = { Param0 };
	Global_2391052 = 1;
}

void func_729()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_745(iVar0);
				break;
			
			case 174:
				func_730(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_730(int iParam0)
{
	int iVar0;
	
	unk_0x53858F1E03A88AE1(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -472621949:
			func_744(iParam0);
			break;
		
		case -893196843:
			func_743(iParam0);
			break;
		
		case 89359074:
			func_742(iParam0);
			break;
		
		case 2111265111:
			func_741(iParam0);
			break;
		
		case -302691104:
			func_740(iParam0);
			break;
		
		case -748817352:
			func_737(iParam0);
			break;
		
		case 2009359150:
			func_731(iParam0);
			break;
	}
}

void func_731(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		iVar4 = Var0.f_2;
		if (!unk_0x159BC3DDA80D71AC(Local_84.f_73[iVar4]))
		{
			return;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar4))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar4))
			{
				if (func_100(iVar4))
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_73[iVar4]), 0))
					{
						if (unk_0xFE475C49222245C5(unk_0x1146A9AE09CE2B14(), unk_0x854C404AEB476240(Local_84.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (unk_0xA0C4009A98ED2161(unk_0x1146A9AE09CE2B14(), unk_0x854C404AEB476240(Local_84.f_73[iVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_754())
				{
					if (Local_84.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = unk_0xC502CD39B4994F3A(Local_84.f_465[0 /*4*/].f_2);
						if (iVar7 != func_5())
						{
							if (iVar7 == unk_0x1146A9AE09CE2B14())
							{
								bVar6 = true;
							}
						}
					}
					else if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]))
					{
						if (func_109(Local_84.f_7[0]))
						{
							iVar9 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[0]), -1, 0);
							if (iVar9 != 0)
							{
								if (unk_0x72D30262CF8C8603(iVar9))
								{
									iVar8 = unk_0xCB567ED25393C1DF(iVar9);
									if (iVar8 == unk_0x1146A9AE09CE2B14())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
			{
				iVar2 = func_736();
				iVar10 = unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iVar4]));
				iVar5 = iVar4 * 4;
				if (func_735(iVar10))
				{
					iVar1 = func_42(iVar10);
					iVar12 = iVar5;
					while (iVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar12]) && !unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar12)], func_90(iVar12)))
						{
							iVar11++;
							unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar12)]), func_90(iVar12));
						}
						iVar12++;
					}
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8++;
				}
				if (Local_85.f_11 == 0)
				{
					Local_85.f_11 = unk_0x666C16A4ED8F3098();
				}
				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
				{
					Local_85.f_7 = (Local_85.f_7 + iVar2);
					func_733(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
					func_732();
				}
			}
			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar4);
		}
	}
}

void func_732()
{
	if (!func_22(&uLocal_561) || (func_22(&uLocal_561) && func_19(&uLocal_561, 2000, 0)))
	{
		unk_0x9B0169E27978C1A2(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_106(&uLocal_561);
		func_20(&uLocal_561, 0, 0);
	}
}

var func_733(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_474(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_734()
{
	if (func_754())
	{
		return Global_262145.f_11492;
	}
	return Global_262145.f_11431;
}

bool func_735(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_736()
{
	if (func_754())
	{
		return Global_262145.f_11491;
	}
	return Global_262145.f_11430;
}

void func_737(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		iVar4 = Var0.f_2;
		if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar4))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar4))
			{
				if (func_739(iVar4))
				{
					bVar6 = true;
				}
				else if (!func_738(iVar4))
				{
					if (func_100(iVar4))
					{
						if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_84.f_73[iVar4]), 0))
						{
							if (unk_0xFE475C49222245C5(unk_0x1146A9AE09CE2B14(), unk_0x854C404AEB476240(Local_84.f_73[iVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (unk_0xA0C4009A98ED2161(unk_0x1146A9AE09CE2B14(), unk_0x854C404AEB476240(Local_84.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_754())
					{
						if (Local_84.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = unk_0xC502CD39B4994F3A(Local_84.f_465[0 /*4*/].f_2);
							if (iVar7 != func_5())
							{
								if (iVar7 == unk_0x1146A9AE09CE2B14())
								{
									bVar6 = true;
								}
							}
						}
						else if (unk_0x159BC3DDA80D71AC(Local_84.f_7[0]))
						{
							if (func_109(Local_84.f_7[0]))
							{
								iVar9 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[0]), -1, 0);
								if (iVar9 != 0)
								{
									if (unk_0x72D30262CF8C8603(iVar9))
									{
										iVar8 = unk_0xCB567ED25393C1DF(iVar9);
										if (iVar8 == unk_0x1146A9AE09CE2B14())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = iVar4 * 4;
						iVar11 = 0;
						iVar10 = iVar5;
						while (iVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar10]) && !unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10)], func_90(iVar10)))
							{
								iVar11++;
								unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
							}
							iVar10++;
						}
						Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
						{
							iVar2 = func_736();
							iVar2 = (iVar2 * iVar1);
							Local_85.f_7 = (Local_85.f_7 + iVar2);
							func_733(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
							func_732();
							if (Local_85.f_11 == 0)
							{
								Local_85.f_11 = unk_0x666C16A4ED8F3098();
							}
						}
						unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar4);
					}
				}
			}
		}
	}
}

int func_738(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (Local_87[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_739(int iParam0)
{
	int iVar0;
	
	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (iVar0 != unk_0xDD0E57E73E5C4BF6())
			{
				if (Local_87[iVar0 /*18*/].f_11[iParam0] > Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_740(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (unk_0xC3F1DAC7D0C05D0F("am_kill_list", -1, 0) != func_5())
		{
		}
		if (unk_0x443E2CA72E118E64())
		{
			unk_0x191DDA30577F440A(&(Local_84.f_464), Var0.f_2);
		}
	}
}

void func_741(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		unk_0x191DDA30577F440A(&uLocal_548, Var0.f_2);
	}
}

void func_742(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		unk_0x191DDA30577F440A(&uLocal_549, Var0.f_2);
	}
}

void func_743(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_744(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_2;
		if (unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar1))
		{
			unk_0xC664C0067EEAB8D1(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
		}
	}
}

void func_745(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 13))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar1))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar1))
				{
					if (unk_0x419E13582192CFEA(Var0))
					{
						if (unk_0x55F5BD4ABD80B211(Var0))
						{
							if (unk_0x159BC3DDA80D71AC(Local_84.f_73[iVar1]))
							{
								if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_84.f_73[iVar1])))
								{
									if (unk_0x611CD1312FD3CA66(Var0) == unk_0x854C404AEB476240(Local_84.f_73[iVar1]))
									{
										if (unk_0x419E13582192CFEA(Var0.f_1))
										{
											if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
											{
												if (unk_0xFAA5505029C4B5A6(Var0.f_1) == unk_0x7D2B9E6A64637269())
												{
													if (Var0.f_5)
													{
														iVar4 = unk_0x6471F4759775FCA4(Var0);
														if (Local_84.f_27 == joaat("hydra"))
														{
															if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
															{
																iVar7 = func_736();
																if (func_735(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8++;
																}
																if (Local_85.f_11 == 0)
																{
																	Local_85.f_11 = unk_0x666C16A4ED8F3098();
																}
																if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																{
																	Local_85.f_7 = (Local_85.f_7 + iVar7);
																	func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																	func_732();
																}
															}
															unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_73[iVar1]), iVar9, 0);
																if (iVar6 != 0)
																{
																	iVar8 = func_746(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar8)], func_90(iVar8)))
																		{
																			if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar8)], func_90(iVar8)))
																			{
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar8)]), func_90(iVar8));
																				iVar7 = func_736();
																				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8++;
																				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																				{
																					Local_85.f_7 = (Local_85.f_7 + iVar7);
																					func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_732();
																				}
																				if (unk_0x91D137360A62E65D(unk_0x8A437068C87289B7(Local_84.f_48[iVar8])))
																				{
																					func_92(&(Local_96[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
														}
													}
													else if (!func_109(Local_84.f_73[iVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Local_84.f_27 != joaat("hydra"))
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0x419E13582192CFEA(Var0))
						{
							if (unk_0xA2CCAAC7F5CA3F49(Var0))
							{
								if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar1]))
								{
									if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_84.f_48[iVar1])))
									{
										if (unk_0xFAA5505029C4B5A6(Var0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0x419E13582192CFEA(Var0.f_1))
												{
													if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
													{
														iVar5 = unk_0xFAA5505029C4B5A6(Var0.f_1);
														if (unk_0x72D30262CF8C8603(iVar5))
														{
															if (iVar5 == unk_0x7D2B9E6A64637269())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_736();
																	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
																	{
																		Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8++;
																		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																		{
																			func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			Local_85.f_7 = (Local_85.f_7 + iVar7);
																			func_732();
																		}
																	}
																	if (Local_85.f_11 == 0)
																	{
																		Local_85.f_11 = unk_0x666C16A4ED8F3098();
																	}
																	unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar1 < 5)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6, iVar1))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_84.f_271, iVar1))
						{
							if (unk_0x419E13582192CFEA(Var0))
							{
								if (unk_0x55F5BD4ABD80B211(Var0))
								{
									if (unk_0x159BC3DDA80D71AC(Local_84.f_73[iVar1]))
									{
										if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_84.f_73[iVar1])))
										{
											if (unk_0x611CD1312FD3CA66(Var0) == unk_0x854C404AEB476240(Local_84.f_73[iVar1]))
											{
												if (unk_0x6471F4759775FCA4(Var0) == joaat("savage"))
												{
													if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
													{
														if (Var0.f_5)
														{
															if (unk_0x419E13582192CFEA(Var0.f_1))
															{
																if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
																{
																	iVar5 = unk_0xFAA5505029C4B5A6(Var0.f_1);
																	if (unk_0x72D30262CF8C8603(iVar5))
																	{
																		if (iVar5 == unk_0x7D2B9E6A64637269())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar2);
																					iVar7 = func_736();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																					{
																						func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																						Local_85.f_7 = (Local_85.f_7 + iVar7);
																						func_732();
																						if (Local_85.f_11 == 0)
																						{
																							Local_85.f_11 = unk_0x666C16A4ED8F3098();
																						}
																					}
																					iVar10 = iVar1 * 4;
																					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																					unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
																				}
																			}
																		}
																	}
																	else if (func_739(iVar1))
																	{
																		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar2);
																			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																			{
																				iVar7 = func_736();
																				iVar7 = (iVar7 * iVar2);
																				Local_85.f_7 = (Local_85.f_7 + iVar7);
																				func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																				func_732();
																				if (Local_85.f_11 == 0)
																				{
																					Local_85.f_11 = unk_0x666C16A4ED8F3098();
																				}
																			}
																			iVar10 = iVar1 * 4;
																			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
																		}
																	}
																	else if (func_738(iVar1))
																	{
																	}
																	else if (unk_0xA0C4009A98ED2161(iVar11, Var0, &uVar12))
																	{
																		if (iVar11 == unk_0x1146A9AE09CE2B14())
																		{
																			if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 = (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 + iVar2);
																				if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																				{
																					iVar7 = func_736();
																					iVar7 = (iVar7 * iVar2);
																					Local_85.f_7 = (Local_85.f_7 + iVar7);
																					func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_732();
																					if (Local_85.f_11 == 0)
																					{
																						Local_85.f_11 = unk_0x666C16A4ED8F3098();
																					}
																				}
																				iVar10 = iVar1 * 4;
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																				unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_6), iVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0x419E13582192CFEA(Var0.f_1))
															{
																if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
																{
																	iVar5 = unk_0xFAA5505029C4B5A6(Var0.f_1);
																	if (unk_0x72D30262CF8C8603(iVar5))
																	{
																		if (iVar5 == unk_0x7D2B9E6A64637269())
																		{
																			iVar3 = unk_0x666C16A4ED8F3098();
																			Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_11[iVar1] = iVar3;
																		}
																	}
																}
															}
															if (!unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(Var0), 0))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
			iVar1 = 20;
			while (iVar1 <= 23)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_84.f_272[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0x419E13582192CFEA(Var0))
						{
							if (unk_0xA2CCAAC7F5CA3F49(Var0))
							{
								if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar1]))
								{
									if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_84.f_48[iVar1])))
									{
										if (unk_0xFAA5505029C4B5A6(Var0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0x419E13582192CFEA(Var0.f_1))
												{
													if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
													{
														iVar5 = unk_0xFAA5505029C4B5A6(Var0.f_1);
														if (unk_0x72D30262CF8C8603(iVar5))
														{
															if (iVar5 == unk_0x7D2B9E6A64637269())
															{
																if (Var0.f_5)
																{
																	if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_17 < 2)
																	{
																		Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8++;
																		if (Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8 <= func_734())
																		{
																			iVar7 = func_736();
																			Local_85.f_7 = (Local_85.f_7 + iVar7);
																			if (Local_85.f_11 == 0)
																			{
																				Local_85.f_11 = unk_0x666C16A4ED8F3098();
																			}
																			func_733(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			func_732();
																		}
																	}
																	unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
												else
												{
													unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar1]))
				{
				}
				iVar1++;
			}
		}
	}
}

int func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar1]))
			{
				if (unk_0x8A437068C87289B7(Local_84.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_747()
{
	int iVar0;
	int iVar1;
	
	if (Local_84.f_27 != joaat("hydra"))
	{
		if (iLocal_574 == 0)
		{
			iLocal_574 = 20;
		}
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iLocal_574]))
		{
			if (!func_31(Local_84.f_48[iLocal_574]))
			{
				iVar0 = unk_0xD28419A1DF39B6B0(unk_0x8A437068C87289B7(Local_84.f_48[iLocal_574]));
				if (iLocal_575[iLocal_574] != iVar0)
				{
					iLocal_575[iLocal_574] = iVar0;
					unk_0xEE46C75CC4278490(Local_84.f_48[iLocal_574], 1);
				}
			}
		}
		iLocal_574++;
		if (iLocal_574 == 23)
		{
			iLocal_574 = 20;
		}
	}
	if (Local_84.f_27 != joaat("hydra") && Local_84.f_27 != joaat("rhino"))
	{
		if (!bLocal_578)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x159BC3DDA80D71AC(Local_84.f_73[iVar1]))
					{
						if (func_109(Local_84.f_73[iVar1]))
						{
							if (unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_84.f_73[iVar1])) == joaat("savage"))
							{
								unk_0xEE46C75CC4278490(Local_84.f_73[iVar1], 1);
								bLocal_578 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_84.f_73[iLocal_576]))
	{
		if (func_109(Local_84.f_73[iLocal_576]))
		{
			iVar0 = unk_0xD28419A1DF39B6B0(unk_0x8A437068C87289B7(Local_84.f_73[iLocal_576]));
			if (iLocal_577[iLocal_576] != iVar0)
			{
				iLocal_577[iLocal_576] = iVar0;
				if (!bLocal_578)
				{
					unk_0xEE46C75CC4278490(Local_84.f_73[iLocal_576], 1);
				}
			}
		}
	}
	iLocal_576++;
	if (iLocal_576 == 5)
	{
		iLocal_576 = 0;
	}
}

void func_748()
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	var uVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x234B68AC2E35ED5A(uLocal_550, iVar0))
		{
			if (Local_84.f_85[iVar0] != 2)
			{
				unk_0xC664C0067EEAB8D1(&iLocal_550, iVar0);
			}
		}
		if (unk_0x159BC3DDA80D71AC(Local_84.f_48[iVar0]))
		{
			func_752(iVar0);
			if (!func_31(Local_84.f_48[iVar0]))
			{
				switch (Local_84.f_85[iVar0])
				{
					case 1:
						if (unk_0xB364346471C3B028(Local_84.f_48[iVar0]))
						{
							if (unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 0))
							{
								uVar2 = unk_0x75B58B38E45C6F9A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 0);
								uVar1 = unk_0x6471F4759775FCA4(uVar2);
								if (unk_0xE267416B80E7921F(uVar1))
								{
									if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_5())
											{
												uVar6 = unk_0xD56332194D622ECE(iVar5);
												if (!unk_0xECEC7528A52B4EE8(uVar6))
												{
													if (func_26(iVar2, iVar6, 1) > 250f)
													{
														Var3 = { unk_0xD6E677FAD7521410(iVar6, 1) };
														unk_0x040CCF00053DBCB0(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0x48E10529AEAE00F9(iVar1))
								{
									if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar0]))
									{
										iVar11 = 1;
										iVar10 = (iVar0 / 4);
									}
									if ((unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 0) || ((iVar11 && iVar10 < 5) && iLocal_90[iVar10] != Local_84.f_110[iVar10]))
									{
										if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar0]))
										{
											iVar9 = Local_84.f_110[iVar10];
											if (iVar9 > -1)
											{
												iVar5 = unk_0xC502CD39B4994F3A(iVar9);
												if (iVar5 != func_5())
												{
													iVar6 = unk_0xD56332194D622ECE(iVar5);
													if (!unk_0xECEC7528A52B4EE8(iVar6))
													{
														Var3 = { unk_0xD6E677FAD7521410(iVar6, 1) };
														unk_0x0E0B8D8B4E896661(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_90[iVar10] != Local_84.f_110[iVar10])
														{
															iLocal_90[iVar10] = Local_84.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1273030092) != 0) && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 1306903184) != 0) && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x8A437068C87289B7(Local_84.f_48[iVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_5())
										{
											iVar6 = unk_0xD56332194D622ECE(iVar5);
											if (!unk_0xECEC7528A52B4EE8(iVar6))
											{
												fVar7 = func_26(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													unk_0x5B48B32DCCB9B3BC(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), unk_0xD6E677FAD7521410(iVar6, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar7 > 250f)
												{
													unk_0x5B1F7232B835EC44(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xB364346471C3B028(Local_84.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1442466670) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 0))
									{
										if (!unk_0x234B68AC2E35ED5A(iLocal_550, iVar0))
										{
											iVar8 = func_751(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 1133084672);
											if (iVar8 > -1)
											{
												unk_0x99EBE9AD8C344773(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0x234B68AC2E35ED5A(iLocal_550, iVar0))
											{
												func_750(iVar0, func_104(1));
												unk_0x191DDA30577F440A(&iLocal_550, iVar0);
											}
										}
									}
									else
									{
										unk_0x99EBE9AD8C344773(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -251125078) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), -251125078) != 0)
						{
							Var4 = { func_749() };
							unk_0xCA089CD1A17D76DF(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]));
							unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), 1);
							unk_0xE668BF9946D414D8(unk_0x8A437068C87289B7(Local_84.f_48[iVar0]), Var4, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_749()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
		{
			return unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_84.f_30[0 /*3*/];
}

void func_750(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -302691104;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam1);
	}
}

int func_751(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar3]))
		{
			if (func_109(Local_84.f_7[iVar3]))
			{
				iVar5 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_84.f_7[iVar3]), -1, 0);
				if (!unk_0xECEC7528A52B4EE8(iVar5))
				{
					if (unk_0x72D30262CF8C8603(iVar5))
					{
						Var4 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iVar3]), 1) };
						fVar2 = func_533(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_752(int iParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_84.f_48[iParam0]))
	{
		if (unk_0xB364346471C3B028(Local_84.f_48[iParam0]))
		{
			if (unk_0x530FB711AE9CF518(unk_0x8A437068C87289B7(Local_84.f_48[iParam0])))
			{
				uVar0 = unk_0x75B58B38E45C6F9A(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 0);
				if (unk_0x48E10529AEAE00F9(unk_0x6471F4759775FCA4(uVar0)) || unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(iVar0)))
				{
					if (!unk_0xBFCE58B2B3249999(iVar0, 0))
					{
						unk_0xC595907BB71C921D(unk_0x8A437068C87289B7(Local_84.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_753(struct<3> Param0)
{
	Global_1574671.f_6 = { Param0 };
}

bool func_754()
{
	return unk_0x234B68AC2E35ED5A(Local_84.f_3, 8);
}

void func_755(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_756("kwUfKUus6EuQyNSL8KpY-w");
					func_756("yMTOFLfO2UKwzKrmgPP7kg");
					func_756("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_756("tP5HSeCA0UiHnkRzakdO2Q");
					func_756("uEkrqoerQEmQ0uZRtp4rkw");
					func_756("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_756("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_756("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_756("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_756("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_756("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_756("uEkrqoerQEmQ0uZRtp4rkw");
					func_756("92t91kL3Wkqvl2Kc82cNSA");
					func_756("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_756("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_756("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_756("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_756("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_756("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_756("fOfm7nzMLkav0ldcSCNAzA");
					func_756("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_756("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_756("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_756("Ma78E44OMkGfYPmCPZXUNA");
					func_756("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_756("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_756("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_756("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_756("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_756("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_756("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_756("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_756("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_756("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_756("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_756("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_756("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_756("fOfm7nzMLkav0ldcSCNAzA");
							func_756("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_756("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_756("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_756("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_756("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_756("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_756("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_756("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_756("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_756("fOfm7nzMLkav0ldcSCNAzA");
							func_756("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_756("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_756("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_756("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_756("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_756("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_756("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_756("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_756("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_756("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_756("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_756("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_756("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_756("aGBjo2rKi0yMDLl3a2ATGA");
									func_756("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_756("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_756("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_756("f2lnL6wZPkGWUowu0yLm1Q");
									func_756("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_756("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_756("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_756("W-OJzHlM-0ym9PsIASYZtw");
									func_756("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_756("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_756("TjGz31AMYE6bGCjAIitu6w");
									func_756("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_756("QmlvLMLCwkOvoZlkAstYxw");
									func_756("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_756("BktATxH9R0Wp2x0kWSbqjw");
									func_756("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_756("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_756("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_756("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_756("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_756("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_756("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_756("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_756("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_756("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_756("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_756(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	iVar0 = unk_0x15173FB88ABC94F9(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_757(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x234B68AC2E35ED5A(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0x191DDA30577F440A(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_757(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_150(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_758(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_758(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_759()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 12))
	{
		func_196();
	}
	if (func_754())
	{
		if (iLocal_544 != Local_84.f_12)
		{
			iLocal_544 = Local_84.f_12;
			func_196();
		}
	}
	if (!func_204())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
			{
				if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
				{
					if (func_109(Local_84.f_7[iVar0]))
					{
						Var1 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0) };
						if (!func_760(iVar0, Var1))
						{
							if (!unk_0x234B68AC2E35ED5A(Local_84.f_13, iVar0))
							{
								uLocal_95[iVar0] = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(Local_84.f_7[iVar0]));
								unk_0x252BE56DB93DF816(uLocal_95[iVar0], 429);
								func_198(&(uLocal_95[iVar0]), 29);
								if (!unk_0x234B68AC2E35ED5A(iLocal_88, 20))
								{
									unk_0x89936830A493350F(uLocal_95[iVar0], 1);
									unk_0xFABF45630A359B11(uLocal_95[iVar0], 7000);
									unk_0x191DDA30577F440A(&iLocal_88, 20);
								}
								unk_0xC5BBAB0F8336ECB7(uLocal_95[iVar0], 9);
								if (func_754())
								{
									unk_0xDD944E3FD2028A48(uLocal_95[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0xDD944E3FD2028A48(uLocal_95[iVar0], "UW_BLIP");
								}
								if (!unk_0x234B68AC2E35ED5A(iLocal_89, 3))
								{
									unk_0xC5CEFC62F3637652();
									unk_0x191DDA30577F440A(&iLocal_89, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
			{
				if (!func_109(Local_84.f_7[iVar0]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
				}
				else if (unk_0x234B68AC2E35ED5A(Local_84.f_13, iVar0))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
				}
			}
			else
			{
				unk_0x1AD5BCFEC31BB8D9(&(uLocal_95[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_196();
	}
}

int func_760(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x159BC3DDA80D71AC(Local_84.f_7[iVar0]))
			{
				Var1 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_84.f_7[iVar0]), 0) };
				if (func_69(Param1, Var1, 0))
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_95[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_761()
{
	return Local_84;
}

int func_762(int iParam0)
{
	return Local_87[iParam0 /*18*/];
}

void func_763()
{
	if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 6))
	{
		func_458();
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 6);
	}
	if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 7))
	{
		if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 4) || unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 16))
		{
			if (((!unk_0x232F50D37AC94ECF() && !unk_0xE8FFE38E2BA32BD6()) && !func_364()) && func_857(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 7);
				func_431("FME_PASINT", 30000);
				func_430(1);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 17))
		{
			if (func_248() && !func_244())
			{
				unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 17);
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 16);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 23))
	{
		if (((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_857(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0xE8FFE38E2BA32BD6())
		{
			if (func_785())
			{
				func_431("AMEV_GA_RP", -1);
				if (func_345(unk_0x1146A9AE09CE2B14()) != 200)
				{
					func_430(1);
				}
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 23);
			}
		}
	}
	if (unk_0xA300BD5F71A8C704() && unk_0xC62ED852B1172A41() == 15)
	{
		if (func_239(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0xE7C97806E87E54EE(1344549371))
			{
				unk_0x8C07DE9C165DA375(1344549371);
			}
		}
		else if (unk_0xE7C97806E87E54EE(1344549371))
		{
			unk_0xDB94CFF813F20EA8(1344549371);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 9))
	{
		if (((((!unk_0x232F50D37AC94ECF() && !unk_0xE8FFE38E2BA32BD6()) && !func_364()) && func_857(unk_0x1146A9AE09CE2B14(), 1, 1)) && !func_207(unk_0x1146A9AE09CE2B14(), 21)) && !func_207(unk_0x1146A9AE09CE2B14(), 25))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 9);
			func_784(0);
			func_431("FME_TBL00", -1);
			func_430(1);
		}
	}
	if (func_249(unk_0x1146A9AE09CE2B14()))
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 18))
		{
			if ((func_207(unk_0x1146A9AE09CE2B14(), 21) && unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 20)) && !unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 19))
			{
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 18);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 18))
		{
			if (((((!unk_0x232F50D37AC94ECF() && !unk_0xE8FFE38E2BA32BD6()) && !func_364()) && func_857(unk_0x1146A9AE09CE2B14(), 1, 1)) && unk_0xE0A6F16F546C8274()) && !Global_2544210.f_5124)
			{
				unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 18);
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 19);
				func_431("AMTT_RPAS", -1);
				func_430(1);
			}
		}
	}
	if (((((func_249(unk_0x1146A9AE09CE2B14()) && !func_206(unk_0x1146A9AE09CE2B14())) && func_191(unk_0x1146A9AE09CE2B14()) != 146) && !func_205(unk_0x1146A9AE09CE2B14())) && !func_677(unk_0x1146A9AE09CE2B14())) && !func_774())
	{
		if (func_682(func_191(unk_0x1146A9AE09CE2B14())))
		{
			unk_0xEDA3D32C7E577A06(unk_0x1146A9AE09CE2B14());
		}
		if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 22))
		{
			unk_0x191DDA30577F440A(&(Global_1574671.f_1), 22);
		}
		if (func_213(unk_0x1146A9AE09CE2B14()) || func_680())
		{
			if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 10))
			{
				if (func_772(func_191(unk_0x1146A9AE09CE2B14())))
				{
					if (func_607(0) && !Global_2391045)
					{
						unk_0x191DDA30577F440A(&(Global_1574671.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_456(1);
						unk_0x191DDA30577F440A(&(Global_1574671.f_1), 14);
					}
				}
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 10);
			}
		}
		if (func_239(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 11))
			{
				if (!Global_99422.f_8)
				{
					unk_0x191DDA30577F440A(&(Global_1574671.f_1), 12);
					func_454(1);
				}
				if (!func_771())
				{
					unk_0x191DDA30577F440A(&(Global_1574671.f_1), 13);
					func_681();
				}
				if (!Global_2391045)
				{
					unk_0x191DDA30577F440A(&(Global_1574671.f_1), 14);
					if (func_607(0) && !Global_2391045)
					{
						unk_0x191DDA30577F440A(&(Global_1574671.f_1), 9);
					}
					func_456(1);
				}
				unk_0x191DDA30577F440A(&(Global_1574671.f_1), 11);
			}
		}
		else
		{
			func_769(0);
		}
	}
	else
	{
		func_769(1);
	}
	func_764();
	if (func_679(func_191(unk_0x1146A9AE09CE2B14())) && !unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 21))
	{
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 21);
	}
	if (((func_248() && !func_244()) || func_207(unk_0x1146A9AE09CE2B14(), 21)) || func_207(unk_0x1146A9AE09CE2B14(), 25))
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 10))
		{
			unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 10);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 10))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 10);
	}
}

void func_764()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_364())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_530(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 26))
				{
					unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 26);
				}
				func_765(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 26))
	{
		func_106(&(Global_1574671.f_22));
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 26);
	}
}

void func_765(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574671.f_22)))
	{
		func_20(&(Global_1574671.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574671.f_22), iParam1, 0))
	{
		if (func_416() > 0)
		{
			func_768(iParam0);
			if (func_689("AMEV_LBD_HELP"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			func_106(&(Global_1574671.f_22));
		}
	}
	else
	{
		func_767(0);
		func_766();
	}
}

void func_766()
{
	Global_2544210.f_4598 = 0;
}

void func_767(int iParam0)
{
	Global_1379108.f_68 = iParam0;
}

void func_768(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_362(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_769(int iParam0)
{
	if ((unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 11) || (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 10) && iParam0)) || (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 22) && iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 12))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 12);
			func_454(0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 13))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 13);
			func_770();
		}
		if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 14) && !func_233(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 14);
			func_456(0);
		}
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 11);
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 10);
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 22);
	}
}

void func_770()
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5029), 0);
}

bool func_771()
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5029, 0);
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_239(unk_0x1146A9AE09CE2B14());
		
		case 133:
			return (func_680() || func_773(func_190()));
		
		default:
	}
	return 0;
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_774()
{
	if (((((((((func_783() || func_782()) || func_781()) || func_183()) || (func_780() && !unk_0xE45310E861787FC2())) || (func_777() && !func_776())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_775() == 2 && !unk_0xE45310E861787FC2()))
	{
		return 1;
	}
	return 0;
}

int func_775()
{
	return Global_968397;
}

bool func_776()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_2, 27);
}

int func_777()
{
	if (func_779() || func_778())
	{
		return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_95 == 8;
	}
	return 0;
}

var func_778()
{
	return Global_2453009.f_735;
}

bool func_779()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_2, 11);
}

bool func_780()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 5);
}

bool func_781()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 2);
}

bool func_782()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 20);
}

bool func_783()
{
	return Global_2453009.f_698;
}

void func_784(int iParam0)
{
	int iVar0;
	
	iVar0 = func_267(2536, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x234B68AC2E35ED5A(iVar0, 0))
		{
			unk_0x191DDA30577F440A(&iVar0, 0);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 1))
		{
			unk_0x191DDA30577F440A(&iVar0, 1);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 2))
		{
			unk_0x191DDA30577F440A(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(iVar0, 3))
		{
			unk_0x191DDA30577F440A(&iVar0, 3);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 4))
		{
			unk_0x191DDA30577F440A(&iVar0, 4);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 5))
		{
			unk_0x191DDA30577F440A(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x234B68AC2E35ED5A(iVar0, 6))
		{
			unk_0x191DDA30577F440A(&iVar0, 6);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 7))
		{
			unk_0x191DDA30577F440A(&iVar0, 7);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 8))
		{
			unk_0x191DDA30577F440A(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x234B68AC2E35ED5A(iVar0, 9))
		{
			unk_0x191DDA30577F440A(&iVar0, 9);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 10))
		{
			unk_0x191DDA30577F440A(&iVar0, 10);
		}
		else if (!unk_0x234B68AC2E35ED5A(iVar0, 11))
		{
			unk_0x191DDA30577F440A(&iVar0, 11);
		}
	}
	func_489(2536, iVar0, -1, 1, 0);
}

int func_785()
{
	int iVar0;
	
	if (!func_22(&(Global_1574671.f_15)))
	{
		func_20(&(Global_1574671.f_15), 0, 0);
		Global_1574671.f_17 = 0;
	}
	else if (func_19(&(Global_1574671.f_15), 1000, 0))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(Global_1574671.f_17)))
		{
			iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(Global_1574671.f_17));
			if (unk_0x8CFC2F41A749E236(iVar0))
			{
				if (func_857(iVar0, 1, 1) && func_786(iVar0, 6))
				{
					if (vdist(func_59(unk_0x1146A9AE09CE2B14()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574671.f_17++;
		if (Global_1574671.f_17 >= 32)
		{
			Global_1574671.f_17 = 0;
			func_106(&(Global_1574671.f_15));
		}
	}
	return 0;
}

int func_786(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_450() != 0)
	{
		return 0;
	}
	if (!func_493(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590908[iVar0 /*874*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_787()
{
	return Global_1574671.f_24;
}

bool func_788(int iParam0)
{
	return !func_789(iParam0);
}

int func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6831)
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6832)
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6833)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6834)
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_790(4))
			{
				return 0;
			}
			if (func_207(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_790(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_857(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
		{
			if (unk_0x234B68AC2E35ED5A(Global_2426865[iVar0 /*449*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_791()
{
	var uVar0;
	
	func_795(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_794())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_793())
	{
		return 1;
	}
	if (func_792(159))
	{
		if (!func_783())
		{
			return 1;
		}
	}
	if (func_792(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_448() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_448()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_792(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_793()
{
	return Global_2463497;
}

bool func_794()
{
	return Global_2453009.f_693;
}

void func_795(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_796(iVar0);
					break;
				
				case -1320260596:
					unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 4);
					if (Var3.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_796(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_857(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_797(uVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_797(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iParam0))
		{
			if (unk_0x456C91FDAFEEF560(iParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(iParam0)))
				{
					unk_0x4985CD0720AFD468(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(iParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_798()
{
	wait(0);
}

void func_799()
{
	int iVar0;
	
	func_196();
	if (func_761() == 4 && Local_84.f_27 != 0)
	{
		unk_0x16C6E55F8C91ED24(Local_84.f_27, 0);
	}
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 1);
	func_687(19, 0);
	func_666(0);
	if (unk_0xDD0E57E73E5C4BF6() != -1)
	{
		func_805(129, 0, unk_0x234B68AC2E35ED5A(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2, 8));
	}
	func_804(129);
	unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 184, 0);
	unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 151, 1);
	unk_0x5E84945E26CAEF1F(1f);
	if (iLocal_93 > 0)
	{
		unk_0x20D884FB6567BAD5(iLocal_93);
	}
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 129)
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] = -1;
		}
	}
	if (unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()) == iLocal_97)
	{
		unk_0x2271ED1E65FB75EE(unk_0x7D2B9E6A64637269(), iLocal_99);
	}
	func_803();
	func_209(0, 129);
	if (unk_0x234B68AC2E35ED5A(iLocal_88, 22))
	{
		func_461();
		unk_0xC664C0067EEAB8D1(&iLocal_88, 22);
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_88, 9))
	{
		unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
		if (!unk_0x234B68AC2E35ED5A(iLocal_88, 10))
		{
			unk_0xFB8A6909539A30B1("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_94 != -100f)
	{
		func_536(0, 0);
		unk_0x84C39F568C7207FE(fLocal_94);
	}
	func_535(0);
	if (func_791())
	{
		Local_85.f_5 = 5;
	}
	else if (func_626(2, 0, 0, 0, 0))
	{
		Local_85.f_5 = 6;
	}
	else if (Local_85.f_5 != 1)
	{
		Local_85.f_5 = 2;
	}
	unk_0x791B4C3811D53DFA(uLocal_547);
	Local_85 = Local_84.f_611;
	Local_85.f_1 = Local_84.f_612;
	Local_85.f_4 = Local_84.f_613;
	Local_85.f_3 = Local_84.f_615;
	if (Local_85.f_9 > 0)
	{
		Local_85.f_10 = (unk_0x666C16A4ED8F3098() - Local_85.f_9);
	}
	if ((!Global_262145.f_11680 && !unk_0x234B68AC2E35ED5A(Local_84.f_3, 8)) || (!Global_262145.f_11681 && unk_0x234B68AC2E35ED5A(Local_84.f_3, 8)))
	{
		if (Local_85.f_6 > 0)
		{
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_84.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_89, 1))
	{
		func_694(1);
		unk_0x2287F6D727F498F6(0, 0);
	}
	if (iVar0 == 0)
	{
		func_801(Local_85, Local_84.f_27, Local_84.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0xDD0E57E73E5C4BF6() != -1)
	{
		func_801(Local_85, Local_84.f_279, Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_421(unk_0x1146A9AE09CE2B14()))
	{
		func_643(0);
	}
	func_665(0);
	func_717(1);
	func_800();
}

void func_800()
{
	unk_0x4BFE89D21F9885DC();
}

void func_801(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_77248)
	{
		if (unk_0xDA654EB115F9FF7D(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0xC6CD0D7571533E51(&Var1);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, func_802()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			unk_0x9F40BBDBC30EBB13(&Var2);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0x3C1B81D0B5A5B618(&Var3);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0x34ECA449F778AD6E(&Var4);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_penned_in"))
		{
			unk_0x8E71D51E9899AF27(&Param0);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0x59BF86F44D9722EC(&Var5);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x4B07B5C29BB25342(&Var6);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0x55DCF52F9C9C17C6(&Var7);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			unk_0xB213F3D908ADBB5E(&Var8);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0xC64E4D091884458D(&Var9);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x43A848299D1053F2(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0x1A318EEA506A68C8(&Var11);
			}
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x934D70FE78CC2D28(&Var12);
		}
	}
}

char* func_802()
{
	switch (Global_2465851)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_803()
{
	unk_0x45881466B05A8703(iLocal_98);
	unk_0x45881466B05A8703(iLocal_97);
}

void func_804(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_805(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 13))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 13);
		}
		if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 14))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 14);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 21))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1574671.f_1), 21);
	}
	func_841();
	unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
	unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_840(func_191(unk_0x1146A9AE09CE2B14()));
		func_687(func_688(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x1146A9AE09CE2B14() != -1) && func_839(unk_0x1146A9AE09CE2B14()) >= 12)
		{
			func_838(2548, -1);
			iVar1 = func_267(2548, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x191DDA30577F440A(&Global_1574697, 5);
			}
		}
		func_693();
		func_837();
		func_836();
		if ((!func_238(unk_0x1146A9AE09CE2B14()) && !func_236(unk_0x1146A9AE09CE2B14())) && !func_835())
		{
			func_814();
		}
		func_813();
		if (!unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 0) && !unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 1))
		{
			func_458();
		}
		func_812();
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1810), 2);
		func_551();
		func_811();
	}
	if (unk_0xE7C97806E87E54EE(1344549371))
	{
		unk_0xDB94CFF813F20EA8(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x1146A9AE09CE2B14() != -1 && !func_207(unk_0x1146A9AE09CE2B14(), 21)) && !func_207(unk_0x1146A9AE09CE2B14(), 25)) && !func_233(unk_0x1146A9AE09CE2B14(), 0))
		{
			func_456(0);
			func_454(0);
			if (!bParam1)
			{
				func_810();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_630(26, -1))
		{
			Global_2465681 = -1;
			func_628(26, -1);
		}
	}
	if (!func_806())
	{
		Global_2518144 = 1;
	}
}

int func_806()
{
	if (((((((!func_394(unk_0x1146A9AE09CE2B14()) && !func_375(unk_0x1146A9AE09CE2B14())) && func_191(unk_0x1146A9AE09CE2B14()) != 146) && !func_809()) && !func_808()) && !func_807(Global_4456448.f_133963)) && !func_590()) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_807(int iParam0)
{
	return iParam0 == 57;
}

int func_808()
{
	if (Global_4456448.f_85535 == Global_262145.f_9768)
	{
		return 1;
	}
	return 0;
}

int func_809()
{
	if ((Global_4456448 == 0 && unk_0xE45310E861787FC2()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_133963 > 0) || unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 15)) || unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 18)) || unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 19)) || unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 29)) || unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 28)) || unk_0x234B68AC2E35ED5A(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_810()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x234B68AC2E35ED5A(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_811()
{
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_7 = 0;
}

void func_812()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574671 = { Var0 };
}

void func_813()
{
	var uVar0;
	
	Global_1319186 = uVar0;
}

void func_814()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_24), &Global_2409343, 2);
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_26), &Global_2409345, 19);
	func_833();
	func_817(1, 1, 0);
	func_815();
}

void func_815()
{
	func_816(0, 0);
}

void func_816(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_817(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_832();
	}
	if (!bParam2)
	{
		func_820(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_819(0);
	func_818();
}

void func_818()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == unk_0x62D18D65FE22FF39())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_819(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_820(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_831())
		{
			func_830();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_828();
		func_824(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_821();
	}
}

void func_821()
{
	if (func_831() && !func_823())
	{
		func_830();
	}
	if (func_823())
	{
		func_822();
	}
	else
	{
		func_828();
		func_824(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_822()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_823()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_824(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_5())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_825())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_825()
{
	if ((((((func_345(unk_0x1146A9AE09CE2B14()) == 229 || func_345(unk_0x1146A9AE09CE2B14()) == 191) || func_827()) || func_835()) || func_214(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_826(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_826(int iParam0)
{
	if (func_213(iParam0))
	{
		return 1;
	}
	if (func_250(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_827()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_828()
{
	if (func_831() && !func_823())
	{
		func_830();
	}
	func_829();
	Global_2405077.f_713 = 0;
}

void func_829()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_830()
{
	if (func_823())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_831()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_832()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_833()
{
	func_834();
}

void func_834()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

bool func_835()
{
	return Global_1574420;
}

void func_836()
{
	Global_2544210.f_5029 = 0;
}

void func_837()
{
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1 = 0;
	}
}

void func_838(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_267(iParam0, func_247(iParam1), 0);
	iVar0++;
	if (!func_496(iParam0))
	{
		func_489(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_490(iParam0, iVar0, iParam1, 1);
	}
}

int func_839(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_205.f_6;
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_239(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_841()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 3) || unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 4))
	{
		if (unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 5))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 5);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 3))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 3);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 4))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 4);
	}
	func_844(0);
	func_843(0);
	func_842(0);
}

void func_842(int iParam0)
{
	if (Global_2544210.f_4586 != iParam0)
	{
		Global_2544210.f_4586 = iParam0;
	}
}

void func_843(bool bParam0)
{
	if (Global_2544210.f_4585 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2544210.f_4585 = bParam0;
	}
}

void func_844(int iParam0)
{
	if (Global_2544210.f_4583 != iParam0)
	{
		Global_2544210.f_4583 = iParam0;
	}
}

void func_845(struct<21> Param0)
{
	int iVar0;
	
	func_854(func_855(Param0), Param0);
	unk_0x54BBD34B26EF27D9(24);
	unk_0xCE293C7793B5EC3F(9);
	func_853(0, -1, 0);
	func_851(129);
	unk_0xF784CE07ED70869A(&Local_84, 617);
	unk_0xC84352B5E80ABF68(&Local_87, 577);
	func_850(1);
	if (!func_849())
	{
		func_799();
	}
	if (unk_0x02BFF15CAA701972())
	{
		unk_0x87F1904AB605184A(0);
		if (unk_0x443E2CA72E118E64())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_84.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_84.f_22[iVar0] = func_5();
				Local_84.f_256[iVar0] = -1;
				Local_84.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x9FCD56F864077E14(&(Local_84.f_611), &(Local_84.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_90[iVar0] = -1;
			iVar0++;
		}
		Local_85.f_2 = unk_0xC1C987F7EC21C39A();
		Local_85.f_8 = unk_0x666C16A4ED8F3098();
		func_687(19, 1);
		func_846();
		if (func_204())
		{
			unk_0x191DDA30577F440A(&(Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_2), 7);
		}
		Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/].f_9 = -1;
		Global_2544210.f_5115 = -1;
		Local_87[unk_0xDD0E57E73E5C4BF6() /*18*/] = 0;
	}
	else
	{
		func_799();
	}
}

void func_846()
{
	int iVar0;
	
	unk_0xF479CA7199C54C8F("relUWPlayer", &iLocal_97);
	unk_0xF479CA7199C54C8F("relUWAi", &iLocal_98);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x78B2DF314748056B(1, Global_1574988[iVar0], iLocal_97);
		unk_0x78B2DF314748056B(1, iLocal_97, Global_1574988[iVar0]);
		unk_0x78B2DF314748056B(1, Global_1574988[iVar0], iLocal_98);
		unk_0x78B2DF314748056B(1, iLocal_98, Global_1574988[iVar0]);
		unk_0x78B2DF314748056B(1, iLocal_97, joaat("COP"));
		unk_0x78B2DF314748056B(1, joaat("COP"), iLocal_97);
		unk_0x78B2DF314748056B(1, iLocal_97, Global_1575036[5]);
		unk_0x78B2DF314748056B(1, Global_1575036[5], iLocal_97);
		unk_0x78B2DF314748056B(1, iLocal_97, Global_1575021);
		unk_0x78B2DF314748056B(1, Global_1575021, iLocal_97);
		iVar0++;
	}
	unk_0x78B2DF314748056B(5, iLocal_97, iLocal_98);
	unk_0x78B2DF314748056B(5, iLocal_98, iLocal_97);
	unk_0x78B2DF314748056B(1, 2017343592, iLocal_98);
	unk_0x78B2DF314748056B(5, 2017343592, iLocal_97);
	func_848(1, &iLocal_98);
	func_847(&iLocal_98);
	func_847(&iLocal_97);
}

void func_847(int iParam0)
{
	unk_0x78B2DF314748056B(1, -1865950624, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, -1865950624);
	unk_0x78B2DF314748056B(1, 296331235, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, 296331235);
	unk_0x78B2DF314748056B(1, 1166638144, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, 1166638144);
	unk_0x78B2DF314748056B(1, 2037579709, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, 2037579709);
	unk_0x78B2DF314748056B(1, 2017343592, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, 2017343592);
	unk_0x78B2DF314748056B(1, -1821475077, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, -1821475077);
	unk_0x78B2DF314748056B(1, 1782292358, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, 1782292358);
	unk_0x78B2DF314748056B(1, -1033021910, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, -1033021910);
	unk_0x78B2DF314748056B(1, -1285976420, *iParam0);
	unk_0x78B2DF314748056B(1, *iParam0, -1285976420);
}

void func_848(int iParam0, int iParam1)
{
	unk_0x78B2DF314748056B(iParam0, joaat("COP"), *iParam1);
	unk_0x78B2DF314748056B(iParam0, *iParam1, joaat("COP"));
	unk_0x78B2DF314748056B(iParam0, -472287501, *iParam1);
	unk_0x78B2DF314748056B(iParam0, *iParam1, -472287501);
	unk_0x78B2DF314748056B(iParam0, -183807561, *iParam1);
	unk_0x78B2DF314748056B(iParam0, *iParam1, -183807561);
}

int func_849()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x02BFF15CAA701972())
		{
			return 0;
		}
		if (unk_0x50309A384D827846())
		{
			return 1;
		}
		if (func_794())
		{
			return 0;
		}
		if (func_792(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

void func_850(bool bParam0)
{
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_448())
	{
		return;
	}
	if (!unk_0x4BE697D014536271(Global_2416162.f_1317) || Global_2416162.f_1317 == unk_0x62D18D65FE22FF39())
	{
		if (bParam0)
		{
			Global_2416162.f_1317 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			Global_2416162.f_1317 = -1;
		}
	}
}

void func_851(int iParam0)
{
	func_812();
	func_852();
	func_836();
	Global_1574671.f_4 = iParam0;
	Global_1574671.f_5 = iParam0;
	func_686(iParam0, -1);
	func_8(&(Global_1574671.f_18), 0, 0);
	Global_2544210.f_4655 = 0;
	Global_2464569[0] = func_5();
	Global_2464569[1] = func_5();
	Global_2464569[2] = func_5();
	Global_2464569[3] = func_5();
	Global_2464569[4] = func_5();
	func_811();
	if (!func_229(func_230()))
	{
		func_361();
	}
	if (func_248() && !func_244())
	{
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 16);
	}
	else
	{
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 17);
	}
}

void func_852()
{
	var uVar0;
	
	Global_1574696 = uVar0;
}

int func_853(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_800();
			}
			else
			{
				return 0;
			}
		}
		if (!func_169())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_800();
					}
					else
					{
						return 0;
					}
				}
				if (func_794())
				{
					if (!bParam2)
					{
						func_800();
					}
					else
					{
						return 0;
					}
				}
				if (func_792(157))
				{
					if (!bParam2)
					{
						func_800();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x930F75DAF7DE892B())
			{
				if (!bParam2)
				{
					func_800();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x41BB6B0BDB7933FF();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (!bParam2)
			{
				func_800();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x930F75DAF7DE892B())
	{
		if (!bParam2)
		{
			func_800();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_854(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x02BFF15CAA701972())
	{
		func_800();
	}
	unk_0x35BEDD7AFD26FCD5(uParam0, 0, Param1.f_16);
}

int func_855(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 153:
			return 32;
		
		case 154:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 32;
		
		case 148:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 155:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 2;
		
		case 164:
			return 1;
		
		case 160:
			return 2;
		
		case 161:
			return 4;
		
		case 162:
			return 2;
		
		case 163:
			return 2;
		
		case 145:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 0;
		
		case 187:
			return 1;
		
		case 172:
			return 4;
		
		case 175:
			return 4;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 183:
			return 1;
		
		case 179:
			return 2;
		
		case 184:
			return 1;
		
		case 180:
			return 1;
		
		case 178:
			return 2;
		
		case 181:
			return 8;
		
		case 182:
			return 8;
		
		case 185:
			return 1;
		
		case 186:
			return 2;
		
		case 173:
			return 16;
		
		case 174:
			return 32;
		
		default:
	}
	switch (func_140(func_856(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_856(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 159:
			return 15;
		
		case 166:
			return 8;
		
		case 160:
			return 14;
		
		case 164:
			return 122;
		
		case 167:
			return 1;
		
		case 165:
			return 5;
		
		case 168:
			return 6;
		
		case 161:
			return 11;
		
		case 169:
			return 0;
		
		case 170:
			return 2;
		
		case 162:
			return 13;
		
		case 171:
			return 3;
		
		case 163:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 269;
		
		case 139:
			return 270;
		
		case 140:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 281;
}

int func_857(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

