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
	if (unk_0x9315DBF7D972F07A())
	{
		func_794(ScriptParam_596);
	}
	while (true)
	{
		func_793();
		if (func_785())
		{
			func_421(1);
		}
		if (func_418(0))
		{
			Local_581[unk_0xF1354995C6159A78() /*5*/] = 3;
		}
		if (func_417(unk_0xF1354995C6159A78()) > -1)
		{
			unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
		}
		switch (func_416(unk_0xF1354995C6159A78()))
		{
			case 0:
				if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 10))
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 10);
					}
				}
				unk_0x249A0D3C5714BCF4("FMINT", 0);
				if (func_415() && unk_0x5FABFB823FD821D4("FMINT", 0))
				{
					if (func_414() > 0)
					{
						func_413(&uLocal_249, 1, 0, "Lamar", 0, 1);
						func_412(0);
						func_411(4, 1);
						func_411(1, 1);
						func_411(0, 1);
						func_411(2, 1);
						func_411(3, 0);
						func_409(iLocal_61, 1);
						Local_581[unk_0xF1354995C6159A78() /*5*/] = 2;
						if (bLocal_590)
						{
							Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = -2;
						}
						else
						{
							Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_414() == 4)
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/] = 4;
				}
				if (func_414() == 6 && Local_581[unk_0xF1354995C6159A78() /*5*/] < 4)
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_387();
				func_23();
				if (func_414() == 4)
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/] = 4;
				}
				if (func_414() == 6 && Local_581[unk_0xF1354995C6159A78() /*5*/] < 4)
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_581[unk_0xF1354995C6159A78() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_414.f_5));
				if (func_20(&(Local_414.f_5)))
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_60);
				Local_581[unk_0xF1354995C6159A78() /*5*/] = 6;
			
			case 6:
				func_421(0);
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_414())
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
		if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 1))
		{
			return 1;
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 2))
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
	if (unk_0x54E30A65F4FA4962())
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 3))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 3);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 4))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 2))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 4);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 5))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 3))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 5);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 6))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 4))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 6);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 7))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 5))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 7);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 8))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 6))
			{
				unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 8);
			}
		}
		switch (Local_414.f_2)
		{
			case 0:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 3))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						unk_0x371D594409A68A18(unk_0xA5677134B9672173(Local_414.f_3), 1, 0, 0);
						Local_414.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 4))
				{
					Local_414.f_2 = 1;
				}
				break;
			
			case 1:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 5))
				{
					Local_414.f_2 = 3;
				}
				break;
			
			case 3:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 6))
				{
					Local_414.f_2 = 4;
				}
				break;
			
			case 4:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 7))
				{
					Local_414.f_2 = 5;
				}
				break;
			
			case 5:
				if (unk_0xE2D0C323A1AE5D85(Local_414.f_1, 8))
				{
					Local_414.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)
{
	if (func_9(Global_2810287.f_837) && func_9(Global_2810287.f_838))
	{
		if (!unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (func_6(uParam0, Global_2810287.f_837, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x84934728F6567814(unk_0xA5677134B9672173(*uParam0), 1);
			}
		}
		if (!unk_0xCCDCD6672DAE6835(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2810287.f_838, -1, 1, 1, 1))
			{
				unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(*uParam1), 1);
				unk_0xF1A23B343DFEDFD0(Global_2810287.f_837);
				unk_0xF1A23B343DFEDFD0(Global_2810287.f_838);
				unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(*uParam0), 0);
				unk_0x5D1D64E01B76705C(unk_0x8AF984152F749D80(*uParam1), 1);
				func_413(uParam4, 8, unk_0x8AF984152F749D80(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0xCCDCD6672DAE6835(*uParam0) || !unk_0xCCDCD6672DAE6835(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
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
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_7(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
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
		Global_2667222.f_2919[1 /*6*/].f_3 = fParam1;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam3;
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

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			if (bLocal_588)
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 2))
				{
					if (unk_0xE2D0C323A1AE5D85(Local_581[iVar0 /*5*/].f_3, 2))
					{
						unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 2);
					}
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(Local_414.f_1, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Local_581[iVar0 /*5*/].f_3, 1))
				{
					unk_0xCED9E32812D6C7C7(&(Local_414.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0x9E2D6C50374FCFA9(), 1))
	{
		return;
	}
	if (!func_13(unk_0x9E2D6C50374FCFA9()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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
	if (Global_1853128[iParam0 /*888*/] == -1)
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
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_31505;
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
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
		if (unk_0x54E30A65F4FA4962())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_417(unk_0xF1354995C6159A78()))
	{
		case -2:
			func_204();
			break;
		
		case -1:
			func_203();
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
				unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 2);
				Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 99;
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
		return unk_0xE2D0C323A1AE5D85(Global_100026.f_1392[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_19() == 0)
		{
			return unk_0xE2D0C323A1AE5D85(func_27(func_30(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_28(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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

int func_29()
{
	return Global_1574907;
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
			return 10851;
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
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12597;
}

void func_31()
{
	int iVar0;
	
	if (func_202())
	{
		if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			func_201(0);
		}
	}
	if (!func_200(&uLocal_239))
	{
		func_22(&uLocal_239, 0, 0);
	}
	if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 21))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_582, 21);
	}
	if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 3))
	{
		if (!func_200(&uLocal_237))
		{
			func_22(&uLocal_237, 0, 0);
		}
		else if (unk_0xE2D0C323A1AE5D85(uLocal_582, 21))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					if (func_199(&uLocal_237, 3000, 0))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 3);
					}
				}
			}
		}
		if (func_199(&uLocal_237, 40000, 0))
		{
			unk_0xCED9E32812D6C7C7(&uLocal_582, 3);
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 16))
	{
		if (!unk_0xF847447D4467709D())
		{
			if (!unk_0xF1EC2C71FD1371B8())
			{
				unk_0xCED9E32812D6C7C7(&uLocal_582, 16);
				func_198(&uLocal_237);
			}
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 2))
	{
		if (!func_200(&uLocal_243))
		{
			func_22(&uLocal_243, 0, 0);
		}
		else if (!unk_0xE2D0C323A1AE5D85(uLocal_583, 1))
		{
			if (func_199(&uLocal_243, 10000, 0))
			{
				unk_0xCED9E32812D6C7C7(&uLocal_583, 1);
				func_198(&uLocal_243);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(uLocal_582, 19))
		{
			if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 18))
			{
				if (!func_196() || func_199(&uLocal_237, 5000, 0))
				{
					func_195(0);
					unk_0xCED9E32812D6C7C7(&uLocal_582, 18);
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 0);
						unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 0);
						unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 0);
					}
				}
			}
		}
	}
	if (unk_0xE2D0C323A1AE5D85(uLocal_582, 18))
	{
		if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 2))
		{
			if (unk_0xE9E8955A780DDA01())
			{
				iVar0 = 0;
				unk_0xCED9E32812D6C7C7(&iVar0, 3);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				unk_0xCED9E32812D6C7C7(&iVar0, 5);
				if (func_99(&uLocal_249, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_98(1);
					unk_0xCED9E32812D6C7C7(&uLocal_582, 2);
					if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 20))
					{
						func_83(19, 3, 1);
						unk_0xCED9E32812D6C7C7(&uLocal_582, 20);
					}
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 1, 1);
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
					if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 12))
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 0, 1);
							unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 1);
							unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 1);
							unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 1);
						}
						unk_0xCED9E32812D6C7C7(&uLocal_582, 12);
						func_22(&uLocal_241, 0, 0);
						func_22(&uLocal_245, 0, 0);
					}
				}
			}
		}
		if (unk_0xE2D0C323A1AE5D85(uLocal_582, 12))
		{
			if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 17))
			{
				if (!unk_0xF1EC2C71FD1371B8())
				{
					func_75();
					unk_0xCED9E32812D6C7C7(&uLocal_582, 17);
					func_198(&uLocal_237);
				}
			}
			else if (!func_196())
			{
				if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 23))
				{
					if (func_199(&uLocal_245, 4500, 0))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 23);
						unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 3);
					}
				}
				if (func_199(&uLocal_241, 15000, 0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 22))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 22);
					}
				}
				if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					if (unk_0xE2D0C323A1AE5D85(uLocal_582, 14))
					{
						unk_0xB0550BC91B0159D6(&uLocal_582, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (unk_0xE2D0C323A1AE5D85(uLocal_582, 13))
						{
							unk_0xB0550BC91B0159D6(&uLocal_582, 13);
						}
						if (unk_0xE2D0C323A1AE5D85(uLocal_582, 25) || (!unk_0xE2D0C323A1AE5D85(uLocal_582, 25) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)))
						{
							if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 0))
							{
								if (unk_0xE2D0C323A1AE5D85(uLocal_582, 15))
								{
									unk_0xB0550BC91B0159D6(&uLocal_582, 15);
								}
								if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									unk_0xCED9E32812D6C7C7(&uLocal_582, 0);
									unk_0xCED9E32812D6C7C7(&uLocal_582, 25);
									if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
									{
										if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2))
										{
											unk_0xAAD76B24A5282FDD(Global_100026.f_255[iLocal_61], 1);
										}
										func_409(iLocal_61, 1);
									}
								}
							}
							else if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2))
							{
								if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
								{
									if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 15))
									{
										unk_0xAAD76B24A5282FDD(Global_100026.f_255[iLocal_61], 0);
										unk_0xCED9E32812D6C7C7(&uLocal_582, 15);
									}
								}
							}
							else if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
							{
								if (unk_0xE2D0C323A1AE5D85(uLocal_582, 15))
								{
									unk_0xAAD76B24A5282FDD(Global_100026.f_255[iLocal_61], 1);
									unk_0xB0550BC91B0159D6(&uLocal_582, 15);
								}
							}
						}
					}
					else
					{
						if (unk_0xE2D0C323A1AE5D85(uLocal_582, 0))
						{
							unk_0xB0550BC91B0159D6(&uLocal_582, 0);
						}
						if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							unk_0xCED9E32812D6C7C7(&uLocal_582, 13);
						}
					}
				}
				else if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 14))
				{
					unk_0x3410421C60BF7143(1);
					if (unk_0xE2D0C323A1AE5D85(uLocal_582, 0))
					{
						unk_0xB0550BC91B0159D6(&uLocal_582, 0);
					}
					if (unk_0xE2D0C323A1AE5D85(uLocal_582, 13))
					{
						unk_0xB0550BC91B0159D6(&uLocal_582, 13);
					}
					if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
					{
						unk_0xAAD76B24A5282FDD(Global_100026.f_255[iLocal_61], 0);
						unk_0x9705014C37E60003(Global_100026.f_255[iLocal_61], 0);
						func_409(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					unk_0xCED9E32812D6C7C7(&uLocal_582, 14);
				}
			}
		}
	}
	else if (func_199(&uLocal_239, 300000, 0))
	{
		unk_0xCED9E32812D6C7C7(&uLocal_582, 18);
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 0))
	{
		if (((unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_pistol"), 0) || unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_combatpistol"), 0)) || unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_appistol"), 0)) || unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_microsmg"), 0))
		{
			if (func_66())
			{
				func_61(1);
				unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 0);
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
	else if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 1);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				unk_0xCED9E32812D6C7C7(&uLocal_582, 31);
			}
			func_198(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 3;
				}
				else
				{
					Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_28(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
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
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
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

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		unk_0x1419D7B938CBFF2E(&(Global_1574747.f_12));
		func_39();
		unk_0xF4666BA5B36DBCB2();
	}
}

void func_39()
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

int func_40()
{
	if (!func_41())
	{
		return 0;
	}
	unk_0x09684FD679B0E474(&(Global_1574747.f_12));
	func_39();
	return unk_0xD7AA4C82B5D00977();
}

int func_41()
{
	if (Global_1574747 == 20)
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
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = func_58(unk_0x9E2D6C50374FCFA9());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xAB0692E771961C3E((iParam0 - iVar0));
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
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
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
		if (!unk_0xD487B8E9C523DEFD(func_29()) || unk_0xBA5B5030B7954DAA())
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
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_52(1, iParam4);
			Global_4529830 = 0;
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
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
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
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_49(&(Global_4528329[iParam0 /*85*/]));
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
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
				func_54(Global_4528329[iVar0 /*85*/], iVar0);
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
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_56(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_55();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_55()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_56(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_57()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
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
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return unk_0xEEE6DAFBF451B942(-1);
		}
		else if (func_60(iParam0))
		{
			return Global_1853128[iParam0 /*888*/].f_205.f_3;
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
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
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
		unk_0xB0550BC91B0159D6(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, iParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
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
		unk_0xCED9E32812D6C7C7(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, iParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_668[iParam0]), iParam1);
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
		if (!unk_0xE2D0C323A1AE5D85(Global_1923530, 19))
		{
			unk_0xCED9E32812D6C7C7(&Global_1923530, 19);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1923530, 19))
	{
		unk_0xB0550BC91B0159D6(&Global_1923530, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 1);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 0);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574747.f_59), 0);
}

void func_72()
{
	Global_1574747.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (Global_1574747 == 11)
	{
		return func_74(sParam0);
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_78(unk_0x9E2D6C50374FCFA9()) };
	bVar1 = unk_0xCA8CDFE6F0F62C7F();
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
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

int func_77(var uParam0)
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

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1637326.f_40 == 3;
}

