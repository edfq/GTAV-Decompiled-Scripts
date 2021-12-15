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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_97[65];
	float fLocal_98 = 0f;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_103 = 0f;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	float fLocal_124 = 0f;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	struct<3> Local_138[65];
	var uLocal_139[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_140[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	struct<68> Local_147 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_169 = -1;
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
	var uLocal_191 = -1082130432;
	var uLocal_192 = 3;
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
	var uLocal_208 = -1;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = -1;
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
	var uLocal_233 = -1082130432;
	var uLocal_234 = 3;
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
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = -1;
	var uLocal_253 = -1;
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
	var uLocal_275 = -1082130432;
	var uLocal_276 = 3;
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
	var uLocal_292 = -1;
	var uLocal_293 = 0;
	var uLocal_294 = -1;
	var uLocal_295 = -1;
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
	var uLocal_317 = -1082130432;
	var uLocal_318 = 3;
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
	var uLocal_334 = -1;
	var uLocal_335 = 0;
	var uLocal_336 = -1;
	var uLocal_337 = -1;
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
	var uLocal_359 = -1082130432;
	var uLocal_360 = 3;
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
	var uLocal_376 = -1;
	var uLocal_377 = 0;
	var uLocal_378 = -1;
	var uLocal_379 = -1;
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
	var uLocal_401 = -1082130432;
	var uLocal_402 = 3;
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
	var uLocal_418 = -1;
	var uLocal_419 = 0;
	var uLocal_420 = -1;
	var uLocal_421 = -1;
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
	var uLocal_443 = -1082130432;
	var uLocal_444 = 3;
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
	var uLocal_460 = -1;
	var uLocal_461 = 0;
	var uLocal_462 = -1;
	var uLocal_463 = -1;
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
	var uLocal_485 = -1082130432;
	var uLocal_486 = 3;
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
	var uLocal_502 = -1;
	var uLocal_503 = 0;
	var uLocal_504 = -1;
	var uLocal_505 = -1;
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
	var uLocal_527 = -1082130432;
	var uLocal_528 = 3;
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
	var uLocal_543 = 0;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = -1;
	var uLocal_547 = -1;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
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
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = -1082130432;
	var uLocal_570 = 3;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = -1;
	var uLocal_587 = 0;
	var uLocal_588 = -1;
	var uLocal_589 = -1;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = -1082130432;
	var uLocal_612 = 3;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = -1;
	var uLocal_629 = 0;
	var uLocal_630 = -1;
	var uLocal_631 = -1;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = -1082130432;
	var uLocal_654 = 3;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = -1;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = -1082130432;
	var uLocal_696 = 3;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = -1;
	var uLocal_713 = 0;
	var uLocal_714 = -1;
	var uLocal_715 = -1;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = -1082130432;
	var uLocal_738 = 3;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = -1;
	var uLocal_755 = 0;
	var uLocal_756 = -1;
	var uLocal_757 = -1;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = -1082130432;
	var uLocal_780 = 3;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = -1;
	var uLocal_797 = 0;
	var uLocal_798 = -1;
	var uLocal_799 = -1;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = -1082130432;
	var uLocal_822 = 3;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = -1;
	var uLocal_839 = 0;
	var uLocal_840 = -1;
	var uLocal_841 = -1;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = -1082130432;
	var uLocal_864 = 3;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = -1;
	var uLocal_881 = 0;
	var uLocal_882 = -1;
	var uLocal_883 = -1;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = -1082130432;
	var uLocal_906 = 3;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = -1;
	var uLocal_923 = 0;
	var uLocal_924 = -1;
	var uLocal_925 = -1;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = -1082130432;
	var uLocal_948 = 3;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = -1;
	var uLocal_965 = 0;
	var uLocal_966 = -1;
	var uLocal_967 = -1;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = -1082130432;
	var uLocal_990 = 3;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = -1;
	var uLocal_1007 = 0;
	var uLocal_1008 = -1;
	var uLocal_1009 = -1;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = -1082130432;
	var uLocal_1032 = 3;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = -1;
	var uLocal_1049 = 0;
	var uLocal_1050 = -1;
	var uLocal_1051 = -1;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = -1082130432;
	var uLocal_1074 = 3;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1;
	var uLocal_1091 = 0;
	var uLocal_1092 = -1;
	var uLocal_1093 = -1;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = -1082130432;
	var uLocal_1116 = 3;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = -1;
	var uLocal_1133 = 0;
	var uLocal_1134 = -1;
	var uLocal_1135 = -1;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = -1082130432;
	var uLocal_1158 = 3;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = -1;
	var uLocal_1175 = 0;
	var uLocal_1176 = -1;
	var uLocal_1177 = -1;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = -1082130432;
	var uLocal_1200 = 3;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = -1;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1;
	var uLocal_1219 = -1;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = -1082130432;
	var uLocal_1242 = 3;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = -1;
	var uLocal_1259 = 0;
	var uLocal_1260 = -1;
	var uLocal_1261 = -1;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = -1082130432;
	var uLocal_1284 = 3;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = -1;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = -1;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = -1082130432;
	var uLocal_1326 = 3;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = -1;
	var uLocal_1343 = 0;
	var uLocal_1344 = -1;
	var uLocal_1345 = -1;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = -1082130432;
	var uLocal_1368 = 3;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = -1;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = -1;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = -1082130432;
	var uLocal_1410 = 3;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = -1;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1;
	var uLocal_1429 = -1;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = -1082130432;
	var uLocal_1452 = 3;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = -1;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = -1;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = -1082130432;
	var uLocal_1494 = 3;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = -1;
	var uLocal_1511 = 0;
	var uLocal_1512 = -1;
	struct<12> Local_1513[32];
	struct<12> Local_1514 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1515 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_98 = 40000f;
	iLocal_126 = unk_0xA9ADCC8D104AA552();
	iLocal_127 = unk_0xA9ADCC8D104AA552();
	iLocal_128 = -1;
	iLocal_129 = -1;
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_779(ScriptParam_1515))
		{
			func_741();
		}
	}
	while (true)
	{
		func_740();
		if (func_733() || func_731())
		{
			func_741();
		}
		if (func_729())
		{
			func_741();
		}
		func_702();
		switch (func_701(unk_0xA52C4F51ECAB7E02()))
		{
			case 0:
				if (func_700() == 1)
				{
					if (func_699())
					{
						func_698(unk_0xA52C4F51ECAB7E02(), 1);
					}
				}
				break;
			
			case 1:
				if (func_700() == 1)
				{
					func_145();
					func_133();
				}
				else if (func_700() == 3)
				{
					func_698(unk_0xA52C4F51ECAB7E02(), 3);
				}
				break;
			
			case 3:
				func_741();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_700())
			{
				case 0:
					if (func_119())
					{
						func_118(1);
					}
					break;
				
				case 1:
					if (Local_147.f_37 == 6)
					{
						func_118(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_104, 1000, 0))
					{
						func_118(3);
					}
					break;
				
				case 3:
					func_741();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
		{
			unk_0xCED9E32812D6C7C7(&(Local_147.f_2), 0);
			Local_147.f_1 = unk_0x0A89FDFA763DCAED();
		}
	}
	switch (Local_147.f_37)
	{
		case 0:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_147.f_43), func_29(), 0) || unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_147.f_38 = unk_0x0A89FDFA763DCAED();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_147.f_39), func_28(0), 0) || unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_147.f_2, 1))
				{
					Local_147.f_1 = unk_0x0A89FDFA763DCAED();
					unk_0xCED9E32812D6C7C7(&(Local_147.f_2), 1);
					func_27(&(Local_147.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_129, &iLocal_128);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_147.f_41), 20000, 0) || Local_147.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_147.f_3))
				{
					func_27(&(Local_147.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x90F6E2F6488B98BA(Local_147.f_67[iVar0 /*2*/].f_1) && !unk_0x55B23FE400FCEA6B(unk_0xF2D8DACFAEBD9629(Local_147.f_67[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
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

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_1513[iVar1 /*12*/].f_1, 1) || Local_1513[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xE2D0C323A1AE5D85(Local_1513[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar1;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1267886285;
			Var0.f_10 = uVar1;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 677240627;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam13 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			unk_0xCED9E32812D6C7C7(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0xE2D0C323A1AE5D85(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xCED9E32812D6C7C7(&(Local_147.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
				if (unk_0x0D01086B38EC256F(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_147.f_50)
	{
		Local_147.f_50 = iVar1;
	}
	else
	{
		Local_147.f_66 = (Local_147.f_50 - iVar1);
	}
	if (iVar2 > Local_147.f_51)
	{
		Local_147.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1574907;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = to_float(Local_1513[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = to_float(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_147.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11203)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11204)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11205)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11206)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11207)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11208)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11209 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11210)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11211)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11212)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11213)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11214))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11215))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11327)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11328)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11218))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11220))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11221))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11222))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_147.f_3)
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

