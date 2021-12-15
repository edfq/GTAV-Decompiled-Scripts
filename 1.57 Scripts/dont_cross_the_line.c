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
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	float fLocal_100 = 0f;
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
	struct<6> Local_143[16];
	var uLocal_144[4] = { 0, 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	struct<16> Local_150[4];
	struct<78> Local_151 = { 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_152[4];
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
	var uLocal_188 = 4;
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
	var uLocal_199 = 2;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = -2147483647;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 60;
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
	var uLocal_279 = 2;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = -2147483647;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 60;
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
	var uLocal_359 = 2;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = -2147483647;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 60;
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
	var uLocal_439 = 2;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = -2147483647;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 60;
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
	struct<21> Local_509 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_98 = -1;
	fLocal_100 = 0.5f;
	iLocal_145 = -1;
	iLocal_147 = -1;
	ScriptParam_509 = 172;
	if (unk_0x02BFF15CAA701972())
	{
		func_221(ScriptParam_509);
	}
	func_220(1);
	while (true)
	{
		func_219();
		if (func_209())
		{
			func_208();
		}
		if (unk_0x02BFF15CAA701972())
		{
			func_1(&uLocal_153);
		}
		else
		{
			func_208();
		}
	}
}

void func_1(var uParam0)
{
	if (Local_151 < 11)
	{
		func_187(uParam0);
	}
	switch (*uParam0)
	{
		case 0:
			if (Local_151 > 3 && !Local_151 == 9)
			{
				func_186(uParam0, 11);
				return;
			}
			func_184(uParam0);
			break;
		
		case 1:
			func_181(uParam0);
			break;
		
		case 2:
			func_177(uParam0);
			break;
		
		case 3:
			func_173(uParam0);
			break;
		
		case 4:
			func_171(uParam0);
			break;
		
		case 5:
			func_169(uParam0);
			break;
		
		case 6:
			func_165(uParam0);
			break;
		
		case 7:
			func_128(uParam0);
			break;
		
		case 8:
			func_86(uParam0);
			break;
		
		case 9:
			func_62(uParam0);
			break;
		
		case 10:
			func_53(uParam0);
			break;
		
		case 11:
			func_29(uParam0);
			break;
	}
	switch (Local_151)
	{
		case 0:
			func_28(uParam0);
			break;
		
		case 1:
			func_27(uParam0);
			break;
		
		case 2:
			func_26(uParam0);
			break;
		
		case 3:
			func_25(uParam0);
			break;
		
		case 4:
			func_23(uParam0);
			break;
		
		case 5:
			func_22(uParam0);
			break;
		
		case 6:
			func_18(uParam0);
			break;
		
		case 7:
			func_17(uParam0);
			break;
		
		case 8:
			func_13(uParam0);
			break;
		
		case 9:
			func_4(uParam0);
			break;
		
		case 10:
			break;
		
		case 11:
			break;
	}
	func_2(uParam0);
}

void func_2(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 5))
	{
		unk_0xBD35EB504610C23C();
	}
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 5);
	if (((*uParam0 > 1 && *uParam0 < 11) && unk_0xDAE4BC89A198A6AF(uParam0->f_34)) && !unk_0xA300BD5F71A8C704())
	{
		unk_0x44EF5678D6916481(uParam0->f_34, 255, 255, 255, 255, 0);
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 17))
	{
		func_3(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 17);
	}
}

void func_3(var uParam0)
{
	unk_0xDDD5C8D7152E128F("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0);
}

void func_4(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x443E2CA72E118E64())
	{
		bVar0 = true;
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar4)) && Local_152[iVar4 /*2*/] > -1)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_152[iVar4 /*2*/].f_1, 6))
				{
					bVar2 = true;
				}
				if (unk_0x234B68AC2E35ED5A(Local_152[iVar4 /*2*/].f_1, 2))
				{
					bVar1 = true;
				}
				if (!unk_0x234B68AC2E35ED5A(Local_152[iVar4 /*2*/].f_1, 4))
				{
					bVar0 = false;
				}
				if (unk_0x234B68AC2E35ED5A(Local_152[iVar4 /*2*/].f_1, 3))
				{
					iVar3++;
				}
			}
			else if (Local_151.f_7[iVar4] != 0)
			{
				Local_151.f_7[iVar4] = 0;
			}
			iVar4++;
		}
		if ((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_28), 0, 0);
		}
		else
		{
			if ((bVar2 || bVar1) || func_11(uParam0))
			{
				func_9(&(uParam0->f_28));
			}
			if (((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1)
			{
				if (bVar0)
				{
					func_7(uParam0, 10);
					return;
				}
				else if (!bVar1)
				{
					Local_151.f_77 = 0;
					func_7(uParam0, 4);
					Local_151.f_1 = -1;
					return;
				}
			}
		}
		if (!func_12(&(uParam0->f_26)) && !bVar2)
		{
			func_10(&(uParam0->f_26), 0, 0);
		}
		else
		{
			if (bVar2)
			{
				func_9(&(uParam0->f_26));
				return;
			}
			if (func_8(&(uParam0->f_26), 10000, 0))
			{
				if (iVar3 > 1)
				{
					func_6(0);
					func_5(0, 0);
					Local_151.f_77 = 0;
					func_7(uParam0, 4);
				}
				else
				{
					func_7(uParam0, 10);
				}
			}
		}
	}
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3, 0))
		{
			unk_0x191DDA30577F440A(&Global_1669327, 7);
		}
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1669327, 4))
			{
				unk_0xC664C0067EEAB8D1(&Global_1669327, 4);
			}
			if (unk_0x234B68AC2E35ED5A(Global_1669327, 0))
			{
				unk_0x191DDA30577F440A(&Global_1669327, 1);
				unk_0xC664C0067EEAB8D1(&Global_1669327, 0);
			}
		}
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 0);
	}
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 1);
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	Local_151 = iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 6) && (*uParam0 != 9 || *uParam0 != 3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13(var uParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x443E2CA72E118E64())
	{
		if (!func_12(&(uParam0->f_22)))
		{
			func_10(&(uParam0->f_22), 0, 0);
			if (Local_151.f_1 != -1)
			{
				Local_151.f_7[Local_151.f_1]++;
			}
			iVar0 = 0;
			while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
			{
				if (!unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
				{
					Local_151.f_7[iVar0] = 0;
				}
				iVar0++;
			}
		}
		else if (func_8(&(uParam0->f_22), 3000, 0))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
			{
				if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_152[iVar0 /*2*/].f_1, 2))
					{
						bVar1 = false;
					}
					else
					{
						iVar0++;
					}
					if (bVar1)
					{
						func_14(uParam0);
						func_5(1, 0);
						func_7(uParam0, 9);
					}
				}

void func_14(var uParam0)
{
	int iVar0;
	
	func_9(&(uParam0->f_12));
	func_9(&(uParam0->f_16));
	func_9(&(uParam0->f_18));
	func_9(&(uParam0->f_20));
	func_9(&(uParam0->f_22));
	func_9(&(uParam0->f_26));
	func_9(&(uParam0->f_28));
	func_9(&(uParam0->f_30));
	func_9(&(uParam0->f_24));
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 0);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 1);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 2);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 3);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 9);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 8);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 7);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 10);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 12);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 6);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 11);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 13);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 15);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 16);
	unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 18);
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (iVar0 < 4)
		{
			uParam0->f_35[iVar0 /*80*/].f_3 = 0;
			uParam0->f_35[iVar0 /*80*/].f_18 = 1f;
		}
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			func_16(&(uParam0->f_35), 0, iVar0);
		}
		else
		{
			func_15(&(uParam0->f_35[iVar0 /*80*/].f_19));
			func_16(&(uParam0->f_35), 3, iVar0);
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		iVar0++;
	}
}

void func_16(var uParam0, int iParam1, int iParam2)
{
	(*uParam0)[iParam2 /*80*/] = iParam1;
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x443E2CA72E118E64())
	{
		iVar1 = 4;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
			{
				if (uParam0->f_35[iVar0 /*80*/] == 3)
				{
					iVar1 = (iVar1 - 1);
				}
				else if (uParam0->f_35[iVar0 /*80*/] == 2)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (!func_12(&(uParam0->f_24)))
			{
				func_10(&(uParam0->f_24), 0, 0);
			}
			else if (func_8(&(uParam0->f_24), 1000, 0))
			{
				func_7(uParam0, 8);
			}
			else if (func_8(&(uParam0->f_24), 500, 0))
			{
				if (iVar2 > -1)
				{
					Local_151.f_1 = iVar2;
				}
			}
		}
	}
}

void func_18(var uParam0)
{
	if (unk_0x443E2CA72E118E64())
	{
		if (func_12(&(uParam0->f_18)))
		{
			if (func_8(&(uParam0->f_18), 2000, 0) && !unk_0x234B68AC2E35ED5A(iLocal_146, 1))
			{
				func_19(unk_0xCB3024ED32EBF9EC() + 1250);
				unk_0x191DDA30577F440A(&iLocal_146, 1);
			}
			if (func_8(&(uParam0->f_18), 3000, 0))
			{
				func_7(uParam0, 7);
				unk_0xC664C0067EEAB8D1(&iLocal_146, 1);
			}
		}
	}
}

void func_19(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 1786850017;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iVar1);
	}
}

var func_20(int iParam0)
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
			if (func_21(iVar2, 0, 0))
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

int func_21(int iParam0, bool bParam1, bool bParam2)
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

void func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0x443E2CA72E118E64())
	{
		iVar0 = unk_0xAB0F784335D14AC3();
		if (iVar0 == 1)
		{
			func_7(uParam0, 10);
			return;
		}
		if (func_12(&(uParam0->f_16)))
		{
			if (func_8(&(uParam0->f_16), 2000, 0))
			{
				func_7(uParam0, 6);
			}
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (unk_0x443E2CA72E118E64())
	{
		if (!func_12(&(uParam0->f_32)))
		{
			func_10(&(uParam0->f_32), 0, 0);
		}
		else if (func_8(&(uParam0->f_32), 1000, 0))
		{
			iVar0 = unk_0xAB0F784335D14AC3();
			if (iVar0 == 1)
			{
				func_7(uParam0, 10);
				return;
			}
			bVar4 = true;
			switch (Local_151.f_77)
			{
				case 0:
					iVar1 = 0;
					while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] > -1)
						{
							Local_151.f_2[iVar1] = Local_152[iVar1 /*2*/];
						}
						else
						{
							Local_151.f_2[iVar1] = -1;
						}
						iVar1++;
					}
					Local_151.f_77 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
						{
							if (Local_151.f_2[iVar1] == -1)
							{
								Local_151.f_2[iVar1] = func_24();
							}
						}
						iVar1++;
					}
					Local_151.f_77 = 2;
					break;
				
				case 2:
					iVar1 = 0;
					while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
						{
							iVar2 = 0;
							while (iVar2 <= (unk_0x5E72DF7B8C03AA05() - 1))
							{
								if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)))
								{
									if (iVar2 != iVar1 && (Local_151.f_2[iVar1] == Local_151.f_2[iVar2] || Local_151.f_2[iVar1] == -1))
									{
										Local_151.f_2[iVar1] = -1;
										Local_151.f_77 = 1;
										return;
									}
								}
								iVar2++;
							}
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
						{
							if (Local_151.f_2[iVar1] != -1)
							{
								iVar3 = func_24();
								if (iVar3 != -1 && iVar3 < Local_151.f_2[iVar1])
								{
									Local_151.f_2[iVar1] = iVar3;
									return;
								}
							}
						}
						iVar1++;
					}
					Local_151.f_77 = 3;
					break;
				
				case 3:
					iVar1 = 0;
					while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
						{
							if (!unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 5))
							{
								bVar4 = false;
							}
						}
						iVar1++;
					}
					if (bVar4)
					{
						func_9(&(uParam0->f_12));
						func_9(&(uParam0->f_32));
						func_7(uParam0, 5);
					}
					break;
				}
			}
	}
}