int func_81()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
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
			if (iParam0 == 172 && !Global_2810287.f_6730)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77852)
			{
				if (iParam1 != 4)
				{
					if (Global_19954 != iParam1)
					{
						Global_8483[iParam1 /*4*/] = { func_85(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_85(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_85(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_85(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0xAEF70623D03F7B02(&(Global_1918[Global_8510 /*29*/].f_7)), 64);
	if (Global_8529 == 0)
	{
		unk_0x150D8F58B26E9F70("");
		StringCopy(&cVar1, unk_0xAEF70623D03F7B02(&(Global_8434[1 /*6*/])), 64);
		sVar2 = unk_0xAEF70623D03F7B02("CELL_253");
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x150D8F58B26E9F70("CELL_255");
		unk_0x26C23BE14F66F202(&(Global_8434[1 /*6*/]));
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xB0550BC91B0159D6(&Global_7824, 0);
}

struct<4> func_85(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_90()
{
	if (func_97(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_91();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_91()
{
	func_92();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_95(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_94(unk_0xE2D3D51028F0428A());
			if (func_93(iVar0) && (!func_97(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_93(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1918[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 17);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7825, 17);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_193())
	{
		return 0;
	}
	if (func_192())
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
	
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam3))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
	iVar1 = func_191(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		iVar2 = unk_0x2E87280918B16506(sParam7);
	}
	if (func_190(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_186(uParam6))
	{
		return 0;
	}
	if (func_183(iVar0, iVar1, iVar2))
	{
		if (func_182())
		{
			return 0;
		}
		func_181();
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
	Global_1637326.f_40.f_1 = iParam0;
	Global_1637326.f_40.f_2 = iParam1;
	Global_1637326.f_40.f_3 = iParam2;
	StringCopy(&(Global_1637326.f_40.f_4), sParam3, 16);
	Global_1637326.f_40.f_8 = iParam4;
	Global_1637326.f_40.f_9 = iParam5;
	Global_1637326.f_40.f_14 = uParam6;
	func_102(iParam4);
	func_181();
	Global_1637326.f_40.f_13 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 7000);
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
	Global_1637326.f_40.f_10 = 0;
}

void func_104()
{
	Global_1637326.f_40.f_10 = 1;
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
	return iParam0 > Global_1637326.f_40.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_180();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_177(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_174(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_177(uParam0, sParam3, sParam4);
		}
		return func_156(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_155(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_144(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
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
	
	func_142();
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
	Global_1637326.f_40.f_11 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam0);
	Global_1637326.f_40.f_12 = 1;
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
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1637326.f_40.f_13))
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
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
		if (unk_0xE2D0C323A1AE5D85(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_131(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(uParam4, 0))
	{
		func_113();
	}
	func_142();
	func_112();
	func_111();
	return 1;
}

void func_111()
{
	Global_1637326.f_57 = 0;
	Global_1637326.f_57.f_1 = 0;
}

void func_112()
{
	Global_1637326.f_40 = 3;
}

void func_113()
{
	unk_0xCED9E32812D6C7C7(&Global_7824, 8);
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
			Global_8531 = iParam6;
			unk_0xCED9E32812D6C7C7(&Global_4535327, 0);
		}
		return 1;
	}
	return 0;
}

int func_115(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_4535312 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_130() == 0)
	{
		func_128();
		return 0;
	}
	func_127(Global_4535311);
	StringCopy(&(Global_4534062[Global_4535311 /*104*/]), sParam1, 64);
	Global_4534062[Global_4535311 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4534062[Global_4535311 /*104*/].f_24 = iParam2;
	}
	Global_4534062[Global_4535311 /*104*/].f_25 = iParam7;
	Global_4534062[Global_4535311 /*104*/].f_26 = uParam8;
	Global_4534062[Global_4535311 /*104*/].f_29 = uParam9;
	Global_4534062[Global_4535311 /*104*/].f_30 = uParam12;
	Global_4534062[Global_4535311 /*104*/].f_31 = uParam11;
	Global_4534062[Global_4535311 /*104*/].f_28 = 0;
	Global_4534062[Global_4535311 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_33), sParam4, 64);
	Global_4534062[Global_4535311 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_50), sParam5, 64);
	Global_4534062[Global_4535311 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4534062[Global_4535311 /*104*/].f_83), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 3:
			Global_4534062[Global_4535311 /*104*/].f_99[Global_19954] = 1;
			break;
		
		case 0:
			Global_4534062[Global_4535311 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4534062[Global_4535311 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4534062[Global_4535311 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19954)
		{
			case 0:
				func_126(0);
				break;
			
			case 1:
				func_126(1);
				break;
			
			case 2:
				func_126(2);
				break;
			
			case 3:
				func_126(3);
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
				Global_4535312 = 1;
				break;
			
			case 0:
				Global_4535312 = 1;
				break;
			
			case 2:
				Global_4535312 = 1;
				break;
			
			case 1:
				Global_4535312 = 1;
				break;
			}
	}
	Global_22354[Global_4535311] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_19943, 1);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_124(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973340 != -1 && iParam0 == Global_1973340)
	{
		bVar1 = true;
	}
	func_116(iParam0, sParam1, bVar1, func_120(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_116(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_117())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, -1180597171, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973340 = -1;
	}
}

int func_117()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_141())
	{
		return 0;
	}
	if (func_118(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
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
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

var func_120(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

void func_121(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112915.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112915.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112915.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77852)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43785;
											break;
										
										case 1:
											iVar6 = Global_43786;
											break;
										
										case 2:
											iVar6 = Global_43787;
											break;
										
										default:
											break;
									}
									func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_7830);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xE2D0C323A1AE5D85(Global_7825, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_123(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_122(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_122(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_123(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_123(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(sParam9))
	{
		func_123(sParam9);
	}
	if (!unk_0xACC32B78196FBC2A(sParam10))
	{
		func_123(sParam10);
	}
	if (!unk_0xACC32B78196FBC2A(sParam11))
	{
		func_123(sParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_123(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

bool func_125()
{
	return Global_1575046;
}

void func_126(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112915.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_127(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_4534062[iParam0 /*104*/].f_18 = uVar0;
	Global_4534062[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4534062[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4534062[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4534062[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4534062[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4535311 = 11;
	Global_4534062[Global_4535311 /*104*/].f_18 = -1;
	Global_4534062[Global_4535311 /*104*/].f_18.f_1 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_2 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_3 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_129(Global_4534062[iVar2 /*104*/].f_18, Global_4534062[Global_4535311 /*104*/].f_18))
		{
			Global_4535311 = iVar2;
		}
		iVar2++;
	}
	Global_4534062[Global_4535311 /*104*/].f_24 = 1;
}

int func_129(struct<6> Param0, struct<6> Param1)
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

int func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4534062[iVar2 /*104*/].f_24 == 0)
		{
			Global_4535311 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4535311 = 11;
	Global_4534062[Global_4535311 /*104*/].f_18 = -1;
	Global_4534062[Global_4535311 /*104*/].f_18.f_1 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_2 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_3 = 0;
	Global_4534062[Global_4535311 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4534062[iVar2 /*104*/].f_24 == 0 || Global_4534062[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_129(Global_4534062[iVar2 /*104*/].f_18, Global_4534062[Global_4535311 /*104*/].f_18))
			{
				Global_4535311 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4535311 == 11)
	{
		return 0;
	}
	Global_4534062[Global_4535311 /*104*/].f_99[0] = 0;
	Global_4534062[Global_4535311 /*104*/].f_99[1] = 0;
	Global_4534062[Global_4535311 /*104*/].f_99[2] = 0;
	return 1;
}

int func_131(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
			Global_8531 = iParam10;
			unk_0xCED9E32812D6C7C7(&Global_4535327, 0);
		}
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_133(2, iParam1);
	return iParam0;
}

void func_133(int iParam0, var uParam1)
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

char* func_134(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x3C57C2F07FEE34D2(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_133(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xAEF70623D03F7B02(sParam0);
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		func_136(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_136(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_138(iParam0) != -1)
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
	if (func_137(iParam0))
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

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_139(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_139(int iParam0)
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
	func_140(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_141();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

int func_141()
{
	return -1;
}

void func_142()
{
	Global_1637326.f_40.f_9 = 4;
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_142();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_145(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1637326.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22346 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
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
		if (unk_0xE2D0C323A1AE5D85(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_154(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_147(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(uParam4, 0))
	{
		func_113();
	}
	func_146();
	func_112();
	func_111();
	return 1;
}

void func_146()
{
	Global_1637326.f_40.f_9 = 3;
}

int func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xB0550BC91B0159D6(&Global_7824, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_148(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8531 = iParam6;
			Global_8434[3 /*6*/] = { func_85(iParam0) };
			Global_8511 = iParam0;
			unk_0xCED9E32812D6C7C7(&Global_7824, 1);
			unk_0xCED9E32812D6C7C7(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

int func_148(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_112915.f_14051[Global_19954 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_153() == 0)
	{
		func_151();
		return 0;
	}
	func_150(Global_22352);
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/]), sParam1, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112915.f_14141[Global_22352 /*104*/].f_24 = iParam2;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_25 = iParam7;
	Global_112915.f_14141[Global_22352 /*104*/].f_26 = uParam8;
	Global_112915.f_14141[Global_22352 /*104*/].f_29 = uParam9;
	Global_112915.f_14141[Global_22352 /*104*/].f_30 = uParam12;
	Global_112915.f_14141[Global_22352 /*104*/].f_31 = uParam11;
	Global_112915.f_14141[Global_22352 /*104*/].f_28 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_33), sParam4, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_50), sParam5, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_83), sParam15, 64);
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 10))
	{
		Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 1;
		Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 1;
		Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 1;
		Global_8530 = 4;
		func_126(0);
		func_126(2);
		func_126(1);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 3:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[Global_19954] = 1;
				break;
			
			case 0:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19954)
			{
				case 0:
					func_126(0);
					Global_8530 = 0;
					break;
				
				case 1:
					func_126(1);
					Global_8530 = 1;
					break;
				
				case 2:
					func_126(2);
					Global_8530 = 2;
					break;
				
				case 3:
					func_126(3);
					Global_8530 = 3;
					break;
				
				default:
					Global_8530 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 10))
		{
			Global_112915.f_14051[0 /*20*/].f_17 = 1;
			Global_112915.f_14051[1 /*20*/].f_17 = 1;
			Global_112915.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112915.f_14051[Global_19954 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112915.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112915.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112915.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22354[Global_22352] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_19943, 1);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_124(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973340 != -1 && iParam0 == Global_1973340)
	{
		bVar1 = true;
	}
	func_149(iParam0, sParam1, bVar1, func_120(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_149(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_117())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, 1654525105, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973340 = -1;
	}
}

void func_150(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_112915.f_14141[iParam0 /*104*/].f_18 = uVar0;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
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
	Global_22352 = 34;
	Global_112915.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_152(Global_112915.f_14141[iVar2 /*104*/].f_18, Global_112915.f_14141[Global_22352 /*104*/].f_18))
		{
			Global_22352 = iVar2;
		}
		iVar2++;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_24 = 1;
}

int func_152(struct<6> Param0, struct<6> Param1)
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

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
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
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22352 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22352 = 34;
	Global_112915.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 0 || Global_112915.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_152(Global_112915.f_14141[iVar2 /*104*/].f_18, Global_112915.f_14141[Global_22352 /*104*/].f_18))
			{
				Global_22352 = iVar2;
			}
		}
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22352 == 34)
	{
		return 0;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 0;
	return 1;
}

int func_154(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xB0550BC91B0159D6(&Global_7824, 10);
	iVar0 = 3;
	if (func_148(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8531 = iParam10;
			Global_8434[3 /*6*/] = { func_85(iParam0) };
			Global_8511 = iParam0;
			StringCopy(&Global_8512, sParam5, 64);
			unk_0xCED9E32812D6C7C7(&Global_7824, 1);
			unk_0xCED9E32812D6C7C7(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	func_146();
	bVar0 = true;
	if (func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xE2D0C323A1AE5D85(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xE2D0C323A1AE5D85(uParam4, 4))
	{
		bVar0 = func_173(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_162(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xE2D0C323A1AE5D85(uParam4, 3))
		{
			func_161(1);
		}
		if (unk_0xE2D0C323A1AE5D85(uParam4, 5))
		{
			func_160(1);
		}
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_157()
{
	Global_2820030 = 0;
}

void func_158()
{
	Global_1637326.f_57 = 1;
	Global_1637326.f_57.f_1 = 0;
}

void func_159()
{
	Global_1637326.f_40.f_9 = 1;
}

void func_160(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7826, 0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7826, 0);
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 20);
	}
}

int func_162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_163(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_171();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_170(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_169();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam2)
			{
				func_90();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_168())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77852)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_167())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
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
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 9))
				{
					return 0;
				}
			}
			func_166();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_165();
		func_164();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_171();
	}
	return 0;
}

void func_164()
{
	if (!func_117())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973333.f_1), {Global_20904}, 4);
		Global_1973333 = Global_7139;
		Global_1973333.f_6 = Global_21295;
	}
}

void func_165()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21285 = 1;
}

void func_166()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	unk_0xB0550BC91B0159D6(&Global_7825, 16);
}

int func_167()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	if (Global_77852)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_170(int iParam0, int iParam1)
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

void func_171()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

void func_172(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = iParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21333 = 1;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (func_176(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_175();
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_175()
{
	Global_22303 = 0;
}

bool func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_172(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 1;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 1;
	Global_21339 = 0;
	StringCopy(&Global_21433, sParam5, 24);
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam8);
}

int func_177(var uParam0, char* sParam1, char* sParam2)
{
	if (func_179(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_178();
		func_112();
		func_158();
		return 1;
	}
	return 0;
}

void func_178()
{
	Global_1637326.f_40.f_9 = 2;
}

bool func_179(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_163(sParam2, iParam3, 0);
}

void func_180()
{
	Global_1637326.f_55 = Global_1637326.f_40.f_1;
	Global_1637326.f_55.f_1 = Global_1637326.f_40.f_10;
}

void func_181()
{
	Global_1637326.f_40 = 1;
}

bool func_182()
{
	return Global_1637326.f_40 == 1;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	if (Global_1637326.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1637326.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_184(int iParam0)
{
	if (!func_185())
	{
		return 0;
	}
	if (!Global_1637326.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_185()
{
	if (Global_1637326.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_186(var uParam0)
{
	if (func_189())
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
	if (Global_1574629.f_18 != 0)
	{
		return 0;
	}
	if (Global_1932192 || func_188())
	{
		return 0;
	}
	if (!unk_0xE2D0C323A1AE5D85(uParam0, 6))
	{
		if (func_187())
		{
			return 0;
		}
	}
	return 1;
}

bool func_187()
{
	return unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1655282);
}

int func_188()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_189()
{
	return func_167();
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0;
	}
	return func_183(iParam0, iParam1, iParam2);
}

int func_191(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x2E87280918B16506(&cVar0);
}

bool func_192()
{
	return Global_2817051.f_1;
}

int func_193()
{
	if (Global_1637514.f_2)
	{
		return 1;
	}
	return func_194();
}

bool func_194()
{
	return func_189();
}

void func_195(int iParam0)
{
	Global_2820521.f_1072 = iParam0;
}

int func_196()
{
	if (func_197("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_197("HLP_SOC1"))
	{
		return 1;
	}
	if (func_197("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_197(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_199(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_200(var uParam0)
{
	return uParam0->f_1;
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 8))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 8);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 8))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 8);
	}
}

bool func_202()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 8);
}

void func_203()
{
	unk_0x5A7ACD1CDF509B0D(800);
	if (!bLocal_590 || bLocal_591)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 0;
	}
	else
	{
		Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = 3;
	}
}

void func_204()
{
	if (func_208(&Local_62, &(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4)))
	{
		Local_581[unk_0xF1354995C6159A78() /*5*/].f_2 = -1;
	}
	func_205(&Local_62);
}

void func_205(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xF1EC2C71FD1371B8();
	switch (iLocal_586)
	{
		case 0:
			if (unk_0xE2D0C323A1AE5D85(*uParam0, 18))
			{
				if (!func_200(&uLocal_592))
				{
					func_22(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0xF847447D4467709D())
					{
						func_76("HLP_XP1", 9000);
						func_198(&uLocal_592);
						func_22(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (func_199(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0xF847447D4467709D())
				{
					func_76("HLP_XP2", 9000);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0xF847447D4467709D())
				{
					func_76("HLP_RNK1", 9000);
					func_207(1);
					Global_2810287.f_1918 = 1;
					func_206(1, 0, -1);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0xF847447D4467709D())
				{
					func_195(0);
					if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 99:
			if (!unk_0xE2D0C323A1AE5D85(uLocal_583, 2))
			{
				unk_0xCED9E32812D6C7C7(&uLocal_583, 2);
			}
			break;
	}
}

void func_206(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1644209.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1644209.f_1046), iParam0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_1644209.f_1046), iParam0);
			}
			break;
	}
}

void func_207(int iParam0)
{
	Global_2810287.f_4598 = iParam0;
}

int func_208(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 13))
	{
		if (unk_0x876B1078E90C91CB(unk_0x0065A2CB8ECECAF1()))
		{
			Var3 = { unk_0x97A9BB81C66772B5(unk_0x0065A2CB8ECECAF1()) };
			if ((Var3.x != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				unk_0x7D5C42A7CDB11DB6(Var3, 0f, 0f, 0f);
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 14))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 14);
				}
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(*uParam0, 14))
	{
		unk_0x5639E771F6085BF6();
		unk_0xB0550BC91B0159D6(uParam0, 14);
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 337, 1);
	}
	func_386(uParam0);
	unk_0x9B8B94A1196F345F(1f);
	func_380(uParam0);
	func_379(unk_0x9E2D6C50374FCFA9());
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x63AC7EFB770FCB6F(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x62EB051F5ED6DD41(uParam0->f_32);
				unk_0xCED9E32812D6C7C7(uParam0, 31);
			}
		}
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0xB4C854DD86E40FDA(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0xB4C854DD86E40FDA(func_378()) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2810287.f_1917)
				{
					Global_2810287.f_1917 = 1;
					unk_0x5E1F7FB772C73D20(0);
				}
				if (!func_202())
				{
					func_201(1);
				}
				if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
				{
					unk_0x859006DB870314C5(800);
				}
				if (!func_200(&(uParam0->f_15)))
				{
					func_22(&(uParam0->f_15), 0, 0);
				}
				unk_0x705B098546DEB18A(&Global_1932650);
				Global_1932651 = 0;
				Global_1932653 = 0;
				Global_1932652 = 0;
				Global_1932654 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0xA829C9A2767AC8EF())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_367(0, 0, 0, 1, 1, 1, 0);
					unk_0x1555F2F21E8F4C75(1, 0);
					func_412(1);
					unk_0x011EA64BBD3A849C(1);
					unk_0x6964C8D9877AB910("EXTRASUNNY");
					unk_0x42EA11F7821D9466(19, 0, 0);
					unk_0x027DB13BD5D494CC(1);
					func_366(0);
					unk_0x47C032CD609587EE(0);
					func_358(1, 0);
					func_330(1, 1);
					if (unk_0xB4C854DD86E40FDA(joaat("fm_intro")) < 1 || !func_329())
					{
						if (uParam0->f_292)
						{
							if (func_328() == 0)
							{
								unk_0x0728C4D61E5ACE06("GTAO_INTRO_MALE");
								unk_0xA694A53A397FC676(1);
							}
						}
					}
					func_321(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0xB0550BC91B0159D6(uParam0, 0);
					unk_0xB0550BC91B0159D6(uParam0, 1);
					unk_0xB0550BC91B0159D6(uParam0, 2);
					unk_0xB0550BC91B0159D6(uParam0, 9);
					unk_0xCED9E32812D6C7C7(uParam0, 7);
					uParam0->f_122 = unk_0x2915D98110F23A29(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0xD69A0C3662175E68(joaat("frogger"));
				if (unk_0x0152AA00FA3130F1(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xD66FB6B74EE3DA66())
					{
						if (func_318())
						{
							unk_0x4C6CBCFDD1730E10(0);
							func_313(1, 1, 0);
							unk_0x3B4B2C4B99C88DE8(0);
							unk_0x3410421C60BF7143(1);
							if (!func_194())
							{
								func_312();
							}
							func_207(0);
							func_311();
							unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Global_1574715, 1, 0, 0, 1);
							unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 1);
							unk_0x959E1626CBC7D38A(unk_0xE2D3D51028F0428A(), false, 0);
							unk_0xC0F70A3CDEC87ECE(0);
							if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
							{
								unk_0x293A9399E902A33B(unk_0x74248A89DFCAA77F(), 0f);
							}
							unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x04458B4E5D9E466A())
				{
					if (!unk_0xE2D0C323A1AE5D85(*uParam0, 4))
					{
						if (func_310() == 65 || func_310() == 66)
						{
							unk_0x5639E771F6085BF6();
							unk_0xB37C5672EE23D04F(754.2219f, 1226.831f, 356.5081f, func_309(-14.367f, 0f, 157.3524f), 100f, 0);
							func_198(&(uParam0->f_17));
							func_22(&(uParam0->f_17), 0, 0);
							unk_0xCED9E32812D6C7C7(uParam0, 4);
						}
					}
					else if (unk_0x63B063064DC08617("FM_INTRO_START") && (unk_0x8A6AB093D1EE5368() || func_199(&(uParam0->f_17), 5000, 0)))
					{
						if (!unk_0xE2D0C323A1AE5D85(*uParam0, 24))
						{
							if (unk_0xE2D0C323A1AE5D85(*uParam0, 7))
							{
								unk_0x1CF3F44FC2EB9F99("FM_INTRO_START");
								unk_0xCED9E32812D6C7C7(uParam0, 24);
								unk_0xCED9E32812D6C7C7(uParam0, 21);
							}
						}
						else if (unk_0xA4A087EFA0FA28F5() > 0)
						{
							unk_0xEE3A19A84A10F8B9();
							unk_0xB5CD7C8585F9A098(6);
							if (!unk_0x876B1078E90C91CB(uParam0->f_7))
							{
								uParam0->f_7 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
							}
							unk_0x15F5DB94F871E803(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0x15F5DB94F871E803(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 1, 0);
							func_308(uParam0);
							unk_0xCED9E32812D6C7C7(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x125F5E3A0150AB0D(9, 9, 9, 9);
								unk_0x670BAA84466115CA();
							}
							unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), true);
							if (unk_0xA829C9A2767AC8EF())
							{
								unk_0x5A7ACD1CDF509B0D(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_307(uParam0, 6);
				func_306(uParam0);
				if (func_305(uParam0, 6, 0))
				{
					unk_0x3410421C60BF7143(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 2))
				{
					unk_0x3410421C60BF7143(1);
					func_76("FMIC_INTRO2", -1);
					unk_0xCED9E32812D6C7C7(uParam0, 2);
				}
				unk_0x15F5DB94F871E803(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0x15F5DB94F871E803(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x125F5E3A0150AB0D(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_307(uParam0, 8);
				if (func_306(uParam0))
				{
					func_304(uParam0);
					if (func_305(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 10))
				{
					func_303();
					unk_0xCED9E32812D6C7C7(uParam0, 10);
				}
				unk_0x15F5DB94F871E803(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0x15F5DB94F871E803(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0x55A0C756C4A8220C(uParam0->f_48, 0))
				{
					unk_0x4F918D011B31CB9B(uParam0->f_48);
					unk_0x1C2ED929474DC6FE(uParam0->f_48, true, 0);
					unk_0xBAAB64584D161C4D(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0x55A0C756C4A8220C(uParam0->f_48, 0))
				{
					unk_0xBAAB64584D161C4D(uParam0->f_48);
				}
				func_307(uParam0, 10);
				if (func_302())
				{
					if (func_301(uParam0))
					{
						if (func_304(uParam0))
						{
							if (func_305(uParam0, 10, 0))
							{
								if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
								{
									unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), true);
								}
								fVar0 = 5000f;
								if (unk_0x55A0C756C4A8220C(uParam0->f_92[0], 0))
								{
									unk_0x2F4DB11A0DB3685A(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x4030F85138A50DF6(uParam0->f_92[0], fVar0);
								}
								if (unk_0x55A0C756C4A8220C(uParam0->f_92[1], 0))
								{
									unk_0x2F4DB11A0DB3685A(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x4030F85138A50DF6(uParam0->f_92[1], fVar0);
								}
								if (unk_0x55A0C756C4A8220C(uParam0->f_92[2], 0))
								{
									unk_0x2F4DB11A0DB3685A(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x4030F85138A50DF6(uParam0->f_92[2], fVar0);
								}
								if (unk_0x55A0C756C4A8220C(uParam0->f_92[3], 0))
								{
									unk_0x2F4DB11A0DB3685A(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x4030F85138A50DF6(uParam0->f_92[3], fVar0);
								}
								if (unk_0x55A0C756C4A8220C(uParam0->f_92[4], 0))
								{
									unk_0x2F4DB11A0DB3685A(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x4030F85138A50DF6(uParam0->f_92[4], fVar0);
								}
								unk_0xCED9E32812D6C7C7(uParam0, 15);
								unk_0x5A7ACD1CDF509B0D(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					unk_0x42EA11F7821D9466(16, 0, 0);
					func_300(uParam0);
					func_299(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x80B66EF081475250(uParam0->f_7, 1);
					unk_0xDF900BCBC752C62A(uParam0->f_7);
					unk_0x588DDCB644C6486A(uParam0->f_7, 0);
					unk_0x66B27A59829491D3("MP_INTRO_RACE_SCENE");
					unk_0x125F5E3A0150AB0D(9, 12, 9, 12);
					func_297(uParam0, 14);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					unk_0xCED9E32812D6C7C7(uParam0, 5);
				}
				func_307(uParam0, 14);
				if (func_305(uParam0, 14, 0))
				{
					func_296(uParam0, 23539f, 0);
					unk_0x42EA11F7821D9466(16, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_297(uParam0, 15);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					func_285(uParam0);
				}
				else if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				func_307(uParam0, 15);
				if (func_305(uParam0, 15, 0))
				{
					func_296(uParam0, 28833.33f, 75f);
					unk_0x42EA11F7821D9466(16, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_275(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_297(uParam0, 16);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					func_285(uParam0);
				}
				else if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				func_307(uParam0, 16);
				if (func_305(uParam0, 16, 0))
				{
					func_296(uParam0, 29700f, 0);
					unk_0x42EA11F7821D9466(16, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x7541CCCB5B62C54D(uParam0->f_9, 0.7f);
					func_297(uParam0, 17);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 6))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					func_285(uParam0);
				}
				else if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				func_307(uParam0, 17);
				if (func_305(uParam0, 17, 0))
				{
					func_296(uParam0, 36450f, 0);
					unk_0x42EA11F7821D9466(16, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 18);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					func_285(uParam0);
				}
				else if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				func_307(uParam0, 18);
				if (func_274() && func_305(uParam0, 18, 0))
				{
					func_296(uParam0, 43650f, 0);
					unk_0x42EA11F7821D9466(16, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					if (unk_0xE5965CDF24F93A9F(uParam0->f_92[2]))
					{
						unk_0xD59CC8123FD1A789(&(uParam0->f_92[2]));
					}
					if (unk_0xE5965CDF24F93A9F(uParam0->f_92[3]))
					{
						unk_0xD59CC8123FD1A789(&(uParam0->f_92[3]));
					}
					if (unk_0xE5965CDF24F93A9F(uParam0->f_92[4]))
					{
						unk_0xD59CC8123FD1A789(&(uParam0->f_92[4]));
					}
					func_299(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 19);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					func_285(uParam0);
				}
				else
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0xEA02B859DE237081(uParam0->f_32))
							{
								if (!unk_0x55B23FE400FCEA6B(uParam0->f_91, 0))
								{
									unk_0x9EE5DF347F5D97CA(uParam0->f_91, uParam0->f_32, unk_0x2E87280918B16506("GtaMloRoom001"));
								}
								unk_0x380313FF4CEF9B49("SE_MP_GARAGE_L_RADIO", 0);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!unk_0x55B23FE400FCEA6B(uParam0->f_49[iVar2], 0))
									{
										unk_0x9EE5DF347F5D97CA(uParam0->f_49[iVar2], uParam0->f_32, unk_0x2E87280918B16506("GtaMloRoom001"));
									}
									iVar2++;
								}
								unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_284(uParam0) && func_278(uParam0))
					{
						func_276(uParam0);
					}
				}
				func_273(uParam0);
				func_272(uParam0);
				func_307(uParam0, 19);
				if (func_305(uParam0, 19, 0) && unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					if (unk_0xE2D0C323A1AE5D85(*uParam0, 12))
					{
						unk_0xB0550BC91B0159D6(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_305(uParam0, 19, -4968))
				{
					if (!unk_0xE2D0C323A1AE5D85(*uParam0, 12))
					{
						unk_0x3410421C60BF7143(1);
						unk_0xCED9E32812D6C7C7(uParam0, 12);
					}
				}
				else if (func_305(uParam0, 19, -5618))
				{
					if (!unk_0xE2D0C323A1AE5D85(*uParam0, 30))
					{
						unk_0x9DCF157443EA30D6("MP_intro_logo", 0, 0);
						unk_0xCED9E32812D6C7C7(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_273(uParam0);
				func_272(uParam0);
				if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
				{
					if (!unk_0x876B1078E90C91CB(uParam0->f_7))
					{
						uParam0->f_7 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
					unk_0x15F5DB94F871E803(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0x15F5DB94F871E803(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xD05075DD5280976B(uParam0->f_32, unk_0x2E87280918B16506("GtaMloRoom001"));
					unk_0x380313FF4CEF9B49("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xB5CD7C8585F9A098(0);
					unk_0xE0F81EAEB49D39EF(uParam0->f_10, 0f);
					if (!unk_0xF68107C40359970C(uParam0->f_91))
					{
						unk_0xEB087B19F63AB053(uParam0->f_91, 0, 0);
					}
					if (unk_0xA37204C64473B324("MP_INTRO_RACE_SCENE"))
					{
						unk_0x0AF8D3A06BB92903("MP_INTRO_RACE_SCENE");
					}
					unk_0x125F5E3A0150AB0D(9, 13, 9, 13);
					func_271(uParam0);
					func_270();
					func_76("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_273(uParam0);
				func_272(uParam0);
				func_307(uParam0, 23);
				if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				if (func_305(uParam0, 23, 0))
				{
					unk_0x15F5DB94F871E803(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0x15F5DB94F871E803(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0xE0F81EAEB49D39EF(uParam0->f_10, 0f);
					if (!unk_0xF68107C40359970C(uParam0->f_91))
					{
						unk_0xEB087B19F63AB053(uParam0->f_91, 0, 0);
					}
					func_268(uParam0, 0);
					func_268(uParam0, 1);
					func_268(uParam0, 5);
					func_268(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_273(uParam0);
				func_272(uParam0);
				func_307(uParam0, 24);
				if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				if (func_305(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_273(uParam0);
				func_272(uParam0);
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0xCED9E32812D6C7C7(uParam0, 13);
				unk_0x15F5DB94F871E803(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0x15F5DB94F871E803(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0x42EA11F7821D9466(18, 0, 0);
				func_268(uParam0, 2);
				func_268(uParam0, 7);
				unk_0xF1A23B343DFEDFD0(func_267());
				if (unk_0xE5965CDF24F93A9F(uParam0->f_91))
				{
					unk_0x05CB75C0837196F9(&(uParam0->f_91));
				}
				unk_0xCED9E32812D6C7C7(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_273(uParam0);
				func_272(uParam0);
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 8))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 8);
				}
				if (func_284(uParam0) && func_278(uParam0))
				{
					func_276(uParam0);
				}
				func_307(uParam0, 28);
				if ((unk_0x63B063064DC08617("FM_INTRO_DRIVE_START") && unk_0xE2D0C323A1AE5D85(uParam0->f_3, 3)) && func_305(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						if (func_264(uParam0))
						{
							unk_0x48F297980C708DB7(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_Male_Character", 0, 0, 0);
							unk_0x48F297980C708DB7(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_264(uParam0))
				{
					unk_0x48F297980C708DB7(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0x48F297980C708DB7(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
				{
					unk_0x48F297980C708DB7(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
				{
					unk_0x48F297980C708DB7(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_33, 0))
				{
					unk_0x1C2ED929474DC6FE(uParam0->f_33, true, 0);
					unk_0x48F297980C708DB7(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_262(uParam0);
				unk_0x52E423FD38F601B9("CONTRAILS", 0);
				unk_0x125F5E3A0150AB0D(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				unk_0xF44EE79112016B61(4);
				func_254(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xF34D8FCAE3FD4EE4())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xAED5221F05DAE55E(uParam0->f_32);
					}
					func_253(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x320D1840B6DAA1CC() - uParam0->f_13);
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
					if (func_264(uParam0))
					{
						if (unk_0x6F2E1326DB60D575("MP_Female_Character", 0))
						{
							if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
							{
								if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
								{
									if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
									{
										unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0x6F2E1326DB60D575("MP_Male_Character", 0))
					{
						if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
						{
							if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
							{
								if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0x6F2E1326DB60D575("LAMAR", 0))
				{
					if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
					{
						if (!unk_0xF68107C40359970C(uParam0->f_35))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(uParam0->f_35, 0))
							{
								unk_0xB486640392EC50BB(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xEB087B19F63AB053(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0x6F2E1326DB60D575("MP_Lamar_Car", 0))
				{
					if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
					{
						unk_0x371D594409A68A18(uParam0->f_34, 1, 1, 0);
						unk_0xC64B6E13A6A7F517(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(uParam0->f_34, -106.11f);
						func_252(uParam0, 3099.997f);
						unk_0x0E97FAE15BEE6379(uParam0->f_34, 1);
					}
				}
				if (unk_0xA337B111DF07BB88(0))
				{
					unk_0x42EA11F7821D9466(21, 0, 0);
					func_297(uParam0, 33);
					func_299(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 29))
				{
					if (unk_0x0D080B3EBA2ACFB7() || unk_0xC10FE9051DBB0E91() > 3254)
					{
						unk_0xB0550BC91B0159D6(uParam0, 29);
					}
				}
				if ((func_251(uParam0) && func_250(uParam0)) && !unk_0xF34D8FCAE3FD4EE4())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x320D1840B6DAA1CC() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_264(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x7936E7A8DBE3DBBE();
					unk_0xB06C15F6118B032D();
					if (unk_0xE2D0C323A1AE5D85(*uParam0, 7))
					{
						unk_0x1CF3F44FC2EB9F99("FM_INTRO_DRIVE_START");
						unk_0xCED9E32812D6C7C7(uParam0, 21);
					}
					if (!unk_0xA08A61313445DB46())
					{
						unk_0xEDFEDFF9573687B1(0);
					}
					if (!unk_0xE2D0C323A1AE5D85(*uParam1, 1))
					{
						unk_0xCED9E32812D6C7C7(uParam1, 1);
					}
					func_249(uParam0);
					func_248(uParam0);
					func_254(0, 1, 1, 0, 0, 0, 0);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					unk_0xB0550BC91B0159D6(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x320D1840B6DAA1CC() - (uParam0->f_26 + unk_0xC10FE9051DBB0E91()));
					}
					if (!unk_0xE2D0C323A1AE5D85(*uParam0, 22))
					{
						if (unk_0x6C748AA36E826FEC() == 1)
						{
							unk_0x42EA11F7821D9466(19, 59, 0);
							unk_0xCED9E32812D6C7C7(uParam0, 22);
						}
					}
					if (func_246(uParam0))
					{
						if (unk_0x6C748AA36E826FEC() == 2)
						{
							if (!unk_0xE2D0C323A1AE5D85(*uParam0, 18))
							{
								unk_0xCED9E32812D6C7C7(uParam0, 18);
							}
							if (unk_0xC10FE9051DBB0E91() > 23146)
							{
								if (!unk_0xE2D0C323A1AE5D85(*uParam0, 27))
								{
									unk_0x74A35BFF0670ECD4("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xCED9E32812D6C7C7(uParam0, 27);
								}
								if (!unk_0xE2D0C323A1AE5D85(*uParam0, 28))
								{
									unk_0x74A35BFF0670ECD4("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0xCED9E32812D6C7C7(uParam0, 28);
								}
							}
							unk_0xF0C79C8B198CD112(4950f);
							if (unk_0xE2D0C323A1AE5D85(*uParam0, 22))
							{
								unk_0x42EA11F7821D9466(21, 0, 0);
								unk_0xB0550BC91B0159D6(uParam0, 22);
							}
							if (unk_0xC10FE9051DBB0E91() > 23254)
							{
								func_245(uParam0);
							}
						}
					}
					if (unk_0x6C748AA36E826FEC() > 2)
					{
						func_248(uParam0);
						if (!unk_0xE2D0C323A1AE5D85(*uParam0, 22))
						{
							unk_0x42EA11F7821D9466(21, 0, 0);
							unk_0xCED9E32812D6C7C7(uParam0, 22);
						}
						if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
						{
							unk_0x6B137DB2C9C0C754(uParam0->f_34);
							unk_0xE5283B3A324D3FB0(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0xC10FE9051DBB0E91();
				}
				break;
			
			case 33:
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 1))
					{
						if (func_305(uParam0, 33, -5450))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 1);
							}
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 2))
					{
						if (func_305(uParam0, 33, -5450))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 1))
					{
						if (func_305(uParam0, 33, -5450))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					unk_0x66B27A59829491D3("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 33);
				func_243(uParam0);
				if (func_305(uParam0, 33, 0))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 2))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 2);
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0x3FB84450A94CB528(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x98A99A554B458431(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x0A18C027350D3C19(uParam0->f_7, 33.3479f);
						unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_35, false, 0);
						}
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x961EE84414CA42F8(uParam0->f_11, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_dside_f"));
						if (func_264(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_pside_f"));
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.129f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, 0);
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.145f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.145f);
						}
						unk_0xEB087B19F63AB053(uParam0->f_36, 0, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 34);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 34);
				func_243(uParam0);
				if (func_305(uParam0, 34, 0))
				{
					func_252(uParam0, 18966.65f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 3))
					{
						if (func_305(uParam0, 34, 1100))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 3);
							}
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 4))
					{
						if (func_305(uParam0, 34, 1100))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 3))
					{
						if (func_305(uParam0, 34, 1000))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_35, true, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_36, false, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 35);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 35);
				func_243(uParam0);
				if (func_305(uParam0, 35, 0))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 5))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 4))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 4);
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 5))
					{
						if (func_305(uParam0, 36, -3750))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0x3FB84450A94CB528(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x98A99A554B458431(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x0A18C027350D3C19(uParam0->f_7, 33.3479f);
						unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_35, false, 0);
						}
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x961EE84414CA42F8(uParam0->f_11, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_dside_f"));
						if (func_264(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_pside_f"));
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.363f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, 0);
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.298f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.298f);
						}
						unk_0xEB087B19F63AB053(uParam0->f_36, 0, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 36);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 36);
				func_243(uParam0);
				if (func_305(uParam0, 36, 0))
				{
					func_252(uParam0, 42700.96f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 6))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 6))
					{
						if (func_305(uParam0, 36, 1000))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_35, true, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_36, false, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 37);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 37);
				func_243(uParam0);
				if (func_305(uParam0, 37, 0))
				{
					func_252(uParam0, 51033.28f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 7))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 7);
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 8))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 9))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 7))
					{
						if (func_305(uParam0, 37, 2500))
						{
							if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 38);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 38);
				func_243(uParam0);
				if (func_305(uParam0, 38, 0))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 8))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 8);
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 9))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 9);
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 31))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_264(uParam0))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 31))
					{
						if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 31);
						}
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0x3FB84450A94CB528(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x98A99A554B458431(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x0A18C027350D3C19(uParam0->f_7, 33.3479f);
						unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_35, false, 0);
						}
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x961EE84414CA42F8(uParam0->f_11, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_dside_f"));
						if (func_264(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_pside_f"));
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.811f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, 0);
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.791f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.791f);
						}
						unk_0xEB087B19F63AB053(uParam0->f_36, 0, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 39);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 39);
				func_243(uParam0);
				if (func_305(uParam0, 39, 0))
				{
					func_252(uParam0, 85050f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_1, 31))
				{
					if (func_244(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0xCED9E32812D6C7C7(&(uParam0->f_1), 31);
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x125F5E3A0150AB0D(9, 12, 9, 12);
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_35, true, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_36, false, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 40);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 40);
				if (func_243(uParam0) && func_305(uParam0, 40, 0))
				{
					func_252(uParam0, 116366.5f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					unk_0x42EA11F7821D9466(0, 0, 0);
					func_299(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_297(uParam0, 41);
					unk_0xC6D4125EB3EF156D("CONTRAILS", 0);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 41);
				if (func_305(uParam0, 41, 0))
				{
					unk_0x797E7EAFCEF57A43(1);
					func_252(uParam0, 127166.5f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_242(uParam0);
					func_299(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 42);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 42);
				if (func_305(uParam0, 42, 0))
				{
					unk_0x797E7EAFCEF57A43(0);
					func_252(uParam0, 170800f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 43);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 43);
				if (func_305(uParam0, 43, 0))
				{
					unk_0x125F5E3A0150AB0D(9, 12, 9, 12);
					func_252(uParam0, 191799.8f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 44);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 44);
				if (func_305(uParam0, 44, 0))
				{
					func_252(uParam0, 196633.1f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 45);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 45);
				if (func_305(uParam0, 45, 0))
				{
					func_252(uParam0, 201466.5f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 46);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 46);
				if (func_305(uParam0, 46, 0))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_241(uParam0);
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0x3FB84450A94CB528(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0x98A99A554B458431(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x0A18C027350D3C19(uParam0->f_7, 33.3479f);
						unk_0x9BAE3263D9B1FCB9(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xDD786B89B15AA63F(uParam0->f_7, 1);
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_35, false, 0);
						}
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
						{
							unk_0x1C2ED929474DC6FE(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x961EE84414CA42F8(uParam0->f_11, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_dside_f"));
						if (func_264(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, unk_0x7F0054A115D66F44(uParam0->f_34, "seat_pside_f"));
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.726f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_12, uParam0->f_34, 0);
							unk_0x950B26F4C891073F(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xE0F81EAEB49D39EF(uParam0->f_11, 0.726f);
							unk_0xE0F81EAEB49D39EF(uParam0->f_12, 0.815f);
						}
						unk_0xEB087B19F63AB053(uParam0->f_36, 0, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 47);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 47);
				if (func_305(uParam0, 47, 0))
				{
					func_252(uParam0, 213066.4f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_241(uParam0);
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_35, true, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(uParam0->f_36, 0))
					{
						unk_0x1C2ED929474DC6FE(uParam0->f_36, false, 0);
					}
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
					{
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
					}
					func_297(uParam0, 48);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 48);
				if (func_305(uParam0, 48, 0))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 3);
					func_240(uParam0, 10177.75f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_241(uParam0);
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_297(uParam0, 49);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				func_307(uParam0, 49);
				if (unk_0x63B063064DC08617("FM_INTRO_DRIVE_END") && func_305(uParam0, 49, 0))
				{
					func_238(uParam0, 4500f);
					unk_0xCED9E32812D6C7C7(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_241(uParam0);
				if (!unk_0xE9E8955A780DDA01())
				{
					if (!unk_0xECD40FEF3CF43BDB())
					{
						unk_0x5A7ACD1CDF509B0D(250);
					}
				}
				if (unk_0xE2D0C323A1AE5D85(*uParam0, 15))
				{
					func_299(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0x7E8F5AE44588D398();
						unk_0xB0550BC91B0159D6(uParam0, 11);
					}
					func_297(uParam0, 50);
					unk_0xB0550BC91B0159D6(uParam0, 15);
				}
				if (!unk_0xE2D0C323A1AE5D85(*uParam0, 20))
				{
					if (func_264(uParam0))
					{
						unk_0xD536FD78D8A135F1("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0xD536FD78D8A135F1("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0x2566F947AAB7B2A7())
						{
							if (func_264(uParam0))
							{
								unk_0xF1BAB9FB6BD91384("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0xF1BAB9FB6BD91384("MP_1", 0, 1);
							}
						}
					}
					if (unk_0xC6398AABC3E92273())
					{
						unk_0xCED9E32812D6C7C7(uParam0, 20);
					}
				}
				func_307(uParam0, 50);
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
				{
					if (unk_0xE896049AD1887FF0(uParam0->f_34))
					{
						if (unk_0x207D53F9E0190691(uParam0->f_34) < 1f)
						{
							unk_0x90F8F7D270431FAE(uParam0->f_34);
						}
					}
				}
				if (func_305(uParam0, 50, 0) && unk_0xE2D0C323A1AE5D85(*uParam0, 20))
				{
					if (unk_0xE2D0C323A1AE5D85(*uParam0, 21))
					{
						unk_0x1CF3F44FC2EB9F99("FM_INTRO_DRIVE_END");
						unk_0xB0550BC91B0159D6(uParam0, 21);
					}
					unk_0x90F8F7D270431FAE(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						if (func_264(uParam0))
						{
							unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_35, 0))
				{
					unk_0x48F297980C708DB7(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_34, 0))
				{
					unk_0x48F297980C708DB7(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(uParam0, 13);
				if (unk_0xA37204C64473B324("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x0AF8D3A06BB92903("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xF44EE79112016B61(4);
				func_254(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xF34D8FCAE3FD4EE4())
				{
					unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x320D1840B6DAA1CC() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_237(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_264(uParam0))
					{
						if (!unk_0xE2D0C323A1AE5D85(*uParam0, 23))
						{
							if (unk_0x6F2E1326DB60D575("MP_Female_Character", 0))
							{
								if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
								{
									unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1));
									unk_0x94953C3FF0664F66(0);
									unk_0x080C97B891E2F3AA(0, 1065353216);
									unk_0xCED9E32812D6C7C7(uParam0, 23);
								}
							}
						}
					}
					else if (!unk_0xE2D0C323A1AE5D85(*uParam0, 23))
					{
						if (unk_0x6F2E1326DB60D575("MP_1", 0))
						{
							if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
							{
								unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1));
								unk_0x94953C3FF0664F66(0);
								unk_0x080C97B891E2F3AA(0, 1065353216);
								unk_0xCED9E32812D6C7C7(uParam0, 23);
							}
						}
					}
				}
				if (unk_0x6F2E1326DB60D575("LAMAR", 0))
				{
					if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
					{
						if (!unk_0xF68107C40359970C(uParam0->f_35))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(uParam0->f_35, 0))
							{
								unk_0xB486640392EC50BB(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0x6F2E1326DB60D575("MP_Lamar_Car", 0))
				{
					if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
					{
						unk_0x9F65B3BAFA302A65(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0xA337B111DF07BB88(0))
				{
					func_236(1);
					unk_0x94953C3FF0664F66(0);
					unk_0x080C97B891E2F3AA(0, 1065353216);
				}
				if (!func_235(unk_0x9E2D6C50374FCFA9()))
				{
					func_234(1);
				}
				if (unk_0xF34D8FCAE3FD4EE4())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x320D1840B6DAA1CC() - (uParam0->f_30 + unk_0xC10FE9051DBB0E91()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_233(uParam0, 0);
							break;
						
						case 10:
							func_233(uParam0, 1);
							break;
						
						case 20:
							func_233(uParam0, 2);
							break;
						
						case 30:
							func_233(uParam0, 3);
							break;
						
						case 40:
							func_233(uParam0, 4);
							break;
						
						case 50:
							func_233(uParam0, 5);
							break;
						
						case 60:
							func_233(uParam0, 6);
							break;
						
						case 70:
							func_233(uParam0, 7);
							break;
						
						case 80:
							func_233(uParam0, 8);
							break;
						
						case 90:
							func_233(uParam0, 9);
							break;
						
						case 100:
							if (unk_0xE5965CDF24F93A9F(uParam0->f_36))
							{
								unk_0x05CB75C0837196F9(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x7936E7A8DBE3DBBE();
					unk_0xB06C15F6118B032D();
					if (!unk_0xA08A61313445DB46())
					{
						unk_0xEDFEDFF9573687B1(0);
					}
					func_254(0, 1, 1, 0, 0, 0, 0);
					unk_0xB0550BC91B0159D6(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xF34D8FCAE3FD4EE4())
				{
					unk_0xA43ADA94826528F5();
				}
				else if (!unk_0xE2D0C323A1AE5D85(*uParam0, 17))
				{
					if (unk_0xA829C9A2767AC8EF())
					{
						unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
						unk_0xCED9E32812D6C7C7(uParam0, 13);
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), true);
						if (uParam0->f_292)
						{
							unk_0x7E8F5AE44588D398();
							unk_0xB0550BC91B0159D6(uParam0, 11);
						}
						func_198(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0xCED9E32812D6C7C7(uParam0, 17);
					}
					else if (!unk_0xCB1EF1E7B77ADF4C())
					{
						unk_0x859006DB870314C5(250);
					}
				}
				else if (func_199(&(uParam0->f_17), 10000, 0))
				{
					if (func_232(uParam0))
					{
						func_300(uParam0);
						func_248(uParam0);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), false);
							if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								unk_0x959E1626CBC7D38A(unk_0xE2D3D51028F0428A(), true, 0);
								unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 61.3164f);
							}
						}
						if (!unk_0xF68107C40359970C(uParam0->f_35))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(uParam0->f_35, 0))
							{
								if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
								{
									unk_0xB486640392EC50BB(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_236(1);
						if (!func_235(unk_0x9E2D6C50374FCFA9()))
						{
							func_234(1);
						}
						func_254(0, 1, 1, 0, 0, 0, 0);
						unk_0x42EA11F7821D9466(0, 0, 0);
						if (unk_0xE2D0C323A1AE5D85(*uParam0, 21))
						{
							unk_0x1CF3F44FC2EB9F99("FM_INTRO_DRIVE_END");
							unk_0xB0550BC91B0159D6(uParam0, 21);
						}
						unk_0xCED9E32812D6C7C7(uParam0, 1);
						unk_0xCED9E32812D6C7C7(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xF34D8FCAE3FD4EE4())
				{
					unk_0xA43ADA94826528F5();
				}
				else if (!unk_0xE2D0C323A1AE5D85(*uParam0, 17))
				{
					if (unk_0xA829C9A2767AC8EF())
					{
						unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
						unk_0xCED9E32812D6C7C7(uParam0, 13);
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), true);
						if (uParam0->f_292)
						{
							unk_0x7E8F5AE44588D398();
							unk_0xB0550BC91B0159D6(uParam0, 11);
						}
						func_198(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0xCED9E32812D6C7C7(uParam0, 17);
					}
					else if (!unk_0xCB1EF1E7B77ADF4C())
					{
						unk_0x859006DB870314C5(250);
					}
				}
				else if (func_199(&(uParam0->f_17), 10000, 0))
				{
					if (func_284(uParam0))
					{
						func_300(uParam0);
						func_248(uParam0);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), false);
							if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								unk_0x959E1626CBC7D38A(unk_0xE2D3D51028F0428A(), true, 0);
								unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 61.3164f);
								if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
								{
									unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0xF68107C40359970C(uParam0->f_35))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(uParam0->f_35, 0))
							{
								if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
								{
									unk_0xB486640392EC50BB(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_235(unk_0x9E2D6C50374FCFA9()))
						{
						}
						func_254(0, 1, 1, 0, 0, 0, 0);
						if (unk_0xE2D0C323A1AE5D85(*uParam0, 21))
						{
							unk_0x1CF3F44FC2EB9F99("FM_INTRO_DRIVE_END");
							unk_0xB0550BC91B0159D6(uParam0, 21);
						}
						unk_0x5A7ACD1CDF509B0D(250);
						unk_0x42EA11F7821D9466(0, 0, 0);
						unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 3);
						uParam0->f_13 = (unk_0x320D1840B6DAA1CC() - func_229(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_240(uParam0, 10177.75f);
						unk_0xCED9E32812D6C7C7(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_307(uParam0, 57);
				bVar4 = !uParam0->f_288;
				func_217(uParam0, bVar4, 0);
				if (uParam0->f_292)
				{
					unk_0x7E8F5AE44588D398();
					unk_0xB0550BC91B0159D6(uParam0, 11);
				}
				if (!unk_0xF68107C40359970C(uParam0->f_35))
				{
					unk_0x83F5BCFFFBA26699(uParam0->f_35, -1);
					unk_0xABC2CA6F28903308(uParam0->f_35, 1);
				}
				unk_0x5E1F7FB772C73D20(1);
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
		func_216(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = to_float((unk_0x320D1840B6DAA1CC() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = to_float(func_237(uParam0));
			}
			uParam0->f_290 = func_215(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && unk_0xE2D0C323A1AE5D85(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x7E887F52DE52D931(uParam0->f_289);
			}
			else
			{
				unk_0x7E887F52DE52D931(uParam0->f_290);
			}
		}
		func_212(uParam0);
		if (unk_0xE2D0C323A1AE5D85(*uParam0, 12))
		{
			if (func_274())
			{
				func_211();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 60);
				}
			}
			func_209(uParam0);
			unk_0xCAFE3D4FD6C43219();
			unk_0xAC765EF46E85A446(9);
			unk_0xAC765EF46E85A446(7);
			unk_0xAC765EF46E85A446(18);
			unk_0xAC765EF46E85A446(6);
			unk_0xAC765EF46E85A446(3);
			unk_0xAC765EF46E85A446(13);
			unk_0xAC765EF46E85A446(4);
		}
		if (Global_2810287.f_1918)
		{
			unk_0x5089DD830FA61D71(2, 187, 1);
		}
	}
	return 0;
}

void func_209(var uParam0)
{
	var uVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0x0843570206F71F38())
			{
				if (!unk_0xDD19976F3302FB36())
				{
					uVar0 = unk_0x9E2D6C50374FCFA9() + 32;
					unk_0x2401FF328F02F86C(1, uVar0);
					func_210(1);
					unk_0xCED9E32812D6C7C7(uParam0, 9);
				}
			}
			else
			{
				func_210(1);
				unk_0xCED9E32812D6C7C7(uParam0, 9);
			}
		}
	}
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 18))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 18);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 18))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 18);
	}
}

void func_211()
{
	unk_0xC4353D240DCE9533(Global_1577853, 255, 255, 255, 255, 0);
	if (Global_1577855 == 0)
	{
		unk_0xEA5DEA46C3EE64D3(Global_1577853, "SET_BIG_LOGO_VISIBLE");
		unk_0x4F47E317C74C543B(1);
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x6F06CF0E9AB02847();
		Global_1577855 = 1;
	}
}

void func_212(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x55B23FE400FCEA6B(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0x6B62510F212526DC(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_213(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_213(var uParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0->f_58[iParam1]))
	{
		if (unk_0x55B23FE400FCEA6B(uParam0->f_58[iParam1], 0))
		{
		}
		func_214(iParam1, &Var0, &fVar1);
		unk_0xC64B6E13A6A7F517(uParam0->f_58[iParam1], Var0, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(uParam0->f_58[iParam1], fVar1);
		unk_0x5C65DDDC219B3AA5(uParam0->f_58[iParam1], true);
		unk_0x02443408423266F9(uParam0->f_58[iParam1]);
		unk_0x959E1626CBC7D38A(uParam0->f_58[iParam1], false, 0);
		unk_0x1C2ED929474DC6FE(uParam0->f_58[iParam1], false, 0);
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_74[iParam1]))
	{
		if (unk_0x55B23FE400FCEA6B(uParam0->f_74[iParam1], 0))
		{
		}
		unk_0x1C2ED929474DC6FE(uParam0->f_74[iParam1], false, 0);
	}
}

void func_214(int iParam0, var uParam1, var uParam2)
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

float func_215(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_264(uParam0))
		{
			fVar0 = to_float((uParam0->f_27 + unk_0xC10FE9051DBB0E91()));
			if (unk_0x6C748AA36E826FEC() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = to_float((uParam0->f_27 + unk_0xC10FE9051DBB0E91()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_216(var uParam0)
{
	if (unk_0xE2D0C323A1AE5D85(*uParam0, 29))
	{
		unk_0xD86164EE7A432643(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0xD86164EE7A432643(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_217(var uParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 0))
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			unk_0xEDFEDFF9573687B1(0);
		}
		unk_0x011EA64BBD3A849C(0);
		if (uParam0->f_292)
		{
			unk_0xA694A53A397FC676(0);
			unk_0x7E8F5AE44588D398();
			unk_0xB0550BC91B0159D6(uParam0, 11);
		}
		if (unk_0xE2D0C323A1AE5D85(*uParam0, 14))
		{
			unk_0x5639E771F6085BF6();
			unk_0xB0550BC91B0159D6(uParam0, 14);
		}
		func_228();
		func_249(uParam0);
		func_300(uParam0);
		func_248(uParam0);
		func_270();
		func_253(uParam0);
		func_271(uParam0);
		func_227(uParam0);
		func_242(uParam0);
		unk_0xEC6D4F9C59CDA6F5();
		if (bParam2)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_34))
			{
				unk_0x3D81769BEC61BFF8(&(uParam0->f_34));
			}
			if (unk_0xE5965CDF24F93A9F(uParam0->f_35))
			{
				unk_0xB3822DB3D538C8F3(&(uParam0->f_35));
			}
		}
		if (unk_0xE5965CDF24F93A9F(uParam0->f_36))
		{
			unk_0x05CB75C0837196F9(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_412(0);
		}
		func_225();
		func_218();
		func_254(0, 1, 1, 0, 0, 0, 0);
		unk_0x43F21FA00A1CE779(0, -1);
		unk_0xB68BD12B3A8C52FD(1);
		if (unk_0x9315DBF7D972F07A())
		{
			if (unk_0xC96A605CF3E9295B())
			{
				unk_0x3DC5858ACD1E01CB(0, 1);
			}
		}
		if (unk_0xE2D0C323A1AE5D85(*uParam0, 21))
		{
			unk_0x1CF3F44FC2EB9F99("FM_INTRO_DRIVE_END");
			unk_0xB0550BC91B0159D6(uParam0, 21);
		}
		unk_0x027DB13BD5D494CC(0);
		func_366(1);
		if (unk_0xE2D0C323A1AE5D85(*uParam0, 26))
		{
			func_358(1, 0);
			unk_0xB0550BC91B0159D6(uParam0, 26);
		}
		Global_2703656.f_3442 = 0;
		if (!unk_0x04458B4E5D9E466A())
		{
			unk_0xD2726749BA8DAC02(0);
		}
		unk_0x47C032CD609587EE(1);
		if (bParam1)
		{
		}
		func_195(0);
		func_207(1);
		Global_2810287.f_1918 = 0;
		Global_2810287.f_1917 = 0;
		if (unk_0xA37204C64473B324("MP_INTRO_RACE_SCENE"))
		{
			unk_0x0AF8D3A06BB92903("MP_INTRO_RACE_SCENE");
		}
		if (unk_0xA37204C64473B324("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x0AF8D3A06BB92903("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_321(14, 1);
		unk_0xC0F70A3CDEC87ECE(5);
		unk_0xC6D4125EB3EF156D("CONTRAILS", 0);
		unk_0xA72858C94E70296C(5, "FMINTRO");
		unk_0xA72858C94E70296C(6, "FMINTRO");
		unk_0xA72858C94E70296C(7, "FMINTRO");
		unk_0xAFC1FBF3F6AE7B9A("mp_intro_seq@");
		unk_0xAFC1FBF3F6AE7B9A("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0xAFC1FBF3F6AE7B9A("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0xAFC1FBF3F6AE7B9A("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
		{
			unk_0x293A9399E902A33B(unk_0x74248A89DFCAA77F(), 0.7f);
		}
		unk_0xCD6C63A108B12434(0);
		unk_0x94953C3FF0664F66(0);
		unk_0x080C97B891E2F3AA(0, 1065353216);
		if (unk_0x9315DBF7D972F07A())
		{
			unk_0x0F02061F6FAEB6C1();
			unk_0x5E1F7FB772C73D20(1);
		}
		unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), false);
		if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
		{
			unk_0x5A7ACD1CDF509B0D(800);
		}
		unk_0xCED9E32812D6C7C7(uParam0, 0);
	}
}

void func_218()
{
	func_219(0);
}

void func_219(bool bParam0)
{
	if (bParam0)
	{
		func_224();
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_7825, 16);
		}
		Global_19954.f_1 = 1;
		if (func_82(0))
		{
			func_220(0);
		}
	}
	else if (Global_19954.f_1 == 1)
	{
		if (!Global_19954.f_1 == 0)
		{
			Global_19954.f_1 = 3;
		}
	}
}

void func_220(int iParam0)
{
	if (func_223())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_222())
		{
			func_221(1, 1);
		}
		else
		{
			func_221(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_167())
	{
		Global_19954.f_1 = 3;
	}
}

void func_221(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_222()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_223()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_224()
{
	if (Global_19954.f_1 == 9 || Global_19954.f_1 == 10)
	{
		Global_21338 = 0;
		Global_21334 = 1;
	}
}

void func_225()
{
	if (!Global_1574737)
	{
		return;
	}
	func_226();
}

void func_226()
{
	Global_1574737 = 0;
	StringCopy(&(Global_1574737.f_1), "", 32);
	Global_1574737.f_9 = 0;
}

void func_227(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_233(uParam0, iVar0);
		iVar0++;
	}
}

void func_228()
{
	unk_0x13A2865660B9B033(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x13A2865660B9B033(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_229(var uParam0, int iParam1, bool bParam2)
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
			iVar1 = (iVar1 + func_231(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_230(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
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

int func_231(int iParam0)
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

int func_232(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0xD69A0C3662175E68(iVar0);
	unk_0xD69A0C3662175E68(iVar1);
	if (unk_0x0152AA00FA3130F1(iVar0) && unk_0x0152AA00FA3130F1(iVar1))
	{
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_34))
		{
			uParam0->f_34 = unk_0xBA715A7BEBA5A1F9(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0x62A01B7866DE3FB4(uParam0->f_34, 1);
			unk_0xBD10A469F50E1A2A(uParam0->f_34, 0);
			unk_0xBED097BB6359F09C(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0xE5283B3A324D3FB0(uParam0->f_34, 2);
		}
		else if (!unk_0xE5965CDF24F93A9F(uParam0->f_35))
		{
			if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xA8D58C3AADA2C41C(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0x50274A7EACA3133A(uParam0->f_35, 1);
				unk_0x9210F85E9CD785F1(uParam0->f_34, 1);
				unk_0x9210F85E9CD785F1(uParam0->f_35, 1);
				unk_0xFF4BEB6CFF55A013(uParam0->f_35, unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A()));
				unk_0xBED097BB6359F09C(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uParam0->f_34) || !unk_0xE5965CDF24F93A9F(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_233(var uParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0->f_58[iParam1]))
	{
		unk_0xD59CC8123FD1A789(&(uParam0->f_58[iParam1]));
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_74[iParam1]))
	{
		unk_0x05CB75C0837196F9(&(uParam0->f_74[iParam1]));
	}
}

void func_234(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_143), 22);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_143), 22);
	}
}

bool func_235(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_143, 22);
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 4);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 4);
	}
}

int func_237(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0xA4A087EFA0FA28F5();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0xC10FE9051DBB0E91());
	}
	return (uParam0->f_28 + unk_0xA4A087EFA0FA28F5());
}

void func_238(var uParam0, float fParam1)
{
	func_239(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_239(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x90F8F7D270431FAE(uParam0);
			unk_0x2F4DB11A0DB3685A(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0xE896049AD1887FF0(uParam0))
		{
			unk_0x2F4DB11A0DB3685A(uParam0, iParam1, sParam2, 1);
			unk_0x6AE2DED7BD7B93B8(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x395075B91017D334(iParam1, sParam2);
			if (unk_0xFD0EAE8E8428F6A3(uParam0) != iVar0)
			{
				unk_0x2F4DB11A0DB3685A(uParam0, iParam1, sParam2, 1);
				unk_0x6AE2DED7BD7B93B8(uParam0, 1);
			}
		}
		unk_0x4030F85138A50DF6(uParam0, (fParam3 - unk_0xFE9C4864A7C4CEDB(uParam0)));
	}
}

void func_240(var uParam0, float fParam1)
{
	func_239(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_241(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0x2E87280918B16506("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x51046EEE00E2BBDA(iVar1))
		{
			func_9(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_37[iVar0]))
		{
			unk_0x05CB75C0837196F9(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(joaat("g_m_y_mexgoon_02"));
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_hang_out_street@male_a@base");
}

int func_243(var uParam0)
{
	int iVar0;
	
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0xD69A0C3662175E68(joaat("g_m_y_mexgoon_02"));
		unk_0x8FB472886552D737("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x8FB472886552D737("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x0152AA00FA3130F1(joaat("g_m_y_mexgoon_02")) && unk_0x6F940C2636C076AD("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0x6F940C2636C076AD("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xE5965CDF24F93A9F(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xA8D58C3AADA2C41C(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x9210F85E9CD785F1(uParam0->f_37[iVar0], 1);
					unk_0x50274A7EACA3133A(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xC64B6E13A6A7F517(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(uParam0->f_37[iVar0], 76.8852f);
							unk_0x9521FB98DB6DDF50(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5C65DDDC219B3AA5(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xC64B6E13A6A7F517(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(uParam0->f_37[iVar0], 87.5786f);
							unk_0x9521FB98DB6DDF50(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5C65DDDC219B3AA5(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x246C656F8E525DC7(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xF1A23B343DFEDFD0(joaat("g_m_y_mexgoon_02"));
		unk_0xAFC1FBF3F6AE7B9A("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0xAFC1FBF3F6AE7B9A("amb@world_human_hang_out_street@male_a@base");
		unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_244(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 1;
	Global_22278 = 0;
	Global_22282 = 0;
	StringCopy(&Global_22289, sParam3, 24);
	Global_2883585 = 0;
	return func_163(sParam2, iParam4, 0);
}

void func_245(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 25))
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
			if (!unk_0xF68107C40359970C(uParam0->f_98[iVar0]) && unk_0x55A0C756C4A8220C(uParam0->f_92[iVar0], 0))
			{
				unk_0x5C65DDDC219B3AA5(uParam0->f_92[iVar0], false);
				unk_0xB2D5451CC5606248(uParam0->f_92[iVar0], 10f);
				unk_0x3B8F94419979A0B1(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x15CAA6D7B11F1A7C(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(uParam0, 25);
	}
}

int func_246(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar3 = joaat("shamal");
	unk_0xD69A0C3662175E68(iVar3);
	unk_0xD69A0C3662175E68(func_247());
	if (unk_0x0152AA00FA3130F1(iVar3))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar0]))
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
				uParam0->f_92[iVar0] = unk_0xBA715A7BEBA5A1F9(iVar3, Var1, fVar2, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(uParam0->f_92[iVar0], 1084227584);
				unk_0x5C65DDDC219B3AA5(uParam0->f_92[iVar0], true);
				unk_0xE5283B3A324D3FB0(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x0152AA00FA3130F1(func_247()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_98[iVar0]))
			{
				if (unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar0]))
				{
					if (unk_0x55A0C756C4A8220C(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x487C17B41938052C(uParam0->f_92[iVar0], 4, func_247(), -1, 0, false);
						unk_0x50274A7EACA3133A(uParam0->f_98[iVar0], 1);
						unk_0x371D594409A68A18(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0xF1A23B343DFEDFD0(iVar3);
	unk_0xF1A23B343DFEDFD0(func_247());
	unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 11);
	return 1;
}

int func_247()
{
	return unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A());
}

void func_248(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar0]))
		{
			unk_0xD59CC8123FD1A789(&(uParam0->f_92[iVar0]));
		}
		if (unk_0xE5965CDF24F93A9F(uParam0->f_98[iVar0]))
		{
			unk_0x05CB75C0837196F9(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(joaat("shamal"));
	unk_0xF1A23B343DFEDFD0(func_247());
}

void func_249(var uParam0)
{
	int iVar0;
	
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 2))
	{
		unk_0xF1A23B343DFEDFD0(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xE5965CDF24F93A9F(uParam0->f_33))
		{
			unk_0x4BDA5AFD88C085EB(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x6B8F21F773404988(uParam0->f_120))
			{
				unk_0x1439CB68C14277FB(uParam0->f_120, 0);
			}
			if (unk_0x6B8F21F773404988(uParam0->f_121))
			{
				unk_0x1439CB68C14277FB(uParam0->f_121, 0);
			}
			if (unk_0x51B6C2EF8DBE2E1A())
			{
				unk_0xE6239CCB98B8AB66();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_104[iVar0]))
			{
				unk_0x05CB75C0837196F9(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0xB0550BC91B0159D6(&(uParam0->f_3), 2);
	}
}

int func_250(var uParam0)
{
	if (func_264(uParam0))
	{
		unk_0x8FB472886552D737("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x8FB472886552D737("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x6F940C2636C076AD("mp_intro_seq@ig_1_lamar_drive_female") && unk_0x6F940C2636C076AD("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x8FB472886552D737("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x8FB472886552D737("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0x6F940C2636C076AD("mp_intro_seq@ig_1_lamar_drive_male") && unk_0x6F940C2636C076AD("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 10))
	{
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xA8D58C3AADA2C41C(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0x50274A7EACA3133A(uParam0->f_36, 1);
				unk_0x9210F85E9CD785F1(uParam0->f_36, 1);
				unk_0x1C2ED929474DC6FE(uParam0->f_36, false, 0);
				unk_0xFF4BEB6CFF55A013(uParam0->f_36, unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A()));
				unk_0xBED097BB6359F09C(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_413(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_36))
		{
			return 0;
		}
		unk_0xF1A23B343DFEDFD0(iVar0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_252(var uParam0, float fParam1)
{
	func_239(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_253(var uParam0)
{
	int iVar0;
	
	unk_0xF1A23B343DFEDFD0(func_267());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_268(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_91))
	{
		unk_0x05CB75C0837196F9(&(uParam0->f_91));
	}
}

void func_254(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_261(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_167())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_260(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_261(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_260(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_258(unk_0x9E2D6C50374FCFA9())) && !func_256(unk_0x9E2D6C50374FCFA9(), 0)) && !func_255()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_258(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_255()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_256(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_257(-1, 0) == 8;
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

int func_257(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_258(int iParam0)
{
	if (func_256(iParam0, 0))
	{
		return 1;
	}
	if (func_259())
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

bool func_259()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_260(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_261(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 13);
	}
}

void func_262(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0->f_104[iVar0], 0))
		{
			unk_0xAD9047296F9EA375(uParam0->f_104[iVar0]);
			unk_0x48F297980C708DB7(uParam0->f_104[iVar0], func_263(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_263(int iParam0)
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

int func_264(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_265();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_265()
{
	return func_266(unk_0x9E2D6C50374FCFA9());
}

int func_266(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	return joaat("s_m_y_xmech_02");
}

void func_268(var uParam0, int iParam1)
{
	unk_0xF1A23B343DFEDFD0(func_269(iParam1));
	if (unk_0xE5965CDF24F93A9F(uParam0->f_49[iParam1]))
	{
		if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0x781A6EC21B72B52E(uParam0->f_49[iParam1]);
		unk_0xD59CC8123FD1A789(&(uParam0->f_49[iParam1]));
	}
}

int func_269(int iParam0)
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

void func_270()
{
	Global_1577855 = 0;
	if (unk_0x0347CCBD719C8ADC(Global_1577853))
	{
		unk_0xEA5DEA46C3EE64D3(Global_1577853, "SET_BIG_LOGO_VISIBLE");
		unk_0x4F47E317C74C543B(1);
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x6F06CF0E9AB02847();
		unk_0x705B098546DEB18A(&Global_1577853);
	}
}

void func_271(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0x531055A66E7A812C(&uVar0);
		}
		if (unk_0xE5965CDF24F93A9F(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0x531055A66E7A812C(&uVar0);
		}
		iVar1++;
	}
	unk_0xF1A23B343DFEDFD0(joaat("cheetah"));
	unk_0xF1A23B343DFEDFD0(joaat("monroe"));
	unk_0xF1A23B343DFEDFD0(joaat("entityxf"));
	unk_0xF1A23B343DFEDFD0(joaat("feltzer2"));
	unk_0xA72858C94E70296C(100, "FM_Intro_uber");
	unk_0xA72858C94E70296C(101, "FM_Intro_uber");
	unk_0xA72858C94E70296C(102, "FM_Intro_uber");
	unk_0xA72858C94E70296C(103, "FM_Intro_uber");
	unk_0xA72858C94E70296C(104, "FM_Intro_uber");
	unk_0xAFC1FBF3F6AE7B9A("mp_intro_seq@");
}

void func_272(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0->f_49[2]))
	{
		if (unk_0x55A0C756C4A8220C(uParam0->f_49[2], 0))
		{
			unk_0x6B137DB2C9C0C754(uParam0->f_49[2]);
		}
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_49[4]))
	{
		if (unk_0x55A0C756C4A8220C(uParam0->f_49[4], 0))
		{
			unk_0x6B137DB2C9C0C754(uParam0->f_49[4]);
		}
	}
}

void func_273(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0->f_49[2]))
	{
		if (unk_0x55A0C756C4A8220C(uParam0->f_49[2], 0))
		{
			unk_0x59492C1B3DB11BDE(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_274()
{
	if (unk_0x36F8D1C6AB25AF2B())
	{
		return 0;
	}
	if (!unk_0x0347CCBD719C8ADC(Global_1577853))
	{
		Global_1577853 = unk_0x528279F3F1EEF869("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_275(var uParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param5)
{
	if (unk_0xE5965CDF24F93A9F(uParam3))
	{
		if (unk_0x55B23FE400FCEA6B(iParam3, 0))
		{
		}
		if (!unk_0x876B1078E90C91CB(uParam0->f_8))
		{
			uParam0->f_8 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x8F5F4164BF5FB513(Param4, Param5, 2);
		unk_0x961EE84414CA42F8(uParam0->f_9, iParam3, 0);
		unk_0x7B8CE3A05613F41C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0xDD786B89B15AA63F(uParam0->f_8, 1);
		unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 1, 0);
	}
}

void func_276(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 3))
	{
		unk_0x13F742409EFB338E("CONTRAILS");
		if (func_264(uParam0))
		{
			unk_0xCB3859A62F123AEF("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0xCB3859A62F123AEF("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0x2566F947AAB7B2A7())
		{
			if (uParam0->f_295)
			{
				if (func_264(uParam0))
				{
					unk_0xF1BAB9FB6BD91384("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0xF1BAB9FB6BD91384("MP_Male_Character", 0, 1);
				}
			}
			func_277();
		}
		if (unk_0xC6398AABC3E92273())
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 3);
		}
	}
}

void func_277()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0xF1BAB9FB6BD91384(func_263(iVar0), 0, 1);
		iVar0++;
	}
}

int func_278(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 2))
	{
		unk_0xD69A0C3662175E68(joaat("p_cs_mp_jet_01_s"));
		unk_0xD69A0C3662175E68(joaat("mp_m_freemode_01"));
		unk_0xD69A0C3662175E68(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x9E63031C188793E1();
		}
		if (((unk_0x0152AA00FA3130F1(joaat("p_cs_mp_jet_01_s")) && unk_0x0152AA00FA3130F1(joaat("mp_m_freemode_01"))) && unk_0x0152AA00FA3130F1(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x51B6C2EF8DBE2E1A()))
		{
			uParam0->f_33 = unk_0x0E536D72AB30F4C8(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0x7A93DEA53EFC3CF2(uParam0->f_33, 3000);
			unk_0x398C962F550CF3B4(uParam0->f_33, 0);
			unk_0x1C2ED929474DC6FE(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x2D649DA6DC187D35("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x2D649DA6DC187D35("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_282(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_281(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0xA8D58C3AADA2C41C(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xA8D58C3AADA2C41C(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_280(uParam0, iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(unk_0xA1087A6350CD9244(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0xC70FD0E17F3B16A8(unk_0x407E03586628E458(unk_0xA1087A6350CD9244(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xAD9047296F9EA375(uParam0->f_104[iVar0]);
				}
				else
				{
					func_279(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0xF1A23B343DFEDFD0(joaat("p_cs_mp_jet_01_s"));
			unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_279(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xE3752B10DC995E95(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 0);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 1);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 2);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 3);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 4);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 5);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 6);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 7);
			unk_0x920BB8B58BB3563A(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_280(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(unk_0xA1087A6350CD9244(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0, int iParam1)
{
	if (func_280(uParam0, iParam1))
	{
		return func_266(unk_0xA1087A6350CD9244(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_282(var uParam0)
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
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (unk_0x9E2D6C50374FCFA9() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_283(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_283(int iParam0)
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

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iVar0);
	unk_0xD69A0C3662175E68(iVar1);
	unk_0xB018BAA4ED9AA217(5, "FMINTRO");
	unk_0xB018BAA4ED9AA217(6, "FMINTRO");
	unk_0xB018BAA4ED9AA217(7, "FMINTRO");
	unk_0x8FB472886552D737("mp_intro_seq@");
	if (((((unk_0x0152AA00FA3130F1(iVar0) && unk_0x0152AA00FA3130F1(iVar1)) && unk_0xF777CAA43F4B281A(5, "FMINTRO")) && unk_0xF777CAA43F4B281A(6, "FMINTRO")) && unk_0xF777CAA43F4B281A(7, "FMINTRO")) && unk_0x6F940C2636C076AD("mp_intro_seq@"))
	{
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_34))
		{
			unk_0x7A997A0A971D305F(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0xBA715A7BEBA5A1F9(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0x62A01B7866DE3FB4(uParam0->f_34, 1);
			unk_0xBD10A469F50E1A2A(uParam0->f_34, 0);
			unk_0xBED097BB6359F09C(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0xE5965CDF24F93A9F(uParam0->f_35))
		{
			if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xA8D58C3AADA2C41C(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xB486640392EC50BB(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0x50274A7EACA3133A(uParam0->f_35, 1);
				unk_0x9210F85E9CD785F1(uParam0->f_34, 1);
				unk_0x9210F85E9CD785F1(uParam0->f_35, 1);
				unk_0xFF4BEB6CFF55A013(uParam0->f_35, unk_0x6F8FB52F5D1D0B84(unk_0xE2D3D51028F0428A()));
				unk_0xBED097BB6359F09C(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uParam0->f_34) || !unk_0xE5965CDF24F93A9F(uParam0->f_35))
	{
		return 0;
	}
	unk_0xF1A23B343DFEDFD0(iVar0);
	unk_0xF1A23B343DFEDFD0(iVar1);
	unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 9);
	return 1;
}

void func_285(var uParam0)
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 0))
	{
		func_295();
		func_293();
		if (func_287(uParam0))
		{
			if (func_286(uParam0))
			{
				if (!unk_0x876B1078E90C91CB(uParam0->f_7))
				{
					uParam0->f_7 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0x15F5DB94F871E803(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0xF1A23B343DFEDFD0(func_269(iVar0));
					iVar0++;
				}
				unk_0xF1A23B343DFEDFD0(func_267());
				unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 0);
			}
		}
	}
}

int func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = func_267();
	if (!unk_0xE5965CDF24F93A9F(uParam0->f_91))
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_49[2]))
		{
			if (unk_0x51046EEE00E2BBDA(iVar0))
			{
				if (unk_0x0152AA00FA3130F1(iVar0))
				{
					if (unk_0x6F940C2636C076AD("MP_INTRO_SEQ@"))
					{
						if (!unk_0x55B23FE400FCEA6B(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x8F5F4164BF5FB513(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x961EE84414CA42F8(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xA8D58C3AADA2C41C(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0x50274A7EACA3133A(uParam0->f_91, 1);
							unk_0x950B26F4C891073F(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xFE1CD80C2F7CBCFB(uParam0->f_10, 1);
							unk_0x5C65DDDC219B3AA5(uParam0->f_91, true);
							unk_0x959E1626CBC7D38A(uParam0->f_91, false, 0);
							unk_0xE002DFD518BF86A7(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xE3752B10DC995E95(uParam0->f_91, 0, 1, 1, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 1, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 2, 0, 2, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 3, 0, 2, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 4, 1, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 5, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 6, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 7, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 8, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 9, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 10, 0, 0, 0);
							unk_0xE3752B10DC995E95(uParam0->f_91, 11, 0, 0, 0);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 0);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 1);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 2);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 3);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 4);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 5);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 6);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 7);
							unk_0x920BB8B58BB3563A(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_287(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_2, 31))
	{
		func_295();
		iVar3 = 0;
		while (iVar3 < 8)
		{
			func_292(iVar3, &Var1, &fVar2);
			if (!func_291(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xE5965CDF24F93A9F(uParam0->f_49[iVar3]))
				{
					iVar0 = func_269(iVar3);
					if (unk_0x51046EEE00E2BBDA(iVar0))
					{
						if (unk_0x0152AA00FA3130F1(iVar0))
						{
							uParam0->f_49[iVar3] = unk_0xBA715A7BEBA5A1F9(iVar0, Var1, fVar2, 0, 0, 0);
							unk_0x398C962F550CF3B4(uParam0->f_49[iVar3], 1);
							unk_0x2EC6505629D78CCE(uParam0->f_49[iVar3], 0f);
							unk_0xFA37094E2DF03E75(uParam0->f_49[iVar3], 0);
							if (iVar3 == 2)
							{
								unk_0x2476BE9932670CAD(uParam0->f_49[iVar3], 4, 0, 1);
								unk_0x59492C1B3DB11BDE(uParam0->f_49[iVar3], 4, 0, 1f);
							}
							func_290(uParam0, iVar3);
							func_289(uParam0, iVar3);
							unk_0xF1A23B343DFEDFD0(iVar0);
						}
					}
				}
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 8)
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_49[iVar3]))
			{
				return 0;
			}
			if (!unk_0xE2D0C323A1AE5D85(uParam0->f_2, iVar3))
			{
				if (func_288(uParam0, iVar3))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_2), iVar3);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iVar3], 0))
			{
				if (!unk_0xE9E8BE4CF922470D(uParam0->f_49[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_288(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 0, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 2, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 3, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 5, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 7, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 10, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 14, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 4, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 12, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 4, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 14, 5, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 23, 11, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 7, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 11, 3, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 12, 2, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 13, 2, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 3, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 16, 4, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 0, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 1, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 2, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 3, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 6, 2, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 10, 3, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 15, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 23, 5, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0x55A0C756C4A8220C(uParam0->f_49[iParam1], 0))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_49[iParam1]) > 0)
				{
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 1, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 4, 1, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 8, 0, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 14, 7, 0);
					unk_0x0061B7C9351B41ED(uParam0->f_49[iParam1], 23, 0, 0);
					unk_0x6C6188D0F8AB739A(uParam0->f_49[iParam1], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_49[iParam1], 0);
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

void func_289(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 0, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 1, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 2, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 3, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 4, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 5, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 7, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 10, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 0, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 1, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 2, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 4, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 7, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 0, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 1, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 2, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 3, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 4, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 6, 2);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 10, 3);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0x3C1BCE3438ECBFC0(uParam0->f_49[iParam1], 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 1, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 4, 1);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 8, 0);
			unk_0x7DD405D4677E064C(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_290(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 83, 134);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 0, 0);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 49, 0);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 0, 0);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 43, 5);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 3, 3);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0x58DAFDEB2F46A5EA(uParam0->f_49[iParam1], 35, 0);
			unk_0x952B5201CC721090(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_291(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_292(int iParam0, var uParam1, var uParam2)
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

void func_293()
{
	unk_0xD69A0C3662175E68(func_267());
	unk_0x8FB472886552D737(func_294());
}

char* func_294()
{
	return "MP_INTRO_SEQ@";
}

void func_295()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0xD69A0C3662175E68(func_269(iVar0));
		iVar0++;
	}
}

void func_296(var uParam0, float fParam1, float fParam2)
{
	func_239(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_239(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_239(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_239(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_239(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_297(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_298(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_298(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_298(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_298(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_298(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_298(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_298(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_298(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_298(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_298(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_298(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_298(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_298(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_298(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_298(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_298(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_298(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_298(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_298(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_298(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_298(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_298(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_298(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_298(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_298(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_298(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_298(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_298(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_298(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_298(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_298(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_298(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_298(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_298(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_298(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_298(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_298(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_298(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_298(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_298(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_298(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_298(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_298(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_298(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_298(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_298(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_298(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_298(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_298(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_298(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_298(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_298(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_298(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_298(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_298(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_298(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_298(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_298(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_298(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_298(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_298(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_298(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_298(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_298(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_298(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_298(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_298(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_298(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_298(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_298(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_298(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_298(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_298(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_298(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xE2D0C323A1AE5D85(uVar1, iVar0))
		{
			func_213(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_298(var uParam0, int iParam1, struct<3> Param2, float fParam3, var uParam4, bool bParam5)
{
	if (unk_0x55A0C756C4A8220C(uParam0->f_58[iParam1], 0) && !unk_0xF68107C40359970C(uParam0->f_74[iParam1]))
	{
		unk_0x5C65DDDC219B3AA5(uParam0->f_58[iParam1], false);
		unk_0x959E1626CBC7D38A(uParam0->f_58[iParam1], true, 0);
		unk_0xC64B6E13A6A7F517(uParam0->f_58[iParam1], Param2, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(uParam0->f_58[iParam1], fParam3);
		unk_0x9F65B3BAFA302A65(uParam0->f_58[iParam1], 1084227584);
		unk_0x02443408423266F9(uParam0->f_58[iParam1]);
		if (bParam5)
		{
			unk_0xFE5A02CF2178B6A8(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0xB2D5451CC5606248(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			unk_0xFE5A02CF2178B6A8(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0xB2D5451CC5606248(uParam0->f_58[iParam1], 10f);
		}
		unk_0xABC2CA6F28903308(uParam0->f_74[iParam1], 1);
		unk_0x1C2ED929474DC6FE(uParam0->f_58[iParam1], true, 0);
		unk_0x1C2ED929474DC6FE(uParam0->f_74[iParam1], true, 0);
		unk_0xCED9E32812D6C7C7(uParam4, iParam1);
	}
}

void func_299(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, int iParam6)
{
	if (!unk_0x876B1078E90C91CB(uParam0->f_8))
	{
		uParam0->f_8 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x8F5F4164BF5FB513(Param3, Param4, 2);
	unk_0x7B8CE3A05613F41C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0xE0F81EAEB49D39EF(uParam0->f_9, fParam5);
	unk_0x7541CCCB5B62C54D(uParam0->f_9, iParam6);
	unk_0xDD786B89B15AA63F(uParam0->f_8, 1);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 1, 0);
}

void func_300(var uParam0)
{
	unk_0xF1A23B343DFEDFD0(joaat("frogger"));
	unk_0xA72858C94E70296C(8, "FMIntro");
	if (unk_0xE5965CDF24F93A9F(uParam0->f_48))
	{
		unk_0xD59CC8123FD1A789(&(uParam0->f_48));
	}
}

int func_301(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_303();
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[0]))
		{
			if (unk_0x0152AA00FA3130F1(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0xBA715A7BEBA5A1F9(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0xBD10A469F50E1A2A(uParam0->f_92[0], 0);
				unk_0xAFE1B52F0DE91595(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[1]))
		{
			if (unk_0x0152AA00FA3130F1(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0xBA715A7BEBA5A1F9(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0xBD10A469F50E1A2A(uParam0->f_92[1], 0);
				unk_0x03F4139102BA4AFC(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xD584204572DF0440(uParam0->f_92[1], 8);
				unk_0xAFE1B52F0DE91595(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[2]))
		{
			if (unk_0x0152AA00FA3130F1(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0xBA715A7BEBA5A1F9(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0xBD10A469F50E1A2A(uParam0->f_92[2], 0);
				unk_0x03F4139102BA4AFC(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xD584204572DF0440(uParam0->f_92[2], 2);
				unk_0xAFE1B52F0DE91595(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[3]))
		{
			if (unk_0x0152AA00FA3130F1(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0xBA715A7BEBA5A1F9(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0xBD10A469F50E1A2A(uParam0->f_92[3], 0);
				unk_0x03F4139102BA4AFC(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xD584204572DF0440(uParam0->f_92[3], 15);
				unk_0xAFE1B52F0DE91595(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_92[4]))
		{
			if (unk_0x0152AA00FA3130F1(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0xBA715A7BEBA5A1F9(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0xBD10A469F50E1A2A(uParam0->f_92[4], 0);
				unk_0x03F4139102BA4AFC(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0x58DAFDEB2F46A5EA(uParam0->f_92[4], 0, 0);
				unk_0x952B5201CC721090(uParam0->f_92[4], 0, 156);
				unk_0x3C1BCE3438ECBFC0(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0x55A0C756C4A8220C(uParam0->f_92[4], 0))
		{
			if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 1))
			{
				if (unk_0x03AC3319D1B50189(uParam0->f_92[4]) > 0)
				{
					unk_0x6C6188D0F8AB739A(uParam0->f_92[4], 22, 1);
					unk_0xAFE1B52F0DE91595(uParam0->f_92[4], 0);
					unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x0152AA00FA3130F1(func_247()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xE5965CDF24F93A9F(uParam0->f_98[iVar1]))
				{
					if (unk_0xE5965CDF24F93A9F(uParam0->f_92[iVar1]))
					{
						if (unk_0x55A0C756C4A8220C(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x487C17B41938052C(uParam0->f_92[iVar1], 4, func_247(), -1, 0, false);
							unk_0x50274A7EACA3133A(uParam0->f_98[iVar1], 1);
							unk_0x371D594409A68A18(uParam0->f_92[iVar1], 1, 1, 0);
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
			unk_0xF1A23B343DFEDFD0(joaat("cheetah"));
			unk_0xF1A23B343DFEDFD0(joaat("monroe"));
			unk_0xF1A23B343DFEDFD0(joaat("entityxf"));
			unk_0xF1A23B343DFEDFD0(joaat("feltzer2"));
			unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_302()
{
	func_303();
	if (unk_0x0152AA00FA3130F1(func_247()))
	{
		if (unk_0x0152AA00FA3130F1(joaat("cheetah")))
		{
			if (unk_0x0152AA00FA3130F1(joaat("monroe")))
			{
				if (unk_0x0152AA00FA3130F1(joaat("entityxf")))
				{
					if (unk_0x0152AA00FA3130F1(joaat("feltzer2")))
					{
						if (unk_0xF777CAA43F4B281A(100, "FM_Intro_uber"))
						{
							if (unk_0xF777CAA43F4B281A(101, "FM_Intro_uber"))
							{
								if (unk_0xF777CAA43F4B281A(102, "FM_Intro_uber"))
								{
									if (unk_0xF777CAA43F4B281A(103, "FM_Intro_uber"))
									{
										if (unk_0xF777CAA43F4B281A(104, "FM_Intro_uber"))
										{
											if (unk_0x6F940C2636C076AD("mp_intro_seq@"))
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

void func_303()
{
	unk_0xD69A0C3662175E68(joaat("cheetah"));
	unk_0xD69A0C3662175E68(joaat("monroe"));
	unk_0xD69A0C3662175E68(joaat("entityxf"));
	unk_0xD69A0C3662175E68(joaat("feltzer2"));
	unk_0xD69A0C3662175E68(func_247());
	unk_0xB018BAA4ED9AA217(100, "FM_Intro_uber");
	unk_0xB018BAA4ED9AA217(101, "FM_Intro_uber");
	unk_0xB018BAA4ED9AA217(102, "FM_Intro_uber");
	unk_0xB018BAA4ED9AA217(103, "FM_Intro_uber");
	unk_0xB018BAA4ED9AA217(104, "FM_Intro_uber");
	unk_0x8FB472886552D737("mp_intro_seq@");
}

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0xD69A0C3662175E68(joaat("asterope"));
		unk_0xD69A0C3662175E68(joaat("sentinel"));
		unk_0xD69A0C3662175E68(func_247());
		if ((unk_0x0152AA00FA3130F1(joaat("asterope")) && unk_0x0152AA00FA3130F1(joaat("sentinel"))) && unk_0x0152AA00FA3130F1(func_247()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xE5965CDF24F93A9F(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_214(iVar0, &Var2, &fVar3);
					uParam0->f_58[iVar0] = unk_0xBA715A7BEBA5A1F9(iVar1, Var2, fVar3, 0, 0, 0);
					unk_0xD584204572DF0440(uParam0->f_58[iVar0], iVar0);
					unk_0x9210F85E9CD785F1(uParam0->f_58[iVar0], 1);
					unk_0xE5283B3A324D3FB0(uParam0->f_58[iVar0], 2);
					unk_0x5C65DDDC219B3AA5(uParam0->f_58[iVar0], true);
				}
				if (unk_0xE5965CDF24F93A9F(uParam0->f_58[iVar0]))
				{
					if (!unk_0xE5965CDF24F93A9F(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x487C17B41938052C(uParam0->f_58[iVar0], 4, func_247(), -1, 0, false);
						unk_0x9210F85E9CD785F1(uParam0->f_74[iVar0], 1);
						unk_0x50274A7EACA3133A(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_58[iVar0]) || !unk_0xE5965CDF24F93A9F(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0xF1A23B343DFEDFD0(joaat("asterope"));
		unk_0xF1A23B343DFEDFD0(joaat("sentinel"));
		unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_305(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_229(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x320D1840B6DAA1CC()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_237(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_306(var uParam0)
{
	int iVar0;
	
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0xD69A0C3662175E68(iVar0);
	unk_0xB018BAA4ED9AA217(8, "FMIntro");
	if (unk_0x0152AA00FA3130F1(iVar0) && unk_0xF777CAA43F4B281A(8, "FMIntro"))
	{
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_48))
		{
			uParam0->f_48 = unk_0xBA715A7BEBA5A1F9(iVar0, unk_0xA53596FA06DE5ECB(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x2F4DB11A0DB3685A(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x4030F85138A50DF6(uParam0->f_48, 5000f);
			unk_0x9B24CA8F49E61F9E(uParam0->f_48);
			unk_0x1C2ED929474DC6FE(uParam0->f_48, false, 0);
			unk_0xF1A23B343DFEDFD0(iVar0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uParam0->f_48))
	{
		return 0;
	}
	unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 8);
	return 1;
}

void func_307(var uParam0, int iParam1)
{
	if (func_305(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x320D1840B6DAA1CC() - func_229(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_308(var uParam0)
{
	uParam0->f_13 = unk_0x320D1840B6DAA1CC();
}

Vector3 func_309(struct<3> Param0)
{
	return (-sin(Param0.f_2) * cos(Param0.x)), (cos(Param0.f_2) * cos(Param0.x)), sin(Param0.x);
}

int func_310()
{
	return Global_1574980;
}

void func_311()
{
	unk_0x208B14CA225DC5A0(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x208B14CA225DC5A0(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_312()
{
	func_220(0);
	func_219(1);
}

void func_313(bool bParam0, int iParam1, bool bParam2)
{
	func_317();
	func_315(1);
	unk_0x3410421C60BF7143(1);
	unk_0xBA6C3C5E9E5A9442();
	func_254(1, 1, 1, 0, 0, 0, bParam2);
	func_314();
	func_206(12, 1, -1);
	func_207(0);
	unk_0x43F21FA00A1CE779(1, -1);
	unk_0xB60709BD0E075903(0);
	unk_0x72DB022C36FCEA24(0);
	func_315(1);
	func_261(1);
	Global_2703656.f_3442 = 1;
	if (bParam0)
	{
		if (!unk_0xC96A605CF3E9295B())
		{
			unk_0x3DC5858ACD1E01CB(1, iParam1);
		}
	}
}

void func_314()
{
	func_207(0);
	func_206(4, 1, -1);
	func_206(6, 1, -1);
	func_206(7, 1, -1);
	func_206(3, 1, -1);
	func_206(1, 1, -1);
	func_206(2, 1, -1);
	func_206(11, 1, -1);
	func_206(13, 1, -1);
	func_206(14, 1, -1);
	func_206(16, 1, -1);
}

void func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111567)
	{
		unk_0xD4DF0F443B8FD284(iVar0, iParam0);
		func_316(iVar0);
		iVar0++;
	}
}

void func_316(int iParam0)
{
	Global_111567[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_111567[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_111567[iParam0 /*28*/].f_4), "", 64);
	Global_111567[iParam0 /*28*/].f_23 = 0;
	Global_111567[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_111567[iParam0 /*28*/].f_27 = 0;
	Global_111567[iParam0 /*28*/].f_20 = 0;
	Global_111567[iParam0 /*28*/].f_22 = 0;
}

void func_317()
{
	Global_1574737 = 1;
	StringCopy(&(Global_1574737.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574737.f_9 = unk_0x2E87280918B16506(&(Global_1574737.f_1));
}

int func_318()
{
	if (unk_0xA829C9A2767AC8EF())
	{
		func_320(0);
		unk_0x447303BA4E2014EB();
		return 1;
	}
	if (func_319() == 3)
	{
		func_320(2);
		unk_0x789606E3ADCE39F7(250f);
	}
	if (unk_0x240B0351428767E8() >= 250f)
	{
		unk_0x789606E3ADCE39F7(250f);
	}
	if (unk_0xAC1E9D879866C4EE() == 0)
	{
		unk_0x789606E3ADCE39F7(250f);
	}
	if (unk_0x240B0351428767E8() <= 0f)
	{
		func_320(0);
		return 1;
	}
	return 0;
}

int func_319()
{
	return Global_1574629.f_19;
}

void func_320(int iParam0)
{
	if (Global_1574629.f_19 != iParam0)
	{
		Global_1574629.f_19 = iParam0;
	}
}

void func_321(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_325(iParam0, &iVar1);
	if (!unk_0x3C57C2F07FEE34D2("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xB45CDD8A96E17099(iVar1))
			{
				return;
			}
			if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == iVar1)
			{
				func_324(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xB45CDD8A96E17099(iVar1))
			{
				return;
			}
			if (func_322(iParam0))
			{
				func_324(iParam0, 0);
			}
		}
		unk_0x219E451DF8882834(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_322(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_323(iParam0) };
	if (Var0.f_1 != -1 && unk_0xE2D0C323A1AE5D85(Global_37946[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_323(var uParam0)
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

void func_324(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_323(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_37946[Var0.f_1]), Var0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_37946[Var0.f_1]), Var0);
	}
}

var func_325(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_326(iParam0) };
	*iParam1 = unk_0x63AC7EFB770FCB6F(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_326(int iParam0)
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
			Var1 = { func_327(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_327(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_327(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_327(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_327(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_327(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_327(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312124[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_327(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_327(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_327(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_327(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_327(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_327(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_327(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_327(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_327(43, 0) };
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
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_327(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_327(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_327(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_327(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_327(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_327(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_327(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_327(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_327(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_327(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_327(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_327(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_327(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_327(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_327(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_327(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_327(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_327(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_327(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_327(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_327(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_327(112, 1) };
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
		
		case 225:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
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
		
		case 223:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_327(int iParam0, bool bParam1)
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

int func_328()
{
	return Global_2726390;
}

bool func_329()
{
	return Global_2725222;
}

void func_330(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_354(bParam0, 0);
	}
	func_352(0);
	func_331(66);
}

void func_331(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_310();
	if (Global_1575046)
	{
		sVar1 = func_351(iParam0);
		iVar2 = unk_0x2E87280918B16506(sVar1);
		func_350(&Global_2727494, 1, 0);
		unk_0x16AEEE39D8EF7E7D(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_332();
	}
	Global_1574980 = iParam0;
}

void func_332()
{
	if (Global_2725147)
	{
		if (func_334())
		{
			unk_0x859006DB870314C5(0);
			func_333();
		}
	}
}

void func_333()
{
	if (Global_2725144)
	{
		if (!Global_2725143)
		{
			Global_2725143 = 1;
			Global_2725152 = unk_0x320D1840B6DAA1CC();
			Global_2725151 = 1;
		}
	}
}

int func_334()
{
	if (Global_2715542.f_6575 && Global_2725144)
	{
		if (func_338(0))
		{
			if (func_336() && !unk_0xA829C9A2767AC8EF())
			{
				if (((Global_2715542.f_6597 == 122 || Global_2715542.f_6597 == 123) || Global_2715542.f_6597 == 124) || Global_2715542.f_6597 == 125)
				{
					return 1;
				}
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_71.f_2, 26))
				{
					return 1;
				}
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_71.f_2, 27))
				{
					return 1;
				}
				if (func_335())
				{
					return 1;
				}
				if (Global_1958950)
				{
					return 1;
				}
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_37, 23))
				{
					if (!func_256(unk_0x9E2D6C50374FCFA9(), 0) && !func_259())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_335()
{
	return Global_2714627.f_24;
}

int func_336()
{
	if (func_337() == 0)
	{
		return 1;
	}
	return 0;
}

int func_337()
{
	return Global_1574629.f_18;
}

int func_338(int iParam0)
{
	if (func_348(unk_0x9E2D6C50374FCFA9()) && unk_0xE2D0C323A1AE5D85(Global_1946934.f_4, 22))
	{
		return 0;
	}
	if (Global_1577858)
	{
		return 0;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (func_347())
	{
		return 0;
	}
	if ((Global_2725145 && func_346()) || Global_2725145 == 0)
	{
		return 1;
	}
	if (Global_2715542.f_6597 == 123 && Global_2725148)
	{
		return 1;
	}
	if (Global_2725146)
	{
		if (Global_2715542.f_6597 == 122)
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_37, 23))
	{
		if (!func_256(unk_0x9E2D6C50374FCFA9(), 0) && !func_259())
		{
			return 1;
		}
	}
	if (Global_2725149)
	{
		if (iParam0 == 0)
		{
			if ((Global_2715542.f_6597 == 123 || (Global_2715542.f_6597 == 124 && func_344() == 1)) || Global_2715542.f_6597 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2715542.f_6575 || func_342(-1046478848)) && Global_2725150)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_339() || func_335())
	{
		return 1;
	}
	return 0;
}

bool func_339()
{
	return func_340(unk_0x9E2D6C50374FCFA9());
}

bool func_340(int iParam0)
{
	return func_341(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_341(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

int func_342(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_343(unk_0x9E2D6C50374FCFA9()) };
	if (Var0.f_2 < fParam0)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
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

Vector3 func_343(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_344()
{
	return func_345(unk_0x9E2D6C50374FCFA9());
}

var func_345(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

bool func_346()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_347()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

int func_348(int iParam0)
{
	if (iParam0 != func_141())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_349(Global_2689156[iParam0 /*453*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)
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

void func_350(var uParam0, bool bParam1, bool bParam2)
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

char* func_351(int iParam0)
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

void func_352(int iParam0)
{
	var uVar0;
	
	uVar0 = func_353();
	Global_1574979 = iParam0;
}

var func_353()
{
	return Global_1574979;
}

void func_354(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_356(&Global_22611, bParam1);
	unk_0x3B4B2C4B99C88DE8(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x310F3C51704851D4();
			func_355(0);
			if (unk_0xE5965CDF24F93A9F(Global_1577828))
			{
				if (unk_0x930E64CB0285CAEC(Global_1577828, 0))
				{
					if (!unk_0xA6A089369417736E(Global_1577828))
					{
						unk_0x2D58A6131679D82C(Global_1577828, 0, 0);
					}
					unk_0x05CB75C0837196F9(&Global_1577828);
				}
			}
		}
	}
}

void func_355(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2727472 = 0;
	}
	Global_1574629.f_18 = iParam0;
}

void func_356(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x876B1078E90C91CB(uParam0->f_9))
	{
		if (unk_0xA24FDA4986456697(uParam0->f_9))
		{
			func_357(0);
		}
		unk_0x588DDCB644C6486A(uParam0->f_9, 0);
	}
	if (!Global_43739)
	{
		unk_0x84CF415AEAB83B93(1);
		unk_0xE776D70A603C3C81(0f);
		unk_0x97E56574A6AA6C7D(0f);
	}
	Global_2667222.f_603 = 0f;
	if (!bParam1)
	{
		unk_0x850D4EF3D40FB068(0, 0, 0, 1, 0, 0);
	}
}

void func_357(int iParam0)
{
	Global_22689 = iParam0;
}

void func_358(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_363(1, 0, 1);
	}
	else
	{
		func_359(iParam1);
	}
}

void func_359(int iParam0)
{
	func_362();
	if (iParam0 == 0)
	{
		if (unk_0x102628DFCAF80472())
		{
			return;
		}
	}
	if (func_361() == 0 || unk_0xF1EC2C71FD1371B8())
	{
		func_360(1);
		unk_0x7E8EFD07A6DC03D3(0);
		unk_0x7E8EFD07A6DC03D3(0);
	}
}

void func_360(int iParam0)
{
	if (Global_1574629.f_20 != iParam0)
	{
		Global_1574629.f_20 = iParam0;
	}
}

int func_361()
{
	return Global_1574629.f_20;
}

void func_362()
{
	Global_2726780 = 1;
}

void func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (func_364())
	{
		return;
	}
	if ((func_361() == 1 || unk_0xF1EC2C71FD1371B8()) || iParam0)
	{
		func_360(0);
		unk_0x7E8EFD07A6DC03D3(1);
		if (!bParam1)
		{
			unk_0x7E8EFD07A6DC03D3(1);
		}
		if (bParam2)
		{
			unk_0x1C2089BF9D3135D3();
		}
	}
}

int func_364()
{
	if (func_365())
	{
		return Global_2725151;
	}
	return 0;
}

int func_365()
{
	if (Global_2725144)
	{
		return Global_2725143;
	}
	return 0;
}

void func_366(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7B8DC5701D211549();
		unk_0x7FB3477C478F833E(-1);
		unk_0x63E14B0EA0BBF0FF(1);
		unk_0x8C3444D417673C8A(1);
		unk_0x6B81DF75FA671549(1f);
		unk_0xA121D58142738A8D(3);
		unk_0x8C5E1B04C94FF212(3);
	}
	else
	{
		unk_0x84A65E2E9CFB6A77(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0x7FB3477C478F833E(0);
		unk_0x63E14B0EA0BBF0FF(0);
		unk_0x8C3444D417673C8A(0);
		unk_0x6B81DF75FA671549(0f);
		unk_0xA121D58142738A8D(0);
		unk_0x8C5E1B04C94FF212(0);
	}
}

void func_367(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_312();
	func_219(1);
	func_207(1);
	func_206(12, 1, -1);
	func_377();
	unk_0xB68BD12B3A8C52FD(0);
	if (bParam0)
	{
		unk_0xF0FF9641AD2902CC(unk_0x9E2D6C50374FCFA9(), iParam6);
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
	func_368(unk_0x9E2D6C50374FCFA9(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xFF45C7CD7F890B51(unk_0xE2D3D51028F0428A()))
		{
			unk_0xC28A66E18D3390FD(unk_0xE2D3D51028F0428A(), 0);
		}
	}
}

void func_368(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_376())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_336())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_256(unk_0x9E2D6C50374FCFA9(), 0) && !func_259()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_373(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_372(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_371();
					func_370();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_372(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_369(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_369(int iParam0)
{
	return iParam0 == 17;
}

void func_370()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_371()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_372(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
				func_375();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_256(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_374(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_375()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

int func_376()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_377()
{
	Global_22691.f_5 = 1;
}

int func_378()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_379(int iParam0)
{
	unk_0x3E3D339BAD67F6F2(unk_0x407E03586628E458(iParam0), 346, 1);
}

void func_380(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_3, 12))
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1932651)
			{
				Global_1932651 = 1;
				Global_1932652 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0x0347CCBD719C8ADC(Global_1932650))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0xE2F2D76A4AA269FF() == 9 || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 8) || unk_0xE2F2D76A4AA269FF() == 12)
									{
										func_385("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_385("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_384("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("artdir", "AARON GARBUT", 210f, "|", 1);
									func_382("artdir", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 33, -3390))
							{
								func_381("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_305(uParam0, 33, -2940))
								{
									func_385("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_384("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_382("techdir", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 33, -450))
							{
								func_381("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_385("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_384("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_382("assartdir", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_381("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0xE2F2D76A4AA269FF() == 9 || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 8) || unk_0xE2F2D76A4AA269FF() == 12)
									{
										func_385("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_385("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_384("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_383("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_382("asstecdir", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 36, -4740))
							{
								func_381("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_305(uParam0, 36, -3810))
								{
									func_385("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_384("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_382("leadprog", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 36, -600))
							{
								func_381("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0xE2F2D76A4AA269FF() == 9 || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 8) || unk_0xE2F2D76A4AA269FF() == 12)
									{
										func_385("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_385("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_384("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_382("senprog", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 37, -1350))
							{
								func_381("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_385("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_384("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_382("prog", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 38, -4320))
							{
								func_381("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_305(uParam0, 38, -3240))
								{
									if (((unk_0xE2F2D76A4AA269FF() == 9 || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 8) || unk_0xE2F2D76A4AA269FF() == 12)
									{
										func_385("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_385("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_384("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_383("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_382("socclub", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 38, -870))
							{
								func_381("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_385("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_384("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_382("audio", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 39, -1620))
							{
								func_381("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_385("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_384("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_382("scrlead", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 40, -1470))
							{
								func_381("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_385("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_384("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_382("script1", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 41, -1200))
							{
								func_381("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_385("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_384("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_383("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_382("script2", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 42, -1320))
							{
								func_381("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_385("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_384("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_384("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_382("visdes", 0.05f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 43, -1320))
							{
								func_381("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_385("uides", 40f, 20f, "right", 0f, 0.3f);
									func_384("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_382("uides", 0f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 45, -1650))
							{
								func_381("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_385("concre", 0f, 20f, "left", 0f, 0.3f);
									func_384("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_383("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_382("concre", 0f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 46, -1950))
							{
								func_381("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_385("devass", 0f, 400f, "right", 0f, 0f);
									func_384("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_383("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_382("devass", 0f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_381("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_385("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_384("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_384("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_382("qasup", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 48, -1320))
							{
								func_381("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_385("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_384("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_382("senta", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 49, -5070))
							{
								func_381("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_305(uParam0, 49, -3750))
								{
									func_385("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_384("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_382("asspro", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_305(uParam0, 49, -720))
							{
								func_381("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_264(uParam0))
								{
									if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 2468)
									{
										func_385("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_384("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_383("animdir", "ROB NELSON", 200f, "|", 1);
										func_382("animdir", 0.16f);
										unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_385("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_384("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_383("animdir", "ROB NELSON", 90f, "|", 1);
									func_382("animdir", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_264(uParam0))
							{
								if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 6123)
								{
									func_381("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 1898)
							{
								func_381("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_264(uParam0))
								{
									if (unk_0xF34D8FCAE3FD4EE4() && unk_0x0D080B3EBA2ACFB7())
									{
										func_385("producer", 65f, 55f, "right", 0f, 0f);
										func_384("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_383("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_382("producer", 0f);
										unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 2452)
								{
									func_385("producer", 0f, 100f, "left", 0.3f, 0f);
									func_384("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_383("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_382("producer", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_264(uParam0))
							{
								if (unk_0xF34D8FCAE3FD4EE4() && unk_0x0D080B3EBA2ACFB7())
								{
									func_381("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xF34D8FCAE3FD4EE4() && unk_0x0D080B3EBA2ACFB7())
							{
								func_381("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_264(uParam0))
								{
									if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 13265)
									{
										func_385("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_384("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_383("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_382("vpcre", 0.16f);
										unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 6921)
								{
									func_385("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_384("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_383("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_382("vpcre", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_264(uParam0))
							{
								if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 16955)
								{
									func_381("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 10513)
							{
								func_381("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, uParam0->f_5))
							{
								if (func_264(uParam0))
								{
									if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 18077)
									{
										Global_1932652 = 0;
										func_385("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_384("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_383("execpro", "SAM HOUSER", 165f, "|", 1);
										func_382("execpro", 0.16f);
										unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 12358)
								{
									Global_1932652 = 0;
									func_385("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_384("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_383("execpro", "SAM HOUSER", 190f, "|", 1);
									func_382("execpro", 0.16f);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_264(uParam0))
							{
								if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 21785)
								{
									func_381("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xF34D8FCAE3FD4EE4() && unk_0xC10FE9051DBB0E91() > 15333)
							{
								func_381("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1932652)
				{
					unk_0xC4353D240DCE9533(Global_1932650, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_381(char* sParam0, float fParam1)
{
	unk_0xEA5DEA46C3EE64D3(Global_1932650, "HIDE");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_382(char* sParam0, float fParam1)
{
	unk_0xEA5DEA46C3EE64D3(Global_1932650, "SHOW_CREDIT_BLOCK");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_383(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xEA5DEA46C3EE64D3(Global_1932650, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam1);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam3);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xD7D6BA6E36AEC182(iParam4);
	unk_0x6F06CF0E9AB02847();
}

void func_384(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0xEA5DEA46C3EE64D3(Global_1932650, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam1);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam3);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xD7D6BA6E36AEC182(iParam4);
	unk_0x6F06CF0E9AB02847();
}

void func_385(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0xEA5DEA46C3EE64D3(Global_1932650, "SETUP_CREDIT_BLOCK");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam3);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam4);
	unk_0xCA5D23E5F0F0306F(fParam5);
	unk_0x6F06CF0E9AB02847();
}

void func_386(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_34))
		{
			if (unk_0x55A0C756C4A8220C(uParam0->f_34, 0))
			{
				unk_0x634E773276BB1AEC(unk_0xCACAD935C0BEE14F(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_387()
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 2:
				if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 1))
				{
					if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
					{
						if (func_407(Local_414.f_3))
						{
							if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), -1794415470) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), -1794415470) != 0)
								{
									unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_414.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 2))
							{
								if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_414.f_3)))
								{
									unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4), 2);
									func_406(1);
								}
								else
								{
									unk_0x02B222EADC9DC566(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_407(Local_414.f_3))
				{
					if (!func_405(Local_414.f_4))
					{
						if (unk_0xE2D0C323A1AE5D85(uLocal_582, 26))
						{
							if (unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_414.f_4), -1273030092) != 1 && unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_414.f_4), -1273030092) != 0)
							{
								unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_414.f_4), unk_0xA5677134B9672173(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 27))
				{
					if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
					{
						if (!func_125())
						{
							if (!unk_0xF1EC2C71FD1371B8())
							{
								unk_0x859006DB870314C5(800);
							}
						}
					}
					else if (unk_0xA829C9A2767AC8EF())
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 27);
					}
				}
				else if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 4))
				{
					if (func_394(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0x02B222EADC9DC566(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x7936E7A8DBE3DBBE();
						unk_0xB06C15F6118B032D();
						unk_0x94953C3FF0664F66(0);
						unk_0x080C97B891E2F3AA(0, 1065353216);
						unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_405(Local_414.f_4))
				{
					if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 29))
					{
						if (func_407(Local_414.f_3))
						{
							unk_0x5B7AF57D366861F2(unk_0x8AF984152F749D80(Local_414.f_4), unk_0xA5677134B9672173(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x5A7ACD1CDF509B0D(800);
							unk_0xCED9E32812D6C7C7(&uLocal_582, 29);
						}
					}
					else if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 5))
					{
						if (unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_414.f_4), -272084098) == 7)
						{
							unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), -828834893) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), -828834893) != 0)
						{
							unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
						}
					}
					else if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 6))
					{
						unk_0xCED9E32812D6C7C7(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3), 6);
						unk_0xCED9E32812D6C7C7(&(Global_2810287.f_836), 4);
						unk_0xB0550BC91B0159D6(&(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4), 2);
						func_368(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
						func_393();
						func_406(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_390(-200, 0);
							unk_0x633310C9B4B8972C(200, 0, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_405(Local_414.f_4))
				{
					if (func_407(Local_414.f_3))
					{
						if (unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_414.f_4), -258271821) != 1 && unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_414.f_4), -258271821) != 0)
						{
							unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_414.f_4), 1);
							unk_0xAD6CDBCDA713560A(unk_0x8AF984152F749D80(Local_414.f_4), unk_0xA5677134B9672173(Local_414.f_3), 12f, 786599);
							func_389(&(Local_414.f_3));
							func_389(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 1))
		{
			unk_0x2EE5FFF3E1E3400D(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 26))
			{
				unk_0xCED9E32812D6C7C7(&uLocal_582, 26);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 28))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 2))
			{
				if (!func_200(&uLocal_247))
				{
					func_218();
					func_22(&uLocal_247, 0, 0);
				}
				else if (func_199(&uLocal_247, 5000, 0))
				{
					if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0xCED9E32812D6C7C7(&uLocal_582, 28);
					}
				}
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 30))
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 5))
			{
				if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0xCED9E32812D6C7C7(&uLocal_582, 30);
				}
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 6))
		{
			func_388();
		}
		if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_4, 2))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
				}
			}
		}
	}
}

void func_388()
{
	Global_2821607.f_258 = 1;
}

void func_389(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

void func_390(int iParam0, int iParam1)
{
	func_392(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_391(iParam0, 0);
	}
}

void func_391(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_392(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_4 = iVar1;
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_3 = (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_391(iVar1, 0);
	}
}

void func_393()
{
	unk_0x5089DD830FA61D71(0, 22, 1);
	unk_0x5089DD830FA61D71(0, 36, 1);
	unk_0x5089DD830FA61D71(0, 32, 1);
	unk_0x5089DD830FA61D71(0, 34, 1);
	unk_0x5089DD830FA61D71(0, 35, 1);
	unk_0x5089DD830FA61D71(0, 33, 1);
	unk_0x5089DD830FA61D71(0, 31, 1);
	unk_0x5089DD830FA61D71(0, 30, 1);
	unk_0x5089DD830FA61D71(0, 44, 1);
	unk_0x5089DD830FA61D71(0, 141, 1);
	unk_0x5089DD830FA61D71(0, 140, 1);
	unk_0x5089DD830FA61D71(0, 263, 1);
	unk_0x5089DD830FA61D71(0, 264, 1);
	unk_0x5089DD830FA61D71(0, 143, 1);
	unk_0x5089DD830FA61D71(0, 24, 1);
	unk_0x5089DD830FA61D71(0, 257, 1);
	unk_0x5089DD830FA61D71(0, 263, 1);
	unk_0x5089DD830FA61D71(0, 264, 1);
	unk_0x5089DD830FA61D71(0, 143, 1);
	unk_0x5089DD830FA61D71(0, 262, 1);
	unk_0x5089DD830FA61D71(0, 261, 1);
	unk_0x5089DD830FA61D71(0, 37, 1);
	unk_0x5089DD830FA61D71(0, 25, 1);
	unk_0x5089DD830FA61D71(0, 26, 1);
}

int func_394(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22691.f_6 = 1;
	if (Global_2703656.f_924 && Global_2703656.f_932)
	{
		func_402(0, bParam7);
		return 1;
	}
	if (unk_0x04458B4E5D9E466A() && !bParam7)
	{
		if (Global_2703656.f_924)
		{
			func_402(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x2981C54770E1D19C() && !bParam7) && !unk_0xBC4351060BEFB0D2())
	{
		return 0;
	}
	if (!func_401())
	{
		if (func_400(unk_0x9E2D6C50374FCFA9(), 1, 0) && !(func_399() || func_398()))
		{
			if (((bParam7 && func_14(unk_0x9E2D6C50374FCFA9(), 1, 0)) && unk_0x04458B4E5D9E466A()) && Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_231 == 1)
			{
			}
			else if (func_310() == 28)
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
	if (!Global_2703656.f_924 && !bParam9)
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if ((unk_0x48053974ED6F63CE((Var1.x - Param0.x)) < 0.2f && unk_0x48053974ED6F63CE((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x48053974ED6F63CE((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x48053974ED6F63CE(fVar2) < 1f)
			{
				Global_2703656.f_924 = 0;
				Global_2703656.f_925 = 0;
				if (unk_0xBC4351060BEFB0D2())
				{
					unk_0x093F334B2F3729DB();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2703656.f_926 || !Param0.f_1 == Global_2703656.f_926.f_1) || !Param0.f_2 == Global_2703656.f_926.f_2) || !fParam1 == Global_2703656.f_929)
	{
		if (Global_2703656.f_924 == 1)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2703656.f_930) < func_397(0))
			{
				return 0;
			}
			unk_0x093F334B2F3729DB();
			Global_2703656.f_925 = 1;
		}
		else
		{
			Global_2703656.f_925 = 0;
		}
		Global_2703656.f_926 = { Param0 };
		Global_2703656.f_929 = fParam1;
		Global_2703656.f_924 = 0;
	}
	if (bParam2)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			if (unk_0xE5965CDF24F93A9F(uVar0) && unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2703656.f_924 && !unk_0xBC4351060BEFB0D2())
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
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_100026.f_1392[44], 16))
			{
				func_396(0);
			}
			if (!unk_0x0CC0416F24BE03FF(unk_0xE2D3D51028F0428A(), &(Global_2667222.f_501)))
			{
				Global_2667222.f_501 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if (unk_0x817B926B53C0589A(iVar0))
				{
					Global_2703656.f_931 = 0;
				}
			}
		}
		if (Global_2703656.f_931 > -1)
		{
			Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_924 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						if (unk_0x3A8B0F5B0E3DE13A(iVar0))
						{
							unk_0xC64B6E13A6A7F517(iVar0, Param0, 0, 1, 1, 1);
							unk_0xBBF86885619695CE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0x8CE3D365F064F69E(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xE7DD33D0E2A313F4(iVar0);
						}
					}
					else
					{
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam1);
					}
				}
				else
				{
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam1);
				}
				func_402(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x5639E771F6085BF6();
				unk_0x8A87922C72F578EC(unk_0x9E2D6C50374FCFA9(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_924 = 1;
		}
	}
	if (Global_2703656.f_924)
	{
		Global_22691.f_6 = 1;
		Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
		if (Global_2703656.f_931 > -1)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			}
			if (func_395(&(Global_2703656.f_931), Param0, fParam1, iVar0))
			{
				func_402(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Global_2703656.f_926) < 2f)
				{
					if (unk_0xBC4351060BEFB0D2())
					{
						unk_0x093F334B2F3729DB();
					}
					func_402(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0xBC4351060BEFB0D2())
			{
				if (fParam10 != 0f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						unk_0x8CE3D365F064F69E(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2703656.f_932 = 1;
						return 0;
					}
				}
				func_402(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_395(var uParam0, struct<3> Param1, float fParam2, var uParam3)
{
	if (unk_0xE5965CDF24F93A9F(Global_2703656.f_933) && !unk_0x55B23FE400FCEA6B(Global_2703656.f_933, 0))
	{
		unk_0xE7DD33D0E2A313F4(Global_2703656.f_933);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703656.f_933 = uParam3;
			unk_0xE7DD33D0E2A313F4(Global_2703656.f_933);
			if (unk_0x3A8B0F5B0E3DE13A(Global_2703656.f_933))
			{
				if (!unk_0x55B23FE400FCEA6B(Global_2703656.f_933, 0))
				{
					unk_0xBBF86885619695CE(Global_2703656.f_933, fParam2);
					unk_0xC64B6E13A6A7F517(Global_2703656.f_933, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_396(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667222.f_2689;
	if ((unk_0xF1557162766FCDEB() && Global_2667222.f_2687 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667222.f_2686)
	{
		if (!unk_0xF5A00C1EB6E872B8())
		{
			Global_2667222.f_2686 = iVar0;
		}
	}
}

int func_397(bool bParam0)
{
	if (unk_0xA829C9A2767AC8EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_398()
{
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 12)) && Global_1965714 == 8);
}

bool func_399()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_400(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2689156[iParam0 /*453*/].f_231 == 99)
	{
		if ((iParam2 && Global_2689156[iParam0 /*453*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689156[iParam0 /*453*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_401()
{
	return Global_1575022;
}

void func_402(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x080C97B891E2F3AA(0f, 1065353216);
		unk_0x94953C3FF0664F66(0f);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
	}
	if (!bParam1)
	{
		unk_0x5639E771F6085BF6();
	}
	if (unk_0xBC4351060BEFB0D2())
	{
		unk_0x093F334B2F3729DB();
	}
	func_370();
	if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 14) && !func_404())
	{
		func_403();
	}
}

void func_403()
{
	Global_2819657.f_92 = 1;
}

int func_404()
{
	if (!unk_0x44859561F653DD4E() && !func_401())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_143910[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_405(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

void func_406(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 15))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 15);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 15))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 15);
	}
}

int func_407(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_408(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_408(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
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

void func_409(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_410(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_410(iParam0);
	}
}

void func_410(int iParam0)
{
	Global_100026.f_196[iParam0] = 1;
	Global_100026.f_195 = 1;
}

void func_411(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_100026.f_9[iParam0] = 1;
	}
	else
	{
		Global_100026.f_9[iParam0] = 0;
	}
}

void func_412(bool bParam0)
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
		func_410(iVar0);
		iVar0++;
	}
}

void func_413(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

int func_414()
{
	return Local_414;
}

int func_415()
{
	return 1;
}

int func_416(int iParam0)
{
	return Local_581[iParam0 /*5*/];
}

int func_417(int iParam0)
{
	return Local_581[iParam0 /*5*/].f_2;
}

int func_418(bool bParam0)
{
	if (func_420())
	{
		if (bParam0)
		{
			if (!Global_1836575 && !func_419(unk_0x9E2D6C50374FCFA9(), 2))
			{
				unk_0x9DCF157443EA30D6("MinigameTransitionIn", 0, 1);
				func_358(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_419(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_420()
{
	return Global_2703656.f_2;
}

void func_421(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		if (bLocal_588)
		{
			if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 2))
			{
				if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_747(1);
				bVar0 = true;
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Local_581[unk_0xF1354995C6159A78() /*5*/].f_3, 1))
		{
			if (!unk_0xE2D0C323A1AE5D85(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_217(&Local_62, 0, bParam0);
	if (unk_0x9315DBF7D972F07A())
	{
		if (Global_2703656.f_3442)
		{
			func_740(0, 1, 0, 1);
		}
	}
	if (unk_0x9315DBF7D972F07A())
	{
		func_406(0);
	}
	unk_0x7BACBB4C6A7B18B7(Local_62.f_122, 0);
	unk_0x13A2865660B9B033(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x13A2865660B9B033(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_836), 4);
	func_98(0);
	func_61(0);
	func_739();
	func_738(iLocal_61, 0);
	func_198(&(Global_2703656.f_3692));
	Global_2703656.f_3690 = 0;
	Global_2703656.f_3689 = 0;
	Global_2703656.f_3691 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 1);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 1);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 1);
	}
	if (bVar0)
	{
		func_424(0, 0, 0, 0, 1);
	}
	else
	{
		unk_0x3410421C60BF7143(1);
		func_424(0, 0, 3, 1, 1);
	}
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_836), 0);
	func_412(0);
	func_411(4, 0);
	func_411(1, 0);
	func_411(0, 0);
	func_411(2, 0);
	func_411(3, 0);
	func_409(iLocal_61, 0);
	func_393();
	func_35();
	if (unk_0x12DD4A0B247D9B4D(Global_100026.f_255[iLocal_61]))
	{
		unk_0xAAD76B24A5282FDD(Global_100026.f_255[iLocal_61], 0);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_585))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_585);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		func_423(0);
		func_201(0);
	}
	func_422(Local_414.f_5);
}

void func_422(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Param0)) >= 1000)
		{
			unk_0xE68DF5AF3A89B195();
		}
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 5);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 5);
	}
}

void func_424(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	iVar1 = Global_1853128[iVar0 /*888*/];
	func_737();
	func_733();
	unk_0xF3F6C6E90B9AFC5D(0);
	func_732();
	Global_1057161 = 0;
	Global_1835453 = 0;
	func_731();
	unk_0x7A4832D97838593A(0);
	func_730();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836366 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_729(0);
	Global_1836355 = 0;
	Global_1836354 = 0;
	Global_1836378 = 0;
	Global_1836594 = 0;
	Global_1836600 = 0;
	Global_1836088 = 0;
	Global_1837284 = 1;
	Global_1836566 = 0;
	Global_1836367 = -1;
	func_728(0);
	unk_0xB0550BC91B0159D6(&(Global_2621446.f_1), 5);
	if (!func_727() && !func_725())
	{
		func_724();
	}
	func_723();
	func_722();
	func_721();
	func_720();
	func_719();
	if (unk_0x9315DBF7D972F07A())
	{
		func_718();
		func_717();
	}
	if (func_716() || !func_715())
	{
		func_714();
		func_713(1, 1, 1);
		func_712();
		func_711();
		if (iVar0 != -1)
		{
			Global_1890187[iVar0 /*105*/].f_1 = 0;
			Global_1890187[iVar0 /*105*/].f_2 = 0;
			Global_1890187[iVar0 /*105*/] = 0;
		}
	}
	func_710();
	if ((((Global_4718592 != 6 && func_709(Global_4718592.f_86750) != 14) && func_709(Global_4718592.f_86750) != 15) && !func_346()) && !func_725())
	{
		if (func_14(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
			{
				unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 1);
			}
		}
	}
	Global_1835474 = 0;
	if (Global_1923723.f_9 == 4)
	{
		if (func_708(unk_0x9E2D6C50374FCFA9()) || func_707(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1835474 = 1;
		}
	}
	func_705();
	if (func_704())
	{
		func_703();
	}
	func_702();
	Global_4718592.f_87287 = 0;
	Global_1923683.f_4 = 0;
	if (!unk_0xE2D0C323A1AE5D85(Global_4718592.f_29, 1) && !func_701())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_14, 17))
		{
			unk_0xEDD6FA5743D3A359(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0xFF472C078825E148(1);
		}
		else
		{
			unk_0xEDD6FA5743D3A359(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xFF472C078825E148(0);
		}
	}
	StringCopy(&(Global_4718592.f_86742), "", 32);
	if (!func_725())
	{
		unk_0xF43060DF31ACEA55();
		unk_0xAC765EF46E85A446(18);
		if ((bParam3 && !func_700()) && !func_699())
		{
			unk_0xC43E67C9BA871ECB();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1889588[iVar3] = 0;
		Global_1889555[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_2715542.f_5966), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_2715542.f_5966), 3);
	}
	if (iVar0 != -1 && Global_2714627.f_669.f_10 != 0)
	{
		Global_1890187[unk_0x9E2D6C50374FCFA9() /*105*/].f_2 = Global_2714627.f_669.f_10;
	}
	if (func_420() || (iVar0 != -1 && unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_887, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_697();
			Global_4718592 = 0;
		}
		else
		{
			func_697();
		}
		func_696();
		func_695(1, 1);
		func_713(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1890187[iVar0 /*105*/].f_1 = 0;
			Global_1890187[iVar0 /*105*/].f_2 = 0;
			Global_1890187[iVar0 /*105*/] = 0;
		}
		func_694(1);
		if (func_693())
		{
			func_692();
		}
		if (!func_17(unk_0x9E2D6C50374FCFA9()))
		{
			func_690(4);
		}
		func_712();
		func_689(0);
		func_688();
		Global_1837276 = 0;
	}
	if (!func_687())
	{
		func_686();
		if (func_685())
		{
			if (func_684())
			{
				func_696();
			}
		}
		func_694(1);
		if (!func_683())
		{
			Global_2715542.f_6305 = 0;
			Global_2715542.f_6306 = 0;
			Global_2715542.f_6304 = 0;
			Global_2715542.f_6303 = 0;
			Global_2715542.f_6482 = 0;
		}
	}
	else
	{
		func_682(unk_0x9E2D6C50374FCFA9(), 0);
	}
	func_681((Global_1923723.f_9 != 4 && !func_687()));
	func_680((Global_1923723.f_9 != 4 && !func_687()));
	func_679((Global_1923723.f_9 != 4 && !func_687()));
	func_678((Global_1923723.f_9 != 4 && !func_687()));
	if (func_683())
	{
		Global_2715542.f_6395 = 1;
	}
	else
	{
		Global_2715542.f_6395 = 0;
	}
	if (!func_687())
	{
		if (func_683())
		{
			Global_2715542.f_6396 = 1;
		}
		else
		{
			Global_2715542.f_6396 = 0;
		}
	}
	if (func_676())
	{
		if (func_675())
		{
			Global_2715542.f_6397 = 1;
		}
		else
		{
			Global_2715542.f_6397 = 0;
		}
	}
	if (!func_727())
	{
		Global_1923748.f_1345 = 0;
	}
	if (!func_687() && !func_727())
	{
		func_695(1, Global_1923723.f_9 != 4);
		func_713(1, 1, 0);
		func_674(0);
		func_673();
		Global_1837278 = 0;
		if (iVar0 != -1)
		{
			Global_1890187[iVar0 /*105*/].f_1 = 0;
			Global_1890187[iVar0 /*105*/].f_2 = 0;
			Global_1890187[iVar0 /*105*/] = 0;
		}
	}
	func_670(1, -1);
	if (func_669())
	{
		func_668();
	}
	if (unk_0x44859561F653DD4E())
	{
		unk_0xC189969327D9BDA0();
	}
	if ((!func_700() && !func_687()) && !func_699())
	{
		func_663();
	}
	Global_4718592.f_87283 = 0;
	func_662();
	Global_1836348 = -1;
	Global_1889636 = -1;
	Global_1889626 = -1;
	Global_1889629 = -1;
	Global_1836353 = 0;
	Global_1889627 = 0;
	Global_1836577 = 0;
	Global_1836569 = 0;
	Global_1889637 = 0;
	func_661(0);
	func_660();
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_887), 7);
	Global_1889624 = 0f;
	Global_1889625 = 0f;
	Global_1836578 = 0;
	Global_1836579 = -1;
	func_659(0);
	Global_1836567 = 0;
	Global_1836089 = 0;
	func_658();
	unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
	unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
	func_657(1);
	if (func_656())
	{
		func_655();
	}
	if (func_654())
	{
		if (func_652(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x21E2C39591974468() < 2)
			{
				func_651();
				func_650(1);
			}
			else
			{
				func_649();
			}
			if (Global_1923723.f_9 != -1)
			{
				func_648();
			}
		}
		else if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 0)
		{
			if (Global_1923723.f_9 != -1)
			{
				func_648();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1853128[iVar0 /*888*/].f_194 = 0;
	if (bVar4 && !func_727())
	{
		func_647();
	}
	if (!bVar4)
	{
		func_646(0);
	}
	if ((func_645() != 40 && func_645() != 39) && !func_644())
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
	if (func_643() && func_255())
	{
	}
	else
	{
		func_642();
	}
	func_641();
	func_650(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1923723.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_640())
		{
			func_639(0, iVar6);
		}
	}
	unk_0xB299A8F810F36AA2(0);
	if (unk_0x9315DBF7D972F07A())
	{
		switch (Global_1923723.f_9)
		{
			case 1:
				if (!func_638() && func_635(0) > 0)
				{
					Global_1941967[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_633();
					func_632();
				}
				break;
			
			case 6:
				Global_1837276 = 0;
				if (!bVar4)
				{
					func_633();
				}
				func_632();
				Global_1923723 = 0;
				Global_1923723.f_22 = { 0f, 0f, 0f };
				unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
				StringCopy(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_225), "", 24);
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_222 = { 0f, 0f, 0f };
				func_631(0);
				break;
			
			case 2:
				func_630(0);
				if (!func_629() || (func_629() && unk_0xACC32B78196FBC2A(&(Global_2714627.f_33))))
				{
					func_628(Global_1923723.f_16);
					func_627(Global_1923723.f_16);
				}
				iVar5 = Global_1853128[iVar0 /*888*/].f_10;
				if (iVar5 != func_141())
				{
					if (unk_0x0D01086B38EC256F(iVar5))
					{
						Global_2715542.f_5967 = { func_78(iVar5) };
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
				if ((iVar7 && func_629()) && unk_0xD4538F501EDCD96C() == 1)
				{
					Global_2715542.f_5967 = { func_626() };
				}
				if (((((Global_4718592.f_529 > 1 && !func_618()) && !func_617(Global_4718592.f_86750)) && !func_616(Global_4718592.f_86750)) && Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28 > -1) && Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28 < 4)
				{
					func_615(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28);
				}
				else
				{
					func_614();
				}
				break;
			
			case 3:
				func_630(0);
				iVar2 = 1;
				func_613();
				iVar5 = Global_1853128[iVar0 /*888*/].f_10;
				if (iVar5 != func_141())
				{
					if (unk_0x0D01086B38EC256F(iVar5))
					{
						Global_2715542.f_5967 = { func_78(iVar5) };
					}
				}
				if (((Global_4718592.f_529 > 1 && !func_618()) && !func_617(Global_4718592.f_86750)) && !func_616(Global_4718592.f_86750))
				{
					func_615(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28);
				}
				else
				{
					func_614();
				}
				break;
			
			case 4:
				func_630(0);
				iVar2 = 1;
				if (func_612())
				{
					func_611();
				}
				else if (func_610())
				{
				}
				else
				{
					if (!(func_609() || func_683()) || !func_608())
					{
						Global_2715542.f_6305 = 0;
						Global_2715542.f_6306 = 0;
					}
					if (!func_608())
					{
						Global_2715542.f_6304 = 0;
						Global_2715542.f_6303 = 0;
					}
				}
				if (func_708(unk_0x9E2D6C50374FCFA9()) || func_707(unk_0x9E2D6C50374FCFA9()))
				{
					Global_786435.f_34++;
				}
				else if (func_607())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_605())
				{
					Global_1945184.f_17++;
				}
				else if (func_335())
				{
					Global_1945270.f_18++;
				}
				else if ((func_604(Global_4718592.f_86750) || func_603(Global_4718592.f_86750)) || (func_601() && func_600(249)))
				{
					Global_1945402.f_18++;
				}
				if (func_599(Global_4718592.f_86750))
				{
					if (Global_1945104.f_14 == 0)
					{
						Global_1945104.f_14 = 1;
					}
				}
				if (!unk_0xE2D0C323A1AE5D85(Global_4718592.f_12, 22))
				{
					if (!unk_0xE2D0C323A1AE5D85(Global_4718592.f_12, 15))
					{
						func_598(Global_4718592.f_87186);
					}
					else
					{
						func_597(Global_4718592.f_134631, Global_4718592.f_134632);
					}
					if (Global_1923723.f_13 > -1)
					{
						unk_0x42EA11F7821D9466(Global_1923723.f_13, Global_1923723.f_14, 0);
					}
					else if (func_596() > -1)
					{
						func_594(func_596(), 0);
					}
				}
				if (func_593())
				{
					Var8 = { func_592() };
					func_591(Var8);
					if (func_590() != -1)
					{
						Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28 = func_590();
					}
					func_589();
					func_588();
				}
				else
				{
					func_613();
				}
				if (!func_256(unk_0x9E2D6C50374FCFA9(), 0))
				{
					unk_0xB83FA1B51FD31083(0);
					func_373(0, 0, 1);
				}
				break;
			
			case 5:
				func_630(0);
				iVar2 = 1;
				func_613();
				break;
			
			case 8:
				if (!func_629())
				{
					func_628(Global_1923723.f_16);
				}
				break;
			
			case 9:
				func_630(0);
				iVar2 = 1;
				func_613();
				func_627(Global_4718592.f_87037);
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_225 = { Global_4718592.f_87037 };
				if (func_587())
				{
					func_586();
				}
				if (!func_256(unk_0x9E2D6C50374FCFA9(), 0))
				{
					unk_0xB83FA1B51FD31083(0);
					func_373(0, 0, 1);
				}
				break;
			
			case 10:
				func_565(10, 0f, 0f, 0f, Var9);
				func_564();
				break;
		}
	}
	else
	{
		Global_1837276 = 0;
	}
	if (iVar2 || func_707(unk_0x9E2D6C50374FCFA9()))
	{
		if ((func_563(unk_0x9E2D6C50374FCFA9()) || func_708(unk_0x9E2D6C50374FCFA9())) || func_707(unk_0x9E2D6C50374FCFA9()))
		{
			if (Global_1932631 > 0)
			{
				Global_2715542.f_1.f_2828.f_13 = Global_1932631;
				Global_2715542.f_1.f_2828 = { Global_1932631.f_1 };
			}
		}
		else
		{
			func_562();
		}
	}
	Global_2715542.f_1.f_842 = 0;
	unk_0xB0550BC91B0159D6(&Global_1836093, 0);
	func_561(0);
	Global_1836358 = 0;
	Global_1836562 = -1;
	Global_1889554 = 0;
	Global_1574600 = 0;
	Global_1923723.f_1 = 0;
	Global_1923723.f_2 = 0;
	if (func_560() == 0)
	{
		if (Global_1923723.f_9 == -1 && bVar4 == 0)
		{
			func_552(0);
		}
		else
		{
			Global_1923723.f_9 = -1;
		}
	}
	func_551();
	if (func_550())
	{
		func_549();
	}
	if (func_548())
	{
		func_547();
	}
	if (!unk_0x44859561F653DD4E())
	{
		unk_0x91792061E06F1A74(1);
	}
	if (func_560() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_546(Global_1853128[iVar0 /*888*/]) && !func_700()) && !bVar4) && !func_401()) && !func_687()) && !func_699())
			{
				func_545(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_544();
	Global_1923723.f_1 = 0;
	if (!func_654())
	{
		func_543();
	}
	if (Global_1853128[iVar0 /*888*/] != -1)
	{
		iParam2 = iParam2;
		if (func_542(Global_1853128[iVar0 /*888*/]))
		{
			if (unk_0x20E4972CBF3DBE1B())
			{
				iVar10 = func_524(0);
				func_521(1213, -1);
				func_516(joaat("mpply_mgame_cheat_end"), iVar10);
				if (iVar10 > 0)
				{
					func_516(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x1F887A325E6C8D4C(unk_0x9E2D6C50374FCFA9());
	}
	func_514();
	if (Global_1923723 == 0)
	{
		if (!bVar4)
		{
			Global_1853128[iVar0 /*888*/].f_10 = -1;
			unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_887), 1);
		}
	}
	if (bVar4)
	{
		func_545(0);
		unk_0xCED9E32812D6C7C7(&(Global_1853128[iVar0 /*888*/].f_887), 1);
		Global_1853128[iVar0 /*888*/].f_10 = func_513(unk_0x9E2D6C50374FCFA9());
		unk_0xB83FA1B51FD31083(0);
		func_373(0, 0, 1);
		if (func_512())
		{
			func_510();
		}
	}
	if ((Global_1853128[iVar0 /*888*/] < 10 && Global_1853128[iVar0 /*888*/] != -1) && !func_401())
	{
		if ((!unk_0xACC32B78196FBC2A(&(Global_1853128[iVar0 /*888*/].f_144)) && Global_1853128[iVar0 /*888*/] != 5) && Global_1853128[iVar0 /*888*/] != 148)
		{
			func_507(&(Global_1853128[iVar0 /*888*/].f_144));
		}
	}
	if (Global_1853128[iVar0 /*888*/] != 6)
	{
		Global_1923670 = 1;
	}
	Global_1853128[iVar0 /*888*/] = -1;
	Global_1853128[iVar0 /*888*/].f_36.f_2 = -1;
	Global_1853128[iVar0 /*888*/].f_36.f_16 = -1;
	Global_1853128[iVar0 /*888*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		func_506(0);
	}
	Global_1853128[iVar0 /*888*/].f_36.f_18 = 0;
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0xA52C4F51ECAB7E02() /*888*/].f_762), 0);
	unk_0x02F3BF0B2F6FD7EE(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0x1B7AAA85D46FE6FB();
		Global_2726406 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853128[iVar0 /*888*/].f_144), sVar11, 24);
		StringCopy(&(Global_1853128[iVar0 /*888*/].f_150), sVar11, 24);
		func_505();
	}
	StringCopy(&(Global_1881545[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853128[iVar0 /*888*/].f_164), sVar11, 64);
	Global_1890187[iVar0 /*105*/].f_31 = { Var12 };
	Global_1890187[iVar0 /*105*/].f_33 = { Var12 };
	Global_1836572 = 0;
	Global_1836573 = 0;
	Global_1836101 = -1;
	bVar13 = false;
	func_504();
	func_503();
	func_502();
	if (func_501())
	{
		func_500();
	}
	if (func_499() && unk_0x44859561F653DD4E())
	{
		func_498();
		func_368(unk_0x9E2D6C50374FCFA9(), 0, 57348, 0);
	}
	if (func_497())
	{
		func_496();
	}
	else if (func_495())
	{
		func_496();
	}
	else if (func_494())
	{
		func_496();
	}
	else if (func_493())
	{
		func_496();
	}
	else if (func_492())
	{
		func_496();
	}
	else if (func_560())
	{
		func_496();
	}
	else if (func_491() && func_490())
	{
		func_496();
	}
	else if (func_489())
	{
		func_496();
	}
	else
	{
		func_488();
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 1) && !func_727())
		{
			if (unk_0x44859561F653DD4E())
			{
				if (func_512())
				{
					func_487();
				}
				else
				{
					if (!unk_0xE2D0C323A1AE5D85(Global_4718592.f_28, 10))
					{
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							Global_2715542.f_2846.f_198 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
						}
					}
					func_486();
					func_712();
					func_485(6);
					func_632();
					if (bVar4)
					{
						func_689(0);
					}
				}
				func_484();
				func_483();
				func_482();
				if (Global_2715542.f_2846.f_4 == 2)
				{
					Global_2715542.f_2846.f_4 = 1;
				}
				if (func_256(unk_0x9E2D6C50374FCFA9(), 0))
				{
					func_481();
				}
				func_480();
				Global_2715542.f_2846 = 0;
			}
			else
			{
				func_479();
				func_496();
			}
		}
		else
		{
			if (!func_683() && !func_727())
			{
			}
			func_479();
			func_496();
		}
	}
	if ((((((((((!func_497() && !func_478()) && !func_490()) && !func_491()) && !func_494()) && !func_495()) && !func_477()) && !func_492()) && !func_560()) && !func_493()) && !func_476())
	{
		if (!func_475())
		{
			func_474();
			func_472();
			func_471();
			func_469(1);
		}
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0x0843570206F71F38())
		{
			if (!unk_0xDD19976F3302FB36())
			{
				if (!func_468())
				{
					if (!bVar13)
					{
						if (func_17(unk_0x9E2D6C50374FCFA9()))
						{
							unk_0x68CA8F8B95DDEA66();
							unk_0x683628636CBF3C22();
						}
					}
				}
			}
		}
	}
	if (!func_401())
	{
		StringCopy(&(Global_4718592.f_86757), "", 64);
	}
	if (func_467(116, &iVar14))
	{
		func_466(iVar14);
	}
	if (func_467(123, &iVar14))
	{
		func_466(iVar14);
	}
	if (!func_727())
	{
		func_458();
	}
	else if (func_457())
	{
		func_456();
	}
	func_455();
	if (!func_687() && !func_683())
	{
		func_454();
	}
	func_453();
	func_447();
	func_425(bParam3);
}

void func_425(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_654())
		{
		}
		else if ((((!func_687() && !func_683()) && !func_727()) && Global_1923723.f_9 != 9) && Global_1923723.f_9 != 4)
		{
			func_594(0, 1);
		}
	}
	unk_0xEC6D4F9C59CDA6F5();
	if (!func_446(unk_0x9E2D6C50374FCFA9()) && !unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 17))
	{
		func_445();
	}
	if (func_444())
	{
		func_443(1);
		func_442(1);
	}
	if ((((bParam0 && !func_441()) && !func_687()) && !Global_262145.f_4723) && !func_440())
	{
		unk_0x92AF77F76753447A();
	}
	unk_0x07CECF421D895F3D(5, 1);
	unk_0x07CECF421D895F3D(3, 1);
	func_432(&uVar0, -1);
	if ((func_19() == 0 && !func_125()) && !func_687())
	{
		if (func_431())
		{
			func_430();
		}
		else
		{
			func_427(1147932892, 28, 0);
		}
	}
	func_426(0);
}

void func_426(int iParam0)
{
	if (!Global_1932164 == iParam0)
	{
		Global_1932164 = iParam0;
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_429(iParam1, iParam2))
	{
		iVar0 = func_428();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_428()
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

int func_429(int iParam0, var uParam1)
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

void func_430()
{
	unk_0xCED9E32812D6C7C7(&(Global_1048576.f_8), 22);
}

bool func_431()
{
	return unk_0xE2D0C323A1AE5D85(Global_1048576.f_8, 21);
}

void func_432(var uParam0, int iParam1)
{
	func_438(uParam0, iParam1);
	func_433(iParam1);
}

void func_433(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	uVar0 = func_437(iParam0);
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	if (func_434())
	{
		if (unk_0xE2D0C323A1AE5D85(uVar1, 1))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

int func_434()
{
	if (func_436() && func_435(0))
	{
		return 1;
	}
	return 0;
}

var func_435(int iParam0)
{
	return Global_1574536[iParam0];
}

var func_436()
{
	return func_435(func_29() + 1);
}

int func_437(int iParam0)
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

void func_438(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	uVar1 = func_439(iParam1);
	uVar2 = unk_0x5D851A9195129CE9(uVar1);
	if (unk_0xE2D0C323A1AE5D85(uVar2, 1))
	{
		func_521(1208, iParam1);
		func_516(joaat("mpply_dm_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 1);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 2))
	{
		func_521(1210, iParam1);
		func_516(joaat("mpply_race_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 2);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 3))
	{
		func_521(1119, iParam1);
		func_516(joaat("mpply_mc_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 3);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 4))
	{
		func_521(1212, iParam1);
		func_516(joaat("mpply_mgame_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 4);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 5))
	{
		func_521(1925, iParam1);
		func_516(joaat("mpply_cap_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 5);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 6))
	{
		func_521(1927, iParam1);
		func_516(joaat("mpply_sur_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 6);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 7))
	{
		func_521(1929, iParam1);
		func_516(joaat("mpply_lts_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 7);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 8))
	{
		func_521(1931, iParam1);
		func_516(joaat("mpply_para_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 8);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 9))
	{
		func_521(10511, iParam1);
		func_516(joaat("mpply_heist_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 9);
		bVar0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(uVar2, 26))
	{
		func_521(1933, iParam1);
		func_516(joaat("mpply_fmevn_cheat_start"), 2);
		func_516(joaat("mpply_activity_started"), 1);
		unk_0xB0550BC91B0159D6(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x3B6C41B60543C47E(uVar2, iParam1);
	}
}

int func_439(int iParam0)
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

int func_440()
{
	if (func_708(unk_0x9E2D6C50374FCFA9()) || func_707(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_609() || func_683())
		{
			return 1;
		}
	}
	return 0;
}

bool func_441()
{
	return Global_1836575;
}

void func_442(int iParam0)
{
	Global_2715542.f_6481 = iParam0;
}

void func_443(int iParam0)
{
	Global_2715542.f_6302 = iParam0;
}

int func_444()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0xACC32B78196FBC2A(&(Global_4718592.f_87067[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_445()
{
	unk_0xC0F70A3CDEC87ECE(6);
	unk_0x8576657A629C4B0A(1f);
	unk_0x3B8C20EF19A49C3E(1);
}

int func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

void func_447()
{
	if (Global_1965650)
	{
		if (func_346())
		{
			if (func_452(Global_4718592.f_138117))
			{
				switch (Global_4718592.f_131949)
				{
					case 1:
						unk_0xA1F6E5EF42ACDB8C(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), 0);
						break;
				}
			}
			else if (func_451(Global_4718592.f_138117))
			{
				switch (Global_4718592.f_131949)
				{
					case 3:
						unk_0xA1F6E5EF42ACDB8C(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
				}
			}
			else if (func_450(Global_4718592.f_138117))
			{
				switch (Global_4718592.f_131949)
				{
					case 3:
						unk_0xA1F6E5EF42ACDB8C(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), 0);
						break;
				}
			}
			else if (func_449(Global_4718592.f_138117))
			{
				switch (Global_4718592.f_131949)
				{
					case 3:
						unk_0xA1F6E5EF42ACDB8C(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), 0);
						unk_0xA1F6E5EF42ACDB8C(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), 0);
						unk_0xA1F6E5EF42ACDB8C(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), 0);
						break;
				}
			}
			else if (func_448(Global_4718592.f_138117))
			{
				switch (Global_4718592.f_131949)
				{
					case 3:
						unk_0xA1F6E5EF42ACDB8C(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
					}
				}
		}
		Global_1965650 = 0;
	}
}

bool func_448(int iParam0)
{
	return iParam0 == 76;
}

bool func_449(int iParam0)
{
	return iParam0 == 77;
}

bool func_450(int iParam0)
{
	return iParam0 == 83;
}

bool func_451(int iParam0)
{
	return iParam0 == 74;
}

bool func_452(int iParam0)
{
	return iParam0 == 78;
}

void func_453()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 30)
	{
		Global_1964369[iVar0] = -1;
		Global_1964401[iVar0] = -1;
		Global_1964433[iVar0] = -1;
		iVar0++;
	}
}

void func_454()
{
	Global_2714627.f_43.f_41 = 0;
}

void func_455()
{
	Global_1923723.f_6 = 0;
}

void func_456()
{
	unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_32), 5);
}

bool func_457()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_3, 7);
}

void func_458()
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_464(func_465(), Var0))
	{
		Var1 = -154821928;
		Var1.f_1 = unk_0x9E2D6C50374FCFA9();
		iVar2 = func_463(1, 1);
		if (!iVar2 == 0)
		{
			func_460();
			func_459(0);
			unk_0x2700C00F82C16BF0(1, &Var1, 2, iVar2);
		}
	}
}

void func_459(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2703656.f_3437 = unk_0x0A89FDFA763DCAED();
	}
	Global_2703656.f_3321 = iParam0;
}

void func_460()
{
	func_462();
	func_461();
}

void func_461()
{
	struct<72> Var0;
	
	if (func_60(unk_0x9E2D6C50374FCFA9()))
	{
		Var0.f_6 = 32;
		Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126 = { Var0 };
	}
}

void func_462()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2703656.f_3321.f_79 };
	Var0.f_95 = { Global_2703656.f_3321.f_95 };
	Global_2703656.f_3321 = { Var0 };
}

var func_463(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_256(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_464(struct<3> Param0, struct<3> Param1)
{
	if ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_465()
{
	return Global_2688404[unk_0x9E2D6C50374FCFA9() /*10*/];
}

void func_466(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2775498[iParam0 /*5*/].f_1 == -1 || Global_2775498[iParam0 /*5*/].f_2 == -1) || Global_2775498[iParam0 /*5*/].f_3 == -1) || Global_2775498[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x969B16B605D0D249(Global_2775498[iParam0 /*5*/], Global_2775498[iParam0 /*5*/].f_1, Global_2775498[iParam0 /*5*/].f_2, Global_2775498[iParam0 /*5*/].f_3, Global_2775498[iParam0 /*5*/].f_4);
	Global_2775498[iParam0 /*5*/] = -1;
	Global_2775498[iParam0 /*5*/].f_1 = -1;
	Global_2775498[iParam0 /*5*/].f_2 = -1;
	Global_2775498[iParam0 /*5*/].f_3 = -1;
	Global_2775498[iParam0 /*5*/].f_4 = -1;
}

int func_467(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2775498[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_468()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 18);
}

void func_469(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2715542.f_1.f_2798 = 0;
	Global_2715542.f_1.f_2799 = 0;
	Global_2715542.f_1.f_2824 = 0;
	Global_2715542.f_1.f_2805 = 0;
	Global_2715542.f_1.f_2806 = 0;
	Global_2715542.f_1.f_2809 = 0;
	Global_2715542.f_1.f_2810 = 0;
	Global_2715542.f_1.f_2808 = -1;
	Global_2715542.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2715542.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2715542.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2715542.f_1.f_2822 = -1;
		Global_2715542.f_1.f_2823 = -1;
	}
	Global_2715542.f_1.f_2844 = 0;
	func_470();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Global_2715542.f_1.f_845[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_2711168.f_33 = -1;
	Global_2711168.f_34 = -1;
}

void func_470()
{
	Global_2711168.f_32 = 0;
}

void func_471()
{
	Global_2714627.f_691 = 0;
}

void func_472()
{
	Global_2714627.f_692 = 0;
	func_473();
}

void func_473()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (iVar0 >= 0)
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_96.f_32), 6);
	}
}

void func_474()
{
	Global_2714627 = 0;
	Global_2714627.f_2 = 0;
	Global_2714627.f_3 = 0;
}

bool func_475()
{
	return Global_2714627.f_691;
}

bool func_476()
{
	return Global_1932622;
}

bool func_477()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 1);
}

bool func_478()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 16);
}

void func_479()
{
	unk_0xB0550BC91B0159D6(&Global_2714627, 21);
}

void func_480()
{
	Global_2715542.f_2846.f_35 = 1;
}

void func_481()
{
	Global_2715542.f_1.f_2827 = 1;
}

void func_482()
{
	Global_2714627.f_826 = 1;
}

void func_483()
{
	Global_2715542.f_1.f_2826 = 1;
}

void func_484()
{
	unk_0xCED9E32812D6C7C7(&Global_2714627, 21);
}

void func_485(int iParam0)
{
	Global_2715542.f_1.f_837 = iParam0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_221 = iParam0;
}

void func_486()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2711206 = { Var0 };
}

void func_487()
{
	Global_2715542.f_2846.f_1 = 1;
}

void func_488()
{
	Global_2715542.f_2846.f_1 = 0;
}

bool func_489()
{
	return Global_2714627.f_716;
}

bool func_490()
{
	return Global_2714627.f_706;
}

bool func_491()
{
	return Global_2714627.f_693;
}

bool func_492()
{
	return Global_2714627.f_702;
}

bool func_493()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 15);
}

bool func_494()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 20);
}

bool func_495()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 2);
}

void func_496()
{
	Global_2715542.f_2846.f_35 = 0;
}

bool func_497()
{
	return unk_0xE2D0C323A1AE5D85(Global_1048576.f_8, 8);
}

void func_498()
{
	Global_2714627.f_721 = 0;
}

var func_499()
{
	return Global_2714627.f_721;
}

void func_500()
{
	Global_2714627.f_752 = 0;
}

bool func_501()
{
	return Global_2714627.f_752;
}

void func_502()
{
	Global_2715542.f_1.f_838 = 0;
	Global_2715542.f_1.f_839 = 0;
	Global_2715542.f_1.f_841 = 0;
}

void func_503()
{
	unk_0xB0550BC91B0159D6(&Global_2714627, 4);
}

void func_504()
{
	unk_0xB0550BC91B0159D6(&Global_2714627, 28);
}

void func_505()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 4);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 5);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 7);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 8);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 9);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 10);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 11);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 12);
	unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_11.f_1), 13);
}

void func_506(int iParam0)
{
	unk_0xB83FA1B51FD31083(iParam0);
}

void func_507(var uParam0)
{
	var uVar0;
	
	if ((!func_509() && func_508(120, -1)) && !func_401())
	{
		unk_0xFF9DA93A747B9BA0(uParam0, &uVar0, 13);
		if (unk_0x66237ABAFDF8615A(&uVar0, 13))
		{
			if (unk_0x106C9EE9D83F20DF(&uVar0))
			{
			}
		}
	}
}

int func_508(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_28(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_509()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if ((Global_1853128[iVar0 /*888*/].f_36.f_2 == 63 || Global_1853128[iVar0 /*888*/].f_36.f_2 == 62) || Global_1853128[iVar0 /*888*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_510()
{
	unk_0xCED9E32812D6C7C7(&(Global_1048576.f_8), 8);
	func_511();
}

void func_511()
{
	Global_2714627.f_880 = 1;
}

bool func_512()
{
	return Global_2715542.f_2846.f_2;
}

var func_513(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_96.f_2;
}

void func_514()
{
	if (func_515())
	{
		unk_0x3410421C60BF7143(1);
	}
}

bool func_515()
{
	return func_197("FM_RETRY_INV");
}

void func_516(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_520(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_519(iParam0))
	{
		func_518(iParam0, iVar0);
	}
	else
	{
		func_517(iParam0, iVar0);
	}
}

void func_517(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
	}
}

int func_519(int iParam0)
{
	if (Global_1655477)
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

int func_520(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_521(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam1), 0);
	iVar0++;
	if (!func_523(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_522(iParam0, iVar0, iParam1, 1);
	}
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_28(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_28(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_28(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_28(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_28(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_28(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_28(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_28(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_28(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_28(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_28(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_28(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_28(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_28(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_28(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_28(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_28(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_28(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_28(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_28(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_28(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_28(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_28(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_28(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_28(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_28(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_28(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_28(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_28(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_28(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_28(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_28(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_28(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_28(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_28(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_28(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_28(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_28(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_28(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_28(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_28(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_28(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_28(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_28(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_28(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_28(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_28(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_28(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_28(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_28(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_28(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_28(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_523(int iParam0)
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

int func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_541();
	if (Global_2726286 == 0)
	{
		return 0;
	}
	if (func_540())
	{
		if (unk_0x44859561F653DD4E() || (func_539() || func_535()))
		{
			Global_2725228 = 1;
		}
	}
	Global_2726286 = 0;
	if (Global_1577872)
	{
		iVar0 = 1;
	}
	if (Global_2725228)
	{
		iVar0 = 1;
	}
	if (Global_2725227)
	{
		iVar0 = 1;
	}
	if (func_534(Global_111943.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725167)
	{
		iVar0 = 1;
	}
	if (func_533(512))
	{
		iVar0 = 1;
	}
	if (func_532(128))
	{
		iVar0 = 1;
	}
	if (Global_1577896 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_401())
	{
		iVar0 = 0;
	}
	if (Global_2725722)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_530())
		{
			if (Global_4718592.f_87285 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_256(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = 0;
	}
	if (func_529())
	{
		iVar0 = 0;
	}
	if ((Global_2725228 || Global_2725227) || Global_1577872)
	{
		if (func_535())
		{
			iVar0 = 0;
		}
	}
	Global_2725722 = 0;
	Global_2725227 = 0;
	Global_2725228 = 0;
	Global_1577872 = 0;
	Global_2725167 = 0;
	func_527(&(Global_111943.f_1), 32);
	func_526(512);
	func_525(128);
	return iVar0;
}

void func_525(int iParam0)
{
	Global_112000 = (Global_112000 - (Global_112000 && iParam0));
}

void func_526(int iParam0)
{
	Global_112001 = (Global_112001 - (Global_112001 && iParam0));
}

void func_527(var uParam0, int iParam1)
{
	func_528(uParam0, iParam1);
}

void func_528(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_529()
{
	if (((Global_1836598 || Global_1836568) || func_256(unk_0x9E2D6C50374FCFA9(), 0)) || func_255())
	{
		return 1;
	}
	return 0;
}

int func_530()
{
	switch (func_531())
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

int func_531()
{
	return Global_2715542.f_1.f_2822;
}

bool func_532(int iParam0)
{
	return (Global_112000 && iParam0) != 0;
}

bool func_533(int iParam0)
{
	return (Global_112001 && iParam0) != 0;
}

bool func_534(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_535()
{
	if (func_538(Global_2727408))
	{
		return 0;
	}
	if (func_536(unk_0x9E2D6C50374FCFA9(), 146))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/] == iParam1)
	{
		return func_537(iParam0);
	}
	return 0;
}

int func_537(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11653)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11655)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11652)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11656)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11657)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11658)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11654)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11659)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11660)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11661)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11662)
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

int func_539()
{
	if (func_538(Global_2727408))
	{
		return 0;
	}
	if (func_537(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

bool func_540()
{
	return unk_0xE2D0C323A1AE5D85(Global_1574587, 0);
}

int func_541()
{
	if (Global_1577896 == 1 && func_335())
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0)
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

void func_543()
{
	if (unk_0xF2549FF74D64B720(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "MissionType"))
	{
		unk_0x8B3711A36570B638(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "MissionType");
	}
	if (unk_0xF2549FF74D64B720(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "MatchId"))
	{
		unk_0x8B3711A36570B638(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "MatchId");
	}
	if (unk_0xF2549FF74D64B720(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "TeamId"))
	{
		unk_0x8B3711A36570B638(unk_0xE0FCABB9FCDF25ED(unk_0x9E2D6C50374FCFA9()), "TeamId");
	}
}

void func_544()
{
	Global_2714627.f_697 = 0;
	unk_0x0904A23CB7A5DAAD();
}

void func_545(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 2);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 2);
	}
}

int func_546(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_547()
{
	Global_2714627.f_840 = 0;
}

bool func_548()
{
	return Global_2714627.f_840;
}

void func_549()
{
	Global_2714627.f_844 = 0;
}

bool func_550()
{
	return Global_2714627.f_844;
}

void func_551()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_32), 1);
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (func_255())
	{
		return 1;
	}
	if (func_557())
	{
		return 1;
	}
	if (unk_0xACC32B78196FBC2A(&(Global_4718592.f_87037)))
	{
		return 1;
	}
	if (func_556())
	{
		return 1;
	}
	func_555();
	unk_0x280F5FC1DB79E757(0);
	iVar0 = unk_0x16307EF1B7664424(0);
	if (iParam0 == 0)
	{
		Global_1923683++;
		unk_0x59EBBEA4150E286F(iVar0, "quit", Global_1923683);
		unk_0x59EBBEA4150E286F(iVar0, "quitd", 1);
		unk_0x59EBBEA4150E286F(iVar0, "ply", Global_1923683.f_2);
		unk_0x59EBBEA4150E286F(iVar0, "lp", unk_0x48352343BC5A41AE());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1923708.f_1++;
		unk_0x59EBBEA4150E286F(iVar0, "quit", Global_1923708.f_1);
		unk_0x59EBBEA4150E286F(iVar0, "quitd", 1);
		unk_0x59EBBEA4150E286F(iVar0, "ply", Global_1923708.f_4);
		unk_0x59EBBEA4150E286F(iVar0, "lp", unk_0x48352343BC5A41AE());
	}
	if (iParam0 == 0)
	{
		if (unk_0x25DBC2AAEB2F3602(&(Global_4718592.f_87037), 0f, func_554(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x25DBC2AAEB2F3602(&(Global_1048576.f_42), 0f, func_554(iParam0), 0))
		{
		}
	}
	func_553();
	func_555();
	unk_0x9B41481E8E2456E1();
	return 1;
}

void func_553()
{
	Global_1923683 = 0;
	Global_1923683.f_2 = 0;
	Global_1923683.f_8 = 0;
	Global_1923683.f_3 = 0;
	Global_1923683.f_6 = 0;
}

char* func_554(int iParam0)
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

void func_555()
{
	if (unk_0x16307EF1B7664424(0) != 0)
	{
		unk_0x0222406293EA78CA(0);
	}
}

int func_556()
{
	if (unk_0xDC819EF22F7E17F3())
	{
		return 1;
	}
	else if (unk_0xC3383A29BD0605FD())
	{
		return 1;
	}
	else if (unk_0x412D9A1C024B8983())
	{
		return 1;
	}
	return 0;
}

int func_557()
{
	if (!func_558())
	{
		return 1;
	}
	return 0;
}

int func_558()
{
	if (func_559())
	{
		return 0;
	}
	if (unk_0x47C86377AA337CBE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_559()
{
	return Global_2725728;
}

bool func_560()
{
	return Global_2714627.f_734;
}

void func_561(bool bParam0)
{
	if (bParam0)
	{
		Global_1574613 = 1;
	}
	else
	{
		Global_1574613 = 0;
	}
}

void func_562()
{
	Global_2715542.f_1.f_2828.f_13 = 0;
	Global_2715542.f_1.f_2828 = 0;
	Global_2715542.f_1.f_2828.f_1 = 0;
	Global_2715542.f_1.f_2828.f_2 = 0;
	Global_2715542.f_1.f_2828.f_3 = 0;
	Global_2715542.f_1.f_2828.f_4 = 0;
	Global_2715542.f_1.f_2828.f_5 = 0;
	Global_2715542.f_1.f_2828.f_6 = 0;
	Global_2715542.f_1.f_2828.f_7 = 0;
	Global_2715542.f_1.f_2828.f_8 = 0;
	Global_2715542.f_1.f_2828.f_9 = 0;
	Global_2715542.f_1.f_2828.f_10 = 0;
	Global_2715542.f_1.f_2828.f_11 = 0;
	Global_2715542.f_1.f_2828.f_12 = 0;
}

bool func_563(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 1;
}

void func_564()
{
	Global_2714627.f_716 = 1;
}

void func_565(int iParam0, struct<3> Param1, struct<6> Param2)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_585();
	func_584();
	func_583();
	func_582();
	func_581();
	func_712();
	Global_1923723.f_9 = iParam0;
	switch (Global_1923723.f_9)
	{
		case 1:
			Global_1923723 = 0;
			Global_1923723.f_22 = { 0f, 0f, 0f };
			unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			func_578();
			break;
		
		case 2:
			Global_1923723 = 1;
			Global_1923723.f_22 = { Param1 };
			Global_1923723.f_16 = { Param2 };
			unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 3:
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 0 || Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 1)
			{
				func_577(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_28);
			}
			func_576();
			Global_1923723 = 1;
			Global_1923723.f_22 = { Param1 };
			if (func_575())
			{
				Global_1923723.f_16 = { Param2 };
			}
			unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 4:
			func_574();
			func_576();
			Global_1923723 = 1;
			if (func_707(unk_0x9E2D6C50374FCFA9()) || func_708(unk_0x9E2D6C50374FCFA9()))
			{
				func_573(1);
			}
			if ((func_572() || func_612()) && func_593())
			{
				Global_1923723.f_16 = { func_592() };
				Param2 = { Global_1923723.f_16 };
				Global_1923723.f_22 = { func_571() };
			}
			else if (func_572() || func_612())
			{
				if (func_570())
				{
					Global_1923723.f_22 = { func_569() };
				}
				else
				{
					Global_1923723.f_22 = { Param1 };
				}
			}
			else
			{
				Global_1923723.f_22 = { Param1 };
			}
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 5:
			func_574();
			func_568();
			func_576();
			if (func_707(unk_0x9E2D6C50374FCFA9()) || func_708(unk_0x9E2D6C50374FCFA9()))
			{
				func_573(1);
			}
			Global_1923723 = 1;
			Global_1923723.f_22 = { Param1 };
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 8:
			Global_1923723 = 0;
			Global_1923723.f_22 = { Param1 };
			Global_1923723.f_16 = { Param2 };
			unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 9:
			func_576();
			Global_1923723 = 1;
			Global_1923723.f_22 = { Param1 };
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
		
		case 10:
			Global_1923723 = 0;
			Global_1923723.f_22 = { 0f, 0f, 0f };
			unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 1);
			break;
	}
	func_567();
	func_566();
	func_485(Global_1923723.f_9);
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_222 = { Global_1923723.f_22 };
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_225 = { Param2 };
}

void func_566()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 23);
}

void func_567()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 12);
}

void func_568()
{
	Global_1923723.f_4 = 1;
}

Vector3 func_569()
{
	return Global_2714627.f_43.f_575;
}

int func_570()
{
	if ((Global_2714627.f_43.f_575 != 0f || Global_2714627.f_43.f_575.f_1 != 0f) || Global_2714627.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_571()
{
	return Global_2714627.f_43.f_578;
}

var func_572()
{
	return Global_2714627.f_43.f_57;
}

void func_573(int iParam0)
{
	Global_2715542.f_6301 = iParam0;
}

void func_574()
{
	Global_1923723.f_3 = 1;
}

bool func_575()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 24);
}

void func_576()
{
	Global_1923723.f_7 = 1;
}

void func_577(var uParam0)
{
	Global_1923723.f_10 = uParam0;
}

int func_578()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0x66237ABAFDF8615A(&(Global_2715542.f_6581), 13))
	{
		return 0;
	}
	iVar2 = unk_0x9E2D6C50374FCFA9();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xA1087A6350CD9244(iVar1);
		if (unk_0x0D01086B38EC256F(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (unk_0x3665714316BA3ABC(&Var3, &(Global_2715542.f_6581)) && func_580(iVar0))
			{
				func_579();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_579()
{
	unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 9);
}

bool func_580(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_36.f_18, 9);
}

void func_581()
{
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_5 = 0;
}

void func_582()
{
	Global_1923723.f_10 = -1;
}

void func_583()
{
	Global_1923723.f_4 = 0;
}

void func_584()
{
	Global_1923723.f_3 = 0;
}

void func_585()
{
	Global_2715542.f_2846.f_2 = 1;
}

void func_586()
{
	Global_2714627.f_669.f_14 = 0;
}

bool func_587()
{
	return Global_2714627.f_669.f_14;
}

void func_588()
{
	Global_2714627.f_43.f_55 = 0;
}

void func_589()
{
	Global_2714627.f_43.f_43 = -1;
}

int func_590()
{
	return Global_2714627.f_43.f_43;
}

void func_591(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xACC32B78196FBC2A(&uParam0))
	{
		return;
	}
	if (!Global_2661015)
	{
		return;
	}
	if (!unk_0x3C57C2F07FEE34D2(&uParam0, &(Global_2661015.f_1)))
	{
		return;
	}
	Global_2661081 = 1;
}

struct<6> func_592()
{
	return Global_2714627.f_43.f_12;
}

bool func_593()
{
	return Global_2714627.f_43.f_59;
}

void func_594(int iParam0, bool bParam1)
{
	if (func_701())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0xF95EEC86C216952D())
				{
					unk_0x5F25F942F5F8EF3E();
				}
			}
			break;
		
		case 1:
			unk_0x42EA11F7821D9466(6, 0, 0);
			break;
		
		case 2:
			unk_0x42EA11F7821D9466(12, 0, 0);
			break;
		
		case 3:
			if (func_595(Global_4718592.f_138117))
			{
				unk_0x42EA11F7821D9466(20, 50, 0);
			}
			else
			{
				unk_0x42EA11F7821D9466(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0x42EA11F7821D9466(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_595(int iParam0)
{
	return iParam0 == 10;
}

int func_596()
{
	return Global_1923723.f_12;
}

void func_597(var uParam0, var uParam1)
{
	Global_1923723.f_13 = uParam0;
	Global_1923723.f_14 = uParam1;
}

void func_598(var uParam0)
{
	Global_1923723.f_12 = uParam0;
}

int func_599(int iParam0)
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

bool func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_2715542.f_1.f_2813[iVar0], iVar1);
}

int func_601()
{
	return func_602(Global_4718592.f_86750);
}

int func_602(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31350[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_603(int iParam0)
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

int func_604(int iParam0)
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

bool func_605()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_608();
	}
	return func_606(Global_4718592.f_86750);
}

int func_606(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5954[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_607()
{
	return Global_2714627.f_19;
}

bool func_608()
{
	return Global_2714627.f_21;
}

bool func_609()
{
	return unk_0xE2D0C323A1AE5D85(Global_1574931, 4);
}

bool func_610()
{
	return Global_2714627.f_17;
}

void func_611()
{
	Global_2714627.f_43.f_56 = 1;
}

bool func_612()
{
	return Global_2714627.f_43.f_55;
}

void func_613()
{
	if (unk_0xACC32B78196FBC2A(&(Global_2653200.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xACC32B78196FBC2A(&(Global_2660313.f_3)))
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_2660313.f_3), &(Global_2653200.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2653200.f_4.f_3 };
}

void func_614()
{
	Global_1923723.f_5 = 0;
	Global_1923723.f_11 = -1;
}

void func_615(var uParam0)
{
	Global_1923723.f_5 = 1;
	Global_1923723.f_11 = uParam0;
}

int func_616(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_138117 == 46)
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
		if (iParam0 == Global_262145.f_9433[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_138117 == 21)
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
		if (iParam0 == Global_262145.f_9269[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_618()
{
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_625(Global_4718592.f_86750, 1) || func_624(Global_4718592.f_86750)) || func_623(Global_4718592.f_86750)) || func_622(Global_4718592.f_86750)) || func_621(Global_4718592.f_138117)) || func_620(Global_4718592.f_138117)) || func_619(Global_4718592.f_138117));
}

bool func_619(int iParam0)
{
	return iParam0 == 65;
}

bool func_620(int iParam0)
{
	return iParam0 == 48;
}

bool func_621(int iParam0)
{
	return iParam0 == 8;
}

int func_622(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_138117 == 35)
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
		if (iParam0 == Global_262145.f_9512[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_138117 == 27)
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
		if (iParam0 == Global_262145.f_9455[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_624(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_138117 == 32)
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
		if (iParam0 == Global_262145.f_9336[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_625(int iParam0, bool bParam1)
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

struct<13> func_626()
{
	struct<13> Var0;
	
	unk_0x9EDEC39EE142C8D5(&Var0, 13);
	return Var0;
}

void func_627(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0xACC32B78196FBC2A(&uParam0))
	{
		return;
	}
	if (!Global_2653189)
	{
		return;
	}
	uVar0 = unk_0x2E87280918B16506(&uParam0);
	Global_2653191 = uVar0;
	Global_2653192 = (unk_0x320D1840B6DAA1CC() + 60000);
}

void func_628(struct<6> Param0)
{
	if (unk_0xACC32B78196FBC2A(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_629()
{
	return Global_2714627.f_14;
}

void func_630(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xF2A3015D39DE3214(iParam0);
		unk_0xEB869CACCF04C3B5(0);
	}
}

void func_631(int iParam0)
{
	if (Global_2783705 != iParam0)
	{
		Global_2783705 = iParam0;
	}
}

void func_632()
{
	Global_1057405 = -1;
}

void func_633()
{
	func_634(-1f);
}

void func_634(float fParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xD944F164F0A87F7F(0);
		unk_0xA014CAEF43997AE0(0);
		unk_0xF2A3015D39DE3214(fParam0);
		unk_0xEB869CACCF04C3B5(0);
	}
}

int func_635(int iParam0)
{
	int iVar0;
	
	if (Global_1941967[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_637(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_636(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941967[iParam0 /*8*/] = iVar0;
	}
	return Global_1941967[iParam0 /*8*/];
}

void func_636(int iParam0, int iParam1)
{
	Global_1941967[iParam0 /*8*/] = iParam1;
	func_64(func_637(iParam0), iParam1, -1, 1, 0);
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10852;
		
		default:
	}
	return 10852;
}

bool func_638()
{
	return Global_4718592.f_1 == 0;
}

void func_639(int iParam0, int iParam1)
{
	unk_0x494B84826E4A775E(iParam0);
	unk_0x28BBFC5FEC1E27BD(iParam0);
	if (unk_0x36DE74C9549AAEF2())
	{
		unk_0xE774EB358F283B99(iParam1);
	}
}

bool func_640()
{
	return Global_2714627.f_743;
}

void func_641()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2621446, 24))
	{
		unk_0xB0550BC91B0159D6(&Global_2621446, 24);
	}
}

void func_642()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 14);
}

var func_643()
{
	return Global_2783705;
}

bool func_644()
{
	return Global_2714627.f_831;
}

int func_645()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192;
}

void func_646(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836359 == 0)
		{
			Global_1836359 = 1;
		}
	}
	else if (Global_1836359 == 1)
	{
		Global_1836359 = 0;
	}
}

void func_647()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2715542.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2715542.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_648()
{
	int iVar0;
	
	if (func_255())
	{
		return 1;
	}
	if (func_557())
	{
		return 1;
	}
	if (func_556())
	{
		return 1;
	}
	if (unk_0xACC32B78196FBC2A(&(Global_4718592.f_87037)))
	{
		return 1;
	}
	func_555();
	unk_0x280F5FC1DB79E757(0);
	iVar0 = unk_0x16307EF1B7664424(0);
	Global_1923683.f_2++;
	if (Global_1923683.f_2 < 1)
	{
		Global_1923683.f_2 = 1;
	}
	unk_0x59EBBEA4150E286F(iVar0, "quit", Global_1923683);
	unk_0x59EBBEA4150E286F(iVar0, "ply", Global_1923683.f_2);
	unk_0x59EBBEA4150E286F(iVar0, "plyd", 1);
	unk_0x59EBBEA4150E286F(iVar0, "lp", unk_0x48352343BC5A41AE());
	if (unk_0x25DBC2AAEB2F3602(&(Global_4718592.f_87037), -1f, func_554(0), 0))
	{
	}
	func_553();
	func_555();
	unk_0x9B41481E8E2456E1();
	return 1;
}

void func_649()
{
	Global_2714627.f_843 = 1;
}

void func_650(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB1F47B55ABFFC2C6();
	}
	else
	{
		unk_0x80B433623A323832();
	}
}

void func_651()
{
	Global_2714627.f_842 = 1;
}

int func_652(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_653(iParam0))
			{
				if (Global_1853128[iParam0 /*888*/] == 2 || Global_1853128[iParam0 /*888*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_653(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192 != 0;
}

bool func_654()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 2);
}

void func_655()
{
	Global_2714627.f_842 = 0;
}

bool func_656()
{
	return Global_2714627.f_842;
}

void func_657(int iParam0)
{
	unk_0x380313FF4CEF9B49("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0x380313FF4CEF9B49("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0x380313FF4CEF9B49("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_658()
{
	Global_1923723.f_12 = -1;
	Global_1923723.f_13 = -1;
	Global_1923723.f_14 = -1;
}

void func_659(int iParam0)
{
	Global_1057406 = iParam0;
}

void func_660()
{
	Global_1889631 = 0;
	Global_1836565 = 4;
}

void func_661(bool bParam0)
{
	if (bParam0)
	{
		Global_1836578 = 1;
	}
	else
	{
		Global_1836578 = 0;
	}
}

void func_662()
{
	Global_1889632 = -1;
	Global_1889638 = 0;
	Global_1889633 = -1;
}

void func_663()
{
	Global_2810287.f_287 = 0;
	func_667(3782, 0, -1);
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_665())
		{
			unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 5, 0, 0, 0);
			func_664();
		}
	}
}

void func_664()
{
	Global_77824 = 0;
	Global_77825 = -1;
	Global_77826 = -1;
	Global_77827 = -1;
	Global_77828 = -1;
	Global_77832 = -1;
}

bool func_665()
{
	return func_666(unk_0xE2D3D51028F0428A());
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5355BAA621C153CF(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x15CAA6D7B11F1A7C(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x748EF68A43BBBC6C(iParam0, 5, iVar0, unk_0xF1050E548C37F4A5(iParam0, 5));
			if (unk_0x036D1EA7243F2CCC(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x748EF68A43BBBC6C(iParam0, 5, iVar0, unk_0xF1050E548C37F4A5(iParam0, 5));
			if (unk_0x036D1EA7243F2CCC(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

void func_668()
{
	Global_2714627.f_843 = 0;
}

bool func_669()
{
	return Global_2714627.f_843;
}

void func_670(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_672(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8674)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_22830.f_8674 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_22830.f_5885[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_22830.f_5885[iVar0] = 0;
	}
	if (Global_22830.f_5871[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_22830.f_5871[iVar0] = 0;
	}
	if (Global_22830.f_5878[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_22830.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_671(&(Global_22830.f_5917[iVar0 /*10*/]));
		Global_22830.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5978[iVar0] = 0;
	}
}

void func_671(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_672(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x2E87280918B16506(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22830.f_5978[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22830.f_5978[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22830.f_5978[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_673()
{
}

void func_674(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2714627.f_669.f_9 == 0)
	{
		Global_1923748.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1923748[iVar1 /*42*/].f_3;
		Global_1923748[iVar1 /*42*/] = { Var0 };
		if (func_727())
		{
			Global_1923748[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1923748[iVar1 /*42*/].f_1 = func_141();
		Global_1923748[iVar1 /*42*/] = -1;
		Global_1923748[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!func_727() && !func_687()) && iParam0)
	{
		Global_1923748.f_1347 = 0;
		Global_1923748.f_1348 = 0;
	}
}

int func_675()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1923748[iVar0 /*42*/].f_1 != func_141())
		{
			if (Global_1923748[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_676()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_607();
	}
	return func_677(Global_4718592.f_86750);
}

int func_677(int iParam0)
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

void func_678(bool bParam0)
{
	struct<77> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1945270.f_37;
		Var0.f_33 = Global_1945270.f_33;
		Var0.f_30 = Global_1945270.f_30;
		Var0.f_39 = Global_1945270.f_39;
		Var0.f_20 = Global_1945270.f_20;
		Var0.f_15 = Global_1945270.f_15;
		Var0.f_35 = Global_1945270.f_35;
		Var0.f_36 = Global_1945270.f_36;
		Var0.f_31 = Global_1945270.f_31;
		Var0.f_34 = Global_1945270.f_34;
		Var0.f_27 = Global_1945270.f_27;
		Var0.f_28 = Global_1945270.f_28;
		Var0.f_32 = Global_1945270.f_32;
		Var0.f_29 = Global_1945270.f_29;
	}
	Global_1945270 = { Var0 };
}

void func_679(bool bParam0)
{
	struct<51> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1945184.f_2 };
		Var0.f_14 = Global_1945184.f_14;
		Var0.f_19 = Global_1945184.f_19;
		Var0.f_23 = Global_1945184.f_23;
		Var0.f_25 = Global_1945184.f_25;
		Var0.f_30 = Global_1945184.f_30;
		Var0.f_26 = Global_1945184.f_26;
		Var0.f_27 = Global_1945184.f_27;
		Var0.f_28 = Global_1945184.f_28;
		Var0.f_29 = Global_1945184.f_29;
		Var0.f_31 = Global_1945184.f_31;
		Var0.f_32 = Global_1945184.f_32;
		Var0.f_33 = Global_1945184.f_33;
		Var0.f_40 = Global_1945184.f_40;
		Var0.f_42 = Global_1945184.f_42;
		Var0.f_50 = Global_1945184.f_50;
		Var0.f_46 = Global_1945184.f_46;
	}
	Global_1945184 = { Var0 };
}

void func_680(bool bParam0)
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
	if (((!func_683() && !func_612()) && Global_1923723.f_9 != 4) && !func_687())
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
		if ((!func_683() && !func_612()) && Global_1923723.f_9 != 4)
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

void func_681(bool bParam0)
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

void func_682(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF2549FF74D64B720(unk_0xE0FCABB9FCDF25ED(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xC3B76795ECBDEF41(unk_0xE0FCABB9FCDF25ED(iParam0), "MPBitset");
	}
	unk_0xB0550BC91B0159D6(&iVar0, iParam1);
	unk_0x05B874E9ABFF72B4(unk_0xE0FCABB9FCDF25ED(iParam0), "MPBitset", iVar0);
}

bool func_683()
{
	return Global_1923723.f_3;
}

bool func_684()
{
	return Global_2723433.f_7;
}

bool func_685()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_43.f_4, 8);
}

void func_686()
{
	Global_2714627.f_43.f_57 = 0;
}

bool func_687()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_43.f_4, 0);
}

void func_688()
{
	unk_0xB0550BC91B0159D6(&(Global_1048576.f_8), 8);
}

void func_689(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_11.f_1), 0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_11.f_1), 0);
	}
}

void func_690(int iParam0)
{
	if ((unk_0x9315DBF7D972F07A() && !Global_1575022) && !Global_1575023)
	{
		if (((Global_2715542.f_3475 != 0 && Global_2715542.f_3475.f_1 != 0) && Global_2715542.f_3475.f_2 != 0) && Global_2715542.f_3475.f_3 != 0)
		{
			unk_0xD2384F6E9D32E19E(Global_2715542.f_3475, Global_2715542.f_3475.f_1, Global_2715542.f_3475.f_2, Global_2715542.f_3475.f_3, iParam0);
		}
	}
	func_691();
}

void func_691()
{
	Global_2715542.f_3475 = 0;
	Global_2715542.f_3475.f_1 = 0;
	Global_2715542.f_3475.f_2 = 0;
	Global_2715542.f_3475.f_3 = 0;
}

void func_692()
{
	Global_2715542.f_1.f_2801 = 1;
}

bool func_693()
{
	return unk_0xE2D0C323A1AE5D85(Global_2715542.f_1.f_2809, 12);
}

void func_694(int iParam0)
{
	if (!func_687() || iParam0)
	{
		Global_1837275 = 0;
		Global_1837274 = 0;
	}
}

void func_695(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2714627.f_43 = -1;
	Global_2714627.f_43.f_139 = -1;
	Global_2714627.f_43.f_2 = -1;
	Global_2714627.f_43.f_5 = 0;
	Global_2714627.f_43.f_40 = 0;
	Global_2714627.f_43.f_3 = 0;
	Global_2714627.f_43.f_4 = 0;
	Global_2714627.f_43.f_42 = -1;
	Global_2714627.f_43.f_6 = { Var0 };
	Global_2714627.f_43.f_62 = 0;
	Global_2714627.f_43.f_137 = 0;
	Global_2714627.f_43.f_213 = 0;
	Global_2714627.f_43.f_428 = 0;
	Global_2714627.f_43.f_63 = 0;
	Global_2714627.f_43.f_138 = 0;
	Global_2714627.f_43.f_214 = 0;
	Global_2714627.f_43.f_429 = 0;
	Global_2714627.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714627.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2714627.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714627.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2714627.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2714627.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2714627.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714627.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2714627.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714627.f_43.f_430[iVar1] = 0;
		Global_2714627.f_43.f_445[iVar1] = 0;
		Global_2714627.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2714627.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2714627.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2714627.f_43.f_581 = 0;
			Global_2714627.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2714627.f_43.f_589[iVar1] = -1;
				Global_2714627.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2714627.f_43.f_55 = 0;
			Global_2714627.f_43.f_12 = { Var0 };
			Global_2714627.f_43.f_59 = 0;
			Global_2714627.f_43.f_575 = { 0f, 0f, 0f };
			Global_2714627.f_43.f_578 = { 0f, 0f, 0f };
			Global_2714627.f_43.f_58 = 0;
			Global_2714627.f_43.f_57 = 0;
			Global_2714627.f_43.f_1 = -1;
			Global_2714627.f_43.f_601 = -1;
		}
	}
}

void func_696()
{
	Global_2723433.f_8 = 0;
	Global_2723433.f_7 = 0;
}

void func_697()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	uVar0 = unk_0x053E03265870C820();
	iVar1 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(Global_1057157, unk_0x0A89FDFA763DCAED()));
	unk_0x5C1FAEE011FB9409(Global_4718592, &(Global_4718592.f_87037), uVar0, iVar1, Global_1057157.f_1);
	func_698();
}

void func_698()
{
	Global_1057157 = 0;
	Global_1057157.f_1 = 0;
}

bool func_699()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148;
}

bool func_700()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

int func_701()
{
	if (func_346() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

void func_702()
{
	Global_1932698.f_1774 = 0;
}

void func_703()
{
	Global_2714627.f_836 = 0;
}

bool func_704()
{
	return Global_2714627.f_836;
}

void func_705()
{
	Global_20151 = 0;
	func_706();
}

void func_706()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

bool func_707(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

bool func_708(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

int func_709(int iParam0)
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

void func_710()
{
	Global_2714627.f_700 = 0;
}

void func_711()
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_4 = -1;
	iVar1 = unk_0x9E2D6C50374FCFA9();
	if (iVar1 != -1)
	{
		Global_1890187[iVar1 /*105*/] = { Var0 };
	}
}

void func_712()
{
	Global_1923723.f_7 = 0;
}

void func_713(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2714627.f_669.f_3 = { Var0 };
	Global_2714627.f_669 = 0;
	Global_2714627.f_669.f_1 = 0;
	Global_2714627.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2714627.f_669.f_2 = 0;
		Global_2714627.f_669.f_13 = 0;
		Global_2714627.f_669.f_14 = 0;
		Global_2656979 = 0;
		if (bParam1)
		{
			Global_2714627.f_669.f_9 = 0;
			Global_2714627.f_669.f_10 = 0;
			Global_2714627.f_669.f_11 = 0;
			Global_2714627.f_669.f_16 = -1;
		}
		if (iParam2 && !unk_0x44859561F653DD4E())
		{
			Global_1923748.f_1347 = 0;
			Global_1923748.f_1348 = 0;
		}
		if (unk_0x9E2D6C50374FCFA9() != -1)
		{
			Global_1890187[unk_0x9E2D6C50374FCFA9() /*105*/].f_2 = 0;
			Global_1890187[unk_0x9E2D6C50374FCFA9() /*105*/] = 0;
		}
	}
}

void func_714()
{
	Global_2714627.f_669.f_12 = 0;
}

bool func_715()
{
	return Global_2714627.f_669.f_9 > 0;
}

var func_716()
{
	return Global_2714627.f_669.f_12;
}

void func_717()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_96.f_32), 11);
}

void func_718()
{
	unk_0xB0550BC91B0159D6(&(Global_1890187[unk_0x9E2D6C50374FCFA9() /*105*/].f_29), 3);
}

void func_719()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837288[iVar0] = 0;
		iVar0++;
	}
}

void func_720()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (iVar0 != -1)
	{
		Global_1890187[iVar0 /*105*/].f_5 = 0;
	}
}

void func_721()
{
	Global_2725694 = 0;
	Global_2725695 = 0;
	Global_2725696 = 0;
	Global_2725697 = 0;
}

void func_722()
{
	Global_2714627.f_43.f_56 = 0;
}

void func_723()
{
	Global_2714627.f_43.f_58 = 0;
}

void func_724()
{
	if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) != Global_1655737)
	{
		if (unk_0x47E529DA87615548() == 0 && Global_1655737 == 3)
		{
			Global_1655737 = unk_0x4DE6A646AFB7CF5C(0);
		}
		unk_0x4B1C22133022D7D3(unk_0x47E529DA87615548(), Global_1655737);
	}
}

int func_725()
{
	if (func_726() != 2)
	{
		return 0;
	}
	if (!func_687() && !((Global_1940565 || Global_1574953) && func_572()))
	{
		return 0;
	}
	return 1;
}

int func_726()
{
	return Global_2714627.f_43.f_40;
}

bool func_727()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_669.f_1, 0);
}

void func_728(int iParam0)
{
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xE61C968F64F118D6(iParam0);
	}
}

void func_729(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA52C4F51ECAB7E02();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_199, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1853128[iVar0 /*888*/].f_199), 0);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_199, 0))
		{
			unk_0xB0550BC91B0159D6(&(Global_1853128[iVar0 /*888*/].f_199), 0);
		}
	}
}

void func_730()
{
	unk_0xB0550BC91B0159D6(&(Global_2714627.f_2), 31);
}

void func_731()
{
	Global_2703656.f_1585.f_816 = func_141();
}

void func_732()
{
	Global_2714627.f_884 = 0;
}

void func_733()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_736(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1941032.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_735();
	func_734();
	Global_1941032 = 0;
}

void func_734()
{
	Global_1941032.f_4 = 0;
}

void func_735()
{
	Global_1941032.f_3 = 0;
}

void func_736(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1941032.f_5[iParam0 /*53*/] = { Var0 };
}

void func_737()
{
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 20);
}

void func_738(int iParam0, bool bParam1)
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

void func_739()
{
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_836), 3);
}

void func_740(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_225();
	if (bParam0)
	{
		func_315(1);
		unk_0x3410421C60BF7143(1);
	}
	unk_0xBA6C3C5E9E5A9442();
	func_218();
	unk_0xAA4AFC804C4BA788(0);
	func_254(0, 1, 1, 0, 0, bParam2, 0);
	func_746();
	func_206(12, 0, -1);
	func_207(1);
	unk_0x43F21FA00A1CE779(0, -1);
	unk_0xB60709BD0E075903(1);
	unk_0x72DB022C36FCEA24(1);
	func_745();
	unk_0xB68BD12B3A8C52FD(1);
	if (unk_0x9315DBF7D972F07A())
	{
		if (bParam3)
		{
			if (unk_0xC96A605CF3E9295B())
			{
				unk_0x3DC5858ACD1E01CB(0, 0);
			}
		}
	}
	func_261(0);
	if (((((func_125() == 0 && func_744() == 0) && iParam1) && !func_258(unk_0x9E2D6C50374FCFA9())) && !unk_0x2981C54770E1D19C()) && func_336())
	{
		func_368(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
	}
	Global_2703656.f_3442 = 0;
	func_741();
}

void func_741()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9315DBF7D972F07A() && func_200(&Global_2819460))
	{
		if (!func_199(&Global_2819460, 3500, 1) || unk_0xF7A68678B96E517C(unk_0x9E2D6C50374FCFA9()))
		{
			if (!func_743())
			{
				if (unk_0xA829C9A2767AC8EF())
				{
					func_350(&Global_2819460, 1, 0);
				}
				else if (!func_256(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 1992968846) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 1992968846) != 0)
					{
						unk_0xB18E70E8229E0DA6(1);
						unk_0xB5F13D9832E1F2AE(unk_0x9E2D6C50374FCFA9(), 1);
					}
					unk_0x8B9AD14C7D42CC13(unk_0xE2D3D51028F0428A(), 255, 0);
				}
			}
			else
			{
				func_350(&Global_2819460, 1, 0);
			}
		}
		else
		{
			if (unk_0x9315DBF7D972F07A())
			{
				unk_0xEAFAF9ED80DB448D(unk_0xE2D3D51028F0428A());
			}
			func_198(&Global_2819460);
		}
	}
	if (Global_2819464 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2819464, iVar0))
			{
				iVar1 = unk_0xA1087A6350CD9244(iVar0);
				if (func_14(iVar1, 1, 1))
				{
					func_742(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_742(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_2819464, iParam0) && unk_0x9315DBF7D972F07A())
	{
		if (!func_199(&(Global_2819465[iParam0 /*2*/]), 3500, 1) || unk_0xF7A68678B96E517C(iParam0))
		{
			if (!func_743())
			{
				if (unk_0xA829C9A2767AC8EF())
				{
					func_350(&(Global_2819465[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_256(iParam0, 0))
				{
					unk_0xB5F13D9832E1F2AE(iParam0, 1);
					if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
					{
						unk_0x8B9AD14C7D42CC13(unk_0x407E03586628E458(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_350(&(Global_2819465[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				unk_0xEAFAF9ED80DB448D(unk_0x407E03586628E458(iParam0));
			}
			func_198(&(Global_2819465[iParam0 /*2*/]));
			unk_0xB0550BC91B0159D6(&Global_2819464, iParam0);
		}
	}
}

int func_743()
{
	if (unk_0xF34D8FCAE3FD4EE4() || unk_0xC96A605CF3E9295B())
	{
		return 1;
	}
	return 0;
}

bool func_744()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 7);
}

void func_745()
{
	Global_22691.f_5 = 0;
}

void func_746()
{
	func_207(1);
	func_206(4, 0, -1);
	func_206(6, 0, -1);
	func_206(7, 0, -1);
	func_206(3, 0, -1);
	func_206(1, 0, -1);
	func_206(2, 0, -1);
	func_206(11, 0, -1);
	func_206(13, 0, -1);
	func_206(14, 0, -1);
	func_206(16, 0, -1);
}

void func_747(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574610)
	{
		if (!func_784())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1836817[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_782(unk_0x9E2D6C50374FCFA9(), bParam0);
	iVar2 = func_780(iVar1, bParam0);
	if (!func_779(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1836817[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1836817[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 285)
	{
		iVar3 = func_778(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_776(iVar4))
			{
				func_766(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_759(func_760(59, 0, 0), 0);
	func_757(func_760(135, 0, 0), 1);
	func_756(func_760(22, 0, 0), func_760(73, 0, 0));
	if (func_755())
	{
		if (func_508(77, -1))
		{
			func_754(1);
			func_753(1);
		}
	}
	if (func_752() || func_751())
	{
		func_32(77, 1, -1, 1);
		if (unk_0x9315DBF7D972F07A())
		{
			func_748(28, 1, 0);
			func_748(29, 1, 0);
			func_748(30, 1, 0);
			func_748(31, 1, 0);
			func_748(32, 1, 0);
			func_748(33, 1, 0);
			func_748(34, 1, 0);
			func_748(35, 1, 0);
			func_748(36, 1, 0);
			func_748(37, 1, 0);
			func_748(38, 1, 0);
		}
	}
	if (func_760(21, 0, 0))
	{
		unk_0xE26992076B0111B4(0);
	}
	Global_1057407 = 0;
}

void func_748(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_100026.f_18[iParam0])
			{
				if (func_750(iParam0) == 3 && !func_25(iParam0))
				{
					func_749(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_410(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_410(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_410(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_410(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_410(iParam0);
	}
}

void func_749(int iParam0)
{
	if (Global_100026.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_750(int iParam0)
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
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_751()
{
	return Global_1575034;
}

bool func_752()
{
	return Global_1575036;
}

void func_753(bool bParam0)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	func_748(28, bParam0, 0);
	func_748(30, bParam0, 0);
	func_748(31, bParam0, 0);
	func_748(33, bParam0, 0);
	func_748(34, bParam0, 0);
	func_748(38, bParam0, 0);
}

void func_754(bool bParam0)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	func_748(29, bParam0, 0);
	func_748(32, bParam0, 0);
	func_748(36, bParam0, 0);
	func_748(35, bParam0, 0);
	func_748(37, bParam0, 0);
}

int func_755()
{
	if (!func_784())
	{
		return 0;
	}
	return 1;
}

void func_756(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_748(0, bParam0, 1);
	func_748(1, bParam0, 1);
	func_748(2, bParam0, 1);
	func_748(3, bParam0, 1);
	func_748(4, bParam0, 1);
	func_748(5, bParam0, 1);
	func_748(6, bParam0, 1);
	func_748(7, bParam0, bVar0);
	func_748(8, bParam0, 1);
	func_748(9, bParam0, 1);
	func_748(10, bParam0, 1);
	func_748(11, bParam0, 1);
	func_748(12, bParam0, bVar0);
	func_748(13, bParam0, 1);
	func_748(21, bParam0, 1);
	func_748(14, bParam0, 1);
	func_748(15, bParam0, 1);
	func_748(16, bParam0, 1);
	func_748(17, bParam0, 1);
	func_748(18, bParam0, 1);
	func_748(19, bParam0, 1);
	func_748(20, bParam0, 1);
	func_748(22, bParam0, 1);
	func_748(23, bParam0, 1);
	func_748(24, bParam0, 1);
	func_748(25, bParam0, 1);
	func_748(26, bParam0, 1);
	func_748(27, bParam0, 1);
	func_411(1, !bParam1);
	if (!bVar0)
	{
		func_749(12);
	}
}

void func_757(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	uVar0 = func_758(0);
	if (Global_262145.f_63 == 1 && func_760(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_748(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_749(44);
		}
	}
	if (bParam0)
	{
		if (func_635(0) > 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1798), 10);
		}
	}
}

int func_758(bool bParam0)
{
	var uVar0;
	
	if (Global_1574610)
	{
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_1789, 26))
		{
			uVar0 = func_27(1192, -1, 0);
			if (!unk_0xE2D0C323A1AE5D85(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_508(122, -1);
}

void func_759(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	uVar0 = func_758(0);
	func_748(39, bParam0, 0);
	func_748(40, bParam0, 0);
	func_748(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_748(43, bParam0, 0);
		func_748(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_749(39);
		}
		if (!func_25(40))
		{
			func_749(40);
		}
		if (!func_25(41))
		{
			func_749(41);
		}
		if (!func_25(42))
		{
			func_749(42);
		}
		if (!func_25(43))
		{
			func_749(43);
		}
	}
}

bool func_760(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7943 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_762(unk_0x9E2D6C50374FCFA9(), 85))
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
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_752() || func_751())
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
			if (func_761())
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
	return unk_0xE2D0C323A1AE5D85(Global_1836817[iVar1], iVar0);
}

int func_761()
{
	var uVar0;
	
	if (Global_1574610)
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1794, 23))
	{
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	uVar0 = Global_1655616[func_28(-1)];
	if (unk_0xE2D0C323A1AE5D85(uVar0, 7))
	{
		unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_762(int iParam0, int iParam1)
{
	if (!func_755())
	{
		return 0;
	}
	if (func_765())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_763(&(Global_1853128[iParam0 /*888*/].f_759), func_764(iParam1));
}

bool func_763(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0xE2D0C323A1AE5D85((*uParam0)[iVar1], iVar2);
}

int func_764(int iParam0)
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
		
		case 177:
			return 39;
		
		default:
	}
	return 1;
}

bool func_765()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_143, 3);
}

void func_766(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_775(-1))
			{
				if (!func_784())
				{
					return;
				}
			}
			if (!func_775(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_774() && !func_773())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_772())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_775(-1))
				{
					if (!func_767())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0xCED9E32812D6C7C7(&(Global_1836817[iVar1]), iVar0);
	}
}

int func_767()
{
	var uVar0;
	
	if (func_771(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	uVar0 = Global_1655616[func_28(-1)];
	if (unk_0xE2D0C323A1AE5D85(uVar0, 2))
	{
		func_768(1);
		return 1;
	}
	return 0;
}

void func_768(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 25))
		{
			func_769(unk_0x9E2D6C50374FCFA9(), 12);
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 25);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 25))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139), 25);
	}
}

void func_769(int iParam0, int iParam1)
{
	func_770(&(Global_1853128[iParam0 /*888*/].f_759), func_764(iParam1));
}

int func_770(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0xE2D0C323A1AE5D85((*uParam0)[iVar1], iVar2))
	{
		unk_0xCED9E32812D6C7C7(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

bool func_771(int iParam0)
{
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 25);
}

int func_772()
{
	var uVar0;
	
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1794, 6))
	{
		return 1;
	}
	uVar0 = Global_1655616[func_28(-1)];
	if (unk_0xE2D0C323A1AE5D85(uVar0, 0))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_1794, 6))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1794), 6);
		}
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	return 0;
}

bool func_773()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_143, 7);
}

int func_774()
{
	if (Global_1574610)
	{
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	return func_508(121, -1);
}

bool func_775(int iParam0)
{
	return func_508(123, iParam0);
}

int func_776(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_752())
	{
		return 1;
	}
	if (func_751())
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
			uVar0 = func_27(func_777(iParam0), -1, 0);
			if (unk_0xE2D0C323A1AE5D85(uVar0, iVar1))
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

int func_777(int iParam0)
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

int func_778(int iParam0)
{
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
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
			if (!func_775(-1))
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

int func_779(int iParam0)
{
	if (Global_1574610)
	{
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	return func_508(119, iParam0);
}

int func_780(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_781(iParam0, 0);
}

int func_781(int iParam0, int iParam1)
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

int func_782(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_783(iParam0);
}

int func_783(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_28(-1)];
			}
			else if (func_60(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_28(-1)];
	}
	return 0;
}

int func_784()
{
	if (Global_1574610)
	{
		return 1;
	}
	if (func_752())
	{
		return 1;
	}
	if (func_751())
	{
		return 1;
	}
	return func_508(120, -1);
}

int func_785()
{
	var uVar0;
	
	func_790(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_491())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_789())
	{
		return 1;
	}
	if (func_788(159))
	{
		if (!func_787())
		{
			return 1;
		}
	}
	if (func_788(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_786() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_786()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_786()
{
	switch (func_19())
	{
		case 0:
			return func_378();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_787()
{
	return Global_2714627.f_698;
}

int func_788(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_789()
{
	return Global_2725224;
}

void func_790(var uParam0)
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
					func_791(iVar0);
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

void func_791(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_792(uVar2, &bVar3))
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

int func_792(int iParam0, var uParam1)
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

void func_793()
{
	wait(0);
}

void func_794(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	var uVar0;
	
	unk_0xD9B114A8D3A8319F(2, 0, Param0.f_16);
	func_799(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_414, 7, 0);
	unk_0x7157B1051528D729(&Local_581, 11, 0);
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] = 16;
	if (bLocal_590)
	{
		if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x859006DB870314C5(800);
		}
		if (!unk_0x0843570206F71F38())
		{
			if (!unk_0xDD19976F3302FB36())
			{
				uVar0 = unk_0x9E2D6C50374FCFA9() + 32;
				unk_0x2401FF328F02F86C(1, uVar0);
				func_210(1);
			}
		}
	}
	unk_0xF8B8A6EDAA31F196(1);
	unk_0xC1F83F3B5F8E7D3B(1);
	if (!func_798())
	{
		func_421(0);
	}
	unk_0x2C07CBAFAC54A645(0);
	func_738(iLocal_61, 1);
	func_423(1);
	if (!bLocal_590)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			func_368(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		}
	}
	Global_2810287.f_1789 = 0;
	unk_0x208B14CA225DC5A0(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_797();
	func_795();
	Local_581[unk_0xF1354995C6159A78() /*5*/] = 0;
}

void func_795()
{
	unk_0x494B84826E4A775E(1);
	func_796(1, -1);
	unk_0x28BBFC5FEC1E27BD(1);
	if (func_508(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2714627.f_743 = 1;
}

void func_796(int iParam0, int iParam1)
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
			unk_0xB625F19076319E9C(0, iParam1);
			break;
		
		default:
			uVar1 = func_437(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			if (unk_0xE2D0C323A1AE5D85(iVar0, iParam0))
			{
				unk_0xB0550BC91B0159D6(&iVar0, iParam0);
				unk_0xB625F19076319E9C(iVar0, iParam1);
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

void func_797()
{
	unk_0xA888F8CC04F25CC8(&uLocal_584);
	unk_0xAB7639D658BBCCEE(0, 0, 0);
	unk_0x1A96B8B416BC07D0(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0xC963A45B50851768(uLocal_584);
}

int func_798()
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
		if (func_491())
		{
			return 0;
		}
		if (func_788(157))
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

int func_799(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
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
		if (!func_401())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
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
				if (func_491())
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
				if (func_788(157))
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
			else if (!unk_0xDB51AF48ABE62D4D())
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
				func_800();
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
			func_800();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_800()
{
	unk_0xAFBDF6A5E54114C1();
}