int func_19()
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_147.f_4[iParam0] == unk_0xF1354995C6159A78() && func_21(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()
{
	switch (Local_147.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1513[iParam0 /*12*/].f_4;
	iVar1 = Local_1513[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xE2D0C323A1AE5D85(Local_147.f_48, iParam0))
	{
		fVar2 = to_float(Local_147.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_147.f_49++;
			unk_0xCED9E32812D6C7C7(&(Local_147.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_147.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_147.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_147.f_4[iVar3] < 0 || func_21(iVar0, Local_1513[Local_147.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1513[Local_147.f_4[iVar3] /*12*/].f_4, iVar1, Local_1513[Local_147.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_147.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_128 = iVar3;
				iLocal_129 = iParam0;
			}
			Local_147.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_147.f_4[iVar5] == iParam0)
				{
					Local_147.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_147.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)
{
	int iVar0;
	
	if (unk_0xE2D0C323A1AE5D85(Local_147.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_147.f_4[iVar0] == iParam0)
			{
				Local_147.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xB0550BC91B0159D6(&(Local_147.f_48), iParam0);
		unk_0xB0550BC91B0159D6(&(Local_147.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Local_147.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_147.f_3)
	{
		case 0:
			return Global_262145.f_10515;
		
		case 8:
			return Global_262145.f_10517;
		
		case 3:
			return Global_262145.f_10518;
		
		case 1:
			return Global_262145.f_11313;
		
		case 6:
			return Global_262145.f_11314;
		
		case 10:
			return Global_262145.f_11316;
		
		case 11:
			return Global_262145.f_11318;
		
		case 12:
			return Global_262145.f_11319;
		
		case 15:
			return Global_262145.f_11323;
		
		case 16:
			return Global_262145.f_11324;
		
		case 17:
			return Global_262145.f_11325;
		
		case 18:
			return Global_262145.f_11326;
		
		case 13:
			return Global_262145.f_11317;
		
		case 14:
			return Global_262145.f_11320;
		
		case 2:
			return Global_262145.f_10520;
		
		case 7:
			return Global_262145.f_11315;
		
		case 9:
			return Global_262145.f_11321;
		
		case 5:
			return Global_262145.f_10521;
		
		case 4:
			return Global_262145.f_10519;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_11283;
}

void func_30(int iParam0)
{
	Local_147.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (func_43() && ((Local_147.f_37 == 0 || func_5(Local_147.f_3)) || Local_147.f_54 < 10))
	{
		Var0 = { Local_147.f_67[iLocal_123 /*2*/] };
		if (func_42(Var0))
		{
			if (!unk_0xCCDCD6672DAE6835(Var0.f_1))
			{
				if (func_40(Local_147.f_3, iLocal_123, &Var1, &uVar2))
				{
					Local_147.f_55[iLocal_123] = func_36(iLocal_123);
					if (unk_0xE2D0C323A1AE5D85(Local_1513[Local_147.f_55[iLocal_123] /*12*/].f_2, iLocal_123))
					{
						if (func_33(&(Local_147.f_67[iLocal_123 /*2*/].f_1), Var0, Var1, uVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x28271FBFA024090B(unk_0xF2D8DACFAEBD9629(Local_147.f_67[iLocal_123 /*2*/].f_1), 1, 1);
							unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), 1);
							unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), 1);
							unk_0x67E2C3DCB85CCED2(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), 0);
							func_32(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), 1);
							if (unk_0x6BD06F4780EAC5DD("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
							{
								if (unk_0xF2549FF74D64B720(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0xC3B76795ECBDEF41(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), "MPBitset");
								}
								unk_0xCED9E32812D6C7C7(&iVar3, 10);
								unk_0xCED9E32812D6C7C7(&iVar3, 11);
								unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_147.f_67[iLocal_123 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_147.f_55[iLocal_123] = -1;
							Local_147.f_54++;
						}
					}
				}
			}
		}
		iLocal_123++;
		if (iLocal_123 >= 10)
		{
			iLocal_123 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 13);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&uVar0, 13);
		}
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
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
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam13)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam8);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam6)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam7);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam10)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_34(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_35(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam3 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2667222.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_35(int iParam0, struct<3> Param1, int iParam2)
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
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x5D79167FED95F0B0() - 1))
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
			{
				iVar6 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
				if (func_12(iVar6, 1, 1))
				{
					fVar3 = func_37(func_38(iVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_37(struct<3> Param0, struct<3> Param1)
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return vdist(Param0, Param1);
}

Vector3 func_38(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_41(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

bool func_43()
{
	return (func_5(Local_147.f_3) || func_41(Local_147.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_117(unk_0x9E2D6C50374FCFA9(), 0) || func_114(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_113(unk_0x9E2D6C50374FCFA9()) || func_111(unk_0x9E2D6C50374FCFA9()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x21E2C39591974468() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1836830.f_18)))
	{
		if (!func_1(&(Global_1836830.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1836830.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD4538F501EDCD96C() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()
{
	return unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 0);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x3B6C41B60543C47E(0, iParam1);
			break;
		
		default:
			uVar1 = func_49(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			if (unk_0xE2D0C323A1AE5D85(iVar0, iParam0))
			{
				unk_0xB0550BC91B0159D6(&iVar0, iParam0);
				unk_0x3B6C41B60543C47E(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_49(iParam1);
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	return unk_0xE2D0C323A1AE5D85(uVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 2) && !func_8(unk_0x9E2D6C50374FCFA9())) && !func_7(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xACC32B78196FBC2A(sParam1))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_110(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_108(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_55(uParam0->f_69, 8192))
			{
				Global_1932198 = 1;
			}
			return 1;
		}
		if (((Global_2703656.f_2414[0 /*80*/].f_1 == 13 || Global_2703656.f_2414[0 /*80*/].f_1 == 53) || Global_2703656.f_2414[0 /*80*/].f_1 == 54) || Global_2703656.f_2414[0 /*80*/].f_1 == 58)
		{
			Global_2703656.f_2414[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703656.f_2414[iVar0 + 1 /*80*/] = { Global_2703656.f_2414[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703656.f_2414[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_108(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_108(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
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

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56()
{
	bool bVar0;
	
	if (Global_2703656.f_2737)
	{
		return;
	}
	if (!Global_78120)
	{
		Global_78120 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_57()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_61(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_58(&(Global_2703656.f_2738.f_1), 1);
}

void func_58(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78121)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_60(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_62(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return Global_2714627.f_19;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()
{
	return 21;
}

int func_67(int iParam0)
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

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_107() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_105(iParam0) && !bParam4)
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
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_105(unk_0x9E2D6C50374FCFA9()) || (func_104() && func_103())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		uVar1 = func_102();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_12(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_100(iParam1, iParam0, 0);
							}
							else
							{
								return func_82(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_100(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_100(iParam1, iParam0, 0);
		}
		else
		{
			return func_82(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4718592.f_86750, 1))
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
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
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
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
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
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
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
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

bool func_78()
{
	if (func_79())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_79()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_80()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()
{
	if (func_79() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_76(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_107())
	{
		if (func_89(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_88(iParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_107())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_107();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_107();
}

int func_90(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_107())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_91()
{
	if ((((((func_99() || func_98()) || func_64()) || func_97()) || func_96()) || func_94()) || func_92())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	return func_93(Global_4718592.f_86750);
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94()
{
	return func_95(Global_4718592.f_86750);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_96()
{
	return Global_2714627.f_24;
}

bool func_97()
{
	return Global_2714627.f_21;
}

var func_98()
{
	return Global_2714627.f_18;
}

var func_99()
{
	return Global_2714627.f_17;
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_107())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 29))
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
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_101(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_76(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
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

var func_102()
{
	return Global_2621446.f_2;
}

bool func_103()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_104()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

int func_105(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_106())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_107()
{
	return -1;
}

void func_108(var uParam0, int iParam1)
{
	func_109(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_110(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_107();
	uParam1->f_18 = func_107();
	uParam1->f_19 = func_107();
	uParam1->f_20 = func_107();
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

bool func_111(int iParam0)
{
	return func_112(iParam0, 20);
}

bool func_112(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_112(iParam0, 9);
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 && func_115(Global_1893548[iParam0 /*600*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1)
	{
		if (func_115(Global_1893548[iParam0 /*600*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
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
	return func_116(iParam0, 0);
	return 0;
}

int func_116(int iParam0, int iParam1)
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

int func_117(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	Local_147 = iParam0;
}

int func_119()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_147.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_147.f_39));
	func_124();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_147.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_120();
	}
	return 1;
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_147.f_3))
		{
			Local_147.f_67[iVar0 /*2*/] = func_123();
		}
		else
		{
			Local_147.f_67[iVar0 /*2*/] = func_121();
		}
		iVar0++;
	}
}

int func_121()
{
	int iVar0;
	
	switch (Local_147.f_3)
	{
		case 12:
			return func_122();
			break;
	}
	iVar0 = unk_0x5853B15F78E1A265(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_122()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_123()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_124()
{
	int iVar0;
	
	iVar0 = func_129();
	Local_147.f_3 = iVar0;
	func_125(func_127(133, iVar0, 0, 0));
}

void func_125(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 470437478;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam0;
	iVar1 = func_126(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar1);
	}
}

var func_126(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (func_128(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_128(int iParam0)
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
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
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

int func_129()
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_11612;
	iVar0[1] = Global_262145.f_11285;
	iVar0[2] = Global_262145.f_11616;
	iVar0[3] = Global_262145.f_11614;
	iVar0[4] = Global_262145.f_11615;
	iVar0[5] = Global_262145.f_11617;
	iVar0[6] = Global_262145.f_11286;
	iVar0[7] = Global_262145.f_11287;
	iVar0[8] = Global_262145.f_11613;
	iVar0[9] = Global_262145.f_11293;
	iVar0[10] = Global_262145.f_11288;
	iVar0[11] = Global_262145.f_11290;
	iVar0[12] = Global_262145.f_11291;
	iVar0[13] = Global_262145.f_11289;
	iVar0[14] = Global_262145.f_11292;
	iVar0[15] = Global_262145.f_11295;
	iVar0[16] = Global_262145.f_11296;
	iVar0[17] = Global_262145.f_11297;
	iVar0[18] = Global_262145.f_11298;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_132(iVar2) || func_130(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = unk_0xC4EAB25A108C2429(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_129();
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_131(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8369)
		{
			if (Global_2775740.f_136[iVar0 /*2*/] == iVar1 && Global_2775740.f_136[iVar0 /*2*/].f_1 == func_127(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
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

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10508;
		
		case 1:
			return Global_262145.f_11299;
		
		case 6:
			return Global_262145.f_11300;
		
		case 7:
			return Global_262145.f_11301;
		
		case 8:
			return Global_262145.f_10509;
		
		case 3:
			return Global_262145.f_10510;
		
		case 4:
			return Global_262145.f_10511;
		
		case 2:
			return Global_262145.f_10512;
		
		case 5:
			return Global_262145.f_10514;
		
		case 9:
			return Global_262145.f_11307;
		
		case 10:
			return Global_262145.f_11302;
		
		case 11:
			return Global_262145.f_11304;
		
		case 12:
			return Global_262145.f_11305;
		
		case 15:
			return Global_262145.f_11309;
		
		case 16:
			return Global_262145.f_11310;
		
		case 17:
			return Global_262145.f_11311;
		
		case 18:
			return Global_262145.f_11312;
		
		case 13:
			return Global_262145.f_11303;
		
		case 14:
			return Global_262145.f_11306;
		
		default:
	}
	return 1;
}

void func_133()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_147.f_55[iVar0] == unk_0xF1354995C6159A78())
			{
				if (func_134(iVar0))
				{
					if (!unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2, iVar0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2, iVar0))
				{
					unk_0xB0550BC91B0159D6(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2, iVar0))
			{
				unk_0xB0550BC91B0159D6(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_134(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (func_39(iParam0, &Var0, &uVar1))
	{
		if (func_135(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2667222.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0xAC48FF26FAAA8DD0(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam11)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam12 > 0f)
	{
		if (func_140(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_136(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x987A5F1E1A67E3C0(func_138(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam1))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_137(iVar1) || !bParam8) && !Global_2689156[iVar1 /*453*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_138(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam6 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_138(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
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

int func_137(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_1853128[iVar0 /*888*/].f_858) && !func_139(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_38(iParam0);
}

int func_139(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam6 == 0)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam5 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam7) && bParam4) && func_141(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_38(iVar1), Param0, 1) < fParam1)
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

int func_141(int iParam0)
{
	if (func_144(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_143(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2783300))
	{
		return 1;
	}
	if (func_142(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_107())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_143(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_143(iParam0) };
		Global_2783313 = { func_143(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2783300))
		{
			if (unk_0x8C992447292D600F(&Global_2783313))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300);
				unk_0x4FFBF2C0D8249E45(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_145()
{
	float fVar0;
	float fVar1;
	
	func_695();
	func_694();
	if (func_692())
	{
		func_576();
	}
	if (!func_7(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_549(0, 1, 1))
		{
			if (unk_0xE2D0C323A1AE5D85(iLocal_118, 6))
			{
				unk_0xB0550BC91B0159D6(&iLocal_118, 6);
			}
			switch (Local_1513[unk_0xF1354995C6159A78() /*12*/].f_3)
			{
				case 0:
					if (Local_147.f_37 < 2)
					{
						if (Local_147.f_37 > 0)
						{
							if (Local_147.f_3 != -1)
							{
								func_548(1);
								func_547(1);
							}
						}
					}
					else
					{
						func_547(2);
					}
					break;
				
				case 1:
					func_541(9);
					if (Local_1514.f_8 == 0)
					{
						Local_1514.f_8 = unk_0x48352343BC5A41AE();
					}
					if (Local_147.f_37 >= 2)
					{
						func_547(2);
						Local_1514.f_9 = unk_0x48352343BC5A41AE();
					}
					if (func_43())
					{
						func_541(0);
					}
					func_539((func_29() - func_540(&(Local_147.f_43), 0, 0)));
					func_536(func_538((func_29() - func_540(&(Local_147.f_43), 0, 0)), 0), func_537(Local_147.f_3));
					func_469(0, func_535());
					func_454();
					func_433();
					if (func_432())
					{
						func_431();
					}
					break;
				
				case 2:
					if (Local_147.f_37 > 2)
					{
						func_548(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_430())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_412(133, fVar0, fVar1, 0, 0, 0, 0);
						func_411(Local_147.f_3, 1);
						func_410(23, 1);
						if (Local_1514.f_8 == 0)
						{
							Local_1514.f_8 = unk_0x48352343BC5A41AE();
						}
						if (Local_1514.f_9 == 0)
						{
							Local_1514.f_9 = unk_0x48352343BC5A41AE();
						}
						func_406();
						unk_0xB2FFDFEBF8F94F36(1);
						if (func_430())
						{
							unk_0x8576657A629C4B0A(0f);
							unk_0xC0F70A3CDEC87ECE(0);
						}
						if (Local_147.f_3 == 14)
						{
							func_405(&Local_138);
						}
						func_404();
						if (!func_7(unk_0x9E2D6C50374FCFA9()))
						{
							func_52(63, "AMCH_STARTED", func_403(Local_147.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_400("AMCH_WARN", func_402(Local_147.f_3), func_401(Local_147.f_3)))
							{
								unk_0x3410421C60BF7143(1);
							}
						}
						if (func_43())
						{
							func_382(678f, 794f, 206f, 8f, 0);
							func_382(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_382(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_547(3);
					}
					break;
				
				case 3:
					if (Local_147.f_37 > 3)
					{
						iLocal_120 = 0;
						func_547(4);
					}
					else
					{
						if (!unk_0xE2D0C323A1AE5D85(Local_147.f_2, 1))
						{
							func_340();
							func_337();
							func_336();
						}
						if (func_335(0) && !func_20(0))
						{
							func_334();
						}
					}
					if (func_430())
					{
						unk_0xEF2C918F9B332BFD(unk_0x9E2D6C50374FCFA9());
					}
					func_333();
					func_308();
					func_576();
					func_469(0, 1);
					func_454();
					func_433();
					func_541(2);
					func_541(5);
					func_541(7);
					break;
				
				case 4:
					if (func_297(&uLocal_130, !unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0)) || unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
					{
						if (func_5(Local_147.f_3))
						{
							if (Local_147.f_37 == 5)
							{
								func_547(5);
							}
						}
						else
						{
							func_547(6);
						}
					}
					func_284();
					func_177();
					func_308();
					func_576();
					func_469(1, 1);
					func_404();
					break;
				
				case 5:
					if (Local_147.f_37 > 5)
					{
						func_547(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
	func_152();
	func_147();
	func_146();
}

void func_146()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_43())
	{
		Var0 = { Local_147.f_67[iLocal_137 /*2*/] };
		if (unk_0xCCDCD6672DAE6835(Var0.f_1))
		{
			iVar1 = unk_0xA5677134B9672173(Var0.f_1);
			if (unk_0x3A8B0F5B0E3DE13A(iVar1))
			{
				if (!unk_0x55A0C756C4A8220C(iVar1, 0))
				{
					unk_0x3D81769BEC61BFF8(&iVar1);
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 >= 10)
		{
			iLocal_137 = 0;
			iLocal_146 = iLocal_145;
			iLocal_145 = 0;
		}
	}
}

void func_147()
{
	if (Local_147.f_37 == 5)
	{
		if (unk_0xCCDCD6672DAE6835(Local_147.f_67[iLocal_137 /*2*/].f_1))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_147.f_67[iLocal_137 /*2*/].f_1), 0))
			{
				if (!unk_0xE2D0C323A1AE5D85(iLocal_143, iLocal_137))
				{
					unk_0xCED9E32812D6C7C7(&iLocal_143, iLocal_137);
					iLocal_144[iLocal_137] = unk_0xA9ADCC8D104AA552();
					unk_0x979FC7400A5D0CD2(iLocal_144[iLocal_137], "Explosion_Countdown", unk_0xA5677134B9672173(Local_147.f_67[iLocal_137 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x57973ADDF2BFAA90(iLocal_144[iLocal_137], "Time", 30f);
				}
				if ((30000 - func_540(&(Local_147.f_45), 0, 0)) >= 0)
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_147.f_67[iLocal_137 /*2*/].f_1), 0))
					{
						func_541(1);
						iLocal_145 = 1;
					}
				}
				else if (unk_0x07B2F8356DC13CF4(Local_147.f_67[iLocal_137 /*2*/].f_1))
				{
					unk_0xE68645525D451A8B(unk_0xA5677134B9672173(Local_147.f_67[iLocal_137 /*2*/].f_1));
					unk_0x04375AABE1BE38AE(unk_0xA5677134B9672173(Local_147.f_67[iLocal_137 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(iLocal_143, iLocal_137) && !unk_0x78D9ADD511FEAD8B(iLocal_144[iLocal_137]))
			{
				unk_0xF889BDFCC181BA9F(iLocal_144[iLocal_137]);
			}
		}
		if (iLocal_146)
		{
			if (!func_105(unk_0x9E2D6C50374FCFA9()))
			{
				func_149(func_538((30000 - func_540(&(Local_147.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_148();
			}
		}
	}
}

void func_148()
{
	Global_1645739.f_1130 = 1;
}

void func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_151(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_150(7, iVar0);
		Global_1645739.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1645739.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_4617.f_172[iVar0] = iParam2;
		Global_1645739.f_4617.f_216[iVar0] = iParam3;
		Global_1645739.f_4617.f_183[iVar0] = iParam4;
		Global_1645739.f_4617.f_194[iVar0] = iParam5;
		Global_1645739.f_4617.f_249[iVar0] = iParam6;
		Global_1645739.f_4617.f_260[iVar0] = iParam7;
		Global_1645739.f_4617.f_205[iVar0] = iParam8;
		Global_1645739.f_4617.f_314[iVar0] = iParam9;
		Global_1645739.f_4617.f_325[iVar0] = iParam10;
		Global_1645739.f_4617.f_357[iVar0] = iParam11;
		Global_1645739.f_4617.f_238[iVar0] = iParam12;
		Global_1645739.f_4617.f_271[iVar0] = iParam13;
		Global_1645739.f_4617.f_368[iVar0] = iParam14;
		Global_1645739.f_4617.f_379[iVar0] = iParam15;
		Global_1645739.f_4617.f_390[iVar0] = iParam16;
		Global_1645739.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_150(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_151(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

void func_152()
{
	if (((func_12(unk_0x9E2D6C50374FCFA9(), 1, 1) && !func_7(unk_0x9E2D6C50374FCFA9())) && !func_168(unk_0x9E2D6C50374FCFA9())) && func_549(0, 1, 1))
	{
		if (Local_1513[unk_0xF1354995C6159A78() /*12*/].f_3 == 1)
		{
			func_165(func_167(Local_147.f_3), func_402(Local_147.f_3), 0, 0);
		}
		else if (Local_1513[unk_0xF1354995C6159A78() /*12*/].f_3 == 3)
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 10))
			{
				func_153(func_401(Local_147.f_3), 0);
			}
			else
			{
				func_153("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_404();
		}
	}
	else
	{
		func_404();
	}
}

void func_153(char* sParam0, bool bParam1)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return;
	}
	if (func_163(sParam0))
	{
		return;
	}
	func_157();
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	func_156();
	func_155(bParam1);
	func_154();
}

void func_154()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 1);
}

void func_155(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 0);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574747.f_59), 0);
}

void func_156()
{
	Global_1574747.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
}

void func_157()
{
	func_159();
	func_158(0);
}

void func_158(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574747 = 20;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	if (bVar0)
	{
		Global_1574747.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
	}
	StringCopy(&(Global_1574747.f_12), "", 16);
	StringCopy(&(Global_1574747.f_16), "", 64);
	StringCopy(&(Global_1574747.f_32), "", 64);
	Global_1574747.f_52 = 0;
	Global_1574747.f_53 = 0;
	Global_1574747.f_54 = 0;
	Global_1574747.f_55 = -1;
	Global_1574747.f_56 = 0;
	Global_1574747.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_159()
{
	if (!func_162())
	{
	}
	if (func_161())
	{
		unk_0x1419D7B938CBFF2E(&(Global_1574747.f_12));
		func_160();
		unk_0xF4666BA5B36DBCB2();
	}
}

void func_160()
{
	switch (Global_1574747)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			unk_0x2AE954BA77A66307(Global_1574747.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		default:
	}
}

int func_161()
{
	if (Global_1574747 == 20)
	{
		return 0;
	}
	return 1;
}

int func_162()
{
	if (!func_161())
	{
		return 0;
	}
	unk_0x09684FD679B0E474(&(Global_1574747.f_12));
	func_160();
	return unk_0xD7AA4C82B5D00977();
}

bool func_163(char* sParam0)
{
	if (!func_161())
	{
		return 0;
	}
	if (Global_1574747 == 11)
	{
		return func_164(sParam0);
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12));
}

bool func_164(char* sParam0)
{
	if (!func_161())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_16));
}

int func_165(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (func_166(sParam0, sParam1) && Global_1574747.f_56 == Global_1574747.f_58)
	{
		return 0;
	}
	func_157();
	Global_1574747 = 3;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	StringCopy(&(Global_1574747.f_16), sParam1, 64);
	Global_1574747.f_58 = iParam3;
	Global_1574747.f_56 = iParam3;
	func_156();
	func_155(bParam2);
	func_154();
	return 1;
}

bool func_166(char* sParam0, char* sParam1)
{
	if (!func_161())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (!unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12)))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam1) == unk_0x2E87280918B16506(&(Global_1574747.f_16));
}

char* func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A())) || unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A())) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) || unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A())) || unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A())) || unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A())) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) || unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A())) || unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A())) || unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
					iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
					if (unk_0x6F0299ED3CEB4E5D(iVar1) && unk_0x532C99FAF70C652B(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_sniperrifle"), 0) && !unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_heavysniper"), 0)) && !unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A())) || unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A())) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) || unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A())) || unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_168(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		if (((func_171() && !func_170()) || func_169(unk_0x9E2D6C50374FCFA9(), 21)) || func_169(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1836830.f_13)))
		{
			if (!func_1(&(Global_1836830.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1836830.f_13));
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9);
}

bool func_169(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_170()
{
	return Global_1574580.f_1;
}

bool func_171()
{
	return Global_1574580;
}

void func_172()
{
	if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 6))
	{
		unk_0x687E1AFE919B49BD();
		func_469(1, 1);
		unk_0xF889BDFCC181BA9F(iLocal_126);
		unk_0xB0550BC91B0159D6(&iLocal_118, 4);
		func_176();
		func_174();
		unk_0xDAA3C9FEF77614C4(0f, 0, 21);
		unk_0xCED9E32812D6C7C7(&iLocal_118, 6);
		func_173();
	}
}

void func_173()
{
	Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_7 = 0;
}

void func_174()
{
	if (Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
	{
		func_175();
	}
}

void func_175()
{
	struct<28> Var0;
	
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676143 = { Var0 };
	Global_2676143.f_6 = -1;
}

void func_176()
{
	struct<6> Var0;
	
	if (Global_2667222.f_489.f_1 == unk_0x69CE66B03B2184EB())
	{
		Global_2667222.f_489 = { Var0 };
	}
}

void func_177()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1), 0);
			return;
		}
		if (func_168(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1), 0);
			return;
		}
		func_245(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1514.f_6 = (Local_1514.f_6 + iVar0);
			if (!Global_262145.f_11764)
			{
				func_244(10, Local_1514.f_6);
			}
			Global_2727434 = iVar0;
			if (func_243())
			{
				func_231(-1468524125, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				unk_0xC1F6879B97D260F3(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1514.f_7 = (Local_1514.f_7 + iVar1);
			func_230();
			func_178(0, unk_0xE2D3D51028F0428A(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1), 0);
	}
}

int func_178(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_179(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_179(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_189(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_185(unk_0x6EA486FF6D815B4B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_180(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_180(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_183(iParam0, 1) };
	if (iParam0 == func_182(unk_0xE2D3D51028F0428A()))
	{
		func_181(1);
	}
	func_185(Var0, iParam1, 0, sParam2, uParam3);
}

void func_181(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_182(int iParam0)
{
	return iParam0;
}

Vector3 func_183(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x66DEF7450747437A())
	{
		Var1 = { unk_0x9C0ED16B4F524508(2) };
	}
	if (iParam0 == func_184(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		Var0 = { unk_0xCACAD935C0BEE14F(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar2 = unk_0x82FE2343F8BDFF0B(iParam0);
		if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x6DB7FBD602C51670(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_184(int iParam0)
{
	return iParam0;
}

void func_185(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_188(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam1;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam2;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_187();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_186();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), uParam4);
		}
	}
}

int func_186()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_187()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_188(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x987A5F1E1A67E3C0(unk_0xCB284F809B594322(), Param0, 1);
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

var func_189(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_190(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_190(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_229(unk_0x9E2D6C50374FCFA9()) || func_228(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_226() || func_223(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_222(uParam2))
	{
	}
	if (func_221())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_219(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_218(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_216(0, &iVar1);
					break;
				
				case 3:
					func_216(1, &iVar1);
					break;
				
				case 1:
					func_214(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
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
			func_211(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_200((func_210(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_2 != -1)
				{
					func_211(1166, iVar1, -1);
				}
				func_195(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_191((func_193(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_191((func_193(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_191(int iParam0)
{
	if (func_221())
	{
		Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_5 = iParam0;
		func_192(joaat("mpply_globalxp"), iParam0);
	}
}

void func_192(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_193(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_194(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_194(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_195(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_143(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar1 = func_198(func_199(&Var0));
			if (iVar1 == 0)
			{
				func_197(&Global_1655483, iParam0);
				func_196(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar1 == 1)
			{
				func_197(&Global_1655484, iParam0);
				func_196(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar1 == 2)
			{
				func_197(&Global_1655485, iParam0);
				func_196(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar1 == 3)
			{
				func_197(&Global_1655486, iParam0);
				func_196(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar1 == 4)
			{
				func_197(&Global_1655487, iParam0);
				func_196(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_196(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_198(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_199(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

void func_200(int iParam0, int iParam1, int iParam2)
{
	if (func_221())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_209(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_209(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_208(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_6 = func_206(iParam0, 1);
		}
		func_205(640, iParam0, -1, 1);
		func_204(641, func_206(iParam0, 1), -1, 1, 0);
		Global_1655628[func_209(-1)] = iParam0;
		func_201(-1109644434, 7, 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_203(iParam1, iParam2))
	{
		iVar0 = func_202();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_202()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_203(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_209(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_209(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_209(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_209(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_209(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_209(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_209(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_209(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_209(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_209(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_209(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_209(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_209(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_209(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_209(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_209(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_209(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_209(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_209(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_209(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_209(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_209(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_209(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_209(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_209(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_209(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_209(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_209(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_209(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_209(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_209(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_209(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_209(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_209(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_209(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_209(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_209(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_209(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_209(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_209(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_209(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_209(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_209(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_209(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_209(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_209(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_209(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_209(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_209(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_209(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_209(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_209(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_209(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_207(iParam0, 0);
}

int func_207(int iParam0, int iParam1)
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
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
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

int func_208(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_210(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_209(-1)];
			}
			else if (func_208(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_209(-1)];
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_209(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_212(iParam0))
	{
		func_204(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_205(iParam0, iVar0, iParam2, 1);
	}
}

int func_212(int iParam0)
{
	if (Global_1655477)
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
			case 10890:
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
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_209(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_76(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_144(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = round((func_215(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_215(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_215(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_216(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_144(unk_0x9E2D6C50374FCFA9(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_217(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_144(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = round((func_215(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_215(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_217(int iParam0, int iParam1)
{
	return vdist(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_215(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_219(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_210(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_210(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_220(8000, 0, 0) > 0)
	{
		if (func_220(8000, 0, 0) < (iParam0 + func_210(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_220(8000, 0, 0) - func_210(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_220(int iParam0, bool bParam1, int iParam2)
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
	return Global_294328[iParam0];
}

int func_221()
{
	return 1;
}

int func_222(var uParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	return func_224(func_225(iParam0));
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_225(int iParam0)
{
	if (func_117(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

bool func_226()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_64();
	}
	return func_227(Global_4718592.f_86750);
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_229(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_230()
{
	Global_2726775 = 1;
}

void func_231(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_243())
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
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_232(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_232(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_232(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_232(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_232(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_243())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_16()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_239(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_238(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_233(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_233(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_234(iParam0);
	}
}

void func_234(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_243())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_237(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_235(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_235(var uParam0)
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
	func_236(&(uParam0->f_14));
	func_236(&(uParam0->f_14.f_13));
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

void func_236(var uParam0)
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

int func_237(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_238(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_239(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_243())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_240(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_240(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_242(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_241();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_241()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_242(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_243()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23765 == 0 || Global_262145.f_23765 == 1)
		{
			if (!unk_0x8FE9914D4872D601() || Global_262145.f_23765 == 1)
			{
				Global_2810287.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810287.f_284 = iParam1;
				Global_2810287.f_285 = 0;
			}
		}
	}
}

void func_245(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0xF1354995C6159A78(), 1))
	{
		iVar1 = floor(((to_float((Local_147.f_1 - iLocal_116)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11699)
		{
			iVar1 = Global_262145.f_11699;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_283() * iVar1);
		*uParam1 = (func_282() * iVar1);
		fVar2 = func_281();
		if (fVar2 > 0f && !unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
		{
			iVar3 = round(((to_float(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_280())
			{
				iVar3 = func_280();
			}
			iVar4 = Local_147.f_51;
			if (iVar4 > func_279())
			{
				iVar4 = func_279();
			}
			*uParam0 = (*uParam0 + round((IntToFloat(func_272(func_278(), func_277(), iVar3, fVar2, func_276(), func_275(), func_274(), iVar4)) * Global_262145.f_11712)));
			*uParam1 = (*uParam1 + round((IntToFloat(func_272(func_271(), func_270(), iVar3, fVar2, func_276(), func_275(), func_274(), iVar4)) * Global_262145.f_11713)));
		}
		else
		{
			func_268(1);
		}
	}
	else
	{
		func_268(0);
	}
	func_246(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_246(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_267())
		{
			if (func_266(0))
			{
				if (!func_262(0))
				{
					if (unk_0x0D01086B38EC256F(func_261()))
					{
						if (func_260() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_260());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_258(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_251("GB_BCUT_TICK1", func_261(), iVar0, 0, 0, 1);
						}
						func_250(20);
						func_247(func_261(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = 657959395;
		Var0.f_1 = unk_0x9E2D6C50374FCFA9();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_249(iParam0);
		func_248(&(Var0.f_6), &(Var0.f_7));
		unk_0x2700C00F82C16BF0(1, &Var0, 8, func_242(iParam0));
	}
}

void func_248(var uParam0, var uParam1)
{
	*uParam0 = Global_1921036.f_9;
	*uParam1 = Global_1921036.f_10;
}

var func_249(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_511;
}

void func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_7[iVar0]), iVar1);
}

int func_251(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var1))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		unk_0x138506D6C7564EF1(func_69(iParam1, -2, 1, 0, 0));
		unk_0x76DB21247AE4E4E2(func_256(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x138506D6C7564EF1(iParam3);
		}
		unk_0x2AE954BA77A66307(iParam2);
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
		func_252(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_252(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_255() || !unk_0x44859561F653DD4E()) || !func_14(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_253(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_254(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_255()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

var func_256(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_257(&cVar0);
}

var func_257(char[4] cParam0)
{
	return cParam0;
}

void func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_259(1);
	}
	else
	{
		iVar1 = func_259(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_259(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12654;
}

int func_260()
{
	return Global_262145.f_12653;
}

int func_261()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

bool func_262(bool bParam0)
{
	return func_263(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_263(int iParam0, bool bParam1)
{
	return func_264(iParam0, bParam1, 1);
}

int func_264(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_265(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_107() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	if (iParam0 != func_107())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_107())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_266(bool bParam0)
{
	return func_89(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_267()
{
	return func_90(unk_0x9E2D6C50374FCFA9());
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		if (func_269(1))
		{
			unk_0xCED9E32812D6C7C7(&Global_1836855, 1);
		}
	}
	else if (func_269(2))
	{
		unk_0xCED9E32812D6C7C7(&Global_1836855, 2);
	}
}

int func_269(int iParam0)
{
	var uVar0;
	
	uVar0 = func_213(2536, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xE2D0C323A1AE5D85(uVar0, 0) && unk_0xE2D0C323A1AE5D85(iVar0, 1)) && unk_0xE2D0C323A1AE5D85(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 3) && unk_0xE2D0C323A1AE5D85(iVar0, 4)) && unk_0xE2D0C323A1AE5D85(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 6) && unk_0xE2D0C323A1AE5D85(iVar0, 7)) && unk_0xE2D0C323A1AE5D85(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 9) && unk_0xE2D0C323A1AE5D85(iVar0, 10)) && unk_0xE2D0C323A1AE5D85(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_270()
{
	return Global_262145.f_11199;
}

int func_271()
{
	return Global_262145.f_11197;
}

int func_272(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_273(round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_274()
{
	return Global_262145.f_11202;
}

float func_275()
{
	return Global_262145.f_11201;
}

float func_276()
{
	return Global_262145.f_11200;
}

int func_277()
{
	return Global_262145.f_11198;
}

int func_278()
{
	return Global_262145.f_11196;
}

int func_279()
{
	return Global_262145.f_11604;
}

int func_280()
{
	return Global_262145.f_11603;
}

var func_281()
{
	if (func_20(0))
	{
		return Global_262145.f_11223;
	}
	if (func_20(1))
	{
		return Global_262145.f_11224;
	}
	if (func_20(2))
	{
		return Global_262145.f_11225;
	}
	return Global_262145.f_11226;
}

int func_282()
{
	return Global_262145.f_11195;
}

int func_283()
{
	return Global_262145.f_11194;
}

void func_284()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1, 1) && (func_296() || unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0)))
	{
		if (func_67(func_295()))
		{
			func_294();
		}
		if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
			{
				if (func_335(0))
				{
					iVar2 = Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4;
					func_290(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_288(64, func_289(Local_147.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_402(Local_147.f_3), 1, 2, 0);
						}
						else if (func_287())
						{
							func_288(69, func_289(Local_147.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
						else
						{
							func_288(64, func_289(Local_147.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_288(67, func_289(Local_147.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_402(Local_147.f_3), 1, 2, 0);
						}
						else if (func_287())
						{
							func_288(75, func_289(Local_147.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
						else
						{
							func_288(67, func_289(Local_147.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_288(67, func_289(Local_147.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_402(Local_147.f_3), 1, 2, 0);
						}
						else if (func_287())
						{
							func_288(75, func_289(Local_147.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
						else
						{
							func_288(67, func_289(Local_147.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_402(Local_147.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0x54F800F95142C750(Local_147.f_4[0]);
						if (unk_0x81F82FFBED0CACCA(uVar3))
						{
							iVar4 = unk_0x6B01934FA503547F(iVar3);
							if (Local_1513[Local_147.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1513[Local_147.f_4[0] /*12*/].f_4;
							func_290(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_286(76, func_107(), func_289(Local_147.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_402(Local_147.f_3), -1, fVar1, 1, 2, unk_0x61042CA2A97BBB69(iVar4));
							}
							else if (func_287())
							{
								func_286(77, func_107(), func_289(Local_147.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_402(Local_147.f_3), iVar0, -1082130432, 1, 2, unk_0x61042CA2A97BBB69(iVar4));
							}
							else
							{
								func_286(76, func_107(), func_289(Local_147.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_402(Local_147.f_3), iVar0, -1082130432, 1, 2, unk_0x61042CA2A97BBB69(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1), 1);
			func_285(133);
		}
	}
}

void func_285(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_286(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
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
	func_110(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_287()
{
	return 0;
}

int func_288(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_110(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_108(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_289(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x70350E94345B6F7B())
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
			if (unk_0x70350E94345B6F7B())
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

int func_290(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_291(Local_147.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (to_float(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_291(int iParam0, int iParam1)
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
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_293(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_292(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_292(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_293(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_295()
{
	return Global_2703656.f_2414[0 /*80*/].f_1;
}

bool func_296()
{
	return unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 25);
}

int func_297(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_307()) && !(func_117(unk_0x9E2D6C50374FCFA9(), 0) && (func_113(unk_0x9E2D6C50374FCFA9()) || func_306(unk_0x9E2D6C50374FCFA9())))) && !func_304(unk_0x9E2D6C50374FCFA9()))
	{
		func_303();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 25);
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_302(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
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
				func_299();
				func_302(uParam0, 2);
			}
			break;
		
		case 2:
			func_299();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_298("AMEV_LBD_HELP"))
				{
					unk_0x3410421C60BF7143(1);
				}
				func_302(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
				func_302(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
			return 1;
	}
	return 0;
}

bool func_298(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_299()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xA829C9A2767AC8EF())
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 1);
			func_301("AMEV_LBD_HELP", -1);
			func_300(1);
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 0);
		}
	}
}

void func_300(int iParam0)
{
	unk_0xAD8BF87DDDACF427(3, 21, 200, 0, 0);
	if (iParam0 && !func_307())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_301(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_303()
{
	Global_2726776 = 1;
}

int func_304(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_305(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

bool func_306(int iParam0)
{
	return func_112(iParam0, 19);
}

bool func_307()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

void func_308()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	var uVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_147.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_332() && !func_105(unk_0x9E2D6C50374FCFA9()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_107();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_147.f_4[iVar7] > -1)
			{
				uVar18 = unk_0x54F800F95142C750(Local_147.f_4[iVar7]);
				if (unk_0x81F82FFBED0CACCA(uVar18))
				{
					iVar1 = unk_0x6B01934FA503547F(iVar18);
					if (func_12(iVar1, 0, 1))
					{
						if (!func_14(iVar1, 0))
						{
							if (Local_1513[Local_147.f_4[iVar7] /*12*/].f_4 != 0)
							{
								iVar0[iVar15] = iVar1;
								func_290(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1513[Local_147.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_266(1))
								{
									if (func_89(iVar1, 1))
									{
										uVar17[iVar7] = func_69(iVar1, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0xF1354995C6159A78();
		if (func_105(unk_0x9E2D6C50374FCFA9()))
		{
			uVar19 = func_330();
			iVar20 = unk_0xFF65CDB0EB7ACE71(uVar19);
			if (unk_0x0D01086B38EC256F(iVar20))
			{
				iVar21 = unk_0x32F47FD509BB6D38(iVar20);
				if (unk_0x81F82FFBED0CACCA(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_290(&iVar4, &fVar9, iLocal_120, 1);
		func_290(&iVar5, &fVar10, Local_1513[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_540(&(Local_147.f_39), 0, 0);
		iVar6 = func_538(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_327(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (unk_0xE2D0C323A1AE5D85(iLocal_118, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_332() || Local_147.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_147.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_323(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_289(Local_147.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_324(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_287())
		{
			func_322(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_324(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_313(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_289(Local_147.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_324(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_309();
	}
}

void func_309()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_312();
	if (fVar0 >= 0f)
	{
		if (Local_147.f_37 == 3)
		{
			if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
				{
					iVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x55A0C756C4A8220C(iVar1, 0))
					{
						func_311(iVar1, &fLocal_124);
						fVar2 = (fVar0 + fLocal_124);
						unk_0xDAA3C9FEF77614C4(fVar2, 1, 21);
						func_310(fVar0);
						return;
					}
				}
			}
		}
		if (func_298("AMCH_FLYLOW"))
		{
			unk_0x3410421C60BF7143(1);
		}
		if (unk_0xE2D0C323A1AE5D85(iLocal_118, 4))
		{
			unk_0xF889BDFCC181BA9F(iLocal_126);
			unk_0xB0550BC91B0159D6(&iLocal_118, 4);
		}
		unk_0xDAA3C9FEF77614C4(0f, 0, 21);
	}
}

void func_310(float fParam0)
{
	float fVar0;
	
	if (unk_0x9C6A175F9509B94D(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_541(6);
			if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 4))
			{
				unk_0x91DFC8F68F6D9B05(iLocal_126, "Altitude_Warning", "EXILE_1", 1);
				unk_0xCED9E32812D6C7C7(&iLocal_118, 4);
			}
		}
		else
		{
			if (func_298("AMCH_FLYLOW"))
			{
				unk_0x3410421C60BF7143(1);
			}
			if (unk_0xE2D0C323A1AE5D85(iLocal_118, 4))
			{
				unk_0xF889BDFCC181BA9F(iLocal_126);
				unk_0xB0550BC91B0159D6(&iLocal_118, 4);
			}
		}
	}
}

float func_311(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	
	Var1 = { unk_0x6B62510F212526DC(iParam0, 1) };
	unk_0x9CD4CBF2BBE10F00(Var1, uParam1, 1, 0);
	unk_0x9CD4CBF2BBE10F00(Var1, &uVar2, 0, 0);
	if (unk_0x79A47B0799590D3D())
	{
		func_541(3);
		unk_0xCED9E32812D6C7C7(&iLocal_118, 10);
		func_27(&uLocal_114, 0, 0);
	}
	else if (unk_0xE2D0C323A1AE5D85(iLocal_118, 10))
	{
		if (func_1(&uLocal_114, 2000, 0))
		{
			unk_0xB0550BC91B0159D6(&iLocal_118, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_312()
{
	switch (Local_147.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_319(0) == 0)
	{
		return;
	}
	func_318();
	iVar1 = 0;
	if (((Global_2726296[0] != iParam0 || Global_2726296[1] != iParam1) || Global_2726296[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726296[0] = iParam0;
	Global_2726296[1] = iParam1;
	Global_2726296[2] = iParam2;
	Global_2726296[3] = 0;
	Global_2726296[4] = 0;
	if (Global_2726296[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[0]);
			Global_2726302[0 /*16*/] = { func_317(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_314(iParam3, &(Global_2726302[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[1]);
			Global_2726302[1 /*16*/] = { func_317(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_314(iParam4, &(Global_2726302[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[2]);
			Global_2726302[2 /*16*/] = { func_317(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_314(iParam5, &(Global_2726302[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_314(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9E2D6C50374FCFA9() != func_107())
			{
				if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_314(iParam7, unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_314(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_314(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam14))
	{
		sVar2 = sParam14;
	}
	func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_148();
}

void func_314(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_151(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_150(6, iVar0);
		Global_1645739.f_3999[iVar0] = iParam0;
		StringCopy(&(Global_1645739.f_3999.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_3999.f_183[iVar0] = iParam3;
		Global_1645739.f_3999.f_172[iVar0] = iParam2;
		Global_1645739.f_3999.f_260[iVar0] = iParam4;
		Global_1645739.f_3999.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1645739.f_3999.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1645739.f_3999.f_443[iVar0] = iParam7;
		Global_1645739.f_3999.f_454[iVar0] = fParam8;
		Global_1645739.f_3999.f_497[iVar0] = iParam9;
		Global_1645739.f_3999.f_508[iVar0] = iParam10;
		Global_1645739.f_3999.f_205[iVar0] = iParam11;
		Global_1645739.f_3999.f_216[iVar0] = iParam12;
		Global_1645739.f_3999.f_227[iVar0] = iParam13;
		Global_1645739.f_3999.f_238[iVar0] = iParam14;
		Global_1645739.f_3999.f_249[iVar0] = iParam15;
		Global_1645739.f_3999.f_519[iVar0] = iParam16;
		Global_1645739.f_3999.f_530[iVar0] = iParam17;
		Global_1645739.f_3999.f_541[iVar0] = iParam18;
		Global_1645739.f_3999.f_552[iVar0] = iParam19;
		Global_1645739.f_3999.f_563[iVar0] = iParam20;
		Global_1645739.f_3999.f_574[iVar0] = iParam21;
		Global_1645739.f_3999.f_585[iVar0] = iParam22;
		Global_1645739.f_3999.f_596[iVar0] = iParam23;
		Global_1645739.f_3999.f_607[iVar0] = iParam24;
		Global_1645739.f_3999.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_316())
		{
			Global_1645739.f_1130 = 1;
		}
		if (unk_0x8FE9914D4872D601())
		{
			iVar2 = 0;
			unk_0x604161EB05F29E6D(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1645739.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1645739.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1645739.f_1130 = 1;
			}
			if (func_315())
			{
				Global_1645739.f_1134 = 1;
			}
		}
	}
}

int func_315()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x604161EB05F29E6D(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_316()
{
	if (((unk_0xE2F2D76A4AA269FF() == 8 || unk_0xE2F2D76A4AA269FF() == 9) || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_317(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_318()
{
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	Global_2726779 = 1;
}

int func_319(bool bParam0)
{
	if (func_321())
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_320()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

bool func_321()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 12);
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_319(0) == 0)
	{
		return;
	}
	func_318();
	iVar1 = 0;
	if (((Global_2726296[0] != iParam0 || Global_2726296[1] != iParam1) || Global_2726296[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2726296[0] = iParam0;
	Global_2726296[1] = iParam1;
	Global_2726296[2] = iParam2;
	Global_2726296[3] = 0;
	Global_2726296[4] = 0;
	if (Global_2726296[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[0]);
			Global_2726302[0 /*16*/] = { func_317(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_149(iParam3, &(Global_2726302[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2726296[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[1]);
			Global_2726302[1 /*16*/] = { func_317(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_149(iParam4, &(Global_2726302[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2726296[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[2]);
			Global_2726302[2 /*16*/] = { func_317(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_149(iParam5, &(Global_2726302[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_149(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x9E2D6C50374FCFA9() != func_107())
			{
				if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_149(iParam7, unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_149(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_149(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam13))
	{
		sVar2 = sParam13;
	}
	func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_148();
}

void func_323(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_319(0) == 0)
	{
		return;
	}
	func_318();
	iVar1 = 0;
	if (((Global_2726296[0] != iParam0 || Global_2726296[1] != iParam1) || Global_2726296[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726296[0] = iParam0;
	Global_2726296[1] = iParam1;
	Global_2726296[2] = iParam2;
	Global_2726296[3] = 0;
	Global_2726296[4] = 0;
	if (Global_2726296[0] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[0]);
			Global_2726302[0 /*16*/] = { func_317(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_314(-1, &(Global_2726302[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[1] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[1]);
			Global_2726302[1 /*16*/] = { func_317(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_314(-1, &(Global_2726302[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[2] != func_107())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[2]);
			Global_2726302[2 /*16*/] = { func_317(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_314(-1, &(Global_2726302[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_314(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9E2D6C50374FCFA9() != func_107())
			{
				if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_314(-1, unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_314(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_168(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_314(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_222(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_149(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_148();
}

char* func_324()
{
	return "HUD_COUNTDOWN";
	switch (func_326(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_325())
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

int func_325()
{
	if (func_326(unk_0x9E2D6C50374FCFA9()) == 133)
	{
		return Global_2810287.f_5114;
	}
	return -1;
}

int func_326(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/];
	}
	return -1;
}

void func_327(int iParam0)
{
	if (func_329(unk_0x9E2D6C50374FCFA9()) || func_328(unk_0x9E2D6C50374FCFA9()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x51109C28352EC9A3())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_2810287.f_5032)))
			{
				unk_0x65C31D05DD70B2CC(&(Global_2810287.f_5032));
			}
			unk_0xB68BD12B3A8C52FD(1);
			unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
			unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
			unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
			unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
			if (Global_2810287.f_5040 > -1)
			{
				unk_0xCDBCC1BC1184B002(Global_2810287.f_5040);
				Global_2810287.f_5040 = -1;
			}
			Global_2810287.f_5030 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 4))
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 2))
				{
					if (unk_0x678069837EAE492B())
					{
						if ((!unk_0x3C57C2F07FEE34D2(unk_0x8ECF4849E085E658(unk_0x763A39AC8944F8BA()), "OFF") && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0xACC32B78196FBC2A(&(Global_2810287.f_5032)))
						{
							StringCopy(&(Global_2810287.f_5032), "", 32);
							unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
							unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
							unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
							unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
							unk_0xB68BD12B3A8C52FD(1);
							unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
						}
					}
				}
				else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 5))
				{
					unk_0x65C31D05DD70B2CC("OFF");
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S");
				}
				unk_0x66B27A59829491D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 1);
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x3AF345AA5885DF2B() != 0)
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xAB0BB8AA7AB39616())
						{
							StringCopy(&(Global_2810287.f_5032), unk_0x3EFC185839D591DB(), 32);
							unk_0x65C31D05DD70B2CC("OFF");
						}
						unk_0xB68BD12B3A8C52FD(1);
						unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 3))
				{
					Global_2810287.f_5040 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(Global_2810287.f_5040, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
			{
				Global_2810287.f_5030 = 0;
				Global_2810287.f_5040 = -1;
				unk_0x63B063064DC08617("FM_COUNTDOWN_30S_KILL");
				unk_0xB68BD12B3A8C52FD(0);
				unk_0x1CF3F44FC2EB9F99("FM_PRE_COUNTDOWN_30S");
				unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
				unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
				unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 1);
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 0);
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 2))
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 5);
				}
				else
				{
					unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 5);
					unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			Global_2810287.f_5030 = 0;
			Global_2810287.f_5040 = -1;
			unk_0x63B063064DC08617("FM_COUNTDOWN_30S_KILL");
			unk_0xB68BD12B3A8C52FD(0);
			unk_0x1CF3F44FC2EB9F99("FM_PRE_COUNTDOWN_30S");
			unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
			unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
			unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 1);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 0);
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 5);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 2);
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 5);
			}
		}
	}
}

int func_328(int iParam0)
{
	if (iParam0 != func_107() && func_12(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_329(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 19;
			}
		}
	}
	return 0;
}

var func_330()
{
	if (unk_0xE5965CDF24F93A9F(func_331()))
	{
		return func_331();
	}
	return func_102();
}

var func_331()
{
	return Global_2621446.f_3;
}

int func_332()
{
	switch (Local_147.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_333()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	var uVar3;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		Local_168.f_534[iVar0 /*42*/] = { Var1 };
		Local_168.f_534[iVar0 /*42*/].f_1 = func_107();
		if (Local_147.f_4[iVar0] > -1)
		{
			uVar3 = unk_0x54F800F95142C750(Local_147.f_4[iVar0]);
			if (unk_0x81F82FFBED0CACCA(uVar3))
			{
				iVar2 = unk_0x6B01934FA503547F(iVar3);
				if (!func_14(iVar2, 0))
				{
					Local_168.f_534[iVar0 /*42*/] = Local_147.f_4[iVar0];
					Local_168.f_534[iVar0 /*42*/].f_1 = iVar2;
					Local_168.f_534[iVar0 /*42*/].f_9 = Local_1513[Local_147.f_4[iVar0] /*12*/].f_4;
					Local_168.f_534[iVar0 /*42*/].f_31 = -1;
					Local_168.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_334()
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1797), 19);
}

int func_335(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_147.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1513[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_336()
{
}

void func_337()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_290(&iVar1, &fVar2, iLocal_120, 1);
	switch (Local_147.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_339(sVar0, fVar2 >= 70f);
			if (unk_0xA37204C64473B324(sVar0))
			{
				fVar2 = func_338(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x9364FA34F6E72A61(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xD6A1E19478669F13();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_339(sVar0, bVar3);
			if (unk_0xA37204C64473B324(sVar0))
			{
				fVar2 = to_float(iVar1);
				fVar2 = func_338(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_338(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x9364FA34F6E72A61(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_125 != iLocal_120)
			{
				if (iLocal_120 > 0)
				{
					unk_0x91DFC8F68F6D9B05(iLocal_127, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x57973ADDF2BFAA90(iLocal_127, "Count", to_float(iVar1));
				}
				else
				{
					unk_0x91DFC8F68F6D9B05(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_125 = iLocal_120;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 3))
		{
			if (func_262(1))
			{
				unk_0x91DFC8F68F6D9B05(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x91DFC8F68F6D9B05(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xCED9E32812D6C7C7(&iLocal_118, 3);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(iLocal_118, 3))
	{
		if (func_262(1))
		{
			unk_0x91DFC8F68F6D9B05(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x91DFC8F68F6D9B05(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xB0550BC91B0159D6(&iLocal_118, 3);
	}
}

float func_338(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_339(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA37204C64473B324(sParam0))
		{
			unk_0x66B27A59829491D3(sParam0);
		}
	}
	else if (unk_0xA37204C64473B324(sParam0))
	{
		unk_0x0AF8D3A06BB92903(sParam0);
	}
}

void func_340()
{
	int iVar0;
	
	if ((!func_168(unk_0x9E2D6C50374FCFA9()) && !func_14(unk_0x9E2D6C50374FCFA9(), 0)) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		iVar0 = func_366();
		if (iVar0 != Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_117) || func_365(iVar0, iLocal_117))
			{
				if (!func_364() || func_1(&uLocal_106, 1000, 0))
				{
					func_27(&uLocal_106, 0, 0);
					iLocal_117 = iVar0;
					Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4 = iVar0;
					func_343();
					if (iLocal_116 == 0)
					{
						iLocal_116 = unk_0x0A89FDFA763DCAED();
					}
					if (Local_1514.f_11 == 0)
					{
						Local_1514.f_11 = unk_0x48352343BC5A41AE();
					}
				}
			}
		}
		iLocal_120 = func_341();
	}
}

int func_341()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_147.f_3)
	{
		case 0:
			fVar1 = unk_0x99172E9326FB9464();
			break;
		
		case 1:
			fVar1 = unk_0x6A91ED71437A1F2C();
			break;
		
		case 2:
			fVar1 = unk_0xD6A1E19478669F13();
			break;
		
		case 3:
			fVar1 = unk_0x23CCD14221A67576();
			break;
		
		case 4:
			fVar1 = unk_0xE073C52BDA52FAD1();
			break;
		
		case 5:
			fVar1 = unk_0xE15F1878B9B5545D();
			break;
		
		case 8:
			iVar0 = unk_0xA6B44A0401BC7BDC();
			break;
		
		case 9:
			fVar1 = unk_0xED08FD0B61F59A38();
			break;
		
		case 11:
			fVar1 = unk_0xB099946873170472();
			break;
		
		case 12:
			fVar1 = unk_0xB099946873170472();
			break;
		
		case 13:
			fVar1 = unk_0x1C976E6E8B56D553();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = round(fVar1);
	}
	iVar2 = unk_0x07141611FD632B59(iVar0);
	func_342(&iVar2);
	if (iVar2 == iLocal_119)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 1))
			{
				func_27(&uLocal_108, 0, 0);
				Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4.f_2 = func_540(&uLocal_108, 0, 0);
				unk_0xCED9E32812D6C7C7(&iLocal_118, 1);
			}
			else if ((func_540(&uLocal_108, 0, 0) % 1000) == 0)
			{
				Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4.f_2 = func_540(&uLocal_108, 0, 0);
			}
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&iLocal_118, 1);
	}
	if ((func_21(iLocal_119, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_110, 2000, 0))
	{
		iVar2 = iLocal_119;
		unk_0xCED9E32812D6C7C7(&iLocal_118, 2);
	}
	else
	{
		iLocal_119 = iVar2;
		func_46(&uLocal_110);
		unk_0xB0550BC91B0159D6(&iLocal_118, 2);
	}
	return iVar2;
}

void func_342(int iParam0)
{
	switch (Local_147.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((((unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A())) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A())) || unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A())) || unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_343()
{
	if (!unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1, 2))
	{
		unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_1), 2);
		func_344(1);
	}
}

void func_344(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
		{
			if (((!func_111(unk_0x9E2D6C50374FCFA9()) && !func_7(unk_0x9E2D6C50374FCFA9())) && !func_168(unk_0x9E2D6C50374FCFA9())) && !func_363(unk_0x9E2D6C50374FCFA9()))
			{
				if (func_171())
				{
					func_356(2, 0, 1);
					func_355();
				}
				if (func_354(0))
				{
					uVar0 = func_213(2482, -1, 0);
					unk_0xB0550BC91B0159D6(&uVar0, 0);
					func_355();
				}
				if (func_354(func_353(func_326(unk_0x9E2D6C50374FCFA9()))))
				{
					uVar0 = func_213(2482, -1, 0);
					unk_0xB0550BC91B0159D6(&uVar0, func_353(func_326(unk_0x9E2D6C50374FCFA9())));
					func_355();
				}
				if (func_352())
				{
					func_355();
				}
				if (func_326(unk_0x9E2D6C50374FCFA9()) > -1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 7);
					if (func_351(unk_0x9E2D6C50374FCFA9()))
					{
						func_350();
					}
					func_347(func_349(func_326(unk_0x9E2D6C50374FCFA9())));
				}
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 7);
		func_345();
	}
}

void func_345()
{
	if (func_346())
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 17);
	}
}

bool func_346()
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 17);
}

void func_347(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_348() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574732.f_1[iVar0] == -1)
			{
				Global_1574732.f_1[iVar0] = iParam0;
				Global_1574732 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_348()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_349(int iParam0)
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

void func_350()
{
	if (!func_346())
	{
		Global_2810287.f_6705 = unk_0x0A89FDFA763DCAED();
		unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 17);
	}
}

int func_351(int iParam0)
{
	if (func_326(iParam0) == 236 || func_326(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_352()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0)
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
	return Global_262145.f_23910;
}

bool func_354(int iParam0)
{
	var uVar0;
	
	uVar0 = func_213(2482, -1, 0);
	return unk_0xE2D0C323A1AE5D85(uVar0, iParam0);
}

void func_355()
{
	if (func_352())
	{
		Global_2703656.f_847.f_16 = 1;
	}
}

void func_356(int iParam0, int iParam1, bool bParam2)
{
	if (func_171())
	{
		if (iParam1 == 1)
		{
			if (Global_2810287.f_4462 == -1)
			{
				Global_2810287.f_4462 = Global_262145.f_26832;
			}
			func_27(&(Global_2810287.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810287.f_4465 == -1)
				{
					Global_2810287.f_4465 = Global_262145.f_26833;
				}
				func_27(&(Global_2810287.f_4463), 0, 0);
			}
			else
			{
				Global_1574580 = 0;
				Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
				func_362(1);
			}
		}
		else
		{
			Global_1574580 = 0;
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
			func_362(1);
		}
		if ((!unk_0x44859561F653DD4E() && !func_361()) && !func_357(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1057404 = 0;
		}
		unk_0x5106CAAF87C49A90(0, -1, -1, iParam0);
	}
}

int func_357(int iParam0)
{
	if (func_358(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_359(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_359(int iParam0)
{
	return func_360(iParam0);
}

bool func_360(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_361()
{
	return Global_2714627.f_840;
}

void func_362(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_171())
		{
			if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

int func_363(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2783989;
	}
	else
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
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

int func_364()
{
	switch (Local_147.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_365(int iParam0, int iParam1)
{
	if (Local_147.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_366()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_381())
	{
		if (Local_147.f_3 == 14)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_380(unk_0xE2D3D51028F0428A(), 0) == -1)
			{
				iVar2 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if ((!func_379(&iVar2, 0) || unk_0x15CAA6D7B11F1A7C(iVar2) != joaat("dodo")) && unk_0xCE282187B0A6217E(iVar2))
				{
					func_372(Local_147.f_3 != 14, 1, 0);
					if (func_371())
					{
						iVar3 = func_370();
						if (iVar3 >= 0)
						{
							if (!unk_0xE2D0C323A1AE5D85(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_8[func_369(iVar3)], func_368(iVar3)))
							{
								iLocal_121++;
								unk_0xCED9E32812D6C7C7(&(Local_1513[unk_0xF1354995C6159A78() /*12*/].f_8[func_369(iVar3)]), func_368(iVar3));
							}
						}
					}
					iVar0 = iLocal_121;
				}
			}
		}
		else
		{
			iVar0 = func_367();
		}
	}
	else
	{
		unk_0xD1B34BB9F529FC07(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = round(fVar1);
	}
	return unk_0x07141611FD632B59(iVar0);
}

int func_367()
{
	switch (Local_147.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_368(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_369(iParam0) * 31);
}

int func_369(int iParam0)
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

int func_370()
{
	return iLocal_88;
}

int func_371()
{
	if (iLocal_95 == 1)
	{
		iLocal_95 = 0;
		return 1;
	}
	return 0;
}

void func_372(bool bParam0, bool bParam1, int iParam2)
{
	func_374(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_99.f_2 < Local_100.f_2)
		{
			Local_99.f_2 = 0f;
		}
		else
		{
			Local_100.f_2 = 0f;
		}
		if (Local_101.f_2 < Local_102.f_2)
		{
			Local_101.f_2 = 0f;
		}
		else
		{
			Local_102.f_2 = 0f;
		}
	}
	switch (iLocal_89)
	{
		case 0:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Local_97[iLocal_88 /*3*/]) < fLocal_98)
				{
					if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
						{
							if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0))
							{
								bLocal_90 = true;
								iLocal_89 = 1;
							}
							if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
							{
								bLocal_91 = true;
								iLocal_89 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) && !unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					func_373();
				}
				else if (!unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
				{
					func_373();
				}
				else if (!unk_0xCE282187B0A6217E(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) && !bParam1)
				{
					func_373();
				}
				if (bLocal_90)
				{
					if (iLocal_94)
					{
						if (iLocal_93)
						{
							if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
							{
								func_373();
								iLocal_95 = 1;
							}
						}
						else if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
						{
							iLocal_93 = 1;
						}
						else if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
						{
							func_373();
						}
					}
					else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
					{
						iLocal_94 = 1;
					}
					else if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
					{
						func_373();
					}
				}
				else if (bLocal_91)
				{
					if (iLocal_94)
					{
						if (iLocal_92)
						{
							if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
							{
								func_373();
								iLocal_95 = 1;
							}
						}
						else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
						{
							iLocal_92 = 1;
						}
						else if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
						{
							func_373();
						}
					}
					else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
					{
						iLocal_94 = 1;
					}
					else if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_99, Local_100, fLocal_103, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_101, Local_102, fLocal_103, 0, 1, 0))
					{
						func_373();
					}
				}
			}
			break;
	}
}

void func_373()
{
	bLocal_90 = false;
	bLocal_91 = false;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_89 = 0;
}

void func_374(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_96 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_378(iVar0)) && (uParam1 || !func_377(iVar0)))
		{
			if (func_376(Local_96, Local_97[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = vdist(Local_96, Local_97[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_88 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_375(iLocal_88);
}

void func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_99 = { 1103.014f, -233.0374f, 56.13004f };
			Local_100 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_103 = 30f;
			Local_101 = { 1093.589f, -248.5926f, 56.88639f };
			Local_102 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_99 = { 1044.182f, -324.5904f, 49.33408f };
			Local_100 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_103 = 30f;
			Local_101 = { 1007.983f, -320.6159f, 48.4543f };
			Local_102 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_99 = { 916.599f, -419.8782f, 35.62748f };
			Local_100 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_103 = 7f;
			Local_101 = { 912.1362f, -420.5161f, 35.38034f };
			Local_102 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_99 = { 757.7189f, -472.924f, 19.2535f };
			Local_100 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_103 = 20.75f;
			Local_101 = { 744.9114f, -480.7373f, 19.06514f };
			Local_102 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_99 = { 680.3677f, -581.1792f, 14.2145f };
			Local_100 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_103 = 45f;
			Local_101 = { 667.3692f, -610.5356f, 13.85401f };
			Local_102 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_99 = { 644.2497f, -844.7504f, 12.36707f };
			Local_100 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_103 = 25f;
			Local_101 = { 644.3659f, -859.3878f, 12.59677f };
			Local_102 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_99 = { 634.972f, -1011.64f, 10.92594f };
			Local_100 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_103 = 25f;
			Local_101 = { 634.9612f, -1029.123f, 10.61846f };
			Local_102 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_99 = { 645.7223f, -1191.215f, 10.45198f };
			Local_100 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_103 = 50f;
			Local_101 = { 645.7223f, -1228.966f, 10.98015f };
			Local_102 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_99 = { 642.1216f, -1295.73f, 9.005976f };
			Local_100 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_103 = 7f;
			Local_101 = { 644.7772f, -1298.168f, 9.128529f };
			Local_102 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_99 = { 686.5675f, -1444.71f, 9.065001f };
			Local_100 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_103 = 25f;
			Local_101 = { 682.3027f, -1429.872f, 9.890836f };
			Local_102 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_99 = { 718.7617f, -1734.313f, 9.082874f };
			Local_100 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_103 = 30f;
			Local_101 = { 717.5355f, -1748.646f, 9.363478f };
			Local_102 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_99 = { 694.3165f, -2049.806f, 0.009695f };
			Local_100 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_103 = 30f;
			Local_101 = { 693.1836f, -2063.225f, 0.429037f };
			Local_102 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_99 = { 642.6671f, -2494.551f, 0.468485f };
			Local_100 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_103 = 20f;
			Local_101 = { 647.0339f, -2506.202f, 0.583701f };
			Local_102 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_99 = { 691.8235f, -2558.219f, 0.363352f };
			Local_100 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_103 = 10.25f;
			Local_101 = { 695.7928f, -2561.034f, 0.346731f };
			Local_102 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_99 = { 723.6254f, -2562.171f, 0.255647f };
			Local_100 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_103 = 15f;
			Local_101 = { 735.765f, -2561.935f, 0.311182f };
			Local_102 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_99 = { 891.4387f, -2603.12f, 0f };
			Local_100 = { 704.4932f, -2634.793f, 45f };
			fLocal_103 = 20f;
			Local_101 = { 893.2578f, -2616.235f, 0f };
			Local_102 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_99 = { -2669.587f, 2491.96f, 2.043799f };
			Local_100 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_103 = 26.5f;
			Local_101 = { -2687.606f, 2494.868f, 2.608733f };
			Local_102 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_99 = { -1986.173f, 4521.799f, 0f };
			Local_100 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_103 = 17f;
			Local_101 = { -1995.668f, 4531.259f, 0f };
			Local_102 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_99 = { -526.0265f, 4472.442f, 0f };
			Local_100 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_103 = 10f;
			Local_101 = { -519.9281f, 4476.346f, 0f };
			Local_102 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_99 = { 98.1615f, 3384.489f, 45.45169f };
			Local_100 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_103 = 8f;
			Local_101 = { 152.6802f, 3346.793f, 45.02156f };
			Local_102 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_99 = { 147.8606f, 3406.796f, 38.03672f };
			Local_100 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_103 = 14.5f;
			Local_101 = { 130.0916f, 3425.417f, 38.05672f };
			Local_102 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_99 = { 2830.972f, 4967.14f, 34.56013f };
			Local_100 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_103 = 10f;
			Local_101 = { 2826.767f, 4964.185f, 34.10636f };
			Local_102 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_99 = { -151.5764f, 4264.417f, 31.04735f };
			Local_100 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_103 = 10f;
			Local_101 = { -148.3842f, 4261.071f, 31.57409f };
			Local_102 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_99 = { -426.6919f, 2964.272f, 14.848f };
			Local_100 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_103 = 7f;
			Local_101 = { -425.0283f, 2967.861f, 15.22699f };
			Local_102 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_99 = { -192.3414f, 2864.916f, 30.72595f };
			Local_100 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_103 = 10f;
			Local_101 = { -192.0129f, 2871.603f, 29.99943f };
			Local_102 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_99 = { 2539.185f, 2228.772f, 18.6102f };
			Local_100 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_103 = 10f;
			Local_101 = { 2543.708f, 2231.402f, 18.331f };
			Local_102 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_99 = { 2954.087f, 815.7209f, 0.037901f };
			Local_100 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_103 = 35f;
			Local_101 = { 2966.123f, 806.8889f, 0.544056f };
			Local_102 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_99 = { 2329.673f, -459.6648f, 70.24277f };
			Local_100 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_103 = 12f;
			Local_101 = { 2324.752f, -455.5238f, 70.25145f };
			Local_102 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_99 = { 1943.428f, -753.251f, 80.17905f };
			Local_100 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_103 = 7f;
			Local_101 = { 1943.366f, -758.287f, 80.32291f };
			Local_102 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_99 = { -271.2849f, -2414.993f, -10f };
			Local_100 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_103 = 30f;
			Local_101 = { -279.8399f, -2427.212f, -10f };
			Local_102 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_99 = { -1483f, 2691.428f, -10f };
			Local_100 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_103 = 12f;
			Local_101 = { -1478.152f, 2696.688f, -10f };
			Local_102 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_99 = { 222.1519f, -2343.487f, 0.039199f };
			Local_100 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_103 = 12f;
			Local_101 = { 216.959f, -2343.487f, 0.207734f };
			Local_102 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_99 = { 346.4622f, -2244.374f, 0.159779f };
			Local_100 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_103 = 20f;
			Local_101 = { 359.609f, -2244.468f, 0.129684f };
			Local_102 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_99 = { -1859.68f, -322.6357f, 56.16368f };
			Local_100 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_103 = 7.5f;
			Local_101 = { -1860.27f, -327.8634f, 57.543f };
			Local_102 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_99 = { -680.2632f, -600.818f, 69.11289f };
			Local_100 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_103 = 31.5f;
			Local_101 = { -680.6077f, -618.3658f, 69.27496f };
			Local_102 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_99 = { -1468.096f, -591.7158f, 67.05518f };
			Local_100 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_103 = 11.75f;
			Local_101 = { -1474.903f, -591.1215f, 67.08091f };
			Local_102 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_99 = { -1544.958f, -537.1475f, 72.44347f };
			Local_100 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_103 = 11.75f;
			Local_101 = { -1541.008f, -541.5494f, 71.61972f };
			Local_102 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_99 = { 333.2108f, -2727.274f, 20.71663f };
			Local_100 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_103 = 20f;
			Local_101 = { 343.1127f, -2727.236f, 20.23613f };
			Local_102 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_99 = { 1928.071f, 6228.355f, 43.49398f };
			Local_100 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_103 = 13f;
			Local_101 = { 1931.82f, 6235.634f, 43.37382f };
			Local_102 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_99 = { -736.4309f, -1590.921f, 10.80892f };
			Local_100 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_103 = 15f;
			Local_101 = { -727.2307f, -1585.221f, 11.78027f };
			Local_102 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_99 = { -676.3775f, -1548.553f, 12.33747f };
			Local_100 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_103 = 25f;
			Local_101 = { -654.203f, -1536.146f, 9.191055f };
			Local_102 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_99 = { -624.2344f, -1537.045f, 12.60193f };
			Local_100 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_103 = 8f;
			Local_101 = { -615.4003f, -1536.65f, 12.40271f };
			Local_102 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_99 = { -492.5057f, -1632.457f, 24.3307f };
			Local_100 = { -418.2088f, -1487.452f, 0f };
			fLocal_103 = 25f;
			Local_101 = { -486.2016f, -1636.095f, 24.20805f };
			Local_102 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_99 = { -359.3541f, -1639.693f, 13.13455f };
			Local_100 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_103 = 25f;
			Local_101 = { -378.1518f, -1705.66f, 12.47196f };
			Local_102 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_99 = { -243.4436f, -1814.623f, 25.69465f };
			Local_100 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_103 = 25f;
			Local_101 = { -235.1319f, -1822.094f, 25.86542f };
			Local_102 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_99 = { 84.55537f, -2046.159f, 13.30767f };
			Local_100 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_103 = 25f;
			Local_101 = { 17.90788f, -2035.773f, 12.62706f };
			Local_102 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_99 = { 221.5029f, -2232.766f, 9.88676f };
			Local_100 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_103 = 8f;
			Local_101 = { 218.583f, -2232.766f, 9.886198f };
			Local_102 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_99 = { 221.6518f, -2184.635f, 11.66457f };
			Local_100 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_103 = 8f;
			Local_101 = { 217.8995f, -2184.635f, 11.5405f };
			Local_102 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_99 = { 2326.57f, 1096.031f, 76.31458f };
			Local_100 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_103 = 21f;
			Local_101 = { 2334.453f, 1103.067f, 76.26603f };
			Local_102 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_99 = { 2379.442f, 1150.776f, 58.79632f };
			Local_100 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_103 = 12f;
			Local_101 = { 2374.064f, 1146.282f, 58.83331f };
			Local_102 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_99 = { -1179.405f, -355.2554f, 56.53003f };
			Local_100 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_103 = 12.5f;
			Local_101 = { -1178.385f, -361.8784f, 56.15081f };
			Local_102 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_99 = { -921.3846f, -384.94f, 137.0181f };
			Local_100 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_103 = 16f;
			Local_101 = { -914.1658f, -387.9444f, 137.0794f };
			Local_102 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_99 = { -740.2564f, 246.4529f, 132.2922f };
			Local_100 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_103 = 22f;
			Local_101 = { -726.6429f, 253.0676f, 132.3319f };
			Local_102 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_99 = { -771.2068f, 268.2729f, 132.1689f };
			Local_100 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_103 = 16f;
			Local_101 = { -770.8035f, 310.8625f, 137.4161f };
			Local_102 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_99 = { 259.2205f, 135.4146f, 136.7083f };
			Local_100 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_103 = 16f;
			Local_101 = { 261.9694f, 142.9676f, 136.6889f };
			Local_102 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_99 = { 393.548f, -30.87166f, 152.6635f };
			Local_100 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_103 = 8f;
			Local_101 = { 390.5358f, -36.08882f, 152.7813f };
			Local_102 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_99 = { 114.3139f, -648.4297f, 261.8488f };
			Local_100 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_103 = 20f;
			Local_101 = { 124.8467f, -646.6575f, 261.8488f };
			Local_102 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_99 = { -215.919f, -823.8436f, 126.0224f };
			Local_100 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_103 = 20f;
			Local_101 = { -225.397f, -820.3937f, 126.0812f };
			Local_102 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_99 = { -296.4725f, -802.0815f, 95.40108f };
			Local_100 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_103 = 20f;
			Local_101 = { -305.4602f, -798.8369f, 95.48194f };
			Local_102 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_99 = { -292.3034f, -823.3569f, 95.37621f };
			Local_100 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_103 = 20f;
			Local_101 = { -288.9206f, -814.022f, 95.37556f };
			Local_102 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_99 = { -256.3589f, -714.7838f, 110.1617f };
			Local_100 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_103 = 20f;
			Local_101 = { -253.7723f, -705.6632f, 110.1736f };
			Local_102 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_99 = { 1808.214f, 1949.246f, 71.73707f };
			Local_100 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_103 = 9.75f;
			Local_101 = { 1802.786f, 1950.262f, 71.74002f };
			Local_102 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_99 = { 2388.733f, 2931.941f, 46.62681f };
			Local_100 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_103 = 10f;
			Local_101 = { 2392.547f, 2934.867f, 46.6268f };
			Local_102 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_99 = { 2700.056f, 4836.381f, 42.07854f };
			Local_100 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_103 = 20.75f;
			Local_101 = { 2685.672f, 4821.653f, 42.18471f };
			Local_102 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_99 = { -1053.446f, 4766.245f, 234.3251f };
			Local_100 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_103 = 5f;
			Local_101 = { -1051.414f, 4767.193f, 234.4293f };
			Local_102 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_376(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_379(var uParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0) || iParam1)
		{
			if (unk_0xD8F9DF94CD871327(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
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

int func_381()
{
	switch (Local_147.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_382(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_399() < 10)
	{
		iVar0 = func_398();
		func_383(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_383(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	func_384(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_384(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_393(unk_0x9E2D6C50374FCFA9()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_392(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_387(Var0))
		{
			Global_2667222.f_45.f_64 = func_386(unk_0x9E2D6C50374FCFA9());
			func_385(Var0, iParam4);
		}
	}
}

void func_385(struct<12> Param0, int iParam1)
{
	Global_2667222.f_367[iParam1 /*12*/] = { Param0 };
	Global_2667222.f_367[iParam1 /*12*/].f_9 = 1;
}

int func_386(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_387(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2667222.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_388(Global_2667222.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_388(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_391(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_389(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_391(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_389(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_389(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_390(Param0, Param1, Var0, Var1);
}

int func_390(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	if (((((Param0.x >= Param2.x && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.x <= Param3.x) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_391(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((vmag(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_392(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var1.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_393(int iParam0)
{
	if (((func_396(iParam0, 1) || func_395(iParam0)) || func_117(iParam0, 0)) || func_394(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_394(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2);
}

int func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

bool func_396(int iParam0, bool bParam1)
{
	if (func_397() != 0)
	{
		return func_386(iParam0) != 0;
	}
	return func_358(iParam0, bParam1, 0);
}

int func_397()
{
	return Global_31505;
}

int func_398()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_399()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_400(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	return unk_0x73CB3406A86A3A02(0);
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_402(int iParam0)
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_404()
{
	if (!func_161())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
	{
		return;
	}
	func_157();
}

void func_405(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_378(iVar0) && !func_377(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_97[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_406()
{
	if (!func_381())
	{
		if (Local_147.f_3 == 14)
		{
			func_409();
		}
		Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4.f_1 = func_367();
	}
	else if ((!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 4) && !unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 5)) && !func_408(unk_0x9E2D6C50374FCFA9()))
	{
		func_407();
	}
}

void func_407()
{
	switch (Local_147.f_3)
	{
		case 0:
			unk_0x1CCFE7DF655AC498(8, 2);
			break;
		
		case 1:
			unk_0x1CCFE7DF655AC498(13, 2);
			break;
		
		case 2:
			unk_0x1CCFE7DF655AC498(4, 2);
			break;
		
		case 4:
			unk_0x1CCFE7DF655AC498(1, 2);
			break;
		
		case 3:
			unk_0x1CCFE7DF655AC498(2, 2);
			break;
		
		case 5:
			unk_0x1CCFE7DF655AC498(3, 2);
			break;
		
		case 6:
			unk_0x1CCFE7DF655AC498(11, 3);
			break;
		
		case 7:
			unk_0x1CCFE7DF655AC498(14, 1);
			break;
		
		case 8:
			unk_0x1CCFE7DF655AC498(29, 2);
			break;
		
		case 9:
			unk_0x1CCFE7DF655AC498(12, 2);
			break;
		
		case 10:
			unk_0x1CCFE7DF655AC498(10, 2);
			break;
		
		case 11:
			unk_0x1CCFE7DF655AC498(18, 2);
			break;
		
		case 12:
			unk_0x1CCFE7DF655AC498(20, 2);
			break;
		
		case 13:
			unk_0x1CCFE7DF655AC498(27, 2);
			break;
		
		case 15:
			unk_0x1CCFE7DF655AC498(26, 1);
			break;
		
		case 16:
			unk_0x1CCFE7DF655AC498(25, 1);
			break;
		
		case 17:
			unk_0x1CCFE7DF655AC498(22, 1);
			break;
		
		case 18:
			unk_0x1CCFE7DF655AC498(24, 1);
			break;
	}
	unk_0xCED9E32812D6C7C7(&iLocal_118, 8);
}

bool func_408(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_409()
{
	Local_97[0 /*3*/] = { 1083f, -231f, 60f };
	Local_97[1 /*3*/] = { 1024f, -325f, 60f };
	Local_97[2 /*3*/] = { 910f, -401f, 43f };
	Local_97[3 /*3*/] = { 721f, -457f, 26f };
	Local_97[4 /*3*/] = { 643f, -579f, 26f };
	Local_97[5 /*3*/] = { 590f, -851f, 26f };
	Local_97[6 /*3*/] = { 590f, -1023f, 16f };
	Local_97[7 /*3*/] = { 582f, -1205f, 24f };
	Local_97[8 /*3*/] = { 608f, -1335f, 16f };
	Local_97[9 /*3*/] = { 640f, -1434f, 16f };
	Local_97[10 /*3*/] = { 671f, -1742f, 20f };
	Local_97[11 /*3*/] = { 651f, -2046f, 16f };
	Local_97[12 /*3*/] = { 603f, -2505f, 9f };
	Local_97[13 /*3*/] = { 673f, -2582f, 4f };
	Local_97[14 /*3*/] = { 728f, -2594f, 10f };
	Local_97[15 /*3*/] = { 794f, -2624f, 27f };
	Local_97[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_97[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_97[18 /*3*/] = { -513f, 4427f, 40f };
	Local_97[19 /*3*/] = { 126f, 3366f, 40f };
	Local_97[20 /*3*/] = { 143f, 3418f, 36f };
	Local_97[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_97[22 /*3*/] = { -162f, 4249f, 40f };
	Local_97[23 /*3*/] = { -408f, 2964f, 20f };
	Local_97[24 /*3*/] = { -181f, 2862f, 38f };
	Local_97[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_97[26 /*3*/] = { 2950f, 803f, 8f };
	Local_97[27 /*3*/] = { 2369f, -409f, 80f };
	Local_97[28 /*3*/] = { 1906f, -755f, 84f };
	Local_97[29 /*3*/] = { -403f, -2333f, 40f };
	Local_97[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_97[31 /*3*/] = { 219f, -2315f, 5f };
	Local_97[32 /*3*/] = { 350f, -2315f, 5f };
	Local_97[33 /*3*/] = { -1848f, -333f, 75f };
	Local_97[34 /*3*/] = { -693f, -608f, 69f };
	Local_97[35 /*3*/] = { -1461f, -582f, 53f };
	Local_97[36 /*3*/] = { -1553f, -546f, 59f };
	Local_97[37 /*3*/] = { 338f, -2758f, 23f };
	Local_97[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_97[39 /*3*/] = { -713f, -1538f, 13f };
	Local_97[40 /*3*/] = { -659f, -1518f, 13f };
	Local_97[41 /*3*/] = { -620f, -1502f, 16f };
	Local_97[42 /*3*/] = { -445f, -1575f, 26f };
	Local_97[43 /*3*/] = { -373f, -1680f, 19f };
	Local_97[44 /*3*/] = { -212f, -1805f, 29f };
	Local_97[45 /*3*/] = { 47f, -2040f, 18f };
	Local_97[46 /*3*/] = { 223f, -2240f, 6f };
	Local_97[47 /*3*/] = { 218f, -2189f, 6f };
	Local_97[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_97[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_97[50 /*3*/] = { -1186f, -365f, 46f };
	Local_97[51 /*3*/] = { -916f, -407f, 93f };
	Local_97[52 /*3*/] = { -726f, 235f, 105f };
	Local_97[53 /*3*/] = { -774f, 286f, 112f };
	Local_97[54 /*3*/] = { 271f, 134f, 125f };
	Local_97[55 /*3*/] = { 377f, -28f, 125f };
	Local_97[56 /*3*/] = { 121f, -703f, 150f };
	Local_97[57 /*3*/] = { -204f, -784f, 74f };
	Local_97[58 /*3*/] = { -287f, -774f, 72f };
	Local_97[59 /*3*/] = { -272f, -824f, 71f };
	Local_97[60 /*3*/] = { -230f, -723f, 80f };
	Local_97[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_97[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_97[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_97[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_410(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217, iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217), iParam0);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217, iParam0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217), iParam0);
	}
}

void func_411(var uParam0, int iParam1)
{
	if (func_326(unk_0x9E2D6C50374FCFA9()) == 133 && iParam1)
	{
		Global_2810287.f_5114 = uParam0;
	}
	else
	{
		Global_2810287.f_5114 = -1;
	}
}

void func_412(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
	}
	Global_2810287.f_5040 = -1;
	bVar0 = (func_117(unk_0x9E2D6C50374FCFA9(), 0) && func_113(unk_0x9E2D6C50374FCFA9()));
	if (bParam6)
	{
		func_410(func_429(iParam0), 1);
	}
	else
	{
		func_428(iParam0, -1);
		if (func_8(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1836830.f_3 = iParam0;
		}
		else
		{
			func_427(iParam0);
		}
		Global_1836830.f_4 = -1;
		if (func_8(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 5);
		}
		if (((func_171() && !func_170()) || func_169(unk_0x9E2D6C50374FCFA9(), 21)) || func_169(unk_0x9E2D6C50374FCFA9(), 25))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 4);
		}
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 17);
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 20);
		if (func_426(iParam0))
		{
			func_425();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_422(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x8576657A629C4B0A(fParam2);
			if (iParam0 == 146)
			{
				unk_0xC0F70A3CDEC87ECE(0);
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
		if (func_420(iParam0))
		{
			unk_0xC0F70A3CDEC87ECE(0);
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
			unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				func_418(1);
				if (func_269(0))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_416(1);
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
		}
		if (bParam5)
		{
			func_415();
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_413(iParam0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 21);
			}
		}
	}
	Global_2783191 = 1;
}

int func_413(int iParam0)
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
	if (func_128(iParam0) == 1)
	{
		return 1;
	}
	if (func_414())
	{
		return 1;
	}
	return 0;
}

int func_414()
{
	switch (func_325())
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

void func_415()
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5031), 0);
}

void func_416(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100026.f_8 = 1;
	}
	else
	{
		Global_100026.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_417(iVar0);
		iVar0++;
	}
}

void func_417(int iParam0)
{
	Global_100026.f_196[iParam0] = 1;
	Global_100026.f_195 = 1;
}

void func_418(int iParam0)
{
	if (func_419() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_419()
{
	if ((((Global_1057405 != -1 && Global_1057405 != 33) && Global_1057405 != 35) && Global_1057405 != 37) && Global_1057405 != 21)
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_421(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

void func_422(float fParam0)
{
	float fVar0;
	
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_423())
	{
		return;
	}
	fVar0 = (Global_2810287.f_5188 - fParam0);
	if (unk_0x87C0DA419F19FF57(Global_2810287.f_5189))
	{
		if (!Global_2810287.f_5189 == unk_0x69CE66B03B2184EB() && unk_0x48053974ED6F63CE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2810287.f_5188 = fParam0;
	Global_2810287.f_5189 = unk_0x69CE66B03B2184EB();
}

int func_423()
{
	switch (func_397())
	{
		case 0:
			return func_424();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_424()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_425()
{
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_209 = 0;
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_4629), 1);
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_427(int iParam0)
{
	Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/] = iParam0;
}

void func_428(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_354(0) || func_354(func_353(iVar0)))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 2);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 2);
		}
	}
}

int func_429(int iParam0)
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

int func_430()
{
	switch (Local_147.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_431()
{
	Global_1941981 = 1;
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 0))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 0);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 0);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 1))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 1);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 1);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 5))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 5);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 5);
	}
	if (unk_0xEC32121F2E3875C8(-355737150))
	{
		unk_0x7E15597AA5F53F9A(-355737150, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-580979506))
	{
		unk_0x7E15597AA5F53F9A(-580979506, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1426452475))
	{
		unk_0x7E15597AA5F53F9A(-1426452475, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(745417724))
	{
		unk_0x7E15597AA5F53F9A(745417724, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1305304906))
	{
		unk_0x7E15597AA5F53F9A(-1305304906, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1543175077))
	{
		unk_0x7E15597AA5F53F9A(-1543175077, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-811770997))
	{
		unk_0x7E15597AA5F53F9A(-811770997, 0, 0, 0);
	}
}

int func_432()
{
	switch (Local_147.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_433()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_147.f_3))
	{
		if (Local_147.f_3 == 1 || Local_147.f_3 == 6)
		{
			iVar0 = func_453(unk_0x9E2D6C50374FCFA9(), 1);
			iVar1 = func_206(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
				{
					unk_0x9521FB98DB6DDF50(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute"), 1, 0, 0);
					func_434(1);
				}
			}
			else
			{
				unk_0xC5504757FD12BB7B(unk_0x9E2D6C50374FCFA9(), 1);
			}
		}
	}
}

void func_434(bool bParam0)
{
	int iVar0;
	
	if (unk_0x5355BAA621C153CF(unk_0xE2D3D51028F0428A(), 5) != 0)
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 177, 1);
		func_451(unk_0x9E2D6C50374FCFA9(), func_213(586, -1, 0), 0);
		if (func_450(3610, -1))
		{
		}
		iVar0 = func_213(2042, -1, 0);
		unk_0x6A9DA6A45B05CBAC(unk_0x9E2D6C50374FCFA9(), func_449(unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9()), iVar0));
		if (func_266(0))
		{
			func_451(unk_0x9E2D6C50374FCFA9(), func_213(586, -1, 0), 0);
		}
		else
		{
			func_451(unk_0x9E2D6C50374FCFA9(), func_448(Global_2819839), 0);
		}
		func_447(unk_0x9E2D6C50374FCFA9(), iVar0);
		unk_0x5663081CF61457EB(unk_0x9E2D6C50374FCFA9(), 5, func_440(unk_0xE2D3D51028F0428A(), iVar0), func_439(unk_0xE2D3D51028F0428A(), iVar0), 0);
		func_438(func_213(2042, -1, 0), 1);
		Global_2810287.f_287 = 1;
		func_435(unk_0x9E2D6C50374FCFA9(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x9315DBF7D972F07A())
	{
		func_437();
		if (iParam2 == -1)
		{
			iParam2 = func_213(2042, -1, 0);
		}
		unk_0x5663081CF61457EB(iParam0, 5, func_440(unk_0x407E03586628E458(iParam0), iParam2), func_439(unk_0x407E03586628E458(iParam0), iParam2), 0);
		unk_0x6A9DA6A45B05CBAC(iParam0, func_449(unk_0x407E03586628E458(iParam0), iParam2));
		unk_0xE3752B10DC995E95(unk_0x407E03586628E458(iParam0), 5, func_440(unk_0x407E03586628E458(iParam0), iParam2), func_439(unk_0x407E03586628E458(iParam0), iParam2), func_449(unk_0x407E03586628E458(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_213(586, -1, 0);
		}
		if (func_266(1) && func_436(iParam0))
		{
			func_451(iParam0, func_448(Global_2819839), 0);
		}
		else
		{
			func_451(iParam0, iParam1, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_28, 4))
		{
			func_451(iParam0, Global_1836608, 1);
		}
		func_447(iParam0, iParam2);
		unk_0x3E3D339BAD67F6F2(unk_0x407E03586628E458(iParam0), 177, 1);
	}
}

bool func_436(int iParam0)
{
	return func_112(iParam0, 10);
}

void func_437()
{
	Global_77824 = 0;
	Global_77825 = -1;
	Global_77826 = -1;
	Global_77827 = -1;
	Global_77828 = -1;
	Global_77832 = -1;
}

void func_438(int iParam0, int iParam1)
{
	if (unk_0x9315DBF7D972F07A())
	{
		func_437();
		func_204(2042, iParam0, -1, 1, 0);
		unk_0x5663081CF61457EB(unk_0x9E2D6C50374FCFA9(), 5, func_440(unk_0xE2D3D51028F0428A(), iParam0), func_439(unk_0xE2D3D51028F0428A(), iParam0), 0);
		func_447(unk_0x9E2D6C50374FCFA9(), iParam0);
		unk_0x6A9DA6A45B05CBAC(unk_0x9E2D6C50374FCFA9(), func_449(unk_0xE2D3D51028F0428A(), iParam0));
		if ((iParam1 && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x5355BAA621C153CF(unk_0xE2D3D51028F0428A(), 5) != 0)
		{
			func_435(unk_0x9E2D6C50374FCFA9(), -1, -1);
		}
	}
}

int func_439(var uParam0, int iParam1)
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

var func_440(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x5355BAA621C153CF(uParam0, 8);
	iVar1 = unk_0x5355BAA621C153CF(iParam0, 11);
	iVar2 = unk_0x5355BAA621C153CF(iParam0, 4);
	bVar3 = unk_0x5355BAA621C153CF(iParam0, 9) != false;
	iVar4 = unk_0x748EF68A43BBBC6C(iParam0, 8, iVar0, unk_0xF1050E548C37F4A5(iParam0, 8));
	iVar5 = unk_0x748EF68A43BBBC6C(iParam0, 11, iVar1, unk_0xF1050E548C37F4A5(iParam0, 11));
	iVar6 = unk_0x748EF68A43BBBC6C(iParam0, 4, iVar2, unk_0xF1050E548C37F4A5(iParam0, 4));
	if (((((((bVar3 != Global_77824 || iParam1 != Global_77825) || iVar4 != Global_77826) || iVar5 != Global_77827) || iVar6 != Global_77828) || iVar0 != Global_77829) || iVar1 != Global_77830) || iVar2 != Global_77831)
	{
		Global_77824 = bVar3;
		Global_77825 = iParam1;
		Global_77826 = iVar4;
		Global_77827 = iVar5;
		Global_77828 = iVar6;
		Global_77829 = iVar0;
		Global_77830 = iVar1;
		Global_77831 = iVar2;
		Global_77832 = func_441(iParam0, iParam1);
	}
	return Global_77832;
}

int func_441(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x5355BAA621C153CF(uParam0, 11);
	if (unk_0x5355BAA621C153CF(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x15CAA6D7B11F1A7C(iParam0);
	uVar3 = unk_0x748EF68A43BBBC6C(iParam0, 8, unk_0x5355BAA621C153CF(iParam0, 8), unk_0xF1050E548C37F4A5(iParam0, 8));
	if (unk_0x036D1EA7243F2CCC(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1293534210, 8))
			{
				return func_446(iParam0, iParam1, 1);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1072212384, 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_446(iParam0, iParam1, 6);
			}
			if ((unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1072212384, 8)) || unk_0x036D1EA7243F2CCC(iVar3, 1293534210, 8))
			{
				return func_446(iParam0, iParam1, 7);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		return func_446(iParam0, iParam1, 9);
	}
	if (func_445(iParam0))
	{
		if (bVar1)
		{
			return func_446(iParam0, iParam1, 7);
		}
		else
		{
			return func_446(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x748EF68A43BBBC6C(iParam0, 11, iVar0, unk_0xF1050E548C37F4A5(iParam0, 11));
		if (unk_0x036D1EA7243F2CCC(iVar4, 98087521, 0))
		{
			return func_446(iParam0, iParam1, 0);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -135391604, 0))
		{
			return func_446(iParam0, iParam1, 1);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 1398721900, 0))
		{
			return func_446(iParam0, iParam1, 2);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 1030529416, 0))
		{
			return func_446(iParam0, iParam1, 3);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 873008833, 0))
		{
			return func_446(iParam0, iParam1, 4);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1646534043, 0))
		{
			return func_446(iParam0, iParam1, 5);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1868675094, 0))
		{
			return func_446(iParam0, iParam1, 6);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1500122155, 0))
		{
			return func_446(iParam0, iParam1, 7);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1741007074, 0))
		{
			return func_446(iParam0, iParam1, 8);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -226291902, 0))
		{
			return func_446(iParam0, iParam1, 9);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 607416996, 0))
		{
			return func_446(iParam0, iParam1, 10);
		}
		if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_446(iParam0, iParam1, 5);
			}
			else
			{
				return func_446(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_446(iParam0, iParam1, 8);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_444(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_446(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_446(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_443(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_446(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_443(iVar4);
						break;
					}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_442(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_446(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_446(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_446(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_446(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_446(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_446(iParam0, iParam1, 9);
					}
					else
					{
						return func_446(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_446(iParam0, iParam1, 9);
					}
					else
					{
						return func_446(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_446(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_443(iVar4);
					break;
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 8);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x036D1EA7243F2CCC(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_446(iParam0, iParam1, 10);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x036D1EA7243F2CCC(iVar4, -1086258388, 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 6);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 9);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_0"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 0);
			}
			else
			{
				return func_446(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_446(iParam0, iParam1, 10);
				}
				else
				{
					return func_446(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 3);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 1);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 9);
			}
			else
			{
				return func_446(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 10);
			}
			else
			{
				return func_446(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_446(iParam0, iParam1, 7);
			}
			else
			{
				return func_446(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_446(iParam0, iParam1, 2);
			}
			else
			{
				return func_446(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x036D1EA7243F2CCC(iVar4, joaat("SILK_PYJAMAS"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x036D1EA7243F2CCC(iVar4, -826135203, 0))
		{
			return func_446(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_443(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 2);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 2);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 2);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 2);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 5);
				}
				else
				{
					return func_446(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 4);
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
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 3);
				}
				else
				{
					return func_446(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 5);
				}
				else
				{
					return func_446(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_446(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 6);
				}
				else
				{
					return func_446(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 7);
				}
				else
				{
					return func_446(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_446(iParam0, iParam1, 1);
				}
				else
				{
					return func_446(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_446(iParam0, iParam1, 0);
	return 0;
}

int func_442(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x036D1EA7243F2CCC(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_445(int iParam0)
{
	if (unk_0x036D1EA7243F2CCC(unk_0x748EF68A43BBBC6C(uParam0, 4, unk_0x5355BAA621C153CF(uParam0, 4), unk_0xF1050E548C37F4A5(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_446(var uParam0, int iParam1, int iParam2)
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

void func_447(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0xD07BC41548DB6391(iParam0);
	}
}

int func_448(var uParam0)
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

int func_449(var uParam0, int iParam1)
{
	return 0;
}

bool func_450(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

void func_451(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_452(iParam1, iParam2, &uVar0, &uVar1))
	{
		unk_0x5B315B77FF0579F4(iParam0, uVar1);
		unk_0x4B91103EAE3ECFBB(iParam0, uVar0);
	}
	else
	{
		unk_0x5B315B77FF0579F4(iParam0, 0);
		unk_0x0DEDD914EB7A1CE6(iParam0);
	}
}

bool func_452(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_453(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_210(iParam0);
}

void func_454()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	struct<3> Var11;
	float fVar12;
	
	if ((((!func_7(unk_0x9E2D6C50374FCFA9()) && !func_168(unk_0x9E2D6C50374FCFA9())) && !func_320()) && !func_466(unk_0x9E2D6C50374FCFA9(), 0, -1)) && !func_465(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = -1;
			Var6 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			bVar7 = func_5(Local_147.f_3);
			bVar8 = unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0);
			bVar9 = func_464();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar10 = Local_147.f_67[iVar2 /*2*/].f_1;
				if (unk_0x90F6E2F6488B98BA(uVar10) && unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0) == unk_0xA5677134B9672173(uVar10))
						{
							func_344(1);
						}
					}
					unk_0xCED9E32812D6C7C7(&uVar3, iVar2);
					if (bVar7 && func_40(Local_147.f_3, iVar2, &Var0, &uVar1))
					{
						Var11 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(uVar10), 1) };
						if (vdist(Var11, Var0) <= 10f)
						{
							fVar12 = vdist(Var11, Var6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_41(Local_147.f_3))
			{
				unk_0xCED9E32812D6C7C7(&uVar3, 31);
			}
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_7 = uVar3;
			if (func_5(Local_147.f_3))
			{
				if ((unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()) || (unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A()) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_40(Local_147.f_3, iVar5, &Var0, &uVar1))
						{
							func_463(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_462(Var0, 1, 0);
							func_456(10, 0, 0, 0, 0);
							unk_0xCED9E32812D6C7C7(&iLocal_118, 5);
						}
					}
				}
				else
				{
					func_455();
				}
			}
		}
	}
	else
	{
		func_455();
	}
}

void func_455()
{
	if (unk_0xE2D0C323A1AE5D85(iLocal_118, 5))
	{
		func_176();
		func_174();
		unk_0xB0550BC91B0159D6(&iLocal_118, 5);
		func_173();
	}
}

void func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703656.f_1585.f_703.f_16 != func_107())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_2703656.f_1585.f_703.f_16 /*453*/].f_417, 0) && func_457())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674884 = 0;
	}
	Global_2667222.f_489 = iParam0;
	Global_2667222.f_489.f_1 = unk_0x69CE66B03B2184EB();
	Global_2667222.f_489.f_2 = iParam1;
	Global_2667222.f_489.f_3 = iParam2;
	Global_2667222.f_489.f_4 = iParam3;
	Global_2667222.f_489.f_5 = iParam4;
}

int func_457()
{
	if ((((((func_225(unk_0x9E2D6C50374FCFA9()) == 229 || func_225(unk_0x9E2D6C50374FCFA9()) == 191) || func_461()) || func_460()) || func_363(unk_0x9E2D6C50374FCFA9())) || Global_2783990.f_227 == 1) || (Global_2667222.f_1752 && func_458(unk_0x9E2D6C50374FCFA9())))
	{
		return 0;
	}
	return 1;
}

int func_458(int iParam0)
{
	if (func_459(iParam0))
	{
		return 1;
	}
	if (func_111(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 7);
	}
	return 0;
}

bool func_460()
{
	return Global_1836575;
}

int func_461()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_462(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2667222.f_45.f_49 = { Param0 };
	Global_2667222.f_45.f_52 = iParam1;
	Global_2667222.f_45.f_53 = iParam2;
}

void func_463(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	if (vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		Global_2676143.f_6 = unk_0x69CE66B03B2184EB();
	}
	Var0.f_6 = Global_2676143.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_393(unk_0x9E2D6C50374FCFA9()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676143 = { Var0 };
}

int func_464()
{
	if ((((((func_459(unk_0x9E2D6C50374FCFA9()) || func_171()) || func_170()) || func_169(unk_0x9E2D6C50374FCFA9(), 21)) || func_169(unk_0x9E2D6C50374FCFA9(), 25)) || func_8(unk_0x9E2D6C50374FCFA9())) || func_7(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_467(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	if (func_468(iParam0) != -1)
	{
		iVar0 = func_305(func_468(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_89(iParam0, 0))
			{
				return func_88(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_107();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_107();
}

int func_468(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_12(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

void func_469(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_534())
	{
		if (bParam1)
		{
			iVar0 = unk_0xF1354995C6159A78();
			if (func_105(unk_0x9E2D6C50374FCFA9()))
			{
				uVar1 = func_330();
				iVar2 = unk_0xFF65CDB0EB7ACE71(uVar1);
				if (unk_0x0D01086B38EC256F(iVar2))
				{
					iVar3 = unk_0x32F47FD509BB6D38(iVar2);
					if (unk_0x81F82FFBED0CACCA(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_533())
				{
					switch (Local_147.f_3)
					{
						case 14:
							if (!func_378(iVar4) && !func_377(iVar4))
							{
								func_530("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x90F6E2F6488B98BA(Local_147.f_67[iVar5 /*2*/].f_1)) && unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_147.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_147.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_140[iVar5]))
				{
					uLocal_140[iVar5] = unk_0xEFD6451BF0F3352F(unk_0xF2D8DACFAEBD9629(Local_147.f_67[iVar5 /*2*/].f_1));
					unk_0x1A5B5BA56167D412(uLocal_140[iVar5], func_529(iVar5));
					unk_0x7A610B2EC5DA34E7(uLocal_140[iVar5], 9);
					unk_0xAF62582F3EA39095(uLocal_140[iVar5], func_528(iVar5));
					func_526(&(uLocal_140[iVar5]), 9);
				}
				else
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						Var6 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
						if (vdist(Var6, unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_147.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x3430966AC4550BB9(uLocal_140[iVar5], 1);
						}
						else
						{
							unk_0x3430966AC4550BB9(uLocal_140[iVar5], 0);
						}
					}
					func_470(uLocal_140[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (unk_0x12DD4A0B247D9B4D(uLocal_140[iVar5]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_140[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_470(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xFBBD8F124403B0F5(uParam0, func_471(uParam0, iParam1, fParam2, fParam3));
}

int func_471(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_525(Global_2703656) && !func_81())
	{
		fVar0 = func_473(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_472();
		}
		return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_472()
{
	if (func_396(Global_2703656, 1))
	{
		return 50;
	}
	return 0;
}

float func_473(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2703656;
	Var2 = { func_524(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1581338 || func_520())
	{
		if (func_519(iVar0))
		{
			Var3 = { func_476(iVar0) };
		}
		else if (func_475(iVar0))
		{
			Var3 = { func_474(iVar0) };
		}
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar0), 0) };
	}
	Var3.f_2 = 0f;
	fVar1 = vmag(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_474(int iParam0)
{
	var uVar0;
	
	if (func_475(iParam0))
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			return unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_475(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x407E03586628E458(iParam0);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				if (unk_0x8F41785F110B0DA0(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_476(int iParam0)
{
	int iVar0;
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
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 == func_107())
	{
	}
	if (func_518(iParam0))
	{
		iVar0 = func_517(iParam0);
		if (iVar0 != func_107())
		{
			if (!func_516(iVar0))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_253[iVar0 /*3*/][1]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_253[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2689156[func_517(iParam0) /*453*/].f_319.f_11;
				}
			}
			else
			{
				iVar1 = func_513(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946934.f_532[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_512(iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_2810287.f_307))
		{
			return unk_0x6B62510F212526DC(Global_2810287.f_307, 0);
		}
	}
	else if (func_511(iParam0) && !func_510(iParam0))
	{
		iVar2 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar2 != func_107())
		{
			iVar3 = func_513(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946934.f_532[iVar3 /*3*/];
			}
		}
	}
	else if (func_509(iParam0) && !func_508(iParam0))
	{
		if (func_519(iParam0) && func_507())
		{
			return Global_1946934.f_532[Global_2689156[iParam0 /*453*/].f_319.f_6 /*3*/];
		}
		iVar4 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar4 != func_107())
		{
			if (func_506(iVar4))
			{
				iVar5 = func_503(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946934.f_532[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_502(iParam0))
	{
		iVar6 = func_501(iParam0);
		if (iVar6 != func_107())
		{
			if (!func_500(iVar6))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_350[iVar6]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_350[iVar6], 0);
				}
				else
				{
					return Global_2689156[func_501(iParam0) /*453*/].f_319.f_18;
				}
			}
			else
			{
				iVar7 = func_503(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946934.f_532[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_499(iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_2810287.f_309))
		{
			return unk_0x6B62510F212526DC(Global_2810287.f_309, 0);
		}
	}
	else if (func_498(iParam0) && !func_497(iParam0))
	{
		iVar8 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar8 != func_107())
		{
			if (func_496(iVar8))
			{
				iVar9 = func_493(iVar8);
				if (iVar9 != -1)
				{
					return func_492(iVar9);
				}
			}
		}
	}
	else if (func_491(iParam0) && !func_490(iParam0))
	{
		iVar10 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar10 != func_107())
		{
			if (func_489(iVar10))
			{
				iVar11 = func_486(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946934.f_532[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_485(iParam0, 0))
	{
		iVar12 = func_484(iParam0);
		if (iVar12 != func_107())
		{
			if (!func_483(iVar12))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_383[iVar12]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_383[iVar12], 0);
				}
				else
				{
					return Global_1893548[func_484(iParam0) /*600*/].f_585;
				}
			}
			else
			{
				iVar13 = func_486(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946934.f_532[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_482(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_481(iParam0))
	{
		iVar14 = func_467(iParam0);
		if (iVar14 != func_107())
		{
			if (unk_0xE5965CDF24F93A9F(Global_2703656.f_416[iVar14]))
			{
				return unk_0x6B62510F212526DC(Global_2703656.f_416[iVar14], 0);
			}
			else
			{
				return Global_1912810[iVar14 /*257*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_498(iParam0))
	{
		return func_492(Global_2689156[iParam0 /*453*/].f_319.f_6);
	}
	if (func_477(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946934.f_532[Global_2689156[iParam0 /*453*/].f_319.f_6 /*3*/];
}

int func_477(int iParam0)
{
	if (((func_480(iParam0) || func_479(iParam0)) || func_478(iParam0)) || func_329(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_479(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_480(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_481(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
		else if (((Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_1575046) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_12(iParam0, 1, 0))
		{
			return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
		}
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_483(int iParam0)
{
	if (iParam0 != func_107())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_3, 4);
	}
	return 0;
}

int func_484(int iParam0)
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_485(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_107())
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_488(iParam0);
		if (iVar0 != 0)
		{
			return func_487(iVar0);
		}
	}
	return -1;
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_488(int iParam0)
{
	if (iParam0 != func_107())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_291;
	}
	return 0;
}

int func_489(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_291 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_491(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_492(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1946934.f_532[iParam0 /*3*/];
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_107())
	{
		iVar0 = func_495(iParam0);
		if (iVar0 != 0)
		{
			return func_494(iVar0);
		}
	}
	return -1;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_495(int iParam0)
{
	if (iParam0 != func_107())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332;
	}
	return 0;
}

int func_496(int iParam0)
{
	if (iParam0 != func_107())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332 != 0;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_498(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_498(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_107())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_2, 6);
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_502(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_107())
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_505(iParam0);
	if (!iVar0 == 0)
	{
		return func_504(iVar0);
	}
	return -1;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_505(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_281;
}

int func_506(int iParam0)
{
	if (iParam0 != func_107())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_281 != 0;
	}
	return 0;
}

int func_507()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_2, 13) || Global_1946934.f_3280)
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (func_509(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_510(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (func_511(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return -1;
	}
	iVar0 = func_515(iParam0);
	if (!iVar0 == 0)
	{
		return func_514(iVar0);
	}
	return -1;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
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
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_515(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

int func_516(int iParam0)
{
	if (iParam0 != func_107())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 6);
	}
	return 0;
}

int func_517(int iParam0)
{
	if (iParam0 == func_107())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_518(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_107())
			{
				return func_305(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_519(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_12(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_520()
{
	if ((func_523() || func_522()) || func_521(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

bool func_521(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1890187[iParam0 /*105*/].f_29, 20);
}

bool func_522()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958899, 1);
}

bool func_523()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

Vector3 func_524(var uParam0)
{
	var uVar0;
	
	switch (unk_0x0096542092B7C49B(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0xD806A0199657B31F(uParam0);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				return unk_0x6B62510F212526DC(iVar0, 0);
			}
			break;
	}
	return unk_0x1A3931A61B3223A2(uParam0);
}

int func_525(int iParam0)
{
	if ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9) && !(unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7))) || ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7)) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_526(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		uVar0 = func_527(iParam1);
		unk_0xA582EE8380437B1B(*uParam0, uVar0);
	}
}

int func_527(int iParam0)
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_528(int iParam0)
{
	if (unk_0x4262B4DCEADC2695(Local_147.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xD6F7D32A98E07F93(Local_147.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x6F0299ED3CEB4E5D(Local_147.f_67[iParam0 /*2*/]) && !unk_0xCD8C08FA7D84C27E(Local_147.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_529(int iParam0)
{
	if (unk_0x4262B4DCEADC2695(Local_147.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xD6F7D32A98E07F93(Local_147.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x6F0299ED3CEB4E5D(Local_147.f_67[iParam0 /*2*/]) && !unk_0xCD8C08FA7D84C27E(Local_147.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_530(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_1513[iParam2 /*12*/].f_8[func_369(iParam3)], func_368(iParam3)) && !bParam1)
	{
		Var0 = { func_532(iParam3) };
		if (!unk_0x12DD4A0B247D9B4D(uLocal_139[iParam3]))
		{
			if (!func_531(Var0, 0f, 0f, 0f, 0) && !func_531(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_139[iParam3] = unk_0xC5B823372B67998A(Var0);
				unk_0x7A610B2EC5DA34E7(uLocal_139[iParam3], 9);
				unk_0xAF62582F3EA39095(uLocal_139[iParam3], sParam0);
				func_470(uLocal_139[iParam3], 25, 1152319488, 1137180672);
				func_526(&(uLocal_139[iParam3]), 12);
				unk_0x3430966AC4550BB9(uLocal_139[iParam3], 1);
			}
		}
		else if (unk_0xF1EC2C71FD1371B8())
		{
			unk_0xFBBD8F124403B0F5(uLocal_139[iParam3], 255);
		}
		else
		{
			func_470(uLocal_139[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(uLocal_139[iParam3]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_139[iParam3]));
		if (!bParam1)
		{
			unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

bool func_531(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_532(int iParam0)
{
	switch (Local_147.f_3)
	{
		case 14:
			return Local_138[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_533()
{
	switch (Local_147.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_534()
{
	switch (Local_147.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_535()
{
	switch (Local_147.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_536(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_319(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_222(sParam1))
	{
		sVar0 = sParam1;
	}
	func_149(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_537(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x05CBA41180F5D521();
	return "HUD_STARTING";
	if (unk_0x3C57C2F07FEE34D2(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_challenges"))
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
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3C57C2F07FEE34D2(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_538(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_539(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x51109C28352EC9A3())
	{
		Global_2810287.f_5030 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
		{
			unk_0x91DFC8F68F6D9B05(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2810287.f_5030 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 1);
		}
	}
}

int func_540(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

void func_541(int iParam0)
{
	if (!unk_0xB7B9FCC926422B4B() && !unk_0xA829C9A2767AC8EF())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D())
					{
						if (func_5(Local_147.f_3))
						{
							if (Local_147.f_3 == 12)
							{
								func_301("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_301("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_147.f_3))
						{
							func_301("AMCH_BIKEAV", 30000);
						}
						func_300(1);
						unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8())
					{
						func_301("AMCH_BLOW", 30000);
						func_300(1);
						unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8() && !func_546(63))
					{
						switch (Local_147.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
									{
										func_301("AMCH_ALTI", 30000);
										func_300(1);
										unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_NMIS", 30000);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_FRFALL", -1);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_PVPO1", -1);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_PVPO2", -1);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_WHEELIE", 30000);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_STOPPIE", 30000);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_LFALL", 30000);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_LPARA", 30000);
									func_300(1);
									unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
					{
						switch (Local_147.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
									{
										if (func_1(&uLocal_112, 1000, 0))
										{
											func_301("AMCH_OCEAN", 30000);
											func_300(1);
											func_46(&uLocal_112);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8() && !func_546(63))
					{
						switch (Local_147.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
									{
										if (func_525(unk_0x9E2D6C50374FCFA9()) && !func_543(unk_0x9E2D6C50374FCFA9()))
										{
											func_301("AMCH_ALTIEXP", 30000);
											func_300(1);
											unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
					{
						if (func_1(&uLocal_112, 1000, 0))
						{
							func_301("AMCH_FLYLOW", 30000);
							func_300(1);
							func_46(&uLocal_112);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (Local_147.f_3 == 7)
					{
						if (iLocal_142 == 0)
						{
							if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
							{
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_MVS1", 30000);
									func_300(1);
									iLocal_142 = 1;
								}
							}
						}
						else if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
						{
							if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
							{
								func_301("AMCH_MVS2", 30000);
								func_300(1);
								unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
							}
						}
					}
					if (Local_147.f_3 == 14)
					{
						if (iLocal_142 == 0)
						{
							if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
							{
								if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
								{
									func_301("AMCH_BRBL", 30000);
									func_300(1);
									iLocal_142 = 1;
								}
							}
						}
						else if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && !func_546(63))
						{
							if (func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
							{
								func_301("AMCH_BRBL2", 30000);
								func_300(1);
								unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_141, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D())
					{
						func_542("AMCH_WARN", func_402(Local_147.f_3), func_401(Local_147.f_3), 30000);
						func_300(0);
						Local_1514.f_8 = unk_0x48352343BC5A41AE();
						unk_0x91DFC8F68F6D9B05(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xCED9E32812D6C7C7(&iLocal_141, iParam0);
					}
				}
				break;
			}
	}
}

void func_542(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x26C23BE14F66F202(sParam2);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam3);
}

bool func_543(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_241.f_136[func_545(9) /*33*/][iParam0], func_544(9));
}

int func_544(int iParam0)
{
	return (iParam0 % 32);
}

int func_545(int iParam0)
{
	return (iParam0 / 32);
}

bool func_546(int iParam0)
{
	return Global_2703656.f_2414[0 /*80*/].f_1 == iParam0;
}

void func_547(int iParam0)
{
	Local_1513[unk_0xF1354995C6159A78() /*12*/].f_3 = iParam0;
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 4);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 4);
	}
}

int func_549(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_575(unk_0x9E2D6C50374FCFA9(), 29))
	{
		return 0;
	}
	if (func_169(unk_0x9E2D6C50374FCFA9(), 21))
	{
		return 0;
	}
	if (func_169(unk_0x9E2D6C50374FCFA9(), 25))
	{
		return 0;
	}
	if (unk_0x0843570206F71F38())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC96A605CF3E9295B())
		{
			return 0;
		}
	}
	if (func_357(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_574())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_573(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_572())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_111(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	else if (func_565(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		return 0;
	}
	if (func_564(unk_0x9E2D6C50374FCFA9()) != func_107() && func_564(unk_0x9E2D6C50374FCFA9()) == func_88(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_562(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if (func_561(func_295()) && !func_351(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_560())
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_359(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_558())
	{
		return 0;
	}
	if (func_169(unk_0x9E2D6C50374FCFA9(), 0) || func_169(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if ((func_169(unk_0x9E2D6C50374FCFA9(), 12) || func_169(unk_0x9E2D6C50374FCFA9(), 14)) || func_169(unk_0x9E2D6C50374FCFA9(), 13))
	{
		return 0;
	}
	if (func_557(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (!func_523() && !Global_2783575)
		{
			return 0;
		}
	}
	if (func_556(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_555())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_394(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_554())
	{
		return 0;
	}
	if (func_552(unk_0x9E2D6C50374FCFA9()) && Global_1852774.f_172)
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (func_363(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_2809346)
	{
		return 0;
	}
	if (Global_1964189)
	{
		return 0;
	}
	if (!func_459(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_550(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

bool func_551()
{
	return Global_1946934.f_518;
}

int func_552(int iParam0)
{
	if (func_553(Global_1853128[iParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0)
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

int func_554()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_555()
{
	return Global_100026.f_376 > 0;
}

bool func_556(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11);
}

int func_557(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_558()
{
	if (func_559() == 0)
	{
		return 1;
	}
	return 0;
}

int func_559()
{
	return Global_1574629.f_18;
}

bool func_560()
{
	return Global_1575046;
}

int func_561(int iParam0)
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

int func_562(int iParam0, int iParam1)
{
	if (func_117(iParam0, 0))
	{
		return func_563(Global_1893548[iParam0 /*600*/].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_563(int iParam0)
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
		case 262:
		case 263:
		case 264:
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

int func_564(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_565(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_395(iParam0) && !func_8(iParam0)) && !unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_111(iParam0);
	uVar3 = func_171();
	uVar4 = func_566();
	if ((bVar1 && (func_459(iParam0) || func_421(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_113(iParam0)) && !func_306(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810287.f_5193.f_220 != iVar0)
	{
		Global_2810287.f_5193.f_220 = iVar0;
	}
	return iVar0;
}

int func_566()
{
	if ((func_112(unk_0x9E2D6C50374FCFA9(), 21) || func_112(unk_0x9E2D6C50374FCFA9(), 22)) || func_570())
	{
		return 1;
	}
	if (func_568())
	{
		func_567(22);
		return 1;
	}
	return 0;
}

void func_567(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_568()
{
	if (func_117(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (((func_171() && !func_170()) || func_169(unk_0x9E2D6C50374FCFA9(), 21)) || func_169(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		else
		{
			func_569(27);
		}
	}
	return 0;
}

void func_569(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_570()
{
	return func_571(424, -1);
}

int func_571(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_209(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_572()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

int func_573(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_574()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

bool func_575(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

void func_576()
{
	func_577(&(Local_168.f_534), &Local_168, 27, &(Local_168.f_1), &(Local_168.f_117), Local_147.f_3, 0, 0);
}

void func_577(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_691(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_689() || iParam2 == 28)
	{
		if (func_643(uParam1, iParam2, uParam3, Global_1836353, 0, func_692(), iParam7))
		{
			func_642(1);
			if ((!func_641() && !func_640()) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
			{
				if (func_639())
				{
					func_638();
				}
				else
				{
					unk_0xA5AAB00FA8C570A4(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_637(1);
						Global_1836353 = 0;
						iVar19 = -1;
						if (Global_1836576 != 1)
						{
							func_636(uParam1, 0, 0);
							if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
							{
								unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
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
								if (func_12(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
									if (!func_14(iVar3, 0))
									{
										if ((func_632(iVar3) || Global_2689156[iVar3 /*453*/].f_245 != -1) || func_631(iVar3))
										{
											iVar9 = iVar3;
											if (func_90(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_628(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_114(unk_0x9E2D6C50374FCFA9(), 0) && func_225(unk_0x9E2D6C50374FCFA9()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_627())
							{
								if (func_12(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
								}
								else
								{
									iVar3 = func_107();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_626(iVar3) && func_623(iVar3, iParam2)) && func_12(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
								Var6 = { func_618(iVar3) };
								if (iVar3 == unk_0x9E2D6C50374FCFA9())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x61042CA2A97BBB69(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_143(iVar3) };
								iVar5 = func_612(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
								}
								Global_1836353++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_627())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_610(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_289(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_609(iVar3, 0);
								if (bVar2)
								{
									if (func_89(iVar3, 1) && iVar1[iVar9] != -1)
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
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_608(iParam5))
								{
									func_607(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_607(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xCED9E32812D6C7C7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xA1087A6350CD9244(iVar17);
							if (func_12(iVar3, 0, 1) && !unk_0xE2D0C323A1AE5D85(iVar14, iVar3))
							{
								iVar3 = unk_0xA1087A6350CD9244(iVar17);
							}
							else
							{
								iVar3 = func_107();
							}
							if (func_626(iVar3))
							{
								if (func_12(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
									Var6 = { func_618(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_143(iVar3) };
									iVar5 = func_612(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
									}
									Global_1836353++;
									iVar16 = func_609(iVar3, 1);
									if (bVar2)
									{
										if (func_89(iVar3, 1))
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
									func_590(iVar3, unk_0x61042CA2A97BBB69(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							func_587(uParam3, uParam1, iParam2);
						}
						func_46(&(uParam3->f_21));
						func_586();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
						{
							func_585(uParam3, uParam1);
							func_584(uParam1, 0, 1);
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 7);
						}
						func_585(uParam3, uParam1);
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 11);
						}
						if (func_580(uParam3))
						{
							Global_1836576 = 1;
						}
						func_578(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0347CCBD719C8ADC(*uParam1))
					{
						unk_0x2E04B7B46A3670E5(7);
						unk_0x694170BB080C08FF(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x2E04B7B46A3670E5(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_586();
			func_637(0);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
			}
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 10))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xB5A50A903B9AB61B();
}

void func_578(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_579(0);
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_580(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xA1087A6350CD9244(uParam0->f_37);
	if (iVar3 != func_107() && func_12(iVar3, 0, 1))
	{
		Var2 = { func_143(iVar3) };
		iVar1 = func_583(uParam0, uParam0->f_37);
		if (func_582(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_581(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_581(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_581(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_581(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x5AC8E3AF6B0E9458(&Var2))
						{
							iVar4 = 1;
							func_581(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_581(uParam0, iVar0, 0);
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

void func_581(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_582(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

var func_583(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_584(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEA5DEA46C3EE64D3(*uParam0, "COLLAPSE"))
	{
		unk_0xD7D6BA6E36AEC182(iParam1);
		unk_0x6F06CF0E9AB02847();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_585(var uParam0, var uParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_33, 10))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam1, "SET_HIGHLIGHT");
		unk_0x4F47E317C74C543B(uParam0->f_35);
		unk_0x6F06CF0E9AB02847();
		unk_0xCED9E32812D6C7C7(&(uParam0->f_33), 10);
	}
}

void func_586()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_587(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar0);
		if (iVar2 != func_107())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_589(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_588(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853128[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_588(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_ICON"))
		{
			unk_0x4F47E317C74C543B(iParam1);
			unk_0x4F47E317C74C543B(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4F47E317C74C543B(iParam3);
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

int func_589(int iParam0, bool bParam1, int iParam2)
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

void func_590(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_606() && iParam4 < func_605())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEA5DEA46C3EE64D3(*uParam2, sVar1))
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_604("");
			}
			else
			{
				unk_0x4F47E317C74C543B(iParam10);
			}
			func_604(sParam1);
			unk_0x4F47E317C74C543B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_604("");
			}
			else
			{
				unk_0x4F47E317C74C543B(65);
			}
			unk_0x4F47E317C74C543B(-1);
			func_604("");
			if (uParam3->f_108 == 6)
			{
				func_604("");
			}
			else
			{
				func_604(&sParam5);
			}
			func_595(uParam3, iParam0);
			unk_0x35395E05C7DB18D0(sParam9);
			unk_0x35395E05C7DB18D0(sParam9);
			if (func_594(uParam3))
			{
				func_593("DPAD_FRIEND");
			}
			else if (func_592(uParam3))
			{
				func_593("DPAD_FRIEND");
			}
			else if (func_591(uParam3))
			{
				func_593("DPAD_CREW");
			}
			else
			{
				func_593("");
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

bool func_591(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 6);
}

bool func_592(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 5);
}

void func_593(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

int func_594(var uParam0)
{
	if (func_592(uParam0) && func_591(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_595(var uParam0, int iParam1)
{
	if (func_603(iParam1))
	{
		unk_0x4F47E317C74C543B(121);
	}
	else if (func_599(iParam1))
	{
		unk_0x4F47E317C74C543B(122);
	}
	else if (((unk_0xE2D0C323A1AE5D85(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam1 /*453*/].f_426, 0))
	{
		unk_0x4F47E317C74C543B(123);
	}
	else
	{
		if (func_596())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD7D6BA6E36AEC182(uParam0->f_36);
	}
}

int func_596()
{
	if (unk_0x44859561F653DD4E())
	{
		if (func_597() || func_99())
		{
			return 1;
		}
	}
	return 0;
}

int func_597()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_99();
	}
	return func_598(Global_4718592.f_86750);
}

int func_598(int iParam0)
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

int func_599(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_600()) && func_263(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_600()
{
	if (func_395(unk_0x9E2D6C50374FCFA9()) || func_602())
	{
		if (!func_601(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_601(int iParam0)
{
	if (func_326(iParam0) == 236 || func_326(iParam0) == 150)
	{
		return func_459(iParam0);
	}
	return 0;
}

int func_602()
{
	switch (func_225(unk_0x9E2D6C50374FCFA9()))
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

int func_603(int iParam0)
{
	if (func_596())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_600()) && func_265(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_604(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

int func_605()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_606()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_607(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_606() && iParam3 < func_605())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
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
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0347CCBD719C8ADC(*uParam1))
		{
			if (unk_0xEA5DEA46C3EE64D3(*uParam1, sVar1))
			{
				unk_0x4F47E317C74C543B(iParam3);
				if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_604("");
				}
				else
				{
					unk_0x4F47E317C74C543B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					func_593(sParam16);
				}
				else
				{
					func_604(&(uParam2->f_1));
				}
				unk_0x4F47E317C74C543B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_604("");
				}
				else
				{
					unk_0x4F47E317C74C543B(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4F47E317C74C543B(iVar0);
				}
				else
				{
					unk_0x4F47E317C74C543B(-1);
				}
				if (func_627())
				{
					func_604("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 5 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 7 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_TWO_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 8 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
				{
					unk_0x4ADC8B166E139423("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x957E514A6E999374(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x2AE954BA77A66307(iParam10);
					}
					unk_0x26C23BE14F66F202(&(uParam2->f_104));
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x4ADC8B166E139423("FM_AE_CASH");
					unk_0x3788872A07BA04B3(iParam10, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x4ADC8B166E139423("FM_AE_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						unk_0x4ADC8B166E139423("FM_NG_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
					{
						func_593(&(uParam2->f_104));
					}
					else
					{
						func_604("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam14, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (fParam13 != -1f)
				{
					unk_0x4ADC8B166E139423("NUMBER");
					unk_0x957E514A6E999374(fParam13, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (iParam10 != -1)
				{
					unk_0x4F47E317C74C543B(iParam10);
				}
				else
				{
					func_604("");
				}
				if (uParam2->f_108 == 6)
				{
					func_604("");
				}
				else
				{
					func_604(&sParam4);
				}
				func_595(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xACC32B78196FBC2A(sParam8))
				{
					func_604("");
					func_604("");
				}
				else
				{
					unk_0x35395E05C7DB18D0(sParam8);
					unk_0x35395E05C7DB18D0(sParam8);
				}
				if (func_594(uParam2))
				{
					func_593("DPAD_FRIEND");
				}
				else if (func_592(uParam2))
				{
					func_593("DPAD_FRIEND");
				}
				else if (func_591(uParam2))
				{
					func_593("DPAD_CREW");
				}
				else
				{
					func_593("");
				}
				unk_0x6F06CF0E9AB02847();
			}
		}
	}
}

int func_608(int iParam0)
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

int func_609(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_395(iParam0)) && !func_111(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_610(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_611(iParam3))
	{
		*fParam1 = (func_291(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_608(iParam3))
	{
		*fParam1 = (func_291(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	int iVar0;
	
	iVar0 = func_615(iParam0);
	if (iVar0 == -1)
	{
		func_613(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_613(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_615(iParam0) != -1)
	{
		return;
	}
	if (Global_1656815)
	{
		if (iParam0 == Global_1656815.f_1)
		{
			return;
		}
	}
	if (func_614(iParam0))
	{
		return;
	}
	if (Global_1656853 >= 32)
	{
		return;
	}
	Global_1656820[Global_1656853] = iParam0;
	Global_1656853++;
	if (bParam1)
	{
	}
}

int func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656853)
	{
		if (Global_1656820[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656813 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656813)
	{
		if (Global_1656652[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1656652[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1656652[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_616(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_616(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1656813)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1656652[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656652[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xE1AFE5E1E834BBF0(Global_1656652[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1656652[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1656813)
	{
		Global_1656652[iVar2 /*5*/] = { Global_1656652[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_617(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_617(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_107();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

struct<4> func_618(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2783300 = { func_143(iParam0) };
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (func_582(Global_2783300))
			{
				if (!unk_0x3984FBEFE07835D4(&Global_2783300))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x818F829545200020(0))
		{
			return Var0;
		}
		if (func_622(&Global_2783300))
		{
			Global_2783230 = { func_620(iParam0) };
			func_619(&Global_2783230, &Var0);
		}
	}
	return Var0;
}

void func_619(var uParam0, var uParam1)
{
	unk_0xAF42AF0C81B996D0(uParam0, 35, uParam1);
}

struct<35> func_620(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_621(iParam0))
	{
		return Global_1575078[unk_0x9E2D6C50374FCFA9() /*35*/];
	}
	Var0 = { func_143(iParam0) };
	unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var0);
	return Var1;
}

int func_621(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return 1;
	}
	return 0;
}

int func_622(var uParam0)
{
	if (unk_0xC65B603E7942D0DB())
	{
		if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_623(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_8(iParam0) || func_625(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_624(iParam0))
	{
		return 0;
	}
	if ((!func_632(iParam0) && Global_2689156[iParam0 /*453*/].f_245 == -1) && !func_631(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_624(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

int func_625(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10) || unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9));
	}
	return 0;
}

int func_626(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_107())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_627()
{
	switch (func_225(unk_0x9E2D6C50374FCFA9()))
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
	switch (func_326(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_111(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_225(unk_0x9E2D6C50374FCFA9()))
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
	if (func_601(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0xA1087A6350CD9244(iVar0), 0, 1))
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_632(iVar1) || Global_2689156[iVar1 /*453*/].f_245 != -1) || func_631(iVar1))
				{
					if (func_629(iVar1, iParam1, 0))
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

int func_629(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_107())
	{
		if (!bParam2)
		{
			if (func_630(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_107())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_630(int iParam0, int iParam1)
{
	if (iParam1 != func_107())
	{
		if (iParam0 != func_107())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_107())
			{
				if (Global_1893548[iParam0 /*600*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_631(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192 != 0;
}

int func_632(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		return 0;
	}
	if (!func_633(iParam0))
	{
		return 0;
	}
	if ((unk_0xA9E699D3DC7C0B15(iParam0, unk_0x9E2D6C50374FCFA9()) || func_225(iParam0) == 233) || func_225(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_633(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_634(unk_0x9E2D6C50374FCFA9());
	bVar1 = func_634(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_634(int iParam0)
{
	return func_635(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_635(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

void func_636(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4F47E317C74C543B(iParam1);
		unk_0x4F47E317C74C543B(iParam2);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644206.f_2 == 0)
		{
			Global_1644206.f_2 = 1;
		}
	}
	else if (Global_1644206.f_2 == 1)
	{
		Global_1644206.f_2 = 0;
	}
}

void func_638()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
	{
		if (func_307())
		{
			func_294();
		}
	}
}

int func_639()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0) && func_307())
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1) && func_307())
	{
		return 1;
	}
	return 0;
}

int func_640()
{
	if (func_307())
	{
		if (func_54(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_641()
{
	if (func_307())
	{
		if (func_67(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_642(int iParam0)
{
	if (Global_1644206.f_1 != Global_1644206)
	{
		Global_1644206.f_1 = Global_1644206;
	}
	if (Global_1644206 != iParam0)
	{
		Global_1644206 = iParam0;
	}
}

int func_643(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar3 = func_688(iParam1);
	fVar4 = func_687();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_686())
		{
			if (func_685() > 0 && Global_1836355)
			{
				unk_0xF43060DF31ACEA55();
				unk_0x7ED668FC4CB0F4C4(fVar4);
				unk_0xAC765EF46E85A446(18);
				if (unk_0xF847447D4467709D())
				{
					unk_0x19DD1C202B338DF3();
				}
				unk_0xAC765EF46E85A446(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_674())
		{
			func_673(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
	{
		func_673(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_685() == 1)
		{
			func_672(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_673(uParam0, uParam2, 0);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4660), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF847447D4467709D())
		{
			unk_0x19DD1C202B338DF3();
		}
		unk_0xAC765EF46E85A446(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_685() == 0 && !bParam5))
		{
			func_673(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_671();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xF43060DF31ACEA55();
				}
				unk_0xAC765EF46E85A446(18);
			}
			if (!unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_671();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xF43060DF31ACEA55();
					}
					unk_0xAC765EF46E85A446(18);
				}
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (func_672(bVar3, uParam0, 0))
				{
					func_636(uParam0, 0, 0);
					uVar1 = func_669(iParam1, &(Global_4718592.f_86757), bParam4);
					Var0 = { func_667(iParam1) };
					if (bParam4)
					{
						func_664(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_658(uParam0, func_661(uParam2), func_659(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_652(uParam2);
						if (!unk_0xACC32B78196FBC2A(uParam6))
						{
							sVar6 = sParam6;
						}
						func_650(uParam0, sVar6, func_651(), -1);
					}
					else if (func_596())
					{
						uParam2->f_34 = Global_1836354;
						func_664(uParam0, uVar1, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_645(iParam1);
						uParam2->f_34 = Global_1836354;
						func_664(uParam0, uVar1, "", 0, iVar5, func_644(), 1);
					}
					else
					{
						iVar5 = func_645(iParam1);
						func_664(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xCED9E32812D6C7C7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						unk_0xB0550BC91B0159D6(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_644()
{
	return Global_1836354;
}

int func_645(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_649())
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
			if (func_648(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 20;
			}
			if (func_647(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_646(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = 2;
	}
	if (func_226())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_646(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 4;
}

bool func_647(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

bool func_648(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_649()
{
	return Global_4718592.f_1 == 0;
}

void func_650(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(sParam2))
		{
			func_593(sParam1);
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_593("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_651()
{
	switch (func_225(unk_0x9E2D6C50374FCFA9()))
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

char* func_652(var uParam0)
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
	switch (func_225(unk_0x9E2D6C50374FCFA9()))
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
			if (func_654())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_262(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_262(1))
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
			if (func_653(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_653(int iParam0)
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

bool func_654()
{
	return (func_657() && func_655(func_656()));
}

int func_655(int iParam0)
{
	return func_265(iParam0, 1);
}

int func_656()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35;
}

bool func_657()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148;
}

void func_658(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(uParam2))
		{
			func_593(uParam1);
		}
		else if (func_326(unk_0x9E2D6C50374FCFA9()) == 133)
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT_C");
			unk_0x26C23BE14F66F202(uParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_593("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_659(var uParam0)
{
	int iVar0;
	
	iVar0 = func_326(unk_0x9E2D6C50374FCFA9());
	if (func_660())
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
			switch (func_325())
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

bool func_660()
{
	return Global_1853001;
}

char* func_661(var uParam0)
{
	int iVar0;
	
	iVar0 = func_326(unk_0x9E2D6C50374FCFA9());
	if (func_660())
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
			if (func_663() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_663() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_325())
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
			if (func_662() == 1)
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

int func_662()
{
	return Global_2810287.f_5117;
}

int func_663()
{
	if (func_326(unk_0x9E2D6C50374FCFA9()) == 132)
	{
		return Global_2810287.f_5112;
	}
	return -1;
}

void func_664(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_604(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x4ADC8B166E139423(uParam1);
			unk_0x2AE954BA77A66307(iParam5);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_593(sParam1);
		}
		if (func_686() && iParam6)
		{
			if (func_666())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x4ADC8B166E139423("LBD_DPD_CNT");
			unk_0x2AE954BA77A66307(iVar0);
			unk_0x2AE954BA77A66307(iVar1);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_593(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (func_665(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x4F47E317C74C543B(166);
			}
			else if (func_64())
			{
				unk_0x4F47E317C74C543B(166);
			}
		}
		unk_0x6F06CF0E9AB02847();
	}
}

int func_665(int iParam0)
{
	if (func_648(iParam0) || func_647(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_666()
{
	return Global_1836355;
}

struct<4> func_667(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_668(unk_0x9E2D6C50374FCFA9()) || func_646(unk_0x9E2D6C50374FCFA9()))
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
			StringIntConCat(&Var0, Global_4718592.f_527, 16);
			break;
	}
	if (func_596() && unk_0x44859561F653DD4E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_527, 16);
	}
	return Var0;
}

bool func_668(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 5;
}

char* func_669(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_596() || unk_0xACC32B78196FBC2A(uParam1)))
	{
		uVar0 = func_670();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xACC32B78196FBC2A(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
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

char* func_670()
{
	if (unk_0x475BC8E76EB32BCF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x71BE58F878F44990())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x759D0DAF85D68E42())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xAE3D31B16CA16E36())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_671()
{
	Global_43528 = 1;
}

bool func_672(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x528279F3F1EEF869("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_matchmaking_card");
	}
	return unk_0x0347CCBD719C8ADC(*uParam1);
}

void func_673(var uParam0, var uParam1, bool bParam2)
{
	unk_0xB0550BC91B0159D6(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_586();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4660), 5);
		}
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
	}
	if (unk_0xE2D0C323A1AE5D85(uParam1->f_33, 0))
	{
		unk_0xB0550BC91B0159D6(&(uParam1->f_33), 0);
	}
	unk_0x7ED668FC4CB0F4C4(0f);
}

int func_674()
{
	if (func_684())
	{
		return 0;
	}
	if (func_572())
	{
		return 0;
	}
	if (!func_682())
	{
		return 0;
	}
	if (!func_558())
	{
		return 0;
	}
	if (func_681(8, -1))
	{
		return 0;
	}
	if (func_685() == 2)
	{
		return 0;
	}
	if (Global_2810287.f_4611)
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	else if (!func_358(unk_0x9E2D6C50374FCFA9(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_680(1) || func_678(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (func_677() && Global_1965714 == 2)
	{
		return 0;
	}
	if (func_105(unk_0x9E2D6C50374FCFA9()) && !func_677())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (Global_1932197)
	{
		return 0;
	}
	if (func_676(0))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637027)
	{
		return 0;
	}
	if ((Global_1959929.f_718.f_5 || Global_1962755.f_718.f_5) || Global_1958957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966718.f_724.f_5 || Global_1966718.f_744.f_724.f_5) || Global_1966718.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973496.f_726.f_5)
	{
		return 0;
	}
	if (func_675(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((Global_1637063 || Global_1637064) || Global_1637065)
	{
		return 0;
	}
	return 1;
}

bool func_675(int iParam0)
{
	if (iParam0 == func_107())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6);
}

bool func_676(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5193.f_47, iParam0);
}

bool func_677()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_678(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_679(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_679(int iParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_680(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

bool func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

int func_682()
{
	if (func_683())
	{
		return 1;
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB())
	{
		return 0;
	}
	if (unk_0x6304243969F5A11A())
	{
		return 0;
	}
	return 1;
}

bool func_683()
{
	return Global_1574602;
}

bool func_684()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_685()
{
	return Global_1644209.f_68;
}

int func_686()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_687()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x36E90400DA266164()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_688(int iParam0)
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

int func_689()
{
	if (func_692())
	{
		return 1;
	}
	if (func_7(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_660())
	{
		return 1;
	}
	if (func_395(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_326(unk_0x9E2D6C50374FCFA9()))
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
				if (!func_690(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_690(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_690(unk_0x9E2D6C50374FCFA9()))
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

bool func_690(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 4);
}

int func_691(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_395(unk_0x9E2D6C50374FCFA9()) && !func_111(unk_0x9E2D6C50374FCFA9())) && !func_601(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_117(unk_0x9E2D6C50374FCFA9(), 0) && func_111(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
		if (func_565(unk_0x9E2D6C50374FCFA9()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_692()
{
	if (func_693(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_1581327;
	}
	return 0;
}

int func_693(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x62360EE837E523DC(iParam0);
		}
	}
	return 0;
}

void func_694()
{
	if (Local_1513[unk_0xF1354995C6159A78() /*12*/].f_3 == 3)
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 8))
		{
			if ((!func_7(unk_0x9E2D6C50374FCFA9()) && !func_168(unk_0x9E2D6C50374FCFA9())) && !func_408(unk_0x9E2D6C50374FCFA9()))
			{
				func_407();
			}
		}
		else if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 9))
		{
			if ((func_7(unk_0x9E2D6C50374FCFA9()) || func_168(unk_0x9E2D6C50374FCFA9())) || func_408(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x2AC5DD7077138D6D();
				Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4 = 0;
				unk_0xCED9E32812D6C7C7(&iLocal_118, 9);
			}
		}
	}
}

void func_695()
{
	int iVar0;
	
	if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_122)))
	{
		iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_122));
		if (unk_0x0D01086B38EC256F(iVar0))
		{
			func_696(iVar0, 2);
		}
	}
	iLocal_122++;
	if (iLocal_122 >= unk_0x5D79167FED95F0B0())
	{
		iLocal_122 = 0;
	}
}

void func_696(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1836830.f_18)))
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_2, iParam0))
	{
		if (Global_1836830 < iParam1 && unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 0);
			return;
		}
		if (Global_1836830 != 0)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 1);
		}
		Global_1836830 = 0;
		Global_1836830.f_2 = 0;
	}
	unk_0xCED9E32812D6C7C7(&(Global_1836830.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_697(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836830++;
	}
}

bool func_697(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10);
}

void func_698(int iParam0, int iParam1)
{
	Local_1513[iParam0 /*12*/] = iParam1;
}

int func_699()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_168.f_534[iVar0 /*42*/].f_1 = func_107();
		iVar0++;
	}
	return 1;
}

int func_700()
{
	return Local_147;
}

int func_701(int iParam0)
{
	return Local_1513[iParam0 /*12*/];
}

void func_702()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 6))
	{
		func_726();
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 6);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 7))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 4) || unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 16))
		{
			if (((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_307()) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 7);
				func_301("FME_PASINT", 30000);
				func_300(1);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 17))
		{
			if (func_171() && !func_170())
			{
				unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 17);
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 16);
			}
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 23))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xF847447D4467709D())
		{
			if (func_724())
			{
				func_301("AMEV_GA_RP", -1);
				if (func_225(unk_0x9E2D6C50374FCFA9()) != 200)
				{
					func_300(1);
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 23);
			}
		}
	}
	if (unk_0xF1EC2C71FD1371B8() && unk_0x1A76A9A82BD6228C() == 15)
	{
		if (func_421(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xFE728873CE709085(1344549371))
			{
				unk_0x324093E167766493(1344549371);
			}
		}
		else if (unk_0xFE728873CE709085(1344549371))
		{
			unk_0x24DB748BF8E6BF86(1344549371);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 9))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_307()) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !func_169(unk_0x9E2D6C50374FCFA9(), 21)) && !func_169(unk_0x9E2D6C50374FCFA9(), 25))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 9);
			func_723(0);
			func_301("FME_TBL00", -1);
			func_300(1);
		}
	}
	if (func_395(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 18))
		{
			if ((func_169(unk_0x9E2D6C50374FCFA9(), 21) && unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 20)) && !unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 19))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 18);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 18))
		{
			if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_307()) && func_12(unk_0x9E2D6C50374FCFA9(), 1, 1)) && unk_0xE9E8955A780DDA01()) && !func_722())
			{
				unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 18);
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 19);
				func_301("AMTT_RPAS", -1);
				func_300(1);
			}
		}
	}
	if (((((func_395(unk_0x9E2D6C50374FCFA9()) && !func_8(unk_0x9E2D6C50374FCFA9())) && func_326(unk_0x9E2D6C50374FCFA9()) != 146) && !func_7(unk_0x9E2D6C50374FCFA9())) && !func_168(unk_0x9E2D6C50374FCFA9())) && !func_712())
	{
		if (func_420(func_326(unk_0x9E2D6C50374FCFA9())))
		{
			unk_0xEF2C918F9B332BFD(unk_0x9E2D6C50374FCFA9());
		}
		if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 22))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 22);
		}
		if (func_459(unk_0x9E2D6C50374FCFA9()) || func_414())
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 10))
			{
				if (func_711(func_326(unk_0x9E2D6C50374FCFA9())))
				{
					if (func_269(0) && !Global_2653189)
					{
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_418(1);
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 10);
			}
		}
		if (func_421(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 11))
			{
				if (!Global_100026.f_8)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
					func_416(1);
				}
				if (!func_710())
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 13);
					func_415();
				}
				if (!Global_2653189)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
					if (func_269(0) && !Global_2653189)
					{
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
					}
					func_418(1);
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 11);
			}
		}
		else
		{
			func_708(0);
		}
	}
	else
	{
		func_708(1);
	}
	func_703();
	if (func_413(func_326(unk_0x9E2D6C50374FCFA9())) && !unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 21))
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 21);
	}
	if (((func_171() && !func_170()) || func_169(unk_0x9E2D6C50374FCFA9(), 21)) || func_169(unk_0x9E2D6C50374FCFA9(), 25))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 10))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 10);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 10))
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 10);
	}
}

void func_703()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_307())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_546(iVar2))
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
				if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 26))
				{
					unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 26);
				}
				func_704(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 26))
	{
		func_46(&(Global_1836830.f_22));
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 26);
	}
}

void func_704(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1836830.f_22)))
	{
		func_2(&(Global_1836830.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836830.f_22), iParam1, 0))
	{
		if (func_685() > 0)
		{
			func_707(iParam0);
			if (func_298("AMEV_LBD_HELP"))
			{
				unk_0x3410421C60BF7143(1);
			}
			func_46(&(Global_1836830.f_22));
		}
	}
	else
	{
		func_706(0);
		func_705();
	}
}

void func_705()
{
	Global_2810287.f_4599 = 0;
}

void func_706(int iParam0)
{
	Global_1644209.f_68 = iParam0;
}

void func_707(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_108(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_708(int iParam0)
{
	if ((unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 11) || (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 10) && iParam0)) || (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 22) && iParam0))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 12))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 12);
			func_416(0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 13))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 13);
			func_709();
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 14) && !func_117(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 14);
			func_418(0);
		}
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 11);
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 10);
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 22);
	}
}

void func_709()
{
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_5031), 0);
}

bool func_710()
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5031, 0);
}

int func_711(int iParam0)
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
			return func_421(unk_0x9E2D6C50374FCFA9());
		
		case 133:
			return (func_414() || func_5(func_325()));
		
		default:
	}
	return 0;
}

int func_712()
{
	if (((((((((func_721() || func_720()) || func_719()) || func_320()) || (func_718() && !unk_0x44859561F653DD4E())) || (func_715() && !func_714())) || Global_2656877) || Global_2656877.f_1 != 0) || Global_2656951 != 0) || (func_713() == 2 && !unk_0x44859561F653DD4E()))
	{
		return 1;
	}
	return 0;
}

int func_713()
{
	return Global_1057405;
}

bool func_714()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 27);
}

int func_715()
{
	if (func_717() || func_716())
	{
		return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_95 == 8;
	}
	return 0;
}

var func_716()
{
	return Global_2714627.f_735;
}

bool func_717()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

bool func_718()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 5);
}

bool func_719()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 2);
}

bool func_720()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 20);
}

bool func_721()
{
	return Global_2714627.f_698;
}

bool func_722()
{
	return Global_2810287.f_5126 != -1;
}

void func_723(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(2536, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 0))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 0);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 1))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 1);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 2))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 3))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 3);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 4))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 4);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 5))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 6))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 6);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 7))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 7);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 8))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 9))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 9);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 10))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 10);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 11))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 11);
		}
	}
	func_204(2536, iVar0, -1, 1, 0);
}

int func_724()
{
	int iVar0;
	
	if (!func_47(&(Global_1836830.f_15)))
	{
		func_2(&(Global_1836830.f_15), 0, 0);
		Global_1836830.f_17 = 0;
	}
	else if (func_1(&(Global_1836830.f_15), 1000, 0))
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Global_1836830.f_17)))
		{
			iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Global_1836830.f_17));
			if (unk_0x0D01086B38EC256F(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_725(iVar0, 6))
				{
					if (vdist(func_38(unk_0x9E2D6C50374FCFA9()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836830.f_17++;
		if (Global_1836830.f_17 >= 32)
		{
			Global_1836830.f_17 = 0;
			func_46(&(Global_1836830.f_15));
		}
	}
	return 0;
}

int func_725(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_397() != 0)
	{
		return 0;
	}
	if (!func_208(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853128[iVar0 /*888*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_726()
{
	unk_0xC0F70A3CDEC87ECE(5);
	func_728();
	unk_0x8576657A629C4B0A(1f);
	unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 8);
	func_727();
}

void func_727()
{
	if (Global_1941981)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 0))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 1))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 1);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 5))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 5);
		}
		if (unk_0xEC32121F2E3875C8(-355737150))
		{
			unk_0x7E15597AA5F53F9A(-355737150, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-580979506))
		{
			unk_0x7E15597AA5F53F9A(-580979506, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1426452475))
		{
			unk_0x7E15597AA5F53F9A(-1426452475, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(745417724))
		{
			unk_0x7E15597AA5F53F9A(745417724, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1305304906))
		{
			unk_0x7E15597AA5F53F9A(-1305304906, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1543175077))
		{
			unk_0x7E15597AA5F53F9A(-1543175077, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-811770997))
		{
			unk_0x7E15597AA5F53F9A(-811770997, 1, 0, 0);
		}
		Global_1941982 = 0;
	}
	Global_1941981 = 0;
}

void func_728()
{
	if (unk_0x87C0DA419F19FF57(Global_2810287.f_5189))
	{
		if (!Global_2810287.f_5189 == unk_0x69CE66B03B2184EB() && Global_2810287.f_5188 < 1f)
		{
			return;
		}
	}
	Global_2810287.f_5189 = -1;
	Global_2810287.f_5188 = 1f;
}

int func_729()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2810287.f_5029)
	{
		return 0;
	}
	if ((!func_47(&(Local_147.f_39)) && !func_47(&(Local_147.f_41))) && !func_47(&(Local_147.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x0A89FDFA763DCAED();
	if (func_47(&(Local_147.f_41)))
	{
		iVar0 = func_730(&uVar2, &(Local_147.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_147.f_39)))
	{
		iVar0 = func_730(&uVar2, &(Local_147.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_147.f_43)))
	{
		iVar0 = func_730(&uVar2, &(Local_147.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_730(var uParam0, var uParam1)
{
	return unk_0x07141611FD632B59(unk_0x780A854E3A976A66(*uParam0, *uParam1));
}

int func_731()
{
	if (func_732())
	{
		return 1;
	}
	return 0;
}

bool func_732()
{
	return Global_1836830.f_24;
}

int func_733()
{
	var uVar0;
	
	func_737(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_736())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_735())
	{
		return 1;
	}
	if (func_734(159))
	{
		if (!func_721())
		{
			return 1;
		}
	}
	if (func_734(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_423() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_423()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_734(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_735()
{
	return Global_2725224;
}

bool func_736()
{
	return Global_2714627.f_693;
}

void func_737(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_738(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_738(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_739(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_739(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_740()
{
	wait(0);
}

void func_741()
{
	int iVar0;
	
	if (func_733())
	{
		Local_1514.f_5 = 5;
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_147.f_2, 0))
	{
		Local_1514.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1514.f_5 = 1;
	}
	else
	{
		Local_1514.f_5 = 2;
	}
	Local_1514 = Local_147.f_52;
	Local_1514.f_1 = Local_147.f_53;
	Local_1514.f_4 = Local_147.f_66;
	Local_1514.f_3 = Local_147.f_51;
	Local_1514.f_10 = (unk_0x48352343BC5A41AE() - Local_1514.f_9);
	if (!Global_262145.f_11764)
	{
		if (Local_1514.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0xF1354995C6159A78() != -1)
		{
			func_777(Local_1514, Local_147.f_3, Local_1513[unk_0xF1354995C6159A78() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(iLocal_118, 4))
	{
		unk_0xF889BDFCC181BA9F(iLocal_126);
		unk_0xB0550BC91B0159D6(&iLocal_118, 4);
	}
	unk_0xCDBCC1BC1184B002(iLocal_126);
	unk_0xCDBCC1BC1184B002(iLocal_127);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((unk_0xE2D0C323A1AE5D85(iLocal_143, iVar0) && iLocal_144[iVar0] != -1) && !unk_0x78D9ADD511FEAD8B(iLocal_144[iVar0]))
		{
			unk_0xF889BDFCC181BA9F(iLocal_144[iVar0]);
			unk_0xCDBCC1BC1184B002(iLocal_144[iVar0]);
		}
		iVar0++;
	}
	func_404();
	func_469(1, 1);
	unk_0xB2FFDFEBF8F94F36(0);
	func_548(0);
	func_411(Local_147.f_3, 0);
	func_742(133, 0, Local_147.f_37 == 6);
	func_410(23, 0);
	if (func_312() >= 0f)
	{
		unk_0xDAA3C9FEF77614C4(0f, 0, 21);
	}
	if (!unk_0xE2D0C323A1AE5D85(iLocal_118, 9))
	{
		unk_0x2AC5DD7077138D6D();
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_742(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 13))
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 13);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 14))
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 14);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 21))
	{
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 21);
	}
	func_773();
	unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
	unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_772(func_326(unk_0x9E2D6C50374FCFA9()));
		func_410(func_429(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x9E2D6C50374FCFA9() != -1) && func_771(unk_0x9E2D6C50374FCFA9()) >= 12)
		{
			func_770(2548, -1);
			iVar1 = func_213(2548, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 5);
			}
		}
		func_769();
		func_768();
		func_767();
		if ((!func_113(unk_0x9E2D6C50374FCFA9()) && !func_306(unk_0x9E2D6C50374FCFA9())) && !func_460())
		{
			func_751();
		}
		func_750();
		if (!unk_0xE2D0C323A1AE5D85(Global_1944611.f_3, 0) && !unk_0xE2D0C323A1AE5D85(Global_1944611.f_3, 1))
		{
			func_726();
		}
		func_749();
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1811), 2);
		func_748();
		func_173();
	}
	if (unk_0xFE728873CE709085(1344549371))
	{
		unk_0x24DB748BF8E6BF86(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x9E2D6C50374FCFA9() != -1 && !func_169(unk_0x9E2D6C50374FCFA9(), 21)) && !func_169(unk_0x9E2D6C50374FCFA9(), 25)) && !func_117(unk_0x9E2D6C50374FCFA9(), 0))
		{
			func_418(0);
			func_416(0);
			if (!bParam1)
			{
				func_747();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2727408 = -1;
			func_48(26, -1);
		}
	}
	if (!func_743())
	{
		Global_2783191 = 1;
	}
}

int func_743()
{
	if (((((((!func_665(unk_0x9E2D6C50374FCFA9()) && !func_646(unk_0x9E2D6C50374FCFA9())) && func_326(unk_0x9E2D6C50374FCFA9()) != 146) && !func_746()) && !func_745()) && !func_744(Global_4718592.f_138117)) && !func_97()) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_744(int iParam0)
{
	return iParam0 == 57;
}

int func_745()
{
	if (Global_4718592.f_86750 == Global_262145.f_9854)
	{
		return 1;
	}
	return 0;
}

int func_746()
{
	if ((Global_4718592 == 0 && unk_0x44859561F653DD4E()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_138117 > 0) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 15)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 18)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 19)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 29)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 28)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_747()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				unk_0xB0550BC91B0159D6(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_748()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 1);
	}
	if (Global_2810287.f_5030 > 0)
	{
		unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_KILL");
		unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
		unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xB68BD12B3A8C52FD(1);
		Global_2810287.f_5030 = 0;
		unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
		unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
		if (!unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "am_pi_menu"))
		{
			if (Global_2810287.f_5040 > -1)
			{
				unk_0xCDBCC1BC1184B002(Global_2810287.f_5040);
				Global_2810287.f_5040 = -1;
			}
		}
	}
}

void func_749()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836830 = { Var0 };
}

void func_750()
{
	var uVar0;
	
	Global_1581327 = uVar0;
}

void func_751()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_24), &Global_2671504, 2);
	unk_0x049557638ADE4DF8(&(Global_2667222.f_26), &Global_2671506, 19);
	func_765();
	func_754(1, 1, 0);
	func_752();
}

void func_752()
{
	func_753(0, 0);
}

void func_753(int iParam0, int iParam1)
{
	Global_2667222.f_22 = iParam0;
	Global_2667222.f_23 = iParam1;
}

void func_754(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_45), &Global_2671525, 322);
	}
	else
	{
		Global_2667222.f_45 = { Global_2671525 };
		Global_2667222.f_45.f_49 = { Global_2671525.f_49 };
		Global_2667222.f_45.f_52 = Global_2671525.f_52;
		Global_2667222.f_45.f_53 = Global_2671525.f_53;
	}
	if (bParam0)
	{
		func_764();
	}
	if (!bParam2)
	{
		func_756(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_755(0);
	func_176();
}

void func_755(bool bParam0)
{
	if (bParam0)
	{
		Global_2667222.f_712 = 0;
	}
	else
	{
		Global_2667222.f_712 = 1;
	}
}

void func_756(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_763())
		{
			func_762();
		}
		Global_2667222.f_713.f_518 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_713.f_504 = iParam1;
		Global_2667222.f_713.f_505 = iParam2;
		Global_2667222.f_713.f_506 = iParam10;
		func_760();
		func_456(8, 0, 0, 0, 0);
		Global_2667222.f_713.f_507 = iParam11;
		Global_2667222.f_713.f_512 = iParam3;
		Global_2667222.f_713.f_513 = iParam4;
		Global_2667222.f_713.f_510 = iParam5;
		Global_2667222.f_713.f_511 = iParam6;
		Global_2667222.f_713.f_514 = iParam7;
		Global_2667222.f_713.f_515 = iParam8;
		Global_2667222.f_713.f_516 = iParam9;
		Global_2667222.f_713.f_517 = iParam14;
		Global_2667222.f_713.f_508 = iParam12;
		Global_2667222.f_713.f_509 = iParam13;
		Global_2667222.f_1752 = 1;
	}
	else
	{
		func_757();
	}
}

void func_757()
{
	if (func_763() && !func_759())
	{
		func_762();
	}
	if (func_759())
	{
		func_758();
	}
	else
	{
		func_760();
		func_456(0, 0, 0, 0, 0);
		Global_2667222.f_1752 = 0;
		Global_2667222.f_1751 = 0;
	}
}

void func_758()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_713), &(Global_2667222.f_1232), 519);
	Global_2667222.f_489 = { Global_2667222.f_495 };
	if (unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		Global_2667222.f_1751 = 0;
	}
}

int func_759()
{
	if ((Global_2667222.f_1751 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_1232.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_760()
{
	if (func_763() && !func_759())
	{
		func_762();
	}
	func_761();
	Global_2667222.f_713 = 0;
}

void func_761()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667222.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_762()
{
	if (func_759())
	{
		if (Global_2667222.f_713.f_518 == Global_2667222.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_1232), &(Global_2667222.f_713), 519);
		Global_2667222.f_495 = { Global_2667222.f_489 };
		Global_2667222.f_1751 = 1;
	}
}

int func_763()
{
	if ((Global_2667222.f_1752 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_764()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_367), &Global_2671847, 121);
}

void func_765()
{
	func_766();
}

void func_766()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667222.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_2261 = 0;
}

void func_767()
{
	Global_2810287.f_5031 = 0;
}

void func_768()
{
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1 = 0;
	}
}

void func_769()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (iVar0 != -1)
	{
		Global_1893548[iVar0 /*600*/] = -1;
	}
}

void func_770(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_209(iParam1), 0);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_204(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_205(iParam0, iVar0, iParam1, 1);
	}
}

int func_771(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

int func_772(int iParam0)
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
			if (func_421(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_773()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 3) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 4))
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x5A7ACD1CDF509B0D(800);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 5))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 5);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 3))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 3);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 4))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 4);
	}
	func_776(0);
	func_775(0);
	func_774(0);
}

void func_774(int iParam0)
{
	if (Global_2810287.f_4587 != iParam0)
	{
		Global_2810287.f_4587 = iParam0;
	}
}

void func_775(bool bParam0)
{
	if (Global_2810287.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2810287.f_4586 = bParam0;
	}
}

void func_776(int iParam0)
{
	if (Global_2810287.f_4584 != iParam0)
	{
		Global_2810287.f_4584 = iParam0;
	}
}

void func_777(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	struct<13> Var1;
	struct<15> Var2;
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
	
	uVar0 = unk_0x05CBA41180F5D521();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_77852)
	{
		if (unk_0x3C57C2F07FEE34D2(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0xD36A8190BFC150EB(&Var1);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, func_778()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			unk_0xF8DA4028CD22E160(&Var2);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0xA0462F398AA286DF(&Var3);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0xB6AA2AB935F596EA(&Var4);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_penned_in"))
		{
			unk_0x5C348C9363CD3372(&Param0);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0x7236B5A5338DA076(&Var5);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x036357A803423CFF(&Var6);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0xBAF4C2BAD0B0EA1A(&Var7);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			unk_0xBFC873F8C77D376A(&Var8);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0xA4ACC498BF04BBD2(&Var9);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x0F8B888069FABC4B(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0xA68BA8226372EB99(&Var11);
			}
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x1A6091D59D217DD9(&Var12);
		}
	}
}

char* func_778()
{
	switch (Global_2727578)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_779(struct<21> Param0)
{
	int iVar0;
	
	func_788(func_789(Param0), Param0);
	unk_0x6F2E4667A6039155(func_787(9));
	unk_0xC1F83F3B5F8E7D3B(func_786(9));
	func_783(0, -1, 0);
	func_781(133);
	unk_0x21F2B09183F31D02(&Local_147, 88, 0);
	unk_0x7157B1051528D729(&Local_1513, 385, 0);
	if (!func_780())
	{
		func_741();
	}
	if (unk_0x54E30A65F4FA4962())
	{
		unk_0x034E89ED97681AC2(&(Local_147.f_52), &(Local_147.f_53));
	}
	Local_1514.f_2 = unk_0x21E2C39591974468();
	unk_0x2C07CBAFAC54A645(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_144[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_780()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_736())
		{
			return 0;
		}
		if (func_734(157))
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

void func_781(int iParam0)
{
	func_749();
	func_782();
	func_767();
	Global_1836830.f_4 = iParam0;
	Global_1836830.f_5 = iParam0;
	func_428(iParam0, -1);
	func_27(&(Global_1836830.f_18), 0, 0);
	Global_2810287.f_4656 = 0;
	Global_2726296[0] = func_107();
	Global_2726296[1] = func_107();
	Global_2726296[2] = func_107();
	Global_2726296[3] = func_107();
	Global_2726296[4] = func_107();
	func_173();
	if (!func_561(func_295()))
	{
		func_294();
	}
	if (func_171() && !func_170())
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 16);
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 17);
	}
}

void func_782()
{
	var uVar0;
	
	Global_1836855 = uVar0;
}

int func_783(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_785();
			}
			else
			{
				return 0;
			}
		}
		if (!func_784())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_785();
					}
					else
					{
						return 0;
					}
				}
				if (func_736())
				{
					if (!bParam2)
					{
						func_785();
					}
					else
					{
						return 0;
					}
				}
				if (func_734(157))
				{
					if (!bParam2)
					{
						func_785();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_785();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_785();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_785();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_784()
{
	return Global_1575022;
}

void func_785()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_788(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_785();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_789(int iParam0)
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
		
		case 146:
			return 32;
		
		case 147:
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
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_128(func_790(iParam0, 1)))
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

int func_790(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
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
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