int func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (Local_151.f_2[iVar1] == iVar0)
			{
				iVar2 = 1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x443E2CA72E118E64())
	{
		iVar0 = 1;
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)) && Local_152[iVar2 /*2*/] > -1)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_152[iVar2 /*2*/].f_1, 6))
				{
					bVar1 = true;
				}
				if (unk_0x234B68AC2E35ED5A(Local_152[iVar2 /*2*/].f_1, 2))
				{
					iVar0 = 0;
				}
			}
			iVar2++;
		}
		if ((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_14), 0, 0);
		}
		else
		{
			if (bVar1 || func_11(uParam0))
			{
				func_9(&(uParam0->f_14));
				return;
			}
			iVar3 = unk_0xAB0F784335D14AC3();
			iVar4 = 30000;
			if (iVar3 == 1 && !func_11(uParam0))
			{
				iVar4 = (iVar4 / 2);
			}
			if ((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), iVar4, 0))
			{
				if (!func_12(&(uParam0->f_12)))
				{
					func_10(&(uParam0->f_12), 0, 0);
				}
				else if (func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0))
				{
					func_9(&(uParam0->f_12));
					if (iVar3 == 1)
					{
						func_7(uParam0, 10);
						return;
					}
					Local_151.f_77 = 0;
					func_7(uParam0, 4);
					func_6(0);
					func_5(0, 0);
				}
			}
		}
	}
}

void func_26(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x443E2CA72E118E64())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] > -1)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 1))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 3);
				}
			}

void func_27(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x443E2CA72E118E64())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] > -1)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 0))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 2);
				}
			}

void func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0x443E2CA72E118E64())
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
			{
				if (Local_152[iVar0 /*2*/] == -1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_7(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	unk_0xC0BBE340BE2AA02D("DLC_Exec_Arc_Mac_Playing_Game_Scene");
	unk_0x791B4C3811D53DFA(uParam0->f_3);
	unk_0x791B4C3811D53DFA(uParam0->f_7);
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0xDD0E57E73E5C4BF6() != -1)
		{
			unk_0x791B4C3811D53DFA(uParam0->f_35[unk_0xDD0E57E73E5C4BF6() /*80*/].f_5);
		}
	}
	if (unk_0x6EF8BFCB3A7C2EE9())
	{
		unk_0x84236CF02FFEC68D();
	}
	func_51();
	Global_4456448.f_128335 = 0;
	func_50();
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 16);
	func_49(0, 1, 1, 0);
	func_48();
	func_47();
	unk_0xE498E37B41AEA1DF(3, 1);
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_34));
	}
	if (func_45() && !unk_0xCE84F8AB9BD41C13())
	{
		if (unk_0x02BFF15CAA701972())
		{
			func_32(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
		}
		else
		{
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
		}
	}
	func_31(1);
	func_186(uParam0, 12);
	func_220(0);
	func_30();
}

void func_30()
{
	unk_0x4BFE89D21F9885DC();
}

void func_31(bool bParam0)
{
	Global_1669327.f_1 = 0;
	Global_1669327 = 0;
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3 = 0;
	}
	if (bParam0)
	{
		func_10(&(Global_1669327.f_2), 0, 0);
	}
	else
	{
		func_9(&(Global_1669327.f_2));
	}
}

void func_32(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_44())
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
		if (!func_45())
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
				else if (bVar14 || (!func_41(unk_0x1146A9AE09CE2B14(), 0) && !func_40()))
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
					func_37(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_36(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
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
					unk_0xA2C015B68CE01357(uVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(uVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(uVar27) && unk_0x9038A2103B9BFD38(uVar27))
				{
					unk_0x9C4430B10B361917(uVar27);
				}
				unk_0xF5143FB7B9EC876D(uVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_35();
					func_34();
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
				if (!func_36(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(uVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(uVar27, 1);
						}
					}
					if (func_33(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(uVar27, true);
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
				unk_0x1D7A4E9E23D306D6(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(uVar27) && !unk_0xC49311A2A500FF09(uVar27, 0))
					{
						unk_0x16D66F11FE644901(uVar27);
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

bool func_33(int iParam0)
{
	return iParam0 == 17;
}

void func_34()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_35()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_36(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(int iParam0, int iParam1, int iParam2)
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
				func_39();
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
		if (func_41(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_38(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_39()
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

bool func_40()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_41(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_42(-1, 0) == 8;
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

int func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_43()
{
	return Global_1312763;
}

int func_44()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_46() == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	return Global_1312485.f_18;
}

void func_47()
{
	unk_0xB5F867E143F78583("LineArcadeMinigame");
	unk_0x315DA2F7337A8638("DLC_EXEC1/OFFICE_BOARDROOM");
	unk_0xE498E37B41AEA1DF(3, 0);
	unk_0xC664C0067EEAB8D1(&Global_1669327, 6);
	unk_0xC664C0067EEAB8D1(&Global_1669327, 7);
}

void func_48()
{
	if (Global_2441237.f_1274.f_10)
	{
		Global_2441237.f_1274.f_10 = 0;
	}
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && iParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	if (Global_1669804)
	{
	}
	Global_1669804 = 0;
}

void func_51()
{
	if (!Global_1312593)
	{
		return;
	}
	func_52();
}

void func_52()
{
	Global_1312593 = 0;
	StringCopy(&(Global_1312593.f_1), "", 32);
	Global_1312593.f_9 = 0;
}

void func_53(var uParam0)
{
	func_60(uParam0);
	func_56(uParam0);
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 16);
	}
	if (unk_0x964C4D363AF812CB(uParam0->f_7))
	{
		unk_0x9B0169E27978C1A2(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	if (!func_12(&(uParam0->f_30)))
	{
		func_10(&(uParam0->f_30), 0, 0);
	}
	else if (func_8(&(uParam0->f_30), 5000, 0))
	{
		func_186(uParam0, 11);
		func_54(0);
	}
	if (unk_0x86AF801D34E482FF(2, 201) || unk_0x86AF801D34E482FF(2, 202))
	{
		func_186(uParam0, 11);
		func_54(0);
	}
}

void func_54(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 5);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 5);
	}
}

void func_55(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "HIDE_LOBBY");
		unk_0x392841D58D2EED1D();
	}
}

void func_56(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 12))
	{
		func_57(uParam0, "DCTL_GAMEOVER", 0, 1);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 12);
	}
}

void func_57(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x9E3D03981E2E9AD9(iParam3);
		func_58("");
		unk_0x392841D58D2EED1D();
	}
}

void func_58(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

void func_59(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_60(var uParam0)
{
	int iVar0;
	
	iVar0 = 255;
	func_61(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
	unk_0xDDD5C8D7152E128F("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0);
}

void func_61(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x80B2E30CC8B794C0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_62(var uParam0)
{
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 15))
	{
		func_85(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_80(uParam0);
	if (unk_0x3640D836D145B814())
	{
		unk_0x366E7F593105797F(2, 200, 1);
	}
	if (!unk_0xA300BD5F71A8C704())
	{
		if ((unk_0x86AF801D34E482FF(2, 201) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3)) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
		{
			func_79(3);
		}
		else if ((unk_0x86AF801D34E482FF(2, 202) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3)) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if (!unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 4))
		{
			unk_0x73AF76B5B436689C("DCTL_REPLAYHELP", 0);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 5);
		}
	}
	func_64(uParam0, 1);
	func_63(uParam0);
	if (Local_151 == 10)
	{
		unk_0x791B4C3811D53DFA(uParam0->f_3);
		unk_0x9B0169E27978C1A2(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 4);
		func_186(uParam0, 10);
		func_54(1);
		func_6(0);
		func_5(0, 0);
	}
	else if (Local_151 == 4)
	{
		if (unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4) || unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 2))
		{
			func_186(uParam0, 11);
			return;
		}
		unk_0xC664C0067EEAB8D1(&iLocal_146, 0);
		func_14(uParam0);
		func_6(0);
		func_5(0, 0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 4);
		func_186(uParam0, 4);
	}
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			if (unk_0x234B68AC2E35ED5A(Local_152[iVar0 /*2*/].f_1, 3) && !unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 2))
			{
				unk_0x9B0169E27978C1A2(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x191DDA30577F440A(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
				if (unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 3))
				{
					unk_0xC664C0067EEAB8D1(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_152[iVar0 /*2*/].f_1, 4) && !unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 3))
			{
				unk_0x9B0169E27978C1A2(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x191DDA30577F440A(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
				if (unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 2))
				{
					unk_0xC664C0067EEAB8D1(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
				}
			}
		}
		iVar0++;
	}
}

void func_64(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_151.f_2[iLocal_145] != Local_152[iLocal_145 /*2*/])
	{
		Local_152[iLocal_145 /*2*/] = Local_151.f_2[iLocal_145];
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_146, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
			{
				if (Local_152[iVar0 /*2*/] > -1 && (unk_0xAB6A270F84A8781E(&(Local_151.f_12[iVar0 /*16*/])) || unk_0xAB6A270F84A8781E(&(Local_150[iVar0 /*16*/]))))
				{
					unk_0x191DDA30577F440A(&iLocal_146, 2);
				}
			}
			else if (!(unk_0xAB6A270F84A8781E(&(Local_151.f_12[iVar0 /*16*/])) || unk_0xAB6A270F84A8781E(&(Local_150[iVar0 /*16*/]))))
			{
				unk_0x191DDA30577F440A(&iLocal_146, 2);
			}
			iVar0++;
		}
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_146, 2))
	{
		func_70();
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
			{
				if ((Local_152[iVar0 /*2*/] == -1 || unk_0xAB6A270F84A8781E(&(Local_151.f_12[iVar0 /*16*/]))) || unk_0xAB6A270F84A8781E(&(Local_150[iVar0 /*16*/])))
				{
					iVar1 = 0;
				}
			}
			else if (!unk_0xAB6A270F84A8781E(&(Local_151.f_12[iVar0 /*16*/])) || !unk_0xAB6A270F84A8781E(&(Local_150[iVar0 /*16*/])))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (bParam1)
			{
				func_65(uParam0, "DCTL_REPLAY", 0);
			}
			else
			{
				func_65(uParam0, "DCTL_INSERT", 0);
			}
			unk_0xC664C0067EEAB8D1(&iLocal_146, 2);
		}
	}
}

