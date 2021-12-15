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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	var uLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
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
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	struct<3> Local_626 = { 0, 0, 0 } ;
	struct<2> Local_627 = { 0, 5 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
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
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_81 = { -131.052f, -1627f, 31.1755f };
	Local_82 = { 287.888f, -284.603f, 52.967f };
	Local_83 = { -319.66f, -832.28f, 31.61f };
	Local_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (unk_0x4210287E2833D44B(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_298(25, iLocal_80);
			func_280();
		}
		else
		{
			func_280();
		}
	}
	Local_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_279(&uLocal_349, 3);
	func_278();
	if ((iLocal_80 == 1 && func_277(55)) && !func_276(55))
	{
		unk_0x4BFE89D21F9885DC();
	}
	if (func_235(Local_104, 25, iLocal_80, 0, 0))
	{
		func_232(-1);
	}
	else
	{
		unk_0x4BFE89D21F9885DC();
	}
	bVar0 = false;
	while (true)
	{
		wait(0);
		func_229(&uLocal_349);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
		}
		func_228(uLocal_63, &uLocal_348);
		if (unk_0xCC7E6EA219FD8BAC() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_214())
					{
						unk_0x817486F19ADBF54A(0);
						unk_0xB7D390F8F682127B(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
				
				case 1:
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = unk_0x24CBDE4C2EEE441C(101, Local_104, 0f);
						}
						unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
						switch (iLocal_46)
						{
							case 1:
								func_205();
								break;
							
							case 2:
								unk_0x8AE96123FEE66A18("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										unk_0x8AE96123FEE66A18("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0xECEC7528A52B4EE8(iLocal_61) || unk_0xA6E8FBD68548675F(iLocal_61, unk_0x7D2B9E6A64637269(), 0))
										{
											bVar0 = unk_0xECEC7528A52B4EE8(iLocal_60);
											if (!unk_0xC2EBFA0B77E6B2D4(uLocal_151))
											{
											}
											if (bVar0 == 0 && iLocal_80 == 1)
											{
												unk_0x451AB475C3CD97F2(iLocal_60, 500, 1000, 0, 0, 0, 0);
												unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
												unk_0x504B26425DFF773C(iLocal_60, 1);
												func_204(1);
												func_199();
											}
										}
										else
										{
											func_169();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										unk_0x8AE96123FEE66A18("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_168();
										if (iLocal_52 && !func_167())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										unk_0x8AE96123FEE66A18("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_166())
										{
											func_165();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 7)
										{
											unk_0x5C679902079A7E80(&uLocal_103);
											unk_0x8ADA462BC5F42FD8(0, iLocal_61, 5000, 0, 2);
											unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 5000);
											unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x1BBD0A5729AB1226(uLocal_103);
											unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
											unk_0x8D5B447F21217223(&uLocal_103);
										}
										break;
									
									case 5:
										func_162();
										if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
										{
											if (unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 7)
											{
												unk_0x5C679902079A7E80(&uLocal_103);
												unk_0xB0C1A43193C25F7A(0, iLocal_61, 0);
												unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x1BBD0A5729AB1226(uLocal_103);
												unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
												unk_0x8D5B447F21217223(&uLocal_103);
											}
										}
										break;
								}
								if (func_161())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_160();
								if (iLocal_47 == 0)
								{
									if (func_158())
									{
										if (iLocal_119 == 4)
										{
											if (unk_0x575B7C28D81C0B4D(uLocal_64))
											{
												unk_0x1AD5BCFEC31BB8D9(&uLocal_64);
											}
											if (unk_0x575B7C28D81C0B4D(uLocal_63))
											{
												unk_0x1AD5BCFEC31BB8D9(&uLocal_63);
											}
											if (!unk_0x575B7C28D81C0B4D(iLocal_65))
											{
												iLocal_65 = func_156(uLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_155())
									{
										func_154();
									}
								}
								if (func_153())
								{
									func_152();
									func_151();
									if (unk_0x591190E69BE43117(iLocal_60, Local_146, 7f, 7f, 7f, 0, 1, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!unk_0x3D28F4F0775C6C2A(iLocal_61, 0))
									{
										func_149(uLocal_64, &uLocal_118);
									}
									else if (unk_0x575B7C28D81C0B4D(uLocal_64))
									{
										if (unk_0xFBC6C2D539FEBE5D(iLocal_64) == 1)
										{
										}
										else
										{
											unk_0xB592493CDC7124C3(iLocal_64, 0);
											unk_0xFA3E6ADC3E5D386E(iLocal_64, 1);
										}
									}
								}
								if (func_148())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								unk_0x8AE96123FEE66A18("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (func_166())
								{
									func_165();
									func_162();
								}
								if (func_161())
								{
									iLocal_46 = 11;
								}
								func_139();
								break;
							
							case 5:
								unk_0x8AE96123FEE66A18("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (!bLocal_126)
								{
									func_138(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_137();
									func_136();
									func_135();
									if (func_134())
									{
										func_133();
										func_199();
									}
									if (func_126(func_127()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_61();
								break;
							
							case 10:
								unk_0x8AE96123FEE66A18("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							
							case 3:
								func_59();
								break;
							
							case 11:
								func_58();
								break;
							
							case 6:
								if (func_161())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!unk_0xECEC7528A52B4EE8(iLocal_60))
								{
									if (unk_0xD406352E21A7E1D0(iLocal_60, unk_0x7D2B9E6A64637269(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_280();
									}
								}
								break;
							
							case 9:
								unk_0x8AE96123FEE66A18("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0x419E13582192CFEA(iLocal_61))
								{
									if (unk_0xECEC7528A52B4EE8(iLocal_61))
									{
										if (unk_0x575B7C28D81C0B4D(iLocal_64))
										{
											unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
										}
										if (!unk_0x419E13582192CFEA(iLocal_60))
										{
											if (unk_0x419E13582192CFEA(iLocal_62))
											{
												unk_0x04F4D55F2C0C756D(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_139();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x419E13582192CFEA(iLocal_62))
								{
									unk_0x04F4D55F2C0C756D(&iLocal_62);
								}
								unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
								func_199();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
						{
							if (unk_0xFC3D64AC1D955520(uLocal_151))
							{
								if (vdist(Local_146, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 150f)
								{
									func_280();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(unk_0x7D2B9E6A64637269(), iLocal_61, 1) > 150f && (!unk_0xB4E725A8915BDF60(iLocal_61) || unk_0x98E18969B1D0C4AB(iLocal_61)))
								{
									func_37(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0, 0);
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_60))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							if (unk_0xA6E8FBD68548675F(iLocal_60, unk_0x7D2B9E6A64637269(), 1))
							{
								if (unk_0x419E13582192CFEA(iLocal_62))
								{
									if (unk_0xDA872572A987B2AD(iLocal_62, iLocal_60))
									{
										unk_0x3211C35423263392(iLocal_62, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0) && !unk_0xE50EB54E0F21BED0(iLocal_60, 0))
							{
								if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iLocal_61, 1), unk_0xD6E677FAD7521410(iLocal_60, 1), 1) > 100f && unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iLocal_61, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1) < 100f)
								{
									unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_61))
						{
							if (iLocal_80 == 3)
							{
								if (unk_0x4E8DA737B686529A(iLocal_61, 1805844857) != 1)
								{
									unk_0xB154967CB3B9C1CF(iLocal_61);
									unk_0x1DC2BF231DE6A016(iLocal_61, iLocal_60, 200f, -1, 0, 0);
									unk_0xEE90D1369E1800A2(iLocal_61, -530524, 1, 0, 0);
									iLocal_124 = 1;
								}
							}
							else if (unk_0x4E8DA737B686529A(iLocal_61, 1805844857) != 1)
							{
								unk_0xB154967CB3B9C1CF(iLocal_61);
								unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
								unk_0xEE90D1369E1800A2(iLocal_61, -530524, 1, 0, 0);
								iLocal_124 = 1;
							}
							if (unk_0x0E497F28E1A4E3F6(iLocal_61, -2134635134))
							{
								unk_0x1DC2BF231DE6A016(iLocal_61, iLocal_60, 200f, -1, 0, 0);
								unk_0xEE90D1369E1800A2(iLocal_61, -530524, 1, 0, 0);
								iLocal_124 = 1;
							}
							if (iLocal_80 == 1 || iLocal_80 == 4)
							{
								if (unk_0x698F51FB33ADAF7B(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (unk_0x4598B7969D5B0A28(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
										unk_0xEE90D1369E1800A2(iLocal_61, -530524, 1, 0, 0);
										iLocal_124 = 1;
									}
								}
								if (unk_0x698F51FB33ADAF7B(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (unk_0x4598B7969D5B0A28(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
										unk_0xEE90D1369E1800A2(iLocal_61, -530524, 1, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_1()
{
	if (unk_0x419E13582192CFEA(iLocal_60))
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_60))
		{
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					func_280();
				}
			}
		}
	}
	if (unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_63))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
		}
	}
	if (unk_0xECEC7528A52B4EE8(iLocal_61))
	{
		if (unk_0x575B7C28D81C0B4D(iLocal_64))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		if ((unk_0x419E13582192CFEA(iParam1) && unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269())) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x55F5BD4ABD80B211(iParam1))
			{
				if (unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam1), 0))
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x89936830A493350F(iParam0, 1);
						unk_0x97A41BF3F05FC07D(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x89936830A493350F(iParam0, 0);
						unk_0x97A41BF3F05FC07D(iParam0, 255);
					}
				}
			}
			else if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam1)))
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x89936830A493350F(iParam0, 1);
						unk_0x97A41BF3F05FC07D(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x89936830A493350F(iParam0, 0);
						unk_0x97A41BF3F05FC07D(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x79CC60D128756F16())
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x4030103C8B148AFC(iVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && unk_0x1F9D47D45E125FA6(iParam1))
	{
		iVar1 = 0;
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			unk_0xE10AFFAFED85BE48(unk_0xFAA5505029C4B5A6(iParam1));
			unk_0xED9E2F10D8093C4B(unk_0xFAA5505029C4B5A6(iParam1), 1);
			if (unk_0x906F86AA0011D5F8(unk_0xFAA5505029C4B5A6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55F5BD4ABD80B211(iParam1))
		{
			unk_0x8CA9CB0F4A5018B4(unk_0x611CD1312FD3CA66(iParam1));
			if (unk_0x6626CA37A88F93B9(unk_0x611CD1312FD3CA66(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x50997FC21D62251F(iParam1))
		{
			unk_0xC61A3EA05D996D93(unk_0x6F9D3E582271B7F5(iParam1));
			if (unk_0x88F676C35100CFCA(unk_0x6F9D3E582271B7F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x79CC60D128756F16())
		{
			if (func_29(uParam0, bParam5, bParam7, 0))
			{
				func_25(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if ((iVar1 && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
				{
					if (((unk_0xB4E725A8915BDF60(iParam1) && iVar1) && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x4030103C8B148AFC(sParam3))
			{
				if (func_36(sParam3))
				{
					unk_0x66AE54CE92457FEE(1);
				}
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
			{
				if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_34(unk_0x7D2B9E6A64637269()))
	{
		unk_0x880C7B361C9651EE(unk_0x7D2B9E6A64637269());
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD6ABECE3CBB224B0(1);
		unk_0xD20D31BC4E3A72D3(0);
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_10(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xDFB7BFA6482FEE1E()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_112293.f_10047.f_100++;
			}
			return Global_112293.f_10047.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_112293.f_10047.f_101++;
			}
			return Global_112293.f_10047.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_112293.f_10047.f_102++;
			}
			return Global_112293.f_10047.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_59279)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
		{
			if (unk_0xDD3EBE641B253A60(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(3) == 3 || unk_0x5F95E51ABC3FC59A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
			{
				return 0;
			}
			if (unk_0x7F827BDD9A88B58D())
			{
				return 0;
			}
		}
	}
	if ((func_22() || func_21(Global_4456448.f_133963)) || func_20())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_19(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_18(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_15(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_16(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x622E46C9F30FB60D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_19(int iParam0, int iParam1)
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

var func_20()
{
	return Global_2453009.f_19;
}

bool func_21(int iParam0)
{
	return iParam0 == 51;
}

var func_22()
{
	return Global_2453009.f_18;
}

bool func_23()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_24(int iParam0)
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

void func_25(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319203 == 1)
	{
		return;
	}
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		func_37(uParam0, 0, 0);
	}
	if (func_28(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			iVar0 = unk_0xFAA5505029C4B5A6(iParam1);
			if (!unk_0xC49311A2A500FF09(iVar0, 0))
			{
				if (unk_0x72D30262CF8C8603(iVar0))
				{
					if (!func_26())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x9B9082138A642C14(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xD6ABECE3CBB224B0(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x48A41E0B6D206A79(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iParam1, -1, iVar3, iVar4);
	unk_0x9673FB069F90F6B9("FocusIn", 0, 0);
	unk_0xB84B43B766630B5C("HINT_CAM_SCENE");
	unk_0x9B0169E27978C1A2(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_26()
{
	return func_27(unk_0x1146A9AE09CE2B14());
}

int func_27(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x6DC4D8B66C3E0EA0(0, 80))
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x366E7F593105797F(0, 140, 1);
			unk_0x366E7F593105797F(0, 80, 1);
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x366E7F593105797F(0, 80, 1);
		if (unk_0xC3AFE2B8AF48FCC8())
		{
			if (unk_0x51794501073F0A33(0, 80) && unk_0xDFB7BFA6482FEE1E() > Global_116)
			{
				unk_0xD6ABECE3CBB224B0(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0x55F5BD4ABD80B211(iParam0))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x611CD1312FD3CA66(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x50997FC21D62251F(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

bool func_36(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_37(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
		{
			return;
		}
	}
	if (unk_0x79CC60D128756F16())
	{
		unk_0xD20D31BC4E3A72D3(iParam2);
		unk_0xBAF2F13FE4D19AA9("FocusIn");
		unk_0xC0BBE340BE2AA02D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9673FB069F90F6B9("FocusOut", 0, 0);
			unk_0x9B0169E27978C1A2(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xD6ABECE3CBB224B0(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4030103C8B148AFC(sVar0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4030103C8B148AFC(uParam0->f_3))
	{
		if (func_36(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_36(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

float func_38(int iParam0, int iParam1, int iParam2)
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

void func_39()
{
	func_280();
}

void func_40()
{
	if (!unk_0xC2EBFA0B77E6B2D4(uLocal_151))
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_61))
		{
			Local_146 = { unk_0x4A94160BCA2AA1B0(iLocal_61, 1067030938, 1069547520) };
		}
		else
		{
			Local_146 = { unk_0xEFC7485122683888(unk_0xD6E677FAD7521410(iLocal_61, 1), 1067030938, 1069547520) };
		}
		uLocal_151 = unk_0x3A63BEB7A1E25FB1(joaat("pickup_money_wallet"), Local_146, uLocal_120, iLocal_152, 1, iLocal_77);
		iLocal_65 = func_156(uLocal_151);
		func_37(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x4B770B4D8C1A469B(0, 40000f, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		else if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x4B770B4D8C1A469B(0, 40000f, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		unk_0x504B26425DFF773C(iLocal_60, 1);
		wait(0);
		func_280();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_56();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_48();
		func_44();
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
		func_56();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

int func_45()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_17())
	{
		return 0;
	}
	if (func_46(unk_0x1146A9AE09CE2B14()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_48()
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

void func_49()
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

int func_50()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
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

void func_52()
{
	if (func_53(14))
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
		Global_19798 = func_127();
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

bool func_53(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_54()
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

bool func_55(int iParam0, int iParam1)
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

void func_56()
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = uParam5;
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

void func_58()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		unk_0xCA089CD1A17D76DF(iLocal_60);
		unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
		unk_0x504B26425DFF773C(iLocal_60, 1);
		if (unk_0x419E13582192CFEA(iLocal_62))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_62);
		}
		wait(0);
		if (unk_0x575B7C28D81C0B4D(iLocal_63))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_60);
	}
	if (unk_0xECEC7528A52B4EE8(iLocal_61) || unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0x575B7C28D81C0B4D(iLocal_64))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
		}
		if (unk_0x575B7C28D81C0B4D(iLocal_63))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
		}
		if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
		{
			if (unk_0xFC3D64AC1D955520(uLocal_151))
			{
				iLocal_54 = 1;
				func_139();
			}
			else
			{
				func_147(0);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_59()
{
	bool bVar0;
	
	func_139();
	if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
	{
		if (unk_0xFC3D64AC1D955520(uLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				unk_0xCA089CD1A17D76DF(iLocal_61);
				unk_0x9DA29013F33252A6(iLocal_61, unk_0x7D2B9E6A64637269(), 0, 16);
				unk_0x504B26425DFF773C(iLocal_61, 1);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
				{
					if (unk_0xFC3D64AC1D955520(uLocal_151))
					{
						unk_0xCA089CD1A17D76DF(iLocal_60);
						unk_0x5C679902079A7E80(&uLocal_103);
						unk_0x45B1B4E55BF15523(0, unk_0xCA4950AD4AC0DAD8(uLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0x1BBD0A5729AB1226(uLocal_103);
						unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
						unk_0x8D5B447F21217223(&uLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				unk_0xCA089CD1A17D76DF(iLocal_61);
				unk_0x9DA29013F33252A6(iLocal_61, unk_0x7D2B9E6A64637269(), 0, 16);
				unk_0x504B26425DFF773C(iLocal_61, 1);
				unk_0x46EDFC827DC67D89(iLocal_61, 0, 1);
				unk_0x0F3BD19FF11738D3(&iLocal_61);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
				{
					if (unk_0xFC3D64AC1D955520(uLocal_151))
					{
						if (unk_0x591190E69BE43117(iLocal_60, unk_0xCA4950AD4AC0DAD8(uLocal_151), 10f, 10f, 10f, 0, 1, 0))
						{
							if (iLocal_80 == 3)
							{
								if ((!unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									unk_0xCA089CD1A17D76DF(iLocal_60);
									unk_0x5C679902079A7E80(&uLocal_103);
									unk_0x45B1B4E55BF15523(0, unk_0xCA4950AD4AC0DAD8(uLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x1BBD0A5729AB1226(uLocal_103);
									unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
									unk_0x8D5B447F21217223(&uLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								unk_0xCA089CD1A17D76DF(iLocal_60);
								unk_0x5C679902079A7E80(&uLocal_103);
								unk_0x45B1B4E55BF15523(0, unk_0xCA4950AD4AC0DAD8(uLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0x1BBD0A5729AB1226(uLocal_103);
								unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
								unk_0x8D5B447F21217223(&uLocal_103);
								iLocal_49 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
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
					if (iLocal_80 == 3)
					{
						if ((!unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							unk_0xCA089CD1A17D76DF(iLocal_60);
							unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
							unk_0x504B26425DFF773C(iLocal_60, 1);
							if (unk_0x575B7C28D81C0B4D(iLocal_63))
							{
								unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
							}
							unk_0x0F3BD19FF11738D3(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						unk_0xCA089CD1A17D76DF(iLocal_60);
						unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
						unk_0x504B26425DFF773C(iLocal_60, 1);
						if (unk_0x575B7C28D81C0B4D(iLocal_63))
						{
							unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
						}
						unk_0x0F3BD19FF11738D3(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				unk_0xCA089CD1A17D76DF(iLocal_61);
				unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
				unk_0x504B26425DFF773C(iLocal_61, 1);
				unk_0x46EDFC827DC67D89(iLocal_61, 0, 1);
				unk_0x0F3BD19FF11738D3(&iLocal_61);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				unk_0xCA089CD1A17D76DF(iLocal_60);
				unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
				unk_0x504B26425DFF773C(iLocal_60, 1);
				unk_0x0F3BD19FF11738D3(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_60))
		{
			if (iLocal_49)
			{
				if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
				{
					if (unk_0xFC3D64AC1D955520(uLocal_151))
					{
						if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (unk_0x4598B7969D5B0A28(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
								{
									if (unk_0xFC3D64AC1D955520(uLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										unk_0xDB5C5980B9AE89B9(uLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 7)
						{
							unk_0xCA089CD1A17D76DF(iLocal_60);
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0x4261814A9A26E86F(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							unk_0x504B26425DFF773C(iLocal_60, 1);
						}
					}
					else if (bLocal_50)
					{
						unk_0xEC7D41CF790FC6FB(iLocal_60, iLocal_152);
						unk_0x0F3BD19FF11738D3(&iLocal_60);
						func_204(3);
						func_199();
					}
					else
					{
						unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
						unk_0x504B26425DFF773C(iLocal_60, 1);
						if (unk_0x575B7C28D81C0B4D(iLocal_63))
						{
							unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
						}
						unk_0x0F3BD19FF11738D3(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					unk_0xEC7D41CF790FC6FB(iLocal_60, iLocal_152);
					unk_0x0F3BD19FF11738D3(&iLocal_60);
					func_204(3);
					func_199();
				}
				else
				{
					unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
					unk_0x504B26425DFF773C(iLocal_60, 1);
					if (unk_0x575B7C28D81C0B4D(iLocal_63))
					{
						unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
					}
					unk_0x0F3BD19FF11738D3(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_60()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		unk_0xCA089CD1A17D76DF(iLocal_60);
		unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
		unk_0x504B26425DFF773C(iLocal_60, 1);
		unk_0x0F3BD19FF11738D3(&iLocal_60);
	}
}

void func_61()
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	struct<2> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				Var7 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				iVar8 = 1;
				if (iLocal_80 == 1)
				{
					if (Var7.f_2 > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 5f, 5f, 5f, 0, 1, 0) && iVar8 == 1)
				{
					if (func_124(2))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
					{
						if (func_123(1, 0, 1))
						{
							if (!func_122())
							{
								if (!unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
								{
									func_114(1, 1, 1, 0, 0, 0, 0);
									if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
									{
										while (!func_112(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), uLocal_71, 1, 1056964608, 0, 1, 0) || func_167())
										{
											unk_0xAF98B1BA240CE3DB();
											wait(0);
										}
										if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
										{
											unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
										}
									}
									unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
									if (!unk_0xECEC7528A52B4EE8(iLocal_60))
									{
										unk_0xF5143FB7B9EC876D(iLocal_60, 0);
									}
									unk_0xAF98B1BA240CE3DB();
									unk_0xAE8E6284A6D09C87(0);
									unk_0x3E5BA73CEA34D768(iLocal_117);
									if (unk_0x6C2F471E0CF8D4CF())
									{
										func_110();
									}
									bLocal_126 = true;
									settimera(0);
								}
							}
						}
					}
				}
				else
				{
					func_108(unk_0xD6E677FAD7521410(iLocal_60, 1), &uLocal_70, &uLocal_71);
				}
			}
			else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0x5C679902079A7E80(&uLocal_103);
				unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					unk_0x4261814A9A26E86F(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x1BBD0A5729AB1226(uLocal_103);
				unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
				unk_0x8D5B447F21217223(&uLocal_103);
				unk_0xEE90D1369E1800A2(iLocal_60, -668482597, 0, 0, 0);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					unk_0xAF98B1BA240CE3DB();
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							func_105(iLocal_60, &Local_105, &Local_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 1)
							{
								if (Local_106.f_2 > 225f && Local_106.f_2 < 265f)
								{
									if (Local_106.f_2 < 245f)
									{
										Local_106.f_2 = 225f;
									}
									else
									{
										Local_106.f_2 = 265f;
									}
								}
								else if (Local_106.f_2 > 45f && Local_106.f_2 < 85f)
								{
									if (Local_106.f_2 < 65f)
									{
										Local_106.f_2 = 45f;
									}
									else
									{
										Local_106.f_2 = 85f;
									}
								}
							}
							Local_105.f_2 = (Local_105.f_2 + 2f);
							unk_0x7956E831D8C0C17C(Local_105, &(Local_105.f_2), 0, 0);
							Var1 = { unk_0xBF480D363C51CDF8(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2) };
							Var4 = { Var1 - Local_105 };
							Var4.f_2 = 0f;
							fVar5 = vmag(Var4);
							unk_0x7956E831D8C0C17C(Var1, &(Var1.f_2), 0, 0);
							fVar6 = (Local_105.f_2 - Var1.f_2);
							Local_106.x = unk_0xF0AE30F012D1FD8C(fVar6, fVar5);
							if (Local_106.x > 30f || Local_106.x < -30f)
							{
								Local_106.x = 0f;
							}
						}
						if (unk_0xBFCE58B2B3249999(unk_0x0BF0F8F3AD0993F6(), 0))
						{
							if (!unk_0xBFCE58B2B3249999(iVar0, 0))
							{
								iVar0 = unk_0x0BF0F8F3AD0993F6();
								unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iVar0), &uVar2, &Var3);
								if (unk_0x591190E69BE43117(iVar0, Local_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, 0, 1, 0) || unk_0x591190E69BE43117(iVar0, unk_0xBF480D363C51CDF8(cLocal_321, sLocal_323, Local_105, Local_106, 0, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (iLocal_80 == 1)
									{
										if (Local_106.f_2 > 40f && Local_106.f_2 < 220f)
										{
											Local_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											Local_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (iLocal_80 == 3)
									{
										if (Local_106.f_2 > 160f && Local_106.f_2 < 340f)
										{
											Local_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											Local_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (iLocal_80 == 4)
									{
										if (Local_106.f_2 > 240f || Local_106.f_2 < 60f)
										{
											Local_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											Local_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = unk_0xA8D713A937F31250(iVar0);
										Local_74 = { func_103(Local_105, unk_0xBF480D363C51CDF8(cLocal_321, sLocal_323, Local_105, Local_106, 0, 2)) };
									}
									if (unk_0xBFCE58B2B3249999(iVar0, 0))
									{
										unk_0x78CDDD1E6367978D(iVar0, Local_74, 1, 0, 0, 1);
										unk_0xCD37A28258D70638(iVar0, fLocal_73);
										unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
										unk_0x77CF3E92F49E693E(iVar0, 1);
									}
								}
							}
						}
						unk_0xBA7E979B202649F9(Local_105, 20f, 2);
						unk_0xAA464864BA733E26(Local_105, 20f, 0);
						unk_0x6AF7EE4DD9F8B944(Local_105, 2f, 1, 1, 0, 0);
						unk_0x4E06EA55E2B40658(unk_0x7D2B9E6A64637269(), 1);
						iLocal_62 = unk_0x795434E153F90E41(iLocal_77, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1, 1, 0);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0x0F1058706D5A58B4(iLocal_62, unk_0x7D2B9E6A64637269(), unk_0xA79DFB802C09F5F5(unk_0x7D2B9E6A64637269(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						uLocal_107 = unk_0xD955F1CC0BCABC78(Local_105, Local_106, 2);
						unk_0x1C6FA6A93BF99EA4(uLocal_107, 0);
						uLocal_108 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x47554D1FFAB68B45(uLocal_108, uLocal_107, sLocal_324, cLocal_321);
						unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							unk_0x16D66F11FE644901(iLocal_60);
							unk_0xAD844C8843FC405C(iLocal_60, uLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0x6FA8221C9D2ECB46(uLocal_108, 1);
						unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						settimera(0);
						iLocal_125++;
					}
					unk_0xAF98B1BA240CE3DB();
					break;
				
				case 1:
					if ((unk_0xEEC203A73BC92E7E(uLocal_107) && unk_0x0BC8768247440B3A(uLocal_107) > 0.9f) || func_101(1000))
					{
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
						unk_0xDF23DCD7A3E1B7A5(0f);
						unk_0x6FA8221C9D2ECB46(uLocal_108, 0);
						unk_0xFE1DEC9C5734D0C0(uLocal_108, 0);
						func_100();
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							unk_0x16D66F11FE644901(iLocal_60);
							unk_0xEC7D41CF790FC6FB(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							Var1 = { unk_0xBF480D363C51CDF8(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							unk_0x7956E831D8C0C17C(Var1, &(Var1.f_2), 0, 0);
							unk_0x78CDDD1E6367978D(iLocal_60, Var1, 1, 0, 0, 1);
							unk_0xBE91B077ADADE97F(iLocal_60, 0);
							Var1 = { unk_0x04F690ADA8C71424(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							unk_0xCD37A28258D70638(iLocal_60, Var1.f_2);
							if (iLocal_80 == 4)
							{
								if (func_99(Var1.f_2, 0f, 90f))
								{
									unk_0x5C679902079A7E80(&uLocal_103);
									unk_0x45B1B4E55BF15523(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_60), 1);
									unk_0x1BBD0A5729AB1226(uLocal_103);
									unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
									unk_0x8D5B447F21217223(&uLocal_103);
								}
								else
								{
									unk_0x5C679902079A7E80(&uLocal_103);
									unk_0x45B1B4E55BF15523(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_60), 1);
									unk_0x1BBD0A5729AB1226(uLocal_103);
									unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
									unk_0x8D5B447F21217223(&uLocal_103);
								}
							}
							else
							{
								unk_0x5C679902079A7E80(&uLocal_103);
								unk_0x4B770B4D8C1A469B(0, Var1.f_2, 1);
								unk_0x1BBD0A5729AB1226(uLocal_103);
								unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
								unk_0x8D5B447F21217223(&uLocal_103);
							}
							unk_0xC63C967EC1D348E4(iLocal_60, cLocal_334, 1048576000);
							unk_0xEE90D1369E1800A2(iLocal_60, -668482597, 1, 0, 0);
							unk_0x504B26425DFF773C(iLocal_60, 1);
						}
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
							unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
						}
						if (unk_0x419E13582192CFEA(iLocal_62))
						{
							unk_0x04F4D55F2C0C756D(&iLocal_62);
						}
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							unk_0xEC7D41CF790FC6FB(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							unk_0xF5143FB7B9EC876D(iLocal_60, 1);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						wait(0);
						unk_0xE5AC37B329B31F82(0, 0, 3, 0);
						func_64(func_127(), 1, iVar9);
						func_63(joaat("rc_wallets_returned"), 1);
						func_204(3);
						func_199();
					}
					else if (unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), -3856156))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_60) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (unk_0xDA872572A987B2AD(iLocal_62, unk_0x7D2B9E6A64637269()))
							{
								unk_0x3211C35423263392(iLocal_62, 0, 1);
								if (unk_0x9B9082138A642C14(iLocal_60))
								{
									unk_0x0F1058706D5A58B4(iLocal_62, iLocal_60, unk_0xA79DFB802C09F5F5(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0x0F1058706D5A58B4(iLocal_62, iLocal_60, unk_0xA79DFB802C09F5F5(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
						{
							iLocal_59 = 1;
						}
					}
					unk_0xAF98B1BA240CE3DB();
					break;
				}
		}
	}
	else
	{
		func_280();
	}
}

int func_62()
{
	if (Global_21125 == 4)
	{
		if (unk_0x8820F6FCD373F9F7())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, iParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_96(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_67(iParam0);
	if (Global_42009 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_68(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_70() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_70() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_69(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1312763;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_73();
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

void func_75(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_76(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_78(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_77(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_77(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_77(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_77(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_77(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_77(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_70() /*5557*/].f_675.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_53(14) && !func_94(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_93(&Global_4272779))
	{
		if (func_91(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4272778 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_98(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_99(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	var uVar0;
	
	uVar0 = unk_0x1CA878DB277C6DF0(26379945, unk_0x9E695CE384C77EF0(unk_0x7D2B9E6A64637269(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269()), 1115815936, 1, 2);
	unk_0x6FA8221C9D2ECB46(uVar0, 1);
}

int func_101(int iParam0)
{
	if (unk_0xE0A6F16F546C8274())
	{
		if ((unk_0xDFB7BFA6482FEE1E() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDFB7BFA6482FEE1E();
		}
		Global_28 = unk_0xDFB7BFA6482FEE1E();
		if ((unk_0xDFB7BFA6482FEE1E() - Global_27) > iParam0)
		{
			if (func_102())
			{
				Global_27 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (unk_0x86AF801D34E482FF(0, 18) || unk_0x86AF801D34E482FF(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_103(struct<3> Param0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	var uVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0x0BF0F8F3AD0993F6();
	if (!unk_0xEE1D92A39CF8E1E6(iVar0))
	{
		unk_0x4985CD0720AFD468(iVar0, 1, 0);
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iVar0), &Var3, &Var4);
	unk_0x9FB743331EC18DF4(Param0, 3, &Var2, 1, 1077936128, 0);
	if (vdist(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (vdist(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						Var10 = { func_104(Var1, 0f, Var4) };
						Var11 = { func_104(Var1, 0f, Var3) };
						uVar13 = unk_0x3F7B472B49D4D2AC(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0xA2B3B271E2AE7A08(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0x0BABEFEA577FCFA4(Var1, Param0, 1) <= 5f || unk_0x0BABEFEA577FCFA4(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						Var10 = { func_104(Var1, 0f, Var4) };
						Var11 = { func_104(Var1, 0f, Var3) };
						uVar13 = unk_0x3F7B472B49D4D2AC(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0xA2B3B271E2AE7A08(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0x0BABEFEA577FCFA4(Var1, Param0, 1) <= 5f || unk_0x0BABEFEA577FCFA4(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						Var10 = { func_104(Var1, 0f, Var4) };
						Var11 = { func_104(Var1, 0f, Var3) };
						uVar13 = unk_0x3F7B472B49D4D2AC(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0xA2B3B271E2AE7A08(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0x0BABEFEA577FCFA4(Var1, Param0, 1) <= 5f || unk_0x0BABEFEA577FCFA4(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0x9E695CE384C77EF0(iVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x9E695CE384C77EF0(iVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						Var10 = { func_104(Var1, 0f, Var4) };
						Var11 = { func_104(Var1, 0f, Var3) };
						uVar13 = unk_0x3F7B472B49D4D2AC(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0xA2B3B271E2AE7A08(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0x0BABEFEA577FCFA4(Var1, Param0, 1) <= 5f || unk_0x0BABEFEA577FCFA4(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(0);
	}
	return Var1;
}

Vector3 func_104(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

void func_105(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
	uParam2->f_2 = func_107(iParam0, unk_0x7D2B9E6A64637269(), 1);
	fVar3 = func_107(iParam0, unk_0x7D2B9E6A64637269(), 1);
	fVar4 = func_107(iParam0, unk_0x7D2B9E6A64637269(), 1);
	Var10 = { unk_0xD6E677FAD7521410(iParam0, 0) - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
	if (unk_0x0EC2B29D4172D225(cParam3))
	{
		Var9 = { unk_0xBF480D363C51CDF8(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_106(unk_0xD6E677FAD7521410(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iParam0, 0), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x7AD43B94CD205A49(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xA2B3B271E2AE7A08(uVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_106(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(0);
	}
}

float func_106(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF0AE30F012D1FD8C(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_107(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	return func_106(Var0, Var1, iParam2);
}

void func_108(struct<3> Param0, var uParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - Param0 };
		fVar2 = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
		if (func_109(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		fVar2 = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
		if (func_109(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*uParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*uParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_109(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		fVar0 = unk_0xA8D713A937F31250(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_110()
{
	Global_19991 = 0;
	func_111();
}

void func_111()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

int func_112(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam5)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 68, 1);
	}
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 138, 1);
	unk_0x366E7F593105797F(0, 136, 1);
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
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 131, 1);
	unk_0x366E7F593105797F(0, 132, 1);
	unk_0x366E7F593105797F(0, 123, 1);
	unk_0x366E7F593105797F(0, 126, 1);
	unk_0x366E7F593105797F(0, 129, 1);
	unk_0x366E7F593105797F(0, 130, 1);
	unk_0x366E7F593105797F(0, 133, 1);
	unk_0x366E7F593105797F(0, 134, 1);
	unk_0x042D3F56FFA48394();
	func_113(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDFB7BFA6482FEE1E();
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_113(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x45A445014B256CB5(iParam0))
		{
			if (unk_0x7FFAB542797E5F31(iParam0))
			{
				unk_0x4AE9893CBA452EC0(iParam0, 0);
			}
		}
	}
}

void func_114(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_121(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_50())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_120(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_121(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_120(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_118(unk_0x1146A9AE09CE2B14())) && !func_116(unk_0x1146A9AE09CE2B14(), 0)) && !func_115()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_118(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_115()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
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

int func_118(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
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

bool func_119()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_120(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_121(int iParam0)
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

int func_122()
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (func_167())
		{
			return 1;
		}
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDA1F0FCE18FED8C1())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
		{
			return 0;
		}
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (bParam0)
		{
			if (unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x27FC1B0077581B37(iVar0, -1, 0) != unk_0x7D2B9E6A64637269())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xAB53B3829B28E5B8(iVar0) < 0.95f || unk_0xAB53B3829B28E5B8(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!unk_0xCAE2D0DD92A9241E(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

bool func_124(int iParam0)
{
	return func_36(func_125(iParam0));
}

char* func_125(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_126(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_127()
{
	func_128();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_128()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_131(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_130(unk_0x7D2B9E6A64637269());
			if (func_129(iVar0) && (!func_53(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_129(Global_112293.f_2361.f_539.f_4321))
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

bool func_129(int iParam0)
{
	return iParam0 < 3;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_131(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_131(int iParam0)
{
	if (func_129(iParam0))
	{
		return func_132(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_132(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_133()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 150f, -1, 0, 0);
		unk_0x504B26425DFF773C(iLocal_60, 1);
		wait(0);
	}
}

int func_134()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (unk_0xA6E8FBD68548675F(iLocal_60, unk_0x7D2B9E6A64637269(), 1))
		{
			return 1;
		}
		if (unk_0x3E72EB0926A107F9(unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((unk_0x93B9F446C9E48692(Var1, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x93B9F446C9E48692(Var1, Var0, joaat("weapon_grenade"), 1)) || unk_0x93B9F446C9E48692(Var1, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x80F28BAD1826C85F(unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
	{
		if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_60, 1)) > (fLocal_139 + 50f))
		{
			func_199();
		}
		else if (func_126(func_127()) < iLocal_152)
		{
			func_199();
		}
	}
}

void func_136()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, Global_19, 0, 1, 0))
		{
			unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_60, 3000, 0, 2);
			unk_0x8ADA462BC5F42FD8(iLocal_60, unk_0x7D2B9E6A64637269(), 3000, 0, 2);
		}
	}
}

void func_137()
{
	float fVar0;
	
	if (iLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_140, Local_141, fVar0, 0, 1, 0))
		{
			if (!iLocal_131)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					unk_0xB0C1A43193C25F7A(iLocal_60, unk_0x7D2B9E6A64637269(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_142, Local_143, fVar0, 0, 1, 0))
		{
			if (!iLocal_132)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					unk_0xB0C1A43193C25F7A(iLocal_60, unk_0x7D2B9E6A64637269(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_144, Local_145, fVar0, 0, 1, 0))
		{
			if (!iLocal_133)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_60))
		{
			if (unk_0xD406352E21A7E1D0(iLocal_60, unk_0x7D2B9E6A64637269(), 25f, 25f, 5f, 0, 1, 0) && unk_0x895779B17E5AA5FE(iLocal_60, unk_0x7D2B9E6A64637269(), 17))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_62())
				{
					if (!unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0x5C679902079A7E80(&uLocal_103);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
						if (iLocal_45 == 2)
						{
							unk_0x4261814A9A26E86F(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x1BBD0A5729AB1226(uLocal_103);
						unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
						unk_0x8D5B447F21217223(&uLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_138(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				unk_0x5C679902079A7E80(&uLocal_103);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 0, 2);
				unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
				unk_0x1BBD0A5729AB1226(uLocal_103);
				unk_0x8A1AC8EBC73850C8(iParam0, uLocal_103);
				unk_0x8D5B447F21217223(&uLocal_103);
				settimera(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				if (unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				if (!unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_139()
{
	if (unk_0x21C88062F3ECEF83(uLocal_151))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
		{
			fLocal_139 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_60, 1));
		}
		func_63(joaat("rc_wallets_recovered"), 1);
		unk_0x8543AEC08F877EE9(0, 200, 250);
		if (unk_0x419E13582192CFEA(iLocal_62))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_62);
		}
		func_142();
		func_141(&uLocal_348);
		if (unk_0x419E13582192CFEA(iLocal_60))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				unk_0x1EB6C2E7D90CD82E(iLocal_60, 0);
			}
		}
		func_147(0);
		unk_0xDB5C5980B9AE89B9(uLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_140(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112293.f_24993.f_2 < 3)
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_12(func_125(iParam0), -1);
					Global_112293.f_24993.f_2++;
					unk_0x191DDA30577F440A(&Global_112289, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 1))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_12(func_125(iParam0), -1);
					Global_112293.f_24993.f_3++;
					unk_0x191DDA30577F440A(&Global_112289, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 2))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_12(func_125(iParam0), -1);
					Global_112293.f_24993.f_4++;
					unk_0x191DDA30577F440A(&Global_112289, 2);
				}
			}
			break;
	}
}

void func_141(var uParam0)
{
	*uParam0 = -99;
}

void func_142()
{
	iLocal_65 = 0;
	if (!unk_0x575B7C28D81C0B4D(iLocal_63))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
		{
			iLocal_63 = func_143(iLocal_60, 0, 0);
		}
	}
}

int func_143(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_144(iParam0, bParam1, 145);
}

int func_144(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_145(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(iVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_146(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(iVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_146(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(iVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_146(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(bool bParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60) && iLocal_80 == 4)
	{
		if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 0, 2);
			if (bParam0)
			{
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0xCA089CD1A17D76DF(iLocal_60);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
	}
}

int func_148()
{
	if (unk_0x419E13582192CFEA(iLocal_62))
	{
		if (unk_0x5976053523EA16C8(iLocal_62))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				if (unk_0xDA872572A987B2AD(iLocal_62, iLocal_60))
				{
					if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_149(int iParam0, var uParam1)
{
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		if (unk_0xDFB7BFA6482FEE1E() > *uParam1 + 500)
		{
			if (unk_0xFBC6C2D539FEBE5D(iParam0) == 1)
			{
				unk_0xB592493CDC7124C3(iParam0, true);
			}
			else
			{
				unk_0xB592493CDC7124C3(iParam0, false);
				unk_0xFA3E6ADC3E5D386E(iParam0, 1);
			}
			*uParam1 = unk_0xDFB7BFA6482FEE1E();
		}
		if (!unk_0xE8FFE38E2BA32BD6() && func_150(0))
		{
			func_140(1);
		}
	}
}

bool func_150(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112289, iParam0);
}

void func_151()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 8f, 8f, 18f, 0, 1, 0) || unk_0xB4E725A8915BDF60(iLocal_60))
		{
			unk_0x1036762BD3781C84();
		}
	}
}

void func_152()
{
	if (unk_0x575B7C28D81C0B4D(iLocal_64))
	{
		unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
	}
	if (unk_0x419E13582192CFEA(iLocal_62))
	{
		if (unk_0x5976053523EA16C8(iLocal_62))
		{
			unk_0x3211C35423263392(iLocal_62, 1, 1);
			unk_0x04F4D55F2C0C756D(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_45 == 2)
			{
				unk_0x82D2BB48A39F1E88(iLocal_61, 128, 1);
				unk_0x82D2BB48A39F1E88(iLocal_61, 2, 1);
				unk_0x82D2BB48A39F1E88(iLocal_61, 1, 0);
				unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
			}
			unk_0x504B26425DFF773C(iLocal_61, 1);
		}
	}
}

int func_153()
{
	if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_61, unk_0x7D2B9E6A64637269(), 1))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_154()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		unk_0xCA089CD1A17D76DF(iLocal_60);
		unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
		unk_0x504B26425DFF773C(iLocal_60, 1);
		wait(0);
		unk_0x0F3BD19FF11738D3(&iLocal_60);
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		unk_0x5C679902079A7E80(&uLocal_103);
		unk_0x880C7B361C9651EE(0);
		unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
		unk_0x1BBD0A5729AB1226(uLocal_103);
		unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
		unk_0x8D5B447F21217223(&uLocal_103);
		unk_0x504B26425DFF773C(iLocal_61, 1);
		wait(0);
		unk_0x46EDFC827DC67D89(iLocal_61, 0, 1);
		unk_0x0F3BD19FF11738D3(&iLocal_61);
	}
}

int func_155()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0x6B9E71121F5B8154(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(var uParam0)
{
	return func_157(uParam0);
}

int func_157(var uParam0)
{
	var uVar0;
	
	if (!unk_0xC2EBFA0B77E6B2D4(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x214E857DC196E5F9(uParam0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_146(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	return iVar0;
}

int func_158()
{
	if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
	{
		if (unk_0xFC3D64AC1D955520(uLocal_151))
		{
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
				{
					if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 18f, 18f, 18f, 0, 1, 0) || unk_0xA6E8FBD68548675F(iLocal_61, unk_0x7D2B9E6A64637269(), 1))
						{
							settimerb(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_159())
				{
					settimerb(0);
					iLocal_119 = 2;
					return 1;
				}
				if (unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					if (unk_0xA6E8FBD68548675F(iLocal_61, unk_0x7D2B9E6A64637269(), 1))
					{
						if (unk_0x419E13582192CFEA(iLocal_60))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_60))
							{
								unk_0xCA089CD1A17D76DF(iLocal_60);
								unk_0x1EB6C2E7D90CD82E(iLocal_60, 0);
							}
						}
						settimerb(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (unk_0xA6E8FBD68548675F(iLocal_61, unk_0x7D2B9E6A64637269(), 1))
				{
					settimerb(0);
					iLocal_119 = 2;
					if (unk_0x419E13582192CFEA(iLocal_60))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							unk_0xCA089CD1A17D76DF(iLocal_60);
							unk_0x1EB6C2E7D90CD82E(iLocal_60, 0);
						}
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_61))
					{
						unk_0xCA089CD1A17D76DF(iLocal_61);
						unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
						unk_0x504B26425DFF773C(iLocal_61, 1);
						unk_0x46EDFC827DC67D89(iLocal_61, 0, 1);
						unk_0x0F3BD19FF11738D3(&iLocal_61);
					}
					return 1;
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_60))
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
				{
					if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
						{
							if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_60) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_60))
							{
								settimerb(0);
								iLocal_119 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_159()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_61))
	{
		if (unk_0xCA70422943A4EC8D(iLocal_61, unk_0x7D2B9E6A64637269()) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_61) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (unk_0xCDDAB3241735D813(unk_0x7D2B9E6A64637269()))
		{
			return 1;
		}
		if (unk_0x6B9E71121F5B8154(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_160()
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				if (unk_0x24A466C655E8588A(iLocal_61, 4))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_62()) || func_62())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62()) || func_62())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_159())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (unk_0x24A466C655E8588A(iLocal_61, 4))
			{
				unk_0x9DA29013F33252A6(iLocal_61, unk_0x7D2B9E6A64637269(), 0, 16);
			}
			else
			{
				func_152();
			}
			iLocal_56 = 1;
		}
	}
}

int func_161()
{
	int iVar0;
	
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 7))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_60) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x73E0CF006385B59C(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0xA6E8FBD68548675F(iLocal_60, unk_0x7D2B9E6A64637269(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x3E72EB0926A107F9(unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_167())
	{
		if (timera() > 10000)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				if (!unk_0xC25830F0A5BDB298(iLocal_60))
				{
					func_163(iLocal_60, "GENERIC_CURSE_MED", 24);
					settimera(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(unk_0x7D2B9E6A64637269(), iLocal_61, 1) > 200f)
		{
			if (!unk_0xB4E725A8915BDF60(iLocal_61) || unk_0x98E18969B1D0C4AB(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(iParam0, sParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_165()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0x5C679902079A7E80(&uLocal_103);
				unk_0x4261814A9A26E86F(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 0, 2);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_103);
				unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
				unk_0x8D5B447F21217223(&uLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (unk_0x698F51FB33ADAF7B(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0x5C679902079A7E80(&uLocal_103);
				unk_0x4261814A9A26E86F(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 0, 2);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_103);
				unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
				unk_0x8D5B447F21217223(&uLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 1)
					{
						if (unk_0x507B30DD5CDF782F(iLocal_60) == iLocal_138)
						{
							unk_0x8ADA462BC5F42FD8(iLocal_60, unk_0x7D2B9E6A64637269(), 9000, 0, 2);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						unk_0x05D0B763CEEA9ABD(iLocal_60, 1);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						unk_0x5C679902079A7E80(&uLocal_103);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 7000, 0, 2);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 7000);
						unk_0x1BBD0A5729AB1226(uLocal_103);
						unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
						unk_0x8D5B447F21217223(&uLocal_103);
						settimera(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_166()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_168()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = unk_0xDFB7BFA6482FEE1E();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = unk_0xDFB7BFA6482FEE1E();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_167())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_45 == 2)
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_60))
								{
									if (!unk_0xECEC7528A52B4EE8(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_60))
								{
								}
							}
							if (unk_0x575B7C28D81C0B4D(iLocal_63))
							{
								unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_169()
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 2)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60) && !unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				if (!func_196())
				{
					if (func_183())
					{
						func_280();
					}
				}
				if (func_182())
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_66))
					{
						if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
						{
							iLocal_66 = func_143(iLocal_61, 1, 0);
						}
						func_174(1);
					}
				}
				if (func_173())
				{
					func_172();
					if (iLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0x8ADA462BC5F42FD8(0, iLocal_61, 16000, 0, 2);
							unk_0x45B1B4E55BF15523(0, Local_79, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							iLocal_55 = 1;
						}
						unk_0x5C679902079A7E80(&uLocal_103);
						unk_0x8ADA462BC5F42FD8(0, iLocal_60, -1, 0, 2);
						unk_0x4261814A9A26E86F(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0xC3219A6FBFC09F37(0, Local_79, iLocal_60, 1f, 0, 1.5f, 1082130432, 1, 0, 0, -957453492, 20000);
						unk_0x2AA99ECF9FBD1E5D(0, iLocal_60, -1, 1);
						unk_0x1BBD0A5729AB1226(uLocal_103);
						unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
						unk_0x8D5B447F21217223(&uLocal_103);
						settimera(0);
						bLocal_53 = true;
						unk_0x5E84945E26CAEF1F(0f);
					}
					else
					{
						if (iLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_171();
						bLocal_53 = true;
						bLocal_123 = true;
						settimera(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (timera() > 1000)
			{
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
					{
						unk_0xB0C1A43193C25F7A(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60) && !unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_62())
				{
					unk_0xCA089CD1A17D76DF(iLocal_60);
					unk_0x5C679902079A7E80(&uLocal_103);
					unk_0x4261814A9A26E86F(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x4261814A9A26E86F(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0x4261814A9A26E86F(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_103);
					unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
					unk_0x8D5B447F21217223(&uLocal_103);
					func_172();
					uLocal_151 = unk_0x3A63BEB7A1E25FB1(joaat("pickup_money_purse"), unk_0xEFC7485122683888(unk_0x9E695CE384C77EF0(iLocal_60, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_120, iLocal_152, 1, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				func_170();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						Local_626 = { unk_0xCA4950AD4AC0DAD8(uLocal_151) - Vector(0f, 0f, 0.75f) };
						if (unk_0xFC3D64AC1D955520(uLocal_151))
						{
							unk_0xCA089CD1A17D76DF(iLocal_61);
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0xC3219A6FBFC09F37(0, Local_626, iLocal_60, 2f, 0, 0.1f, 1082130432, 1, 0, 0, -957453492, 20000);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							iLocal_624 = unk_0xDFB7BFA6482FEE1E();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (unk_0x4E8DA737B686529A(iLocal_61, 242628503) == 7)
						{
							Local_626 = { unk_0xCA4950AD4AC0DAD8(uLocal_151) - Vector(0f, 0f, 0.75f) };
							if (unk_0xFC3D64AC1D955520(uLocal_151))
							{
								if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iLocal_61, 1), Local_626, 1) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									unk_0xCA089CD1A17D76DF(iLocal_61);
									unk_0x5C679902079A7E80(&uLocal_103);
									unk_0x4261814A9A26E86F(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x1BBD0A5729AB1226(uLocal_103);
									unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
									unk_0x8D5B447F21217223(&uLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((unk_0xDFB7BFA6482FEE1E() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (unk_0x4598B7969D5B0A28(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (unk_0xFC3D64AC1D955520(uLocal_151))
							{
								unk_0xDB5C5980B9AE89B9(uLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0x698F51FB33ADAF7B(iLocal_61, cLocal_320, "pickup_low", 3) && unk_0x4598B7969D5B0A28(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !unk_0x698F51FB33ADAF7B(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						unk_0x46EDFC827DC67D89(iLocal_61, 1, 1);
						unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 50f, -1, 0, 0);
						unk_0xE37EB80DFB0D31FB(iLocal_61, 0, 0);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_170()
{
	if (unk_0x575B7C28D81C0B4D(iLocal_63))
	{
		unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
	}
	if (!unk_0x575B7C28D81C0B4D(iLocal_65))
	{
		if (unk_0xC2EBFA0B77E6B2D4(uLocal_151))
		{
			iLocal_65 = func_156(uLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_171()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0x836F48E8C4A773BF(iLocal_61, unk_0x7D2B9E6A64637269(), 90f))
	{
		unk_0x4261814A9A26E86F(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			iLocal_335 = unk_0xD5504E3827DE12F9(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		else
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
	}
	else
	{
		unk_0x4261814A9A26E86F(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0xFBF1F1BE9D437D22(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
		else
		{
			unk_0x5C679902079A7E80(&uLocal_103);
			unk_0x4261814A9A26E86F(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x4261814A9A26E86F(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_103);
			unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
			unk_0x8D5B447F21217223(&uLocal_103);
		}
	}
}

void func_172()
{
	if (unk_0x575B7C28D81C0B4D(iLocal_66))
	{
		unk_0x1AD5BCFEC31BB8D9(&iLocal_66);
	}
	if (!unk_0x575B7C28D81C0B4D(iLocal_64))
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
		{
			iLocal_64 = func_143(iLocal_61, 1, 0);
		}
	}
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_61, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 4)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (func_176())
	{
		Global_112283 = 1;
		Global_112280 = unk_0xDFB7BFA6482FEE1E();
		if (func_175(Global_112282))
		{
			func_140(0);
		}
		unk_0xB4D080997F77F539(1, "RE_TITLE");
		if (iParam0 && func_175(Global_112282))
		{
			unk_0xC5CEFC62F3637652();
		}
		return 1;
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_176()
{
	switch (func_177(&Global_31405, 0, 5, 0, unk_0x62D18D65FE22FF39()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96848.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_181(0))
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		unk_0x03903A362E41A74F(unk_0x638BDC79E655C1C2(), 0);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4A8177C3950CBBB7(8);
		}
		Global_42009 = iParam2;
		Global_41971 = *uParam0;
		Global_41972 = iParam4;
		Global_41970 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41970 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41970)
			{
				if (Global_41976[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41971 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_179(iParam2))
		{
			return 0;
		}
		if (Global_41970 == 8)
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		Global_41976[Global_41970 /*4*/] = Global_41973;
		Global_41976[Global_41970 /*4*/].f_1 = iParam1;
		Global_41976[Global_41970 /*4*/].f_2 = iParam2;
		Global_41976[Global_41970 /*4*/].f_3 = 0;
		Global_41970++;
		if (iParam4 != 0)
		{
			func_178(uParam0, iParam4);
		}
	}
	return 2;
}

void func_178(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41970 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41970)
	{
		if (Global_41976[iVar0 /*4*/] == *uParam0)
		{
			Global_41976[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_179(int iParam0)
{
	return func_180(iParam0, Global_42009);
}

int func_180(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_179(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 3)
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_183()
{
	if (!func_179(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (func_129(func_127()))
		{
			iVar5 = func_190();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar1 /*6*/], 2) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar1 /*6*/], 3))
				{
					func_185(iVar1, &Var0);
					fVar4 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_187(int iParam0)
{
	switch (iParam0)
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
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_189(iParam0) };
	if (unk_0xAB6A270F84A8781E(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_189(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_190()
{
	func_128();
	switch (Global_112293.f_2361.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_191()
{
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xC1D06696CC3E719B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_192()
{
	if (func_195() && !func_191())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_112011 > 0;
}

int func_194()
{
	if (Global_96292 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
{
	if ((Global_112282 == func_197() && unk_0x5E9AD12CB585F23D()) && Global_112283)
	{
		return 1;
	}
	return 0;
}

int func_197()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x471C98FD94C0A5FD(), 64);
	uVar1 = func_198(Var0);
	return uVar1;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x15173FB88ABC94F9(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_199()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xCBB53772CFBF62B8(unk_0x1146A9AE09CE2B14(), 1, 0);
	}
	func_298(25, iLocal_80);
	func_203();
	func_200();
	func_280();
}

void func_200()
{
	func_201();
}

int func_201()
{
	if (func_202(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_203()
{
	return 1;
}

void func_204(int iParam0)
{
	Global_112279 = iParam0;
}

void func_205()
{
	switch (iLocal_116)
	{
		case 0:
			if (!unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				unk_0x4261814A9A26E86F(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				unk_0x4261814A9A26E86F(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					if (func_182())
					{
						if (!unk_0x575B7C28D81C0B4D(iLocal_66))
						{
							if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
							{
								iLocal_66 = func_143(iLocal_61, 1, 0);
							}
							if (!func_196())
							{
								func_174(1);
							}
						}
					}
					if (func_173())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_172();
						iLocal_147 = unk_0xDFB7BFA6482FEE1E();
						unk_0x5E84945E26CAEF1F(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					unk_0xE668BF9946D414D8(iLocal_60, Local_121, 250f, -1, 0, 0);
					unk_0x504B26425DFF773C(iLocal_60, 1);
					wait(0);
					func_211();
				}
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (func_210())
				{
					iLocal_116 = 4;
				}
				if (func_159())
				{
					iLocal_116 = 9;
				}
				if (func_209())
				{
					iLocal_116 = 6;
				}
				if (func_208())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_196())
			{
				if (func_183())
				{
					func_280();
				}
			}
			break;
		
		case 2:
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0xCA70422943A4EC8D(iLocal_61, unk_0x7D2B9E6A64637269()) || unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_61, 65f))
							{
								iLocal_149 = unk_0xDFB7BFA6482FEE1E();
								unk_0x8ADA462BC5F42FD8(iLocal_61, unk_0x7D2B9E6A64637269(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								settimerb(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = unk_0xDFB7BFA6482FEE1E();
								unk_0x8ADA462BC5F42FD8(iLocal_61, unk_0x7D2B9E6A64637269(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								settimerb(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_210() || func_208())
			{
				iLocal_116 = 4;
			}
			if (func_159())
			{
				iLocal_116 = 9;
			}
			if (func_209())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (unk_0x419E13582192CFEA(iLocal_61))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0x9DA29013F33252A6(iLocal_61, unk_0x7D2B9E6A64637269(), 0, 16);
							bLocal_113 = true;
							if (unk_0x419E13582192CFEA(iLocal_60))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_60))
								{
									unk_0xE668BF9946D414D8(iLocal_60, Local_121, 250f, -1, 0, 0);
									unk_0x504B26425DFF773C(iLocal_60, 1);
									wait(0);
								}
								if (!unk_0xECEC7528A52B4EE8(iLocal_60))
								{
								}
								if (unk_0x575B7C28D81C0B4D(iLocal_63))
								{
									unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_210())
				{
					iLocal_116 = 4;
				}
				if (func_159())
				{
					iLocal_116 = 9;
				}
				if (func_209())
				{
					iLocal_116 = 6;
				}
				if (func_207())
				{
					iLocal_116 = 9;
				}
				if (func_208())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (unk_0xECEC7528A52B4EE8(iLocal_61) || func_38(unk_0x7D2B9E6A64637269(), iLocal_61, 1) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
		
		case 4:
			if (unk_0x419E13582192CFEA(iLocal_60))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					if (!unk_0xA6E8FBD68548675F(iLocal_60, unk_0x7D2B9E6A64637269(), 1))
					{
						unk_0xCA089CD1A17D76DF(iLocal_60);
						if (!unk_0xECEC7528A52B4EE8(iLocal_61))
						{
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0xE668BF9946D414D8(0, unk_0xD6E677FAD7521410(iLocal_61, 0), 150f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							unk_0x504B26425DFF773C(iLocal_60, 1);
						}
						iLocal_122 = 1;
					}
					else
					{
						unk_0xCA089CD1A17D76DF(iLocal_60);
						unk_0x1DC2BF231DE6A016(iLocal_60, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
						unk_0x504B26425DFF773C(iLocal_60, 1);
						if (unk_0x575B7C28D81C0B4D(iLocal_63))
						{
							unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
						}
					}
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					unk_0xCA089CD1A17D76DF(iLocal_61);
					unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
					unk_0x504B26425DFF773C(iLocal_61, 1);
					if (unk_0x575B7C28D81C0B4D(iLocal_64))
					{
						unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
					}
				}
			}
			if (unk_0x6C2F471E0CF8D4CF())
			{
				func_110();
			}
			wait(0);
			if (!iLocal_122)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_280();
			}
			break;
		
		case 5:
			if (timerb() > 250)
			{
				if (unk_0x419E13582192CFEA(iLocal_61))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_61))
					{
						unk_0xA415F00D0E0DFBCE(iLocal_61, 17, 1);
						unk_0xD991F7672CE8EAD3(iLocal_61, 156, 1);
						unk_0x5C679902079A7E80(&uLocal_103);
						unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_103);
						unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
						unk_0x8D5B447F21217223(&uLocal_103);
						unk_0x504B26425DFF773C(iLocal_61, 1);
						wait(0);
						unk_0x46EDFC827DC67D89(iLocal_61, 0, 1);
						unk_0x0F3BD19FF11738D3(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_60))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_60))
					{
						if (!unk_0xA6E8FBD68548675F(iLocal_60, unk_0x7D2B9E6A64637269(), 1))
						{
							unk_0xCA089CD1A17D76DF(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					wait(0);
					func_280();
				}
			}
			break;
		
		case 6:
			if (timera() > 500)
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x419E13582192CFEA(iLocal_60))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_60))
						{
							unk_0xCA089CD1A17D76DF(iLocal_60);
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 10000, 0, 2);
							unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							unk_0x504B26425DFF773C(iLocal_60, 1);
							unk_0x0F3BD19FF11738D3(&iLocal_60);
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_61))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xCA089CD1A17D76DF(iLocal_61);
							unk_0x5C679902079A7E80(&uLocal_103);
							unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 10000, 0, 2);
							unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
							unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_103);
							unk_0x8A1AC8EBC73850C8(iLocal_61, uLocal_103);
							unk_0x8D5B447F21217223(&uLocal_103);
							unk_0x504B26425DFF773C(iLocal_61, 1);
						}
					}
				}
				wait(0);
				func_280();
			}
			break;
		
		case 7:
			settimera(0);
			iLocal_116++;
			break;
		
		case 8:
			if (timera() > 200)
			{
				func_211();
			}
			break;
		
		case 9:
			if (unk_0x419E13582192CFEA(iLocal_61))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_61))
				{
					unk_0xD991F7672CE8EAD3(iLocal_61, 156, 1);
					unk_0x99EBE9AD8C344773(iLocal_61, 50f, 0);
					if (unk_0x6C2F471E0CF8D4CF())
					{
						func_110();
					}
					wait(0);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_60))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_60))
				{
					unk_0xCA089CD1A17D76DF(iLocal_60);
					unk_0x37DE87D06B5C195D(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = unk_0xDFB7BFA6482FEE1E();
	if (iLocal_150 && !bLocal_113)
	{
		if (unk_0x419E13582192CFEA(iLocal_61) && unk_0x419E13582192CFEA(iLocal_61))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60) && !unk_0xECEC7528A52B4EE8(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 3f, 3f, 35f, 0, 1, 0)) && unk_0xB4E725A8915BDF60(iLocal_61)) && !func_167())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						unk_0xD991F7672CE8EAD3(iLocal_61, 156, 1);
						unk_0x9A7A47D4742E250E(iLocal_61, unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f), 0);
						unk_0xCA089CD1A17D76DF(iLocal_60);
						unk_0xC595907BB71C921D(iLocal_60, 99, 0);
						unk_0xE668BF9946D414D8(iLocal_61, Local_121, 250f, -1, 0, 0);
						unk_0x504B26425DFF773C(iLocal_61, 1);
						func_280();
					}
				}
			}
		}
	}
}

void func_206()
{
	Global_19991 = 0;
	func_56();
}

int func_207()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60) && !unk_0xECEC7528A52B4EE8(iLocal_61))
	{
		if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_61) || unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_60))
		{
			return 1;
		}
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_61, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_208()
{
	if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_60) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_60))
			{
				if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_61, 0))
	{
		if (func_159())
		{
			if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0x895779B17E5AA5FE(iLocal_60, unk_0x7D2B9E6A64637269(), 17))
			{
				if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6) && !unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_61))
					{
						if (!unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_61))
						{
							if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_60) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_60))
							{
								settimerb(0);
								return 1;
							}
						}
					}
					else if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_60) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_60))
					{
						settimerb(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_210()
{
	if (!unk_0xE50EB54E0F21BED0(iLocal_60, 0))
	{
		if (unk_0x3E72EB0926A107F9(unk_0x885F3A431ECE75E3(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_211()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_60))
	{
		if (!unk_0x6B9E71121F5B8154(iLocal_60))
		{
			if (func_196())
			{
				if (unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 7 || unk_0x4E8DA737B686529A(iLocal_60, 474215631) == 7)
				{
					if (unk_0x6C2F471E0CF8D4CF())
					{
						func_110();
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_61))
					{
						if (!unk_0x11DBA82F76F3C4C2(iLocal_60))
						{
							unk_0x1DC2BF231DE6A016(iLocal_60, iLocal_61, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!unk_0x11DBA82F76F3C4C2(iLocal_60))
						{
							unk_0xE668BF9946D414D8(iLocal_60, Local_104, 150f, -1, 0, 0);
						}
					}
					unk_0x504B26425DFF773C(iLocal_60, 1);
					wait(0);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					wait(0);
					if (iLocal_152 > 0)
					{
						unk_0xEC7D41CF790FC6FB(unk_0x7D2B9E6A64637269(), (iLocal_152 / 100) * 90);
						func_64(func_127(), 1, iLocal_152);
						wait(0);
						func_212(func_127(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_204(3);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_65(func_98(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD885BEFA31A18D47(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xAC4FD27671081628(iVar1, iVar0, 1);
	}
}

int func_213()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	func_225();
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_349, cLocal_333);
	func_224(&uLocal_349, cLocal_321);
	func_222(&uLocal_349, iLocal_75);
	func_222(&uLocal_349, iLocal_76);
	func_222(&uLocal_349, iLocal_77);
	func_224(&uLocal_349, cLocal_320);
	func_224(&uLocal_349, cLocal_319);
	func_224(&uLocal_349, cLocal_334);
	func_224(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_218(&uLocal_349))
	{
		func_215();
		return 1;
	}
	return 0;
}

void func_215()
{
	iLocal_60 = unk_0x0FDCFECB2EF2BC1C(26, iLocal_75, Local_67, fLocal_69, 1, 1);
	unk_0xBE91B077ADADE97F(iLocal_60, 1);
	unk_0x1D7A4E9E23D306D6(iLocal_60, 0);
	unk_0x82D2BB48A39F1E88(iLocal_60, 8, 1);
	unk_0x82D2BB48A39F1E88(iLocal_60, 128, 1);
	unk_0x82D2BB48A39F1E88(iLocal_60, 512, 1);
	unk_0x05D0B763CEEA9ABD(iLocal_60, 1);
	unk_0x7F11626F2B7E7356(iLocal_60);
	unk_0xEC7D41CF790FC6FB(iLocal_60, 0);
	unk_0x1B0723EFE914C031(iLocal_60, 1);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x4170FE884DF7426D(iLocal_60, 0, 1, 0, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 3, 0, 3, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		unk_0x4170FE884DF7426D(iLocal_60, 0, 1, 0, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 2, 1, 0, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 3, 1, 0, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 4, 1, 0, 0);
		unk_0x4170FE884DF7426D(iLocal_60, 8, 0, 0, 0);
	}
	unk_0xF479CA7199C54C8F("theAssailant", &iLocal_78);
	iLocal_61 = unk_0x0FDCFECB2EF2BC1C(26, iLocal_76, Local_68, fLocal_72, 1, 1);
	unk_0x46EDFC827DC67D89(iLocal_61, 1, 1);
	unk_0xBE91B077ADADE97F(iLocal_61, 1);
	unk_0xEA44C65D5434D223(iLocal_61, 1, 0);
	unk_0xD82D50E4AC0D46B9(iLocal_61, joaat("weapon_pistol"), -1, 1, 1);
	unk_0xA415F00D0E0DFBCE(iLocal_61, 13, 0);
	unk_0xA415F00D0E0DFBCE(iLocal_61, 17, 0);
	unk_0xB8FD45B9686D7177(iLocal_61, 1);
	unk_0x7B28A83A0D3DD0F9(iLocal_61, 42, 1);
	unk_0x7B28A83A0D3DD0F9(iLocal_61, 137, 1);
	unk_0x82D2BB48A39F1E88(iLocal_61, 128, 1);
	unk_0x82D2BB48A39F1E88(iLocal_61, 2, 0);
	unk_0x2271ED1E65FB75EE(iLocal_61, iLocal_78);
	unk_0x05D0B763CEEA9ABD(iLocal_61, 1);
	if (!unk_0x4030103C8B148AFC(sLocal_102))
	{
		unk_0x90517F1BF9113FB8(iLocal_60, sLocal_102);
	}
	unk_0x90517F1BF9113FB8(iLocal_61, sLocal_101);
	unk_0x78B2DF314748056B(2, 45677184, iLocal_78);
	unk_0x78B2DF314748056B(2, 1191392768, iLocal_78);
	unk_0x78B2DF314748056B(2, iLocal_78, 45677184);
	unk_0x78B2DF314748056B(2, iLocal_78, 1191392768);
	unk_0x78B2DF314748056B(5, iLocal_78, 1862763509);
	switch (func_127())
	{
		case 0:
			func_217(&uLocal_154, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_217(&uLocal_154, 0, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_217(&uLocal_154, 0, unk_0x7D2B9E6A64637269(), "TREVOR", 0, 1);
			break;
	}
	func_217(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_217(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		unk_0x82D2BB48A39F1E88(iLocal_61, 1, 0);
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		func_216();
	}
	if (iLocal_80 == 3)
	{
		Local_105 = { -325.4189f, -828.8596f, 31.1f };
		Local_106 = { 0f, 0f, 180f };
		uLocal_107 = unk_0xD955F1CC0BCABC78(Local_105, Local_106, 2);
		unk_0xAD844C8843FC405C(iLocal_61, uLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_80 == 4)
	{
		unk_0xA48693249537873E(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_216()
{
	struct<3> Var0;
	
	unk_0xDB8D6815E13996A9(iLocal_61, unk_0xBF480D363C51CDF8(cLocal_319, sLocal_325, Local_331, Local_332, 0, 2), 0, 0, 1);
	Var0 = { unk_0x04F690ADA8C71424(cLocal_319, sLocal_325, Local_331, Local_332, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0xCD37A28258D70638(iLocal_61, Var0.f_2);
	unk_0xDB8D6815E13996A9(iLocal_60, unk_0xBF480D363C51CDF8(cLocal_319, sLocal_326, Local_331, Local_332, 0, 2), 0, 0, 1);
	Var0 = { unk_0x04F690ADA8C71424(cLocal_319, sLocal_326, Local_331, Local_332, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0xCD37A28258D70638(iLocal_60, Var0.f_2);
	unk_0x4261814A9A26E86F(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(uParam2))
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

int func_218(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_219(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_219(var uParam0)
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_220(int iParam0, char[4] cParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(iParam0, 30))
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, 29))
		{
			switch (func_221(iParam0))
			{
				case 0:
					return unk_0xA9C0BBFB9CBB66F1(uParam2);
					break;
				
				case 1:
					return unk_0x0EC2B29D4172D225(uParam1);
					break;
				
				case 2:
					return unk_0x472AC3055A188881(cParam1);
					break;
				
				case 3:
					return unk_0xAD9D75DD073BF477(cParam1);
					break;
				
				case 4:
					return unk_0x9CF7186A344D26A9(uParam2, cParam1);
					break;
				
				case 5:
					return unk_0x9745FAC5B3E4C8B8(cParam1);
					break;
				
				case 6:
					return unk_0x952AB441FA24BF16(cParam1, unk_0x234B68AC2E35ED5A(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xD3419C924F3692F7(uParam2);
					break;
				
				case 8:
					return unk_0x080D38ACEC5DC1A2(uParam2);
					break;
				
				case 9:
					return unk_0xB4C12EFC62A8536A();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_222(var uParam0, int iParam1)
{
	func_223(uParam0, 0, iParam1, "NULL", 0);
}

void func_223(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xDA654EB115F9FF7D(sParam3, "NULL"))
					{
						if (unk_0xDA654EB115F9FF7D(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x191DDA30577F440A(uParam0[iVar0 /*18*/], iParam1);
			unk_0x191DDA30577F440A(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_224(var uParam0, char* sParam1)
{
	func_223(uParam0, 1, -1, sParam1, 0);
}

void func_225()
{
	func_278();
	unk_0x191DDA30577F440A(&uLocal_120, 3);
	unk_0x191DDA30577F440A(&uLocal_120, 4);
	unk_0x191DDA30577F440A(&uLocal_120, 1);
	if (iLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_227();
		iLocal_152 = 200;
		iLocal_46 = 2;
		Local_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		Local_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		Local_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		Local_331 = { Local_67 };
		Local_332 = { 0f, 0f, fLocal_69 };
		Local_140 = { -103.8951f, -1593.239f, 30.49198f };
		Local_141 = { -89.29615f, -1575.444f, 32.30938f };
		Local_142 = { -152.0367f, -1654.379f, 31.73599f };
		Local_143 = { -169.8183f, -1669.556f, 33.94173f };
		Local_144 = { -152.0367f, -1654.379f, 31.73599f };
		Local_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		Local_74 = { -151.0793f, -1650.322f, 31.6504f };
		Local_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_127())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		Local_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		Local_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		Local_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		Local_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_127())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_226();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (iLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			Local_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			Local_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			Local_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			Local_74 = { -322.3941f, -835.7213f, 30.6001f };
			Local_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 4)
		{
			func_226();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			Local_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			Local_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			Local_331 = { Local_67 };
			Local_332 = { 0f, 0f, fLocal_69 };
			Local_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			Local_74 = { 42.5323f, -990.353f, 28.248f };
			Local_140 = { 38.15186f, -1001.485f, 28.42276f };
			Local_141 = { 40.13669f, -995.2711f, 30.37197f };
			Local_142 = { 37.21758f, -1040.354f, 28.41506f };
			Local_143 = { 19.91492f, -1036.814f, 30.28045f };
			Local_144 = { 28.4511f, -1035.718f, 28.3329f };
			Local_145 = { 38.6536f, -1001.073f, 28.407f };
			Local_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_226()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0xB36B8558948EA7A8(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_227()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0xB36B8558948EA7A8(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_228(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xDFB7BFA6482FEE1E();
	}
	if (unk_0x575B7C28D81C0B4D(uParam0))
	{
		iVar0 = (unk_0xDFB7BFA6482FEE1E() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x5D8B0ADD9EFBD7B9(iParam0) != 255)
				{
					unk_0x97A41BF3F05FC07D(iParam0, 255);
				}
			}
			else if (unk_0x5D8B0ADD9EFBD7B9(iParam0) != 0)
			{
				unk_0x97A41BF3F05FC07D(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x5D8B0ADD9EFBD7B9(iParam0) != 255)
			{
				unk_0x97A41BF3F05FC07D(iParam0, 255);
			}
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x2053F6ACFD4ED4BC() >= (uParam0->f_272 + uParam0->f_273) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2)) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_230(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x2053F6ACFD4ED4BC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_230(var uParam0)
{
	func_231(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_231(var uParam0, char[4] cParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 30))
	{
		switch (func_221(*uParam0))
		{
			case 0:
				unk_0x16E516CA9C88FF48(uParam2);
				break;
			
			case 1:
				unk_0x068BDE31F7D112BB(uParam1);
				break;
			
			case 2:
				unk_0x5590FBCD51709DFE(uParam1);
				break;
			
			case 3:
				unk_0xA08F3C300F9E3468(uParam1, unk_0x234B68AC2E35ED5A(*uParam0, 28));
				break;
			
			case 4:
				unk_0x498685EB9132AF88(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x1594E542FF3D23EF(uParam1);
				break;
			
			case 6:
				unk_0x952AB441FA24BF16(uParam1, unk_0x234B68AC2E35ED5A(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x5B99C7B716657782(uParam2);
				break;
			
			case 8:
				unk_0xBB3CDAB62C8773C8(cParam1, uParam2);
				break;
			
			case 9:
				unk_0x7C0019321F1FC821();
				break;
			
			default:
				break;
		}
		unk_0x191DDA30577F440A(uParam0, 29);
	}
}

void func_232(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_234(iParam0);
	unk_0xA87835FA95542DD6(0);
	unk_0xD72603E43F4527D1(1);
	Global_112279 = 0;
	func_233();
}

void func_233()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x16C6E55F8C91ED24(unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)), 1);
		}
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
	}
}

void func_234(int iParam0)
{
	Global_112282 = iParam0;
}

int func_235(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_150875)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_197();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_275())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_191())
			{
				return 0;
			}
		}
		if (!Global_112293.f_9083)
		{
			return 0;
		}
		if (func_202(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_274())
		{
			return 0;
		}
		if (Global_112282 != -1)
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_184(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_273(iParam1))
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_272(func_127()) == 4 || func_272(func_127()) == 5)
			{
				return 0;
			}
		}
		if (func_129(func_127()))
		{
			if (!func_271(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_270(Global_112293.f_24993.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xDFB7BFA6482FEE1E() - Global_112284) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_269())
		{
			return 0;
		}
		if (unk_0x16371AB7527A7757())
		{
			return 0;
		}
		if (unk_0x5E9AD12CB585F23D())
		{
			return 0;
		}
		if (!func_260(4))
		{
			return 0;
		}
		if (!func_179(5))
		{
			return 0;
		}
		if (func_259(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xE75EE67F14EAAE37(unk_0xB71084333B418824(unk_0x7D2B9E6A64637269())))
		{
			if ((unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(377.153f, -717.567f, 10.0536f) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(320.9934f, 265.2515f, 82.1221f)) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_259(0, 0))
		{
			return 0;
		}
		if (Global_31492)
		{
			return 0;
		}
		if (func_273(30) && !func_259(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_129(func_127()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112293.f_2361.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112293.f_2361.f_539.f_2296[iVar2];
				if (func_258(iVar4))
				{
					if (func_236(iVar2))
					{
						if (!func_28(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var3) < (210f * 210f))
							{
								if (func_127() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112293.f_2361.f_539.f_2296[iParam0];
	return func_237(iVar0);
}

int func_237(int iParam0)
{
	return func_238(iParam0, 1);
}

int func_238(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_258(iParam0))
	{
		return 0;
	}
	func_239(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_240(func_251(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_250(iParam0, iParam1))
	{
		iVar0 = func_249(iParam1);
		iVar1 = func_247(iParam0);
		iVar2 = (func_247(iParam0) - func_247(iParam1));
		iVar3 = (func_249(iParam0) - func_249(iParam1));
		iVar4 = (func_246(iParam0) - func_246(iParam1));
		iVar5 = (func_245(iParam0) - func_245(iParam1));
		iVar6 = (func_244(iParam0) - func_244(iParam1));
		iVar7 = (func_243(iParam0) - func_243(iParam1));
	}
	else
	{
		iVar0 = func_249(iParam0);
		iVar1 = func_247(iParam1);
		iVar2 = (func_247(iParam1) - func_247(iParam0));
		iVar3 = (func_249(iParam1) - func_249(iParam0));
		iVar4 = (func_246(iParam1) - func_246(iParam0));
		iVar5 = (func_245(iParam1) - func_245(iParam0));
		iVar6 = (func_244(iParam1) - func_244(iParam0));
		iVar7 = (func_243(iParam1) - func_243(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_242(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_241(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_241(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_242(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_243(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_244(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_245(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_246(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_247(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_248(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_248(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_249(int iParam0)
{
	return iParam0 & 15;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_258(iParam1) || !func_258(iParam0))
	{
		return 1;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	var uVar0;
	
	func_257(&uVar0, unk_0x1947D86A2BB06F8D());
	func_256(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_255(&uVar0, unk_0xCA86FAB7FADC8353());
	func_254(&uVar0, unk_0x9E6858A319A1F6F2());
	func_253(&uVar0, unk_0xA91C851005050418());
	func_252(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_254(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249(*uParam0);
	iVar1 = func_247(*uParam0);
	if (iParam1 < 1 || iParam1 > func_242(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_244(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_245(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_247(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_249(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_246(iParam0);
	if (iVar5 < 1 || iVar5 > func_242(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = func_127();
				if (!func_129(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_268()) || Global_111340) || Global_31348) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_264()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1) || func_268()) || Global_31348) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_268()) || Global_111340) || Global_31348) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5) || Global_42556 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_268()) || Global_111340) || Global_31348) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_268() || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || func_55(8, -1)) || func_263()) || func_262()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_266()) || func_265()) || func_262()) || func_261())
						{
							return 0;
						}
						if ((unk_0xF471787D45ADC2C1() && unk_0xC50751593572DDAE() != 3) && unk_0xE544790FBAA57D4F() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
						{
							if ((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_268()) || Global_31348) || func_267()) || func_55(8, -1)) || func_265()) || func_264()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || func_268()) || func_265()) || Global_111340) || Global_31348) || func_267()) || Global_43182) || func_55(8, -1)) || func_264()) || func_262()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0)) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_268()) || Global_111340) || Global_31348) || func_267()) || func_55(8, -1)) || func_264()) || func_262()) || func_266()) || func_265()) || func_263())
						{
							return 0;
						}
						break;
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
	return 1;
}

var func_261()
{
	return Global_99409.f_1;
}

int func_262()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

int func_263()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_264()
{
	if (Global_77508)
	{
		return 1;
	}
	else if (Global_62092 && !Global_62098)
	{
		return 1;
	}
	return 0;
}

bool func_265()
{
	return Global_99422.f_364 > 0;
}

bool func_266()
{
	return Global_99422.f_363 > 0;
}

var func_267()
{
	return Global_1312902;
}

int func_268()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_269()
{
	func_52();
	if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_250(func_251(), iParam0);
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_127();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_272(int iParam0)
{
	if (!func_129(iParam0))
	{
		return 7;
	}
	return Global_112293.f_7686.f_919[iParam0];
}

bool func_273(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_275())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_1, iVar0);
	}
	return bVar1;
}

int func_274()
{
	var uVar0;
	
	if (Global_31496)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(uVar0, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x27FC1B0077581B37(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_275()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x191DDA30577F440A(&iVar0, 2);
				unk_0x191DDA30577F440A(&iVar0, 4);
				unk_0x191DDA30577F440A(&iVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_276(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iParam0 /*6*/], 3);
}

bool func_277(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iParam0 /*6*/], 0);
}

void func_278()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (vdist(Local_104, Local_81) < 20f)
		{
			iLocal_80 = 1;
			iLocal_45 = 2;
		}
		if (vdist(Local_104, Local_82) < 20f)
		{
			iLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (vdist(Local_104, Local_83) < 20f)
		{
			iLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (vdist(Local_104, Local_84) < 20f)
		{
			iLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_280()
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			unk_0x824F744352C8BC82(iLocal_75);
			unk_0x824F744352C8BC82(iLocal_76);
			unk_0x824F744352C8BC82(iLocal_77);
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_61))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x1DC2BF231DE6A016(iLocal_61, unk_0x7D2B9E6A64637269(), 150f, -1, 0, 0);
			}
			unk_0x504B26425DFF773C(iLocal_61, 1);
			if (!bLocal_58)
			{
				unk_0xEC7D41CF790FC6FB(iLocal_61, iLocal_152);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_60))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_60))
			{
				unk_0x1D7A4E9E23D306D6(iLocal_60, 1);
				if (unk_0x4E8DA737B686529A(iLocal_60, -1146898486) == 7 && unk_0x4E8DA737B686529A(iLocal_60, 242628503) == 7)
				{
					unk_0x5C679902079A7E80(&uLocal_103);
					if (unk_0xCD9DF646977DACD7(iLocal_60))
					{
						unk_0x24B736A5B7EBE1EC(0, 0);
					}
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 9000, 0, 2);
					unk_0xE668BF9946D414D8(0, Local_104, 250f, -1, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_103);
					unk_0x8A1AC8EBC73850C8(iLocal_60, uLocal_103);
					unk_0x8D5B447F21217223(&uLocal_103);
					unk_0x504B26425DFF773C(iLocal_60, 1);
					if (!iLocal_128 && !iLocal_122)
					{
						if (unk_0x6C2F471E0CF8D4CF())
						{
							func_110();
						}
					}
				}
			}
		}
		wait(0);
		if (unk_0x575B7C28D81C0B4D(iLocal_64))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_64);
		}
		if (unk_0x575B7C28D81C0B4D(iLocal_63))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_63);
		}
		if (unk_0x419E13582192CFEA(iLocal_62))
		{
			unk_0x39E572BDDBA714A2(&iLocal_62);
		}
		if (unk_0x575B7C28D81C0B4D(iLocal_65))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (unk_0xA66693527106D3DF(iLocal_335))
		{
			unk_0xF5A3E4A97D6F6DD4(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_196())
	{
		unk_0x817486F19ADBF54A(1);
		unk_0x5E84945E26CAEF1F(1f);
	}
	func_37(&uLocal_336, 0, 0);
	func_114(0, 1, 1, 0, 0, 0, 0);
	func_286(-1);
	func_281(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		unk_0x3E5BA73CEA34D768(iLocal_117);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_281(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_282(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_282(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_283(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			func_284(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_284(var uParam0)
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_285(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(iParam0, 30))
	{
		switch (func_221(iParam0))
		{
			case 0:
				unk_0x824F744352C8BC82(uParam2);
				break;
			
			case 1:
				unk_0xF9135F131C423364(uParam1);
				break;
			
			case 2:
				unk_0x88718F88EB6B8FD5(uParam1);
				break;
			
			case 3:
				unk_0xB5F867E143F78583(uParam1);
				break;
			
			case 4:
				unk_0x7B6B41ECBE4B733F(iParam2, uParam1);
				break;
			
			case 5:
				unk_0xD0AC51DF5D1C2659(uParam1);
				break;
			
			case 6:
				unk_0xE76ABB7DC1AD1626();
				break;
			
			case 7:
				unk_0x41BE3F722FC386CD(iParam2);
				break;
			
			case 8:
				unk_0xE498E37B41AEA1DF(iParam2, unk_0x234B68AC2E35ED5A(iParam0, 26));
				break;
			
			case 9:
				unk_0x4D2B6680250EFCC8();
				break;
			
			default:
				break;
		}
	}
}

void func_286(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_196())
	{
		func_291(iParam0);
		unk_0xB4D080997F77F539(0, 0);
		Global_112284 = unk_0xDFB7BFA6482FEE1E();
		func_290(30000);
		StringCopy(&cVar0, func_289(Global_112282, 1), 64);
		if (func_288(Global_112282) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112281, 64);
		}
		unk_0x551AA2E1D1F02037(&cVar0, Global_112279, (unk_0xDFB7BFA6482FEE1E() - Global_112280), 0);
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112289, 0) && Global_112293.f_24993.f_2 < 3)
	{
		unk_0xC664C0067EEAB8D1(&Global_112289, 0);
	}
	func_287(&Global_31405);
	Global_112283 = 0;
	func_234(-1);
}

void func_287(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41971)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41970 = 0;
	Global_41972 = 0;
	Global_42009 = 15;
	Global_62095 = 0;
	Global_62096 = 0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_289(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_290(int iParam0)
{
	Global_42560 = (unk_0xDFB7BFA6482FEE1E() + iParam0);
}

void func_291(int iParam0)
{
	func_292(iParam0, 0, func_297(iParam0));
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_251();
	func_295(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_294(iParam0, &uVar0);
	Var1 = { func_293(&uVar0) };
}

struct<16> func_293(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_249(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_247(*uParam0), 64);
	return Var0;
}

void func_294(int iParam0, var uParam1)
{
	Global_112293.f_24993.f_43[iParam0] = *uParam1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_249(*uParam0);
	iVar2 = func_246(*uParam0);
	iVar3 = func_245(*uParam0);
	iVar4 = func_244(*uParam0);
	iVar5 = func_243(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_242(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_242(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_296(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_257(uParam0, iParam1);
	func_256(uParam0, iParam2);
	func_255(uParam0, iParam3);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_252(uParam0, iParam6);
}

int func_297(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_288(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_303(51);
		}
		if (func_175(iParam0))
		{
			Global_112293.f_24993.f_2 = 3;
		}
		if (func_302(iParam0, iParam1) != 322)
		{
			func_299(func_302(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_112281 = iParam1;
		if (Global_112279 == 0)
		{
			if (((Global_112282 == 1 || Global_112282 == 5) || Global_112282 == 11) || Global_112282 == 25)
			{
				func_204(2);
			}
			else if ((Global_112282 == 26 || Global_112282 == 8) || Global_112282 == 17)
			{
				func_204(7);
			}
			else
			{
				func_204(1);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_74((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = uParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_300();
	}
}

void func_300()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					unk_0x94F7E80BDFF33F26(joaat("num_rndevents_completed"), Global_112016, 0);
					unk_0x191DDA30577F440A(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	unk_0xAC4FD27671081628(joaat("num_missions_completed"), Global_112029, 1);
	unk_0xAC4FD27671081628(joaat("num_missions_available"), Global_112012, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_completed"), Global_112030, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_available"), Global_112013, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_completed"), Global_112031, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_available"), Global_112014, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_completed"), Global_112032, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_available"), Global_112015, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_available"), Global_112019, 1);
	unk_0xAC4FD27671081628(joaat("num_misc_completed"), (Global_112035 + Global_112034), 1);
	unk_0xAC4FD27671081628(joaat("num_misc_available"), (Global_112018 + Global_112017), 1);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	unk_0xBAE77BA3A38F7944(joaat("total_progress_made"), Global_112293.f_10192.f_3853, 1);
	unk_0xAC4FD27671081628(joaat("percent_story_missions"), Global_112036, 1);
	unk_0xAC4FD27671081628(joaat("percent_ambient_missions"), Global_112037, 1);
	unk_0xAC4FD27671081628(joaat("percent_oddjobs"), Global_112038, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_112293.f_10192.f_3853))
	{
		func_95(13, floor(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_301() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_201();
				}
			}
		}
	}
}

int func_301()
{
	return Global_31345;
}

int func_302(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_20408.f_150[iVar1]), iVar0);
	}
}

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xDA654EB115F9FF7D(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((unk_0xDFB7BFA6482FEE1E() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_306();
	}
}

void func_306()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20408.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_308(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_112293.f_24993.f_8[iParam0]), iParam1);
}

