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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 16;
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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	var uLocal_249 = 16;
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
	struct<6> Local_414 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_415 = 0;
	var uLocal_416 = 16;
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
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
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
	var uLocal_569 = 0;
	var uLocal_570 = 0;
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
	struct<5> Local_581[2];
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	bool bLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<21> Local_596 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_60 = 20;
	iLocal_61 = 33;
	bLocal_588 = true;
	bLocal_589 = true;
	bLocal_590 = true;
	bLocal_591 = true;
	if (unk_0x02BFF15CAA701972())
	{
		func_785(ScriptParam_596);
	}
	while (true)
	{
		func_784();
		if (func_776())
		{
			func_420(1);
		}
		if (func_417(0))
		{
			Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 3;
		}
		if (func_416(unk_0xDD0E57E73E5C4BF6()) > -1)
		{
			unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
		}
		switch (func_415(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if (!unk_0x234B68AC2E35ED5A(uLocal_582, 10))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x191DDA30577F440A(&uLocal_582, 10);
					}
				}
				unk_0xBB3CDAB62C8773C8("FMINT", 0);
				if (func_414() && unk_0xA7E5F88C5CF2D04B("FMINT", 0))
				{
					if (func_413() > 0)
					{
						func_412(&uLocal_249, 1, 0, "Lamar", 0, 1);
						func_411(0);
						func_410(4, 1);
						func_410(1, 1);
						func_410(0, 1);
						func_410(2, 1);
						func_410(3, 0);
						func_408(iLocal_61, 1);
						Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 2;
						if (bLocal_590)
						{
							Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = -2;
						}
						else
						{
							Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_413() == 4)
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 4;
				}
				if (func_413() == 6 && Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] < 4)
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_386();
				func_23();
				if (func_413() == 4)
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 4;
				}
				if (func_413() == 6 && Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] < 4)
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_414.f_5));
				if (func_20(&(Local_414.f_5)))
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_60);
				Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 6;
			
			case 6:
				func_420(0);
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			switch (func_413())
			{
				case 0:
					Local_414 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_414 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_588)
	{
		if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (unk_0x443E2CA72E118E64())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 3))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 0))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 3);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 4))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 2))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 4);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 5))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 3))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 5);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 6))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 4))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 6);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 7))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 5))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 7);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 8))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 6))
			{
				unk_0x191DDA30577F440A(&(Local_414.f_1), 8);
			}
		}
		switch (Local_414.f_2)
		{
			case 0:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 3))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						unk_0x89E171705EA920DA(unk_0x854C404AEB476240(Local_414.f_3), 1, 0, 0);
						Local_414.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 4))
				{
					Local_414.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 5))
				{
					Local_414.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 6))
				{
					Local_414.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 7))
				{
					Local_414.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0x234B68AC2E35ED5A(Local_414.f_1, 8))
				{
					Local_414.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)
{
	if (func_9(Global_2544210.f_837) && func_9(Global_2544210.f_838))
	{
		if (!unk_0xB7D6400C89373777(*uParam0))
		{
			if (func_6(uParam0, Global_2544210.f_837, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x914FE6C4D25C2ABA(unk_0x854C404AEB476240(*uParam0), 1);
			}
		}
		if (!unk_0xB7D6400C89373777(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2544210.f_838, -1, 1, 1, 1))
			{
				unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(*uParam1), 1);
				unk_0x824F744352C8BC82(Global_2544210.f_837);
				unk_0x824F744352C8BC82(Global_2544210.f_838);
				unk_0x8B58E7AC53EED9F1(unk_0x854C404AEB476240(*uParam0), 0);
				unk_0x2EB33FFA32BC9E49(unk_0x8A437068C87289B7(*uParam1), 1);
				func_412(uParam4, 8, unk_0x8A437068C87289B7(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0xB7D6400C89373777(*uParam0) || !unk_0xB7D6400C89373777(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_7(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
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
		Global_2405077.f_2919[1 /*6*/].f_3 = fParam1;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam2)
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

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (bLocal_588)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 2))
				{
					if (unk_0x234B68AC2E35ED5A(Local_581[iVar0 /*5*/].f_3, 2))
					{
						unk_0x191DDA30577F440A(&(Local_414.f_1), 2);
					}
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(Local_414.f_1, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Local_581[iVar0 /*5*/].f_3, 1))
				{
					unk_0x191DDA30577F440A(&(Local_414.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0x1146A9AE09CE2B14(), 1))
	{
		return;
	}
	if (!func_13(unk_0x1146A9AE09CE2B14()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
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

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_31345;
}

int func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x443E2CA72E118E64())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_416(unk_0xDD0E57E73E5C4BF6()))
	{
		case -2:
			func_203();
			break;
		
		case -1:
			func_202();
			break;
		
		case 0:
			func_31();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_587)
	{
		case 0:
			if (!func_25(iLocal_61))
			{
				unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 2);
				Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x234B68AC2E35ED5A(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_19() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_27(func_30(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_28(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312763;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

void func_31()
{
	int iVar0;
	
	if (func_201())
	{
		if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			func_200(0);
		}
	}
	if (!func_199(&uLocal_239))
	{
		func_22(&uLocal_239, 0, 0);
	}
	if (!unk_0x234B68AC2E35ED5A(uLocal_582, 21))
	{
		unk_0x191DDA30577F440A(&uLocal_582, 21);
	}
	if (!unk_0x234B68AC2E35ED5A(uLocal_582, 3))
	{
		if (!func_199(&uLocal_237))
		{
			func_22(&uLocal_237, 0, 0);
		}
		else if (unk_0x234B68AC2E35ED5A(uLocal_582, 21))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
				{
					if (func_198(&uLocal_237, 3000, 0))
					{
						unk_0x191DDA30577F440A(&uLocal_582, 3);
					}
				}
			}
		}
		if (func_198(&uLocal_237, 40000, 0))
		{
			unk_0x191DDA30577F440A(&uLocal_582, 3);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(uLocal_582, 16))
	{
		if (!unk_0xE8FFE38E2BA32BD6())
		{
			if (!unk_0xA300BD5F71A8C704())
			{
				unk_0x191DDA30577F440A(&uLocal_582, 16);
				func_197(&uLocal_237);
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 2))
	{
		if (!func_199(&uLocal_243))
		{
			func_22(&uLocal_243, 0, 0);
		}
		else if (!unk_0x234B68AC2E35ED5A(uLocal_583, 1))
		{
			if (func_198(&uLocal_243, 10000, 0))
			{
				unk_0x191DDA30577F440A(&uLocal_583, 1);
				func_197(&uLocal_243);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(uLocal_582, 19))
		{
			if (!unk_0x234B68AC2E35ED5A(uLocal_582, 18))
			{
				if (!func_195() || func_198(&uLocal_237, 5000, 0))
				{
					func_194(0);
					unk_0x191DDA30577F440A(&uLocal_582, 18);
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 0);
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 0);
						unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(uLocal_582, 18))
	{
		if (!unk_0x234B68AC2E35ED5A(uLocal_582, 2))
		{
			if (unk_0xE0A6F16F546C8274())
			{
				iVar0 = 0;
				unk_0x191DDA30577F440A(&iVar0, 3);
				unk_0x191DDA30577F440A(&iVar0, 4);
				unk_0x191DDA30577F440A(&iVar0, 5);
				if (func_99(&uLocal_249, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_98(1);
					unk_0x191DDA30577F440A(&uLocal_582, 2);
					if (!unk_0x234B68AC2E35ED5A(uLocal_582, 20))
					{
						func_83(19, 3, 1);
						unk_0x191DDA30577F440A(&uLocal_582, 20);
					}
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 1, 1);
					}
				}
			}
		}
		else if (!func_82(0))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!unk_0x234B68AC2E35ED5A(uLocal_582, 12))
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 0, 1);
							unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 1);
							unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 1);
							unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 1);
						}
						unk_0x191DDA30577F440A(&uLocal_582, 12);
						func_22(&uLocal_241, 0, 0);
						func_22(&uLocal_245, 0, 0);
					}
				}
			}
		}
		if (unk_0x234B68AC2E35ED5A(uLocal_582, 12))
		{
			if (!unk_0x234B68AC2E35ED5A(uLocal_582, 17))
			{
				if (!unk_0xA300BD5F71A8C704())
				{
					func_75();
					unk_0x191DDA30577F440A(&uLocal_582, 17);
					func_197(&uLocal_237);
				}
			}
			else if (!func_195())
			{
				if (!unk_0x234B68AC2E35ED5A(uLocal_582, 23))
				{
					if (func_198(&uLocal_245, 4500, 0))
					{
						unk_0x191DDA30577F440A(&uLocal_582, 23);
						unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 3);
					}
				}
				if (func_198(&uLocal_241, 15000, 0))
				{
					if (!unk_0x234B68AC2E35ED5A(uLocal_582, 22))
					{
						unk_0x191DDA30577F440A(&uLocal_582, 22);
					}
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
				{
					if (unk_0x234B68AC2E35ED5A(uLocal_582, 14))
					{
						unk_0xC664C0067EEAB8D1(&uLocal_582, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (unk_0x234B68AC2E35ED5A(uLocal_582, 13))
						{
							unk_0xC664C0067EEAB8D1(&uLocal_582, 13);
						}
						if (unk_0x234B68AC2E35ED5A(uLocal_582, 25) || (!unk_0x234B68AC2E35ED5A(uLocal_582, 25) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)))
						{
							if (!unk_0x234B68AC2E35ED5A(uLocal_582, 0))
							{
								if (unk_0x234B68AC2E35ED5A(uLocal_582, 15))
								{
									unk_0xC664C0067EEAB8D1(&uLocal_582, 15);
								}
								if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									unk_0x191DDA30577F440A(&uLocal_582, 0);
									unk_0x191DDA30577F440A(&uLocal_582, 25);
									if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
									{
										if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2))
										{
											unk_0x13CC211F9F7ACE7F(Global_99422.f_247[iLocal_61], 1);
										}
										func_408(iLocal_61, 1);
									}
								}
							}
							else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2))
							{
								if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
								{
									if (!unk_0x234B68AC2E35ED5A(uLocal_582, 15))
									{
										unk_0x13CC211F9F7ACE7F(Global_99422.f_247[iLocal_61], 0);
										unk_0x191DDA30577F440A(&uLocal_582, 15);
									}
								}
							}
							else if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
							{
								if (unk_0x234B68AC2E35ED5A(uLocal_582, 15))
								{
									unk_0x13CC211F9F7ACE7F(Global_99422.f_247[iLocal_61], 1);
									unk_0xC664C0067EEAB8D1(&uLocal_582, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0x234B68AC2E35ED5A(uLocal_582, 0))
						{
							unk_0xC664C0067EEAB8D1(&uLocal_582, 0);
						}
						if (!unk_0x234B68AC2E35ED5A(uLocal_582, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							unk_0x191DDA30577F440A(&uLocal_582, 13);
						}
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(uLocal_582, 14))
				{
					unk_0x66AE54CE92457FEE(1);
					if (unk_0x234B68AC2E35ED5A(uLocal_582, 0))
					{
						unk_0xC664C0067EEAB8D1(&uLocal_582, 0);
					}
					if (unk_0x234B68AC2E35ED5A(uLocal_582, 13))
					{
						unk_0xC664C0067EEAB8D1(&uLocal_582, 13);
					}
					if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
					{
						unk_0x13CC211F9F7ACE7F(Global_99422.f_247[iLocal_61], 0);
						unk_0x89936830A493350F(Global_99422.f_247[iLocal_61], 0);
						func_408(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					unk_0x191DDA30577F440A(&uLocal_582, 14);
				}
			}
		}
	}
	else if (func_198(&uLocal_239, 300000, 0))
	{
		unk_0x191DDA30577F440A(&uLocal_582, 18);
	}
	if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 0))
	{
		if (((unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_pistol"), 0) || unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_combatpistol"), 0)) || unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_appistol"), 0)) || unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), joaat("weapon_microsmg"), 0))
		{
			if (func_66())
			{
				func_61(1);
				unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 0);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 1);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!unk_0x234B68AC2E35ED5A(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				unk_0x191DDA30577F440A(&uLocal_582, 31);
			}
			func_197(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 3;
				}
				else
				{
					Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_28(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_33()
{
	return 1;
	return 0;
}

void func_34(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0);
}

void func_37(bool bParam0)
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

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_39();
		unk_0xEDA1E269A9237146();
	}
}

void func_39()
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

int func_40()
{
	if (!func_41())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_39();
	return unk_0xB4BAEA083E2652CB();
}

int func_41()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_42()
{
	return ((((((((((func_43(28) || func_43(29)) || func_43(30)) || func_43(31)) || func_43(32)) || func_43(33)) || func_43(34)) || func_43(35)) || func_43(36)) || func_43(37)) || func_43(38));
}