void func_65(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "INIT_LOBBY");
		func_59(sParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		func_66(0);
		func_66(1);
		func_66(2);
		func_66(3);
		if (iLocal_145 > -1 && Local_152[iLocal_145 /*2*/] > -1)
		{
			unk_0x9E3D03981E2E9AD9(Local_152[iLocal_145 /*2*/]);
		}
		unk_0x392841D58D2EED1D();
	}
}

void func_66(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_69(iParam0) };
	Var1 = { func_67(iParam0) };
	unk_0x386C67F2B8055D74(&Var1);
	func_58(&Var0);
}

struct<16> func_67(int iParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, func_68(), 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_150[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

var func_68()
{
	var uVar0;
	
	return uVar0;
}

struct<16> func_69(int iParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_151.f_12[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

void func_70()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (iVar0 < 4)
		{
			if (unk_0x443E2CA72E118E64())
			{
				StringCopy(&(Local_151.f_12[iVar0 /*16*/]), "", 64);
			}
			StringCopy(&(Local_150[iVar0 /*16*/]), func_68(), 64);
		}
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			if (unk_0x443E2CA72E118E64())
			{
				StringCopy(&(Local_151.f_12[iVar0 /*16*/]), unk_0xF04DBC0AC5A2AB23(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0))), 64);
			}
			iVar1 = func_71(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0)));
			if (iVar1 != 0)
			{
				StringCopy(&(Local_150[iVar0 /*16*/]), unk_0x05FCBB2D6BF4C399(iVar1), 64);
			}
		}
		iVar0++;
	}
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = func_74(iParam0);
	if (iVar0 == -1)
	{
		func_72(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_72(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0, 1))
	{
		return;
	}
	if (func_74(iParam0) != -1)
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
	if (func_73(iParam0))
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

int func_73(int iParam0)
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

int func_74(int iParam0)
{
	int iVar0;
	
	if (!func_21(iParam0, 0, 1))
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
			func_75(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0)
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
	func_76(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_76(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_77();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

int func_77()
{
	return -1;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			if (unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_79(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Local_152[iLocal_145 /*2*/].f_1), 2);
	unk_0xC664C0067EEAB8D1(&(Local_152[iLocal_145 /*2*/].f_1), 3);
	unk_0xC664C0067EEAB8D1(&(Local_152[iLocal_145 /*2*/].f_1), 4);
	unk_0x191DDA30577F440A(&(Local_152[iLocal_145 /*2*/].f_1), iParam0);
}

void func_80(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 16))
	{
		func_65(uParam0, "DCTL_REPLAY", 0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 16);
	}
	func_83(uParam0);
	func_81(uParam0);
}

void func_81(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "SET_MICS");
		unk_0x9E3D03981E2E9AD9(func_82(0));
		unk_0x9E3D03981E2E9AD9(func_82(1));
		unk_0x9E3D03981E2E9AD9(func_82(2));
		unk_0x9E3D03981E2E9AD9(func_82(3));
		unk_0x392841D58D2EED1D();
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] == iParam0)
		{
			iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
			if (!unk_0xD9203CBCEC2C0A1B(iVar1))
			{
				return 0;
			}
			if (unk_0x3B58BC4F38776A1E(iVar1))
			{
				return 1;
			}
			if (unk_0xD86964DDD0885499(iVar1))
			{
				return 3;
			}
			return 2;
		}
		iVar0++;
	}
	return 0;
}

void func_83(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "UPDATE_LOBBY");
		func_84(0);
		func_84(1);
		func_84(2);
		func_84(3);
		unk_0x392841D58D2EED1D();
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_152)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] == iParam0)
		{
			bVar0 = true;
			if (unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 3))
			{
				unk_0x9E3D03981E2E9AD9(2);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_152[iVar1 /*2*/].f_1, 4))
			{
				unk_0x9E3D03981E2E9AD9(1);
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(0);
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		unk_0x9E3D03981E2E9AD9(0);
	}
}

void func_85(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "HIDE_HUD");
		unk_0x392841D58D2EED1D();
	}
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 15))
	{
		func_85(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_125(uParam0);
	if (Local_151 >= 9)
	{
		func_5(1, 0);
		if (unk_0x964C4D363AF812CB(uParam0->f_3))
		{
			unk_0x9B0169E27978C1A2(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		}
		iVar0 = func_124(3792, -1, 0);
		iVar0++;
		func_123(3792, iVar0, -1, 1, 0);
		if (Local_151.f_1 == iLocal_145)
		{
			iVar1 = func_124(3791, -1, 0);
			iVar1++;
			func_123(3791, iVar1, -1, 1, 0);
			if (iVar1 >= Global_262145.f_16487)
			{
				func_122(7551, 1, -1, 1);
				if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == joaat("mp_m_freemode_01"))
				{
					func_87(func_121(joaat("MP_exec_prizes_015_M"), 3), 1, 1, 0, 0, -1);
				}
				else
				{
					func_87(func_121(joaat("MP_exec_prizes_015_F"), 4), 1, 1, 0, 0, -1);
				}
			}
		}
		func_70();
		func_186(uParam0, 9);
	}
	if (!unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 2))
	{
		func_79(2);
	}
}

void func_87(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_120(1239, iParam5);
			}
		}
		else
		{
			func_120(1239, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_119(iParam0, iParam5))
		{
			func_116(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_114(iParam0) == 0)
			{
				func_108(12, func_113(iParam0, 3), func_112(iParam0, 3), func_111(iParam0, 3), func_110(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_107(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_102(iParam0, 1, iParam5);
		}
		if (Global_1379108.f_1043 == 0)
		{
			Global_1379108.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_119(iParam0, iParam5))
		{
			func_116(iParam0, 0, iParam5);
			func_98(1239, -1, iParam5);
		}
		if (iParam0 < 129)
		{
			if (func_114(iParam0) == 1)
			{
				func_107(iParam0, 0);
			}
		}
		if (func_97(iParam0, iParam5))
		{
			func_88(iParam0, 0, iParam5);
		}
	}
}

void func_88(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_97(iParam0, iParam2))
		{
			func_89(iParam0, 1, iParam2);
		}
	}
	else if (func_97(iParam0, iParam2))
	{
		func_89(iParam0, 0, iParam2);
	}
}

void func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_96(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x191DDA30577F440A(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&iVar0, func_95(iVar1));
		}
		if (!func_94())
		{
			iVar2 = func_90(iParam0);
			if (iVar2 != 12074)
			{
				func_123(iVar2, iVar0, iParam2, 1, 0);
			}
		}
	}
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1049;
				break;
			
			case 1:
				return 1050;
				break;
			
			case 2:
				return 1051;
				break;
			
			case 3:
				return 1052;
				break;
			
			case 4:
				return 1053;
				break;
			
			case 5:
				return 1054;
				break;
			
			case 6:
				return 1488;
				break;
			
			case 7:
				return 1489;
				break;
			
			case 8:
				return 1490;
				break;
			
			case 9:
				return 1491;
				break;
			
			case 10:
				return 1949;
				break;
			
			case 11:
				return 1950;
				break;
			
			case 12:
				return 1951;
				break;
			
			case 13:
				return 2425;
				break;
			
			case 14:
				return 2445;
				break;
			
			case 15:
				return 2448;
				break;
			
			case 16:
				return 2451;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				break;
		}
		return 12074;
	}
	if (func_92() == 2 && func_91() == 2)
	{
		return 12074;
	}
	return 12074;
}

int func_91()
{
	return Global_31346;
}

int func_92()
{
	return Global_31345;
}

int func_93(int iParam0)
{
	return (iParam0 / 32);
}

bool func_94()
{
	return Global_1312878;
}

