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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	var uLocal_184 = 0;
	struct<3> Local_185 = { 0, 0, 0 } ;
	struct<3> Local_186 = { 0, 0, 0 } ;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 21;
	fLocal_47 = -1f;
	Local_54 = { 0f, 0f, 0f };
	iLocal_55 = -1;
	sLocal_180 = "FBIPRA";
	Local_185 = { 0f, 0f, 0f };
	Local_186 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = -1;
	unk_0xC189FA1CE4E3B2A5(1);
	if (unk_0x4210287E2833D44B(19))
	{
		sLocal_179 = 0;
		func_387();
		func_375();
	}
	func_358();
	if (func_357())
	{
		func_356(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_342();
	while (true)
	{
		unk_0xE9F487B66E055135("M_TrT", 0);
		if (func_341(unk_0x7D2B9E6A64637269()))
		{
			func_337();
			func_333();
			unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
			unk_0xCAFB54B99BF4F907(0.8f);
			switch (iLocal_68)
			{
				case 0:
					func_270();
					break;
				
				case 1:
					func_239();
					break;
				
				case 2:
					func_221();
					break;
				
				case 3:
					func_108();
					break;
				
				case 4:
					func_39();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			unk_0x1036762BD3781C84();
			unk_0x66AE54CE92457FEE(1);
			func_38();
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if (func_37(iVar0) && unk_0x6471F4759775FCA4(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!unk_0xAB6A270F84A8781E(sLocal_179))
			{
				func_34(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x6AF7EE4DD9F8B944(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 30f, 1, 0, 0, 0);
				func_375();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_199);
	func_9(&uLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&uLocal_202);
	func_3();
}

void func_3()
{
	func_7(&(Local_45[0 /*11*/].f_4));
	func_7(&(Local_45[1 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_45[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_46[iLocal_48 /*25*/].f_17), 0);
	unk_0x45881466B05A8703(uLocal_40);
	unk_0xF9135F131C423364("missfbi4prepp1");
	unk_0x513390158FC17713("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (unk_0xD79E16EA1337F8F9(*uParam0))
		{
			unk_0x3211C35423263392(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x39E572BDDBA714A2(uParam0);
		}
		else
		{
			unk_0xF0BD1DDC919E4BA7(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(*uParam0))
		{
			unk_0x46EDFC827DC67D89(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB154967CB3B9C1CF(*uParam0);
			}
			unk_0x504B26425DFF773C(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBE91B077ADADE97F(*uParam0, false);
			}
		}
		unk_0x0F3BD19FF11738D3(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		unk_0xE50EB54E0F21BED0(*uParam0, 0);
		if (unk_0xEE1D92A39CF8E1E6(*uParam0) && unk_0x9984C023D4E57C2E(*uParam0, 1))
		{
			unk_0x795957CD3A0042C8(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0x575B7C28D81C0B4D(*iParam0))
	{
		unk_0x13CC211F9F7ACE7F(*iParam0, 0);
		unk_0x1AD5BCFEC31BB8D9(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0x419E13582192CFEA(*iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(*iParam0, 0))
		{
			unk_0x46EDFC827DC67D89(*iParam0, 0, 1);
		}
		if (!unk_0xEE1D92A39CF8E1E6(*iParam0))
		{
			unk_0x4985CD0720AFD468(*iParam0, 1, 0);
		}
		unk_0xC606AE2A3209945E(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
		{
			unk_0x4985CD0720AFD468(*uParam0, 1, 0);
		}
		if (func_37(*uParam0))
		{
			if (unk_0xEE1D92A39CF8E1E6(*uParam0) && unk_0x9984C023D4E57C2E(*uParam0, 1))
			{
				if (func_10(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam0, 0))
					{
						unk_0x795957CD3A0042C8(uParam0);
						return;
					}
				}
				unk_0x5420D0D520CF44D0(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam0, 0))
				{
					unk_0x795957CD3A0042C8(uParam0);
					return;
				}
			}
			unk_0x5420D0D520CF44D0(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam1)
{
	func_13(&(Global_105842.f_2890), Param0, fParam1);
}

void func_13(var uParam0, struct<3> Param1, var uParam2)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam2;
}

void func_14(struct<3> Param0, float fParam1)
{
	if (func_15(Global_77488, 0f, 0f, 0f, 0))
	{
		Global_77488 = { Param0 };
		Global_77491 = fParam1;
	}
}

bool func_15(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_16()
{
	if (Global_99370 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_99370 == 7 || Global_99370 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_112293.f_9083 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
		Global_99406 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xD91B27582ECB3B74(5000);
	}
	iVar0 = Global_90122[iParam0 /*5*/];
	iVar1 = Global_77517.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0xEB25B6CFBE0FD35C(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	func_20(&(Global_112293.f_2361.f_539), iVar1);
	if (Global_93545 == Global_99407)
	{
		Global_112293.f_9083.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_90158[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x79B648063E94A67F(0);
		}
	}
	Global_112293.f_9083.f_330[iVar1 /*6*/].f_2++;
	Global_93545 = Global_99407;
	if (iParam0 == -1)
	{
		if (Global_112293.f_9083)
		{
		}
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_112293.f_18531[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_112293.f_18531[iVar0], &Var2, &fVar3))
			{
				Global_112293.f_18531[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96760[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_9 = 0f;
				Global_96760[iVar0 /*29*/].f_12 = 0f;
				Global_96760[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_10 = 0f;
				Global_96760[iVar0 /*29*/].f_13 = 0f;
				Global_96760[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_11 = 0f;
				Global_96760[iVar0 /*29*/].f_14 = 0f;
				Global_96760[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_26 = 0f;
				Global_96760[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_27 = 0f;
				Global_96760[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93355[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93355[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
	}
	else if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_30(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_29(unk_0x7D2B9E6A64637269());
			if (func_28(iVar0) && (!func_27(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_28(Global_112293.f_2361.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		if (unk_0xA3A3E3B836DB6D5B(sParam0) <= 16)
		{
			StringCopy(&Global_77480, sParam0, 16);
			StringCopy(&Global_77484, "", 16);
			if (unk_0x2D54F00919E36B63())
			{
				unk_0xAD9DFA8200EA2A8A();
			}
		}
	}
}

void func_36(int iParam0, int iParam1)
{
	Global_99370.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (!unk_0x2AB8EC6521549BAD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38()
{
	func_7(&iLocal_182);
}

void func_39()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		
		case 1:
			if (!func_107(unk_0x7D2B9E6A64637269(), Local_186, 270f))
			{
				iLocal_69 = 2;
			}
			else if (!func_106("PRA_LEVAREA", 0, 0))
			{
				func_105("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0, 0))
			{
				unk_0x1036762BD3781C84();
			}
			if (iVar0 == 0)
			{
				if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(iVar0), -621899663, -621899663, 5, 0, iVar0, func_56(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A())
	{
		if (!unk_0x07BE48DF95787FCB())
		{
			unk_0x6E1E3A5B1F9AB95B(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xE0A6F16F546C8274())
		{
			wait(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x638BDC79E655C1C2();
	unk_0xD0F4606D5A7F6B9A(uVar0, 0);
	unk_0xF99B8860747709DD(uVar0, iParam3, 0);
	func_43(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xDD7C2F9844E745B1(1);
		unk_0x4200138CBB376D4D(1);
	}
	unk_0x66AE54CE92457FEE(1);
	if (iParam0 == 1)
	{
		unk_0x2CA971FF57ACA369(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x6CEA35622FBD9702(unk_0x7D2B9E6A64637269(), iLocal_37, 0))
				{
					unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_341(unk_0x7D2B9E6A64637269()))
	{
		unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_52(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_51())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_50(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_52(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_50(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_48(unk_0x1146A9AE09CE2B14())) && !func_45(unk_0x1146A9AE09CE2B14(), 0)) && !func_44()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_48(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_44()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312763;
}

int func_48(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_49())
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

bool func_49()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_50(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_51()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0)
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

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_112293.f_7686.f_136 < 9)
	{
		Var0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_112293.f_7686.f_911 == Var0)
		{
			Global_112293.f_7686.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0xDFB7BFA6482FEE1E() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		unk_0x191DDA30577F440A(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x191DDA30577F440A(&(Var0.f_1), 0);
		unk_0x191DDA30577F440A(&(Var0.f_1), 13);
		unk_0xC664C0067EEAB8D1(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0x191DDA30577F440A(&(Var0.f_1), 10);
		}
		Global_112293.f_7686[Global_112293.f_7686.f_136 /*15*/] = { Var0 };
		Global_112293.f_7686.f_136++;
		func_54(iParam5);
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_112293.f_7686[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_112293.f_7686[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_112293.f_7686.f_764)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_112293.f_7686.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_112293.f_7686.f_919[iParam0] = iVar1;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_57(int iParam0)
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()
{
	unk_0x1036762BD3781C84();
	func_61();
	func_59(0, 0);
	func_375();
}

void func_59(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_62100)
	{
		Global_62100 = iParam1;
	}
	if (bParam0)
	{
		if ((func_33(0) && Global_77494.f_1 == 1) && func_60(Global_77494))
		{
		}
		else
		{
			Global_62098 = 1;
		}
	}
	if (Global_112293.f_9083 || func_33(0))
	{
		iVar0 = func_32();
		iVar1 = Global_90122[iVar0 /*5*/];
		uVar2 = Global_77517.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_112293.f_9083)
			{
			}
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 4);
		unk_0x191DDA30577F440A(&Global_77496, 1);
		Global_77512 = uVar2;
		Global_77513 = unk_0xDFB7BFA6482FEE1E();
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_61()
{
	Global_19991 = 0;
	func_62();
}

void func_62()
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

void func_63()
{
	func_66(0, -1);
	func_65(0, 318);
	func_64(1, 320);
}

void func_64(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_62106)
	{
	}
	Global_62106 = 0;
	if (bParam0)
	{
		Global_62107 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_62323[Global_74194[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_74194[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_74194[iVar0 /*9*/] > 0)
			{
				if (Global_74194[iVar0 /*9*/] == iParam1)
				{
					Global_74194[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_62111 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_74193)
	{
		if (iParam1 == -1 || Global_74194[iVar0 /*9*/] == iParam1)
		{
			if (Global_74194[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_74194[iVar0 /*9*/].f_6 = iParam0;
				Global_74194[iVar0 /*9*/].f_7 = 1;
				Global_74194[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Global_62109 = iParam0;
	Global_62110 = iParam1;
}

int func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_103())
			{
				if ((func_102(74) || func_102(75)) && func_101())
				{
					if (func_25() == 0)
					{
						func_100(1);
						func_99(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_81(1) };
							func_99(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_100(0);
					*uParam0 = 4;
				}
				else
				{
					func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_81(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_73())
			{
				if (unk_0x9618CA3AB2A82C04() >= 0)
				{
					func_72("FBIPRAU", sParam1);
					func_71(1);
					*uParam0 = 3;
				}
			}
			if (func_70())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_73())
			{
				if (!func_69(0))
				{
					if (!func_102(3) && func_103())
					{
						func_68(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112293.f_8611[iParam0] = 1;
	Global_112293.f_8611.f_236[iParam0] = (unk_0xDFB7BFA6482FEE1E() + iParam1);
}

int func_69(int iParam0)
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

int func_70()
{
	if (Global_21174 == 1 || Global_22141 == 1)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	unk_0x75B41F5020877259(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (unk_0x8820F6FCD373F9F7())
	{
		Global_21182 = 1;
		StringCopy(&Global_21189, sParam0, 24);
		StringCopy(&Global_21183, sParam1, 24);
	}
}

int func_73()
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

void func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0xECEC7528A52B4EE8(iVar1))
		{
			if (func_78(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_75(func_76(), 0, func_25(), func_97(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_112293.f_7686.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_112293.f_7686.f_911 == Var0)
		{
			Global_112293.f_7686.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0xDFB7BFA6482FEE1E() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0x191DDA30577F440A(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x191DDA30577F440A(&(Var0.f_1), 0);
		unk_0xC664C0067EEAB8D1(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x191DDA30577F440A(&(Var0.f_1), 10);
		}
		Global_112293.f_7686[Global_112293.f_7686.f_136 /*15*/] = { Var0 };
		Global_112293.f_7686.f_136++;
		func_54(iParam2);
		return 1;
	}
	return 0;
}

int func_76()
{
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_77()
{
	return Global_77510;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x7D2B9E6A64637269())
			{
				return 0;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_95223, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0x7D2B9E6A64637269();
	}
	return Global_96848[func_80(iParam0)];
}

int func_80(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_81(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_82(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_6986 = iParam2;
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21139 = 0;
	Global_21130 = 1;
	Global_21177 = 0;
	Global_21179 = 0;
	if (iParam6 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	Global_2621441 = 0;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x75B41F5020877259(false);
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
					func_62();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_93();
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
				func_92();
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
				if (func_91())
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
			if (func_51())
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
			func_90();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_89();
		func_84();
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
		func_62();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
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

int func_85()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_88())
	{
		return 0;
	}
	if (func_86(unk_0x1146A9AE09CE2B14()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

bool func_87(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_88()
{
	return -1;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(false);
	Global_21125 = 1;
}

void func_90()
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

int func_91()
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

void func_92()
{
	if (func_27(14))
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
		Global_19798 = func_25();
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

void func_93()
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

bool func_94(int iParam0, int iParam1)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_96()
{
	char* sVar0;
	
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_97()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_112293.f_9083.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_112293.f_9083.f_99.f_58[iParam0] = iParam1;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_102(3))
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_101()
{
	if ((func_102(41) && func_102(3)) && func_102(21))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

bool func_106(char* sParam0, int iParam1, int iParam2)
{
	unk_0x40542ED8EFC7D2D7(sParam0);
	if (iParam1 == 1)
	{
		unk_0x1896EC0B030A48A2(iParam2);
	}
	return unk_0xB4BAEA083E2652CB();
}

bool func_107(int iParam0, struct<3> Param1, float fParam2)
{
	return vdist2(unk_0xD6E677FAD7521410(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

void func_108()
{
	func_215(&iLocal_200, &uLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
				{
					if (func_37(iLocal_200))
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_200, 0))
						{
							func_121("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_182, Local_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_113(iLocal_200, Local_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_199))
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Local_199, 0))
				{
					unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), Local_199, -1);
				}
				else
				{
					func_109(Local_199, Local_186, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

int func_109(int iParam0, struct<3> Param1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x7956E831D8C0C17C(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0x78CDDD1E6367978D(iParam0, Param1, 1, 0, 0, iParam4);
		unk_0xCD37A28258D70638(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	func_111(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_112()
{
	if (func_103())
	{
		if ((func_102(74) || func_102(75)) && func_101())
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_37(iParam0))
			{
				if (!unk_0x020175C59CBE79DB(iParam0))
				{
					func_121(func_119(func_77()), iParam9);
				}
			}
			if (!unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Param1, fParam10, fParam10, 2f, 0, 1, 2))
			{
				unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Param1, fParam10, fParam10, 2f, 1, 1, 2);
				if (func_106(func_119(func_77()), 0, 0))
				{
					unk_0xAA18C87A1A6C1FAE(func_119(func_77()));
				}
				*iParam5 = 1;
				func_117(iParam2, Param1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_107(unk_0x7D2B9E6A64637269(), Param1, fVar0))
					{
						*iParam5 = 0;
						func_116(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (unk_0x591190E69BE43117(iParam0, Param1, fParam10, fParam10, 2f, 0, 1, 2))
	{
		if (*iParam7 == -1)
		{
			unk_0x5C052A30B9FCA449(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_106(func_119(func_77()), 0, 0))
			{
				unk_0x1036762BD3781C84();
			}
			*iParam7 = unk_0xDFB7BFA6482FEE1E();
			*iParam8 = 1;
			unk_0x5C052A30B9FCA449(iParam0, 2);
		}
		else if ((unk_0xDFB7BFA6482FEE1E() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0xAFD2714E8B5AEB9F(iParam0) == 2)
		{
			unk_0x5C052A30B9FCA449(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0xAA18C87A1A6C1FAE(func_115(func_77(), 0));
			}
			if (!func_106(func_114(func_77()), 0, 0))
			{
				func_105(func_114(func_77()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_114(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_115(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_116(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	if (unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
		{
			if (!unk_0x8879B2803A5F8682(iVar0))
			{
				unk_0x101C61FF49B27BB8(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xE6046EB2291D084D(unk_0x7D2B9E6A64637269()))
	{
		return 1;
	}
	if (unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		if (unk_0x8879B2803A5F8682(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0, struct<3> Param1, int iParam2)
{
	if (!unk_0x575B7C28D81C0B4D(*iParam0))
	{
		*iParam0 = func_118(Param1, 5, iParam2);
	}
}

int func_118(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xC5BBAB0F8336ECB7(iVar0, iParam1);
	unk_0xDD205B87CDFD0C1B(iVar0, 1f);
	unk_0x13CC211F9F7ACE7F(iVar0, iParam2);
	return iVar0;
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_120(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (*iParam2)
	{
		case 0:
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				unk_0x1036762BD3781C84();
				func_105("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
			{
				unk_0x1036762BD3781C84();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_121(func_115(func_77(), 0), iParam4);
					func_117(iParam0, Param1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_105(func_114(func_77()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_121(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, Local_185, 0))
			{
				if (func_148())
				{
					func_147(33);
					unk_0x16C6E55F8C91ED24(joaat("trash"), 1);
					unk_0x16C6E55F8C91ED24(joaat("towtruck"), 1);
					unk_0x16C6E55F8C91ED24(joaat("s_m_y_garbage"), 1);
					iLocal_68 = 2;
					func_7(&iLocal_182);
					func_145(&uLocal_56, 0, 0);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					unk_0x911ACE3851C77474("DRIVE", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4)) && func_141(0))
				{
					func_142();
					func_147(33);
					if (func_341(Local_197))
					{
						func_140(Local_197);
					}
					if (func_341(Local_198))
					{
						func_139(Local_198);
					}
					func_138(Local_199);
					if (func_341(Local_198) && func_341(Local_197))
					{
						func_127(iLocal_187, 1, 0, 1);
					}
					unk_0x16C6E55F8C91ED24(joaat("trash"), 1);
					unk_0x16C6E55F8C91ED24(joaat("towtruck"), 1);
					unk_0x16C6E55F8C91ED24(joaat("s_m_y_garbage"), 1);
					if (unk_0xDBB89442BDC45F07(Local_199) != 0)
					{
						iVar0 = unk_0xDBB89442BDC45F07(Local_199);
						unk_0xAE9FE38DB6527FDA(1);
						func_7(&iVar0);
						unk_0xAE9FE38DB6527FDA(0);
					}
					func_125(&iLocal_182, Local_199, 1);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0x911ACE3851C77474("DRIVE", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4))
				{
					func_124(unk_0x7D2B9E6A64637269(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					unk_0x911ACE3851C77474("DRIVE", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_199.f_1, Local_199.f_4))
				{
					func_123();
					func_142();
					unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), Local_199, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_149(2, Local_186, Local_199.f_4))
				{
					func_123();
					unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), Local_199, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_123()
{
	if (iLocal_68 == 1)
	{
		func_140(Local_197);
		func_139(Local_198);
		func_138(Local_199);
		func_127(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_124(int iParam0, struct<3> Param1, float fParam2)
{
	if (func_341(uParam0))
	{
		unk_0xCA089CD1A17D76DF(uParam0);
	}
	func_109(iParam0, Param1, fParam2, 0, 1);
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x575B7C28D81C0B4D(*iParam0))
	{
		*iParam0 = func_126(iParam1, iParam2, 5);
	}
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0xB20BB447C131B310(uParam0);
		unk_0xB592493CDC7124C3(iVar0, uParam1);
		unk_0xC5BBAB0F8336ECB7(iVar0, iParam2);
		unk_0xDD205B87CDFD0C1B(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0 /*11*/].f_1 = 0;
	Local_45[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		Local_46[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_129();
	Local_45[1 /*11*/].f_7 = 3;
	Local_45[1 /*11*/].f_5 = 0;
	Local_45[1 /*11*/].f_10 = 1;
	Local_45[1 /*11*/].f_2 = 1500;
	Local_45[1 /*11*/].f_3 = 500;
	Local_45[0 /*11*/].f_5 = 0;
	Local_45[0 /*11*/].f_10 = 0;
	Local_45[0 /*11*/].f_2 = 1000;
	Local_45[0 /*11*/].f_3 = 100;
	unk_0xF479CA7199C54C8F("Enemies", &uLocal_40);
	unk_0x2271ED1E65FB75EE(Local_45[0 /*11*/], uLocal_40);
	unk_0x2271ED1E65FB75EE(Local_45[1 /*11*/], uLocal_40);
	unk_0xEA44C65D5434D223(Local_45[0 /*11*/], 1, 0);
	unk_0xEA44C65D5434D223(Local_45[1 /*11*/], 1, 0);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(struct<3> Param0, struct<3> Param1)
{
	Local_42.f_8 = { Param0 };
	Local_42.f_11 = { Param1 };
	Local_42.f_1 = 4;
}

void func_129()
{
	if (!unk_0xF41EB7643E61A928(Local_45[0 /*11*/], iLocal_43, 0))
	{
		unk_0x45B1B4E55BF15523(Local_45[0 /*11*/], unk_0x9E695CE384C77EF0(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)
{
	if (!unk_0x9B73EB6255D4AE81(iLocal_43, 0, 0))
	{
		func_131(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				unk_0xB95DDD9ED08D971C(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				unk_0xE946751408DFA71B(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x0509CE092AC81B7C(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_131(bool bParam0)
{
	if (iLocal_48 != -1)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_11) && !func_136(Local_46[iLocal_48 /*25*/].f_14))
		{
			unk_0x86DA8A407ED8A381(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_48 = func_132();
	}
	if (iLocal_48 != -1)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_11) && !func_136(Local_46[iLocal_48 /*25*/].f_14))
		{
			unk_0x86DA8A407ED8A381(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, 0, 1);
		}
	}
}

int func_132()
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_37(iLocal_43))
	{
		Var1 = { unk_0xD6E677FAD7521410(iLocal_43, 1) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = unk_0x0BABEFEA577FCFA4(Var1, Local_46[iVar2 /*25*/], 1);
			if (!func_136(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_133(Local_46[iVar0 /*25*/] - Var1, unk_0x557C9CA8FCC667DF(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			Var1 = { unk_0xD6E677FAD7521410(iLocal_43, 1) };
			fVar7 = func_133(Local_46[iVar3 /*25*/] - Var1, unk_0x557C9CA8FCC667DF(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_133(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = -1;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_48 = func_135();
			}
			else
			{
				iLocal_48 = -1;
				return;
			}
		}
		else
		{
			iLocal_48 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, (iLocal_41 - 1));
	while (Local_46[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, (iLocal_41 - 1));
	}
	return iVar0;
}

int func_136(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_137(bool bParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (!bParam0)
	{
		uVar1 = unk_0xED5AD56E2C551D1E(iLocal_43, "wheel_rf");
	}
	else
	{
		uVar1 = unk_0xED5AD56E2C551D1E(iLocal_43, "wheel_lf");
	}
	Var0 = { unk_0xE8E46B75F88C4ACC(iLocal_43, uVar1) };
	Var0 = { unk_0x8EB57098C563AB39(iLocal_43, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_138(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_139(var uParam0)
{
	if (func_341(uParam0))
	{
		Local_45[1 /*11*/] = uParam0;
	}
}

void func_140(var uParam0)
{
	if (func_341(uParam0))
	{
		Local_45[0 /*11*/] = uParam0;
	}
}

int func_141(bool bParam0)
{
	unk_0x068BDE31F7D112BB("missfbi4prepp1");
	unk_0x4FF5AF70CF79B316("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0x0EC2B29D4172D225("missfbi4prepp1") && !unk_0xD8DCEA7B6A249141("missfbi4prepp1_garbageman"))
		{
			wait(0);
		}
		return 1;
	}
	else if (unk_0x0EC2B29D4172D225("missfbi4prepp1") && unk_0xD8DCEA7B6A249141("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	func_143(&uLocal_205);
}

void func_143(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_98(uParam0, iVar0, unk_0x7D2B9E6A64637269(), sVar1, 0, 1);
}

void func_144(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.x == Global_31724[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_31724[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_31724[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_31721 = 1;
	unk_0x191DDA30577F440A(&(Global_31724[iVar0 /*23*/].f_11), 18);
	Global_31724[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_37774 = 1;
}

void func_145(var uParam0, int iParam1, int iParam2)
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
		if (func_146(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_146(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

bool func_146(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_147(int iParam0)
{
	if (Global_96292 != -1)
	{
		if (iParam0 == Global_96292)
		{
			Global_96296 = 1;
			return;
		}
	}
}

int func_148()
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("trash")))
		{
			unk_0x4985CD0720AFD468(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 1, 0);
			iLocal_200 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (func_37(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			if (func_154(Param1, Local_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xBB3CDAB62C8773C8(sLocal_180, 0);
			if (unk_0x080D38ACEC5DC1A2(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_95867[0]))
			{
				unk_0x4985CD0720AFD468(Global_95867[0], 1, 1);
				Local_199 = Global_95867[0];
				if (func_37(Local_199))
				{
					func_36(Local_199, 0);
					unk_0xD4DF29F3D7B97053(Local_199, 1);
					unk_0x8B58E7AC53EED9F1(Local_199, 1);
					return 1;
				}
			}
			else if (func_153(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				func_36(Local_199, 0);
				unk_0xD4DF29F3D7B97053(Local_199, 1);
				unk_0x8B58E7AC53EED9F1(Local_199, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x419E13582192CFEA(Global_95867.f_9[0]))
			{
				if (!unk_0xC6D04E4B28753F77(Global_95867.f_9[0], 1))
				{
					unk_0x4985CD0720AFD468(Global_95867.f_9[0], 1, 1);
					Local_197 = Global_95867.f_9[0];
					if (func_341(Local_197))
					{
						unk_0xBE91B077ADADE97F(Local_197, true);
						unk_0x7B28A83A0D3DD0F9(Local_197, 170, 0);
						unk_0x82D2BB48A39F1E88(Local_197, 65536, 1);
						unk_0xA415F00D0E0DFBCE(Local_197, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_199))
				{
					unk_0xB1D85A6C23F2F945(Local_197, Local_199, -1);
					unk_0xBE91B077ADADE97F(Local_197, true);
					unk_0x7B28A83A0D3DD0F9(Local_197, 170, 0);
					unk_0x82D2BB48A39F1E88(Local_197, 65536, 1);
					unk_0xA415F00D0E0DFBCE(Local_197, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x419E13582192CFEA(Global_95867.f_9[1]))
			{
				if (!unk_0xC6D04E4B28753F77(Global_95867.f_9[1], 1))
				{
					unk_0x4985CD0720AFD468(Global_95867.f_9[1], 1, 1);
					Local_198 = Global_95867.f_9[1];
					if (func_341(Local_198))
					{
						unk_0x7B28A83A0D3DD0F9(Local_198, 170, 0);
						unk_0x82D2BB48A39F1E88(Local_198, 65536, 1);
						unk_0xA415F00D0E0DFBCE(Local_198, 50, 1);
						unk_0xBE91B077ADADE97F(Local_198, true);
						unk_0x46EDFC827DC67D89(Local_198, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_199))
				{
					unk_0xB1D85A6C23F2F945(Local_198, Local_199, 0);
					unk_0x7B28A83A0D3DD0F9(Local_198, 170, 0);
					unk_0x82D2BB48A39F1E88(Local_198, 65536, 1);
					unk_0xA415F00D0E0DFBCE(Local_198, 50, 1);
					unk_0xBE91B077ADADE97F(Local_198, true);
					unk_0x46EDFC827DC67D89(Local_198, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_150(var uParam0, var uParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0x419E13582192CFEA(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x0FDCFECB2EF2BC1C(26, uParam1, Param2, uParam3, 1, 1);
			if (func_341(*uParam0))
			{
				if (bParam5)
				{
					unk_0xA2C015B68CE01357(*uParam0, 1);
				}
				if (bParam6)
				{
					unk_0xBE91B077ADADE97F(*uParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0x1D7A4E9E23D306D6(*uParam0, bParam7);
				}
				if (bParam4)
				{
					func_151(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_341(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0xA9C0BBFB9CBB66F1(uParam0))
		{
			unk_0x824F744352C8BC82(uParam0);
		}
	}
	else
	{
		unk_0x824F744352C8BC82(uParam0);
	}
}

int func_152(var uParam0, char* sParam1, int iParam2)
{
	unk_0x16E516CA9C88FF48(uParam0);
	if (!unk_0xAB6A270F84A8781E(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0xA9C0BBFB9CBB66F1(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	if (!unk_0x419E13582192CFEA(*uParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0x170478CC84C8AE2F(iParam1, Param2, fParam3, 1, 1, 0);
			if (unk_0x419E13582192CFEA(*uParam0))
			{
				if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
				{
					unk_0x4985CD0720AFD468(*uParam0, 1, 0);
				}
				unk_0x47D0DDD8833C5E5F(*uParam0, 1084227584);
				if (bParam4)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*uParam0))
		{
			unk_0x78CDDD1E6367978D(*uParam0, Param2, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(*uParam0, fParam3);
		}
		if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
		{
			unk_0x4985CD0720AFD468(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(var uParam0, int iParam1)
{
	if (func_341(*uParam0))
	{
		func_202(uParam0, iParam1, 0);
		if (unk_0x698F51FB33ADAF7B(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x4598B7969D5B0A28(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_17) && unk_0x5976053523EA16C8(Local_46[iLocal_48 /*25*/].f_17))
				{
					unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
					unk_0x1C53495E38DE08B7(*uParam0);
					if (iLocal_48 <= 20 && iLocal_48 != -1)
					{
						Local_46[iLocal_48 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0x3211C35423263392(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
					unk_0x0A6448DF4E471932(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0x557C9CA8FCC667DF(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(uParam0);
				}
				func_185(uParam0);
				break;
			
			case 1:
				func_158(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_17))
		{
			if (unk_0x5976053523EA16C8(Local_46[iLocal_48 /*25*/].f_17))
			{
				unk_0x3211C35423263392(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
				unk_0x0A6448DF4E471932(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0x557C9CA8FCC667DF(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0x419E13582192CFEA(*uParam0))
		{
			if (!func_157(unk_0x7D2B9E6A64637269(), *uParam0, 150f, 1) && !bLocal_52)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return vdist2(unk_0xD6E677FAD7521410(iParam0, iParam3), unk_0xD6E677FAD7521410(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_158(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_184(*uParam0, 780511057))
				{
					unk_0xCA089CD1A17D76DF(*uParam0);
				}
				unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
			break;
		
		case 21:
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				if (func_177(*uParam0, unk_0x7D2B9E6A64637269(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0xC49311A2A500FF09(*uParam0, 0))
				{
					unk_0xFD232B7DCAA5A304(*uParam0, unk_0x7D2B9E6A64637269(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0x5C679902079A7E80(&uVar0);
					unk_0xCC5ED49CF9C9215F(0, 0, 0);
					unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
					unk_0x1BBD0A5729AB1226(uVar0);
					unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
					unk_0x8D5B447F21217223(&uVar0);
				}
				if (!unk_0x575B7C28D81C0B4D(uParam0->f_4))
				{
					uParam0->f_4 = func_173(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
			break;
		
		case 10:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0xC49311A2A500FF09(*uParam0, 0))
				{
					unk_0xD991F7672CE8EAD3(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else if (!func_184(*uParam0, 474215631))
				{
					if (func_184(*uParam0, 780511057))
					{
						unk_0xCA089CD1A17D76DF(*uParam0);
					}
					unk_0x37DE87D06B5C195D(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 3:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0x1D87FC6C9DC6D4B1(*uParam0, 1, 1);
				unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_172(uParam0);
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > 5000)
			{
				if (!func_184(*uParam0, 713668775))
				{
					if (unk_0x419E13582192CFEA(Local_45[func_171(uParam0->f_10) /*11*/]))
					{
						unk_0x45B1B4E55BF15523(*uParam0, Local_54, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_184(*uParam0, -2017877118))
			{
				unk_0x5C679902079A7E80(&uVar1);
				if (func_170(unk_0xD6E677FAD7521410(*uParam0, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 1.5f)
				{
					unk_0xFBF1F1BE9D437D22(0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 0);
				}
				unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x1BBD0A5729AB1226(uVar1);
				unk_0x8A1AC8EBC73850C8(*uParam0, uVar1);
				unk_0x8D5B447F21217223(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
			break;
		
		case 19:
			func_172(uParam0);
			if (!func_184(*uParam0, -2017877118))
			{
				unk_0x8B515AB1F9C6E8CE(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
			break;
		
		case 1:
			if (!unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
			{
				func_168(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x530FB711AE9CF518(*uParam0) && (unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > 3000)
			{
				func_168(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > 8000)
			{
				unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 0);
				if (!iLocal_53)
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
						iLocal_53 = 1;
					}
				}
				unk_0x1D87FC6C9DC6D4B1(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_6 = 8;
			}
			else if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 1)
			{
				unk_0x1D87FC6C9DC6D4B1(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 7:
			if (unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (func_341(*uParam0))
						{
							unk_0xCA089CD1A17D76DF(*uParam0);
							unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 120f, 1))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(uParam0);
			}
			break;
		
		case 8:
			if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 120f, 1))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xECA23EB9C2A5E83F(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) > uParam0->f_2 || !func_184(*uParam0, 2104565373))
			{
				func_163(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0xD991F7672CE8EAD3(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else if (func_177(Local_45[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 15:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else if (func_177(Local_45[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 16:
			if (unk_0xECA23EB9C2A5E83F(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0xDFB7BFA6482FEE1E() - iLocal_55) >= 9000)
			{
				if (!func_161(uParam0))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else
				{
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_55) >= 5000 && (unk_0xDFB7BFA6482FEE1E() - iLocal_55) <= 5500)
			{
				if (unk_0xC49311A2A500FF09(*uParam0, 0))
				{
					if (unk_0xA15EA13398B66F93(*uParam0))
					{
						unk_0xC7411AA70F899F00(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else if (func_177(Local_45[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 17:
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
				else if (func_177(Local_45[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 20:
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (func_177(*uParam0, unk_0x7D2B9E6A64637269(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x8954E9D0A9F6F8CF(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, 5f, 0f, -2f), unk_0xD6E677FAD7521410(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_163(uParam0);
				}
				else
				{
					func_168(uParam0);
					func_168(&(Local_45[func_171(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
			func_172(uParam0);
			break;
		
		case 22:
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				if (func_177(*uParam0, unk_0x7D2B9E6A64637269(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x7D2B9E6A64637269(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
					return;
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
		
		case 23:
			func_202(uParam0, uParam0->f_10, 1);
			func_172(uParam0);
			if (func_107(*uParam0, Local_54, 2f))
			{
				if (func_159(*uParam0, Local_54, 1126825984, 0))
				{
					unk_0xCA089CD1A17D76DF(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			break;
	}
}

int func_159(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_160(Param1 - unk_0xD6E677FAD7521410(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x557C9CA8FCC667DF(iParam0) };
	}
	else
	{
		Var1 = { func_160(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_160(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_161(var uParam0)
{
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_43, 0f, 10f, -2f), unk_0x9E695CE384C77EF0(iLocal_43, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0xE6046EB2291D084D(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (func_37(iVar0))
		{
			if (!unk_0x5F1B1AFB0CA1586A(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
		}
	}
}

void func_163(var uParam0)
{
	unk_0x78B2DF314748056B(2, uLocal_40, 1862763509);
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_129();
			break;
		
		case 3:
			if (!func_184(*uParam0, 242628503))
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
				}
				if (!unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_164(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_5 = 0;
}

void func_164(var uParam0)
{
	if (!func_184(*uParam0, -71340211))
	{
		if (Local_46[iLocal_48 /*25*/].f_23 != 0)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				unk_0x1BA17238F2579830(*uParam0, Local_46[iLocal_48 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x45B1B4E55BF15523(*uParam0, Local_46[iLocal_48 /*25*/].f_19, 1f, 20000, -1f, 0, func_165(Local_46[iLocal_48 /*25*/].f_19, unk_0xD6E677FAD7521410(*uParam0, 1), 1));
		}
		if (func_37(iLocal_43))
		{
			unk_0x94F15E506D091111(iLocal_43, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_165(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3, int iParam4)
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

int func_166()
{
	if (func_37(iLocal_43) && func_341(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_43, unk_0x7D2B9E6A64637269(), 1))
		{
			unk_0xA5030CC1B9A0FDA6(iLocal_43);
			if (func_167() || unk_0x5E7C0A485B91DB87(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x3095B0C5EB2CFFEC(iLocal_43, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_168(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_169(uParam0);
		uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0xECEC7528A52B4EE8(*uParam0))
			{
				unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
				unk_0x1C53495E38DE08B7(*uParam0);
				unk_0x4261814A9A26E86F(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_170(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x832AD84AA258AE80((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0)
{
	if (func_37(iLocal_43) && (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_43, 0) && !unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0)))
	{
		if (unk_0x4DDAC4C80BACF92C(iLocal_43) > 0f)
		{
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_174(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(uVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_175(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(iVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(iVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_175(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(iVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_175(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(var uParam0, int iParam1)
{
	func_169(uParam0);
	if ((unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_157(unk_0x7D2B9E6A64637269(), *uParam0, 10f, 1))
		{
			if (!func_184(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_184(*uParam0, 780511057) && !func_184(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
		}
	}
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_183(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_182(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_181(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_180();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_178(&(Local_38[iVar2 /*4*/]), Var1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xDFB7BFA6482FEE1E() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_179(iParam2, iParam5) };
		*uParam0 = unk_0x3F7B472B49D4D2AC(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xA2B3B271E2AE7A08(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xA2CCAAC7F5CA3F49(iVar3))
	{
		func_10(iVar3);
		if (unk_0xFAA5505029C4B5A6(iVar3) == iParam2)
		{
			if (bLocal_39)
			{
				unk_0x52A935C3774D2C0B(Param1, unk_0xD6E677FAD7521410(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0xDFB7BFA6482FEE1E();
			return 1;
		}
		return 0;
	}
	if (unk_0x55F5BD4ABD80B211(iVar3))
	{
		func_10(iVar3);
		if (unk_0xC49311A2A500FF09(iParam2, 0))
		{
			if (unk_0x611CD1312FD3CA66(iVar3) == unk_0x75B58B38E45C6F9A(iParam2, 0))
			{
				if (bLocal_39)
				{
					unk_0x52A935C3774D2C0B(Param1, unk_0xD6E677FAD7521410(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD6E677FAD7521410(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD6E677FAD7521410(iParam0, 1);
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_181(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_160(unk_0xD6E677FAD7521410(iParam1, 1) - unk_0xD6E677FAD7521410(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x557C9CA8FCC667DF(iParam0) };
	}
	else
	{
		Var1 = { func_160(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1)
{
	if (func_341(uParam0))
	{
		if (unk_0x4E8DA737B686529A(uParam0, iParam1) == 1 || unk_0x4E8DA737B686529A(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_196(uParam0, 1);
			}
			else
			{
				func_196(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0x2C10A11A684CFE96(*uParam0, iLocal_43))
			{
				if (!func_184(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					if (!Local_46[iLocal_48 /*25*/].f_18)
					{
						if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && unk_0x8879B2803A5F8682(iLocal_43))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_43))
			{
				unk_0x101C61FF49B27BB8(iLocal_43, 25f, 10, 0);
				fVar0 = unk_0x4DDAC4C80BACF92C(iLocal_43);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_184(*uParam0, 242628503) && unk_0x8879B2803A5F8682(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0xCC5ED49CF9C9215F(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_341(Local_45[1 /*11*/]))
			{
				if (unk_0xF41EB7643E61A928(Local_45[1 /*11*/], iLocal_43, 0) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
			{
				func_164(uParam0);
			}
			break;
		
		case 9:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_184(*uParam0, -2015108952))
			{
				unk_0x5C679902079A7E80(&uVar0);
				if (func_170(unk_0xD6E677FAD7521410(*uParam0, 1), Local_46[iLocal_48 /*25*/].f_19) > 1.5f)
				{
					unk_0xFBF1F1BE9D437D22(0, Local_46[iLocal_48 /*25*/].f_19, 0);
				}
				unk_0x4261814A9A26E86F(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uVar0);
				unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
				unk_0x8D5B447F21217223(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			unk_0x7979149EE8FE954D(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_184(*uParam0, 242628503))
			{
				if (unk_0x698F51FB33ADAF7B(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x4598B7969D5B0A28(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0xC63C967EC1D348E4(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xBCF9CFE51F223AF8(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_17) && !unk_0x5976053523EA16C8(Local_46[iLocal_48 /*25*/].f_17))
						{
							unk_0x0F1058706D5A58B4(Local_46[iLocal_48 /*25*/].f_17, *uParam0, unk_0xA79DFB802C09F5F5(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!func_184(*uParam0, 713668775))
			{
				if (func_37(iLocal_43))
				{
					unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xA8D713A937F31250(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			unk_0x7979149EE8FE954D(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_37(iLocal_43))
			{
				if (!func_191(unk_0x9E695CE384C77EF0(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (unk_0x591190E69BE43117(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_184(*uParam0, 713668775))
						{
							unk_0x5C679902079A7E80(&uVar1);
							if (func_170(unk_0xD6E677FAD7521410(*uParam0, 1), unk_0xD6E677FAD7521410(iLocal_43, 1)) > 3f)
							{
								unk_0x12D312F073772E84(0, unk_0xA8D713A937F31250(iLocal_43), 0);
							}
							unk_0x4261814A9A26E86F(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x1BBD0A5729AB1226(uVar1);
							unk_0x8A1AC8EBC73850C8(*uParam0, uVar1);
							unk_0x8D5B447F21217223(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_184(*uParam0, 713668775))
					{
						unk_0x45B1B4E55BF15523(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xA8D713A937F31250(iLocal_43));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_191(unk_0x9E695CE384C77EF0(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*uParam0, 242628503))
				{
					if (unk_0x698F51FB33ADAF7B(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x4598B7969D5B0A28(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_17))
							{
								if (unk_0x5976053523EA16C8(Local_46[iLocal_48 /*25*/].f_17))
								{
									unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
									unk_0x1C53495E38DE08B7(*uParam0);
									unk_0x3211C35423263392(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
									unk_0x6C7C4EFD3F245591(Local_46[iLocal_48 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0x0A6448DF4E471932(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0x557C9CA8FCC667DF(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x83B12E293561B796(Local_46[iLocal_48 /*25*/].f_17, iLocal_43))
								{
									func_187(&(Local_46[iLocal_48 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_43))
					{
						unk_0x616B09EEEFED8FAF(iLocal_43, 5, 0);
						func_187(&(Local_46[iLocal_48 /*25*/].f_17));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_187(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (unk_0xD79E16EA1337F8F9(*uParam0))
		{
			unk_0x3211C35423263392(*uParam0, 1, 1);
		}
		unk_0x04F4D55F2C0C756D(uParam0);
	}
}

void func_188(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x78B2DF314748056B(5, uLocal_40, 1862763509);
	func_169(uParam0);
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xC49311A2A500FF09(*uParam0, 0))
		{
			unk_0xFD232B7DCAA5A304(*uParam0, unk_0x7D2B9E6A64637269(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, 0);
			unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
		}
	}
	else
	{
		unk_0x5C679902079A7E80(&uVar1);
		unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
		unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
		unk_0x1BBD0A5729AB1226(uVar1);
		unk_0x8A1AC8EBC73850C8(*uParam0, uVar1);
		unk_0x8D5B447F21217223(&uVar1);
	}
	unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
	unk_0x1C53495E38DE08B7(*uParam0);
	func_189();
	if (!unk_0x575B7C28D81C0B4D(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_189()
{
	Local_42 = 0;
	Local_42.f_26 = 0;
	Local_42.f_18 = 0;
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x78B2DF314748056B(5, uLocal_40, 1862763509);
	func_169(uParam0);
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xC49311A2A500FF09(*uParam0, 0))
		{
			unk_0xFD232B7DCAA5A304(*uParam0, unk_0x7D2B9E6A64637269(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, 0);
			unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
		}
	}
	else
	{
		unk_0x5C679902079A7E80(&uVar1);
		unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
		unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
		unk_0x1BBD0A5729AB1226(uVar1);
		unk_0x8A1AC8EBC73850C8(*uParam0, uVar1);
		unk_0x8D5B447F21217223(&uVar1);
	}
	unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
	unk_0x1C53495E38DE08B7(*uParam0);
	func_189();
	if (!unk_0x575B7C28D81C0B4D(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_191(struct<3> Param0, int iParam1, struct<3> Param2)
{
	Local_42.f_2 = { Param0 };
	Local_42.f_8 = { Param2 };
	func_192(&Local_42, iParam1);
	if (Local_42.f_26)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x55F5BD4ABD80B211(Local_42.f_18))
			{
				if (func_10(Local_42.f_18))
				{
					if (unk_0x611CD1312FD3CA66(Local_42.f_18) == unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0xA2CCAAC7F5CA3F49(Local_42.f_18))
		{
			if (func_10(Local_42.f_18))
			{
				if (unk_0xFAA5505029C4B5A6(Local_42.f_18) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA2B3B271E2AE7A08(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_193(uParam0, uParam1);
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0x3F7B472B49D4D2AC(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0x4E682F2B3EA9361F(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x86838FAA1E8A1038(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x9626157791916A72(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x7AD43B94CD205A49(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_194(var uParam0)
{
	var uVar0;
	
	if (func_37(iLocal_43))
	{
		unk_0x5C679902079A7E80(&uVar0);
		unk_0xE946751408DFA71B(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0xE7FD307AF3D07EF7(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_10, 5f, 1);
		unk_0x1BBD0A5729AB1226(uVar0);
		unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
		unk_0x8D5B447F21217223(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_195()
{
	func_164(&(Local_45[1 /*11*/]));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_191(unk_0x9E695CE384C77EF0(iLocal_43, func_137(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (unk_0x8954E9D0A9F6F8CF(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, 5f, 0f, -2f), unk_0xD6E677FAD7521410(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_43, 5f, 0f, -2f), unk_0xD6E677FAD7521410(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_197(uParam0);
		}
		else if (!func_184(*uParam0, 1227113341) && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_43, 5f, 0f, -2f), unk_0xD6E677FAD7521410(iLocal_43, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0xCA089CD1A17D76DF(*uParam0);
			unk_0xF0ED372419FE0E70(*uParam0, unk_0x7D2B9E6A64637269(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_107(*uParam0, unk_0x9E695CE384C77EF0(iLocal_43, func_137(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x95CA4545D0C61309(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_197(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x78B2DF314748056B(5, uLocal_40, 1862763509);
	func_169(uParam0);
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xC49311A2A500FF09(*uParam0, 0))
		{
			unk_0xFD232B7DCAA5A304(*uParam0, unk_0x7D2B9E6A64637269(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x5C679902079A7E80(&uVar0);
			unk_0xCC5ED49CF9C9215F(0, 0, 0);
			unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
			unk_0x1BBD0A5729AB1226(uVar0);
			unk_0x8A1AC8EBC73850C8(*uParam0, uVar0);
			unk_0x8D5B447F21217223(&uVar0);
		}
	}
	else
	{
		unk_0x5C679902079A7E80(&uVar1);
		unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
		unk_0x9DA29013F33252A6(0, unk_0x7D2B9E6A64637269(), 0, 16);
		unk_0x1BBD0A5729AB1226(uVar1);
		unk_0x8A1AC8EBC73850C8(*uParam0, uVar1);
		unk_0x8D5B447F21217223(&uVar1);
	}
	unk_0x87FB9C4434EDF1A5(*uParam0, 1048576000);
	unk_0x1C53495E38DE08B7(*uParam0);
	func_189();
	uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_198(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_43) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!func_184(*uParam0, 2104565373) && unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
			{
				if (func_157(unk_0x7D2B9E6A64637269(), iLocal_43, 10f, 1))
				{
					if (unk_0x83B12E293561B796(iLocal_43, unk_0x7D2B9E6A64637269()))
					{
						unk_0xB17DC325CCB9F8CE(*uParam0, unk_0x7D2B9E6A64637269(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_17)) && func_201(Local_46[iVar0 /*25*/].f_17, unk_0x7D2B9E6A64637269(), 1) > 200f)
				{
					unk_0x04F4D55F2C0C756D(&(Local_46[iVar0 /*25*/].f_17));
					Local_46[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_23 != 0)
			{
				if (func_107(unk_0x7D2B9E6A64637269(), Local_46[iVar0 /*25*/], 100f) || func_107(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_24 = func_200(&(Local_46[iVar0 /*25*/].f_17), Local_46[iVar0 /*25*/].f_23, Local_46[iVar0 /*25*/].f_19, Local_46[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	if (!unk_0x419E13582192CFEA(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x795434E153F90E41(uParam1, Param2, 1, 1, 0);
			if (unk_0x419E13582192CFEA(*uParam0))
			{
				unk_0xCD37A28258D70638(*uParam0, uParam3);
				unk_0xC5DE9743D6DA2C15(*uParam0);
				if (bParam4)
				{
					func_151(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_201(int iParam0, int iParam1, int iParam2)
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

void func_202(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (unk_0x419E13582192CFEA(Local_45[func_171(iParam1) /*11*/]))
				{
					if (func_181(*uParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0) || func_157(Local_45[func_171(iParam1) /*11*/], *uParam0, 3f, 1))
					{
						func_176(uParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						Local_54 = { unk_0xD6E677FAD7521410(Local_45[func_171(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(uParam0, 0);
				}
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 22)
		{
			if (func_181(*uParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0) && func_157(Local_45[func_171(iParam1) /*11*/], unk_0x7D2B9E6A64637269(), 15f, 1))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 5 || Local_45[func_171(iParam1) /*11*/].f_6 == 7)
		{
			if (func_157(Local_45[func_171(iParam1) /*11*/], *uParam0, 10f, 1))
			{
				func_176(uParam0, 0);
			}
		}
		if (func_213(*uParam0))
		{
			func_169(uParam0);
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_161(uParam0))
			{
				if (unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
				{
					unk_0xB17DC325CCB9F8CE(*uParam0, unk_0x7D2B9E6A64637269(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					unk_0xD5381DFC7ACB5A30(iLocal_43, 2000f);
					iLocal_55 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_204(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(uParam0))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				if (func_37(iLocal_43))
				{
					if (unk_0xF41EB7643E61A928(*uParam0, iLocal_43, 0))
					{
						if (unk_0x4DDAC4C80BACF92C(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x5B1F7232B835EC44(*uParam0, iLocal_43, unk_0x7D2B9E6A64637269(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0x37DE87D06B5C195D(Local_45[func_171(iParam1) /*11*/], -1);
								Local_45[func_171(iParam1) /*11*/].f_6 = 10;
								Local_45[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
								Local_45[func_171(iParam1) /*11*/].f_1 = unk_0xDFB7BFA6482FEE1E();
							}
							else
							{
								unk_0x37DE87D06B5C195D(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0x5B1F7232B835EC44(Local_45[func_171(iParam1) /*11*/], iLocal_43, unk_0x7D2B9E6A64637269(), 8, 30f, 786469, 300f, 2f, 1);
								Local_45[func_171(iParam1) /*11*/].f_6 = 5;
								Local_45[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
								Local_45[func_171(iParam1) /*11*/].f_1 = unk_0xDFB7BFA6482FEE1E();
							}
						}
						else
						{
							func_176(uParam0, 0);
							if (unk_0x419E13582192CFEA(Local_45[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_45[func_171(iParam1) /*11*/], unk_0x7D2B9E6A64637269(), 1126825984, 0))
								{
									func_176(&(Local_45[func_171(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0xA5030CC1B9A0FDA6(*uParam0);
					}
					else
					{
						func_176(uParam0, 0);
						if (unk_0x419E13582192CFEA(Local_45[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_45[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_176(&(Local_45[func_171(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0xA5030CC1B9A0FDA6(*uParam0);
				if (func_177(Local_45[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_45[func_171(iParam1) /*11*/].f_1 = unk_0xDFB7BFA6482FEE1E();
					Local_45[func_171(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_45[func_171(iParam1) /*11*/].f_5 = 1;
					Local_45[func_171(iParam1) /*11*/].f_6 = 21;
					unk_0xA5030CC1B9A0FDA6(Local_45[func_171(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0xECA23EB9C2A5E83F(*uParam0))
		{
			func_169(uParam0);
			unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
		}
		if (unk_0x6B9E71121F5B8154(*uParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				if (unk_0x5976053523EA16C8(Local_46[iLocal_48 /*25*/].f_17))
				{
					unk_0x3211C35423263392(Local_46[iLocal_48 /*25*/].f_17, 1, 0);
					unk_0x0A6448DF4E471932(Local_46[iLocal_48 /*25*/].f_17, 1, unk_0x557C9CA8FCC667DF(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (unk_0xECA23EB9C2A5E83F(Local_45[func_171(iParam1) /*11*/]))
			{
				func_169(uParam0);
				unk_0x1DC2BF231DE6A016(*uParam0, unk_0x7D2B9E6A64637269(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_203(var uParam0)
{
	if ((unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)) && unk_0xB9B9B15BD0EA06BE(unk_0x7D2B9E6A64637269()))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0x7D2B9E6A64637269()) && func_10(iParam0))
	{
		if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
		{
			return 1;
		}
		if (func_209(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
		{
			if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - unk_0xD6E677FAD7521410(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_208(unk_0x7D2B9E6A64637269(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_205(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0x7D2B9E6A64637269()) && func_10(iParam0))
	{
		if (func_207(iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_206(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_206(int iParam0, float fParam1)
{
	return func_177(iParam0, unk_0x7D2B9E6A64637269(), fParam1, 1, 250, 7);
}

int func_207(int iParam0)
{
	if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x557C9CA8FCC667DF(iParam0) };
	Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) - unk_0xD6E677FAD7521410(iParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(unk_0x7D2B9E6A64637269()) && func_10(iParam0))
	{
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x8E93627D38C90C19(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_212(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_211(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_211(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD7196DD041C06559(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_159(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (func_157(uParam0, unk_0x7D2B9E6A64637269(), 6f, 1))
	{
		if (!unk_0xC49311A2A500FF09(uParam0, 0))
		{
			if (unk_0x83B12E293561B796(iParam0, unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	if (func_37(Local_199))
	{
		if (func_157(unk_0x7D2B9E6A64637269(), Local_199, 100f, 1) && !iLocal_194)
		{
			unk_0x4DF8E7F8D8FB143A(joaat("trash"), 3);
			if (!unk_0x0F4C16D9EAAF22F9(joaat("trash")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!func_157(unk_0x7D2B9E6A64637269(), Local_199, 120f, 1) && iLocal_194)
		{
			unk_0xC39EE54ACC066848(joaat("trash"));
			iLocal_194 = 0;
		}
	}
}

void func_215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam6, bool bParam7, int iParam8)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0xAA18C87A1A6C1FAE(func_114(func_77()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_220(*iParam0) || func_219(*iParam0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0xAA18C87A1A6C1FAE(func_114(func_77()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam7), 0, 0))
					{
						unk_0xAA18C87A1A6C1FAE(func_115(func_77(), bParam7));
					}
					if (func_77() != 33)
					{
						func_217(iParam0);
					}
					else
					{
						func_216(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *iParam0, 0) && !func_220(*iParam0)) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x591190E69BE43117(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_220(*iParam0) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x591190E69BE43117(*iParam0, Param5, iParam8, iParam8, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_77() != 33)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0, uParam1);
	}
}

void func_216(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_28)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = unk_0x6471F4759775FCA4(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_36(*uParam0, 1);
						func_36(*uParam1, 3);
						if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
						{
							unk_0x4985CD0720AFD468(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x05029439A5245679(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0x611CD1312FD3CA66(uVar2);
							if (unk_0x6471F4759775FCA4(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_36(*uParam0, 1);
								func_36(*uParam1, 3);
								if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
								{
									unk_0x4985CD0720AFD468(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_37(iVar0))
			{
				if (unk_0x6471F4759775FCA4(iVar0) == func_218(func_77()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_36(*uParam0, 1);
					unk_0x4985CD0720AFD468(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x7D2B9E6A64637269()) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0x0BF0F8F3AD0993F6();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0xAF76DC34F0718838(iVar0))
				{
					if (unk_0x64A9C45E797F804E(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x7D2B9E6A64637269()) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0x0BF0F8F3AD0993F6();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0xF2C5E5F021DB1E93(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_221()
{
	func_215(&iLocal_200, &uLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199, 0, 1090519040);
	func_155();
	func_238();
	func_214();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0 && !func_237())
				{
					func_117(&iLocal_182, Local_186, 1);
					func_121("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_182, Local_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_227();
			if (func_225(iLocal_200, Local_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				unk_0x2DC2890038BFF758(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		
		case 2:
			func_222();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_116(1077936128, 1))
			{
				func_110(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_200))
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_200, 0))
				{
					unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iLocal_200, -1);
				}
				else
				{
					func_109(iLocal_200, Local_186, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0xECEC7528A52B4EE8(iVar1))
		{
			if (func_224(iVar1))
			{
				func_223(iVar1);
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Global_95224, iVar0))
		{
			return 0;
		}
		unk_0xC664C0067EEAB8D1(&Global_95224, iVar0);
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_95224, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_117(iParam2, Param1, 1);
			if (!bParam8)
			{
				if (func_37(iParam0))
				{
					if (unk_0x591190E69BE43117(iParam0, Param1, fParam9, fParam9, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Param1, fParam9, fParam9, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_106(func_114(func_77()), 0, 0))
			{
				unk_0xAA18C87A1A6C1FAE(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0xAA18C87A1A6C1FAE(func_115(func_77(), 0));
			}
			func_105(func_114(func_77()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_226()
{
	return Global_99422.f_363 > 0;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_79(iVar0);
		if (!unk_0xECEC7528A52B4EE8(iVar2))
		{
			if (func_78(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_157(unk_0x7D2B9E6A64637269(), iVar2, 5f, 1))
					{
						if (!func_237())
						{
							func_232(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						func_98(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_98(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_98(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!func_224(iVar2))
			{
				if (func_78(iVar2, 0))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (func_228(iVar2, 0))
						{
							unk_0x4985CD0720AFD468(iVar2, 1, 1);
							unk_0xBE91B077ADADE97F(iVar2, true);
							unk_0xCA089CD1A17D76DF(iVar2);
						}
					}
				}
			}
			else if (unk_0x9984C023D4E57C2E(iVar2, 1))
			{
				if (func_231(iVar2))
				{
					if (unk_0x4E8DA737B686529A(iVar2, -1273030092) != 1 && unk_0x4E8DA737B686529A(iVar2, -1273030092) != 0)
					{
						if (unk_0xA1CB00B61C47B900(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xE946751408DFA71B(iVar2, unk_0x75B58B38E45C6F9A(iVar2, 0), Local_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0xABAA7F8FD10DCDF2(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (func_37(Local_199))
					{
						if (!func_157(iVar2, Local_199, 17f, 1))
						{
							if (unk_0x4E8DA737B686529A(iVar2, -1273030092) != 1 && unk_0x4E8DA737B686529A(iVar2, -1273030092) != 0)
							{
								unk_0x7B5530AB21BFC748(iVar2, unk_0x75B58B38E45C6F9A(iVar2, 0), Local_199, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_223(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_95224, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x7D2B9E6A64637269())
			{
				return 0;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_95223, iVar0))
		{
			unk_0x20FB50DE4E866E5F(iParam0, 0, 0);
			unk_0x46EDFC827DC67D89(iParam0, 0, 1);
			unk_0x191DDA30577F440A(&Global_95224, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (!func_230())
	{
		if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (func_37(iVar0))
			{
				if (unk_0xEACFC87E44438F24(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0xF41EB7643E61A928(iParam0, iVar0, 0) && unk_0x27FC1B0077581B37(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!func_230())
	{
		if ((unk_0x419E13582192CFEA(Local_199) && unk_0xBFCE58B2B3249999(Local_199, 0)) && !unk_0x591190E69BE43117(Local_199, Local_186, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Local_199, 0)) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
			{
				if (unk_0xF41EB7643E61A928(iParam0, Local_199, 0) && unk_0x27FC1B0077581B37(Local_199, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_232(int iParam0)
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!unk_0x123480158F10FA67())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0x191DDA30577F440A(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0x234B68AC2E35ED5A(Local_73[iParam0 /*8*/].f_7, 0) && !unk_0x234B68AC2E35ED5A(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!unk_0x123480158F10FA67())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0x191DDA30577F440A(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (func_235(iLocal_200, Local_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!unk_0x123480158F10FA67())
					{
						if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0x191DDA30577F440A(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0x7D2B9E6A64637269()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != -1)
		{
			if (!unk_0x123480158F10FA67())
			{
				if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0x191DDA30577F440A(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_237() && !unk_0x123480158F10FA67())
		{
			iLocal_375 = unk_0xDFB7BFA6482FEE1E();
		}
		else
		{
			iLocal_375 = -1;
		}
	}
}

int func_234(int iParam0)
{
	if ((unk_0x234B68AC2E35ED5A(Local_73[0 /*8*/].f_7, iParam0) || unk_0x234B68AC2E35ED5A(Local_73[1 /*8*/].f_7, iParam0)) || unk_0x234B68AC2E35ED5A(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_235(int iParam0, struct<3> Param1, int iParam2)
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

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0);
}

int func_237()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (func_107(unk_0x7D2B9E6A64637269(), Local_186, 220f))
	{
		if (!iLocal_203 && !func_107(unk_0x7D2B9E6A64637269(), Local_186, 100f))
		{
			iLocal_203 = func_153(&uLocal_202, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_107(unk_0x7D2B9E6A64637269(), Local_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&uLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_239()
{
	func_215(&iLocal_200, &uLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, Local_186, Local_199, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				func_125(&iLocal_182, Local_199, 1);
				func_121("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_227();
			if (func_37(Local_199))
			{
				func_242(&uLocal_56, Local_199, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (func_341(Local_197) && unk_0xECA23EB9C2A5E83F(Local_197))
				{
					func_241();
				}
				if (func_341(Local_198) && unk_0xECA23EB9C2A5E83F(Local_198))
				{
					func_241();
				}
			}
			if (func_37(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					unk_0x2DC2890038BFF758(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_182);
			func_145(&uLocal_56, 0, 0);
			func_110(0);
			break;
		
		case 3:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_37(Local_199))
			{
				unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), Local_199, -1);
			}
			func_240(1);
			func_40(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_240(bool bParam0)
{
	unk_0xE63D792F88BFF242(1, bParam0);
	unk_0xE63D792F88BFF242(2, bParam0);
	unk_0xE63D792F88BFF242(3, bParam0);
	unk_0xE63D792F88BFF242(4, bParam0);
	unk_0xE63D792F88BFF242(5, bParam0);
	if (bParam0)
	{
		unk_0x5E84945E26CAEF1F(1f);
		unk_0x20D884FB6567BAD5(5);
	}
	else
	{
		unk_0x20D884FB6567BAD5(0);
		unk_0x5E84945E26CAEF1F(0f);
	}
}

void func_241()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_236(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		unk_0x2DC2890038BFF758(8f, 8f, 4);
	}
}

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_243(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_244(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_244(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		func_145(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_245(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_146(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && unk_0x1F9D47D45E125FA6(iParam1))
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
			if (func_263(uParam0, bParam5, bParam7, 0))
			{
				func_260(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_250(iVar0))
				{
					if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if ((iVar1 && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
						{
							if (!func_146(iVar0))
							{
								func_249(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_250(iVar0))
			{
				if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
				{
					if (((unk_0xB4E725A8915BDF60(iParam1) && iVar1) && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
					{
						if (!func_146(iVar0))
						{
							func_249(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_248(1);
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
				if (func_146(sParam3))
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
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
				{
					func_145(uParam0, iVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, iVar0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_268(unk_0x7D2B9E6A64637269()))
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

int func_247(var uParam0)
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

int func_248(bool bParam0)
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

void func_249(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_250(char* sParam0)
{
	if (!func_251(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_146(sParam0)) || func_146("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_69(0))
	{
		return 0;
	}
	if (func_259())
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
	if ((func_258() || func_257(Global_4456448.f_133963)) || func_256())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_255(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_254(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_252(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_253(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_253(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
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

int func_254(int iParam0, int iParam1)
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

int func_255(int iParam0, int iParam1)
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

var func_256()
{
	return Global_2453009.f_19;
}

bool func_257(int iParam0)
{
	return iParam0 == 51;
}

var func_258()
{
	return Global_2453009.f_18;
}

bool func_259()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

void func_260(var uParam0, int iParam1, struct<3> Param2, int iParam3)
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
		func_145(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			iVar0 = unk_0xFAA5505029C4B5A6(iParam1);
			if (!unk_0xC49311A2A500FF09(iVar0, 0))
			{
				if (unk_0x72D30262CF8C8603(iVar0))
				{
					if (!func_261())
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

bool func_261()
{
	return func_262(unk_0x1146A9AE09CE2B14());
}

int func_262(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
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
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
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
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
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
				else if (!func_267(bParam1, bParam2, bParam3))
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
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_264(bParam1, bParam2, bParam3))
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
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_268(int iParam0)
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

void func_269()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

void func_270()
{
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, 0))
			{
				func_284();
				func_282(33);
				unk_0x20D884FB6567BAD5(2);
				unk_0x5E84945E26CAEF1F(0.1f);
				if (func_357())
				{
					func_279(0, -1, 1);
					func_41(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_124(unk_0x7D2B9E6A64637269(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_271();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_110(0);
			break;
	}
}

void func_271()
{
}

void func_272(struct<3> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xD1F051AA4563F197(Param0, iParam1, iParam2, 127);
	if (unk_0xE2BB9441C54169BF(uVar0))
	{
		iVar1 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		while (!unk_0xA5827500BA13CF74(uVar0) && unk_0xDFB7BFA6482FEE1E() < iVar1)
		{
			if (bParam5)
			{
				func_274(0);
			}
			if (bParam4)
			{
				func_273();
			}
			wait(0);
		}
		if (unk_0xDFB7BFA6482FEE1E() < iVar1)
		{
		}
		unk_0xDF27EE31B849DF76(uVar0);
	}
}

void func_273()
{
	Global_22531.f_6 = 1;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_69(0))
		{
			func_275(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_277())
		{
			func_276(1, 1);
		}
		else
		{
			func_276(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(false);
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
	if (!func_51())
	{
		Global_19798.f_1 = 3;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
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

bool func_277()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_278()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (func_357() && func_281())
	{
		while (Global_99365 != 6)
		{
			wait(0);
		}
		unk_0x543F5B2D3F90CA6D(0);
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x419E13582192CFEA(iParam0))
				{
					if (unk_0xBFCE58B2B3249999(iParam0, 0))
					{
						if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
						{
							unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iParam0, iParam1);
							unk_0x3A13FD2813C8251F(0f, 1065353216);
							unk_0xDF23DCD7A3E1B7A5(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
			}
		}
		unk_0x87C9692CDE8B3A8D();
		func_280(0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 13);
	}
}

bool func_281()
{
	return unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13);
}

void func_282(int iParam0)
{
	Global_95225 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)
{
	unk_0x191DDA30577F440A(&Global_95225, iParam0);
}

void func_284()
{
	int iVar0;
	
	iVar0 = unk_0x0BF0F8F3AD0993F6();
	if (unk_0x419E13582192CFEA(iVar0))
	{
		if (unk_0xBFCE58B2B3249999(iVar0, 0))
		{
			func_285(iVar0, unk_0xD6E677FAD7521410(iVar0, 1), unk_0xA8D713A937F31250(iVar0), 24, 0);
		}
	}
}

void func_285(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x419E13582192CFEA(Global_76066.f_484[25]) && unk_0xBFCE58B2B3249999(Global_76066.f_484[25], 0))
			{
				if (Global_76066.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9AAA60D60CB4E5C7(iParam0) || unk_0x6471F4759775FCA4(iParam0) == joaat("bus")) || unk_0x6471F4759775FCA4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_332(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_327(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD6E677FAD7521410(iParam0, 1) };
			uParam2 = unk_0xA8D713A937F31250(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) != joaat("vehicle_gen_controller"))
			{
				Global_77054 = unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD());
			}
		}
		func_320(iParam3, &Var0, Param1, uParam2, func_326(iParam0));
		func_286(iParam3, iParam0, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_317(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 12) && !unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_76066.f_555[0 /*21*/].f_4 != unk_0x6471F4759775FCA4(iParam1))
		{
			return;
		}
	}
	if (Global_76973 != -1 && Global_76973 != iParam0)
	{
		return;
	}
	if (unk_0x419E13582192CFEA(iParam1))
	{
		if (unk_0xBFCE58B2B3249999(iParam1, 0))
		{
			if (!unk_0xEE1D92A39CF8E1E6(iParam1))
			{
				unk_0x4985CD0720AFD468(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_112293.f_32747.f_4801 = func_306();
			}
			if (iParam1 != Global_76066.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_305(iParam0);
					if ((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) && iParam1 != iVar0)
					{
						func_287(iVar0, 145);
					}
				}
				Global_76972 = iParam1;
				Global_76973 = iParam0;
				Global_76974 = iParam2;
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_288(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0x419E13582192CFEA(iVar0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, -1);
		}
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xECEC7528A52B4EE8(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112293.f_2361.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112293.f_32747.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112293.f_32747.f_5590 = iParam1;
	Global_76971 = iParam0;
	Global_112293.f_32747.f_5588 = 1;
	func_327(iParam0, &(Global_112293.f_32747.f_5510));
}

int func_288(int iParam0)
{
	if ((((((((((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || func_303(iParam0, 0, 0)) || func_303(iParam0, 1, 0)) || func_303(iParam0, 2, 0)) || func_326(iParam0) != 145) || func_302(iParam0)) || func_301(iParam0)) || func_300(iParam0)) || func_299(iParam0)) || !func_289(unk_0x6471F4759775FCA4(iParam0)))
	{
		if (func_301(iParam0))
		{
		}
		if (func_301(iParam0))
		{
		}
		if (func_303(iParam0, 0, 0))
		{
		}
		if (func_303(iParam0, 1, 0))
		{
		}
		if (func_303(iParam0, 2, 0))
		{
		}
		if (func_326(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_290(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x8D367F0B53916265(iParam0) || unk_0x48E10529AEAE00F9(iParam0)) || unk_0xE267416B80E7921F(iParam0)) || unk_0x8C6BE3ED9638F314(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_290(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_298())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_295())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0))
		{
			return 0;
		}
	}
	if (!func_291(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_294()
{
	return 0;
}

int func_295()
{
	return 1;
}

int func_296()
{
	return 1;
}

int func_297()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					uVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&uVar0, 0);
					unk_0x0E32F508F8A14DE9(uVar0);
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

int func_299(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	sVar1 = unk_0x0B676D4511ABB729(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xDA654EB115F9FF7D(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_290(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x419E13582192CFEA(Global_96731[iVar0]))
		{
			if (Global_96731[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				if (Global_96701[iVar0] == iParam0 && unk_0x6471F4759775FCA4(Global_96701[iVar0]) == unk_0x6471F4759775FCA4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(Global_76066.f_484[24]))
	{
		if (iParam0 == Global_76066.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76066.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_304(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iVar2], 0))
		{
			if (unk_0xC5C459033A48B1E4(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76066.f_139[iParam0];
}

var func_306()
{
	var uVar0;
	
	func_316(&uVar0, unk_0x1947D86A2BB06F8D());
	func_315(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_314(&uVar0, unk_0xCA86FAB7FADC8353());
	func_309(&uVar0, unk_0x9E6858A319A1F6F2());
	func_308(&uVar0, unk_0xA91C851005050418());
	func_307(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_307(var uParam0, int iParam1)
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

void func_308(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_313(*uParam0);
	iVar1 = func_311(*uParam0);
	if (iParam1 < 1 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_310(int iParam0, int iParam1)
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

var func_311(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_312(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_312(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_313(var uParam0)
{
	return uParam0 & 15;
}

void func_314(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112293.f_32747.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112293.f_32747.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112293.f_32747.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 19))
	{
		if (!func_15(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_15(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_319(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_319(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112293.f_9083.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112293.f_9083.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_320(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_317(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
		{
			func_325(iParam0);
			func_324(uParam1, &(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 11))
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_321(iParam0, 1);
		}
	}
}

void func_321(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_323(iParam0, 0))
		{
			func_322(iParam0, 1, 0);
			func_322(iParam0, 2, 0);
			func_322(iParam0, 3, 0);
			func_322(iParam0, 4, 0);
			func_322(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_322(iParam0, 0, 0);
	}
}

void func_322(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_32747[iParam0]), iParam1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_32747[iParam0]), iParam1);
	}
}

bool func_323(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

void func_324(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_317(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
			unk_0x795957CD3A0042C8(&(Global_76066.f_139[iParam0]));
			Global_76066.f_139[iParam0] = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			func_321(iParam0, 0);
		}
	}
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 145;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				return Global_96711[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_327(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_331(uParam1);
		uParam1->f_66 = unk_0x6471F4759775FCA4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x0B676D4511ABB729(iParam0), 16);
		*uParam1 = unk_0x8F77FF37B3B66EE9(iParam0);
		unk_0x63316D59F2B56D9A(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x39A17B456BB9800A(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xDCC81D0196B6BB05(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x3763A95FD16BF2D0(iParam0);
		uParam1->f_67 = unk_0x91A6237658B4DA68(iParam0);
		uParam1->f_69 = unk_0x1D74385CEC17951D(iParam0);
		uParam1->f_70 = unk_0xAFD2714E8B5AEB9F(iParam0);
		unk_0x67CF1352CC692A08(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x0CC8B4C581022F66(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0602C700974DF696(iParam0, 2))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 28);
		}
		if (unk_0x0602C700974DF696(iParam0, 3))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 29);
		}
		if (unk_0x0602C700974DF696(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 30);
		}
		if (unk_0x0602C700974DF696(iParam0, 1))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x334291A8490E5BCB(iParam0);
		}
		if (unk_0x48E10529AEAE00F9(uParam1->f_66))
		{
			if (unk_0x4D79903AC2C62A29(iParam0))
			{
				switch (unk_0xC504A6173BF90791(iParam0))
				{
					case 3:
					case 0:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0x191DDA30577F440A(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7EB56EF7F2EC63A6(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 9);
		}
		if (unk_0x44CD355F587F467C(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 10);
		}
		if (unk_0x06B95C5D3415375D(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 13);
			unk_0xD1C8CE12A38AA6D0(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x89FF0171FDDB2246(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 12);
		}
		func_329(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xE3C9546BB1ECEC04(iParam0, iVar0 + 1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_328(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x88CF23F322C9687A(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 11);
		}
		if (unk_0x5B38E054B758C032(iParam0, "IgnoredByQuickSave") && unk_0xCDB2D643EC18E75E(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 27);
		}
	}
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				switch (unk_0x64CF0B1FED5D2D23(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xB51972B58BF40F96(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_332(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_325(iParam0);
	func_321(iParam0, 0);
}

void func_333()
{
	func_336();
	func_334();
}

void func_334()
{
	if (!iLocal_188)
	{
		if (func_37(iLocal_200))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_200, 0))
			{
				func_66(iLocal_200, -1);
				func_65(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
		{
			func_335(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
	{
		func_64(0, 320);
		iLocal_189 = 0;
	}
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_62108 = iParam0;
	if (!Global_62106)
	{
		Global_62106 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_74194[iVar0 /*9*/] == iParam0)
			{
				Global_74194[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_336()
{
}

void func_337()
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_338();
		}
	}
}

void func_338()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_200))
	{
		if (!func_37(uLocal_201) && !func_37(Local_199))
		{
			func_340(1);
			return;
		}
		if (func_37(Local_199) && !func_157(unk_0x7D2B9E6A64637269(), Local_199, fVar0, 1))
		{
			func_340(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_157(unk_0x7D2B9E6A64637269(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(uLocal_201))
		{
			if (!func_157(unk_0x7D2B9E6A64637269(), uLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (!func_157(unk_0x7D2B9E6A64637269(), Local_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(2);
			return;
		}
		iVar1 = 0;
		if (func_339(iLocal_200))
		{
			iVar1++;
		}
		if (func_37(uLocal_201))
		{
			if (func_339(uLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (func_339(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(3);
			return;
		}
	}
}

int func_339(var uParam0)
{
	if (func_37(uParam0))
	{
		if (((unk_0x0D628BB90DA6214A(uParam0, 0, 7000) || unk_0x0D628BB90DA6214A(uParam0, 3, 30000)) || unk_0x0D628BB90DA6214A(uParam0, 2, 30000)) || unk_0x0D628BB90DA6214A(uParam0, 1, 40000))
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

void func_340(int iParam0)
{
	unk_0x1036762BD3781C84();
	func_61();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

int func_341(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_342()
{
	if (!func_102(36))
	{
		func_343(21, 0, 0);
	}
}

void func_343(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_355(iParam0, 0, 0))
		{
			if (iParam2 && Global_99422.f_18[iParam0])
			{
				if (func_354(iParam0) == 3 && !func_353(iParam0))
				{
					func_352(iParam0);
					func_351(iParam0, 0, 0);
					func_345(iParam0, 1, 0);
					func_344(iParam0);
				}
				else
				{
					func_351(iParam0, 1, 0);
					func_344(iParam0);
				}
			}
			else
			{
				func_351(iParam0, 0, 0);
				func_345(iParam0, 1, 0);
				func_344(iParam0);
			}
		}
		else
		{
			func_345(iParam0, 1, 0);
			func_344(iParam0);
		}
	}
	else if (func_355(iParam0, 0, 0))
	{
		func_345(iParam0, 0, 0);
		func_345(iParam0, 1, 0);
		func_344(iParam0);
	}
}

void func_344(int iParam0)
{
	Global_99422.f_190[iParam0] = 1;
	Global_99422.f_189 = 1;
}

void func_345(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0)
		{
			uVar0 = func_348(func_349(iParam0), -1, 0);
			unk_0xC664C0067EEAB8D1(&uVar0, iParam1);
			func_346(func_349(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_346(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_347(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, iParam3);
	}
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_348(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_347(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_349(int iParam0)
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

int func_350()
{
	return Global_31345;
}

void func_351(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0)
		{
			uVar0 = func_348(func_349(iParam0), -1, 0);
			unk_0x191DDA30577F440A(&uVar0, iParam1);
			func_346(func_349(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_352(int iParam0)
{
	if (Global_99422.f_18[iParam0])
	{
		func_351(iParam0, 10, 1);
		func_351(iParam0, 19, 1);
	}
}

bool func_353(int iParam0)
{
	return func_355(iParam0, 5, 1);
}

int func_354(int iParam0)
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

int func_355(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_348(func_349(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_356(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_357())
	{
		unk_0x87F1904AB605184A(0);
		unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 2);
		unk_0x543F5B2D3F90CA6D(1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
		}
		Global_99366 = { Param0 };
		Global_99369 = fParam1;
		Global_99365 = 1;
		if (iParam2 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_99370.f_20), 14);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_99370.f_20), 24);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 24);
		}
		func_280(1);
	}
}

int func_357()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

void func_358()
{
	func_373();
	func_371();
	func_364();
	func_361();
	func_359();
}

void func_359()
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_360("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_360("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_360("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_360(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_361()
{
	Local_46[0 /*25*/] = { func_363(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_362(&(Local_46[0 /*25*/]), Local_185, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_363(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_362(&(Local_46[1 /*25*/]), Local_185, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_363(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_362(&(Local_46[2 /*25*/]), Local_185, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_363(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_362(&(Local_46[3 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_363(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_362(&(Local_46[4 /*25*/]), Local_185, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_363(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_363(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_363(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_363(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_362(&(Local_46[8 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_363(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_363(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_362(&(Local_46[10 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_363(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[11 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_363(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_363(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_362(&(Local_46[13 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_363(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_362(&(Local_46[14 /*25*/]), Local_185, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_363(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[15 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_363(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_362(&(Local_46[16 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_363(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_362(&(Local_46[17 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_363(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[18 /*25*/]), Local_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_362(var uParam0, struct<3> Param1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, struct<3> Param7, struct<3> Param8)
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = { Param7 };
	uParam0->f_14 = { Param8 };
}

struct<25> func_363(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param1 };
	Var0.f_22 = fParam2;
	Var0.f_23 = iParam3;
	return Var0;
}

void func_364()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_365(&Var0, 6);
}

void func_365(var uParam0, int iParam1)
{
	int iVar0;
	
	func_370(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_369(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_368(&uLocal_74);
	func_366(&uLocal_126, &uLocal_74, 50f);
}

void func_366(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(sqrt(((Var3.x * Var3.x) + (Var3.f_1 * Var3.f_1)))) };
		Var4 = { Var4 / FtoV(sqrt(((Var4.x * Var4.x) + (Var4.f_1 * Var4.f_1)))) };
		Var5 = { Var3 - Var4 };
		Var5 = { Var5 / FtoV(sqrt(((Var5.x * Var5.x) + (Var5.f_1 * Var5.f_1)))) };
		if (func_367(uParam1, *(uParam1[iVar1 /*3*/]) + Var5))
		{
			Var5 = { -Var5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_367(var uParam0, struct<2> Param1, Vector3 vParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_368(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_369(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_370(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_371()
{
	Local_197 = { func_372(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_372(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_372(struct<3> Param0, float fParam1, int iParam2)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_373()
{
	Local_199 = { func_374(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_374(struct<3> Param0, float fParam1, int iParam2)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_375()
{
	func_240(1);
	func_386(1);
	unk_0x16C6E55F8C91ED24(joaat("trash"), 0);
	unk_0x16C6E55F8C91ED24(joaat("towtruck"), 0);
	unk_0x16C6E55F8C91ED24(joaat("s_m_y_garbage"), 0);
	func_63();
	func_385();
	func_384();
	func_376(0);
	unk_0x4BFE89D21F9885DC();
}

void func_376(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
	unk_0x911ACE3851C77474("DRIVE", 1);
	unk_0x911ACE3851C77474("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0x911ACE3851C77474("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_38();
	func_383();
	func_382();
	func_381();
	func_380();
	func_222();
	if (bParam0)
	{
		if (unk_0x419E13582192CFEA(iLocal_200))
		{
			if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_200, 0))
					{
						Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_378();
		unk_0x1036762BD3781C84();
		func_2();
	}
	else
	{
		func_377();
	}
	unk_0xBA817770948E3E78(0);
	func_145(&uLocal_56, 0, 0);
	if (unk_0x0E8572B08CEB6A11(uLocal_184))
	{
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		unk_0xFE1DEC9C5734D0C0(uLocal_184, 0);
	}
}

void func_377()
{
	func_3();
	func_6(&Local_199);
	func_6(&uLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 1, 0, 1);
	func_5(&Local_198, 1, 0, 1);
	func_6(&uLocal_202);
}

void func_378()
{
	Global_19991 = 0;
	func_379();
}

void func_379()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(false);
		Global_21125 = 6;
	}
}

void func_380()
{
}

void func_381()
{
	if (iLocal_194)
	{
		unk_0xC39EE54ACC066848(joaat("trash"));
	}
}

void func_382()
{
}

void func_383()
{
	unk_0x824F744352C8BC82(Local_199.f_5);
}

void func_384()
{
	func_343(21, 1, 0);
}

void func_385()
{
	Global_95225 = 0;
}

void func_386(int iParam0)
{
	Global_96676 = iParam0;
}

void func_387()
{
	int iVar0;
	
	if (unk_0x79CDCC8ABB331B8C("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_112293.f_9083 || func_33(0))
	{
		if (!func_388())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_388()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