int func_43(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iVar0 = func_58(unk_0x1146A9AE09CE2B14());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xCCF8CE6ECB8490FD((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_29()) || unk_0xD699DB7515D82955())
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
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_52(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_47(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_51(iParam0))
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
		func_49(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_49(var uParam0)
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
	func_50(&(uParam0->f_14));
	func_50(&(uParam0->f_14.f_13));
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

void func_50(var uParam0)
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

int func_51(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
				func_54(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_54(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_56(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_55();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_55()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

var func_56(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_57()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

var func_58(int iParam0)
{
	var uVar0;
	
	uVar0 = func_59(iParam0);
	return uVar0;
}

int func_59(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return unk_0x32C1729072A82662(-1);
		}
		else if (func_60(iParam0))
		{
			return Global_1590908[iParam0 /*874*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_60(int iParam0)
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

void func_61(bool bParam0)
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xC664C0067EEAB8D1(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0xC664C0067EEAB8D1(&uVar0, iParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_99422.f_1378[iParam0]), iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0x191DDA30577F440A(&uVar0, iParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

int func_67(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1660673, 19))
		{
			unk_0x191DDA30577F440A(&Global_1660673, 19);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1660673, 19))
	{
		unk_0xC664C0067EEAB8D1(&Global_1660673, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_72()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_74(sParam0);
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_78(unk_0x1146A9AE09CE2B14()) };
	bVar1 = unk_0x678E959F60C0DB94();
	bVar2 = func_77(&Var0);
	if (!bVar1 && !bVar2)
	{
		func_76("HLP_TAXI3", 9000);
	}
	else if (bVar1 && !bVar2)
	{
		func_76("HLP_SOC2", 9000);
	}
	else if (bVar1 && bVar2)
	{
		func_76("HLP_SOC1", 9000);
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_77(var uParam0)
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

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1372345.f_40 == 3;
}

int func_81()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
			{
				return 1;
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8354 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		func_90();
		if (iParam1 == 4)
		{
			func_89(iParam0, 0, 1);
			func_89(iParam0, 1, 1);
			func_89(iParam0, 2, 1);
			func_88(iParam0, 0, 1);
			func_88(iParam0, 1, 1);
			func_88(iParam0, 2, 1);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_89(iParam0, iVar0, 1);
			func_88(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2544210.f_6705)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77248)
			{
				if (iParam1 != 4)
				{
					if (Global_19798 != iParam1)
					{
						Global_8327[iParam1 /*4*/] = { func_85(iParam0) };
						Global_8344[iParam1] = 1;
						Global_8349[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19798)
					{
					}
					else
					{
						Global_8278[1 /*6*/] = { func_85(iParam0) };
						Global_8278[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_8278[1 /*6*/] = { func_85(iParam0) };
					Global_8278[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_8278[1 /*6*/] = { func_85(iParam0) };
				Global_8278[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[Global_8354 /*29*/].f_7)), 64);
	if (Global_8373 == 0)
	{
		unk_0xAD97A7EDCF347FBB("");
		StringCopy(&cVar1, unk_0x3A2A8DAFDBEC4CFE(&(Global_8278[1 /*6*/])), 64);
		sVar2 = unk_0x3A2A8DAFDBEC4CFE("CELL_253");
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xAD97A7EDCF347FBB("CELL_255");
		unk_0x1896EC0B030A48A2(&(Global_8278[1 /*6*/]));
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 0);
}

struct<4> func_85(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_90()
{
	if (func_97(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_91();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_91()
{
	func_92();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_95(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_94(unk_0x7D2B9E6A64637269());
			if (func_93(iVar0) && (!func_97(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_93(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&Global_7669, 17);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7669, 17);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_192())
	{
		return 0;
	}
	if (func_191())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAB6A270F84A8781E(sParam2))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam3))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD());
	iVar1 = func_190(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		iVar2 = unk_0x15173FB88ABC94F9(sParam7);
	}
	if (func_189(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_185(uParam6))
	{
		return 0;
	}
	if (func_182(iVar0, iVar1, iVar2))
	{
		if (func_181())
		{
			return 0;
		}
		func_180();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_106(iParam4))
	{
		return 0;
	}
	func_101(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1372345.f_40.f_1 = iParam0;
	Global_1372345.f_40.f_2 = iParam1;
	Global_1372345.f_40.f_3 = iParam2;
	StringCopy(&(Global_1372345.f_40.f_4), sParam3, 16);
	Global_1372345.f_40.f_8 = iParam4;
	Global_1372345.f_40.f_9 = iParam5;
	Global_1372345.f_40.f_14 = uParam6;
	func_102(iParam4);
	func_180();
	Global_1372345.f_40.f_13 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 7000);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_1372345.f_40.f_10 = 0;
}

void func_104()
{
	Global_1372345.f_40.f_10 = 1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_106(int iParam0)
{
	return iParam0 > Global_1372345.f_40.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_179();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_176(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_173(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_176(uParam0, sParam3, sParam4);
		}
		return func_155(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_154(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_142(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = true;
	if (func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	Global_1372345.f_40.f_11 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam0);
	Global_1372345.f_40.f_12 = 1;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_140();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1372345.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		iVar6++;
		if (!unk_0xAB6A270F84A8781E(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xDA654EB115F9FF7D(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x234B68AC2E35ED5A(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_130(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(uParam4, 0))
	{
		func_113();
	}
	func_141();
	func_112();
	func_111();
	return 1;
}

void func_111()
{
	Global_1372345.f_57 = 0;
	Global_1372345.f_57.f_1 = 0;
}

void func_112()
{
	Global_1372345.f_40 = 3;
}

void func_113()
{
	unk_0x191DDA30577F440A(&Global_7668, 8);
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			unk_0x191DDA30577F440A(&Global_4272479, 0);
		}
		return 1;
	}
	return 0;
}

int func_115(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_4272464 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_129() == 0)
	{
		func_127();
		return 0;
	}
	func_126(Global_4272463);
	StringCopy(&(Global_4271214[Global_4272463 /*104*/]), sParam1, 64);
	Global_4271214[Global_4272463 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4271214[Global_4272463 /*104*/].f_24 = iParam2;
	}
	Global_4271214[Global_4272463 /*104*/].f_25 = iParam7;
	Global_4271214[Global_4272463 /*104*/].f_26 = uParam8;
	Global_4271214[Global_4272463 /*104*/].f_29 = uParam9;
	Global_4271214[Global_4272463 /*104*/].f_30 = uParam12;
	Global_4271214[Global_4272463 /*104*/].f_31 = uParam11;
	Global_4271214[Global_4272463 /*104*/].f_28 = 0;
	Global_4271214[Global_4272463 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_33), sParam4, 64);
	Global_4271214[Global_4272463 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_50), sParam5, 64);
	Global_4271214[Global_4272463 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_83), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 3:
			Global_4271214[Global_4272463 /*104*/].f_99[Global_19798] = 1;
			break;
		
		case 0:
			Global_4271214[Global_4272463 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4271214[Global_4272463 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4271214[Global_4272463 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19798)
		{
			case 0:
				func_125(0);
				break;
			
			case 1:
				func_125(1);
				break;
			
			case 2:
				func_125(2);
				break;
			
			case 3:
				func_125(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4272464 = 1;
				break;
			
			case 0:
				Global_4272464 = 1;
				break;
			
			case 2:
				Global_4272464 = 1;
				break;
			
			case 1:
				Global_4272464 = 1;
				break;
			}
	}
	Global_22194[Global_4272463] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_124())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_123(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(1);
			func_123(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_116(uParam0, sParam1);
	return 1;
}

void func_116(var uParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, -1180597171, unk_0x15173FB88ABC94F9(sParam1), 0);
}

int func_117()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_140())
	{
		return 0;
	}
	if (func_118(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

bool func_119(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_120(int iParam0)
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
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_97(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_122(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_121(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_122(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_122(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_122(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_122(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_122(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_122(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_123(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	unk_0x392841D58D2EED1D();
}

bool func_124()
{
	return Global_1312902;
}

void func_125(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112293.f_14049[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_126(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1947D86A2BB06F8D();
	uVar1 = unk_0x942C8DFFBBCB3EB4();
	uVar2 = unk_0xCA86FAB7FADC8353();
	uVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	uVar5 = unk_0x77D50D8E8FF785AC();
	Global_4271214[iParam0 /*104*/].f_18 = uVar0;
	Global_4271214[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4271214[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4271214[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4271214[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4271214[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4272463 = 11;
	Global_4271214[Global_4272463 /*104*/].f_18 = -1;
	Global_4271214[Global_4272463 /*104*/].f_18.f_1 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_2 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_3 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_128(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
		{
			Global_4272463 = iVar2;
		}
		iVar2++;
	}
	Global_4271214[Global_4272463 /*104*/].f_24 = 1;
}

int func_128(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4271214[iVar2 /*104*/].f_24 == 0)
		{
			Global_4272463 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4272463 = 11;
	Global_4271214[Global_4272463 /*104*/].f_18 = -1;
	Global_4271214[Global_4272463 /*104*/].f_18.f_1 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_2 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_3 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4271214[iVar2 /*104*/].f_24 == 0 || Global_4271214[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_128(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
			{
				Global_4272463 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4272463 == 11)
	{
		return 0;
	}
	Global_4271214[Global_4272463 /*104*/].f_99[0] = 0;
	Global_4271214[Global_4272463 /*104*/].f_99[1] = 0;
	Global_4271214[Global_4272463 /*104*/].f_99[2] = 0;
	return 1;
}

int func_130(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			unk_0x191DDA30577F440A(&Global_4272479, 0);
		}
		return 1;
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_132(2, iParam1);
	return iParam0;
}

void func_132(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_133(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_132(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x3A2A8DAFDBEC4CFE(sParam0);
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 == -1)
	{
		func_135(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_135(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_137(iParam0) != -1)
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
	if (func_136(iParam0))
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

int func_136(int iParam0)
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

int func_137(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_138(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(int iParam0)
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
	func_139(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_139(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_140();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

int func_140()
{
	return -1;
}

void func_141()
{
	Global_1372345.f_40.f_9 = 4;
}

int func_142(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_144(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_140();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1372345.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22186 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		iVar6++;
		if (!unk_0xAB6A270F84A8781E(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xDA654EB115F9FF7D(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x234B68AC2E35ED5A(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_153(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_146(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(uParam4, 0))
	{
		func_113();
	}
	func_145();
	func_112();
	func_111();
	return 1;
}

void func_145()
{
	Global_1372345.f_40.f_9 = 3;
}

int func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_147(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			Global_8278[3 /*6*/] = { func_85(iParam0) };
			Global_8355 = iParam0;
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

int func_147(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_152() == 0)
	{
		func_150();
		return 0;
	}
	func_149(Global_22192);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/]), sParam1, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_24 = iParam2;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_25 = iParam7;
	Global_112293.f_14139[Global_22192 /*104*/].f_26 = uParam8;
	Global_112293.f_14139[Global_22192 /*104*/].f_29 = uParam9;
	Global_112293.f_14139[Global_22192 /*104*/].f_30 = uParam12;
	Global_112293.f_14139[Global_22192 /*104*/].f_31 = uParam11;
	Global_112293.f_14139[Global_22192 /*104*/].f_28 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_33), sParam4, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_50), sParam5, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_83), sParam15, 64);
	if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
		Global_8374 = 4;
		func_125(0);
		func_125(2);
		func_125(1);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 3:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[Global_19798] = 1;
				break;
			
			case 0:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19798)
			{
				case 0:
					func_125(0);
					Global_8374 = 0;
					break;
				
				case 1:
					func_125(1);
					Global_8374 = 1;
					break;
				
				case 2:
					func_125(2);
					Global_8374 = 2;
					break;
				
				case 3:
					func_125(3);
					Global_8374 = 3;
					break;
				
				default:
					Global_8374 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
		{
			Global_112293.f_14049[0 /*20*/].f_17 = 1;
			Global_112293.f_14049[1 /*20*/].f_17 = 1;
			Global_112293.f_14049[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112293.f_14049[Global_19798 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112293.f_14049[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112293.f_14049[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112293.f_14049[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22194[Global_22192] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_124())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_123(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(1);
			func_123(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_148(uParam0, sParam1);
	return 1;
}

void func_148(var uParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, 1654525105, unk_0x15173FB88ABC94F9(sParam1), 0);
}

void func_149(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1947D86A2BB06F8D();
	uVar1 = unk_0x942C8DFFBBCB3EB4();
	uVar2 = unk_0xCA86FAB7FADC8353();
	uVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	uVar5 = unk_0x77D50D8E8FF785AC();
	Global_112293.f_14139[iParam0 /*104*/].f_18 = uVar0;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_151(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
		{
			Global_22192 = iVar2;
		}
		iVar2++;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_24 = 1;
}

int func_151(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0)
		{
			Global_22192 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0 || Global_112293.f_14139[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_151(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
			{
				Global_22192 = iVar2;
			}
		}
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22192 == 34)
	{
		return 0;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 0;
	return 1;
}

int func_153(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 3;
	if (func_147(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			Global_8278[3 /*6*/] = { func_85(iParam0) };
			Global_8355 = iParam0;
			StringCopy(&Global_8356, sParam5, 64);
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

int func_154(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	func_145();
	bVar0 = true;
	if (func_144(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x234B68AC2E35ED5A(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x234B68AC2E35ED5A(uParam4, 4))
	{
		bVar0 = func_172(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_161(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x234B68AC2E35ED5A(uParam4, 3))
		{
			func_160(1);
		}
		if (unk_0x234B68AC2E35ED5A(uParam4, 5))
		{
			func_159(1);
		}
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_2553851 = 0;
}

void func_157()
{
	Global_1372345.f_57 = 1;
	Global_1372345.f_57.f_1 = 0;
}

void func_158()
{
	Global_1372345.f_40.f_9 = 1;
}

void func_159(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7670, 0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7670, 0);
	}
}

void func_160(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 20);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 20);
	}
}

int func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam7);
}

int func_162(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_170();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_169(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_168();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_90();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_167())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_166())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_165();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_164();
		func_163();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_170();
	}
	return 0;
}

void func_163()
{
	if (!func_117())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

void func_164()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_165()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_166()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_169(int iParam0, int iParam1)
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

void func_170()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

int func_172(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21173 = 1;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam7);
}

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (func_175(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_174();
		func_158();
		func_112();
		func_157();
		func_156();
		return 1;
	}
	return 0;
}

void func_174()
{
	Global_22143 = 0;
}

bool func_175(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_171(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 1;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 1;
	Global_21179 = 0;
	StringCopy(&Global_21273, sParam5, 24);
	Global_2621441 = 0;
	return func_162(sParam3, iParam4, bParam8);
}

int func_176(var uParam0, char* sParam1, char* sParam2)
{
	if (func_178(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_177();
		func_112();
		func_157();
		return 1;
	}
	return 0;
}

void func_177()
{
	Global_1372345.f_40.f_9 = 2;
}

bool func_178(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_162(sParam2, iParam3, 0);
}

void func_179()
{
	Global_1372345.f_55 = Global_1372345.f_40.f_1;
	Global_1372345.f_55.f_1 = Global_1372345.f_40.f_10;
}

void func_180()
{
	Global_1372345.f_40 = 1;
}

bool func_181()
{
	return Global_1372345.f_40 == 1;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (Global_1372345.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1372345.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_183(int iParam0)
{
	if (!func_184())
	{
		return 0;
	}
	if (!Global_1372345.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_184()
{
	if (Global_1372345.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_185(var uParam0)
{
	if (func_188())
	{
		return 0;
	}
	if (func_80())
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1669334 || func_187())
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0, 6))
	{
		if (func_186())
		{
			return 0;
		}
	}
	return 1;
}

bool func_186()
{
	return unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1390181);
}

int func_187()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return func_166();
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0;
	}
	return func_182(iParam0, iParam1, iParam2);
}

int func_190(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x15173FB88ABC94F9(&cVar0);
}

bool func_191()
{
	return Global_2550920.f_1;
}

int func_192()
{
	if (Global_1372533.f_2)
	{
		return 1;
	}
	return func_193();
}

bool func_193()
{
	return func_188();
}

void func_194(int iParam0)
{
	Global_2554342.f_1072 = iParam0;
}

int func_195()
{
	if (func_196("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_196("HLP_SOC1"))
	{
		return 1;
	}
	if (func_196("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_196(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_197(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_198(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_199(var uParam0)
{
	return uParam0->f_1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 8))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 8);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 8))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 8);
	}
}

bool func_201()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 8);
}

void func_202()
{
	unk_0x6E1E3A5B1F9AB95B(800);
	if (!bLocal_590 || bLocal_591)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 0;
	}
	else
	{
		Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = 3;
	}
}

void func_203()
{
	if (func_207(&Local_62, &(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4)))
	{
		Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_2 = -1;
	}
	func_204(&Local_62);
}

void func_204(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA300BD5F71A8C704();
	switch (iLocal_586)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(*uParam0, 18))
			{
				if (!func_199(&uLocal_592))
				{
					func_22(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0xE8FFE38E2BA32BD6())
					{
						func_76("HLP_XP1", 9000);
						func_197(&uLocal_592);
						func_22(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (func_198(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					func_76("HLP_XP2", 9000);
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_198(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					func_76("HLP_RNK1", 9000);
					func_206(1);
					Global_2544210.f_1917 = 1;
					func_205(1, 0, -1);
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_198(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					func_194(0);
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (func_198(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0x234B68AC2E35ED5A(uLocal_583, 2))
			{
				unk_0x191DDA30577F440A(&uLocal_583, 2);
			}
			break;
	}
}

void func_205(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1379108.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x191DDA30577F440A(&(Global_1379108.f_1046), iParam0);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_1379108.f_1046), iParam0);
			}
			break;
	}
}

void func_206(int iParam0)
{
	Global_2544210.f_4597 = iParam0;
}

int func_207(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 13))
	{
		if (unk_0x0E8572B08CEB6A11(unk_0x3E8724B048C8403E()))
		{
			Var3 = { unk_0x0D9118860A976DFD(unk_0x3E8724B048C8403E()) };
			if ((Var3.x != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				unk_0x52149FA3F8DAD0F2(Var3, 0f, 0f, 0f);
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 14))
				{
					unk_0x191DDA30577F440A(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(*uParam0, 14))
	{
		unk_0x961F6202C2192265();
		unk_0xC664C0067EEAB8D1(uParam0, 14);
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 337, 1);
	}
	func_385(uParam0);
	unk_0xF7B46911310E4737(1f);
	func_379(uParam0);
	func_378(unk_0x1146A9AE09CE2B14());
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0xFA82BD1142427E0F(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x0EFDA7B3FFAA82B3(uParam0->f_32);
				unk_0x191DDA30577F440A(uParam0, 31);
			}
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x636F1F53CC61D2C9(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x636F1F53CC61D2C9(func_377()) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2544210.f_1916)
				{
					Global_2544210.f_1916 = 1;
					unk_0x06D69059DB3DA20C(0);
				}
				if (!func_201())
				{
					func_200(1);
				}
				if (!unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
				{
					unk_0x8BA9BCDD56AA7115(800);
				}
				if (!func_199(&(uParam0->f_15)))
				{
					func_22(&(uParam0->f_15), 0, 0);
				}
				unk_0x3D9BC07C93913E04(&Global_1669792);
				Global_1669793 = 0;
				Global_1669795 = 0;
				Global_1669794 = 0;
				Global_1669796 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x8B6A925F148E0E94())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_366(0, 0, 0, 1, 1, 1, 0);
					unk_0xF29D7F0377E8D386(1, 0);
					func_411(1);
					unk_0x3BD7A59B7421B60A(1);
					unk_0xEEC9E321329FBFBB("EXTRASUNNY");
					unk_0x53DE1F9BC0FF9BF9(19, 0, 0);
					unk_0x36C0D9757EDAA8CC(1);
					func_365(0);
					unk_0x53DE9210BC084E9F(0);
					func_357(1, 0);
					func_329(1, 1);
					if (unk_0x636F1F53CC61D2C9(joaat("fm_intro")) < 1 || !func_328())
					{
						if (uParam0->f_292)
						{
							if (func_327() == 0)
							{
								unk_0x9104E9283667AF15("GTAO_INTRO_MALE");
								unk_0x8B4524E0E3CEED65(1);
							}
						}
					}
					func_320(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0xC664C0067EEAB8D1(uParam0, 0);
					unk_0xC664C0067EEAB8D1(uParam0, 1);
					unk_0xC664C0067EEAB8D1(uParam0, 2);
					unk_0xC664C0067EEAB8D1(uParam0, 9);
					unk_0x191DDA30577F440A(uParam0, 7);
					uParam0->f_122 = unk_0x0823FA7465392E20(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0x16E516CA9C88FF48(joaat("frogger"));
				if (unk_0xA9C0BBFB9CBB66F1(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0x6E7F154934B0020A())
					{
						if (func_317())
						{
							unk_0x8907F12AEE458EDE(0);
							func_312(1, 1, 0);
							unk_0x84FBE118966BBE44(0);
							unk_0x66AE54CE92457FEE(1);
							if (!func_193())
							{
								func_311();
							}
							func_206(0);
							func_310();
							unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Global_1312571, 1, 0, 0, 1);
							unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 1);
							unk_0x3CBE9F07524C242D(unk_0x7D2B9E6A64637269(), false, 0);
							unk_0x20D884FB6567BAD5(0);
							if (unk_0x575B7C28D81C0B4D(unk_0xBE979A383F439BD0()))
							{
								unk_0xDD205B87CDFD0C1B(unk_0xBE979A383F439BD0(), 0f);
							}
							unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0xF471787D45ADC2C1())
				{
					if (!unk_0x234B68AC2E35ED5A(*uParam0, 4))
					{
						if (func_309() == 65 || func_309() == 66)
						{
							unk_0x961F6202C2192265();
							unk_0xA08B79ACC38AAA7A(754.2219f, 1226.831f, 356.5081f, func_308(-14.367f, 0f, 157.3524f), 100f, 0);
							func_197(&(uParam0->f_17));
							func_22(&(uParam0->f_17), 0, 0);
							unk_0x191DDA30577F440A(uParam0, 4);
						}
					}
					else if (unk_0x8A54885A635DC8D1("FM_INTRO_START") && (unk_0xABE4F4FD4329B037() || func_198(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0x234B68AC2E35ED5A(*uParam0, 24))
						{
							if (unk_0x234B68AC2E35ED5A(*uParam0, 7))
							{
								unk_0xFB8A6909539A30B1("FM_INTRO_START");
								unk_0x191DDA30577F440A(uParam0, 24);
								unk_0x191DDA30577F440A(uParam0, 21);
							}
						}
						else if (unk_0x324E9C77BDF774EA() > 0)
						{
							unk_0xED93DAC36CA89AF2();
							unk_0x68B0D6E564002023(6);
							if (!unk_0x0E8572B08CEB6A11(uParam0->f_7))
							{
								uParam0->f_7 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
							}
							unk_0xFD866EC0672D68D5(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xFD866EC0672D68D5(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x9C9EC7CC88D050FA(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 1, 0);
							func_307(uParam0);
							unk_0x191DDA30577F440A(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x70C5FE4EE59DC750(9, 9, 9, 9);
								unk_0x9E3EB3EDB58FA356();
							}
							unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
							if (unk_0x8B6A925F148E0E94())
							{
								unk_0x6E1E3A5B1F9AB95B(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_306(uParam0, 6);
				func_305(uParam0);
				if (func_304(uParam0, 6, 0))
				{
					unk_0x66AE54CE92457FEE(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 2))
				{
					unk_0x66AE54CE92457FEE(1);
					func_76("FMIC_INTRO2", -1);
					unk_0x191DDA30577F440A(uParam0, 2);
				}
				unk_0xFD866EC0672D68D5(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xFD866EC0672D68D5(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x70C5FE4EE59DC750(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_306(uParam0, 8);
				if (func_305(uParam0))
				{
					func_303(uParam0);
					if (func_304(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 10))
				{
					func_302();
					unk_0x191DDA30577F440A(uParam0, 10);
				}
				unk_0xFD866EC0672D68D5(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xFD866EC0672D68D5(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xBFCE58B2B3249999(uParam0->f_48, 0))
				{
					unk_0xCC89BCE0D230B0D6(uParam0->f_48);
					unk_0x4603196EEEA2355C(uParam0->f_48, true, 0);
					unk_0x4B43AFBD2CEE7724(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xBFCE58B2B3249999(uParam0->f_48, 0))
				{
					unk_0x4B43AFBD2CEE7724(uParam0->f_48);
				}
				func_306(uParam0, 10);
				if (func_301())
				{
					if (func_300(uParam0))
					{
						if (func_303(uParam0))
						{
							if (func_304(uParam0, 10, 0))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
								{
									unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
								}
								fVar0 = 5000f;
								if (unk_0xBFCE58B2B3249999(uParam0->f_92[0], 0))
								{
									unk_0x069557E67CC67C29(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x2978CEBD6EE3E821(uParam0->f_92[0], fVar0);
								}
								if (unk_0xBFCE58B2B3249999(uParam0->f_92[1], 0))
								{
									unk_0x069557E67CC67C29(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x2978CEBD6EE3E821(uParam0->f_92[1], fVar0);
								}
								if (unk_0xBFCE58B2B3249999(uParam0->f_92[2], 0))
								{
									unk_0x069557E67CC67C29(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x2978CEBD6EE3E821(uParam0->f_92[2], fVar0);
								}
								if (unk_0xBFCE58B2B3249999(uParam0->f_92[3], 0))
								{
									unk_0x069557E67CC67C29(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x2978CEBD6EE3E821(uParam0->f_92[3], fVar0);
								}
								if (unk_0xBFCE58B2B3249999(uParam0->f_92[4], 0))
								{
									unk_0x069557E67CC67C29(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x2978CEBD6EE3E821(uParam0->f_92[4], fVar0);
								}
								unk_0x191DDA30577F440A(uParam0, 15);
								unk_0x6E1E3A5B1F9AB95B(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					func_299(uParam0);
					func_298(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x111FCF62A4BA857D(uParam0->f_7, 1);
					unk_0x71FA2D5F4B42ADDC(uParam0->f_7);
					unk_0xFE1DEC9C5734D0C0(uParam0->f_7, 0);
					unk_0xB84B43B766630B5C("MP_INTRO_RACE_SCENE");
					unk_0x70C5FE4EE59DC750(9, 12, 9, 12);
					func_296(uParam0, 14);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					unk_0x191DDA30577F440A(uParam0, 5);
				}
				func_306(uParam0, 14);
				if (func_304(uParam0, 14, 0))
				{
					func_295(uParam0, 23539f, 0);
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_296(uParam0, 15);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 15);
				if (func_304(uParam0, 15, 0))
				{
					func_295(uParam0, 28833.33f, 75f);
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_274(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_296(uParam0, 16);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 16);
				if (func_304(uParam0, 16, 0))
				{
					func_295(uParam0, 29700f, 0);
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x3943912232B2A7BF(uParam0->f_9, 0.7f);
					func_296(uParam0, 17);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 6))
				{
					unk_0x191DDA30577F440A(uParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 17);
				if (func_304(uParam0, 17, 0))
				{
					func_295(uParam0, 36450f, 0);
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 18);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 18);
				if (func_273() && func_304(uParam0, 18, 0))
				{
					func_295(uParam0, 43650f, 0);
					unk_0x53DE1F9BC0FF9BF9(16, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					if (unk_0x419E13582192CFEA(uParam0->f_92[2]))
					{
						unk_0x5420D0D520CF44D0(&(uParam0->f_92[2]));
					}
					if (unk_0x419E13582192CFEA(uParam0->f_92[3]))
					{
						unk_0x5420D0D520CF44D0(&(uParam0->f_92[3]));
					}
					if (unk_0x419E13582192CFEA(uParam0->f_92[4]))
					{
						unk_0x5420D0D520CF44D0(&(uParam0->f_92[4]));
					}
					func_298(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 19);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					func_284(uParam0);
				}
				else
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0xC4EACCE45DBAA313(uParam0->f_32))
							{
								if (!unk_0xE50EB54E0F21BED0(uParam0->f_91, 0))
								{
									unk_0x5CD78A8003B19DB8(uParam0->f_91, uParam0->f_32, unk_0x15173FB88ABC94F9("GtaMloRoom001"));
								}
								unk_0xCDF87F9AAD28040F("SE_MP_GARAGE_L_RADIO", 0);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!unk_0xE50EB54E0F21BED0(uParam0->f_49[iVar2], 0))
									{
										unk_0x5CD78A8003B19DB8(uParam0->f_49[iVar2], uParam0->f_32, unk_0x15173FB88ABC94F9("GtaMloRoom001"));
									}
									iVar2++;
								}
								unk_0x191DDA30577F440A(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_283(uParam0) && func_277(uParam0))
					{
						func_275(uParam0);
					}
				}
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 19);
				if (func_304(uParam0, 19, 0) && unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					if (unk_0x234B68AC2E35ED5A(*uParam0, 12))
					{
						unk_0xC664C0067EEAB8D1(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_304(uParam0, 19, -4968))
				{
					if (!unk_0x234B68AC2E35ED5A(*uParam0, 12))
					{
						unk_0x66AE54CE92457FEE(1);
						unk_0x191DDA30577F440A(uParam0, 12);
					}
				}
				else if (func_304(uParam0, 19, -5618))
				{
					if (!unk_0x234B68AC2E35ED5A(*uParam0, 30))
					{
						unk_0x9673FB069F90F6B9("MP_intro_logo", 0, 0);
						unk_0x191DDA30577F440A(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_272(uParam0);
				func_271(uParam0);
				if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
				{
					if (!unk_0x0E8572B08CEB6A11(uParam0->f_7))
					{
						uParam0->f_7 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
					unk_0xFD866EC0672D68D5(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xFD866EC0672D68D5(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x9C9EC7CC88D050FA(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0x2470509C0B93ACD8(uParam0->f_32, unk_0x15173FB88ABC94F9("GtaMloRoom001"));
					unk_0xCDF87F9AAD28040F("SE_MP_GARAGE_L_RADIO", 0);
					unk_0x68B0D6E564002023(0);
					unk_0xE9F198943372703F(uParam0->f_10, 0f);
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_91))
					{
						unk_0xE37EB80DFB0D31FB(uParam0->f_91, 0, 0);
					}
					if (unk_0xB30CD10E2CD1B67D("MP_INTRO_RACE_SCENE"))
					{
						unk_0xC0BBE340BE2AA02D("MP_INTRO_RACE_SCENE");
					}
					unk_0x70C5FE4EE59DC750(9, 13, 9, 13);
					func_270(uParam0);
					func_269();
					func_76("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 23);
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				if (func_304(uParam0, 23, 0))
				{
					unk_0xFD866EC0672D68D5(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xFD866EC0672D68D5(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0xE9F198943372703F(uParam0->f_10, 0f);
					if (!unk_0xECEC7528A52B4EE8(uParam0->f_91))
					{
						unk_0xE37EB80DFB0D31FB(uParam0->f_91, 0, 0);
					}
					func_267(uParam0, 0);
					func_267(uParam0, 1);
					func_267(uParam0, 5);
					func_267(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_272(uParam0);
				func_271(uParam0);
				func_306(uParam0, 24);
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				if (func_304(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_272(uParam0);
				func_271(uParam0);
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0x191DDA30577F440A(uParam0, 13);
				unk_0xFD866EC0672D68D5(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xFD866EC0672D68D5(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0x53DE1F9BC0FF9BF9(18, 0, 0);
				func_267(uParam0, 2);
				func_267(uParam0, 7);
				unk_0x824F744352C8BC82(func_266());
				if (unk_0x419E13582192CFEA(uParam0->f_91))
				{
					unk_0xC606AE2A3209945E(&(uParam0->f_91));
				}
				unk_0x191DDA30577F440A(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_272(uParam0);
				func_271(uParam0);
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 8))
				{
					unk_0x191DDA30577F440A(uParam0, 8);
				}
				if (func_283(uParam0) && func_277(uParam0))
				{
					func_275(uParam0);
				}
				func_306(uParam0, 28);
				if ((unk_0x8A54885A635DC8D1("FM_INTRO_DRIVE_START") && unk_0x234B68AC2E35ED5A(uParam0->f_3, 3)) && func_304(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
					{
						if (func_263(uParam0))
						{
							unk_0xF2CEEA627AD5A24B(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0xF2CEEA627AD5A24B(unk_0x7D2B9E6A64637269(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF2CEEA627AD5A24B(unk_0x7D2B9E6A64637269(), "MP_Male_Character", 0, 0, 0);
							unk_0xF2CEEA627AD5A24B(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_263(uParam0))
				{
					unk_0xF2CEEA627AD5A24B(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0xF2CEEA627AD5A24B(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
				{
					unk_0xF2CEEA627AD5A24B(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
				{
					unk_0xF2CEEA627AD5A24B(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_33, 0))
				{
					unk_0x4603196EEEA2355C(uParam0->f_33, true, 0);
					unk_0xF2CEEA627AD5A24B(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_261(uParam0);
				unk_0xD2179AB45928B7F4("CONTRAILS", 0);
				unk_0x70C5FE4EE59DC750(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				unk_0x7E1C1B2FCF372776(4);
				func_253(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0x2CA4B93E310C1860())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0x8BAFB6B897BD2A31(uParam0->f_32);
					}
					func_252(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0xDFB7BFA6482FEE1E() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_263(uParam0))
					{
						if (unk_0x30700B4AA35835FD("MP_Female_Character", 0))
						{
							if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
								{
									if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x30700B4AA35835FD("MP_Male_Character", 0))
					{
						if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
						{
							if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
								{
									unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x30700B4AA35835FD("LAMAR", 0))
				{
					if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
					{
						if (!unk_0xECEC7528A52B4EE8(uParam0->f_35))
						{
							if (!unk_0xC49311A2A500FF09(uParam0->f_35, 0))
							{
								unk_0x95CA4545D0C61309(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xE37EB80DFB0D31FB(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x30700B4AA35835FD("MP_Lamar_Car", 0))
				{
					if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
					{
						unk_0x89E171705EA920DA(uParam0->f_34, 1, 1, 0);
						unk_0x78CDDD1E6367978D(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0xCD37A28258D70638(uParam0->f_34, -106.11f);
						func_251(uParam0, 3099.997f);
						unk_0x77CF3E92F49E693E(uParam0->f_34, 1);
					}
				}
				if (unk_0x4C6F400CF30C1680(0))
				{
					unk_0x53DE1F9BC0FF9BF9(21, 0, 0);
					func_296(uParam0, 33);
					func_298(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 29))
				{
					if (unk_0x5D98A2EB2BC86014() || unk_0x5505579F3F8D58CB() > 3254)
					{
						unk_0xC664C0067EEAB8D1(uParam0, 29);
					}
				}
				if ((func_250(uParam0) && func_249(uParam0)) && !unk_0x2CA4B93E310C1860())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0xDFB7BFA6482FEE1E() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_263(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x3EA8C0BAD14D607C();
					unk_0xACA86FC73DC40E96();
					if (unk_0x234B68AC2E35ED5A(*uParam0, 7))
					{
						unk_0xFB8A6909539A30B1("FM_INTRO_DRIVE_START");
						unk_0x191DDA30577F440A(uParam0, 21);
					}
					if (!unk_0xAB946B7DDFEE8833())
					{
						unk_0x903CBC9D71D2160E(0);
					}
					if (!unk_0x234B68AC2E35ED5A(*uParam1, 1))
					{
						unk_0x191DDA30577F440A(uParam1, 1);
					}
					func_248(uParam0);
					func_247(uParam0);
					func_253(0, 1, 1, 0, 0, 0, 0);
					unk_0x191DDA30577F440A(uParam0, 15);
					unk_0xC664C0067EEAB8D1(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0xDFB7BFA6482FEE1E() - (uParam0->f_26 + unk_0x5505579F3F8D58CB()));
					}
					if (!unk_0x234B68AC2E35ED5A(*uParam0, 22))
					{
						if (unk_0x500BACA595B00ACF() == 1)
						{
							unk_0x53DE1F9BC0FF9BF9(19, 59, 0);
							unk_0x191DDA30577F440A(uParam0, 22);
						}
					}
					if (func_245(uParam0))
					{
						if (unk_0x500BACA595B00ACF() == 2)
						{
							if (!unk_0x234B68AC2E35ED5A(*uParam0, 18))
							{
								unk_0x191DDA30577F440A(uParam0, 18);
							}
							if (unk_0x5505579F3F8D58CB() > 23146)
							{
								if (!unk_0x234B68AC2E35ED5A(*uParam0, 27))
								{
									unk_0x4A95E0F654DD603E("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x191DDA30577F440A(uParam0, 27);
								}
								if (!unk_0x234B68AC2E35ED5A(*uParam0, 28))
								{
									unk_0x4A95E0F654DD603E("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x191DDA30577F440A(uParam0, 28);
								}
							}
							unk_0x0484D99771630DC2(4950f);
							if (unk_0x234B68AC2E35ED5A(*uParam0, 22))
							{
								unk_0x53DE1F9BC0FF9BF9(21, 0, 0);
								unk_0xC664C0067EEAB8D1(uParam0, 22);
							}
							if (unk_0x5505579F3F8D58CB() > 23254)
							{
								func_244(uParam0);
							}
						}
					}
					if (unk_0x500BACA595B00ACF() > 2)
					{
						func_247(uParam0);
						if (!unk_0x234B68AC2E35ED5A(*uParam0, 22))
						{
							unk_0x53DE1F9BC0FF9BF9(21, 0, 0);
							unk_0x191DDA30577F440A(uParam0, 22);
						}
						if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
						{
							unk_0xFCF2996A0E9DEDF6(uParam0->f_34);
							unk_0xC55DA02D18D77322(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x5505579F3F8D58CB();
				}
				break;
			
			case 33:
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 1))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 2))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 1))
					{
						if (func_304(uParam0, 33, -5450))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					unk_0xB84B43B766630B5C("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 33);
				func_242(uParam0);
				if (func_304(uParam0, 33, 0))
				{
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 2))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x612434A5544F5847(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5C062C9AFC66C513(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xEF20E9A7B745D17A(uParam0->f_7, 33.3479f);
						unk_0x9C9EC7CC88D050FA(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_35, false, 0);
						}
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADAE2D0345EF09F9(uParam0->f_11, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_pside_f"));
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.129f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, 0);
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.145f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.145f);
						}
						unk_0xE37EB80DFB0D31FB(uParam0->f_36, 0, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 34);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 34);
				func_242(uParam0);
				if (func_304(uParam0, 34, 0))
				{
					func_251(uParam0, 18966.65f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 3))
					{
						if (func_304(uParam0, 34, 1100))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 4))
					{
						if (func_304(uParam0, 34, 1100))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 3))
					{
						if (func_304(uParam0, 34, 1000))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_35, true, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_36, false, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 35);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 35);
				func_242(uParam0);
				if (func_304(uParam0, 35, 0))
				{
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 5))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 4))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 5))
					{
						if (func_304(uParam0, 36, -3750))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x612434A5544F5847(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5C062C9AFC66C513(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xEF20E9A7B745D17A(uParam0->f_7, 33.3479f);
						unk_0x9C9EC7CC88D050FA(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_35, false, 0);
						}
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADAE2D0345EF09F9(uParam0->f_11, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_pside_f"));
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.363f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, 0);
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.298f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.298f);
						}
						unk_0xE37EB80DFB0D31FB(uParam0->f_36, 0, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 36);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 36);
				func_242(uParam0);
				if (func_304(uParam0, 36, 0))
				{
					func_251(uParam0, 42700.96f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 6))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 6))
					{
						if (func_304(uParam0, 36, 1000))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_35, true, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_36, false, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 37);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 37);
				func_242(uParam0);
				if (func_304(uParam0, 37, 0))
				{
					func_251(uParam0, 51033.28f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 7))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 8))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 9))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 7))
					{
						if (func_304(uParam0, 37, 2500))
						{
							if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x191DDA30577F440A(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 38);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 38);
				func_242(uParam0);
				if (func_304(uParam0, 38, 0))
				{
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 8))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 9))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 31))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_263(uParam0))
				{
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 31))
					{
						if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x612434A5544F5847(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5C062C9AFC66C513(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xEF20E9A7B745D17A(uParam0->f_7, 33.3479f);
						unk_0x9C9EC7CC88D050FA(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_35, false, 0);
						}
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADAE2D0345EF09F9(uParam0->f_11, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_pside_f"));
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.811f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, 0);
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.791f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.791f);
						}
						unk_0xE37EB80DFB0D31FB(uParam0->f_36, 0, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 39);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 39);
				func_242(uParam0);
				if (func_304(uParam0, 39, 0))
				{
					func_251(uParam0, 85050f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0x234B68AC2E35ED5A(uParam0->f_1, 31))
				{
					if (func_243(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x191DDA30577F440A(&(uParam0->f_1), 31);
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x70C5FE4EE59DC750(9, 12, 9, 12);
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_35, true, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_36, false, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 40);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 40);
				if (func_242(uParam0) && func_304(uParam0, 40, 0))
				{
					func_251(uParam0, 116366.5f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					unk_0x53DE1F9BC0FF9BF9(0, 0, 0);
					func_298(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_296(uParam0, 41);
					unk_0xE7B9CAAF8DF31886("CONTRAILS", 0);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 41);
				if (func_304(uParam0, 41, 0))
				{
					unk_0xBE8646618B3F1D3A(1);
					func_251(uParam0, 127166.5f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_241(uParam0);
					func_298(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 42);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 42);
				if (func_304(uParam0, 42, 0))
				{
					unk_0xBE8646618B3F1D3A(0);
					func_251(uParam0, 170800f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 43);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 43);
				if (func_304(uParam0, 43, 0))
				{
					unk_0x70C5FE4EE59DC750(9, 12, 9, 12);
					func_251(uParam0, 191799.8f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 44);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 44);
				if (func_304(uParam0, 44, 0))
				{
					func_251(uParam0, 196633.1f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 45);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 45);
				if (func_304(uParam0, 45, 0))
				{
					func_251(uParam0, 201466.5f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 46);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 46);
				if (func_304(uParam0, 46, 0))
				{
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_240(uParam0);
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x612434A5544F5847(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x5C062C9AFC66C513(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0xEF20E9A7B745D17A(uParam0->f_7, 33.3479f);
						unk_0x9C9EC7CC88D050FA(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x6FA8221C9D2ECB46(uParam0->f_7, 1);
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_35, false, 0);
						}
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
						{
							unk_0x4603196EEEA2355C(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0xADAE2D0345EF09F9(uParam0->f_11, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_dside_f"));
						if (func_263(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, unk_0xED5AD56E2C551D1E(uParam0->f_34, "seat_pside_f"));
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.726f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_12, uParam0->f_34, 0);
							unk_0xAD844C8843FC405C(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE9F198943372703F(uParam0->f_11, 0.726f);
							unk_0xE9F198943372703F(uParam0->f_12, 0.815f);
						}
						unk_0xE37EB80DFB0D31FB(uParam0->f_36, 0, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 47);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 47);
				if (func_304(uParam0, 47, 0))
				{
					func_251(uParam0, 213066.4f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_240(uParam0);
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_35, true, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(uParam0->f_36, 0))
					{
						unk_0x4603196EEEA2355C(uParam0->f_36, false, 0);
					}
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
					{
						unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
					}
					func_296(uParam0, 48);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 48);
				if (func_304(uParam0, 48, 0))
				{
					unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 3);
					func_239(uParam0, 10177.75f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_240(uParam0);
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_296(uParam0, 49);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				func_306(uParam0, 49);
				if (unk_0x8A54885A635DC8D1("FM_INTRO_DRIVE_END") && func_304(uParam0, 49, 0))
				{
					func_237(uParam0, 4500f);
					unk_0x191DDA30577F440A(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_240(uParam0);
				if (!unk_0xE0A6F16F546C8274())
				{
					if (!unk_0x07BE48DF95787FCB())
					{
						unk_0x6E1E3A5B1F9AB95B(250);
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 15))
				{
					func_298(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x51595C15729F2944();
						unk_0xC664C0067EEAB8D1(uParam0, 11);
					}
					func_296(uParam0, 50);
					unk_0xC664C0067EEAB8D1(uParam0, 15);
				}
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 20))
				{
					if (func_263(uParam0))
					{
						unk_0xA566E488BA0A0A4C("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0xA566E488BA0A0A4C("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xE807694ABD40478F())
						{
							if (func_263(uParam0))
							{
								unk_0xC95426A654AFD89C("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0xC95426A654AFD89C("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x3E2C7717C449F4CB())
					{
						unk_0x191DDA30577F440A(uParam0, 20);
					}
				}
				func_306(uParam0, 50);
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(uParam0->f_34))
					{
						if (unk_0x4DDAC4C80BACF92C(uParam0->f_34) < 1f)
						{
							unk_0x50B76EE36FBE865F(uParam0->f_34);
						}
					}
				}
				if (func_304(uParam0, 50, 0) && unk_0x234B68AC2E35ED5A(*uParam0, 20))
				{
					if (unk_0x234B68AC2E35ED5A(*uParam0, 21))
					{
						unk_0xFB8A6909539A30B1("FM_INTRO_DRIVE_END");
						unk_0xC664C0067EEAB8D1(uParam0, 21);
					}
					unk_0x50B76EE36FBE865F(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
					{
						if (func_263(uParam0))
						{
							unk_0xF2CEEA627AD5A24B(unk_0x7D2B9E6A64637269(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF2CEEA627AD5A24B(unk_0x7D2B9E6A64637269(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_35, 0))
				{
					unk_0xF2CEEA627AD5A24B(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0xE50EB54E0F21BED0(uParam0->f_34, 0))
				{
					unk_0xF2CEEA627AD5A24B(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x191DDA30577F440A(uParam0, 13);
				if (unk_0xB30CD10E2CD1B67D("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0xC0BBE340BE2AA02D("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x7E1C1B2FCF372776(4);
				func_253(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0x2CA4B93E310C1860())
				{
					unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0xDFB7BFA6482FEE1E() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_236(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_263(uParam0))
					{
						if (!unk_0x234B68AC2E35ED5A(*uParam0, 23))
						{
							if (unk_0x30700B4AA35835FD("MP_Female_Character", 0))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
								{
									unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), unk_0x832AD84AA258AE80(Var1.x, Var1.f_1));
									unk_0xDF23DCD7A3E1B7A5(0);
									unk_0x3A13FD2813C8251F(0, 1065353216);
									unk_0x191DDA30577F440A(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0x234B68AC2E35ED5A(*uParam0, 23))
					{
						if (unk_0x30700B4AA35835FD("MP_1", 0))
						{
							if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), unk_0x832AD84AA258AE80(Var1.x, Var1.f_1));
								unk_0xDF23DCD7A3E1B7A5(0);
								unk_0x3A13FD2813C8251F(0, 1065353216);
								unk_0x191DDA30577F440A(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x30700B4AA35835FD("LAMAR", 0))
				{
					if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
					{
						if (!unk_0xECEC7528A52B4EE8(uParam0->f_35))
						{
							if (!unk_0xC49311A2A500FF09(uParam0->f_35, 0))
							{
								unk_0x95CA4545D0C61309(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x30700B4AA35835FD("MP_Lamar_Car", 0))
				{
					if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
					{
						unk_0x47D0DDD8833C5E5F(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0x4C6F400CF30C1680(0))
				{
					func_235(1);
					unk_0xDF23DCD7A3E1B7A5(0);
					unk_0x3A13FD2813C8251F(0, 1065353216);
				}
				if (!func_234(unk_0x1146A9AE09CE2B14()))
				{
					func_233(1);
				}
				if (unk_0x2CA4B93E310C1860())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0xDFB7BFA6482FEE1E() - (uParam0->f_30 + unk_0x5505579F3F8D58CB()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_232(uParam0, 0);
							break;
						
						case 10:
							func_232(uParam0, 1);
							break;
						
						case 20:
							func_232(uParam0, 2);
							break;
						
						case 30:
							func_232(uParam0, 3);
							break;
						
						case 40:
							func_232(uParam0, 4);
							break;
						
						case 50:
							func_232(uParam0, 5);
							break;
						
						case 60:
							func_232(uParam0, 6);
							break;
						
						case 70:
							func_232(uParam0, 7);
							break;
						
						case 80:
							func_232(uParam0, 8);
							break;
						
						case 90:
							func_232(uParam0, 9);
							break;
						
						case 100:
							if (unk_0x419E13582192CFEA(uParam0->f_36))
							{
								unk_0xC606AE2A3209945E(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x3EA8C0BAD14D607C();
					unk_0xACA86FC73DC40E96();
					if (!unk_0xAB946B7DDFEE8833())
					{
						unk_0x903CBC9D71D2160E(0);
					}
					func_253(0, 1, 1, 0, 0, 0, 0);
					unk_0xC664C0067EEAB8D1(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0x2CA4B93E310C1860())
				{
					unk_0x642F37FB2C12C776();
				}
				else if (!unk_0x234B68AC2E35ED5A(*uParam0, 17))
				{
					if (unk_0x8B6A925F148E0E94())
					{
						unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
						unk_0x191DDA30577F440A(uParam0, 13);
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
						if (uParam0->f_292)
						{
							unk_0x51595C15729F2944();
							unk_0xC664C0067EEAB8D1(uParam0, 11);
						}
						func_197(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x191DDA30577F440A(uParam0, 17);
					}
					else if (!unk_0x4E38E404B98F3D9A())
					{
						unk_0x8BA9BCDD56AA7115(250);
					}
				}
				else if (func_198(&(uParam0->f_17), 10000, 0))
				{
					if (func_231(uParam0))
					{
						func_299(uParam0);
						func_247(uParam0);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
							if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								unk_0x3CBE9F07524C242D(unk_0x7D2B9E6A64637269(), true, 0);
								unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 61.3164f);
							}
						}
						if (!unk_0xECEC7528A52B4EE8(uParam0->f_35))
						{
							if (!unk_0xC49311A2A500FF09(uParam0->f_35, 0))
							{
								if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
								{
									unk_0x95CA4545D0C61309(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_235(1);
						if (!func_234(unk_0x1146A9AE09CE2B14()))
						{
							func_233(1);
						}
						func_253(0, 1, 1, 0, 0, 0, 0);
						unk_0x53DE1F9BC0FF9BF9(0, 0, 0);
						if (unk_0x234B68AC2E35ED5A(*uParam0, 21))
						{
							unk_0xFB8A6909539A30B1("FM_INTRO_DRIVE_END");
							unk_0xC664C0067EEAB8D1(uParam0, 21);
						}
						unk_0x191DDA30577F440A(uParam0, 1);
						unk_0x191DDA30577F440A(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0x2CA4B93E310C1860())
				{
					unk_0x642F37FB2C12C776();
				}
				else if (!unk_0x234B68AC2E35ED5A(*uParam0, 17))
				{
					if (unk_0x8B6A925F148E0E94())
					{
						unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
						unk_0x191DDA30577F440A(uParam0, 13);
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
						if (uParam0->f_292)
						{
							unk_0x51595C15729F2944();
							unk_0xC664C0067EEAB8D1(uParam0, 11);
						}
						func_197(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x191DDA30577F440A(uParam0, 17);
					}
					else if (!unk_0x4E38E404B98F3D9A())
					{
						unk_0x8BA9BCDD56AA7115(250);
					}
				}
				else if (func_198(&(uParam0->f_17), 10000, 0))
				{
					if (func_283(uParam0))
					{
						func_299(uParam0);
						func_247(uParam0);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
							if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								unk_0x3CBE9F07524C242D(unk_0x7D2B9E6A64637269(), true, 0);
								unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 61.3164f);
								if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
								{
									unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0xECEC7528A52B4EE8(uParam0->f_35))
						{
							if (!unk_0xC49311A2A500FF09(uParam0->f_35, 0))
							{
								if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
								{
									unk_0x95CA4545D0C61309(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_234(unk_0x1146A9AE09CE2B14()))
						{
						}
						func_253(0, 1, 1, 0, 0, 0, 0);
						if (unk_0x234B68AC2E35ED5A(*uParam0, 21))
						{
							unk_0xFB8A6909539A30B1("FM_INTRO_DRIVE_END");
							unk_0xC664C0067EEAB8D1(uParam0, 21);
						}
						unk_0x6E1E3A5B1F9AB95B(250);
						unk_0x53DE1F9BC0FF9BF9(0, 0, 0);
						unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 3);
						uParam0->f_13 = (unk_0xDFB7BFA6482FEE1E() - func_228(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_239(uParam0, 10177.75f);
						unk_0x191DDA30577F440A(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_306(uParam0, 57);
				bVar4 = !uParam0->f_288;
				func_216(uParam0, bVar4, 0);
				if (uParam0->f_292)
				{
					unk_0x51595C15729F2944();
					unk_0xC664C0067EEAB8D1(uParam0, 11);
				}
				if (!unk_0xECEC7528A52B4EE8(uParam0->f_35))
				{
					unk_0x373635EFD76DFAB3(uParam0->f_35, -1);
					unk_0x504B26425DFF773C(uParam0->f_35, 1);
				}
				unk_0x06D69059DB3DA20C(1);
				if (!uParam0->f_288)
				{
					func_32(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_215(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = to_float((unk_0xDFB7BFA6482FEE1E() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = to_float(func_236(uParam0));
			}
			uParam0->f_290 = func_214(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0x234B68AC2E35ED5A(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x34DC21A7AB5C360E(uParam0->f_289);
			}
			else
			{
				unk_0x34DC21A7AB5C360E(uParam0->f_290);
			}
		}
		func_211(uParam0);
		if (unk_0x234B68AC2E35ED5A(*uParam0, 12))
		{
			if (func_273())
			{
				func_210();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
				{
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 60);
				}
			}
			func_208(uParam0);
			unk_0x2EA77AAC984722FF();
			unk_0xEFD424FDD55A6EC7(9);
			unk_0xEFD424FDD55A6EC7(7);
			unk_0xEFD424FDD55A6EC7(18);
			unk_0xEFD424FDD55A6EC7(6);
			unk_0xEFD424FDD55A6EC7(3);
			unk_0xEFD424FDD55A6EC7(13);
			unk_0xEFD424FDD55A6EC7(4);
		}
		if (Global_2544210.f_1917)
		{
			unk_0x681AE3DAF3A73058(2, 187, 1);
		}
	}
	return 0;
}

void func_208(var uParam0)
{
	var uVar0;
	
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0xD09C9D030AFD3F25())
			{
				if (!unk_0xBBFCE82595FCF3E6())
				{
					uVar0 = unk_0x1146A9AE09CE2B14() + 32;
					unk_0xAC5B2506743F67DF(1, uVar0);
					func_209(1);
					unk_0x191DDA30577F440A(uParam0, 9);
				}
			}
			else
			{
				func_209(1);
				unk_0x191DDA30577F440A(uParam0, 9);
			}
		}
	}
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 18))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 18);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 18))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 18);
	}
}

void func_210()
{
	unk_0x44EF5678D6916481(Global_1315709, 255, 255, 255, 255, 0);
	if (Global_1315711 == 0)
	{
		unk_0x704F8697BB515627(Global_1315709, "SET_BIG_LOGO_VISIBLE");
		unk_0x9E3D03981E2E9AD9(1);
		unk_0x9D7453DF8B7E9E0B(1);
		unk_0x392841D58D2EED1D();
		Global_1315711 = 1;
	}
}

void func_211(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0x419E13582192CFEA(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0xE50EB54E0F21BED0(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xD6E677FAD7521410(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_212(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_212(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0x419E13582192CFEA(uParam0->f_58[iParam1]))
	{
		if (unk_0xE50EB54E0F21BED0(uParam0->f_58[iParam1], 0))
		{
		}
		func_213(iParam1, &Var0, &fVar1);
		unk_0x78CDDD1E6367978D(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(uParam0->f_58[iParam1], fVar1);
		unk_0xA2C015B68CE01357(uParam0->f_58[iParam1], true);
		unk_0x037561EBFB8F7D13(uParam0->f_58[iParam1]);
		unk_0x3CBE9F07524C242D(uParam0->f_58[iParam1], false, 0);
		unk_0x4603196EEEA2355C(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0x419E13582192CFEA(uParam0->f_74[iParam1]))
	{
		if (unk_0xE50EB54E0F21BED0(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0x4603196EEEA2355C(uParam0->f_74[iParam1], false, 0);
	}
}

void func_213(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_214(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_263(uParam0))
		{
			fVar0 = to_float((uParam0->f_27 + unk_0x5505579F3F8D58CB()));
			if (unk_0x500BACA595B00ACF() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = to_float((uParam0->f_27 + unk_0x5505579F3F8D58CB()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_215(var uParam0)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 29))
	{
		unk_0x0A0EDA6028815477(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x0A0EDA6028815477(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_216(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
	{
		if (unk_0x2CA4B93E310C1860())
		{
			unk_0x903CBC9D71D2160E(0);
		}
		unk_0x3BD7A59B7421B60A(0);
		if (uParam0->f_292)
		{
			unk_0x8B4524E0E3CEED65(0);
			unk_0x51595C15729F2944();
			unk_0xC664C0067EEAB8D1(uParam0, 11);
		}
		if (unk_0x234B68AC2E35ED5A(*uParam0, 14))
		{
			unk_0x961F6202C2192265();
			unk_0xC664C0067EEAB8D1(uParam0, 14);
		}
		func_227();
		func_248(uParam0);
		func_299(uParam0);
		func_247(uParam0);
		func_269();
		func_252(uParam0);
		func_270(uParam0);
		func_226(uParam0);
		func_241(uParam0);
		unk_0x7D394B326546E281();
		if (bParam2)
		{
			if (unk_0x419E13582192CFEA(uParam0->f_34))
			{
				unk_0x795957CD3A0042C8(&(uParam0->f_34));
			}
			if (unk_0x419E13582192CFEA(uParam0->f_35))
			{
				unk_0x0F3BD19FF11738D3(&(uParam0->f_35));
			}
		}
		if (unk_0x419E13582192CFEA(uParam0->f_36))
		{
			unk_0xC606AE2A3209945E(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_411(0);
		}
		func_224();
		func_217();
		func_253(0, 1, 1, 0, 0, 0, 0);
		unk_0x2CA971FF57ACA369(0, -1);
		unk_0x4F62815699141072(1);
		if (unk_0x02BFF15CAA701972())
		{
			if (unk_0x2D61488C347F8402())
			{
				unk_0x2CB73B1E6C06410D(0, 1);
			}
		}
		if (unk_0x234B68AC2E35ED5A(*uParam0, 21))
		{
			unk_0xFB8A6909539A30B1("FM_INTRO_DRIVE_END");
			unk_0xC664C0067EEAB8D1(uParam0, 21);
		}
		unk_0x36C0D9757EDAA8CC(0);
		func_365(1);
		if (unk_0x234B68AC2E35ED5A(*uParam0, 26))
		{
			func_357(1, 0);
			unk_0xC664C0067EEAB8D1(uParam0, 26);
		}
		Global_2441237.f_3865 = 0;
		if (!unk_0xF471787D45ADC2C1())
		{
			unk_0x7AEC398C83EB45E9(0);
		}
		unk_0x53DE9210BC084E9F(1);
		if (bParam1)
		{
		}
		func_194(0);
		func_206(1);
		Global_2544210.f_1917 = 0;
		Global_2544210.f_1916 = 0;
		if (unk_0xB30CD10E2CD1B67D("MP_INTRO_RACE_SCENE"))
		{
			unk_0xC0BBE340BE2AA02D("MP_INTRO_RACE_SCENE");
		}
		if (unk_0xB30CD10E2CD1B67D("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0xC0BBE340BE2AA02D("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_320(14, 1);
		unk_0x20D884FB6567BAD5(5);
		unk_0xE7B9CAAF8DF31886("CONTRAILS", 0);
		unk_0x7B6B41ECBE4B733F(5, "FMINTRO");
		unk_0x7B6B41ECBE4B733F(6, "FMINTRO");
		unk_0x7B6B41ECBE4B733F(7, "FMINTRO");
		unk_0xF9135F131C423364("mp_intro_seq@");
		unk_0xF9135F131C423364("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xF9135F131C423364("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xF9135F131C423364("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x575B7C28D81C0B4D(unk_0xBE979A383F439BD0()))
		{
			unk_0xDD205B87CDFD0C1B(unk_0xBE979A383F439BD0(), 0.7f);
		}
		unk_0x3BBBF463E1825A03(0);
		unk_0xDF23DCD7A3E1B7A5(0);
		unk_0x3A13FD2813C8251F(0, 1065353216);
		if (unk_0x02BFF15CAA701972())
		{
			unk_0x58905C04D9E1CE4C();
			unk_0x06D69059DB3DA20C(1);
		}
		unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
		if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		unk_0x191DDA30577F440A(uParam0, 0);
	}
}

void func_217()
{
	func_218(0);
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		func_223();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_82(0))
		{
			func_219(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_219(int iParam0)
{
	if (func_222())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_221())
		{
			func_220(1, 1);
		}
		else
		{
			func_220(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_166())
	{
		Global_19798.f_1 = 3;
	}
}

void func_220(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_221()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_222()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_223()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_224()
{
	if (!Global_1312593)
	{
		return;
	}
	func_225();
}

void func_225()
{
	Global_1312593 = 0;
	StringCopy(&(Global_1312593.f_1), "", 32);
	Global_1312593.f_9 = 0;
}

void func_226(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_232(uParam0, iVar0);
		iVar0++;
	}
}

void func_227()
{
	unk_0x58D4F7C6214FFC91(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x58D4F7C6214FFC91(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_228(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_230(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_229(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x16E516CA9C88FF48(iVar0);
	unk_0x16E516CA9C88FF48(iVar1);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0) && unk_0xA9C0BBFB9CBB66F1(iVar1))
	{
		if (!unk_0x419E13582192CFEA(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x170478CC84C8AE2F(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0xCB4407649EE68051(uParam0->f_34, 1);
			unk_0x32051C1124051B7B(uParam0->f_34, 0);
			unk_0x3A653D4F5FA4B665(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0xC55DA02D18D77322(uParam0->f_34, 2);
		}
		else if (!unk_0x419E13582192CFEA(uParam0->f_35))
		{
			if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0xBE91B077ADADE97F(uParam0->f_35, 1);
				unk_0x8F160110753EB17B(uParam0->f_34, 1);
				unk_0x8F160110753EB17B(uParam0->f_35, 1);
				unk_0x2271ED1E65FB75EE(uParam0->f_35, unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()));
				unk_0x3A653D4F5FA4B665(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x419E13582192CFEA(uParam0->f_34) || !unk_0x419E13582192CFEA(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_232(var uParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(uParam0->f_58[iParam1]))
	{
		unk_0x5420D0D520CF44D0(&(uParam0->f_58[iParam1]));
	}
	if (unk_0x419E13582192CFEA(uParam0->f_74[iParam1]))
	{
		unk_0xC606AE2A3209945E(&(uParam0->f_74[iParam1]));
	}
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_143), 22);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_143), 22);
	}
}

bool func_234(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_143, 22);
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 4);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 4);
	}
}

int func_236(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x324E9C77BDF774EA();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x5505579F3F8D58CB());
	}
	return (uParam0->f_28 + unk_0x324E9C77BDF774EA());
}

void func_237(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_238(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x50B76EE36FBE865F(uParam0);
			unk_0x069557E67CC67C29(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0xAB0BB1BDD76B67DC(uParam0))
		{
			unk_0x069557E67CC67C29(uParam0, iParam1, sParam2, 1);
			unk_0x9ED081CA20FD427B(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0xC4989A5366317AA4(iParam1, sParam2);
			if (unk_0x62CB2C6F27D37CA6(uParam0) != iVar0)
			{
				unk_0x069557E67CC67C29(uParam0, iParam1, sParam2, 1);
				unk_0x9ED081CA20FD427B(uParam0, 1);
			}
		}
		unk_0x2978CEBD6EE3E821(uParam0, (fParam3 - unk_0x730551DCA699D643(uParam0)));
	}
}

void func_239(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_240(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0x15173FB88ABC94F9("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x62A5B93F8270CC83(iVar1))
		{
			func_9(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_37[iVar0]))
		{
			unk_0xC606AE2A3209945E(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x824F744352C8BC82(joaat("g_m_y_mexgoon_02"));
	unk_0xF9135F131C423364("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xF9135F131C423364("amb@world_human_hang_out_street@male_a@base");
}

int func_242(var uParam0)
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0x16E516CA9C88FF48(joaat("g_m_y_mexgoon_02"));
		unk_0x068BDE31F7D112BB("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x068BDE31F7D112BB("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0xA9C0BBFB9CBB66F1(joaat("g_m_y_mexgoon_02")) && unk_0x0EC2B29D4172D225("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x0EC2B29D4172D225("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0x419E13582192CFEA(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0x0FDCFECB2EF2BC1C(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x8F160110753EB17B(uParam0->f_37[iVar0], 1);
					unk_0xBE91B077ADADE97F(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0x78CDDD1E6367978D(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(uParam0->f_37[iVar0], 76.8852f);
							unk_0xD82D50E4AC0D46B9(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA2C015B68CE01357(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0x78CDDD1E6367978D(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(uParam0->f_37[iVar0], 87.5786f);
							unk_0xD82D50E4AC0D46B9(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0xA2C015B68CE01357(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x9E9699379D42C23B(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x824F744352C8BC82(joaat("g_m_y_mexgoon_02"));
		unk_0xF9135F131C423364("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xF9135F131C423364("amb@world_human_hang_out_street@male_a@base");
		unk_0x191DDA30577F440A(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_243(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 1;
	Global_22118 = 0;
	Global_22122 = 0;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_162(sParam2, iParam4, 0);
}

void func_244(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!unk_0xECEC7528A52B4EE8(uParam0->f_98[iVar0]) && unk_0xBFCE58B2B3249999(uParam0->f_92[iVar0], 0))
			{
				unk_0xA2C015B68CE01357(uParam0->f_92[iVar0], false);
				unk_0x49CB177958B472A8(uParam0->f_92[iVar0], 10f);
				unk_0xE946751408DFA71B(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x6471F4759775FCA4(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x191DDA30577F440A(uParam0, 25);
	}
}

int func_245(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar3 = joaat("shamal");
	unk_0x16E516CA9C88FF48(iVar3);
	unk_0x16E516CA9C88FF48(func_246());
	if (unk_0xA9C0BBFB9CBB66F1(iVar3))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar2 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar2 = 239.9712f;
						break;
				}
				uParam0->f_92[iVar0] = unk_0x170478CC84C8AE2F(iVar3, Var1, fVar2, 0, 0, 0);
				unk_0x47D0DDD8833C5E5F(uParam0->f_92[iVar0], 1084227584);
				unk_0xA2C015B68CE01357(uParam0->f_92[iVar0], true);
				unk_0xC55DA02D18D77322(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0x419E13582192CFEA(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0xA9C0BBFB9CBB66F1(func_246()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_98[iVar0]))
			{
				if (unk_0x419E13582192CFEA(uParam0->f_92[iVar0]))
				{
					if (unk_0xBFCE58B2B3249999(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x42F3C85A00B4FC7B(uParam0->f_92[iVar0], 4, func_246(), -1, 0, false);
						unk_0xBE91B077ADADE97F(uParam0->f_98[iVar0], 1);
						unk_0x89E171705EA920DA(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x824F744352C8BC82(iVar3);
	unk_0x824F744352C8BC82(func_246());
	unk_0x191DDA30577F440A(&(uParam0->f_3), 11);
	return 1;
}

int func_246()
{
	return unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269());
}

void func_247(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_92[iVar0]))
		{
			unk_0x5420D0D520CF44D0(&(uParam0->f_92[iVar0]));
		}
		if (unk_0x419E13582192CFEA(uParam0->f_98[iVar0]))
		{
			unk_0xC606AE2A3209945E(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x824F744352C8BC82(joaat("shamal"));
	unk_0x824F744352C8BC82(func_246());
}

void func_248(var uParam0)
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 2))
	{
		unk_0x824F744352C8BC82(joaat("p_cs_mp_jet_01_s"));
		if (unk_0x419E13582192CFEA(uParam0->f_33))
		{
			unk_0x04F4D55F2C0C756D(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x176066ACB1B41C48(uParam0->f_120))
			{
				unk_0x3FAC20807B650B4F(uParam0->f_120, 0);
			}
			if (unk_0x176066ACB1B41C48(uParam0->f_121))
			{
				unk_0x3FAC20807B650B4F(uParam0->f_121, 0);
			}
			if (unk_0xB4C12EFC62A8536A())
			{
				unk_0x4D2B6680250EFCC8();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0x419E13582192CFEA(uParam0->f_104[iVar0]))
			{
				unk_0xC606AE2A3209945E(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0xC664C0067EEAB8D1(&(uParam0->f_3), 2);
	}
}

int func_249(var uParam0)
{
	if (func_263(uParam0))
	{
		unk_0x068BDE31F7D112BB("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x068BDE31F7D112BB("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x0EC2B29D4172D225("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x0EC2B29D4172D225("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x068BDE31F7D112BB("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x068BDE31F7D112BB("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x0EC2B29D4172D225("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x0EC2B29D4172D225("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 10))
	{
		unk_0x16E516CA9C88FF48(iVar0);
		if (unk_0xA9C0BBFB9CBB66F1(iVar0))
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_36))
			{
				uParam0->f_36 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0xBE91B077ADADE97F(uParam0->f_36, 1);
				unk_0x8F160110753EB17B(uParam0->f_36, 1);
				unk_0x4603196EEEA2355C(uParam0->f_36, false, 0);
				unk_0x2271ED1E65FB75EE(uParam0->f_36, unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()));
				unk_0x3A653D4F5FA4B665(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_412(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0x419E13582192CFEA(uParam0->f_36))
		{
			return 0;
		}
		unk_0x824F744352C8BC82(iVar0);
		unk_0x191DDA30577F440A(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_251(var uParam0, float fParam1)
{
	func_238(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_252(var uParam0)
{
	int iVar0;
	
	unk_0x824F744352C8BC82(func_266());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_267(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0x419E13582192CFEA(uParam0->f_91))
	{
		unk_0xC606AE2A3209945E(&(uParam0->f_91));
	}
}

void func_253(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_260(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_166())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_259(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_260(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_259(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_257(unk_0x1146A9AE09CE2B14())) && !func_255(unk_0x1146A9AE09CE2B14(), 0)) && !func_254()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_257(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_254()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_255(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_256(-1, 0) == 8;
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

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_257(int iParam0)
{
	if (func_255(iParam0, 0))
	{
		return 1;
	}
	if (func_258())
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

bool func_258()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && uParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 13);
	}
}

void func_261(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_104[iVar0], 0))
		{
			unk_0x9C4430B10B361917(uParam0->f_104[iVar0]);
			unk_0xF2CEEA627AD5A24B(uParam0->f_104[iVar0], func_262(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_263(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_264();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264()
{
	return func_265(unk_0x1146A9AE09CE2B14());
}

int func_265(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	return joaat("s_m_y_xmech_02");
}

void func_267(var uParam0, int iParam1)
{
	unk_0x824F744352C8BC82(func_268(iParam1));
	if (unk_0x419E13582192CFEA(uParam0->f_49[iParam1]))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x515AFA9E2496A34D(uParam0->f_49[iParam1]);
		unk_0x5420D0D520CF44D0(&(uParam0->f_49[iParam1]));
	}
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_269()
{
	Global_1315711 = 0;
	if (unk_0xDAE4BC89A198A6AF(Global_1315709))
	{
		unk_0x704F8697BB515627(Global_1315709, "SET_BIG_LOGO_VISIBLE");
		unk_0x9E3D03981E2E9AD9(1);
		unk_0x9D7453DF8B7E9E0B(0);
		unk_0x392841D58D2EED1D();
		unk_0x3D9BC07C93913E04(&Global_1315709);
	}
}

void func_270(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0x24DBE20C830AE9AB(&uVar0);
		}
		if (unk_0x419E13582192CFEA(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0x24DBE20C830AE9AB(&uVar0);
		}
		iVar1++;
	}
	unk_0x824F744352C8BC82(joaat("cheetah"));
	unk_0x824F744352C8BC82(joaat("monroe"));
	unk_0x824F744352C8BC82(joaat("entityxf"));
	unk_0x824F744352C8BC82(joaat("feltzer2"));
	unk_0x7B6B41ECBE4B733F(100, "FM_Intro_uber");
	unk_0x7B6B41ECBE4B733F(101, "FM_Intro_uber");
	unk_0x7B6B41ECBE4B733F(102, "FM_Intro_uber");
	unk_0x7B6B41ECBE4B733F(103, "FM_Intro_uber");
	unk_0x7B6B41ECBE4B733F(104, "FM_Intro_uber");
	unk_0xF9135F131C423364("mp_intro_seq@");
}

void func_271(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_49[2]))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_49[2], 0))
		{
			unk_0xFCF2996A0E9DEDF6(uParam0->f_49[2]);
		}
	}
	if (unk_0x419E13582192CFEA(uParam0->f_49[4]))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_49[4], 0))
		{
			unk_0xFCF2996A0E9DEDF6(uParam0->f_49[4]);
		}
	}
}

void func_272(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_49[2]))
	{
		if (unk_0xBFCE58B2B3249999(uParam0->f_49[2], 0))
		{
			unk_0x65FFB0A9D15E084E(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_273()
{
	if (unk_0xE2ACCE12A4E50947())
	{
		return 0;
	}
	if (!unk_0xDAE4BC89A198A6AF(Global_1315709))
	{
		Global_1315709 = unk_0x42AA2CCF0B61DCD8("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_274(var uParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param5)
{
	if (unk_0x419E13582192CFEA(uParam3))
	{
		if (unk_0xE50EB54E0F21BED0(iParam3, 0))
		{
		}
		if (!unk_0x0E8572B08CEB6A11(uParam0->f_8))
		{
			uParam0->f_8 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0xD955F1CC0BCABC78(Param4, Param5, 2);
		unk_0xADAE2D0345EF09F9(uParam0->f_9, iParam3, 0);
		unk_0x47554D1FFAB68B45(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x6FA8221C9D2ECB46(uParam0->f_8, 1);
		unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 1, 0);
	}
}

void func_275(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 3))
	{
		unk_0x3E30A427442AEB24("CONTRAILS");
		if (func_263(uParam0))
		{
			unk_0xFA3CD2A976F07F94("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xFA3CD2A976F07F94("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xE807694ABD40478F())
		{
			if (uParam0->f_295)
			{
				if (func_263(uParam0))
				{
					unk_0xC95426A654AFD89C("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0xC95426A654AFD89C("MP_Male_Character", 0, 1);
				}
			}
			func_276();
		}
		if (unk_0x3E2C7717C449F4CB())
		{
			unk_0x191DDA30577F440A(&(uParam0->f_3), 3);
		}
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0xC95426A654AFD89C(func_262(iVar0), 0, 1);
		iVar0++;
	}
}

int func_277(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 2))
	{
		unk_0x16E516CA9C88FF48(joaat("p_cs_mp_jet_01_s"));
		unk_0x16E516CA9C88FF48(joaat("mp_m_freemode_01"));
		unk_0x16E516CA9C88FF48(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x7C0019321F1FC821();
		}
		if (((unk_0xA9C0BBFB9CBB66F1(joaat("p_cs_mp_jet_01_s")) && unk_0xA9C0BBFB9CBB66F1(joaat("mp_m_freemode_01"))) && unk_0xA9C0BBFB9CBB66F1(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0xB4C12EFC62A8536A()))
		{
			uParam0->f_33 = unk_0x795434E153F90E41(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0x83E421E5A4A2A512(uParam0->f_33, 3000);
			unk_0x8B58E7AC53EED9F1(uParam0->f_33, 0);
			unk_0x4603196EEEA2355C(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x48558536A19BA88A("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x48558536A19BA88A("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_281(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_280(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_279(uParam0, iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(unk_0xC502CD39B4994F3A(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x6120C3E46EE41B09(unk_0xD56332194D622ECE(unk_0xC502CD39B4994F3A(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0x9C4430B10B361917(uParam0->f_104[iVar0]);
				}
				else
				{
					func_278(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x824F744352C8BC82(joaat("p_cs_mp_jet_01_s"));
			unk_0x191DDA30577F440A(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_278(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0x4170FE884DF7426D(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 0);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 1);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 2);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 3);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 4);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 5);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 6);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 7);
			unk_0x7EDC239EB46006D5(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_279(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(unk_0xC502CD39B4994F3A(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0, int iParam1)
{
	if (func_279(uParam0, iParam1))
	{
		return func_265(unk_0xC502CD39B4994F3A(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (unk_0x1146A9AE09CE2B14() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_282(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_283(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iVar0);
	unk_0x16E516CA9C88FF48(iVar1);
	unk_0x498685EB9132AF88(5, "FMINTRO");
	unk_0x498685EB9132AF88(6, "FMINTRO");
	unk_0x498685EB9132AF88(7, "FMINTRO");
	unk_0x068BDE31F7D112BB("mp_intro_seq@");
	if (((((unk_0xA9C0BBFB9CBB66F1(iVar0) && unk_0xA9C0BBFB9CBB66F1(iVar1)) && unk_0x9CF7186A344D26A9(5, "FMINTRO")) && unk_0x9CF7186A344D26A9(6, "FMINTRO")) && unk_0x9CF7186A344D26A9(7, "FMINTRO")) && unk_0x0EC2B29D4172D225("mp_intro_seq@"))
	{
		if (!unk_0x419E13582192CFEA(uParam0->f_34))
		{
			unk_0x6AF7EE4DD9F8B944(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x170478CC84C8AE2F(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0xCB4407649EE68051(uParam0->f_34, 1);
			unk_0x32051C1124051B7B(uParam0->f_34, 0);
			unk_0x3A653D4F5FA4B665(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0x419E13582192CFEA(uParam0->f_35))
		{
			if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0x95CA4545D0C61309(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0xBE91B077ADADE97F(uParam0->f_35, 1);
				unk_0x8F160110753EB17B(uParam0->f_34, 1);
				unk_0x8F160110753EB17B(uParam0->f_35, 1);
				unk_0x2271ED1E65FB75EE(uParam0->f_35, unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()));
				unk_0x3A653D4F5FA4B665(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0x419E13582192CFEA(uParam0->f_34) || !unk_0x419E13582192CFEA(uParam0->f_35))
	{
		return 0;
	}
	unk_0x824F744352C8BC82(iVar0);
	unk_0x824F744352C8BC82(iVar1);
	unk_0x191DDA30577F440A(&(uParam0->f_3), 9);
	return 1;
}

void func_284(var uParam0)
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 0))
	{
		func_294();
		func_292();
		if (func_286(uParam0))
		{
			if (func_285(uParam0))
			{
				if (!unk_0x0E8572B08CEB6A11(uParam0->f_7))
				{
					uParam0->f_7 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xFD866EC0672D68D5(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x824F744352C8BC82(func_268(iVar0));
					iVar0++;
				}
				unk_0x824F744352C8BC82(func_266());
				unk_0x191DDA30577F440A(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_285(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266();
	if (!unk_0x419E13582192CFEA(uParam0->f_91))
	{
		if (unk_0x419E13582192CFEA(uParam0->f_49[2]))
		{
			if (unk_0x62A5B93F8270CC83(iVar0))
			{
				if (unk_0xA9C0BBFB9CBB66F1(iVar0))
				{
					if (unk_0x0EC2B29D4172D225("MP_INTRO_SEQ@"))
					{
						if (!unk_0xE50EB54E0F21BED0(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0xD955F1CC0BCABC78(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xADAE2D0345EF09F9(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0x0FDCFECB2EF2BC1C(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0xBE91B077ADADE97F(uParam0->f_91, 1);
							unk_0xAD844C8843FC405C(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xB9314D20143CEED3(uParam0->f_10, 1);
							unk_0xA2C015B68CE01357(uParam0->f_91, true);
							unk_0x3CBE9F07524C242D(uParam0->f_91, false, 0);
							unk_0x04BC2951833EF44D(uParam0->f_91, joaat("gadget_parachute"));
							unk_0x4170FE884DF7426D(uParam0->f_91, 0, 1, 1, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 1, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 2, 0, 2, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 3, 0, 2, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 4, 1, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 5, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 6, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 7, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 8, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 9, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 10, 0, 0, 0);
							unk_0x4170FE884DF7426D(uParam0->f_91, 11, 0, 0, 0);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 0);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 1);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 2);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 3);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 4);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 5);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 6);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 7);
							unk_0x7EDC239EB46006D5(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0x419E13582192CFEA(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_286(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 31))
	{
		func_294();
		iVar3 = 0;
		while (iVar3 < 8)
		{
			func_291(iVar3, &Var1, &fVar2);
			if (!func_290(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0x419E13582192CFEA(uParam0->f_49[iVar3]))
				{
					iVar0 = func_268(iVar3);
					if (unk_0x62A5B93F8270CC83(iVar0))
					{
						if (unk_0xA9C0BBFB9CBB66F1(iVar0))
						{
							uParam0->f_49[iVar3] = unk_0x170478CC84C8AE2F(iVar0, Var1, fVar2, 0, 0, 0);
							unk_0x8B58E7AC53EED9F1(uParam0->f_49[iVar3], 1);
							unk_0x4544B07E5BF6339C(uParam0->f_49[iVar3], 0f);
							unk_0xDC252CD3A5DA5F65(uParam0->f_49[iVar3], 0);
							if (iVar3 == 2)
							{
								unk_0x94F15E506D091111(uParam0->f_49[iVar3], 4, 0, 1);
								unk_0x65FFB0A9D15E084E(uParam0->f_49[iVar3], 4, 0, 1f);
							}
							func_289(uParam0, iVar3);
							func_288(uParam0, iVar3);
							unk_0x824F744352C8BC82(iVar0);
						}
					}
				}
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 8)
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_49[iVar3]))
			{
				return 0;
			}
			if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, iVar3))
			{
				if (func_287(uParam0, iVar3))
				{
					unk_0x191DDA30577F440A(&(uParam0->f_2), iVar3);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iVar3], 0))
			{
				if (!unk_0x1D2EEB05831CD818(uParam0->f_49[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		unk_0x191DDA30577F440A(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_287(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xBFCE58B2B3249999(uParam0->f_49[iParam1], 0))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x6895CB0D4F2E7CDC(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0xC6A2E001AEBB5B7F(uParam0->f_49[iParam1], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_288(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 0, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 1, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 2, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 3, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 4, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 5, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 7, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 10, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 0, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 1, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 2, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 4, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 7, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 0, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 1, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 2, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 3, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 4, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 6, 2);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 10, 3);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x7D867CDA26E248C7(uParam0->f_49[iParam1], 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 1, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 4, 1);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 8, 0);
			unk_0x20134BB1D330FA8F(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_289(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 83, 134);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 0, 0);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 49, 0);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 0, 0);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 43, 5);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 3, 3);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xC612552622E74D36(uParam0->f_49[iParam1], 35, 0);
			unk_0xA2FEFE3BBCD9FB23(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_290(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_291(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_292()
{
	unk_0x16E516CA9C88FF48(func_266());
	unk_0x068BDE31F7D112BB(func_293());
}

char* func_293()
{
	return "MP_INTRO_SEQ@";
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0x16E516CA9C88FF48(func_268(iVar0));
		iVar0++;
	}
}

void func_295(var uParam0, float fParam1, float fParam2)
{
	func_238(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_238(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_238(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_296(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_297(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_297(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_297(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_297(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_297(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_297(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_297(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_297(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_297(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_297(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_297(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_297(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_297(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_297(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_297(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_297(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_297(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_297(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_297(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_297(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_297(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_297(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_297(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_297(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_297(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_297(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_297(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_297(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_297(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_297(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_297(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_297(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_297(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_297(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_297(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_297(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_297(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_297(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_297(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_297(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_297(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_297(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_297(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_297(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_297(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_297(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_297(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_297(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_297(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_297(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_297(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_297(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_297(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_297(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_297(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_297(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_297(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_297(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_297(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_297(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_297(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_297(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_297(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_297(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_297(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_297(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_297(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_297(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_297(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_297(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_297(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_297(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_297(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_297(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x234B68AC2E35ED5A(uVar1, iVar0))
		{
			func_212(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_297(var uParam0, int iParam1, struct<3> Param2, float fParam3, var uParam4, bool bParam5)
{
	if (unk_0xBFCE58B2B3249999(uParam0->f_58[iParam1], 0) && !unk_0xECEC7528A52B4EE8(uParam0->f_74[iParam1]))
	{
		unk_0xA2C015B68CE01357(uParam0->f_58[iParam1], false);
		unk_0x3CBE9F07524C242D(uParam0->f_58[iParam1], true, 0);
		unk_0x78CDDD1E6367978D(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(uParam0->f_58[iParam1], fParam3);
		unk_0x47D0DDD8833C5E5F(uParam0->f_58[iParam1], 1084227584);
		unk_0x037561EBFB8F7D13(uParam0->f_58[iParam1]);
		if (bParam5)
		{
			unk_0x7B5530AB21BFC748(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x49CB177958B472A8(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0x7B5530AB21BFC748(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x49CB177958B472A8(uParam0->f_58[iParam1], 10f);
		}
		unk_0x504B26425DFF773C(uParam0->f_74[iParam1], 1);
		unk_0x4603196EEEA2355C(uParam0->f_58[iParam1], true, 0);
		unk_0x4603196EEEA2355C(uParam0->f_74[iParam1], true, 0);
		unk_0x191DDA30577F440A(uParam4, iParam1);
	}
}

void func_298(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, int iParam6)
{
	if (!unk_0x0E8572B08CEB6A11(uParam0->f_8))
	{
		uParam0->f_8 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0xD955F1CC0BCABC78(Param3, Param4, 2);
	unk_0x47554D1FFAB68B45(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0xE9F198943372703F(uParam0->f_9, fParam5);
	unk_0x3943912232B2A7BF(uParam0->f_9, iParam6);
	unk_0x6FA8221C9D2ECB46(uParam0->f_8, 1);
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 1, 0);
}

void func_299(var uParam0)
{
	unk_0x824F744352C8BC82(joaat("frogger"));
	unk_0x7B6B41ECBE4B733F(8, "FMIntro");
	if (unk_0x419E13582192CFEA(uParam0->f_48))
	{
		unk_0x5420D0D520CF44D0(&(uParam0->f_48));
	}
}

int func_300(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_302();
		if (!unk_0x419E13582192CFEA(uParam0->f_92[0]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x170478CC84C8AE2F(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0x32051C1124051B7B(uParam0->f_92[0], 0);
				unk_0xED4E91A1FC7ABBF6(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x419E13582192CFEA(uParam0->f_92[1]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x170478CC84C8AE2F(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0x32051C1124051B7B(uParam0->f_92[1], 0);
				unk_0x79C3AEC4C7C91A54(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x473DA067A7AE5435(uParam0->f_92[1], 8);
				unk_0xED4E91A1FC7ABBF6(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x419E13582192CFEA(uParam0->f_92[2]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x170478CC84C8AE2F(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0x32051C1124051B7B(uParam0->f_92[2], 0);
				unk_0x79C3AEC4C7C91A54(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x473DA067A7AE5435(uParam0->f_92[2], 2);
				unk_0xED4E91A1FC7ABBF6(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x419E13582192CFEA(uParam0->f_92[3]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x170478CC84C8AE2F(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0x32051C1124051B7B(uParam0->f_92[3], 0);
				unk_0x79C3AEC4C7C91A54(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x473DA067A7AE5435(uParam0->f_92[3], 15);
				unk_0xED4E91A1FC7ABBF6(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0x419E13582192CFEA(uParam0->f_92[4]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x170478CC84C8AE2F(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0x32051C1124051B7B(uParam0->f_92[4], 0);
				unk_0x79C3AEC4C7C91A54(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xC612552622E74D36(uParam0->f_92[4], 0, 0);
				unk_0xA2FEFE3BBCD9FB23(uParam0->f_92[4], 0, 156);
				unk_0x7D867CDA26E248C7(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xBFCE58B2B3249999(uParam0->f_92[4], 0))
		{
			if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 1))
			{
				if (unk_0xCF1FE5DEA3E2E135(uParam0->f_92[4]) > 0)
				{
					unk_0xC6A2E001AEBB5B7F(uParam0->f_92[4], 22, 1);
					unk_0xED4E91A1FC7ABBF6(uParam0->f_92[4], 0);
					unk_0x191DDA30577F440A(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0xA9C0BBFB9CBB66F1(func_246()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0x419E13582192CFEA(uParam0->f_98[iVar1]))
				{
					if (unk_0x419E13582192CFEA(uParam0->f_92[iVar1]))
					{
						if (unk_0xBFCE58B2B3249999(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x42F3C85A00B4FC7B(uParam0->f_92[iVar1], 4, func_246(), -1, 0, false);
							unk_0xBE91B077ADADE97F(uParam0->f_98[iVar1], 1);
							unk_0x89E171705EA920DA(uParam0->f_92[iVar1], 1, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			unk_0x824F744352C8BC82(joaat("cheetah"));
			unk_0x824F744352C8BC82(joaat("monroe"));
			unk_0x824F744352C8BC82(joaat("entityxf"));
			unk_0x824F744352C8BC82(joaat("feltzer2"));
			unk_0x191DDA30577F440A(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_301()
{
	func_302();
	if (unk_0xA9C0BBFB9CBB66F1(func_246()))
	{
		if (unk_0xA9C0BBFB9CBB66F1(joaat("cheetah")))
		{
			if (unk_0xA9C0BBFB9CBB66F1(joaat("monroe")))
			{
				if (unk_0xA9C0BBFB9CBB66F1(joaat("entityxf")))
				{
					if (unk_0xA9C0BBFB9CBB66F1(joaat("feltzer2")))
					{
						if (unk_0x9CF7186A344D26A9(100, "FM_Intro_uber"))
						{
							if (unk_0x9CF7186A344D26A9(101, "FM_Intro_uber"))
							{
								if (unk_0x9CF7186A344D26A9(102, "FM_Intro_uber"))
								{
									if (unk_0x9CF7186A344D26A9(103, "FM_Intro_uber"))
									{
										if (unk_0x9CF7186A344D26A9(104, "FM_Intro_uber"))
										{
											if (unk_0x0EC2B29D4172D225("mp_intro_seq@"))
											{
												return 1;
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
	return 0;
}

void func_302()
{
	unk_0x16E516CA9C88FF48(joaat("cheetah"));
	unk_0x16E516CA9C88FF48(joaat("monroe"));
	unk_0x16E516CA9C88FF48(joaat("entityxf"));
	unk_0x16E516CA9C88FF48(joaat("feltzer2"));
	unk_0x16E516CA9C88FF48(func_246());
	unk_0x498685EB9132AF88(100, "FM_Intro_uber");
	unk_0x498685EB9132AF88(101, "FM_Intro_uber");
	unk_0x498685EB9132AF88(102, "FM_Intro_uber");
	unk_0x498685EB9132AF88(103, "FM_Intro_uber");
	unk_0x498685EB9132AF88(104, "FM_Intro_uber");
	unk_0x068BDE31F7D112BB("mp_intro_seq@");
}

int func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0x16E516CA9C88FF48(joaat("asterope"));
		unk_0x16E516CA9C88FF48(joaat("sentinel"));
		unk_0x16E516CA9C88FF48(func_246());
		if ((unk_0xA9C0BBFB9CBB66F1(joaat("asterope")) && unk_0xA9C0BBFB9CBB66F1(joaat("sentinel"))) && unk_0xA9C0BBFB9CBB66F1(func_246()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0x419E13582192CFEA(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_213(iVar0, &Var2, &fVar3);
					uParam0->f_58[iVar0] = unk_0x170478CC84C8AE2F(iVar1, Var2, fVar3, 0, 0, 0);
					unk_0x473DA067A7AE5435(uParam0->f_58[iVar0], iVar0);
					unk_0x8F160110753EB17B(uParam0->f_58[iVar0], 1);
					unk_0xC55DA02D18D77322(uParam0->f_58[iVar0], 2);
					unk_0xA2C015B68CE01357(uParam0->f_58[iVar0], true);
				}
				if (unk_0x419E13582192CFEA(uParam0->f_58[iVar0]))
				{
					if (!unk_0x419E13582192CFEA(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x42F3C85A00B4FC7B(uParam0->f_58[iVar0], 4, func_246(), -1, 0, false);
						unk_0x8F160110753EB17B(uParam0->f_74[iVar0], 1);
						unk_0xBE91B077ADADE97F(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0x419E13582192CFEA(uParam0->f_58[iVar0]) || !unk_0x419E13582192CFEA(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x824F744352C8BC82(joaat("asterope"));
		unk_0x824F744352C8BC82(joaat("sentinel"));
		unk_0x191DDA30577F440A(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_304(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_228(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0xDFB7BFA6482FEE1E()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_236(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0x16E516CA9C88FF48(iVar0);
	unk_0x498685EB9132AF88(8, "FMIntro");
	if (unk_0xA9C0BBFB9CBB66F1(iVar0) && unk_0x9CF7186A344D26A9(8, "FMIntro"))
	{
		if (!unk_0x419E13582192CFEA(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x170478CC84C8AE2F(iVar0, unk_0x3BCD5137CE6A77E2(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x069557E67CC67C29(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x2978CEBD6EE3E821(uParam0->f_48, 5000f);
			unk_0xEACCD2237F51AEFD(uParam0->f_48);
			unk_0x4603196EEEA2355C(uParam0->f_48, false, 0);
			unk_0x824F744352C8BC82(iVar0);
		}
	}
	if (!unk_0x419E13582192CFEA(uParam0->f_48))
	{
		return 0;
	}
	unk_0x191DDA30577F440A(&(uParam0->f_3), 8);
	return 1;
}

void func_306(var uParam0, int iParam1)
{
	if (func_304(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0xDFB7BFA6482FEE1E() - func_228(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_307(var uParam0)
{
	uParam0->f_13 = unk_0xDFB7BFA6482FEE1E();
}

Vector3 func_308(struct<3> Param0)
{
	return (-sin(Param0.f_2) * cos(Param0.x)), (cos(Param0.f_2) * cos(Param0.x)), sin(Param0.x);
}

int func_309()
{
	return Global_1312836;
}

void func_310()
{
	unk_0x6FF312B4049B4865(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x6FF312B4049B4865(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_311()
{
	func_219(0);
	func_218(1);
}

void func_312(bool bParam0, int iParam1, bool bParam2)
{
	func_316();
	func_314(1);
	unk_0x66AE54CE92457FEE(1);
	unk_0x1036762BD3781C84();
	func_253(1, 1, 1, 0, 0, 0, bParam2);
	func_313();
	func_205(12, 1, -1);
	func_206(0);
	unk_0x2CA971FF57ACA369(1, -1);
	unk_0xDD7C2F9844E745B1(0);
	unk_0x4200138CBB376D4D(0);
	func_314(1);
	func_260(1);
	Global_2441237.f_3865 = 1;
	if (bParam0)
	{
		if (!unk_0x2D61488C347F8402())
		{
			unk_0x2CB73B1E6C06410D(1, iParam1);
		}
	}
}

void func_313()
{
	func_206(0);
	func_205(4, 1, -1);
	func_205(6, 1, -1);
	func_205(7, 1, -1);
	func_205(3, 1, -1);
	func_205(1, 1, -1);
	func_205(2, 1, -1);
	func_205(11, 1, -1);
	func_205(13, 1, -1);
	func_205(14, 1, -1);
	func_205(16, 1, -1);
}

void func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110945)
	{
		unk_0x57A7F754B6B8906E(iVar0, iParam0);
		func_315(iVar0);
		iVar0++;
	}
}

void func_315(int iParam0)
{
	Global_110945[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110945[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110945[iParam0 /*28*/].f_4), "", 64);
	Global_110945[iParam0 /*28*/].f_23 = 0;
	Global_110945[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110945[iParam0 /*28*/].f_27 = 0;
	Global_110945[iParam0 /*28*/].f_20 = 0;
	Global_110945[iParam0 /*28*/].f_22 = 0;
}

void func_316()
{
	Global_1312593 = 1;
	StringCopy(&(Global_1312593.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312593.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312593.f_1));
}

int func_317()
{
	if (unk_0x8B6A925F148E0E94())
	{
		func_319(0);
		unk_0x7DCCFB89D354AD2E();
		return 1;
	}
	if (func_318() == 3)
	{
		func_319(2);
		unk_0xE74545263B038AF8(250f);
	}
	if (unk_0x8BA8CB16F34DFECD() >= 250f)
	{
		unk_0xE74545263B038AF8(250f);
	}
	if (unk_0xF5AC0DFFFAA7BD9C() == 0)
	{
		unk_0xE74545263B038AF8(250f);
	}
	if (unk_0x8BA8CB16F34DFECD() <= 0f)
	{
		func_319(0);
		return 1;
	}
	return 0;
}

int func_318()
{
	return Global_1312485.f_19;
}

void func_319(int iParam0)
{
	if (Global_1312485.f_19 != iParam0)
	{
		Global_1312485.f_19 = iParam0;
	}
}

void func_320(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_324(iParam0, &iVar1);
	if (!unk_0xDA654EB115F9FF7D("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x4296541F2A4F9BF5(iVar1))
			{
				return;
			}
			if (unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == iVar1)
			{
				func_323(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x4296541F2A4F9BF5(iVar1))
			{
				return;
			}
			if (func_321(iParam0))
			{
				func_323(iParam0, 0);
			}
		}
		unk_0x9973C6A10108E1CC(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_321(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 != -1 && unk_0x234B68AC2E35ED5A(Global_37786[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_323(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_37786[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_37786[Var0.f_1]), Var0);
	}
}

var func_324(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_325(iParam0) };
	*iParam1 = unk_0xFA82BD1142427E0F(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_325(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_326(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_326(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_326(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_326(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_326(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_326(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_326(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049961[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_326(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_326(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_326(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_326(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_326(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_326(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_326(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_326(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_326(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_326(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_326(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_326(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_326(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_326(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_326(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_326(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_326(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_326(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_326(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_326(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_326(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_326(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_326(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_326(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_326(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_326(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_326(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_326(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_326(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_326(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_326(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
		case 214:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_326(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_327()
{
	return Global_2464663;
}

bool func_328()
{
	return Global_2463495;
}

void func_329(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_353(bParam0, 0);
	}
	func_351(0);
	func_330(66);
}

void func_330(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_309();
	if (Global_1312902)
	{
		sVar1 = func_350(iParam0);
		iVar2 = unk_0x15173FB88ABC94F9(sVar1);
		func_349(&Global_2465767, 1, 0);
		unk_0x972128702A73652B(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_331();
	}
	Global_1312836 = iParam0;
}

void func_331()
{
	if (Global_2463421)
	{
		if (func_333())
		{
			unk_0x8BA9BCDD56AA7115(0);
			func_332();
		}
	}
}

void func_332()
{
	if (Global_2463418)
	{
		if (!Global_2463417)
		{
			Global_2463417 = 1;
			Global_2463426 = unk_0xDFB7BFA6482FEE1E();
			Global_2463425 = 1;
		}
	}
}

int func_333()
{
	if (Global_2453903.f_6523 && Global_2463418)
	{
		if (func_337(0))
		{
			if (func_335() && !unk_0x8B6A925F148E0E94())
			{
				if (((Global_2453903.f_6545 == 122 || Global_2453903.f_6545 == 123) || Global_2453903.f_6545 == 124) || Global_2453903.f_6545 == 125)
				{
					return 1;
				}
				if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_71.f_2, 26))
				{
					return 1;
				}
				if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_71.f_2, 27))
				{
					return 1;
				}
				if (func_334())
				{
					return 1;
				}
				if (Global_1695763)
				{
					return 1;
				}
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 23))
				{
					if (!func_255(unk_0x1146A9AE09CE2B14(), 0) && !func_258())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_334()
{
	return Global_2453009.f_24;
}

int func_335()
{
	if (func_336() == 0)
	{
		return 1;
	}
	return 0;
}

int func_336()
{
	return Global_1312485.f_18;
}

int func_337(int iParam0)
{
	if (func_347(unk_0x1146A9AE09CE2B14()) && unk_0x234B68AC2E35ED5A(Global_1683970.f_4, 22))
	{
		return 0;
	}
	if (Global_1315714)
	{
		return 0;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if ((Global_2463419 && func_345()) || Global_2463419 == 0)
	{
		return 1;
	}
	if (Global_2453903.f_6545 == 123 && Global_2463422)
	{
		return 1;
	}
	if (Global_2463420)
	{
		if (Global_2453903.f_6545 == 122)
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 23))
	{
		if (!func_255(unk_0x1146A9AE09CE2B14(), 0) && !func_258())
		{
			return 1;
		}
	}
	if (Global_2463423)
	{
		if (iParam0 == 0)
		{
			if ((Global_2453903.f_6545 == 123 || (Global_2453903.f_6545 == 124 && func_343() == 1)) || Global_2453903.f_6545 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2453903.f_6523 || func_341(-1046478848)) && Global_2463424)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 23))
	{
		return 1;
	}
	if (func_338() || func_334())
	{
		return 1;
	}
	return 0;
}

bool func_338()
{
	return func_339(unk_0x1146A9AE09CE2B14());
}

bool func_339(int iParam0)
{
	return func_340(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_340(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

int func_341(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_342(unk_0x1146A9AE09CE2B14()) };
	if (Var0.f_2 < fParam0)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (!unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_342(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_343()
{
	return func_344(unk_0x1146A9AE09CE2B14());
}

var func_344(int iParam0)
{
	return unk_0xC844146213F10F48(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

bool func_345()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_346()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_2, 11);
}

int func_347(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_348(Global_2426865[iParam0 /*449*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
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

void func_349(var uParam0, bool bParam1, bool bParam2)
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

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_351(int iParam0)
{
	var uVar0;
	
	uVar0 = func_352();
	Global_1312835 = iParam0;
}

var func_352()
{
	return Global_1312835;
}

void func_353(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_355(&Global_22451, bParam1);
	unk_0x84FBE118966BBE44(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0xFF4C05C42C1C3C74();
			func_354(0);
			if (unk_0x419E13582192CFEA(Global_1315684))
			{
				if (unk_0x9984C023D4E57C2E(Global_1315684, 0))
				{
					if (!unk_0xEE1D92A39CF8E1E6(Global_1315684))
					{
						unk_0x4985CD0720AFD468(Global_1315684, 0, 0);
					}
					unk_0xC606AE2A3209945E(&Global_1315684);
				}
			}
		}
	}
}

void func_354(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2465745 = 0;
	}
	Global_1312485.f_18 = iParam0;
}

void func_355(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x0E8572B08CEB6A11(uParam0->f_9))
	{
		if (unk_0x2671671BBCC6AD9F(uParam0->f_9))
		{
			func_356(0);
		}
		unk_0xFE1DEC9C5734D0C0(uParam0->f_9, 0);
	}
	if (!Global_43148)
	{
		unk_0x27D1524D8F8AB27C(1);
		unk_0x791FA2C27A7A2BC5(0f);
		unk_0x4D96A42366D2FBE1(0f);
	}
	Global_2405077.f_603 = 0f;
	if (!bParam1)
	{
		unk_0x09F9466B03D29D2D(0, 0, 0, 1, 0, 0);
	}
}

void func_356(int iParam0)
{
	Global_22529 = iParam0;
}

void func_357(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_362(1, 0, 1);
	}
	else
	{
		func_358(iParam1);
	}
}

void func_358(int iParam0)
{
	func_361();
	if (iParam0 == 0)
	{
		if (unk_0x9E3C25573694B0CA())
		{
			return;
		}
	}
	if (func_360() == 0 || unk_0xA300BD5F71A8C704())
	{
		func_359(1);
		unk_0xDDE84EF472C2544E(0);
		unk_0xDDE84EF472C2544E(0);
	}
}

void func_359(int iParam0)
{
	if (Global_1312485.f_20 != iParam0)
	{
		Global_1312485.f_20 = iParam0;
	}
}

int func_360()
{
	return Global_1312485.f_20;
}

void func_361()
{
	Global_2465053 = 1;
}

void func_362(int iParam0, bool bParam1, bool bParam2)
{
	if (func_363())
	{
		return;
	}
	if ((func_360() == 1 || unk_0xA300BD5F71A8C704()) || iParam0)
	{
		func_359(0);
		unk_0xDDE84EF472C2544E(1);
		if (!bParam1)
		{
			unk_0xDDE84EF472C2544E(1);
		}
		if (bParam2)
		{
			unk_0xFA7175953F1CEE2F();
		}
	}
}

int func_363()
{
	if (func_364())
	{
		return Global_2463425;
	}
	return 0;
}

int func_364()
{
	if (Global_2463418)
	{
		return Global_2463417;
	}
	return 0;
}

void func_365(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3A28409F83158983();
		unk_0xE4158E25735AAF13(-1);
		unk_0xD510EA8DF3CF65AC(1);
		unk_0x64A84F7738997E3F(1);
		unk_0xCAFB54B99BF4F907(1f);
		unk_0xC460A3A85FF669A4(3);
		unk_0xA1515A94D43946F1(3);
	}
	else
	{
		unk_0x86DA8A407ED8A381(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0xE4158E25735AAF13(0);
		unk_0xD510EA8DF3CF65AC(0);
		unk_0x64A84F7738997E3F(0);
		unk_0xCAFB54B99BF4F907(0f);
		unk_0xC460A3A85FF669A4(0);
		unk_0xA1515A94D43946F1(0);
	}
}

void func_366(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_311();
	func_218(1);
	func_206(1);
	func_205(12, 1, -1);
	func_376();
	unk_0x4F62815699141072(0);
	if (bParam0)
	{
		unk_0xEE4E07716A206EBC(unk_0x1146A9AE09CE2B14(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_367(unk_0x1146A9AE09CE2B14(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xCD9DF646977DACD7(unk_0x7D2B9E6A64637269()))
		{
			unk_0xB0008BCA992FE670(unk_0x7D2B9E6A64637269(), 0);
		}
	}
}

void func_367(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_375())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		uVar0 = iParam2;
		unk_0xF99B8860747709DD(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xE45310E861787FC2())
		{
			bVar1 = false;
		}
		if (!func_335())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x8CFC2F41A749E236(iParam0) && (unk_0xCAD1755E530A6012(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_255(unk_0x1146A9AE09CE2B14(), 0) && !func_258()))
				{
					unk_0x4603196EEEA2355C(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x02BFF15CAA701972() && !bVar19)
					{
						unk_0x387A0B2797EBDE5F(0);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_372(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_371(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(uVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(uVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(iVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(iVar27) && unk_0x9038A2103B9BFD38(iVar27))
				{
					unk_0x9C4430B10B361917(iVar27);
				}
				unk_0xF5143FB7B9EC876D(iVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_370();
					func_369();
				}
				if (unk_0x7A4185C9A76C12B2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xCE84F8AB9BD41C13())
				{
				}
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_371(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(iVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(iVar27, 1);
						}
					}
					if (func_368(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(iVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x03903A362E41A74F(iParam0, 0);
				}
				else
				{
					unk_0x03903A362E41A74F(iParam0, 1);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(iVar27) && !unk_0xC49311A2A500FF09(iVar27, 0))
					{
						unk_0x16D66F11FE644901(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xF99B8860747709DD(iParam0, bParam1, iVar28);
		}
	}
}

bool func_368(int iParam0)
{
	return iParam0 == 17;
}

void func_369()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_370()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_371(int iParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0x72D30262CF8C8603(iParam1))
			{
				if (!unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_374();
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0xA01D7927903507FB(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x191DDA30577F440A(&(Global_2359302.f_67), 1);
			}
		}
		if (func_255(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_373(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_374()
{
	int iVar0;
	
	if (!unk_0xDD14CDB3B8003696())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x5F95E51ABC3FC59A(iVar0);
				iVar0++;
			}
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 2);
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 0);
		}
	}
}

int func_375()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_376()
{
	Global_22531.f_5 = 1;
}

int func_377()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_378(int iParam0)
{
	unk_0xD991F7672CE8EAD3(unk_0xD56332194D622ECE(iParam0), 346, 1);
}

void func_379(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_3, 12))
	{
		unk_0x191DDA30577F440A(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1669793)
			{
				Global_1669793 = 1;
				Global_1669794 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xDAE4BC89A198A6AF(Global_1669792))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 8) || unk_0xFA1A73C829B8839F() == 12)
									{
										func_384("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_384("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_383("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("artdir", "AARON GARBUT", 210f, "|", 1);
									func_381("artdir", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 33, -3390))
							{
								func_380("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 33, -2940))
								{
									func_384("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_383("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_381("techdir", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 33, -450))
							{
								func_380("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_384("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_383("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_381("assartdir", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_380("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 8) || unk_0xFA1A73C829B8839F() == 12)
									{
										func_384("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_384("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_383("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_382("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_381("asstecdir", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 36, -4740))
							{
								func_380("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 36, -3810))
								{
									func_384("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_383("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_381("leadprog", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 36, -600))
							{
								func_380("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 8) || unk_0xFA1A73C829B8839F() == 12)
									{
										func_384("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_384("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_383("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_381("senprog", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 37, -1350))
							{
								func_380("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_384("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_383("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_381("prog", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 38, -4320))
							{
								func_380("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 38, -3240))
								{
									if (((unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 8) || unk_0xFA1A73C829B8839F() == 12)
									{
										func_384("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_384("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_383("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_382("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_381("socclub", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 38, -870))
							{
								func_380("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_384("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_383("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_381("audio", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 39, -1620))
							{
								func_380("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_384("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_383("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_381("scrlead", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 40, -1470))
							{
								func_380("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_384("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_383("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_381("script1", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 41, -1200))
							{
								func_380("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_384("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_383("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_382("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_381("script2", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 42, -1320))
							{
								func_380("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_384("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_383("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_383("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_381("visdes", 0.05f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 43, -1320))
							{
								func_380("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_384("uides", 40f, 20f, "right", 0f, 0.3f);
									func_383("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_381("uides", 0f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 45, -1650))
							{
								func_380("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_384("concre", 0f, 20f, "left", 0f, 0.3f);
									func_383("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_382("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_381("concre", 0f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 46, -1950))
							{
								func_380("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_384("devass", 0f, 400f, "right", 0f, 0f);
									func_383("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_382("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_381("devass", 0f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_380("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_384("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_383("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_383("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_381("qasup", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 48, -1320))
							{
								func_380("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_384("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_383("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_381("senta", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 49, -5070))
							{
								func_380("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_304(uParam0, 49, -3750))
								{
									func_384("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_383("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_381("asspro", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_304(uParam0, 49, -720))
							{
								func_380("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 2468)
									{
										func_384("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_383("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_382("animdir", "ROB NELSON", 200f, "|", 1);
										func_381("animdir", 0.16f);
										unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_384("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_383("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_382("animdir", "ROB NELSON", 90f, "|", 1);
									func_381("animdir", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 6123)
								{
									func_380("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 1898)
							{
								func_380("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x2CA4B93E310C1860() && unk_0x5D98A2EB2BC86014())
									{
										func_384("producer", 65f, 55f, "right", 0f, 0f);
										func_383("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_382("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_381("producer", 0f);
										unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 2452)
								{
									func_384("producer", 0f, 100f, "left", 0.3f, 0f);
									func_383("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_382("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_381("producer", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x2CA4B93E310C1860() && unk_0x5D98A2EB2BC86014())
								{
									func_380("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x2CA4B93E310C1860() && unk_0x5D98A2EB2BC86014())
							{
								func_380("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 13265)
									{
										func_384("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_383("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_382("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_381("vpcre", 0.16f);
										unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 6921)
								{
									func_384("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_383("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_382("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_381("vpcre", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 16955)
								{
									func_380("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 10513)
							{
								func_380("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0x234B68AC2E35ED5A(uParam0->f_4, uParam0->f_5))
							{
								if (func_263(uParam0))
								{
									if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 18077)
									{
										Global_1669794 = 0;
										func_384("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_383("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_382("execpro", "SAM HOUSER", 165f, "|", 1);
										func_381("execpro", 0.16f);
										unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 12358)
								{
									Global_1669794 = 0;
									func_384("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_383("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_382("execpro", "SAM HOUSER", 190f, "|", 1);
									func_381("execpro", 0.16f);
									unk_0x191DDA30577F440A(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_263(uParam0))
							{
								if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 21785)
								{
									func_380("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0x2CA4B93E310C1860() && unk_0x5505579F3F8D58CB() > 15333)
							{
								func_380("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1669794)
				{
					unk_0x44EF5678D6916481(Global_1669792, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_380(char* sParam0, float fParam1)
{
	unk_0x704F8697BB515627(Global_1669792, "HIDE");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x392841D58D2EED1D();
}

void func_381(char* sParam0, float fParam1)
{
	unk_0x704F8697BB515627(Global_1669792, "SHOW_CREDIT_BLOCK");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x392841D58D2EED1D();
}

void func_382(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x704F8697BB515627(Global_1669792, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam3);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x9D7453DF8B7E9E0B(iParam4);
	unk_0x392841D58D2EED1D();
}

void func_383(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x704F8697BB515627(Global_1669792, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam3);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x9D7453DF8B7E9E0B(iParam4);
	unk_0x392841D58D2EED1D();
}

void func_384(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x704F8697BB515627(Global_1669792, "SETUP_CREDIT_BLOCK");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam3);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam4);
	unk_0x82D42F43BE26EB72(fParam5);
	unk_0x392841D58D2EED1D();
}

void func_385(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_34))
		{
			if (unk_0xBFCE58B2B3249999(uParam0->f_34, 0))
			{
				unk_0x575198C9652239CF(unk_0x9E695CE384C77EF0(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_386()
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 2:
				if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 1))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (func_406(Local_414.f_3))
						{
							if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) != 1 && unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) != 0)
								{
									unk_0x95CA4545D0C61309(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_414.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 2))
							{
								if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_414.f_3)))
								{
									unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4), 2);
									func_405(1);
								}
								else
								{
									unk_0xB7D390F8F682127B(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_406(Local_414.f_3))
				{
					if (!func_404(Local_414.f_4))
					{
						if (unk_0x234B68AC2E35ED5A(uLocal_582, 26))
						{
							if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_414.f_4), -1273030092) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_414.f_4), -1273030092) != 0)
							{
								unk_0xA0F8D741F5D8E7E4(unk_0x8A437068C87289B7(Local_414.f_4), unk_0x854C404AEB476240(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0x234B68AC2E35ED5A(uLocal_582, 27))
				{
					if (!unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
					{
						if (!func_124())
						{
							if (!unk_0xA300BD5F71A8C704())
							{
								unk_0x8BA9BCDD56AA7115(800);
							}
						}
					}
					else if (unk_0x8B6A925F148E0E94())
					{
						unk_0x191DDA30577F440A(&uLocal_582, 27);
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 4))
				{
					if (func_393(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0xB7D390F8F682127B(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0);
						unk_0x3EA8C0BAD14D607C();
						unk_0xACA86FC73DC40E96();
						unk_0xDF23DCD7A3E1B7A5(0);
						unk_0x3A13FD2813C8251F(0, 1065353216);
						unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_404(Local_414.f_4))
				{
					if (!unk_0x234B68AC2E35ED5A(uLocal_582, 29))
					{
						if (func_406(Local_414.f_3))
						{
							unk_0xE7FD307AF3D07EF7(unk_0x8A437068C87289B7(Local_414.f_4), unk_0x854C404AEB476240(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x6E1E3A5B1F9AB95B(800);
							unk_0x191DDA30577F440A(&uLocal_582, 29);
						}
					}
					else if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 5))
					{
						if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_414.f_4), -272084098) == 7)
						{
							unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -828834893) != 1 && unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -828834893) != 0)
						{
							unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
						}
					}
					else if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 6))
					{
						unk_0x191DDA30577F440A(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3), 6);
						unk_0x191DDA30577F440A(&(Global_2544210.f_836), 4);
						unk_0xC664C0067EEAB8D1(&(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4), 2);
						func_367(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
						func_392();
						func_405(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_389(-200, 0);
							unk_0xA0EFA74FD5CED7AA(200, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_404(Local_414.f_4))
				{
					if (func_406(Local_414.f_3))
					{
						if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_414.f_4), -258271821) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_414.f_4), -258271821) != 0)
						{
							unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_414.f_4), 1);
							unk_0x0509CE092AC81B7C(unk_0x8A437068C87289B7(Local_414.f_4), unk_0x854C404AEB476240(Local_414.f_3), 12f, 786599);
							func_388(&(Local_414.f_3));
							func_388(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 1))
		{
			unk_0xABAA7F8FD10DCDF2(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0x234B68AC2E35ED5A(uLocal_582, 26))
			{
				unk_0x191DDA30577F440A(&uLocal_582, 26);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(uLocal_582, 28))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 2))
			{
				if (!func_199(&uLocal_247))
				{
					func_217();
					func_22(&uLocal_247, 0, 0);
				}
				else if (func_198(&uLocal_247, 5000, 0))
				{
					if (func_178(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0x191DDA30577F440A(&uLocal_582, 28);
					}
				}
			}
		}
		if (!unk_0x234B68AC2E35ED5A(uLocal_582, 30))
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 5))
			{
				if (func_178(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0x191DDA30577F440A(&uLocal_582, 30);
				}
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 6))
		{
			func_387();
		}
		if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_4, 2))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
				{
				}
			}
		}
	}
}

void func_387()
{
	Global_2555428.f_258 = 1;
}

void func_388(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

void func_389(int iParam0, int iParam1)
{
	func_391(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_390(iParam0, 0);
	}
}

void func_390(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_391(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_4 = iVar1;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_3 = (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_390(iVar1, 0);
	}
}

void func_392()
{
	unk_0x681AE3DAF3A73058(0, 22, 1);
	unk_0x681AE3DAF3A73058(0, 36, 1);
	unk_0x681AE3DAF3A73058(0, 32, 1);
	unk_0x681AE3DAF3A73058(0, 34, 1);
	unk_0x681AE3DAF3A73058(0, 35, 1);
	unk_0x681AE3DAF3A73058(0, 33, 1);
	unk_0x681AE3DAF3A73058(0, 31, 1);
	unk_0x681AE3DAF3A73058(0, 30, 1);
	unk_0x681AE3DAF3A73058(0, 44, 1);
	unk_0x681AE3DAF3A73058(0, 141, 1);
	unk_0x681AE3DAF3A73058(0, 140, 1);
	unk_0x681AE3DAF3A73058(0, 263, 1);
	unk_0x681AE3DAF3A73058(0, 264, 1);
	unk_0x681AE3DAF3A73058(0, 143, 1);
	unk_0x681AE3DAF3A73058(0, 24, 1);
	unk_0x681AE3DAF3A73058(0, 257, 1);
	unk_0x681AE3DAF3A73058(0, 263, 1);
	unk_0x681AE3DAF3A73058(0, 264, 1);
	unk_0x681AE3DAF3A73058(0, 143, 1);
	unk_0x681AE3DAF3A73058(0, 262, 1);
	unk_0x681AE3DAF3A73058(0, 261, 1);
	unk_0x681AE3DAF3A73058(0, 37, 1);
	unk_0x681AE3DAF3A73058(0, 25, 1);
	unk_0x681AE3DAF3A73058(0, 26, 1);
}

int func_393(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22531.f_6 = 1;
	if (Global_2441237.f_1351 && Global_2441237.f_1359)
	{
		func_401(0, bParam7);
		return 1;
	}
	if (unk_0xF471787D45ADC2C1() && !bParam7)
	{
		if (Global_2441237.f_1351)
		{
			func_401(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xCE84F8AB9BD41C13() && !bParam7) && !unk_0x7A4185C9A76C12B2())
	{
		return 0;
	}
	if (!func_400())
	{
		if (func_399(unk_0x1146A9AE09CE2B14(), 1, 0) && !(func_398() || func_397()))
		{
			if (((bParam7 && func_14(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
			{
			}
			else if (func_309() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2441237.f_1351 && !bParam9)
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		if ((unk_0x0BCA9ADE67DF9DD8((Var1.x - Param0.x)) < 0.2f && unk_0x0BCA9ADE67DF9DD8((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x0BCA9ADE67DF9DD8((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x0BCA9ADE67DF9DD8(fVar2) < 1f)
			{
				Global_2441237.f_1351 = 0;
				Global_2441237.f_1352 = 0;
				if (unk_0x7A4185C9A76C12B2())
				{
					unk_0x9065E9E298F1BC11();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2441237.f_1353 || !Param0.f_1 == Global_2441237.f_1353.f_1) || !Param0.f_2 == Global_2441237.f_1353.f_2) || !fParam1 == Global_2441237.f_1356)
	{
		if (Global_2441237.f_1351 == 1)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2441237.f_1357) < func_396(0))
			{
				return 0;
			}
			unk_0x9065E9E298F1BC11();
			Global_2441237.f_1352 = 1;
		}
		else
		{
			Global_2441237.f_1352 = 0;
		}
		Global_2441237.f_1353 = { Param0 };
		Global_2441237.f_1356 = fParam1;
		Global_2441237.f_1351 = 0;
	}
	if (bParam2)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			if (unk_0x419E13582192CFEA(uVar0) && unk_0x6471F4759775FCA4(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2441237.f_1351 && !unk_0x7A4185C9A76C12B2())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_99422.f_1378[44], 16))
			{
				func_395(0);
			}
			if (!unk_0x4EB3ECD73955E6CC(unk_0x7D2B9E6A64637269(), &(Global_2405077.f_501)))
			{
				Global_2405077.f_501 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
				if (unk_0x83E7671FB1B0EA3F(iVar0))
				{
					Global_2441237.f_1358 = 0;
				}
			}
		}
		if (Global_2441237.f_1358 > -1)
		{
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						if (unk_0xA6BE8F025C6B653F(iVar0))
						{
							unk_0x78CDDD1E6367978D(iVar0, Param0, 0, 1, 1, 1);
							unk_0xCD37A28258D70638(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xBDDCDEC7B6205897(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0x13F856602366FE17(iVar0);
						}
					}
					else
					{
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
						unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam1);
					}
				}
				else
				{
					unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
					unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam1);
				}
				func_401(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x961F6202C2192265();
				unk_0xBD99B1A905B5473C(unk_0x1146A9AE09CE2B14(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
	}
	if (Global_2441237.f_1351)
	{
		Global_22531.f_6 = 1;
		Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
		if (Global_2441237.f_1358 > -1)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			}
			if (func_394(&(Global_2441237.f_1358), Param0, fParam1, iVar0))
			{
				func_401(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_2441237.f_1353) < 2f)
				{
					if (unk_0x7A4185C9A76C12B2())
					{
						unk_0x9065E9E298F1BC11();
					}
					func_401(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x7A4185C9A76C12B2())
			{
				if (fParam10 != 0f)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						unk_0xBDDCDEC7B6205897(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2441237.f_1359 = 1;
						return 0;
					}
				}
				func_401(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_394(var uParam0, struct<3> Param1, float fParam2, var uParam3)
{
	if (unk_0x419E13582192CFEA(Global_2441237.f_1360) && !unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
	{
		unk_0x13F856602366FE17(Global_2441237.f_1360);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2441237.f_1360 = uParam3;
			unk_0x13F856602366FE17(Global_2441237.f_1360);
			if (unk_0xA6BE8F025C6B653F(Global_2441237.f_1360))
			{
				if (!unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
				{
					unk_0xCD37A28258D70638(Global_2441237.f_1360, fParam2);
					unk_0x78CDDD1E6367978D(Global_2441237.f_1360, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405077.f_2689;
	if ((unk_0x38684A9B76A50D6A() && Global_2405077.f_2687 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405077.f_2686)
	{
		if (!unk_0x1275587246A96F24())
		{
			Global_2405077.f_2686 = iVar0;
		}
	}
}

int func_396(bool bParam0)
{
	if (unk_0x8B6A925F148E0E94())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_397()
{
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 12)) && Global_1702509 == 8);
}

bool func_398()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_399(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2426865[iParam0 /*449*/].f_231 == 99)
	{
		if ((iParam2 && Global_2426865[iParam0 /*449*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2426865[iParam0 /*449*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_400()
{
	return Global_1312878;
}

void func_401(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(0f);
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
	}
	if (!bParam1)
	{
		unk_0x961F6202C2192265();
	}
	if (unk_0x7A4185C9A76C12B2())
	{
		unk_0x9065E9E298F1BC11();
	}
	func_369();
	if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14) && !func_403())
	{
		func_402();
	}
}

void func_402()
{
	Global_2553486.f_88 = 1;
}

int func_403()
{
	if (!unk_0xE45310E861787FC2() && !func_400())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_139630[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_404(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 15))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 15);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 15))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 15);
	}
}

int func_406(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_407(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_407(int iParam0)
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

void func_408(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_409(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_409(iParam0);
	}
}

void func_409(int iParam0)
{
	Global_99422.f_190[iParam0] = 1;
	Global_99422.f_189 = 1;
}

void func_410(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_99422.f_9[iParam0] = 1;
	}
	else
	{
		Global_99422.f_9[iParam0] = 0;
	}
}

void func_411(bool bParam0)
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
		func_409(iVar0);
		iVar0++;
	}
}

void func_412(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

int func_413()
{
	return Local_414;
}

int func_414()
{
	return 1;
}

int func_415(int iParam0)
{
	return Local_581[iParam0 /*5*/];
}

int func_416(int iParam0)
{
	return Local_581[iParam0 /*5*/].f_2;
}

int func_417(bool bParam0)
{
	if (func_419())
	{
		if (bParam0)
		{
			if (!Global_1574420 && !func_418(unk_0x1146A9AE09CE2B14(), 2))
			{
				unk_0x9673FB069F90F6B9("MinigameTransitionIn", 0, 1);
				func_357(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_418(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_419()
{
	return Global_2441237.f_2;
}

void func_420(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x02BFF15CAA701972())
	{
		if (bLocal_588)
		{
			if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 2))
			{
				if (!unk_0x234B68AC2E35ED5A(uLocal_582, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_739(1);
				bVar0 = true;
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/].f_3, 1))
		{
			if (!unk_0x234B68AC2E35ED5A(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_216(&Local_62, 0, bParam0);
	if (unk_0x02BFF15CAA701972())
	{
		if (Global_2441237.f_3865)
		{
			func_732(0, 1, 0, 1);
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		func_405(0);
	}
	unk_0xE6B53A6E51AAA49F(Local_62.f_122, 0);
	unk_0x58D4F7C6214FFC91(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x58D4F7C6214FFC91(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_836), 4);
	func_98(0);
	func_61(0);
	func_731();
	func_730(iLocal_61, 0);
	func_197(&(Global_2441237.f_4115));
	Global_2441237.f_4113 = 0;
	Global_2441237.f_4112 = 0;
	Global_2441237.f_4114 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 1);
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 1);
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 1);
	}
	if (bVar0)
	{
		func_423(0, 0, 0, 0, 1);
	}
	else
	{
		unk_0x66AE54CE92457FEE(1);
		func_423(0, 0, 3, 1, 1);
	}
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_836), 0);
	func_411(0);
	func_410(4, 0);
	func_410(1, 0);
	func_410(0, 0);
	func_410(2, 0);
	func_410(3, 0);
	func_408(iLocal_61, 0);
	func_392();
	func_35();
	if (unk_0x575B7C28D81C0B4D(Global_99422.f_247[iLocal_61]))
	{
		unk_0x13CC211F9F7ACE7F(Global_99422.f_247[iLocal_61], 0);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_585))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_585);
	}
	if (unk_0x02BFF15CAA701972())
	{
		func_422(0);
		func_200(0);
	}
	func_421(Local_414.f_5);
}

void func_421(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Param0)) >= 1000)
		{
			unk_0x70F3087E1D69E208();
		}
	}
	unk_0x4BFE89D21F9885DC();
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 5);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 5);
	}
}

void func_423(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	iVar1 = Global_1590908[iVar0 /*874*/];
	func_729();
	func_725();
	unk_0xE4675F8FD44CF622(0);
	func_724();
	Global_968153 = 0;
	Global_1573308 = 0;
	func_723();
	unk_0x3406B7B02FBFBD2B(0);
	func_722();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1574213 = 0;
	Global_2359296 = 0;
	Global_2359297 = 0;
	func_721(0);
	Global_1574202 = 0;
	Global_1574201 = 0;
	Global_1574225 = 0;
	Global_1574439 = 0;
	Global_1574445 = 0;
	Global_1573936 = 0;
	Global_1575125 = 1;
	Global_1574411 = 0;
	Global_1574214 = -1;
	func_720(0);
	unk_0xC664C0067EEAB8D1(&(Global_2359302.f_1), 5);
	if (!func_719() && !func_717())
	{
		func_716();
	}
	func_715();
	func_714();
	func_713();
	func_712();
	func_711();
	if (unk_0x02BFF15CAA701972())
	{
		func_710();
		func_709();
	}
	if (func_708() || !func_707())
	{
		func_706();
		func_705(1, 1, 1);
		func_704();
		func_703();
		if (iVar0 != -1)
		{
			Global_1627455[iVar0 /*105*/].f_1 = 0;
			Global_1627455[iVar0 /*105*/].f_2 = 0;
			Global_1627455[iVar0 /*105*/] = 0;
		}
	}
	func_702();
	if ((((Global_4456448 != 6 && func_701(Global_4456448.f_85535) != 14) && func_701(Global_4456448.f_85535) != 15) && !func_345()) && !func_717())
	{
		if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
			{
				unk_0x603ABA046B239722(unk_0x7D2B9E6A64637269(), 1);
			}
		}
	}
	Global_1573329 = 0;
	if (Global_1660866.f_9 == 4)
	{
		if (func_700(unk_0x1146A9AE09CE2B14()) || func_699(unk_0x1146A9AE09CE2B14()))
		{
			Global_1573329 = 1;
		}
	}
	func_697();
	if (func_696())
	{
		func_695();
	}
	func_694();
	Global_4456448.f_86071 = 0;
	Global_1660826.f_4 = 0;
	if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_29, 1) && !func_693())
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_14, 17))
		{
			unk_0x7CAF83C1CEFBCF89(unk_0x1146A9AE09CE2B14(), 0);
			unk_0x78C4D915ABA04036(1);
		}
		else
		{
			unk_0x7CAF83C1CEFBCF89(unk_0x1146A9AE09CE2B14(), 1);
			unk_0x78C4D915ABA04036(0);
		}
	}
	StringCopy(&(Global_4456448.f_85527), "", 32);
	if (!func_717())
	{
		unk_0xD8A14DD983454D11();
		unk_0xEFD424FDD55A6EC7(18);
		if ((bParam3 && !func_692()) && !func_691())
		{
			unk_0xAF98B1BA240CE3DB();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1626856[iVar3] = 0;
		Global_1626823[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0x191DDA30577F440A(&(Global_2453903.f_5915), 3);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_2453903.f_5915), 3);
	}
	if (iVar0 != -1 && Global_2453009.f_669.f_10 != 0)
	{
		Global_1627455[unk_0x1146A9AE09CE2B14() /*105*/].f_2 = Global_2453009.f_669.f_10;
	}
	if (func_419() || (iVar0 != -1 && unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_873, 7)))
	{
		if (!bParam4)
		{
			Global_4456448 = 2;
			func_689();
			Global_4456448 = 0;
		}
		else
		{
			func_689();
		}
		func_688();
		func_687(1, 1);
		func_705(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1627455[iVar0 /*105*/].f_1 = 0;
			Global_1627455[iVar0 /*105*/].f_2 = 0;
			Global_1627455[iVar0 /*105*/] = 0;
		}
		func_686(1);
		if (func_685())
		{
			func_684();
		}
		if (!func_17(unk_0x1146A9AE09CE2B14()))
		{
			func_682(4);
		}
		func_704();
		func_681(0);
		func_680();
		Global_1575117 = 0;
	}
	if (!func_679())
	{
		func_678();
		if (func_677())
		{
			if (func_676())
			{
				func_688();
			}
		}
		func_686(1);
		if (!func_675())
		{
			Global_2453903.f_6253 = 0;
			Global_2453903.f_6254 = 0;
			Global_2453903.f_6252 = 0;
			Global_2453903.f_6251 = 0;
			Global_2453903.f_6430 = 0;
		}
	}
	else
	{
		func_674(unk_0x1146A9AE09CE2B14(), 0);
	}
	func_673((Global_1660866.f_9 != 4 && !func_679()));
	func_672((Global_1660866.f_9 != 4 && !func_679()));
	func_671((Global_1660866.f_9 != 4 && !func_679()));
	func_670((Global_1660866.f_9 != 4 && !func_679()));
	if (func_675())
	{
		Global_2453903.f_6343 = 1;
	}
	else
	{
		Global_2453903.f_6343 = 0;
	}
	if (!func_679())
	{
		if (func_675())
		{
			Global_2453903.f_6344 = 1;
		}
		else
		{
			Global_2453903.f_6344 = 0;
		}
	}
	if (func_668())
	{
		if (func_667())
		{
			Global_2453903.f_6345 = 1;
		}
		else
		{
			Global_2453903.f_6345 = 0;
		}
	}
	if (!func_719())
	{
		Global_1660891.f_1345 = 0;
	}
	if (!func_679() && !func_719())
	{
		func_687(1, Global_1660866.f_9 != 4);
		func_705(1, 1, 0);
		func_666(0);
		func_665();
		Global_1575119 = 0;
		if (iVar0 != -1)
		{
			Global_1627455[iVar0 /*105*/].f_1 = 0;
			Global_1627455[iVar0 /*105*/].f_2 = 0;
			Global_1627455[iVar0 /*105*/] = 0;
		}
	}
	func_662(1, -1);
	if (func_661())
	{
		func_660();
	}
	if (unk_0xE45310E861787FC2())
	{
		unk_0x5E79A67ADE9A537C();
	}
	if ((!func_692() && !func_679()) && !func_691())
	{
		func_655();
	}
	Global_4456448.f_86067 = 0;
	func_654();
	Global_1574195 = -1;
	Global_1626904 = -1;
	Global_1626894 = -1;
	Global_1626897 = -1;
	Global_1574200 = 0;
	Global_1626895 = 0;
	Global_1574422 = 0;
	Global_1574414 = 0;
	Global_1626905 = 0;
	func_653(0);
	func_652();
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_873), 7);
	Global_1626892 = 0f;
	Global_1626893 = 0f;
	Global_1574423 = 0;
	Global_1574424 = -1;
	func_651(0);
	Global_1574412 = 0;
	Global_1573937 = 0;
	func_650();
	unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
	unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
	func_649(1);
	if (func_648())
	{
		func_647();
	}
	if (func_646())
	{
		if (func_644(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0xC1C987F7EC21C39A() < 2)
			{
				func_643();
				func_642(1);
			}
			else
			{
				func_641();
			}
			if (Global_1660866.f_9 != -1)
			{
				func_640();
			}
		}
		else if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 0)
		{
			if (Global_1660866.f_9 != -1)
			{
				func_640();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1590908[iVar0 /*874*/].f_194 = 0;
	if (bVar4 && !func_719())
	{
		func_639();
	}
	if (!bVar4)
	{
		func_638(0);
	}
	if ((func_637() != 40 && func_637() != 39) && !func_636())
	{
		Global_1573283 = { 0f, 0f, 0f };
	}
	if (func_635() && func_254())
	{
	}
	else
	{
		func_634();
	}
	func_633();
	func_642(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1660866.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_632())
		{
			func_631(0, iVar6);
		}
	}
	unk_0x248C63F59D846E8C(0);
	if (unk_0x02BFF15CAA701972())
	{
		switch (Global_1660866.f_9)
		{
			case 1:
				if (!func_630() && func_627(0) > 0)
				{
					Global_1679089[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_625();
					func_624();
				}
				break;
			
			case 6:
				Global_1575117 = 0;
				if (!bVar4)
				{
					func_625();
				}
				func_624();
				Global_1660866 = 0;
				Global_1660866.f_22 = { 0f, 0f, 0f };
				unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
				StringCopy(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_225), "", 24);
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_222 = { 0f, 0f, 0f };
				func_623(0);
				break;
			
			case 2:
				func_622(0);
				if (!func_621() || (func_621() && unk_0xAB6A270F84A8781E(&(Global_2453009.f_33))))
				{
					func_620(Global_1660866.f_16);
					func_619(Global_1660866.f_16);
				}
				iVar5 = Global_1590908[iVar0 /*874*/].f_10;
				if (iVar5 != func_140())
				{
					if (unk_0x8CFC2F41A749E236(iVar5))
					{
						Global_2453903.f_5916 = { func_78(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_621()) && unk_0xAB0F784335D14AC3() == 1)
				{
					Global_2453903.f_5916 = { func_618() };
				}
				if (((((Global_4456448.f_529 > 1 && !func_610()) && !func_609(Global_4456448.f_85535)) && !func_608(Global_4456448.f_85535)) && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28 > -1) && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28 < 4)
				{
					func_607(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28);
				}
				else
				{
					func_606();
				}
				break;
			
			case 3:
				func_622(0);
				iVar2 = 1;
				func_605();
				iVar5 = Global_1590908[iVar0 /*874*/].f_10;
				if (iVar5 != func_140())
				{
					if (unk_0x8CFC2F41A749E236(iVar5))
					{
						Global_2453903.f_5916 = { func_78(iVar5) };
					}
				}
				if (((Global_4456448.f_529 > 1 && !func_610()) && !func_609(Global_4456448.f_85535)) && !func_608(Global_4456448.f_85535))
				{
					func_607(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28);
				}
				else
				{
					func_606();
				}
				break;
			
			case 4:
				func_622(0);
				iVar2 = 1;
				if (func_604())
				{
					func_603();
				}
				else if (func_602())
				{
				}
				else
				{
					if (!(func_601() || func_675()) || !func_600())
					{
						Global_2453903.f_6253 = 0;
						Global_2453903.f_6254 = 0;
					}
					if (!func_600())
					{
						Global_2453903.f_6252 = 0;
						Global_2453903.f_6251 = 0;
					}
				}
				if (func_700(unk_0x1146A9AE09CE2B14()) || func_699(unk_0x1146A9AE09CE2B14()))
				{
					Global_786435.f_34++;
				}
				else if (func_599())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_597())
				{
					Global_1682286.f_17++;
				}
				else if (func_334())
				{
					Global_1682372.f_18++;
				}
				else if (func_596(Global_4456448.f_85535))
				{
					Global_1682502.f_18++;
				}
				if (func_595(Global_4456448.f_85535))
				{
					if (Global_1682206.f_14 == 0)
					{
						Global_1682206.f_14 = 1;
					}
				}
				if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_12, 22))
				{
					if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_12, 15))
					{
						func_594(Global_4456448.f_85970);
					}
					else
					{
						func_593(Global_4456448.f_130477, Global_4456448.f_130478);
					}
					if (Global_1660866.f_13 > -1)
					{
						unk_0x53DE1F9BC0FF9BF9(Global_1660866.f_13, Global_1660866.f_14, 0);
					}
					else if (func_592() > -1)
					{
						func_590(func_592(), 0);
					}
				}
				if (func_589())
				{
					Var8 = { func_588() };
					func_587(Var8);
					if (func_586() != -1)
					{
						Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28 = func_586();
					}
					func_585();
					func_584();
				}
				else
				{
					func_605();
				}
				if (!func_255(unk_0x1146A9AE09CE2B14(), 0))
				{
					unk_0x3E878ABC91FB2949(0);
					func_372(0, 0, 1);
				}
				break;
			
			case 5:
				func_622(0);
				iVar2 = 1;
				func_605();
				break;
			
			case 8:
				if (!func_621())
				{
					func_620(Global_1660866.f_16);
				}
				break;
			
			case 9:
				func_622(0);
				iVar2 = 1;
				func_605();
				func_619(Global_4456448.f_85822);
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_225 = { Global_4456448.f_85822 };
				if (func_583())
				{
					func_582();
				}
				if (!func_255(unk_0x1146A9AE09CE2B14(), 0))
				{
					unk_0x3E878ABC91FB2949(0);
					func_372(0, 0, 1);
				}
				break;
			
			case 10:
				func_562(10, 0f, 0f, 0f, Var9);
				func_561();
				break;
		}
	}
	else
	{
		Global_1575117 = 0;
	}
	if (iVar2 || func_699(unk_0x1146A9AE09CE2B14()))
	{
		if ((func_560(unk_0x1146A9AE09CE2B14()) || func_700(unk_0x1146A9AE09CE2B14())) || func_699(unk_0x1146A9AE09CE2B14()))
		{
			if (Global_1669773 > 0)
			{
				Global_2453903.f_1.f_2828.f_13 = Global_1669773;
				Global_2453903.f_1.f_2828 = { Global_1669773.f_1 };
			}
		}
		else
		{
			func_559();
		}
	}
	Global_2453903.f_1.f_842 = 0;
	unk_0xC664C0067EEAB8D1(&Global_1573941, 0);
	func_558(0);
	Global_1574205 = 0;
	Global_1574407 = -1;
	Global_1626822 = 0;
	Global_1312456 = 0;
	Global_1660866.f_1 = 0;
	Global_1660866.f_2 = 0;
	if (func_557() == 0)
	{
		if (Global_1660866.f_9 == -1 && bVar4 == 0)
		{
			func_549(0);
		}
		else
		{
			Global_1660866.f_9 = -1;
		}
	}
	func_548();
	if (func_547())
	{
		func_546();
	}
	if (func_545())
	{
		func_544();
	}
	if (!unk_0xE45310E861787FC2())
	{
		unk_0x9A9B07D8E488CD6D(1);
	}
	if (func_557() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_543(Global_1590908[iVar0 /*874*/]) && !func_692()) && !bVar4) && !func_400()) && !func_679()) && !func_691())
			{
				func_542(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_541();
	Global_1660866.f_1 = 0;
	if (!func_646())
	{
		func_540();
	}
	if (Global_1590908[iVar0 /*874*/] != -1)
	{
		iParam2 = iParam2;
		if (func_539(Global_1590908[iVar0 /*874*/]))
		{
			if (unk_0x0B4295B1608BB934())
			{
				iVar10 = func_522(0);
				func_519(1213, -1);
				func_514(joaat("mpply_mgame_cheat_end"), iVar10);
				if (iVar10 > 0)
				{
					func_514(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		unk_0x4CFCE4324CAB38D5(unk_0x1146A9AE09CE2B14());
	}
	func_512();
	if (Global_1660866 == 0)
	{
		if (!bVar4)
		{
			Global_1590908[iVar0 /*874*/].f_10 = -1;
			unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_873), 1);
		}
	}
	if (bVar4)
	{
		func_542(0);
		unk_0x191DDA30577F440A(&(Global_1590908[iVar0 /*874*/].f_873), 1);
		Global_1590908[iVar0 /*874*/].f_10 = func_511(unk_0x1146A9AE09CE2B14());
		unk_0x3E878ABC91FB2949(0);
		func_372(0, 0, 1);
		if (func_510())
		{
			func_508();
		}
	}
	if ((Global_1590908[iVar0 /*874*/] < 10 && Global_1590908[iVar0 /*874*/] != -1) && !func_400())
	{
		if ((!unk_0xAB6A270F84A8781E(&(Global_1590908[iVar0 /*874*/].f_144)) && Global_1590908[iVar0 /*874*/] != 5) && Global_1590908[iVar0 /*874*/] != 148)
		{
			func_505(&(Global_1590908[iVar0 /*874*/].f_144));
		}
	}
	if (Global_1590908[iVar0 /*874*/] != 6)
	{
		Global_1660813 = 1;
	}
	Global_1590908[iVar0 /*874*/] = -1;
	Global_1590908[iVar0 /*874*/].f_36.f_2 = -1;
	Global_1590908[iVar0 /*874*/].f_36.f_16 = -1;
	Global_1590908[iVar0 /*874*/].f_36.f_1 = -1;
	Global_4456448 = 0;
	if (!bVar4)
	{
		func_504(0);
	}
	Global_1590908[iVar0 /*874*/].f_36.f_18 = 0;
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x61BE49A80917237B() /*874*/].f_748), 0);
	unk_0x41E66F7E7D75ED55(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x8F639D0D922F6888();
		Global_2464679 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1590908[iVar0 /*874*/].f_144), sVar11, 24);
		StringCopy(&(Global_1590908[iVar0 /*874*/].f_150), sVar11, 24);
		func_503();
	}
	StringCopy(&(Global_1618877[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1590908[iVar0 /*874*/].f_164), sVar11, 64);
	Global_1627455[iVar0 /*105*/].f_31 = { Var12 };
	Global_1627455[iVar0 /*105*/].f_33 = { Var12 };
	Global_1574417 = 0;
	Global_1574418 = 0;
	Global_1573949 = -1;
	bVar13 = false;
	func_502();
	func_501();
	func_500();
	if (func_499())
	{
		func_498();
	}
	if (func_497() && unk_0xE45310E861787FC2())
	{
		func_496();
		func_367(unk_0x1146A9AE09CE2B14(), 0, 57348, 0);
	}
	if (func_495())
	{
		func_494();
	}
	else if (func_493())
	{
		func_494();
	}
	else if (func_492())
	{
		func_494();
	}
	else if (func_491())
	{
		func_494();
	}
	else if (func_490())
	{
		func_494();
	}
	else if (func_557())
	{
		func_494();
	}
	else if (func_489() && func_488())
	{
		func_494();
	}
	else if (func_487())
	{
		func_494();
	}
	else
	{
		func_486();
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 1) && !func_719())
		{
			if (unk_0xE45310E861787FC2())
			{
				if (func_510())
				{
					func_485();
				}
				else
				{
					if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_28, 10))
					{
						if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
						{
							Global_2453903.f_2846.f_198 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
						}
					}
					func_484();
					func_704();
					func_483(6);
					func_624();
					if (bVar4)
					{
						func_681(0);
					}
				}
				func_482();
				func_481();
				func_480();
				if (Global_2453903.f_2846.f_4 == 2)
				{
					Global_2453903.f_2846.f_4 = 1;
				}
				if (func_255(unk_0x1146A9AE09CE2B14(), 0))
				{
					func_479();
				}
				func_478();
				Global_2453903.f_2846 = 0;
			}
			else
			{
				func_477();
				func_494();
			}
		}
		else
		{
			if (!func_675() && !func_719())
			{
			}
			func_477();
			func_494();
		}
	}
	if ((((((((((!func_495() && !func_476()) && !func_488()) && !func_489()) && !func_492()) && !func_493()) && !func_475()) && !func_490()) && !func_557()) && !func_491()) && !func_474())
	{
		if (!func_473())
		{
			func_472();
			func_470();
			func_469();
			func_467(1);
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0xD09C9D030AFD3F25())
		{
			if (!unk_0xBBFCE82595FCF3E6())
			{
				if (!func_466())
				{
					if (!bVar13)
					{
						if (func_17(unk_0x1146A9AE09CE2B14()))
						{
							unk_0x718D7E2874638F6E();
							unk_0xE3937CF873D88258();
						}
					}
				}
			}
		}
	}
	if (!func_400())
	{
		StringCopy(&(Global_4456448.f_85542), "", 64);
	}
	if (func_465(116, &iVar14))
	{
		func_464(iVar14);
	}
	if (func_465(123, &iVar14))
	{
		func_464(iVar14);
	}
	if (!func_719())
	{
		func_456();
	}
	else if (func_455())
	{
		func_454();
	}
	func_453();
	if (!func_679() && !func_675())
	{
		func_452();
	}
	iVar3 = 0;
	while (iVar3 < 30)
	{
		Global_1701182[iVar3] = -1;
		Global_1701213[iVar3] = -1;
		Global_1701244[iVar3] = -1;
		iVar3++;
	}
	func_446();
	func_424(bParam3);
}

void func_424(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_646())
		{
		}
		else if ((((!func_679() && !func_675()) && !func_719()) && Global_1660866.f_9 != 9) && Global_1660866.f_9 != 4)
		{
			func_590(0, 1);
		}
	}
	unk_0x7D394B326546E281();
	if (!func_445(unk_0x1146A9AE09CE2B14()) && !unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 17))
	{
		func_444();
	}
	if (func_443())
	{
		func_442(1);
		func_441(1);
	}
	if ((((bParam0 && !func_440()) && !func_679()) && !Global_262145.f_4724) && !func_439())
	{
		unk_0xD40BB860F1299B57();
	}
	unk_0xE63D792F88BFF242(5, 1);
	unk_0xE63D792F88BFF242(3, 1);
	func_431(&uVar0, -1);
	if ((func_19() == 0 && !func_124()) && !func_679())
	{
		if (func_430())
		{
			func_429();
		}
		else
		{
			func_426(1147932892, 28, 0);
		}
	}
	func_425(0);
}

void func_425(int iParam0)
{
	if (!Global_1669306 == iParam0)
	{
		Global_1669306 = iParam0;
	}
}

void func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_428(iParam1, iParam2))
	{
		iVar0 = func_427();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_427()
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

int func_428(int iParam0, var uParam1)
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

void func_429()
{
	unk_0x191DDA30577F440A(&(Global_959568.f_8), 22);
}

bool func_430()
{
	return unk_0x234B68AC2E35ED5A(Global_959568.f_8, 21);
}

void func_431(var uParam0, int iParam1)
{
	func_437(uParam0, iParam1);
	func_432(iParam1);
}

void func_432(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	uVar0 = func_436(iParam0);
	uVar1 = unk_0xC82CD1DB42480082(uVar0);
	if (func_433())
	{
		if (unk_0x234B68AC2E35ED5A(uVar1, 1))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

int func_433()
{
	if (func_435() && func_434(0))
	{
		return 1;
	}
	return 0;
}

var func_434(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_435()
{
	return func_434(func_29() + 1);
}

int func_436(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_437(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	uVar1 = func_438(iParam1);
	uVar2 = unk_0xC82CD1DB42480082(uVar1);
	if (unk_0x234B68AC2E35ED5A(uVar2, 1))
	{
		func_519(1208, iParam1);
		func_514(joaat("mpply_dm_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 2))
	{
		func_519(1210, iParam1);
		func_514(joaat("mpply_race_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 3))
	{
		func_519(1119, iParam1);
		func_514(joaat("mpply_mc_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 4))
	{
		func_519(1212, iParam1);
		func_514(joaat("mpply_mgame_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 5))
	{
		func_519(1925, iParam1);
		func_514(joaat("mpply_cap_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 6))
	{
		func_519(1927, iParam1);
		func_514(joaat("mpply_sur_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 7))
	{
		func_519(1929, iParam1);
		func_514(joaat("mpply_lts_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 8))
	{
		func_519(1931, iParam1);
		func_514(joaat("mpply_para_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 9))
	{
		func_519(10062, iParam1);
		func_514(joaat("mpply_heist_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0x234B68AC2E35ED5A(uVar2, 26))
	{
		func_519(1933, iParam1);
		func_514(joaat("mpply_fmevn_cheat_start"), 2);
		func_514(joaat("mpply_activity_started"), 1);
		unk_0xC664C0067EEAB8D1(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0xC2D5316F6C82B7CC(uVar2, iParam1);
	}
}

int func_438(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
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

int func_439()
{
	if (func_700(unk_0x1146A9AE09CE2B14()) || func_699(unk_0x1146A9AE09CE2B14()))
	{
		if (func_601() || func_675())
		{
			return 1;
		}
	}
	return 0;
}

bool func_440()
{
	return Global_1574420;
}

void func_441(int iParam0)
{
	Global_2453903.f_6429 = iParam0;
}

void func_442(int iParam0)
{
	Global_2453903.f_6250 = iParam0;
}

int func_443()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0xAB6A270F84A8781E(&(Global_4456448.f_85852[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_444()
{
	unk_0x20D884FB6567BAD5(6);
	unk_0x5E84945E26CAEF1F(1f);
	unk_0x817486F19ADBF54A(1);
}

int func_445(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

void func_446()
{
	if (Global_1702445)
	{
		if (func_345())
		{
			if (func_451(Global_4456448.f_133963))
			{
				switch (Global_4456448.f_127873)
				{
					case 1:
						unk_0xC5CAF559D14B1D18(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), 0);
						break;
				}
			}
			else if (func_450(Global_4456448.f_133963))
			{
				switch (Global_4456448.f_127873)
				{
					case 3:
						unk_0xC5CAF559D14B1D18(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
				}
			}
			else if (func_449(Global_4456448.f_133963))
			{
				switch (Global_4456448.f_127873)
				{
					case 3:
						unk_0xC5CAF559D14B1D18(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), 0);
						break;
				}
			}
			else if (func_448(Global_4456448.f_133963))
			{
				switch (Global_4456448.f_127873)
				{
					case 3:
						unk_0xC5CAF559D14B1D18(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), 0);
						unk_0xC5CAF559D14B1D18(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), 0);
						unk_0xC5CAF559D14B1D18(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), 0);
						break;
				}
			}
			else if (func_447(Global_4456448.f_133963))
			{
				switch (Global_4456448.f_127873)
				{
					case 3:
						unk_0xC5CAF559D14B1D18(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
					}
				}
		}
		Global_1702445 = 0;
	}
}

bool func_447(int iParam0)
{
	return iParam0 == 76;
}

bool func_448(int iParam0)
{
	return iParam0 == 77;
}

bool func_449(int iParam0)
{
	return iParam0 == 83;
}

bool func_450(int iParam0)
{
	return iParam0 == 74;
}

bool func_451(int iParam0)
{
	return iParam0 == 78;
}

void func_452()
{
	Global_2453009.f_43.f_41 = 0;
}

void func_453()
{
	Global_1660866.f_6 = 0;
}

void func_454()
{
	unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_32), 5);
}

bool func_455()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_3, 7);
}

void func_456()
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_462(func_463(), Var0))
	{
		Var1 = 701013663;
		Var1.f_1 = unk_0x1146A9AE09CE2B14();
		iVar2 = func_461(1, 1);
		if (!iVar2 == 0)
		{
			func_458();
			func_457(0);
			unk_0xA5C82A39FF8ED272(1, &Var1, 2, iVar2);
		}
	}
}

void func_457(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2441237.f_3860 = unk_0x551F46B3C7DFB654();
	}
	Global_2441237.f_3744 = iParam0;
}

void func_458()
{
	func_460();
	func_459();
}

void func_459()
{
	struct<72> Var0;
	
	if (func_60(unk_0x1146A9AE09CE2B14()))
	{
		Var0.f_6 = 32;
		Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126 = { Var0 };
	}
}

void func_460()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2441237.f_3744.f_79 };
	Var0.f_95 = { Global_2441237.f_3744.f_95 };
	Global_2441237.f_3744 = { Var0 };
}

var func_461(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_255(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_462(struct<3> Param0, struct<3> Param1)
{
	if ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_463()
{
	return Global_2426113[unk_0x1146A9AE09CE2B14() /*10*/];
}

void func_464(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2510931[iParam0 /*5*/].f_1 == -1 || Global_2510931[iParam0 /*5*/].f_2 == -1) || Global_2510931[iParam0 /*5*/].f_3 == -1) || Global_2510931[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x39D1B4720FE6DF76(Global_2510931[iParam0 /*5*/], Global_2510931[iParam0 /*5*/].f_1, Global_2510931[iParam0 /*5*/].f_2, Global_2510931[iParam0 /*5*/].f_3, Global_2510931[iParam0 /*5*/].f_4);
	Global_2510931[iParam0 /*5*/] = -1;
	Global_2510931[iParam0 /*5*/].f_1 = -1;
	Global_2510931[iParam0 /*5*/].f_2 = -1;
	Global_2510931[iParam0 /*5*/].f_3 = -1;
	Global_2510931[iParam0 /*5*/].f_4 = -1;
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2510931[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_466()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 18);
}

void func_467(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2453903.f_1.f_2798 = 0;
	Global_2453903.f_1.f_2799 = 0;
	Global_2453903.f_1.f_2824 = 0;
	Global_2453903.f_1.f_2805 = 0;
	Global_2453903.f_1.f_2806 = 0;
	Global_2453903.f_1.f_2809 = 0;
	Global_2453903.f_1.f_2810 = 0;
	Global_2453903.f_1.f_2808 = -1;
	Global_2453903.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2453903.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2453903.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2453903.f_1.f_2822 = -1;
		Global_2453903.f_1.f_2823 = -1;
	}
	Global_2453903.f_1.f_2844 = 0;
	func_468();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Global_2453903.f_1.f_845[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_2449595.f_33 = -1;
	Global_2449595.f_34 = -1;
}

void func_468()
{
	Global_2449595.f_32 = 0;
}

void func_469()
{
	Global_2453009.f_691 = 0;
}

void func_470()
{
	Global_2453009.f_692 = 0;
	func_471();
}

void func_471()
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (iVar0 >= 0)
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_96.f_32), 6);
	}
}

void func_472()
{
	Global_2453009 = 0;
	Global_2453009.f_2 = 0;
	Global_2453009.f_3 = 0;
}

bool func_473()
{
	return Global_2453009.f_691;
}

bool func_474()
{
	return Global_1669764;
}

bool func_475()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 1);
}

bool func_476()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 16);
}

void func_477()
{
	unk_0xC664C0067EEAB8D1(&Global_2453009, 21);
}

void func_478()
{
	Global_2453903.f_2846.f_35 = 1;
}

void func_479()
{
	Global_2453903.f_1.f_2827 = 1;
}

void func_480()
{
	Global_2453009.f_826 = 1;
}

void func_481()
{
	Global_2453903.f_1.f_2826 = 1;
}

void func_482()
{
	unk_0x191DDA30577F440A(&Global_2453009, 21);
}

void func_483(int iParam0)
{
	Global_2453903.f_1.f_837 = iParam0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_221 = iParam0;
}

void func_484()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2449633 = { Var0 };
}

void func_485()
{
	Global_2453903.f_2846.f_1 = 1;
}

void func_486()
{
	Global_2453903.f_2846.f_1 = 0;
}

bool func_487()
{
	return Global_2453009.f_716;
}

bool func_488()
{
	return Global_2453009.f_706;
}

bool func_489()
{
	return Global_2453009.f_693;
}

bool func_490()
{
	return Global_2453009.f_702;
}

bool func_491()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_2, 15);
}

bool func_492()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 20);
}

bool func_493()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 2);
}

void func_494()
{
	Global_2453903.f_2846.f_35 = 0;
}

bool func_495()
{
	return unk_0x234B68AC2E35ED5A(Global_959568.f_8, 8);
}

void func_496()
{
	Global_2453009.f_721 = 0;
}

var func_497()
{
	return Global_2453009.f_721;
}

void func_498()
{
	Global_2453009.f_752 = 0;
}

bool func_499()
{
	return Global_2453009.f_752;
}

void func_500()
{
	Global_2453903.f_1.f_838 = 0;
	Global_2453903.f_1.f_839 = 0;
	Global_2453903.f_1.f_841 = 0;
}

void func_501()
{
	unk_0xC664C0067EEAB8D1(&Global_2453009, 4);
}

void func_502()
{
	unk_0xC664C0067EEAB8D1(&Global_2453009, 28);
}

void func_503()
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 4);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 5);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 7);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 8);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 9);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 10);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 11);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 12);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_11.f_1), 13);
}

void func_504(int iParam0)
{
	unk_0x3E878ABC91FB2949(iParam0);
}

void func_505(var uParam0)
{
	var uVar0;
	
	if ((!func_507() && func_506(120, -1)) && !func_400())
	{
		unk_0x90E8CF462ABCC154(uParam0, &uVar0, 13);
		if (unk_0x3699D36B67CC8836(&uVar0, 13))
		{
			if (unk_0x9B050CE2036A4DAD(&uVar0))
			{
			}
		}
	}
}

int func_506(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_28(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_507()
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if ((Global_1590908[iVar0 /*874*/].f_36.f_2 == 63 || Global_1590908[iVar0 /*874*/].f_36.f_2 == 62) || Global_1590908[iVar0 /*874*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_508()
{
	unk_0x191DDA30577F440A(&(Global_959568.f_8), 8);
	func_509();
}

void func_509()
{
	Global_2453009.f_880 = 1;
}

bool func_510()
{
	return Global_2453903.f_2846.f_2;
}

var func_511(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_96.f_2;
}

void func_512()
{
	if (func_513())
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

bool func_513()
{
	return func_196("FM_RETRY_INV");
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_518(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_517(iParam0))
	{
		func_516(iParam0, iVar0);
	}
	else
	{
		func_515(iParam0, iVar0);
	}
}

void func_515(int iParam0, int iParam1)
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

void func_516(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, 1);
	}
}

int func_517(int iParam0)
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

int func_518(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_519(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam1), 0);
	iVar0++;
	if (!func_521(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_520(iParam0, iVar0, iParam1, 1);
	}
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_28(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_28(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_28(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_28(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_28(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_28(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_28(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_28(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_28(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_28(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_28(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_28(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_28(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_28(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_28(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_28(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_28(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_28(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_28(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_28(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_28(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_28(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_28(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_28(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_28(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_28(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_28(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_28(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_28(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_28(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_28(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_28(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_28(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_28(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_28(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_28(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_28(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_28(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_28(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_28(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_28(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_28(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_28(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_28(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_28(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_28(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_28(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_28(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_28(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_28(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_28(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_28(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_521(int iParam0)
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

int func_522(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2464559 == 0)
	{
		return 0;
	}
	if (func_538())
	{
		if (unk_0xE45310E861787FC2() || (func_537() || func_533()))
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
	if (func_532(Global_111321.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2463441)
	{
		iVar0 = 1;
	}
	if (func_531(512))
	{
		iVar0 = 1;
	}
	if (func_530(128))
	{
		iVar0 = 1;
	}
	if (Global_1315752 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_400())
	{
		iVar0 = 0;
	}
	if (Global_2463995)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_528())
		{
			if (Global_4456448.f_86069 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_255(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = 0;
	}
	if (func_527())
	{
		iVar0 = 0;
	}
	if ((Global_2463501 || Global_2463500) || Global_1315728)
	{
		if (func_533())
		{
			iVar0 = 0;
		}
	}
	Global_2463995 = 0;
	Global_2463500 = 0;
	Global_2463501 = 0;
	Global_1315728 = 0;
	Global_2463441 = 0;
	func_525(&(Global_111321.f_1), 32);
	func_524(512);
	func_523(128);
	return iVar0;
}

void func_523(int iParam0)
{
	Global_111378 = (Global_111378 - (Global_111378 && iParam0));
}

void func_524(int iParam0)
{
	Global_111379 = (Global_111379 - (Global_111379 && iParam0));
}

void func_525(var uParam0, int iParam1)
{
	func_526(uParam0, iParam1);
}

void func_526(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_527()
{
	if (((Global_1574443 || Global_1574413) || func_255(unk_0x1146A9AE09CE2B14(), 0)) || func_254())
	{
		return 1;
	}
	return 0;
}

int func_528()
{
	switch (func_529())
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

int func_529()
{
	return Global_2453903.f_1.f_2822;
}

bool func_530(int iParam0)
{
	return (Global_111378 && iParam0) != 0;
}

bool func_531(int iParam0)
{
	return (Global_111379 && iParam0) != 0;
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_533()
{
	if (func_536(Global_2465681))
	{
		return 0;
	}
	if (func_534(unk_0x1146A9AE09CE2B14(), 146))
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/] == iParam1)
	{
		return func_535(iParam0);
	}
	return 0;
}

int func_535(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_536(int iParam0)
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

int func_537()
{
	if (func_536(Global_2465681))
	{
		return 0;
	}
	if (func_535(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

bool func_538()
{
	return unk_0x234B68AC2E35ED5A(Global_1312443, 0);
}

int func_539(int iParam0)
{
	switch (iParam0)
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

void func_540()
{
	if (unk_0x5B38E054B758C032(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "MissionType"))
	{
		unk_0xDCD4F88620190EFE(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "MissionType");
	}
	if (unk_0x5B38E054B758C032(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "MatchId"))
	{
		unk_0xDCD4F88620190EFE(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "MatchId");
	}
	if (unk_0x5B38E054B758C032(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "TeamId"))
	{
		unk_0xDCD4F88620190EFE(unk_0x8D896A7D8F933EE8(unk_0x1146A9AE09CE2B14()), "TeamId");
	}
}

void func_541()
{
	Global_2453009.f_697 = 0;
	unk_0xB2C86D56B1F1A1A2();
}

void func_542(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 2);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 2);
	}
}

int func_543(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_544()
{
	Global_2453009.f_840 = 0;
}

bool func_545()
{
	return Global_2453009.f_840;
}

void func_546()
{
	Global_2453009.f_844 = 0;
}

bool func_547()
{
	return Global_2453009.f_844;
}

void func_548()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_32), 1);
}

int func_549(int iParam0)
{
	int iVar0;
	
	if (func_254())
	{
		return 1;
	}
	if (func_554())
	{
		return 1;
	}
	if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_85822)))
	{
		return 1;
	}
	if (func_553())
	{
		return 1;
	}
	func_552();
	unk_0x95090C59AADEBECF(0);
	iVar0 = unk_0x4D9115464D37FCEB(0);
	if (iParam0 == 0)
	{
		Global_1660826++;
		unk_0x85D9696FF3E31D8A(iVar0, "quit", Global_1660826);
		unk_0x85D9696FF3E31D8A(iVar0, "quitd", 1);
		unk_0x85D9696FF3E31D8A(iVar0, "ply", Global_1660826.f_2);
		unk_0x85D9696FF3E31D8A(iVar0, "lp", unk_0x666C16A4ED8F3098());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1660851.f_1++;
		unk_0x85D9696FF3E31D8A(iVar0, "quit", Global_1660851.f_1);
		unk_0x85D9696FF3E31D8A(iVar0, "quitd", 1);
		unk_0x85D9696FF3E31D8A(iVar0, "ply", Global_1660851.f_4);
		unk_0x85D9696FF3E31D8A(iVar0, "lp", unk_0x666C16A4ED8F3098());
	}
	if (iParam0 == 0)
	{
		if (unk_0xD794C72FE1D7D033(&(Global_4456448.f_85822), 0f, func_551(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0xD794C72FE1D7D033(&(Global_959568.f_42), 0f, func_551(iParam0), 0))
		{
		}
	}
	func_550();
	func_552();
	unk_0x12B0E19A2C17175F();
	return 1;
}

void func_550()
{
	Global_1660826 = 0;
	Global_1660826.f_2 = 0;
	Global_1660826.f_8 = 0;
	Global_1660826.f_3 = 0;
	Global_1660826.f_6 = 0;
}

char* func_551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_552()
{
	if (unk_0x4D9115464D37FCEB(0) != 0)
	{
		unk_0x9C02B660CDCF1292(0);
	}
}

int func_553()
{
	if (unk_0xF3EB9A843D0AFBBC())
	{
		return 1;
	}
	else if (unk_0x21A209761841277F())
	{
		return 1;
	}
	else if (unk_0xCBE767DE3A8F805F())
	{
		return 1;
	}
	return 0;
}

int func_554()
{
	if (!func_555())
	{
		return 1;
	}
	return 0;
}

int func_555()
{
	if (func_556())
	{
		return 0;
	}
	if (unk_0x6280556FDB0D083D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_556()
{
	return Global_2464001;
}

bool func_557()
{
	return Global_2453009.f_734;
}

void func_558(bool bParam0)
{
	if (bParam0)
	{
		Global_1312469 = 1;
	}
	else
	{
		Global_1312469 = 0;
	}
}

void func_559()
{
	Global_2453903.f_1.f_2828.f_13 = 0;
	Global_2453903.f_1.f_2828 = 0;
	Global_2453903.f_1.f_2828.f_1 = 0;
	Global_2453903.f_1.f_2828.f_2 = 0;
	Global_2453903.f_1.f_2828.f_3 = 0;
	Global_2453903.f_1.f_2828.f_4 = 0;
	Global_2453903.f_1.f_2828.f_5 = 0;
	Global_2453903.f_1.f_2828.f_6 = 0;
	Global_2453903.f_1.f_2828.f_7 = 0;
	Global_2453903.f_1.f_2828.f_8 = 0;
	Global_2453903.f_1.f_2828.f_9 = 0;
	Global_2453903.f_1.f_2828.f_10 = 0;
	Global_2453903.f_1.f_2828.f_11 = 0;
	Global_2453903.f_1.f_2828.f_12 = 0;
}

bool func_560(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 1;
}

void func_561()
{
	Global_2453009.f_716 = 1;
}

void func_562(int iParam0, struct<3> Param1, struct<6> Param2)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_581();
	func_580();
	func_579();
	func_578();
	func_577();
	func_704();
	Global_1660866.f_9 = iParam0;
	switch (Global_1660866.f_9)
	{
		case 1:
			Global_1660866 = 0;
			Global_1660866.f_22 = { 0f, 0f, 0f };
			unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			func_574();
			break;
		
		case 2:
			Global_1660866 = 1;
			Global_1660866.f_22 = { Param1 };
			Global_1660866.f_16 = { Param2 };
			unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 3:
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 0 || Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 1)
			{
				func_573(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_28);
			}
			func_572();
			Global_1660866 = 1;
			Global_1660866.f_22 = { Param1 };
			unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 4:
			func_571();
			func_572();
			Global_1660866 = 1;
			if (func_699(unk_0x1146A9AE09CE2B14()) || func_700(unk_0x1146A9AE09CE2B14()))
			{
				func_570(1);
			}
			if ((func_569() || func_604()) && func_589())
			{
				Global_1660866.f_16 = { func_588() };
				Param2 = { Global_1660866.f_16 };
				Global_1660866.f_22 = { func_568() };
			}
			else if (func_569() || func_604())
			{
				if (func_567())
				{
					Global_1660866.f_22 = { func_566() };
				}
				else
				{
					Global_1660866.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1660866.f_22 = { Param1 };
			}
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 5:
			func_571();
			func_565();
			func_572();
			if (func_699(unk_0x1146A9AE09CE2B14()) || func_700(unk_0x1146A9AE09CE2B14()))
			{
				func_570(1);
			}
			Global_1660866 = 1;
			Global_1660866.f_22 = { Param1 };
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 8:
			Global_1660866 = 0;
			Global_1660866.f_22 = { Param1 };
			Global_1660866.f_16 = { Param2 };
			unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 9:
			func_572();
			Global_1660866 = 1;
			Global_1660866.f_22 = { Param1 };
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
		
		case 10:
			Global_1660866 = 0;
			Global_1660866.f_22 = { 0f, 0f, 0f };
			unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 1);
			break;
	}
	func_564();
	func_563();
	func_483(Global_1660866.f_9);
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_222 = { Global_1660866.f_22 };
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_225 = { Param2 };
}

void func_563()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18), 23);
}

void func_564()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18), 12);
}

void func_565()
{
	Global_1660866.f_4 = 1;
}

Vector3 func_566()
{
	return Global_2453009.f_43.f_575;
}

int func_567()
{
	if ((Global_2453009.f_43.f_575 != 0f || Global_2453009.f_43.f_575.f_1 != 0f) || Global_2453009.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_568()
{
	return Global_2453009.f_43.f_578;
}

var func_569()
{
	return Global_2453009.f_43.f_57;
}

void func_570(int iParam0)
{
	Global_2453903.f_6249 = iParam0;
}

void func_571()
{
	Global_1660866.f_3 = 1;
}

void func_572()
{
	Global_1660866.f_7 = 1;
}

void func_573(var uParam0)
{
	Global_1660866.f_10 = uParam0;
}

int func_574()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0x3699D36B67CC8836(&(Global_2453903.f_6529), 13))
	{
		return 0;
	}
	iVar2 = unk_0x1146A9AE09CE2B14();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xC502CD39B4994F3A(iVar1);
		if (unk_0x8CFC2F41A749E236(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (unk_0x65436E51C985931E(&Var3, &(Global_2453903.f_6529)) && func_576(iVar0))
			{
				func_575();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_575()
{
	unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18), 9);
}

bool func_576(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_36.f_18, 9);
}

void func_577()
{
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_5 = 0;
}

void func_578()
{
	Global_1660866.f_10 = -1;
}

void func_579()
{
	Global_1660866.f_4 = 0;
}

void func_580()
{
	Global_1660866.f_3 = 0;
}

void func_581()
{
	Global_2453903.f_2846.f_2 = 1;
}

void func_582()
{
	Global_2453009.f_669.f_14 = 0;
}

bool func_583()
{
	return Global_2453009.f_669.f_14;
}

void func_584()
{
	Global_2453009.f_43.f_55 = 0;
}

void func_585()
{
	Global_2453009.f_43.f_43 = -1;
}

int func_586()
{
	return Global_2453009.f_43.f_43;
}

void func_587(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xAB6A270F84A8781E(&uParam0))
	{
		return;
	}
	if (!Global_2398871)
	{
		return;
	}
	if (!unk_0xDA654EB115F9FF7D(&uParam0, &(Global_2398871.f_1)))
	{
		return;
	}
	Global_2398937 = 1;
}

struct<6> func_588()
{
	return Global_2453009.f_43.f_12;
}

bool func_589()
{
	return Global_2453009.f_43.f_59;
}

void func_590(int iParam0, bool bParam1)
{
	if (func_693())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x645283A19E3F497A())
				{
					unk_0xF46E72F72630AA74();
				}
			}
			break;
		
		case 1:
			unk_0x53DE1F9BC0FF9BF9(6, 0, 0);
			break;
		
		case 2:
			unk_0x53DE1F9BC0FF9BF9(12, 0, 0);
			break;
		
		case 3:
			if (func_591(Global_4456448.f_133963))
			{
				unk_0x53DE1F9BC0FF9BF9(20, 50, 0);
			}
			else
			{
				unk_0x53DE1F9BC0FF9BF9(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0x53DE1F9BC0FF9BF9(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_591(int iParam0)
{
	return iParam0 == 10;
}

int func_592()
{
	return Global_1660866.f_12;
}

void func_593(var uParam0, var uParam1)
{
	Global_1660866.f_13 = uParam0;
	Global_1660866.f_14 = uParam1;
}

void func_594(var uParam0)
{
	Global_1660866.f_12 = uParam0;
}

int func_595(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5028[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_596(int iParam0)
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

bool func_597()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_600();
	}
	return func_598(Global_4456448.f_85535);
}

int func_598(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5903[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_599()
{
	return Global_2453009.f_19;
}

bool func_600()
{
	return Global_2453009.f_21;
}

bool func_601()
{
	return unk_0x234B68AC2E35ED5A(Global_1312787, 4);
}

bool func_602()
{
	return Global_2453009.f_17;
}

void func_603()
{
	Global_2453009.f_43.f_56 = 1;
}

bool func_604()
{
	return Global_2453009.f_43.f_55;
}

void func_605()
{
	if (unk_0xAB6A270F84A8781E(&(Global_2391056.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xAB6A270F84A8781E(&(Global_2398169.f_3)))
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_2398169.f_3), &(Global_2391056.f_4.f_3)))
		{
			Global_1311838 = 0;
		}
		else
		{
			Global_1311838 = 1;
		}
	}
	Global_1311839 = 0;
	Global_1311839.f_1 = { Global_2391056.f_4.f_3 };
}

void func_606()
{
	Global_1660866.f_5 = 0;
	Global_1660866.f_11 = -1;
}

void func_607(var uParam0)
{
	Global_1660866.f_5 = 1;
	Global_1660866.f_11 = uParam0;
}

int func_608(int iParam0)
{
	int iVar0;
	
	if (Global_4456448.f_133963 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9347[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (Global_4456448.f_133963 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9183[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_610()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_18, 0))
	{
		return 1;
	}
	return ((((((func_617(Global_4456448.f_85535, 1) || func_616(Global_4456448.f_85535)) || func_615(Global_4456448.f_85535)) || func_614(Global_4456448.f_85535)) || func_613(Global_4456448.f_133963)) || func_612(Global_4456448.f_133963)) || func_611(Global_4456448.f_133963));
}

bool func_611(int iParam0)
{
	return iParam0 == 65;
}

bool func_612(int iParam0)
{
	return iParam0 == 48;
}

bool func_613(int iParam0)
{
	return iParam0 == 8;
}

int func_614(int iParam0)
{
	int iVar0;
	
	if (Global_4456448.f_133963 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9426[iVar0])
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
	
	if (Global_4456448.f_133963 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9369[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_616(int iParam0)
{
	int iVar0;
	
	if (Global_4456448.f_133963 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9250[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_617(int iParam0, bool bParam1)
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

struct<13> func_618()
{
	struct<13> Var0;
	
	unk_0x738A74C5899697B7(&Var0, 13);
	return Var0;
}

void func_619(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0xAB6A270F84A8781E(&uParam0))
	{
		return;
	}
	if (!Global_2391045)
	{
		return;
	}
	uVar0 = unk_0x15173FB88ABC94F9(&uParam0);
	Global_2391047 = uVar0;
	Global_2391048 = (unk_0xDFB7BFA6482FEE1E() + 60000);
}

void func_620(struct<6> Param0)
{
	if (unk_0xAB6A270F84A8781E(&Param0))
	{
		return;
	}
	Global_1311839 = 1;
	Global_1311839.f_1 = { Param0 };
}

bool func_621()
{
	return Global_2453009.f_14;
}

void func_622(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		unk_0x84C39F568C7207FE(iParam0);
		unk_0xB569C5668135C61E(0);
	}
}

void func_623(int iParam0)
{
	if (Global_2518652 != iParam0)
	{
		Global_2518652 = iParam0;
	}
}

void func_624()
{
	Global_968397 = -1;
}

void func_625()
{
	func_626(-1f);
}

void func_626(float fParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		unk_0xE7473EFB02569964(0);
		unk_0x44DCBCEAF511DAD3(0);
		unk_0x84C39F568C7207FE(fParam0);
		unk_0xB569C5668135C61E(0);
	}
}

int func_627(int iParam0)
{
	int iVar0;
	
	if (Global_1679089[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_629(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_628(iParam0, 0);
			iVar0 = 0;
		}
		Global_1679089[iParam0 /*8*/] = iVar0;
	}
	return Global_1679089[iParam0 /*8*/];
}

void func_628(int iParam0, int iParam1)
{
	Global_1679089[iParam0 /*8*/] = iParam1;
	func_64(func_629(iParam0), iParam1, -1, 1, 0);
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10403;
		
		default:
	}
	return 10403;
}

bool func_630()
{
	return Global_4456448.f_1 == 0;
}

void func_631(int iParam0, int iParam1)
{
	unk_0x7AF2C19FB25152E6(iParam0);
	unk_0x72C4FCBC90F19F80(iParam0);
	if (unk_0xCF7941E922F85F77())
	{
		unk_0x0A217B1E336D059D(iParam1);
	}
}

bool func_632()
{
	return Global_2453009.f_743;
}

void func_633()
{
	if (unk_0x234B68AC2E35ED5A(Global_2359302, 24))
	{
		unk_0xC664C0067EEAB8D1(&Global_2359302, 24);
	}
}

void func_634()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18), 14);
}

var func_635()
{
	return Global_2518652;
}

bool func_636()
{
	return Global_2453009.f_831;
}

int func_637()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192;
}

void func_638(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574206 == 0)
		{
			Global_1574206 = 1;
		}
	}
	else if (Global_1574206 == 1)
	{
		Global_1574206 = 0;
	}
}

void func_639()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2453903.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2453903.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_640()
{
	int iVar0;
	
	if (func_254())
	{
		return 1;
	}
	if (func_554())
	{
		return 1;
	}
	if (func_553())
	{
		return 1;
	}
	if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_85822)))
	{
		return 1;
	}
	func_552();
	unk_0x95090C59AADEBECF(0);
	iVar0 = unk_0x4D9115464D37FCEB(0);
	Global_1660826.f_2++;
	if (Global_1660826.f_2 < 1)
	{
		Global_1660826.f_2 = 1;
	}
	unk_0x85D9696FF3E31D8A(iVar0, "quit", Global_1660826);
	unk_0x85D9696FF3E31D8A(iVar0, "ply", Global_1660826.f_2);
	unk_0x85D9696FF3E31D8A(iVar0, "plyd", 1);
	unk_0x85D9696FF3E31D8A(iVar0, "lp", unk_0x666C16A4ED8F3098());
	if (unk_0xD794C72FE1D7D033(&(Global_4456448.f_85822), -1f, func_551(0), 0))
	{
	}
	func_550();
	func_552();
	unk_0x12B0E19A2C17175F();
	return 1;
}

void func_641()
{
	Global_2453009.f_843 = 1;
}

void func_642(bool bParam0)
{
	if (bParam0)
	{
		unk_0x6E10BA0305002606();
	}
	else
	{
		unk_0xFF6C60A49A2BE250();
	}
}

void func_643()
{
	Global_2453009.f_842 = 1;
}

int func_644(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_645(iParam0))
			{
				if (Global_1590908[iParam0 /*874*/] == 2 || Global_1590908[iParam0 /*874*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_645(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

bool func_646()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 2);
}

void func_647()
{
	Global_2453009.f_842 = 0;
}

bool func_648()
{
	return Global_2453009.f_842;
}

void func_649(int iParam0)
{
	unk_0xCDF87F9AAD28040F("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0xCDF87F9AAD28040F("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0xCDF87F9AAD28040F("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_650()
{
	Global_1660866.f_12 = -1;
	Global_1660866.f_13 = -1;
	Global_1660866.f_14 = -1;
}

void func_651(int iParam0)
{
	Global_968398 = iParam0;
}

void func_652()
{
	Global_1626899 = 0;
	Global_1574410 = 4;
}

void func_653(bool bParam0)
{
	if (bParam0)
	{
		Global_1574423 = 1;
	}
	else
	{
		Global_1574423 = 0;
	}
}

void func_654()
{
	Global_1626900 = -1;
	Global_1626906 = 0;
	Global_1626901 = -1;
}

void func_655()
{
	Global_2544210.f_287 = 0;
	func_659(3782, 0, -1, 1);
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_657())
		{
			unk_0x4170FE884DF7426D(unk_0x7D2B9E6A64637269(), 5, 0, 0, 0);
			func_656();
		}
	}
}

void func_656()
{
	Global_77220 = 0;
	Global_77221 = -1;
	Global_77222 = -1;
	Global_77223 = -1;
	Global_77224 = -1;
	Global_77228 = -1;
}

bool func_657()
{
	return func_658(unk_0x7D2B9E6A64637269());
}

int func_658(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x094C1D2DFE050D6E(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x6471F4759775FCA4(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xF94D55021DC59203(iParam0, 5, iVar0, unk_0x288277F22D527487(iParam0, 5));
			if (unk_0x01758128AAB0BA8F(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0xF94D55021DC59203(iParam0, 5, iVar0, unk_0x288277F22D527487(iParam0, 5));
			if (unk_0x01758128AAB0BA8F(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_659(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
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
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_660()
{
	Global_2453009.f_843 = 0;
}

bool func_661()
{
	return Global_2453009.f_843;
}

void func_662(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_664(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22670.f_8674)
	{
		unk_0x956EB3331C33B055(15);
		Global_22670.f_8674 = 0;
	}
	unk_0x643A5EAD42A4060C(0f);
	if (Global_22670.f_5885[iVar0])
	{
		unk_0xE498E37B41AEA1DF(9, 0);
		Global_22670.f_5885[iVar0] = 0;
	}
	if (Global_22670.f_5871[iVar0])
	{
		unk_0xB5F867E143F78583("CommonMenu");
		Global_22670.f_5871[iVar0] = 0;
	}
	if (Global_22670.f_5878[iVar0])
	{
		unk_0xB5F867E143F78583("MPShopSale");
		Global_22670.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_663(&(Global_22670.f_5917[iVar0 /*10*/]));
		Global_22670.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22670.f_5978[iVar0] = 0;
	}
}

void func_663(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			unk_0x3D9BC07C93913E04(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_664(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x02BFF15CAA701972() && unk_0x8ED8428AB65B7367())
		{
			iParam2 = unk_0xC9D88F06B228AD40();
		}
	}
	StringCopy(&cVar0, unk_0x471C98FD94C0A5FD(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x15173FB88ABC94F9(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22670.f_5978[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22670.f_5978[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22670.f_5978[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_665()
{
}

void func_666(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2453009.f_669.f_9 == 0)
	{
		Global_1660891.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1660891[iVar1 /*42*/].f_3;
		Global_1660891[iVar1 /*42*/] = { Var0 };
		if (func_719())
		{
			Global_1660891[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1660891[iVar1 /*42*/].f_1 = func_140();
		Global_1660891[iVar1 /*42*/] = -1;
		Global_1660891[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!func_719() && !func_679()) && iParam0)
	{
		Global_1660891.f_1347 = 0;
		Global_1660891.f_1348 = 0;
	}
}

int func_667()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1660891[iVar0 /*42*/].f_1 != func_140())
		{
			if (Global_1660891[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_668()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_599();
	}
	return func_669(Global_4456448.f_85535);
}

int func_669(int iParam0)
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

void func_670(bool bParam0)
{
	struct<77> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1682372.f_37;
		Var0.f_33 = Global_1682372.f_33;
		Var0.f_30 = Global_1682372.f_30;
		Var0.f_39 = Global_1682372.f_39;
		Var0.f_20 = Global_1682372.f_20;
		Var0.f_15 = Global_1682372.f_15;
		Var0.f_35 = Global_1682372.f_35;
		Var0.f_36 = Global_1682372.f_36;
		Var0.f_31 = Global_1682372.f_31;
		Var0.f_34 = Global_1682372.f_34;
		Var0.f_27 = Global_1682372.f_27;
		Var0.f_28 = Global_1682372.f_28;
		Var0.f_32 = Global_1682372.f_32;
		Var0.f_29 = Global_1682372.f_29;
	}
	Global_1682372 = { Var0 };
}

void func_671(bool bParam0)
{
	struct<51> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1682286.f_2 };
		Var0.f_14 = Global_1682286.f_14;
		Var0.f_19 = Global_1682286.f_19;
		Var0.f_23 = Global_1682286.f_23;
		Var0.f_25 = Global_1682286.f_25;
		Var0.f_30 = Global_1682286.f_30;
		Var0.f_26 = Global_1682286.f_26;
		Var0.f_27 = Global_1682286.f_27;
		Var0.f_28 = Global_1682286.f_28;
		Var0.f_29 = Global_1682286.f_29;
		Var0.f_31 = Global_1682286.f_31;
		Var0.f_32 = Global_1682286.f_32;
		Var0.f_33 = Global_1682286.f_33;
		Var0.f_40 = Global_1682286.f_40;
		Var0.f_42 = Global_1682286.f_42;
		Var0.f_50 = Global_1682286.f_50;
		Var0.f_46 = Global_1682286.f_46;
	}
	Global_1682286 = { Var0 };
}

void func_672(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_675() && !func_604()) && Global_1660866.f_9 != 4) && !func_679())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_675() && !func_604()) && Global_1660866.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_673(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_674(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5B38E054B758C032(unk_0x8D896A7D8F933EE8(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x05351AF95891EE5C(unk_0x8D896A7D8F933EE8(iParam0), "MPBitset");
	}
	unk_0xC664C0067EEAB8D1(&iVar0, iParam1);
	unk_0x6C9577C090944B92(unk_0x8D896A7D8F933EE8(iParam0), "MPBitset", iVar0);
}

bool func_675()
{
	return Global_1660866.f_3;
}

bool func_676()
{
	return Global_2461742.f_7;
}

bool func_677()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_43.f_4, 8);
}

void func_678()
{
	Global_2453009.f_43.f_57 = 0;
}

bool func_679()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_43.f_4, 0);
}

void func_680()
{
	unk_0xC664C0067EEAB8D1(&(Global_959568.f_8), 8);
}

void func_681(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_11.f_1), 0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_11.f_1), 0);
	}
}

void func_682(int iParam0)
{
	if ((unk_0x02BFF15CAA701972() && !Global_1312878) && !Global_1312879)
	{
		if (((Global_2453903.f_3474 != 0 && Global_2453903.f_3474.f_1 != 0) && Global_2453903.f_3474.f_2 != 0) && Global_2453903.f_3474.f_3 != 0)
		{
			unk_0x58DEE6B926B69906(Global_2453903.f_3474, Global_2453903.f_3474.f_1, Global_2453903.f_3474.f_2, Global_2453903.f_3474.f_3, iParam0);
		}
	}
	func_683();
}

void func_683()
{
	Global_2453903.f_3474 = 0;
	Global_2453903.f_3474.f_1 = 0;
	Global_2453903.f_3474.f_2 = 0;
	Global_2453903.f_3474.f_3 = 0;
}

void func_684()
{
	Global_2453903.f_1.f_2801 = 1;
}

bool func_685()
{
	return unk_0x234B68AC2E35ED5A(Global_2453903.f_1.f_2809, 12);
}

void func_686(int iParam0)
{
	if (!func_679() || iParam0)
	{
		Global_1575116 = 0;
		Global_1575115 = 0;
	}
}

void func_687(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2453009.f_43 = -1;
	Global_2453009.f_43.f_139 = -1;
	Global_2453009.f_43.f_2 = -1;
	Global_2453009.f_43.f_5 = 0;
	Global_2453009.f_43.f_40 = 0;
	Global_2453009.f_43.f_3 = 0;
	Global_2453009.f_43.f_4 = 0;
	Global_2453009.f_43.f_42 = -1;
	Global_2453009.f_43.f_6 = { Var0 };
	Global_2453009.f_43.f_62 = 0;
	Global_2453009.f_43.f_137 = 0;
	Global_2453009.f_43.f_213 = 0;
	Global_2453009.f_43.f_428 = 0;
	Global_2453009.f_43.f_63 = 0;
	Global_2453009.f_43.f_138 = 0;
	Global_2453009.f_43.f_214 = 0;
	Global_2453009.f_43.f_429 = 0;
	Global_2453009.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2453009.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2453009.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2453009.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2453009.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2453009.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2453009.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2453009.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2453009.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2453009.f_43.f_430[iVar1] = 0;
		Global_2453009.f_43.f_445[iVar1] = 0;
		Global_2453009.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2453009.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2453009.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2453009.f_43.f_581 = 0;
			Global_2453009.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2453009.f_43.f_589[iVar1] = -1;
				Global_2453009.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2453009.f_43.f_55 = 0;
			Global_2453009.f_43.f_12 = { Var0 };
			Global_2453009.f_43.f_59 = 0;
			Global_2453009.f_43.f_575 = { 0f, 0f, 0f };
			Global_2453009.f_43.f_578 = { 0f, 0f, 0f };
			Global_2453009.f_43.f_58 = 0;
			Global_2453009.f_43.f_57 = 0;
			Global_2453009.f_43.f_1 = -1;
			Global_2453009.f_43.f_601 = -1;
		}
	}
}

void func_688()
{
	Global_2461742.f_8 = 0;
	Global_2461742.f_7 = 0;
}

void func_689()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	uVar0 = unk_0xDE8CC2CD33BB8AA7();
	iVar1 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_968149, unk_0x551F46B3C7DFB654()));
	unk_0x2AF2B2498CD975C5(Global_4456448, &(Global_4456448.f_85822), uVar0, iVar1, Global_968149.f_1);
	func_690();
}

void func_690()
{
	Global_968149 = 0;
	Global_968149.f_1 = 0;
}

bool func_691()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

bool func_692()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

int func_693()
{
	if (func_345() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

void func_694()
{
	Global_1669840.f_1774 = 0;
}

void func_695()
{
	Global_2453009.f_836 = 0;
}

bool func_696()
{
	return Global_2453009.f_836;
}

void func_697()
{
	Global_19991 = 0;
	func_698();
}

void func_698()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

bool func_699(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_700(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

int func_701(int iParam0)
{
	if (iParam0 == Global_262145.f_5011[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5011[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5011[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5011[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5011[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5011[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5011[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5011[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5011[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5011[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5011[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5011[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5011[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5011[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5011[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5011[15])
	{
		return 15;
	}
	return -1;
}

void func_702()
{
	Global_2453009.f_700 = 0;
}

void func_703()
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_4 = -1;
	iVar1 = unk_0x1146A9AE09CE2B14();
	if (iVar1 != -1)
	{
		Global_1627455[iVar1 /*105*/] = { Var0 };
	}
}

void func_704()
{
	Global_1660866.f_7 = 0;
}

void func_705(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2453009.f_669.f_3 = { Var0 };
	Global_2453009.f_669 = 0;
	Global_2453009.f_669.f_1 = 0;
	Global_2453009.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2453009.f_669.f_2 = 0;
		Global_2453009.f_669.f_13 = 0;
		Global_2453009.f_669.f_14 = 0;
		Global_2394835 = 0;
		if (bParam1)
		{
			Global_2453009.f_669.f_9 = 0;
			Global_2453009.f_669.f_10 = 0;
			Global_2453009.f_669.f_11 = 0;
			Global_2453009.f_669.f_16 = -1;
		}
		if (iParam2 && !unk_0xE45310E861787FC2())
		{
			Global_1660891.f_1347 = 0;
			Global_1660891.f_1348 = 0;
		}
		if (unk_0x1146A9AE09CE2B14() != -1)
		{
			Global_1627455[unk_0x1146A9AE09CE2B14() /*105*/].f_2 = 0;
			Global_1627455[unk_0x1146A9AE09CE2B14() /*105*/] = 0;
		}
	}
}

void func_706()
{
	Global_2453009.f_669.f_12 = 0;
}

bool func_707()
{
	return Global_2453009.f_669.f_9 > 0;
}

var func_708()
{
	return Global_2453009.f_669.f_12;
}

void func_709()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_96.f_32), 11);
}

void func_710()
{
	unk_0xC664C0067EEAB8D1(&(Global_1627455[unk_0x1146A9AE09CE2B14() /*105*/].f_29), 3);
}

void func_711()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1575129[iVar0] = 0;
		iVar0++;
	}
}

void func_712()
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (iVar0 != -1)
	{
		Global_1627455[iVar0 /*105*/].f_5 = 0;
	}
}

void func_713()
{
	Global_2463967 = 0;
	Global_2463968 = 0;
	Global_2463969 = 0;
	Global_2463970 = 0;
}

void func_714()
{
	Global_2453009.f_43.f_56 = 0;
}

void func_715()
{
	Global_2453009.f_43.f_58 = 0;
}

void func_716()
{
	if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) != Global_1390636)
	{
		if (unk_0x264EE27FDED1DCA1() == 0 && Global_1390636 == 3)
		{
			Global_1390636 = unk_0x5F95E51ABC3FC59A(0);
		}
		unk_0xA01D7927903507FB(unk_0x264EE27FDED1DCA1(), Global_1390636);
	}
}

int func_717()
{
	if (func_718() != 2)
	{
		return 0;
	}
	if (!func_679() && !((Global_1677707 || Global_1312809) && func_569()))
	{
		return 0;
	}
	return 1;
}

int func_718()
{
	return Global_2453009.f_43.f_40;
}

bool func_719()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_669.f_1, 0);
}

void func_720(int iParam0)
{
	if (unk_0x3640D836D145B814())
	{
		unk_0x9F3A2A1234329C4B(iParam0);
	}
}

void func_721(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x61BE49A80917237B();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_199, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1590908[iVar0 /*874*/].f_199), 0);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_199, 0))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1590908[iVar0 /*874*/].f_199), 0);
		}
	}
}

void func_722()
{
	unk_0xC664C0067EEAB8D1(&(Global_2453009.f_2), 31);
}

void func_723()
{
	Global_2441237.f_2012.f_816 = func_140();
}

void func_724()
{
	Global_2453009.f_884 = 0;
}

void func_725()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_728(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1678174.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_727();
	func_726();
	Global_1678174 = 0;
}

void func_726()
{
	Global_1678174.f_4 = 0;
}

void func_727()
{
	Global_1678174.f_3 = 0;
}

void func_728(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1678174.f_5[iParam0 /*53*/] = { Var0 };
}

void func_729()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18), 20);
}

void func_730(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_731()
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_836), 3);
}

void func_732(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_224();
	if (bParam0)
	{
		func_314(1);
		unk_0x66AE54CE92457FEE(1);
	}
	unk_0x1036762BD3781C84();
	func_217();
	unk_0xB9756A98505CE062(0);
	func_253(0, 1, 1, 0, 0, bParam2, 0);
	func_738();
	func_205(12, 0, -1);
	func_206(1);
	unk_0x2CA971FF57ACA369(0, -1);
	unk_0xDD7C2F9844E745B1(1);
	unk_0x4200138CBB376D4D(1);
	func_737();
	unk_0x4F62815699141072(1);
	if (unk_0x02BFF15CAA701972())
	{
		if (bParam3)
		{
			if (unk_0x2D61488C347F8402())
			{
				unk_0x2CB73B1E6C06410D(0, 0);
			}
		}
	}
	func_260(0);
	if (((((func_124() == 0 && func_736() == 0) && iParam1) && !func_257(unk_0x1146A9AE09CE2B14())) && !unk_0xCE84F8AB9BD41C13()) && func_335())
	{
		func_367(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
	}
	Global_2441237.f_3865 = 0;
	func_733();
}

void func_733()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x02BFF15CAA701972() && func_199(&Global_2553289))
	{
		if (!func_198(&Global_2553289, 3500, 1) || unk_0x2A8355DBDB78BFD9(unk_0x1146A9AE09CE2B14()))
		{
			if (!func_735())
			{
				if (unk_0x8B6A925F148E0E94())
				{
					func_349(&Global_2553289, 1, 0);
				}
				else if (!func_255(unk_0x1146A9AE09CE2B14(), 0))
				{
					if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), 1992968846) != 1 && unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), 1992968846) != 0)
					{
						unk_0x127E1B9B961298DF(1);
						unk_0x66A94F94A5DD05CE(unk_0x1146A9AE09CE2B14(), 1);
					}
					unk_0x93500360FCCB65F3(unk_0x7D2B9E6A64637269(), 255, 0);
				}
			}
			else
			{
				func_349(&Global_2553289, 1, 0);
			}
		}
		else
		{
			if (unk_0x02BFF15CAA701972())
			{
				unk_0xFCFF2C571D89D3FF(unk_0x7D2B9E6A64637269());
			}
			func_197(&Global_2553289);
		}
	}
	if (Global_2553293 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0x234B68AC2E35ED5A(Global_2553293, iVar0))
			{
				iVar1 = unk_0xC502CD39B4994F3A(iVar0);
				if (func_14(iVar1, 1, 1))
				{
					func_734(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_734(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2553293, iParam0) && unk_0x02BFF15CAA701972())
	{
		if (!func_198(&(Global_2553294[iParam0 /*2*/]), 3500, 1) || unk_0x2A8355DBDB78BFD9(iParam0))
		{
			if (!func_735())
			{
				if (unk_0x8B6A925F148E0E94())
				{
					func_349(&(Global_2553294[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_255(iParam0, 0))
				{
					unk_0x66A94F94A5DD05CE(iParam0, 1);
					if (!unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
					{
						unk_0x93500360FCCB65F3(unk_0xD56332194D622ECE(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_349(&(Global_2553294[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				unk_0xFCFF2C571D89D3FF(unk_0xD56332194D622ECE(iParam0));
			}
			func_197(&(Global_2553294[iParam0 /*2*/]));
			unk_0xC664C0067EEAB8D1(&Global_2553293, iParam0);
		}
	}
}

int func_735()
{
	if (unk_0x2CA4B93E310C1860() || unk_0x2D61488C347F8402())
	{
		return 1;
	}
	return 0;
}

bool func_736()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009, 7);
}

void func_737()
{
	Global_22531.f_5 = 0;
}

void func_738()
{
	func_206(1);
	func_205(4, 0, -1);
	func_205(6, 0, -1);
	func_205(7, 0, -1);
	func_205(3, 0, -1);
	func_205(1, 0, -1);
	func_205(2, 0, -1);
	func_205(11, 0, -1);
	func_205(13, 0, -1);
	func_205(14, 0, -1);
	func_205(16, 0, -1);
}

void func_739(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312466)
	{
		if (!func_775())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574658[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_773(unk_0x1146A9AE09CE2B14(), bParam0);
	iVar2 = func_771(iVar1, bParam0);
	if (!func_770(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574658[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574658[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 280)
	{
		iVar3 = func_769(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_767(iVar4))
			{
				func_757(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_750(func_751(59, 0, 0), 0);
	func_748(func_751(135, 0, 0), 1);
	func_747(func_751(22, 0, 0), func_751(73, 0, 0));
	if (func_775())
	{
		if (func_506(77, -1))
		{
			func_746(1);
			func_745(1);
		}
	}
	if (func_744() || func_743())
	{
		func_32(77, 1, -1, 1);
		if (unk_0x02BFF15CAA701972())
		{
			func_740(28, 1, 0);
			func_740(29, 1, 0);
			func_740(30, 1, 0);
			func_740(31, 1, 0);
			func_740(32, 1, 0);
			func_740(33, 1, 0);
			func_740(34, 1, 0);
			func_740(35, 1, 0);
			func_740(36, 1, 0);
			func_740(37, 1, 0);
			func_740(38, 1, 0);
		}
	}
	if (func_751(21, 0, 0))
	{
		unk_0xA4ED480797ACC4C3(0);
	}
	Global_968399 = 0;
}

void func_740(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_99422.f_18[iParam0])
			{
				if (func_742(iParam0) == 3 && !func_25(iParam0))
				{
					func_741(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_409(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_409(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_409(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_409(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_409(iParam0);
	}
}

void func_741(int iParam0)
{
	if (Global_99422.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
	}
	return 6;
}

bool func_743()
{
	return Global_1312890;
}

bool func_744()
{
	return Global_1312892;
}

void func_745(bool bParam0)
{
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	func_740(28, bParam0, 0);
	func_740(30, bParam0, 0);
	func_740(31, bParam0, 0);
	func_740(33, bParam0, 0);
	func_740(34, bParam0, 0);
	func_740(38, bParam0, 0);
}

void func_746(bool bParam0)
{
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	func_740(29, bParam0, 0);
	func_740(32, bParam0, 0);
	func_740(36, bParam0, 0);
	func_740(35, bParam0, 0);
	func_740(37, bParam0, 0);
}

void func_747(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_740(0, bParam0, 1);
	func_740(1, bParam0, 1);
	func_740(2, bParam0, 1);
	func_740(3, bParam0, 1);
	func_740(4, bParam0, 1);
	func_740(5, bParam0, 1);
	func_740(6, bParam0, 1);
	func_740(7, bParam0, bVar0);
	func_740(8, bParam0, 1);
	func_740(9, bParam0, 1);
	func_740(10, bParam0, 1);
	func_740(11, bParam0, 1);
	func_740(12, bParam0, bVar0);
	func_740(13, bParam0, 1);
	func_740(21, bParam0, 1);
	func_740(14, bParam0, 1);
	func_740(15, bParam0, 1);
	func_740(16, bParam0, 1);
	func_740(17, bParam0, 1);
	func_740(18, bParam0, 1);
	func_740(19, bParam0, 1);
	func_740(20, bParam0, 1);
	func_740(22, bParam0, 1);
	func_740(23, bParam0, 1);
	func_740(24, bParam0, 1);
	func_740(25, bParam0, 1);
	func_740(26, bParam0, 1);
	func_740(27, bParam0, 1);
	func_410(1, !bParam1);
	if (!bVar0)
	{
		func_741(12);
	}
}

void func_748(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	uVar0 = func_749(0);
	if (Global_262145.f_63 == 1 && func_751(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_740(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_741(44);
		}
	}
	if (bParam0)
	{
		if (func_627(0) > 1)
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_1798), 10);
		}
	}
}

int func_749(bool bParam0)
{
	var uVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1789, 26))
		{
			uVar0 = func_27(1192, -1, 0);
			if (!unk_0x234B68AC2E35ED5A(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_506(122, -1);
}

void func_750(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	uVar0 = func_749(0);
	func_740(39, bParam0, 0);
	func_740(40, bParam0, 0);
	func_740(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_740(43, bParam0, 0);
		func_740(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_741(39);
		}
		if (!func_25(40))
		{
			func_741(40);
		}
		if (!func_25(41))
		{
			func_741(41);
		}
		if (!func_25(42))
		{
			func_741(42);
		}
		if (!func_25(43))
		{
			func_741(43);
		}
	}
}

bool func_751(int iParam0, bool bParam1, bool bParam2)
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
		if (func_753(unk_0x1146A9AE09CE2B14(), 85))
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
	if (func_744() || func_743())
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
			if (func_752())
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

int func_752()
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
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	uVar0 = Global_1390515[func_28(-1)];
	if (unk_0x234B68AC2E35ED5A(uVar0, 7))
	{
		unk_0x191DDA30577F440A(&(Global_2544210.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_753(int iParam0, int iParam1)
{
	if (!func_775())
	{
		return 0;
	}
	if (func_756())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_754(&(Global_1590908[iParam0 /*874*/].f_745), func_755(iParam1));
}

bool func_754(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2);
}

int func_755(int iParam0)
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

bool func_756()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_143, 3);
}

void func_757(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_766(-1))
			{
				if (!func_775())
				{
					return;
				}
			}
			if (!func_766(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_765() && !func_764())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_763())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_766(-1))
				{
					if (!func_758())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x191DDA30577F440A(&(Global_1574658[iVar1]), iVar0);
	}
}

int func_758()
{
	var uVar0;
	
	if (func_762(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	uVar0 = Global_1390515[func_28(-1)];
	if (unk_0x234B68AC2E35ED5A(uVar0, 2))
	{
		func_759(1);
		return 1;
	}
	return 0;
}

void func_759(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 25))
		{
			func_760(unk_0x1146A9AE09CE2B14(), 12);
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 25);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 25))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139), 25);
	}
}

void func_760(int iParam0, int iParam1)
{
	func_761(&(Global_1590908[iParam0 /*874*/].f_745), func_755(iParam1));
}

int func_761(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2))
	{
		unk_0x191DDA30577F440A(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

bool func_762(int iParam0)
{
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 25);
}

int func_763()
{
	var uVar0;
	
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 6))
	{
		return 1;
	}
	uVar0 = Global_1390515[func_28(-1)];
	if (unk_0x234B68AC2E35ED5A(uVar0, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 6))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_1794), 6);
		}
		return 1;
	}
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	return 0;
}

bool func_764()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_143, 7);
}

int func_765()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	return func_506(121, -1);
}

bool func_766(int iParam0)
{
	return func_506(123, iParam0);
}

int func_767(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			uVar0 = func_27(func_768(iParam0), -1, 0);
			if (unk_0x234B68AC2E35ED5A(uVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_768(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
		
		case 1:
			return 1202;
		
		case 2:
			return 1203;
		
		case 3:
			return 1204;
		
		case 4:
			return 1205;
		
		case 5:
			return 1207;
		
		case 6:
			return 3817;
		
		case 7:
			return 4020;
		
		case 8:
			return 5474;
		
		default:
	}
	return 1201;
}

int func_769(int iParam0)
{
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_766(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_770(int iParam0)
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	return func_506(119, iParam0);
}

int func_771(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_772(iParam0, 0);
}

int func_772(int iParam0, int iParam1)
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

int func_773(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_774(iParam0);
}

int func_774(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_28(-1)];
			}
			else if (func_60(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_28(-1)];
	}
	return 0;
}

int func_775()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_744())
	{
		return 1;
	}
	if (func_743())
	{
		return 1;
	}
	return func_506(120, -1);
}

int func_776()
{
	var uVar0;
	
	func_781(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_489())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_780())
	{
		return 1;
	}
	if (func_779(159))
	{
		if (!func_778())
		{
			return 1;
		}
	}
	if (func_779(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_777() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_777()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_777()
{
	switch (func_19())
	{
		case 0:
			return func_377();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_778()
{
	return Global_2453009.f_698;
}

int func_779(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_780()
{
	return Global_2463497;
}

void func_781(var uParam0)
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
					func_782(iVar0);
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

void func_782(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_783(uVar2, &bVar3))
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

int func_783(int iParam0, var uParam1)
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

void func_784()
{
	wait(0);
}

void func_785(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	var uVar0;
	
	unk_0x35BEDD7AFD26FCD5(2, 0, Param0.f_16);
	func_790(0, -1, 0);
	unk_0xF784CE07ED70869A(&Local_414, 7);
	unk_0xC84352B5E80ABF68(&Local_581, 11);
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] = 16;
	if (bLocal_590)
	{
		if (!unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
		{
			unk_0x8BA9BCDD56AA7115(800);
		}
		if (!unk_0xD09C9D030AFD3F25())
		{
			if (!unk_0xBBFCE82595FCF3E6())
			{
				uVar0 = unk_0x1146A9AE09CE2B14() + 32;
				unk_0xAC5B2506743F67DF(1, uVar0);
				func_209(1);
			}
		}
	}
	unk_0x54BBD34B26EF27D9(1);
	unk_0xCE293C7793B5EC3F(1);
	if (!func_789())
	{
		func_420(0);
	}
	unk_0x87F1904AB605184A(0);
	func_730(iLocal_61, 1);
	func_422(1);
	if (!bLocal_590)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			func_367(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
		}
	}
	Global_2544210.f_1789 = 0;
	unk_0x6FF312B4049B4865(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_788();
	func_786();
	Local_581[unk_0xDD0E57E73E5C4BF6() /*5*/] = 0;
}

void func_786()
{
	unk_0x7AF2C19FB25152E6(1);
	func_787(1, -1);
	unk_0x72C4FCBC90F19F80(1);
	if (func_506(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2453009.f_743 = 1;
}

void func_787(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xB267FF1B9BA45091(0, iParam1);
			break;
		
		default:
			uVar1 = func_436(iParam1);
			iVar0 = unk_0xC82CD1DB42480082(uVar1);
			if (unk_0x234B68AC2E35ED5A(iVar0, iParam0))
			{
				unk_0xC664C0067EEAB8D1(&iVar0, iParam0);
				unk_0xB267FF1B9BA45091(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_32(120, 0, iParam1, 1);
			func_32(124, 0, iParam1, 1);
			func_32(115, 0, iParam1, 1);
			func_32(119, 0, iParam1, 1);
			break;
	}
}

void func_788()
{
	unk_0x5C679902079A7E80(&uLocal_584);
	unk_0xCC5ED49CF9C9215F(0, 0, 0);
	unk_0xFBF1F1BE9D437D22(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x1BBD0A5729AB1226(uLocal_584);
}

int func_789()
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
		if (func_489())
		{
			return 0;
		}
		if (func_779(157))
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

int func_790(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_791();
			}
			else
			{
				return 0;
			}
		}
		if (!func_400())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_791();
					}
					else
					{
						return 0;
					}
				}
				if (func_489())
				{
					if (!bParam2)
					{
						func_791();
					}
					else
					{
						return 0;
					}
				}
				if (func_779(157))
				{
					if (!bParam2)
					{
						func_791();
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
					func_791();
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
				func_791();
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
			func_791();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_791()
{
	unk_0x4BFE89D21F9885DC();
}