int func_95(int iParam0)
{
	return (iParam0 % 32);
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_90(iParam0);
	if (iVar0 == 12074)
	{
		if (func_92() == 2 && func_91() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	uVar1 = func_124(iVar0, iParam1, 0);
	return uVar1;
}

bool func_97(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_96(iParam0, iParam1);
	iVar1 = func_95(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(iVar0, iVar1);
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_101(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_100(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam2, 1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_101(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_101(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_101(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_101(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_101(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_101(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_101(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_101(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_101(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_101(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_101(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_101(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_101(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_101(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_101(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_101(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_101(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_101(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_101(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_101(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_101(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_101(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_101(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_101(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_101(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_101(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_101(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_101(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_101(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_101(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_101(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_101(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_101(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_101(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_101(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_101(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_101(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_101(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_101(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_101(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_101(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_101(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_101(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_101(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_101(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_101(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_101(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_101(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_101(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_101(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_101(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_101(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_100(int iParam0)
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

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

void func_102(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_106(iParam0))
		{
			func_103(iParam0, 1, iParam2);
		}
	}
	else if (func_106(iParam0))
	{
		func_103(iParam0, 0, iParam2);
	}
}

void func_103(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x191DDA30577F440A(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&iVar0, func_95(iVar1));
		}
		func_123(func_104(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_104(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1044;
				break;
			
			case 1:
				return 1045;
				break;
			
			case 2:
				return 1046;
				break;
			
			case 3:
				return 1047;
				break;
			
			case 4:
				return 1048;
				break;
			
			case 5:
				return 1492;
				break;
			
			case 6:
				return 1493;
				break;
			
			case 7:
				return 1494;
				break;
			
			case 8:
				return 1495;
				break;
			
			case 9:
				return 1945;
				break;
			
			case 10:
				return 1946;
				break;
			
			case 11:
				return 1947;
				break;
			
			case 12:
				return 1948;
				break;
			
			case 13:
				return 2426;
				break;
			
			case 14:
				return 2446;
				break;
			
			case 15:
				return 2449;
				break;
			
			case 16:
				return 2452;
				break;
			
			case 17:
				return 2615;
				break;
			
			case 18:
				return 2618;
				break;
			
			case 19:
				return 2621;
				break;
			
			case 20:
				return 3787;
				break;
			
			case 21:
				return 3790;
				break;
			
			case 22:
				return 3865;
				break;
			
			case 23:
				return 3868;
				break;
			
			case 24:
				return 3871;
				break;
			
			case 25:
				return 3874;
				break;
			
			case 26:
				return 5365;
				break;
			
			case 27:
				return 5368;
				break;
			
			case 28:
				return 5470;
				break;
			
			case 29:
				return 5473;
				break;
			
			case 30:
				return 6432;
				break;
			
			case 31:
				return 6435;
				break;
			
			case 32:
				return 7256;
				break;
			
			case 33:
				return 7259;
				break;
			
			case 34:
				return 7262;
				break;
			
			case 35:
				return 7971;
				break;
			
			case 36:
				return 7974;
				break;
			
			case 37:
				return 7977;
				break;
			
			case 38:
				return 7980;
				break;
			
			case 39:
				return 8502;
				break;
			
			case 40:
				return 8505;
				break;
			
			case 41:
				return 8508;
				break;
			
			case 42:
				return 8511;
				break;
			
			case 43:
				return 8907;
				break;
			
			case 44:
				return 8910;
				break;
			
			case 45:
				return 8913;
				break;
		}
	}
	return 12074;
}

var func_105(var uParam0)
{
	var uVar0;
	
	uVar0 = func_124(func_104(uParam0), -1, 0);
	return uVar0;
}

bool func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	return unk_0x234B68AC2E35ED5A(iVar0, func_95(iVar1));
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0x191DDA30577F440A(&(Global_2554342.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_2554342.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
	}
}

void func_108(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_109(&Global_1387436);
	Global_1387436[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1387436[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1387436[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1387436[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1387436[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1387436[iVar0 /*106*/].f_97 = iParam5;
	Global_1387436[iVar0 /*106*/].f_104 = iParam9;
	Global_1387436[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		StringCopy(&(Global_1387436[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_110(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_111(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_112(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_113(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115(iParam0);
	iVar1 = iParam0;
	return unk_0x234B68AC2E35ED5A(iVar0, func_95(iVar1));
}

var func_115(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_2554342.f_1032[func_93(iParam0)];
	return uVar0;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_118(iParam0) == 12074)
	{
		return;
	}
	iVar0 = func_117(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x191DDA30577F440A(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&iVar0, func_95(iVar1));
		}
		func_123(func_118(iParam0), iVar0, iParam2, 1, 0);
	}
}

var func_117(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_124(func_118(uParam0), iParam1, 0);
	return uVar0;
}

int func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
				break;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8905;
				break;
			
			case 44:
				return 8908;
				break;
			
			case 45:
				return 8911;
				break;
		}
	}
	return 12074;
}

bool func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_118(iParam0) == 12074)
	{
		return 0;
	}
	iVar0 = func_117(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x234B68AC2E35ED5A(iVar0, func_95(iVar1));
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_101(iParam1), 0);
	iVar0++;
	if (!func_100(iParam0))
	{
		func_123(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam1, 1);
	}
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x073A1111AA7C8686(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_43();
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

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_101(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_125(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	if (Local_151.f_1 != -1)
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 11))
		{
			Var0 = { func_69(Local_152[Local_151.f_1 /*2*/]) };
			iVar1 = func_127(Local_152[Local_151.f_1 /*2*/]);
			func_126(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 11);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 11))
	{
		func_57(uParam0, "DCTL_DRAW", 0, 1);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 11);
	}
}

void func_126(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		unk_0x9E3D03981E2E9AD9(iParam3);
		unk_0x9E3D03981E2E9AD9(iParam4);
		func_58(sParam2);
		unk_0x9E3D03981E2E9AD9(iParam5);
		unk_0x392841D58D2EED1D();
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 211;
		
		case 1:
			return 213;
		
		case 2:
			return 210;
		
		case 3:
			return 209;
		
		default:
	}
	return 0;
}

void func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			uParam0->f_35[iVar0 /*80*/].f_8 = uParam0->f_35[iVar0 /*80*/].f_2;
			uParam0->f_35[iVar0 /*80*/].f_9 = uParam0->f_35[iVar0 /*80*/].f_2;
		}
		iVar0++;
	}
	func_159(uParam0);
	func_153(uParam0);
	func_151(uParam0);
	func_147(uParam0);
	func_146(uParam0);
	if (unk_0x234B68AC2E35ED5A(iLocal_146, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
			{
				func_131(uParam0, &(uParam0->f_35), iVar0);
				if (unk_0x234B68AC2E35ED5A(iLocal_146, (11 + iVar0)))
				{
					unk_0xC664C0067EEAB8D1(&iLocal_146, (11 + iVar0));
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_146, (7 + iVar0)))
				{
					unk_0x191DDA30577F440A(&iLocal_146, (11 + iVar0));
					unk_0xC664C0067EEAB8D1(&iLocal_146, (7 + iVar0));
				}
			}
			else if (uParam0->f_35[iVar0 /*80*/] == 2)
			{
				func_16(&(uParam0->f_35), 3, iVar0);
				uParam0->f_35[iVar0 /*80*/].f_1 = 0;
			}
			iVar0++;
		}
		if (!func_12(&uLocal_148))
		{
			func_10(&uLocal_148, 0, 0);
		}
		else if (func_8(&uLocal_148, 500, 0))
		{
			iVar1 = unk_0xAB0F784335D14AC3();
			if (iVar1 == 1)
			{
				unk_0x9B0169E27978C1A2(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_186(uParam0, 10);
				return;
			}
			func_129(4, func_130(uParam0->f_35[iLocal_145 /*80*/].f_15, uParam0->f_35[iLocal_145 /*80*/].f_16, 9974), iLocal_145, 99999);
			func_9(&uLocal_148);
		}
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 4) && uParam0->f_35[iLocal_145 /*80*/] == 2)
		{
			unk_0x73AF76B5B436689C("DCTL_GAMEHELP", 0);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 5);
		}
		if (Local_151 >= 8)
		{
			unk_0x9B0169E27978C1A2(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				unk_0x791B4C3811D53DFA(uParam0->f_35[iVar0 /*80*/].f_5);
				iVar0++;
			}
			if (unk_0x6EF8BFCB3A7C2EE9())
			{
				unk_0x84236CF02FFEC68D();
			}
			unk_0xC664C0067EEAB8D1(&iLocal_146, 0);
			func_186(uParam0, 8);
		}
	}
	else if (iLocal_147 != -1 && unk_0xCB3024ED32EBF9EC() >= iLocal_147)
	{
		unk_0x191DDA30577F440A(&iLocal_146, 0);
	}
}

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 1369856535;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = func_20(0);
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 6, iVar1);
	}
}

float func_130(float fParam0, float fParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(floor((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = to_float(floor((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

void func_131(var uParam0, var uParam1, int iParam2)
{
	switch ((*uParam1)[iParam2 /*80*/])
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_152[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 1:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_152[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 2:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_152[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 3:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_152[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
			}
			unk_0xC664C0067EEAB8D1(&iLocal_146, (15 + iParam2));
			func_144(uParam1, iParam2);
			func_15(&((uParam1[iParam2 /*80*/])->f_19));
			func_16(uParam1, 1, iParam2);
			break;
		
		case 1:
			if (Local_151 == 7)
			{
				func_16(uParam1, 2, iParam2);
			}
			break;
		
		case 2:
			if (iParam2 == iLocal_145)
			{
				if (!unk_0xA300BD5F71A8C704())
				{
					func_143(uParam1);
				}
			}
			if (func_142(uParam0) <= 1)
			{
				(uParam1[iParam2 /*80*/])->f_18 = 0f;
				(uParam1[iParam2 /*80*/])->f_9 = (uParam1[iParam2 /*80*/])->f_2;
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_146, (3 + iParam2)))
			{
				func_139(uParam0, uParam1, iParam2);
			}
			unk_0xC664C0067EEAB8D1(&iLocal_146, (3 + iParam2));
			if (iParam2 == iLocal_145)
			{
				func_135(uParam0, uParam1, 1);
				if (func_134(uParam0, uParam1, iLocal_145))
				{
					func_133(iLocal_145);
				}
			}
			else if (func_134(uParam0, uParam1, iParam2))
			{
				(uParam1[iParam2 /*80*/])->f_18 = 0f;
				if ((uParam1[iParam2 /*80*/])->f_14 == -2147483647)
				{
					(uParam1[iParam2 /*80*/])->f_14 = unk_0x551F46B3C7DFB654();
				}
			}
			else if ((uParam1[iParam2 /*80*/])->f_14 != -2147483647)
			{
				(uParam1[iParam2 /*80*/])->f_14 = -2147483647;
			}
			break;
		
		case 3:
			func_132(uParam1, iParam2);
			break;
	}
}

void func_132(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = to_float((uParam0[iParam1 /*80*/])->f_1);
	fVar0 = (fVar0 - (300f * timestep()));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	(uParam0[iParam1 /*80*/])->f_1 = floor(fVar0);
}

void func_133(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 461725328;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iVar1);
	}
}

int func_134(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	switch ((uParam1[iParam2 /*80*/])->f_2)
	{
		case 0:
			if (((uParam1[iParam2 /*80*/])->f_16 - (0.012f * 0.42f)) <= 0.229f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((uParam1[iParam2 /*80*/])->f_16 + (0.012f * 0.42f)) >= 0.851f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 - (fVar1 * 0.42f)) <= (0.5f - (0.339f * uParam0->f_9))
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 + (fVar1 * 0.42f)) >= (0.5f + (0.343f * uParam0->f_9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_135(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	float fVar27;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iLocal_145 /*80*/])->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	iVar20 = ((uParam1[iLocal_145 /*80*/])->f_4 - 1);
	if (iVar20 > -1 && iVar20 < 59)
	{
		func_138((uParam1[iLocal_145 /*80*/])->f_19[iVar20], &fVar12, &fVar13, 9974);
		if ((uParam1[iLocal_145 /*80*/])->f_2 == 2)
		{
			fVar14 = ((uParam1[iLocal_145 /*80*/])->f_15 + (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_145 /*80*/])->f_16;
			if (fVar14 > fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_145 /*80*/])->f_2 == 3)
		{
			fVar14 = ((uParam1[iLocal_145 /*80*/])->f_15 - (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_145 /*80*/])->f_16;
			if (fVar14 < fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_145 /*80*/])->f_2 == 0)
		{
			fVar14 = (uParam1[iLocal_145 /*80*/])->f_15;
			fVar15 = ((uParam1[iLocal_145 /*80*/])->f_16 + (0.012f * 0.5f));
			if (fVar15 > fVar13)
			{
				fVar15 = fVar13;
			}
		}
		else if ((uParam1[iLocal_145 /*80*/])->f_2 == 1)
		{
			fVar14 = (uParam1[iLocal_145 /*80*/])->f_15;
			fVar15 = ((uParam1[iLocal_145 /*80*/])->f_16 - (0.012f * 0.5f));
			if (fVar15 < fVar13)
			{
				fVar15 = fVar13;
			}
		}
	}
	iVar21 = 0;
	while (iVar21 <= 3)
	{
		bVar23 = false;
		if (iVar21 == iLocal_145)
		{
		}
		else if ((uParam1[iVar21 /*80*/])->f_14 != -2147483647 && unk_0x551F46B3C7DFB654() > (uParam1[iVar21 /*80*/])->f_14 + 1000)
		{
		}
		else if ((*uParam1)[iVar21 /*80*/] == 2 && (*uParam1)[iLocal_145 /*80*/] == 2)
		{
			iVar22 = 0;
			while (iVar22 <= 59)
			{
				func_138((uParam1[iVar21 /*80*/])->f_19[iVar22], &fVar2, &fVar3, 9974);
				if (fVar2 != 0f || fVar3 != 0f)
				{
					if (iVar22 + 1 >= 60)
					{
						fVar4 = (uParam1[iVar21 /*80*/])->f_15;
						fVar5 = (uParam1[iVar21 /*80*/])->f_16;
					}
					else
					{
						func_138((uParam1[iVar21 /*80*/])->f_19[iVar22 + 1], &fVar4, &fVar5, 9974);
						if (fVar4 == 0f && fVar5 == 0f)
						{
							fVar4 = (uParam1[iVar21 /*80*/])->f_15;
							fVar5 = (uParam1[iVar21 /*80*/])->f_16;
						}
					}
					fVar6 = (fVar4 - fVar2);
					fVar7 = (fVar5 - fVar3);
					fVar8 = (fVar2 + (fVar6 * 0.5f));
					fVar9 = (fVar3 + (fVar7 * 0.5f));
					if (unk_0x0BCA9ADE67DF9DD8(fVar6) > 0.001f)
					{
						fVar10 = (unk_0x0BCA9ADE67DF9DD8(fVar6) + (0.003f * 0.5f));
						fVar11 = (0.003f * uParam0->f_8);
					}
					else if (unk_0x0BCA9ADE67DF9DD8(fVar7) > 0.001f)
					{
						fVar10 = 0.003f;
						fVar11 = (unk_0x0BCA9ADE67DF9DD8(fVar7) + ((0.003f * 0.5f) * uParam0->f_8));
					}
					else
					{
						fVar10 = 0.0001f;
						fVar11 = 0.0001f;
					}
					fVar24 = (0.5f - ((0.5f - fVar8) * uParam0->f_9));
					fVar25 = (fVar10 * uParam0->f_9);
					bVar26 = false;
					if ((uParam1[iLocal_145 /*80*/])->f_2 == 2 || (uParam1[iLocal_145 /*80*/])->f_2 == 3)
					{
						bVar26 = func_137(fVar0, (uParam1[iLocal_145 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, (fVar25 * 0.95f), fVar11);
					}
					if ((uParam1[iLocal_145 /*80*/])->f_2 == 0 || (uParam1[iLocal_145 /*80*/])->f_2 == 1)
					{
						bVar26 = func_137(fVar0, (uParam1[iLocal_145 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, fVar25, (fVar11 * 0.95f));
					}
					if (bVar26)
					{
						if (bParam2)
						{
							func_133(iLocal_145);
						}
						bVar23 = true;
					}
					else if (!unk_0x234B68AC2E35ED5A(iLocal_146, (7 + iVar21)) && unk_0x234B68AC2E35ED5A(iLocal_146, (11 + iVar21)))
					{
						if (iVar22 == ((uParam1[iVar21 /*80*/])->f_4 - 1))
						{
							if (((fVar12 != 0f && fVar13 != 0f) && fVar14 != 0f) && fVar15 != 0f)
							{
								func_136(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0.0015f);
								if (func_137(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19))
								{
									if (bParam2)
									{
										func_133(iLocal_145);
									}
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar22++;
			}
			if (!bVar23)
			{
				fVar27 = (0.5f - ((0.5f - (uParam1[iVar21 /*80*/])->f_15) * uParam0->f_9));
				if (func_137(fVar0, (uParam1[iLocal_145 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar27, (uParam1[iVar21 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f)))
				{
					if (bParam2)
					{
						func_133(iLocal_145);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_136(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	float fVar0;
	float fVar1;
	
	if (fParam9 == 0f)
	{
		fParam9 = 0.003f;
	}
	fVar0 = (fParam3 - fParam1);
	fVar1 = (fParam4 - fParam2);
	*uParam5 = (fParam1 + (fVar0 * 0.5f));
	*uParam6 = (fParam2 + (fVar1 * 0.5f));
	if (unk_0x0BCA9ADE67DF9DD8(fVar0) > 0.001f)
	{
		*uParam7 = (unk_0x0BCA9ADE67DF9DD8(fVar0) + (fParam9 * 0.5f));
		*uParam8 = (fParam9 * uParam0->f_8);
	}
	else
	{
		*uParam7 = fParam9;
		*uParam8 = (unk_0x0BCA9ADE67DF9DD8(fVar1) + ((fParam9 * 0.5f) * uParam0->f_8));
	}
	*uParam5 = (0.5f - ((0.5f - *uParam5) * uParam0->f_9));
	*uParam7 = (*uParam7 * uParam0->f_9);
}

int func_137(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_138(float fParam0, float fParam1, float fParam2, int iParam3)
{
	*fParam1 = to_float(floor((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

void func_139(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iParam2)) && (*uParam1)[iParam2 /*80*/] == 2)
	{
		if (unk_0x964C4D363AF812CB((uParam1[iParam2 /*80*/])->f_5))
		{
			if (Local_152[iParam2 /*2*/] == 0)
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_152[iParam2 /*2*/] == 1)
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_152[iParam2 /*2*/] == 2)
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
		}
		if (!unk_0x964C4D363AF812CB((uParam1[iParam2 /*80*/])->f_5))
		{
			unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_5, "X", (uParam1[iParam2 /*80*/])->f_15);
			unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_5, "Y", (uParam1[iParam2 /*80*/])->f_16);
		}
	}
	if ((uParam1[iParam2 /*80*/])->f_9 != (uParam1[iParam2 /*80*/])->f_2 && (uParam1[iParam2 /*80*/])->f_4 > 0)
	{
		func_138((uParam1[iParam2 /*80*/])->f_19[((uParam1[iParam2 /*80*/])->f_4 - 1)], &fVar0, &fVar1, 9974);
		fVar4 = 0.2f;
		if (((((uParam1[iParam2 /*80*/])->f_9 == 0 && (uParam1[iParam2 /*80*/])->f_10[1] == 1) || ((uParam1[iParam2 /*80*/])->f_9 == 1 && (uParam1[iParam2 /*80*/])->f_10[1] == 0)) || ((uParam1[iParam2 /*80*/])->f_9 == 2 && (uParam1[iParam2 /*80*/])->f_10[1] == 3)) || ((uParam1[iParam2 /*80*/])->f_9 == 3 && (uParam1[iParam2 /*80*/])->f_10[1] == 2))
		{
			fVar4 = 0.25f;
		}
		if ((uParam1[iParam2 /*80*/])->f_9 == 0 || (uParam1[iParam2 /*80*/])->f_9 == 1)
		{
			fVar2 = unk_0x0BCA9ADE67DF9DD8(((uParam1[iParam2 /*80*/])->f_15 - fVar0));
			fVar3 = ((0.0068f * uParam0->f_8) * fVar4);
		}
		else if ((uParam1[iParam2 /*80*/])->f_9 == 2 || (uParam1[iParam2 /*80*/])->f_9 == 3)
		{
			fVar2 = unk_0x0BCA9ADE67DF9DD8(((uParam1[iParam2 /*80*/])->f_16 - fVar1));
			fVar3 = ((0.0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
		}
		if (fVar2 >= fVar3 || (iParam2 != iLocal_145 && !unk_0x234B68AC2E35ED5A(iLocal_146, (15 + iParam2))))
		{
			if (iParam2 == iLocal_145)
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_129((uParam1[iParam2 /*80*/])->f_9, func_130((uParam1[iParam2 /*80*/])->f_15, (uParam1[iParam2 /*80*/])->f_16, 9974), iLocal_145, uLocal_144[iLocal_145]);
				func_9(&uLocal_148);
				uLocal_144[iLocal_145]++;
			}
			else
			{
				unk_0x9B0169E27978C1A2((uParam1[iParam2 /*80*/])->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_7, "X", (uParam1[iParam2 /*80*/])->f_15);
			unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_7, "Y", (uParam1[iParam2 /*80*/])->f_16);
			if (!unk_0x964C4D363AF812CB((uParam1[iParam2 /*80*/])->f_5))
			{
				unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_5, "Turning", 1f);
			}
			(uParam1[iParam2 /*80*/])->f_2 = (uParam1[iParam2 /*80*/])->f_9;
			(uParam1[iParam2 /*80*/])->f_10[1] = (uParam1[iParam2 /*80*/])->f_10[0];
			(uParam1[iParam2 /*80*/])->f_10[0] = (uParam1[iParam2 /*80*/])->f_2;
			(uParam1[iParam2 /*80*/])->f_13 = unk_0xDFB7BFA6482FEE1E();
		}
	}
	else if (!unk_0x964C4D363AF812CB((uParam1[iParam2 /*80*/])->f_5))
	{
		unk_0xB76EE71E771BDAA1((uParam1[iParam2 /*80*/])->f_5, "Turning", 0f);
	}
	func_141(uParam0, iParam2);
	func_140(uParam0, uParam1, iParam2);
	func_144(uParam1, iParam2);
	unk_0x191DDA30577F440A(&iLocal_146, (3 + iParam2));
}

void func_140(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.06f * (uParam1[iParam2 /*80*/])->f_18);
	fVar1 = ((0.06f * (uParam1[iParam2 /*80*/])->f_18) * uParam0->f_8);
	switch ((uParam1[iParam2 /*80*/])->f_2)
	{
		case 0:
			(uParam1[iParam2 /*80*/])->f_16 = ((uParam1[iParam2 /*80*/])->f_16 - (fVar1 * timestep()));
			break;
		
		case 1:
			(uParam1[iParam2 /*80*/])->f_16 = ((uParam1[iParam2 /*80*/])->f_16 + (fVar1 * timestep()));
			break;
		
		case 2:
			(uParam1[iParam2 /*80*/])->f_15 = ((uParam1[iParam2 /*80*/])->f_15 - (fVar0 * timestep()));
			break;
		
		case 3:
			(uParam1[iParam2 /*80*/])->f_15 = ((uParam1[iParam2 /*80*/])->f_15 + (fVar0 * timestep()));
			break;
	}
	(uParam1[iParam2 /*80*/])->f_18 = 1f;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (uParam0->f_35[iParam1 /*80*/].f_4 == 0)
	{
		uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
		uParam0->f_35[iParam1 /*80*/].f_4++;
	}
	if (uParam0->f_35[iParam1 /*80*/].f_2 != uParam0->f_35[iParam1 /*80*/].f_8)
	{
		if (uParam0->f_35[iParam1 /*80*/].f_4 >= 60)
		{
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				if (iVar0 == 59)
				{
					uParam0->f_35[iParam1 /*80*/].f_19[iVar0] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
				}
				else
				{
					fVar1 = 0f;
					fVar2 = 0f;
					func_138(uParam0->f_35[iParam1 /*80*/].f_19[iVar0 + 1], &fVar1, &fVar2, 9974);
					uParam0->f_35[iParam1 /*80*/].f_19[iVar0] = func_130(fVar1, fVar2, 9974);
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
			uParam0->f_35[iParam1 /*80*/].f_4++;
		}
		uParam0->f_35[iParam1 /*80*/].f_8 = uParam0->f_35[iParam1 /*80*/].f_2;
	}
}

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)) && Local_152[iVar1 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar1 /*80*/] != 3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_143(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if ((uParam0[iLocal_145 /*80*/])->f_9 < 0)
	{
		(uParam0[iLocal_145 /*80*/])->f_9 = (uParam0[iLocal_145 /*80*/])->f_2;
	}
	if ((unk_0xDFB7BFA6482FEE1E() - (uParam0[iLocal_145 /*80*/])->f_13) >= 66)
	{
		fVar0 = unk_0xBDAD193FD6CC54F5(2, 218);
		fVar1 = unk_0xBDAD193FD6CC54F5(2, 219);
		if (fVar1 < -0.65f || unk_0x5C6675393464A814(2, 188))
		{
			if ((uParam0[iLocal_145 /*80*/])->f_2 != 1)
			{
				(uParam0[iLocal_145 /*80*/])->f_9 = 0;
			}
		}
		if (fVar1 > 0.65f || unk_0x5C6675393464A814(2, 187))
		{
			if ((uParam0[iLocal_145 /*80*/])->f_2 != 0)
			{
				(uParam0[iLocal_145 /*80*/])->f_9 = 1;
			}
		}
		if (fVar0 < -0.65f || unk_0x5C6675393464A814(2, 189))
		{
			if ((uParam0[iLocal_145 /*80*/])->f_2 != 3)
			{
				(uParam0[iLocal_145 /*80*/])->f_9 = 2;
			}
		}
		if (fVar0 > 0.65f || unk_0x5C6675393464A814(2, 190))
		{
			if ((uParam0[iLocal_145 /*80*/])->f_2 != 2)
			{
				(uParam0[iLocal_145 /*80*/])->f_9 = 3;
			}
		}
	}
}

void func_144(var uParam0, int iParam1)
{
	switch ((uParam0[iParam1 /*80*/])->f_2)
	{
		case 0:
			(uParam0[iParam1 /*80*/])->f_17 = 0f;
			break;
		
		case 1:
			(uParam0[iParam1 /*80*/])->f_17 = 180f;
			break;
		
		case 2:
			(uParam0[iParam1 /*80*/])->f_17 = 270f;
			break;
		
		case 3:
			(uParam0[iParam1 /*80*/])->f_17 = 90f;
			break;
	}
}

void func_145(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*fParam2 = (0.5f + -0.32f);
			*fParam3 = 0.54f;
			*iParam1 = 3;
			*iParam4 = 3;
			break;
		
		case 1:
			*fParam2 = (0.5f + 0.321f);
			*fParam3 = 0.54f;
			*iParam1 = 2;
			*iParam4 = 2;
			break;
		
		case 2:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.26f;
			*iParam1 = 1;
			*iParam4 = 1;
			break;
		
		case 3:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.822f;
			*iParam1 = 0;
			*iParam4 = 0;
			break;
	}
}

void func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_35[iVar0 /*80*/] == 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (*uParam0 < 7)
	{
		unk_0xC1E412BF2D1D6DA1("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
	}
	else if (iVar1 > 1)
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 3))
		{
			unk_0xBE4E52D6C3D53CB2();
			unk_0x191DDA30577F440A(&(uParam0->f_2), 3);
		}
	}
	else if (unk_0x6EF8BFCB3A7C2EE9())
	{
		unk_0x84236CF02FFEC68D();
	}
}

void func_147(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 15))
	{
		func_148(uParam0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 15);
	}
	func_81(uParam0);
}

void func_148(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "SHOW_HUD");
		func_149(0);
		func_149(1);
		func_149(2);
		func_149(3);
		if (iLocal_145 > -1 && Local_152[iLocal_145 /*2*/] > -1)
		{
			unk_0x9E3D03981E2E9AD9(Local_152[iLocal_145 /*2*/]);
		}
		unk_0x392841D58D2EED1D();
	}
}

void func_149(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	
	Var0 = { func_69(iParam0) };
	Var1 = { func_67(iParam0) };
	iVar2 = func_150(iParam0);
	unk_0x9E3D03981E2E9AD9(iVar2);
	unk_0x386C67F2B8055D74(&Var1);
	func_58(&Var0);
}

int func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] == iParam0)
		{
			return Local_151.f_7[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_151(var uParam0)
{
	if (!func_8(&(uParam0->f_20), 1000, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 10))
		{
			func_57(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 10);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 10))
	{
		func_152(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 10);
	}
}

void func_152(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
		unk_0x392841D58D2EED1D();
	}
}

void func_153(var uParam0)
{
	int iVar0;
	
	func_60(uParam0);
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar0 /*80*/].f_1 != 0)
			{
				func_154(uParam0, &(uParam0->f_35), iVar0);
			}
		}
		iVar0++;
	}
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if ((uParam1[iParam2 /*80*/])->f_14 != -2147483647 && unk_0x551F46B3C7DFB654() > (uParam1[iParam2 /*80*/])->f_14 + 1000)
	{
		return;
	}
	func_155(Local_152[iParam2 /*2*/], &iVar0, &iVar1, &iVar2);
	if ((*uParam1)[iParam2 /*80*/] == 3)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	fVar3 = (0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
	fVar4 = (0.0068f * uParam0->f_9);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		func_138((uParam1[iParam2 /*80*/])->f_19[iVar5], &fVar7, &fVar8, 9974);
		if (fVar7 != 0f || fVar8 != 0f)
		{
			if (iVar5 + 1 >= 60)
			{
				fVar9 = (uParam1[iParam2 /*80*/])->f_15;
				fVar10 = (uParam1[iParam2 /*80*/])->f_16;
			}
			else
			{
				func_138((uParam1[iParam2 /*80*/])->f_19[iVar5 + 1], &fVar9, &fVar10, 9974);
				if (fVar9 == 0f && fVar10 == 0f)
				{
					fVar9 = (uParam1[iParam2 /*80*/])->f_15;
					fVar10 = (uParam1[iParam2 /*80*/])->f_16;
				}
			}
			fVar11 = (fVar9 - fVar7);
			fVar12 = (fVar10 - fVar8);
			fVar13 = (fVar7 + (fVar11 * 0.5f));
			fVar14 = (fVar8 + (fVar12 * 0.5f));
			if (unk_0x0BCA9ADE67DF9DD8(fVar11) > 0.001f)
			{
				if (fVar11 > 0f)
				{
					iVar6 = 3;
				}
				else
				{
					iVar6 = 2;
				}
				fVar15 = 90f;
				fVar16 = (unk_0x0BCA9ADE67DF9DD8(fVar11) + 0.003f);
				fVar17 = (0.003f * uParam0->f_8);
			}
			if (unk_0x0BCA9ADE67DF9DD8(fVar12) > 0.001f)
			{
				if (fVar12 > 0f)
				{
					iVar6 = 1;
				}
				else
				{
					iVar6 = 0;
				}
				fVar15 = 0f;
				fVar16 = 0.003f;
				fVar17 = (unk_0x0BCA9ADE67DF9DD8(fVar12) + ((0.003f * 0.5f) * uParam0->f_8));
			}
			fVar18 = (0.5f - ((0.5f - fVar13) * uParam0->f_9));
			fVar19 = (fVar16 * uParam0->f_9);
			unk_0xDDD5C8D7152E128F("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0);
			if (iParam2 == iLocal_145)
			{
				if ((*uParam1)[iParam2 /*80*/] == 2)
				{
					bVar20 = false;
					if ((uParam1[iParam2 /*80*/])->f_2 == 2 || (uParam1[iParam2 /*80*/])->f_2 == 3)
					{
						bVar20 = func_137(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, (fVar19 * 0.95f), fVar17);
					}
					if ((uParam1[iParam2 /*80*/])->f_2 == 0 || (uParam1[iParam2 /*80*/])->f_2 == 1)
					{
						bVar20 = func_137(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, fVar19, (fVar17 * 0.95f));
					}
					if (bVar20)
					{
						bVar21 = false;
						if (iVar5 == ((uParam1[iParam2 /*80*/])->f_4 - 3))
						{
							if (iVar6 == (uParam1[iParam2 /*80*/])->f_2)
							{
								bVar21 = true;
							}
						}
						if (iVar5 < ((uParam1[iParam2 /*80*/])->f_4 - 2) && !bVar21)
						{
							func_133(iParam2);
						}
					}
				}
			}
			fVar15 = 0f;
			fVar16 = 0f;
			fVar17 = 0f;
		}
		iVar5++;
	}
	unk_0xDDD5C8D7152E128F("LineArcadeMinigame", "HeadPixel", fVar3, (uParam1[iParam2 /*80*/])->f_16, fVar4, 0.012f, (uParam1[iParam2 /*80*/])->f_17, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0);
}

void func_155(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_156(func_157(func_127(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}

void func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xC844146213F10F48(uParam0, 24, 31);
	*uParam2 = unk_0xC844146213F10F48(uParam0, 16, 23);
	*uParam3 = unk_0xC844146213F10F48(uParam0, 8, 15);
	*uParam4 = unk_0xC844146213F10F48(uParam0, 0, 7);
}

var func_157(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB4D5E37C91862216(uParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_158(uVar0, uVar1, uVar2, uVar3);
}

var func_158(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0x6DA51A6C96AD7E4A(&uVar0, 24, 31, uParam0);
	unk_0x6DA51A6C96AD7E4A(&uVar0, 16, 23, uParam1);
	unk_0x6DA51A6C96AD7E4A(&uVar0, 8, 15, uParam2);
	unk_0x6DA51A6C96AD7E4A(&uVar0, 0, 7, uParam3);
	return uVar0;
}

void func_159(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<6> Var11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var4 = 32;
	Var4.f_1.f_2 = -1;
	Var4.f_1.f_3 = -1082130432;
	Var4.f_1.f_4 = -1;
	Var4.f_1.f_5 = -1;
	Var4.f_1.f_6.f_2 = -1;
	Var4.f_1.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_4 = -1;
	Var4.f_1.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		if (unk_0x5F0847A02025CAB5(1, iVar0) == 174)
		{
			if (unk_0x234B68AC2E35ED5A(iLocal_146, 0))
			{
				if (unk_0x53858F1E03A88AE1(1, iVar0, &Var1, 6))
				{
					if (Var1 == 1369856535)
					{
						if (iVar5 < 16)
						{
							Var4[iVar5 /*6*/] = { Var1 };
							if (!unk_0x234B68AC2E35ED5A(iLocal_146, (7 + Var1.f_4)))
							{
								unk_0x191DDA30577F440A(&iLocal_146, (7 + Var1.f_4));
							}
							iVar5++;
						}
					}
				}
				if (unk_0x53858F1E03A88AE1(1, iVar0, &Var2, 3))
				{
					if (Var2.x == 461725328)
					{
						func_164(&(uParam0->f_35), Var2.f_2);
					}
				}
			}
			else if (unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 3))
			{
				if (Var3.x == 1786850017)
				{
					iLocal_147 = Var3.f_2;
				}
			}
		}
		iVar0++;
	}
	Var11.f_2 = -1;
	Var11.f_3 = -1082130432;
	Var11.f_4 = -1;
	Var11.f_5 = -1;
	iVar9 = iVar5;
	while (iVar9 <= 15)
	{
		if (Local_143[iVar9 /*6*/].f_5 < 99999 && Local_143[iVar9 /*6*/].f_5 > -1)
		{
			Var4[(iVar5 + iVar9) /*6*/] = { Local_143[iVar9 /*6*/] };
			Local_143[iVar9 /*6*/] = { Var11 };
			iVar10++;
		}
		iVar9++;
	}
	iVar5 = (iVar5 + iVar10);
	if (iVar5 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
		func_162(&Var4, 0, (iVar5 - 1));
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar5 - 1))
	{
		func_138(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
		if (Var4[iVar0 /*6*/].f_5 < 99999)
		{
			if (!uLocal_144[Var4[iVar0 /*6*/].f_4] == Var4[iVar0 /*6*/].f_4 * 10000)
			{
				if (Var4[iVar0 /*6*/].f_5 > uLocal_144[Var4[iVar0 /*6*/].f_4] + 2)
				{
					iVar12 = 0;
					if (func_161(&iVar12))
					{
						Local_143[iVar12 /*6*/] = { Var4[iVar0 /*6*/] };
					}
					if (Var4[iVar0 /*6*/].f_5 > uLocal_144[Var4[iVar0 /*6*/].f_4] + 4)
					{
						uLocal_144[Var4[iVar0 /*6*/].f_4]++;
					}
					Jump @2260; //curOff = 1568
				}
				else if (Var4[iVar0 /*6*/].f_5 < uLocal_144[Var4[iVar0 /*6*/].f_4])
				{
				}
				else
				{
					if (Var4[iVar0 /*6*/].f_5 == uLocal_144[Var4[iVar0 /*6*/].f_4] + 2)
					{
						fVar13 = 0f;
						fVar14 = 0f;
						fVar15 = 0f;
						fVar16 = 0f;
						iVar17 = -1;
						if (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 > 0)
						{
							func_138(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_19[(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 - 1)], &fVar15, &fVar16, 9974);
						}
						else
						{
							iVar18 = 0;
							iVar19 = 0;
							func_145(Local_152[Var4[iVar0 /*6*/].f_4 /*2*/], &iVar18, &fVar15, &fVar16, &iVar19);
						}
						switch (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_2)
						{
							case 0:
							case 1:
								if (fVar15 > fVar7)
								{
									iVar17 = 3;
								}
								else
								{
									iVar17 = 2;
								}
								break;
							
							case 3:
							case 2:
								if (fVar16 > fVar8)
								{
									iVar17 = 1;
								}
								else
								{
									iVar17 = 0;
								}
								break;
						}
						switch (iVar17)
						{
							case 0:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 1:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 3:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
							
							case 2:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
						}
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, iVar17, fVar13, fVar14, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					else
					{
						if (!Var4[iVar0 /*6*/].f_5 == uLocal_144[Var4[iVar0 /*6*/].f_4] + 1 && !Var4[iVar0 /*6*/].f_5 == Var4[iVar0 /*6*/].f_4 * 10000)
						{
						}
						func_138(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					uLocal_144[Var4[iVar0 /*6*/].f_4] = Var4[iVar0 /*6*/].f_5;
					Jump @2260; //curOff = 2132
					if (Var4[iVar0 /*6*/].f_2 == 4 && !unk_0x234B68AC2E35ED5A(iVar6, Var4[iVar0 /*6*/].f_4))
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_146, (15 + Var4[iVar0 /*6*/].f_4)))
						{
							unk_0x191DDA30577F440A(&iLocal_146, (15 + Var4[iVar0 /*6*/].f_4));
						}
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_15 = fVar7;
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_16 = fVar8;
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
				}
				iVar0++;
			}

void func_160(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	uParam0->f_35[iParam1 /*80*/].f_9 = iParam2;
	uParam0->f_35[iParam1 /*80*/].f_15 = fParam3;
	uParam0->f_35[iParam1 /*80*/].f_16 = fParam4;
	if (unk_0x234B68AC2E35ED5A(*iParam5, iParam1))
	{
		uParam0->f_35[iParam1 /*80*/].f_8 = uParam0->f_35[iParam1 /*80*/].f_2;
	}
	else
	{
		unk_0x191DDA30577F440A(iParam5, iParam1);
	}
}

int func_161(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 <= 15)
	{
		if (Local_143[*iParam0 /*6*/].f_5 == -1)
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_163(uParam0, iParam1, iParam2);
	if (iParam1 < (iVar0 - 1))
	{
		func_162(uParam0, iParam1, (iVar0 - 1));
	}
	if (iVar0 < iParam2)
	{
		func_162(uParam0, iVar0, iParam2);
	}
}

int func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_2 = -1;
	Var2.f_3 = -1082130432;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar3 = (uParam0[((iParam1 + iParam2) / 2) /*6*/])->f_5;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*6*/])->f_5 < iVar3)
		{
			iVar0++;
		}
		while ((uParam0[iVar1 /*6*/])->f_5 > iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var2 = { *(uParam0[iVar0 /*6*/]) };
			*(uParam0[iVar0 /*6*/]) = { *(uParam0[iVar1 /*6*/]) };
			*(uParam0[iVar1 /*6*/]) = { Var2 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_164(var uParam0, int iParam1)
{
	if (!unk_0x964C4D363AF812CB((uParam0[iParam1 /*80*/])->f_5))
	{
		unk_0x791B4C3811D53DFA((uParam0[iParam1 /*80*/])->f_5);
	}
	if (iParam1 == iLocal_145)
	{
		unk_0x9B0169E27978C1A2((uParam0[iParam1 /*80*/])->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	else
	{
		unk_0x9B0169E27978C1A2((uParam0[iParam1 /*80*/])->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	unk_0xB76EE71E771BDAA1((uParam0[iParam1 /*80*/])->f_6, "X", (uParam0[iParam1 /*80*/])->f_15);
	unk_0xB76EE71E771BDAA1((uParam0[iParam1 /*80*/])->f_6, "Y", (uParam0[iParam1 /*80*/])->f_16);
	func_16(uParam0, 3, iParam1);
}

void func_165(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_18)))
	{
		func_10(&(uParam0->f_18), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			func_131(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	func_153(uParam0);
	func_168(uParam0);
	func_147(uParam0);
	func_159(uParam0);
	func_167(uParam0);
	func_146(uParam0);
	if (Local_151 >= 7)
	{
		unk_0x791B4C3811D53DFA(uParam0->f_3);
		unk_0x9B0169E27978C1A2(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		func_9(&(uParam0->f_18));
		func_166();
		func_186(uParam0, 7);
	}
}

void func_166()
{
	int iVar0;
	struct<6> Var1;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uLocal_144[iVar0] = iVar0 * 10000;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Local_143[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
}

void func_167(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 2))
		{
			unk_0x9B0169E27978C1A2(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 2);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 1))
		{
			unk_0x9B0169E27978C1A2(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 1);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 0))
	{
		unk_0x9B0169E27978C1A2(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 0);
	}
}

void func_168(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 7))
		{
			func_57(uParam0, "DCTL_COUNTDOWN3", 0, 0);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 7);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 8))
		{
			func_57(uParam0, "DCTL_COUNTDOWN2", 0, 0);
			unk_0x191DDA30577F440A(&(uParam0->f_2), 8);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 9))
	{
		func_57(uParam0, "DCTL_COUNTDOWN1", 0, 0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 9);
	}
}

void func_169(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_16)))
	{
		func_10(&(uParam0->f_16), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0x5E72DF7B8C03AA05() - 1))
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			func_131(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 16);
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 18))
	{
		unk_0x9B0169E27978C1A2(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 18);
	}
	func_153(uParam0);
	func_170(uParam0);
	func_147(uParam0);
	func_146(uParam0);
	if (Local_151 == 10)
	{
		func_186(uParam0, 10);
		func_54(1);
	}
	else if (Local_151 >= 6)
	{
		func_186(uParam0, 6);
	}
}

void func_170(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 6))
	{
		func_57(uParam0, "DCTL_READY", 0, 2);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 6);
	}
}

void func_171(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	func_60(uParam0);
	func_172(uParam0);
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 16);
	}
	if (Local_151.f_77 == 3 && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 5))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
			{
				if (Local_151.f_2[iVar1] == -1)
				{
					bVar0 = false;
				}
				else
				{
					if (iVar1 == iLocal_145)
					{
						Local_152[iLocal_145 /*2*/] = Local_151.f_2[iLocal_145];
						func_145(Local_152[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
					}
					else if (Local_152[iVar1 /*2*/] == Local_151.f_2[iVar1])
					{
						func_145(Local_152[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
					}
					else
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (bVar0)
				{
					unk_0x191DDA30577F440A(&(Local_152[iLocal_145 /*2*/].f_1), 5);
				}
				if (Local_151 == 10)
				{
					unk_0x791B4C3811D53DFA(uParam0->f_3);
					unk_0x9B0169E27978C1A2(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_186(uParam0, 10);
					func_54(0);
				}
				else if (Local_151 >= 5)
				{
					uParam0->f_5 = unk_0xAB0F784335D14AC3();
					unk_0xB76EE71E771BDAA1(uParam0->f_3, "FadeOut", 7f);
					func_70();
					func_186(uParam0, 5);
					unk_0xC664C0067EEAB8D1(&(Local_152[iLocal_145 /*2*/].f_1), 5);
				}
			}

void func_172(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 13))
	{
		func_57(uParam0, "DCTL_LOADING", 0, 2);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 13);
	}
}

void func_173(var uParam0)
{
	if (unk_0x234B68AC2E35ED5A(uParam0->f_2, 14))
	{
		func_176(uParam0);
		unk_0xC664C0067EEAB8D1(&(uParam0->f_2), 14);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 17);
	}
	func_60(uParam0);
	func_175(uParam0);
	if (unk_0x3640D836D145B814())
	{
		unk_0x366E7F593105797F(2, 200, 1);
	}
	if (!unk_0xA300BD5F71A8C704())
	{
		if ((unk_0x86AF801D34E482FF(2, 201) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3)) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
		{
			func_79(3);
		}
		if ((unk_0x86AF801D34E482FF(2, 202) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3)) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if ((!unk_0x234B68AC2E35ED5A(uParam0->f_2, 4) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 3)) && !unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4))
	{
		unk_0x73AF76B5B436689C("DCTL_TITLEHELP", 0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 5);
	}
	func_174(uParam0);
	func_146(uParam0);
	func_64(uParam0, 0);
	if (Local_151 > 3)
	{
		if (unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 4) || unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 2))
		{
			func_186(uParam0, 11);
		}
		else
		{
			if (Local_151 == 10)
			{
				func_6(0);
				func_5(0, 0);
				func_186(uParam0, 10);
				func_54(1);
				return;
			}
			func_14(uParam0);
			func_6(0);
			func_5(0, 0);
			if (Local_151 == 4)
			{
				func_186(uParam0, 4);
			}
			else
			{
				uParam0->f_5 = unk_0xAB0F784335D14AC3();
				unk_0xB76EE71E771BDAA1(uParam0->f_3, "FadeOut", 7f);
				func_186(uParam0, 5);
			}
		}
	}
	else if (unk_0x964C4D363AF812CB(uParam0->f_3))
	{
		unk_0x9B0169E27978C1A2(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
}

void func_174(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)) && Local_152[iVar0 /*2*/] > -1)
		{
			if (unk_0x234B68AC2E35ED5A(Local_152[iVar0 /*2*/].f_1, 3) && !unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 0))
			{
				unk_0x9B0169E27978C1A2(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x191DDA30577F440A(&(uParam0->f_35[iVar0 /*80*/].f_3), 0);
				if (unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 1))
				{
					unk_0xC664C0067EEAB8D1(&(uParam0->f_35[iVar0 /*80*/].f_3), 1);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_152[iVar0 /*2*/].f_1, 4) && !unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 1))
			{
				unk_0x9B0169E27978C1A2(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x191DDA30577F440A(&(uParam0->f_35[iVar0 /*80*/].f_3), 1);
				if (unk_0x234B68AC2E35ED5A(uParam0->f_35[iVar0 /*80*/].f_3, 0))
				{
					unk_0xC664C0067EEAB8D1(&(uParam0->f_35[iVar0 /*80*/].f_3), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_175(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_2, 16))
	{
		unk_0x191DDA30577F440A(&(uParam0->f_2), 16);
	}
	func_65(uParam0, "DCTL_INSERT", 0);
	func_83(uParam0);
	func_81(uParam0);
}

void func_176(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "HIDE_LOADING_SCREEN");
		unk_0x392841D58D2EED1D();
	}
}

void func_177(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 1))
	{
		if (unk_0x02BFF15CAA701972())
		{
			func_32(unk_0x1146A9AE09CE2B14(), 0, 0, 0);
			func_180();
		}
		else
		{
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
		}
		func_49(1, 0, 1, 0);
		unk_0xB84B43B766630B5C("DLC_Exec_Arc_Mac_Playing_Game_Scene");
		func_179(uParam0);
		func_10(&(uParam0->f_10), 0, 0);
		unk_0x191DDA30577F440A(&(uParam0->f_2), 14);
		unk_0x191DDA30577F440A(&(Local_152[iLocal_145 /*2*/].f_1), 1);
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				unk_0x9B0169E27978C1A2(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_178(uParam0, 1);
				break;
			
			case 1:
				if (func_8(&(uParam0->f_10), 1800, 0))
				{
					unk_0x9B0169E27978C1A2(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_178(uParam0, 2);
				}
				break;
			
			case 2:
				if (func_8(&(uParam0->f_10), 2250, 0))
				{
					if (unk_0x964C4D363AF812CB(uParam0->f_3))
					{
						unk_0x9B0169E27978C1A2(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					}
					func_178(uParam0, 3);
				}
				break;
		}
		if (func_8(&(uParam0->f_10), 2200, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_2), 17);
		}
		if (func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1 == 3 && func_8(&(uParam0->f_10), 3000, 0)) && unk_0x86AF801D34E482FF(2, 201)))
		{
			unk_0x191DDA30577F440A(&(Local_152[iLocal_145 /*2*/].f_1), 6);
			func_70();
			if (Local_151 == 9)
			{
				func_186(uParam0, 9);
			}
			else if (Local_151 >= 3)
			{
				func_186(uParam0, 3);
			}
		}
	}
}

void func_178(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_179(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_34))
	{
		unk_0x704F8697BB515627(uParam0->f_34, "SHOW_LOADING_SCREEN");
		unk_0x392841D58D2EED1D();
	}
}

void func_180()
{
	if (!Global_2441237.f_1274.f_10)
	{
		Global_2441237.f_1274.f_10 = 1;
	}
}

void func_181(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Local_152[iLocal_145 /*2*/].f_1, 0))
	{
		func_183();
		uParam0->f_34 = unk_0x42AA2CCF0B61DCD8("dont_cross_the_line");
		if (func_182() && unk_0xDAE4BC89A198A6AF(uParam0->f_34))
		{
			unk_0x191DDA30577F440A(&(Local_152[iLocal_145 /*2*/].f_1), 0);
			func_186(uParam0, 2);
		}
	}
}

int func_182()
{
	if ((unk_0x952AB441FA24BF16("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1) && unk_0xAD9D75DD073BF477("LineArcadeMinigame")) && unk_0x080D38ACEC5DC1A2(3))
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if (unk_0x952AB441FA24BF16("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1))
	{
		unk_0xA08F3C300F9E3468("LineArcadeMinigame", 0);
		unk_0xBB3CDAB62C8773C8("DCTL", 3);
		unk_0x191DDA30577F440A(&Global_1669327, 6);
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (iLocal_145 == -1)
	{
		Global_4456448.f_128335 = 1;
		uParam0->f_8 = func_185();
		uParam0->f_3 = unk_0x5AD02BBC63E31E46();
		uParam0->f_6 = unk_0x5AD02BBC63E31E46();
		uParam0->f_7 = unk_0x5AD02BBC63E31E46();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_35[iVar0 /*80*/].f_5 = unk_0x5AD02BBC63E31E46();
			uParam0->f_35[iVar0 /*80*/].f_6 = unk_0x5AD02BBC63E31E46();
			uParam0->f_35[iVar0 /*80*/].f_7 = unk_0x5AD02BBC63E31E46();
			iVar0++;
		}
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 16);
		iLocal_145 = unk_0xDD0E57E73E5C4BF6();
		Local_152[iLocal_145 /*2*/] = -1;
		uParam0->f_34 = 0;
		func_79(2);
		func_178(uParam0, 0);
	}
	if (Local_152[iLocal_145 /*2*/] == -1)
	{
		if (Local_151.f_2[iLocal_145] > -1)
		{
			Local_152[iLocal_145 /*2*/] = Local_151.f_2[iLocal_145];
		}
	}
	else
	{
		func_186(uParam0, 1);
	}
	func_6(0);
}

float func_185()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	unk_0x32C9F8FADAAEEFE6(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (unk_0x3640D836D145B814())
	{
		if (fVar2 >= 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	*uParam0 = iParam1;
}

void func_187(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	unk_0xB5D61F76D4980A55(0);
	unk_0xB5D61F76D4980A55(2);
	unk_0x51D19921B47902B3(0);
	func_207(1);
	func_206(4, -1);
	unk_0x8ADA5005075878E9(19);
	func_205();
	func_204();
	func_203();
	unk_0xD8A14DD983454D11();
	if ((!func_201(unk_0x1146A9AE09CE2B14()) && !func_200(unk_0x1146A9AE09CE2B14())) && !func_198(unk_0x1146A9AE09CE2B14()))
	{
		func_186(uParam0, 11);
	}
	if (!func_45())
	{
		func_186(uParam0, 11);
	}
	if (func_200(unk_0x1146A9AE09CE2B14()) && unk_0x8B6A925F148E0E94())
	{
		func_186(uParam0, 11);
	}
	if (func_198(unk_0x1146A9AE09CE2B14()) && unk_0x8B6A925F148E0E94())
	{
		func_186(uParam0, 11);
	}
	func_197();
	unk_0xDA81FB7770247CC0();
	if (Local_151 > 2)
	{
		func_190(0);
	}
	func_188(uParam0);
	if (!unk_0xA300BD5F71A8C704() && Local_151 > 2)
	{
		unk_0xAF98B1BA240CE3DB();
		unk_0x0F33095580A670CE(1);
	}
	if (unk_0x443E2CA72E118E64() && !Local_151 == 4)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
			{
				if (Local_151.f_2[iVar1] == -1)
				{
					Local_151.f_2[iVar1] = func_24();
					bVar0 = true;
				}
			}
			else if (Local_151.f_2[iVar1] != -1)
			{
				Local_151.f_2[iVar1] = -1;
				bVar0 = true;
			}
			iVar1++;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= (unk_0x5E72DF7B8C03AA05() - 1))
			{
				if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
				{
					iVar2 = 0;
					while (iVar2 <= (unk_0x5E72DF7B8C03AA05() - 1))
					{
						if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)))
						{
							if (iVar2 != iVar1 && (Local_151.f_2[iVar1] == Local_151.f_2[iVar2] || Local_151.f_2[iVar1] == -1))
							{
								Local_151.f_2[iVar1] = -1;
								return;
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_188(var uParam0)
{
	uParam0->f_8 = func_185();
	uParam0->f_9 = func_189(uParam0->f_8);
}

float func_189(float fParam0)
{
	return (1.778f / fParam0);
}

void func_190(int iParam0)
{
	if (func_196())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_195(0))
		{
			func_191(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_191(int iParam0)
{
	if (func_196())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_194())
		{
			func_193(1, 1);
		}
		else
		{
			func_193(0, 0);
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
	if (!func_192())
	{
		Global_19798.f_1 = 3;
	}
}

int func_192()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_193(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_195(0))
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

bool func_194()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_195(int iParam0)
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

bool func_196()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_197()
{
	Global_22531.f_134 = 1;
}

int func_198(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_199(Global_2426865[iParam0 /*449*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_199(Global_2426865[iParam0 /*449*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (func_202(Global_1590908[iParam0 /*874*/].f_267.f_29))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
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

void func_203()
{
	Global_2544210.f_4598 = 0;
}

void func_204()
{
	Global_22531.f_6 = 1;
}

void func_205()
{
	Global_1312593 = 1;
	StringCopy(&(Global_1312593.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312593.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312593.f_1));
}

void func_206(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1379108.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1379108.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_207(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

void func_208()
{
	func_29(&uLocal_153);
	func_30();
}

int func_209()
{
	var uVar0;
	
	func_216(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_215())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213(159))
	{
		if (!func_212())
		{
			return 1;
		}
	}
	if (func_213(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_210() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_210()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_210()
{
	switch (func_92())
	{
		case 0:
			return func_211();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_211()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_212()
{
	return Global_2453009.f_698;
}

int func_213(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return Global_2463497;
}

bool func_215()
{
	return Global_2453009.f_693;
}

void func_216(var uParam0)
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
					func_217(iVar0);
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

void func_217(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_21(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_218(uVar2, &bVar3))
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

int func_218(int iParam0, var uParam1)
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

void func_219()
{
	wait(0);
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3, 3))
		{
			func_183();
		}
		unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 3);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_3), 3);
	}
}

void func_221(struct<21> Param0)
{
	func_225(4, Param0);
	if (!func_224(0, -1, 1))
	{
		func_208();
	}
	func_223();
	unk_0xF784CE07ED70869A(&Local_151, 78);
	unk_0xC84352B5E80ABF68(&Local_152, 9);
	if (!func_222())
	{
		func_208();
	}
}

int func_222()
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
		if (func_215())
		{
			return 0;
		}
		if (func_213(157))
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

void func_223()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_151.f_2[iVar0] = -1;
		iVar0++;
	}
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
		if (!func_94())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_215())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_213(157))
				{
					if (!bParam2)
					{
						func_30();
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
					func_30();
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
				func_30();
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
			func_30();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_225(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x02BFF15CAA701972())
	{
		func_30();
	}
	unk_0x35BEDD7AFD26FCD5(iParam0, 0, Param1.f_16);
}

