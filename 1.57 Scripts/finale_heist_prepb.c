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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95[2];
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	Local_92 = { 27.7189f, -608.7927f, 30.6293f };
	Local_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (unk_0x4210287E2833D44B(3))
	{
		unk_0xFB8A6909539A30B1("FHPRB_STOP");
		func_210();
		func_209();
	}
	if (func_208(0))
	{
		unk_0xBB3CDAB62C8773C8("FINPRB", 0);
	}
	unk_0xF479CA7199C54C8F("WorkerPedMainGroup", &iLocal_264);
	unk_0xF479CA7199C54C8F("GuardMainGroup", &iLocal_265);
	unk_0x16C6E55F8C91ED24(joaat("packer"), 1);
	unk_0x78B2DF314748056B(5, iLocal_265, 1862763509);
	unk_0x78B2DF314748056B(5, iLocal_264, 1862763509);
	unk_0x78B2DF314748056B(1, iLocal_265, iLocal_264);
	unk_0x78B2DF314748056B(1, iLocal_264, iLocal_265);
	unk_0x78B2DF314748056B(1, iLocal_265, joaat("COP"));
	unk_0x78B2DF314748056B(1, joaat("COP"), iLocal_265);
	unk_0x78B2DF314748056B(1, iLocal_264, joaat("COP"));
	unk_0x78B2DF314748056B(1, joaat("COP"), iLocal_264);
	while (true)
	{
		unk_0xE9F487B66E055135("M_FINPRB", 0);
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 230, 0);
		}
		func_206();
		if (iLocal_272 == 0)
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_205(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_201();
		}
		func_198();
		func_191();
		func_183();
		func_178();
		func_175();
		switch (iLocal_28)
		{
			case 0:
				func_174();
				break;
			
			case 1:
				func_171();
				break;
			
			case 2:
				func_147();
				break;
			
			case 3:
				func_145();
				break;
			
			case 4:
				func_116();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			unk_0x1036762BD3781C84();
			unk_0x66AE54CE92457FEE(1);
			unk_0xFB8A6909539A30B1("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_209();
			}
			break;
	}
}

int func_2()
{
	if (Global_99370 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
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

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
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

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_112293.f_9083 || func_208(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
		Global_99406 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xD91B27582ECB3B74(5000);
	}
	iVar0 = Global_90122[iParam0 /*5*/];
	iVar1 = Global_77517.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xEB25B6CFBE0FD35C(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	func_8(&(Global_112293.f_2361.f_539), iVar1);
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

void func_8(var uParam0, int iParam1)
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
			if (!func_10(Global_112293.f_18531[iVar0], &Var2, &fVar3))
			{
				Global_112293.f_18531[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
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

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
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
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
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

void func_11(int iParam0, bool bParam1)
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

void func_12()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_14())
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
			switch (func_14())
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

int func_13()
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

int func_14()
{
	func_15();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_19(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_18(unk_0x7D2B9E6A64637269());
			if (func_17(iVar0) && (!func_16(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_17(Global_112293.f_2361.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_21()
{
	func_175();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
		if (func_34(iLocal_37, 0))
		{
			if (!func_33(iLocal_37))
			{
				while (!func_32(iLocal_37, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_39, 0))
		{
			if (!func_33(iLocal_39))
			{
				while (!func_32(iLocal_39, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_38, 0))
		{
			if (!func_33(iLocal_38))
			{
				while (!func_32(iLocal_38, 0))
				{
					wait(0);
				}
			}
		}
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_31())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x419E13582192CFEA(iLocal_33))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_39, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_39, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_39);
							unk_0xC1A7CF4B179CD225(iLocal_39);
							unk_0xBE91B077ADADE97F(iLocal_39, 1);
							unk_0xEDC0317C5B604BB1(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_38, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_38);
							unk_0xC1A7CF4B179CD225(iLocal_38);
							unk_0xBE91B077ADADE97F(iLocal_38, 1);
							unk_0xEDC0317C5B604BB1(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_37, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_37, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_37);
							unk_0xC1A7CF4B179CD225(iLocal_37);
							unk_0xBE91B077ADADE97F(iLocal_37, 1);
							unk_0xEDC0317C5B604BB1(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_38, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_38);
							unk_0xC1A7CF4B179CD225(iLocal_38);
							unk_0xBE91B077ADADE97F(iLocal_38, 1);
							unk_0xEDC0317C5B604BB1(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_37, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_37, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_37);
							unk_0xC1A7CF4B179CD225(iLocal_37);
							unk_0xBE91B077ADADE97F(iLocal_37, 1);
							unk_0xEDC0317C5B604BB1(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_39, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_39, iLocal_33, 0))
						{
							unk_0xCA089CD1A17D76DF(iLocal_39);
							unk_0xC1A7CF4B179CD225(iLocal_39);
							unk_0xBE91B077ADADE97F(iLocal_39, 1);
							unk_0xEDC0317C5B604BB1(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
				{
					unk_0xEDC0317C5B604BB1(unk_0x7D2B9E6A64637269(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x419E13582192CFEA(iLocal_33))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_39, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_39, 0))
						{
							if (!unk_0xF41EB7643E61A928(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 1))
				{
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
					settimerb(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (unk_0x419E13582192CFEA(iLocal_33))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
			{
				unk_0x77CF3E92F49E693E(iLocal_33, 0);
				unk_0x5C052A30B9FCA449(iLocal_33, 2);
				unk_0xA2C015B68CE01357(iLocal_33, 1);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_32))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_32, 0))
			{
				unk_0xA2C015B68CE01357(iLocal_32, 1);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_209();
}

void func_23(bool bParam0, int iParam1)
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
		if ((func_208(0) && Global_77494.f_1 == 1) && func_24(Global_77494))
		{
		}
		else
		{
			Global_62098 = 1;
		}
	}
	if (Global_112293.f_9083 || func_208(0))
	{
		iVar0 = func_13();
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

int func_24(int iParam0)
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

int func_25(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
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

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0x7D2B9E6A64637269();
	}
	return Global_96848[func_27(iParam0)];
}

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
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
		func_29(0);
	}
}

void func_29(int iParam0)
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

int func_30()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
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

int func_33(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
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

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
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

void func_35()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
	unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(0);
	}
	func_114();
	unk_0x1036762BD3781C84();
	func_113();
	func_112();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	unk_0xDF23DCD7A3E1B7A5(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 288.3586f);
			break;
		
		case 3:
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x419E13582192CFEA(iLocal_33))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
					{
						unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x419E13582192CFEA(iLocal_33))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
					{
						unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_108();
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_102();
				while (!func_101())
				{
					wait(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x5E84945E26CAEF1F(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_108();
			if (unk_0x419E13582192CFEA(iLocal_33))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
				{
					unk_0x78CDDD1E6367978D(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_33, 161.1163f);
				}
			}
			unk_0x6AF7EE4DD9F8B944(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_108();
			unk_0x6AF7EE4DD9F8B944(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (unk_0x419E13582192CFEA(iLocal_33))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
				{
					unk_0x78CDDD1E6367978D(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_33, 70.7778f);
				}
			}
			unk_0x16E516CA9C88FF48(joaat("s_m_m_security_01"));
			while (!unk_0xA9C0BBFB9CBB66F1(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!unk_0x419E13582192CFEA(iLocal_40))
			{
				iLocal_40 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x824F744352C8BC82(joaat("s_m_m_security_01"));
				unk_0x7B28A83A0D3DD0F9(iLocal_40, 324, 1);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam1)
{
	return func_39(&(Global_102858.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_100(uParam0))
	{
		if (func_99(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x09C4C80EA1D5B2F7(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_98(uParam0))
		{
			unk_0x6AF7EE4DD9F8B944(Param1, 5f, 1, 0, 0, 0);
			func_97(Param1, 5f, 0);
			iVar0 = unk_0x170478CC84C8AE2F(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				Var1 = { unk_0xD6E677FAD7521410(iVar0, 1) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xDB8D6815E13996A9(iVar0, Param1, 0, 0, 1);
				}
				func_80(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x8D367F0B53916265(uParam0->f_12.f_66) || unk_0xFD04BD7FA7FDC8C0(uParam0->f_12.f_66))
				{
					if (!unk_0xD13544ADC6A3F165(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iVar0)))
						{
							func_79(uParam0->f_11, 1);
						}
						else if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar0)))
						{
							func_79(uParam0->f_11, 2);
						}
					}
					unk_0xDC252CD3A5DA5F65(iVar0, 0);
					unk_0x9F6498B97F642B82(iVar0, 0);
					unk_0xD4DF29F3D7B97053(iVar0, 1);
					func_78(iVar0, uParam0->f_11);
				}
				else if ((!func_75(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xDA654EB115F9FF7D(unk_0x471C98FD94C0A5FD(), "startup_positioning"))
				{
					iVar4 = func_74(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_67(iVar4);
					}
				}
				if (((Global_99370 != 13 && Global_99370 != 10) && Global_99370 != 11) && Global_99370 != 12)
				{
					if (unk_0x15173FB88ABC94F9(&(Global_99370.f_3)) == Global_77054)
					{
						if (uParam0->f_12.f_66 == Global_112293.f_32747.f_69[21 /*78*/].f_66)
						{
							func_64(24, 0);
							func_67(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				unk_0x824F744352C8BC82(uParam0->f_12.f_66);
				Var1 = { unk_0xD6E677FAD7521410(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
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
	func_41(iParam0, &(Global_112293.f_32747.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_45(uParam1);
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
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
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
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xE3C9546BB1ECEC04(iParam0, iVar0 + 1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar0 + 1));
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

int func_42(int iParam0)
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

int func_43(int iParam0, var uParam1, var uParam2)
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

int func_44(int iParam0)
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

void func_45(var uParam0)
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

int func_46(int iParam0)
{
	if ((((((((((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || func_62(iParam0, 0, 0)) || func_62(iParam0, 1, 0)) || func_62(iParam0, 2, 0)) || func_61(iParam0) != 145) || func_60(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || !func_47(unk_0x6471F4759775FCA4(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_62(iParam0, 0, 0))
		{
		}
		if (func_62(iParam0, 1, 0))
		{
		}
		if (func_62(iParam0, 2, 0))
		{
		}
		if (func_61(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0))
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

int func_48(int iParam0, bool bParam1)
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
		if (!func_56())
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
		if ((((!func_55() && !func_54()) && !func_53()) && !func_52()) && !func_56())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_53())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
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

int func_50()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_51(int iParam0)
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

int func_52()
{
	return 0;
}

int func_53()
{
	return 1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_56()
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

int func_57(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	uVar1 = unk_0x0B676D4511ABB729(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xDA654EB115F9FF7D(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
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

int func_59(int iParam0)
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

int func_60(int iParam0)
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

int func_61(int iParam0)
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

int func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_63(iParam1, iVar0, &sVar1, &iVar2))
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

int func_63(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_64(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0))
		{
			func_65(iParam0, 1, 0);
			func_65(iParam0, 2, 0);
			func_65(iParam0, 3, 0);
			func_65(iParam0, 4, 0);
			func_65(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_65(iParam0, 0, 0);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
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

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

void func_67(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xBFCE58B2B3249999(Global_76066.f_139[iParam0], 0))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_76066.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
				unk_0x5420D0D520CF44D0(&(Global_76066.f_139[iParam0]));
			}
		}
		Global_76066[iParam0] = 1;
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_66(iParam0, 0)) && Global_76975.f_66 == 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] != 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] > 3) && (!func_69(0, Global_76066.f_555[0 /*21*/].f_12) || !func_69(1, Global_76066.f_555[0 /*21*/].f_12)))
			{
				func_68(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), &Global_76975);
				Global_77053 = Global_112293.f_32747.f_5591;
			}
			func_64(iParam0, 0);
		}
	}
}

void func_68(var uParam0, var uParam1)
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

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_70(&(Global_112293.f_32747.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_112293.f_32747.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_70(var uParam0)
{
	return *uParam0;
}

int func_71(var uParam0, int iParam1)
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
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_72(2, 1);
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
			if (func_56())
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
			if (func_56())
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
		if (!func_99(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_99(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_99(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_73(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_73(int iParam0, var uParam1, int iParam2)
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

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_76066.f_484[iVar0], 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[iVar0], 0))
		{
			unk_0x63316D59F2B56D9A(iParam0, &iVar1, &iVar2);
			unk_0x63316D59F2B56D9A(Global_76066.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(Global_76066.f_484[iVar0]) && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_77(iParam0, Global_76066.f_139[38], 0))
			{
				func_67(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_77(iParam0, Global_76066.f_139[43], 1))
			{
				func_67(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xBC28F9DB06EBE19C(unk_0x7D2B9E6A64637269(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_77(iParam0, uVar1[iVar3], 1) && func_76(unk_0xD6E677FAD7521410(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_99(Param1, 0f, 0f, 0f, 0)) || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(uVar1[iVar3], 1), 1) < 10f)
					{
						unk_0x5420D0D520CF44D0(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x419E13582192CFEA(Global_76066.f_484[14]) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[14], 0))
			{
				if (unk_0x6471F4759775FCA4(Global_76066.f_484[14]) == joaat("luxor2") && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[14]))
				{
					func_67(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x419E13582192CFEA(Global_76066.f_484[20]) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xBFCE58B2B3249999(Global_76066.f_484[20], 0))
			{
				if (unk_0x6471F4759775FCA4(Global_76066.f_484[20]) == joaat("swift2") && unk_0x91A6237658B4DA68(iParam0) == unk_0x91A6237658B4DA68(Global_76066.f_484[20]))
				{
					func_67(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_76(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_77(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x419E13582192CFEA(iParam1) && !unk_0xE50EB54E0F21BED0(iParam1, 0)) && unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x63316D59F2B56D9A(iParam0, &iVar0, &iVar1);
			unk_0x63316D59F2B56D9A(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			Global_96701[iVar0] = iParam0;
			Global_96711[iVar0] = iParam1;
			Global_96721[iVar0] = unk_0x6471F4759775FCA4(iParam0);
			if (unk_0xB480C9C35514775A(Global_96721[iVar0]))
			{
				Global_96749[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96749[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (iParam0 == 145 || Global_96711[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6471F4759775FCA4(Global_96701[iVar0]) == func_72(iParam0, iParam1))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_96701[iVar0], 0))
					{
						unk_0x4985CD0720AFD468(Global_96701[iVar0], 0, 1);
						unk_0x5420D0D520CF44D0(&(Global_96701[iVar0]));
						Global_96711[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_80(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_89(iParam0))
		{
			if (unk_0x15173FB88ABC94F9(&(uParam1->f_1)) != 0)
			{
				unk_0xFA4E6005E549B59C(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xF8A80F26627AA333())
			{
				unk_0xCF882B151A34557C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 10) != 0)
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), func_42(1));
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xAA707B921102DC82(iParam0, 0);
			if (unk_0xB51972B58BF40F96(iParam0, 5) != -1)
			{
				unk_0xAA707B921102DC82(iParam0, 1);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 13))
		{
			unk_0x5527519A6ADC0506(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF03ACE54462622C9(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 12))
		{
			unk_0x18709FF6990F23CC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x9327D4C0D6DF2D4A(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC612552622E74D36(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xA2FEFE3BBCD9FB23(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x234B68AC2E35ED5A(uParam1->f_77, 15) || func_88(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_87())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xD18C8678B41DB690(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
		}
		else
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
			unk_0x64058BD9F4A43D49(iParam0, uParam1->f_65);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 9))
		{
			unk_0xED4E91A1FC7ABBF6(iParam0, 0);
			unk_0x5AC79C98C5C17F05(iParam0, false);
		}
		if (bParam2)
		{
			unk_0x5C052A30B9FCA449(iParam0, uParam1->f_70);
		}
		unk_0xEDE3A270F1277EA3(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAB256D7C8D6A4AC9(iParam0, 2, unk_0x234B68AC2E35ED5A(uParam1->f_77, 28));
		unk_0xAB256D7C8D6A4AC9(iParam0, 3, unk_0x234B68AC2E35ED5A(uParam1->f_77, 29));
		unk_0xAB256D7C8D6A4AC9(iParam0, 0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 30));
		unk_0xAB256D7C8D6A4AC9(iParam0, 1, unk_0x234B68AC2E35ED5A(uParam1->f_77, 31));
		unk_0x2AC1ECA957EB9158(iParam0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 10));
		if (unk_0x8F37B08BFE649B87(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xF7E38415C6027209(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iParam0)))
			{
				if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_86(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_86(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x6E74C4FAEF001064(iParam0, 1);
			}
			else
			{
				unk_0x149D9B4375AB4239(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_81(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE267416B80E7921F(uParam1->f_66) && !unk_0x8D367F0B53916265(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_42(iVar5 + 1)))
				{
					if (!unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
					{
						unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
				{
					unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((unk_0x6471F4759775FCA4(iParam0) == joaat("sheava") || unk_0x6471F4759775FCA4(iParam0) == joaat("omnis")) || unk_0x6471F4759775FCA4(iParam0) == joaat("le7b"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 0) == -1)
			{
				unk_0xB021D5C8EC8634FA(iParam0, 1, 0);
			}
		}
		if (((unk_0x48E10529AEAE00F9(uParam1->f_66) && unk_0x1C4692901D44F0EE(iParam0)) && !unk_0xEACFC87E44438F24(iParam0, joaat("avenger"))) && !((((Global_4456448.f_76587 == 6 || Global_4456448.f_76587 == 7) || Global_4456448.f_76587 == 18) || Global_4456448.f_76587 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_77, 23))
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 22))
				{
					unk_0x0DF115F2DFB9476F(iParam0, 2);
				}
				else
				{
					unk_0x0DF115F2DFB9476F(iParam0, 3);
				}
			}
			else
			{
				unk_0x0DF115F2DFB9476F(iParam0, 4);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 27))
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_81(int iParam0, var uParam1, var uParam2)
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
	unk_0x7D867CDA26E248C7(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0DCD513510DC5D8A(*iParam0, 255);
				}
				else
				{
					unk_0x0DCD513510DC5D8A(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xB51972B58BF40F96(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD6844D3104C3ABBF(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_85(unk_0x6471F4759775FCA4(*iParam0), 1) && unk_0xB51972B58BF40F96(*iParam0, 24) != func_84(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6895CB0D4F2E7CDC(*iParam0, 24, func_84(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_83(iParam0);
	if (func_82(*iParam0))
	{
		unk_0xAC2B08493719B297(*iParam0, 1);
		unk_0xD4DF29F3D7B97053(*iParam0, 1);
	}
	return 1;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xB51972B58BF40F96(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x00BA91AE0048DAC9(iParam0, iVar1, unk_0xB51972B58BF40F96(iParam0, iVar1)), 32);
				iVar2 = unk_0x15173FB88ABC94F9(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x15173FB88ABC94F9("MNU_CAGE") || iVar2 == unk_0x15173FB88ABC94F9("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_83(var uParam0)
{
	switch (unk_0x6471F4759775FCA4(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xB51972B58BF40F96(*uParam0, 4) == 0)
			{
				unk_0x6895CB0D4F2E7CDC(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD6844D3104C3ABBF(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6895CB0D4F2E7CDC(*uParam0, 24, 3, false);
			break;
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x622E46C9F30FB60D(iParam0, 38);
		iVar1 = unk_0x622E46C9F30FB60D(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18848)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18850)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18854)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18851)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18858)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18856)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18861)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20806)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20807)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_86(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = unk_0xB51972B58BF40F96(iParam0, 24);
		iVar1 = unk_0xB7A74982A8F639B9(iParam0, 24);
		unk_0x29CE559068C8CC1D(iParam0, uParam1);
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("tornado6") || unk_0x6471F4759775FCA4(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 24);
		}
		else
		{
			unk_0x6895CB0D4F2E7CDC(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_87()
{
	return unk_0x14FA206D9CE730A9(-1691188696);
}

int func_88(int iParam0)
{
	var uVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
			{
				if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
				}
				return unk_0x234B68AC2E35ED5A(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!func_95(unk_0x1146A9AE09CE2B14(), -1))
		{
			iParam0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (func_91(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (func_90(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_90(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("FMDeliverableID", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "FMDeliverableID"))
		{
			return unk_0x05351AF95891EE5C(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_94(iParam0) == 233)
	{
		return func_92(iParam0);
	}
	return -1;
}

int func_92(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_93(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_96(iParam0, 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x7D2B9E6A64637269() == unk_0x27FC1B0077581B37(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
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

void func_97(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_71(&(Global_76066.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0BABEFEA577FCFA4(Param0, Global_76066.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_67(iVar0);
			}
		}
		iVar0++;
	}
}

int func_98(var uParam0)
{
	if (func_100(uParam0))
	{
		if (unk_0xA9C0BBFB9CBB66F1(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_99(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_100(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_76(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_101()
{
	return func_98(&(Global_102858.f_2890));
}

void func_102()
{
	func_103(&(Global_102858.f_2890));
}

void func_103(var uParam0)
{
	if (func_100(uParam0))
	{
		unk_0x16E516CA9C88FF48(uParam0->f_12.f_66);
	}
}

int func_104(struct<3> Param0, int iParam1)
{
	return func_105(Global_102858.f_2890.f_12.f_66, Param0, iParam1);
}

int func_105(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_106() };
	}
	unk_0xC78A38E5FBC66080(iParam0, &Var0, &Var1);
	if ((Var1.x - Var0.x) > Param1.x)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_106()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_107()
{
	return func_100(&(Global_102858.f_2890));
}

void func_108()
{
	unk_0x16E516CA9C88FF48(joaat("armytrailer2"));
	unk_0x16E516CA9C88FF48(joaat("packer"));
	unk_0x16E516CA9C88FF48(joaat("s_m_y_construct_01"));
	unk_0x16E516CA9C88FF48(joaat("s_m_m_security_01"));
	unk_0x16E516CA9C88FF48(joaat("bison2"));
	while ((((!unk_0xA9C0BBFB9CBB66F1(joaat("armytrailer2")) || !unk_0xA9C0BBFB9CBB66F1(joaat("packer"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_y_construct_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("s_m_m_security_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("bison2")))
	{
		wait(0);
	}
	if (!unk_0x419E13582192CFEA(iLocal_32))
	{
		if (unk_0x419E13582192CFEA(Global_95867[1]))
		{
			unk_0x4985CD0720AFD468(Global_95867[1], 1, 1);
			iLocal_32 = Global_95867[1];
			unk_0xD3B638D46BF908EE(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x170478CC84C8AE2F(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0xD3B638D46BF908EE(iLocal_32);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_33))
	{
		if (unk_0x419E13582192CFEA(Global_95867[2]))
		{
			unk_0x4985CD0720AFD468(Global_95867[2], 1, 1);
			iLocal_33 = Global_95867[2];
			unk_0xD4DF29F3D7B97053(iLocal_33, 1);
			unk_0x5C052A30B9FCA449(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x170478CC84C8AE2F(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0xD4DF29F3D7B97053(iLocal_33, 1);
			unk_0x5C052A30B9FCA449(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
	}
	unk_0xC08E749A208F1CB3(iLocal_33, iLocal_32, 0.5f);
	unk_0x824F744352C8BC82(joaat("armytrailer2"));
	unk_0x824F744352C8BC82(joaat("packer"));
	unk_0x824F744352C8BC82(joaat("bison2"));
	if (!unk_0x419E13582192CFEA(iLocal_35[0]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[0]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[0], 1, 1);
			iLocal_35[0] = Global_95867.f_9[0];
			unk_0x2271ED1E65FB75EE(iLocal_35[0], iLocal_264);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[0], iLocal_264);
			if (unk_0x7B44CC985AF750BD(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0xBE91B077ADADE97F(iLocal_35[0], 1);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[1]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[1]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[1], 1, 1);
			iLocal_35[1] = Global_95867.f_9[1];
			unk_0x2271ED1E65FB75EE(iLocal_35[1], iLocal_264);
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[1], iLocal_264);
			if (unk_0x7B44CC985AF750BD(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[1], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[2]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[2]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[2], 1, 1);
			iLocal_35[2] = Global_95867.f_9[2];
			unk_0x2271ED1E65FB75EE(iLocal_35[2], iLocal_264);
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[2], iLocal_264);
			if (unk_0x7B44CC985AF750BD(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[2], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[3]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[3]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[3], 1, 1);
			iLocal_35[3] = Global_95867.f_9[3];
			unk_0x2271ED1E65FB75EE(iLocal_35[3], iLocal_264);
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[3], iLocal_264);
			if (unk_0x7B44CC985AF750BD(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[3], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[4]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[4]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[4], 1, 1);
			iLocal_35[4] = Global_95867.f_9[4];
			unk_0x2271ED1E65FB75EE(iLocal_35[4], iLocal_264);
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[4], iLocal_264);
			if (unk_0x7B44CC985AF750BD(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[4], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[5]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[5]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[5], 1, 1);
			iLocal_35[5] = Global_95867.f_9[5];
			unk_0x2271ED1E65FB75EE(iLocal_35[5], iLocal_264);
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[5], iLocal_264);
			if (unk_0x7B44CC985AF750BD(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_35[5], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_35[6]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[8]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[8], 1, 1);
			iLocal_35[6] = Global_95867.f_9[8];
			unk_0x2271ED1E65FB75EE(iLocal_35[6], iLocal_264);
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0xBE91B077ADADE97F(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_35[6], iLocal_264);
			if (unk_0x7B44CC985AF750BD(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x2D64BC4D301915C2(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0xBE91B077ADADE97F(iLocal_35[6], 1);
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_36[0]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[6]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[6], 1, 1);
			iLocal_36[0] = Global_95867.f_9[6];
			unk_0x2271ED1E65FB75EE(iLocal_36[0], iLocal_265);
			func_109(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_36[0], 1);
			unk_0xD82D50E4AC0D46B9(iLocal_36[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x90517F1BF9113FB8(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_36[0], iLocal_265);
			func_109(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_36[0], 1);
			unk_0xD82D50E4AC0D46B9(iLocal_36[0], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x90517F1BF9113FB8(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x419E13582192CFEA(iLocal_36[1]))
	{
		if (unk_0x419E13582192CFEA(Global_95867.f_9[7]))
		{
			unk_0x4985CD0720AFD468(Global_95867.f_9[7], 1, 1);
			iLocal_36[1] = Global_95867.f_9[7];
			unk_0x2271ED1E65FB75EE(iLocal_36[1], iLocal_265);
			func_109(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_36[1], 1);
			unk_0xD82D50E4AC0D46B9(iLocal_36[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x90517F1BF9113FB8(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			unk_0x2271ED1E65FB75EE(iLocal_36[1], iLocal_265);
			func_109(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0xBE91B077ADADE97F(iLocal_36[1], 1);
			unk_0xD82D50E4AC0D46B9(iLocal_36[1], joaat("weapon_pistol"), 100, 0, 0);
			unk_0x90517F1BF9113FB8(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x824F744352C8BC82(joaat("s_m_y_construct_01"));
	unk_0x824F744352C8BC82(joaat("s_m_m_security_01"));
}

void func_109(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		unk_0x087B9DEC55AB5B29(iParam0, fParam1);
		unk_0xF5B58EA504D56F28(iParam0, iParam2);
		unk_0xACF48634C49FCE07(iParam0, (fParam3 / 2f));
		unk_0x2802DE2B1DABE4B3(iParam0, iParam4);
		unk_0x064DCAED924C10B6(iParam0, iParam5);
	}
}

void func_110(int iParam0, int iParam1)
{
	Global_62109 = iParam0;
	Global_62110 = iParam1;
}

void func_111(int iParam0, int iParam1)
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

void func_112()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x419E13582192CFEA(iLocal_35[iLocal_54]) && unk_0x9984C023D4E57C2E(iLocal_35[iLocal_54], 1))
		{
			unk_0xC606AE2A3209945E(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (unk_0x419E13582192CFEA(iLocal_36[0]) && unk_0x9984C023D4E57C2E(iLocal_36[0], 1))
	{
		unk_0xC606AE2A3209945E(&(iLocal_36[0]));
	}
	if (unk_0x419E13582192CFEA(iLocal_36[1]) && unk_0x9984C023D4E57C2E(iLocal_36[1], 1))
	{
		unk_0xC606AE2A3209945E(&(iLocal_36[1]));
	}
	if (unk_0x419E13582192CFEA(iLocal_37) && unk_0x9984C023D4E57C2E(iLocal_37, 1))
	{
		unk_0xC606AE2A3209945E(&iLocal_37);
	}
	if (unk_0x419E13582192CFEA(iLocal_38) && unk_0x9984C023D4E57C2E(iLocal_38, 1))
	{
		unk_0xC606AE2A3209945E(&iLocal_38);
	}
	if (unk_0x419E13582192CFEA(iLocal_39) && unk_0x9984C023D4E57C2E(iLocal_39, 1))
	{
		unk_0xC606AE2A3209945E(&iLocal_39);
	}
	if (unk_0x419E13582192CFEA(iLocal_40) && unk_0x9984C023D4E57C2E(iLocal_40, 1))
	{
		unk_0xC606AE2A3209945E(&iLocal_40);
	}
	if (!func_31())
	{
		unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 270.1911f);
	}
	if (unk_0x419E13582192CFEA(iLocal_32) && unk_0x9984C023D4E57C2E(iLocal_32, 1))
	{
		unk_0x5420D0D520CF44D0(&iLocal_32);
	}
	if (unk_0x419E13582192CFEA(Global_95867[3]))
	{
		unk_0x4985CD0720AFD468(Global_95867[3], 1, 0);
		unk_0x5420D0D520CF44D0(&(Global_95867[3]));
	}
	if (unk_0x419E13582192CFEA(iLocal_33) && unk_0x9984C023D4E57C2E(iLocal_33, 1))
	{
		unk_0x5420D0D520CF44D0(&iLocal_33);
	}
	unk_0xF9135F131C423364("cellphone@str");
	unk_0xF9135F131C423364("misscarsteal4@director_grip");
	unk_0x08918C6897982748("FHPRB_START");
	unk_0x08918C6897982748("FHPRB_TRUCK");
	unk_0x08918C6897982748("FHPRB_COPS");
	unk_0x08918C6897982748("FHPRB_LOST");
	unk_0x08918C6897982748("FHPRB_STOP");
	unk_0x6AF7EE4DD9F8B944(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_113()
{
	if (unk_0x575B7C28D81C0B4D(uLocal_49))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_50))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_50);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_51))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_51);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_52))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_52);
	}
}

void func_114()
{
	Global_19991 = 0;
	func_115();
}

void func_115()
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

void func_116()
{
	func_139();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		unk_0x20D884FB6567BAD5(5);
		unk_0xF9135F131C423364("cellphone@str");
		unk_0xF9135F131C423364("misscarsteal4@director_grip");
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		unk_0x5E84945E26CAEF1F(1f);
		unk_0x2DC2890038BFF758(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_138(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_138(&uLocal_99, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_138(&uLocal_99, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_138(&uLocal_99, 2, unk_0x7D2B9E6A64637269(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x2DC2890038BFF758(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x2DC2890038BFF758(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x2DC2890038BFF758(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!unk_0x575B7C28D81C0B4D(uLocal_50))
		{
			if (!func_122())
			{
				if (timera() > 10500)
				{
					uLocal_50 = func_120(Local_92, 1);
				}
			}
		}
		if (func_122())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
				{
					if (unk_0x83E7671FB1B0EA3F(iLocal_33))
					{
						if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_92, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_118(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0xFB8A6909539A30B1("FHPRB_STOP");
								if (unk_0x575B7C28D81C0B4D(uLocal_50))
								{
									unk_0x1AD5BCFEC31BB8D9(&uLocal_50);
								}
								unk_0x2DC2890038BFF758(5f, 5f, 4);
								func_117(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_117(bool bParam0, int iParam1)
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

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_119(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, fParam1, iParam2, iParam4);
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

void func_119(int iParam0)
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

var func_120(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_121(unk_0x02BFF15CAA701972(), 1f, 1f));
	unk_0x13CC211F9F7ACE7F(uVar0, iParam1);
	return uVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122()
{
	if (Global_21125 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_123(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_137(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	Global_2621441 = 0;
	return func_124(sParam3, iParam4, bParam8);
}

int func_124(char* sParam0, int iParam1, bool bParam2)
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
					func_115();
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
		if (func_136(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_135();
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
				func_134();
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
				if (func_133())
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
			if (func_132())
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
			func_131();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_130();
		func_125();
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
		func_115();
	}
	return 0;
}

void func_125()
{
	if (!func_126())
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

int func_126()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_129())
	{
		return 0;
	}
	if (func_127(unk_0x1146A9AE09CE2B14()))
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

bool func_127(int iParam0)
{
	return func_128(iParam0, 20);
}

bool func_128(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_129()
{
	return -1;
}

void func_130()
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

void func_131()
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

int func_132()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_133()
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

void func_134()
{
	if (func_16(14))
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
		Global_19798 = func_14();
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

void func_135()
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

bool func_136(int iParam0, int iParam1)
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

void func_137(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_138(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_139()
{
	if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
	{
		if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
		{
			if (unk_0x83E7671FB1B0EA3F(iLocal_33))
			{
				if (func_144("HELP_1"))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_49))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (unk_0xDFB7BFA6482FEE1E() < iLocal_85 + 7500)
						{
							unk_0x1036762BD3781C84();
						}
					}
					unk_0x1AD5BCFEC31BB8D9(&uLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
					{
						if (iLocal_346 == 0)
						{
							unk_0x08918C6897982748("FHPRB_COPS");
							unk_0xFB8A6909539A30B1("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (unk_0xDFB7BFA6482FEE1E() < iLocal_86 + 7500)
							{
								unk_0x1036762BD3781C84();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!unk_0x575B7C28D81C0B4D(uLocal_50))
							{
								uLocal_50 = func_120(Local_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!unk_0x123480158F10FA67())
								{
									func_143("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0x575B7C28D81C0B4D(uLocal_50))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_50);
						}
						if (iLocal_269 == 0)
						{
							unk_0x1036762BD3781C84();
							func_143("GOD_4", 7500, -1);
							unk_0xFB8A6909539A30B1("FHPRB_COPS");
							iLocal_86 = unk_0xDFB7BFA6482FEE1E();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_49))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_50))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_50);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_32, 0))
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_52))
					{
						uLocal_52 = func_141(iLocal_32, 0, 0);
						unk_0xB592493CDC7124C3(uLocal_52, 1);
						if (unk_0x123480158F10FA67())
						{
							unk_0x1036762BD3781C84();
						}
						if (iLocal_294 == 0)
						{
							func_143("GOD_6", 7500, -1);
							iLocal_85 = unk_0xDFB7BFA6482FEE1E();
							iLocal_294 = 1;
						}
						if (!func_144("HELP_1"))
						{
							func_140("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x575B7C28D81C0B4D(uLocal_52))
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_52);
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_50))
			{
				unk_0x1AD5BCFEC31BB8D9(&uLocal_50);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
			{
				if (!unk_0x575B7C28D81C0B4D(uLocal_49))
				{
					uLocal_49 = func_141(iLocal_33, 0, 0);
					unk_0xB592493CDC7124C3(uLocal_49, 1);
				}
			}
			if (iLocal_270 == 0)
			{
				unk_0x1036762BD3781C84();
				func_143("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_140(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	return func_142(iParam0, !bParam1, bParam2);
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_121(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_121(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_121(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

bool func_144(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_145()
{
	if (iLocal_53 > 1)
	{
		func_139();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		unk_0x068BDE31F7D112BB("cellphone@str");
		unk_0x068BDE31F7D112BB("misscarsteal4@director_grip");
		if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
		{
			if (!unk_0x575B7C28D81C0B4D(uLocal_49))
			{
				uLocal_49 = func_141(iLocal_33, 0, 0);
				unk_0xB592493CDC7124C3(uLocal_49, true);
			}
		}
		unk_0x20D884FB6567BAD5(0);
		if (unk_0x8B6A925F148E0E94())
		{
			if (!func_31())
			{
				unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			}
			if (unk_0x419E13582192CFEA(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				unk_0x795957CD3A0042C8(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		unk_0xFB8A6909539A30B1("FHPRB_START");
		unk_0x6AF7EE4DD9F8B944(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!unk_0x123480158F10FA67())
			{
				unk_0x2DC2890038BFF758(5f, 8f, 4);
				func_143("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
			{
				unk_0xFB8A6909539A30B1("FHPRB_TRUCK");
				if (unk_0x575B7C28D81C0B4D(uLocal_49))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
				}
				func_146(656, 0);
				unk_0x5E84945E26CAEF1F(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
			{
				if (unk_0x83E7671FB1B0EA3F(iLocal_33))
				{
					if (func_144("HELP_1"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_49))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_52))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_52);
					}
					if (unk_0x0BABEFEA577FCFA4(Local_93, Local_96, 1) < 100f)
					{
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (unk_0xDFB7BFA6482FEE1E() < iLocal_86 + 7500)
								{
									unk_0x1036762BD3781C84();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								unk_0x2DC2890038BFF758(5f, 8f, 4);
								func_143("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							unk_0x2DC2890038BFF758(5f, 8f, 4);
							unk_0xB63015EB91A2D1FF("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = unk_0xDFB7BFA6482FEE1E();
							func_143("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_49))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_49);
					}
					if (unk_0xBFCE58B2B3249999(iLocal_32, 0))
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_52))
						{
							uLocal_52 = func_141(iLocal_32, 0, 0);
							unk_0xB592493CDC7124C3(uLocal_52, true);
							if (unk_0x123480158F10FA67())
							{
								unk_0x1036762BD3781C84();
							}
							if (iLocal_294 == 0)
							{
								func_143("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_144("HELP_1"))
							{
								func_140("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_52))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_52);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_49))
					{
						uLocal_49 = func_141(iLocal_33, 0, 0);
						unk_0xB592493CDC7124C3(uLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					unk_0x1036762BD3781C84();
					func_143("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_146(int iParam0, bool bParam1)
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

void func_147()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		func_170();
		func_108();
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0xEC173D75B3C8E9EC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
			unk_0x6E1E3A5B1F9AB95B(800);
		}
		if (unk_0x419E13582192CFEA(Global_95867[3]))
		{
			if (unk_0xBFCE58B2B3249999(Global_95867[3], 0))
			{
				if (unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(Global_95867[3])))
				{
					unk_0x4985CD0720AFD468(Global_95867[3], 1, 1);
					func_149(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(Global_95867[3])) || unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(Global_95867[3]))) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(Global_95867[3]))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(Global_95867[3])))
				{
					unk_0x4985CD0720AFD468(Global_95867[3], 1, 1);
					func_149(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_148(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_148(int iParam0)
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

void func_149(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x419E13582192CFEA(Global_102858.f_4))
	{
		if (unk_0xBFCE58B2B3249999(Global_102858.f_4, 0))
		{
			if (func_169(24) != Global_102858.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_166(unk_0xD6E677FAD7521410(Global_102858.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_150(Global_102858.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_150(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
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
		func_165(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_99(Param1, 0f, 0f, 0f, 0))
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
		func_163(iParam3, &Var0, Param1, uParam2, func_61(iParam0));
		func_151(iParam3, iParam0, 0);
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_71(&(Global_76066.f_555[0 /*21*/]), iParam0))
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
				Global_112293.f_32747.f_4801 = func_152();
			}
			if (iParam1 != Global_76066.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_169(iParam0);
					if ((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_76972 = iParam1;
				Global_76973 = iParam0;
				Global_76974 = iParam2;
			}
		}
	}
}

var func_152()
{
	var uVar0;
	
	func_162(&uVar0, unk_0x1947D86A2BB06F8D());
	func_161(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_160(&uVar0, unk_0xCA86FAB7FADC8353());
	func_155(&uVar0, unk_0x9E6858A319A1F6F2());
	func_154(&uVar0, unk_0xA91C851005050418());
	func_153(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 1 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_156(int iParam0, int iParam1)
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

var func_157(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_158(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(var uParam0)
{
	return uParam0 & 15;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_163(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_71(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
		{
			func_164(iParam0);
			func_68(uParam1, &(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_64(iParam0, 1);
		}
	}
}

void func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
			unk_0x795957CD3A0042C8(&(Global_76066.f_139[iParam0]));
			Global_76066.f_139[iParam0] = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			func_64(iParam0, 0);
		}
	}
}

void func_165(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_164(iParam0);
	func_64(iParam0, 0);
}

int func_166(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_167(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_167(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_94408[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_94408[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_168(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Global_94408[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_168(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iParam0], 0);
}

int func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76066.f_139[iParam0];
}

void func_170()
{
	Global_93548 = 1;
}

void func_171()
{
	unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
	unk_0x5E84945E26CAEF1F(0.01f);
	uLocal_44 = unk_0x0823FA7465392E20(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_45 = unk_0x0823FA7465392E20(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_46 = unk_0x0823FA7465392E20(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_47 = unk_0x0823FA7465392E20(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_42 = unk_0x0823FA7465392E20(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_43 = unk_0x0823FA7465392E20(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_30())
	{
		if (Global_93547 == 1)
		{
			func_173(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_172() == 0)
		{
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_173(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_173(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_208(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_172()
{
	if (!Global_99370 == 10 && !Global_99370 == 9)
	{
		return 0;
	}
	return Global_99370.f_2;
}

void func_173(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_30())
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
		func_29(1);
	}
}

void func_174()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_175()
{
	if (!unk_0x419E13582192CFEA(iLocal_40))
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			unk_0x16E516CA9C88FF48(joaat("s_m_m_security_01"));
			if (unk_0xA9C0BBFB9CBB66F1(joaat("s_m_m_security_01")))
			{
				iLocal_40 = unk_0x0FDCFECB2EF2BC1C(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x7B28A83A0D3DD0F9(iLocal_40, 324, 1);
			}
			unk_0x824F744352C8BC82(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_40))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_40))
		{
			if (unk_0x7B44CC985AF750BD(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (unk_0xB4E725A8915BDF60(iLocal_40))
					{
						unk_0xCA089CD1A17D76DF(iLocal_40);
					}
					else
					{
						unk_0x16D66F11FE644901(iLocal_40);
					}
					unk_0x5F2B3E2AFA7B81C5(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0x504B26425DFF773C(iLocal_40, 1);
					iLocal_89 = unk_0xDFB7BFA6482FEE1E();
					iLocal_337 = 1;
				}
				else if (unk_0xDFB7BFA6482FEE1E() > iLocal_89 + 5000)
				{
					if (!unk_0x906F945A9175295C(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_177(unk_0x7D2B9E6A64637269(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					unk_0x8ADA462BC5F42FD8(iLocal_40, unk_0x7D2B9E6A64637269(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				unk_0x8ADA462BC5F42FD8(iLocal_40, unk_0x7D2B9E6A64637269(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			unk_0x94F284E4B5633B45(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x94F284E4B5633B45(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
			{
				if (Local_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						unk_0x9A347B86DBED8192(iLocal_90, fLocal_97, 0, 1);
						unk_0x9A347B86DBED8192(iLocal_91, fLocal_97, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_90, 4, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (Local_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x9A347B86DBED8192(iLocal_90, fLocal_97, 0, 1);
						unk_0x9A347B86DBED8192(iLocal_91, fLocal_97, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_90, 4, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (Local_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x9A347B86DBED8192(iLocal_90, fLocal_97, 0, 1);
						unk_0x9A347B86DBED8192(iLocal_91, fLocal_97, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_90, 4, 0, 1);
						unk_0x1EA8B94F4F446F35(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (unk_0x419E13582192CFEA(iLocal_40))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_40))
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_137(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_124(sParam2, iParam3, 0);
}

float func_177(int iParam0, int iParam1, int iParam2)
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

void func_178()
{
	int iVar0;
	
	if (!unk_0x123480158F10FA67())
	{
		if (!func_182() || !unk_0x70729B766882A4DF())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0xDFB7BFA6482FEE1E();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && unk_0xDFB7BFA6482FEE1E() > iLocal_88 + 7000)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = unk_0xDFB7BFA6482FEE1E();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0xDFB7BFA6482FEE1E();
								iLocal_336 = 1;
							}
						}
					}
					else if (unk_0xDFB7BFA6482FEE1E() > iLocal_84 + 8000)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_114();
						if (func_180())
						{
							unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = unk_0xDFB7BFA6482FEE1E();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = unk_0xDFB7BFA6482FEE1E();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = unk_0xDFB7BFA6482FEE1E();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (unk_0xDFB7BFA6482FEE1E() > iLocal_61 + 9000)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_33))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
							{
								if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0xDFB7BFA6482FEE1E();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xDFB7BFA6482FEE1E() > iLocal_62 + 10000)
					{
						if (unk_0x419E13582192CFEA(iLocal_33))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
							{
								if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0xDFB7BFA6482FEE1E();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_179()
{
	if (func_14() == 0)
	{
		func_138(&uLocal_99, 0, unk_0x7D2B9E6A64637269(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_138(&uLocal_99, 1, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_138(&uLocal_99, 2, unk_0x7D2B9E6A64637269(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_180()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (unk_0x419E13582192CFEA(iLocal_35[iLocal_57]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_57]))
			{
				iVar0 = func_181(unk_0x7D2B9E6A64637269(), iLocal_264, 0, 0, -1);
				if (unk_0x419E13582192CFEA(iVar0))
				{
					if (!unk_0xECEC7528A52B4EE8(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_177(unk_0x7D2B9E6A64637269(), iVar0, 1) < 15f)
				{
					func_138(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		unk_0x65C60F47A52ECB92(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x419E13582192CFEA(iVar0[iVar1]))
			{
				if (!unk_0xECEC7528A52B4EE8(iVar0[iVar1]))
				{
					if (unk_0x5FB5CBC5FDADA3C9(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xB4E725A8915BDF60(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x419E13582192CFEA(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0xECEC7528A52B4EE8(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x5FB5CBC5FDADA3C9(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xB4E725A8915BDF60(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
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
	return 0;
}

int func_182()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_183()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x8E93627D38C90C19(unk_0x7D2B9E6A64637269()) && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
		{
			unk_0x5E84945E26CAEF1F(0f);
		}
		else
		{
			unk_0x5E84945E26CAEF1F(1f);
		}
	}
	func_190();
	if (iLocal_303[0])
	{
		if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
		{
			if (iLocal_328[0] == 0)
			{
				unk_0x8ADA462BC5F42FD8(iLocal_36[0], unk_0x7D2B9E6A64637269(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (unk_0x4E8DA737B686529A(iLocal_36[0], 150319005) != 0 || unk_0x4E8DA737B686529A(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			unk_0x8ADA462BC5F42FD8(iLocal_36[0], unk_0x7D2B9E6A64637269(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
		{
			if (iLocal_328[1] == 0)
			{
				unk_0x8ADA462BC5F42FD8(iLocal_36[1], unk_0x7D2B9E6A64637269(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (unk_0x4E8DA737B686529A(iLocal_36[1], 150319005) != 0 || unk_0x4E8DA737B686529A(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			unk_0x8ADA462BC5F42FD8(iLocal_36[1], unk_0x7D2B9E6A64637269(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0xE0FA63A00F898A62("SCRAP_SECURITY"))
			{
				if (!unk_0x314B0D9D224ABE3A("SCRAP_SECURITY"))
				{
					unk_0xC1085DC8A8C1737B("SCRAP_SECURITY", 1);
				}
				if (unk_0x314B0D9D224ABE3A("SCRAP_SECURITY"))
				{
					if (unk_0x419E13582192CFEA(iLocal_36[0]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
						{
							if (!unk_0xBB6CECEE064309F6(iLocal_36[0]))
							{
								if (unk_0x7B44CC985AF750BD(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
									if (!unk_0x0031CE6ACFF2F400(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (unk_0xDFB7BFA6482FEE1E() > iLocal_83[0] + 2000)
								{
									if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iLocal_36[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											unk_0x45B1B4E55BF15523(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_36[1]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
						{
							if (!unk_0xBB6CECEE064309F6(iLocal_36[1]))
							{
								if (unk_0x7B44CC985AF750BD(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
									if (!unk_0x0031CE6ACFF2F400(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (unk_0xDFB7BFA6482FEE1E() > iLocal_83[1] + 2000)
								{
									if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iLocal_36[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											unk_0x45B1B4E55BF15523(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x419E13582192CFEA(iLocal_36[0]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
					{
						if ((func_189(unk_0x7D2B9E6A64637269()) == joaat("weapon_unarmed") || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) || func_188(0))
						{
							if (unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 100f) || unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
							{
								if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!unk_0x836F48E8C4A773BF(iLocal_36[0], unk_0x7D2B9E6A64637269(), 45f))
										{
											if (!unk_0xB4E725A8915BDF60(iLocal_36[0]))
											{
												unk_0x16D66F11FE644901(iLocal_36[0]);
											}
											else
											{
												unk_0xCA089CD1A17D76DF(iLocal_36[0]);
											}
											unk_0xB0C1A43193C25F7A(iLocal_36[0], unk_0x7D2B9E6A64637269(), 5000);
											iLocal_82[0] = unk_0xDFB7BFA6482FEE1E();
											func_187(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (unk_0xDFB7BFA6482FEE1E() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = unk_0xDFB7BFA6482FEE1E();
											iLocal_302 = 1;
										}
										else if (unk_0xDFB7BFA6482FEE1E() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = unk_0xDFB7BFA6482FEE1E();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_185(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0xDFB7BFA6482FEE1E();
												iLocal_305 = 1;
											}
											else if (unk_0xDFB7BFA6482FEE1E() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0xDFB7BFA6482FEE1E();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0xDFB7BFA6482FEE1E();
												iLocal_306 = 1;
											}
											else if (unk_0xDFB7BFA6482FEE1E() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_36[1]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 15f)
					{
						if ((func_189(unk_0x7D2B9E6A64637269()) == joaat("weapon_unarmed") || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) || func_188(0))
						{
							if (unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 100f))
							{
								if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!unk_0x836F48E8C4A773BF(iLocal_36[1], unk_0x7D2B9E6A64637269(), 45f))
										{
											if (!unk_0xB4E725A8915BDF60(iLocal_36[1]))
											{
												unk_0x16D66F11FE644901(iLocal_36[1]);
											}
											else
											{
												unk_0xCA089CD1A17D76DF(iLocal_36[1]);
											}
											unk_0xB0C1A43193C25F7A(iLocal_36[1], unk_0x7D2B9E6A64637269(), 5000);
											iLocal_82[1] = unk_0xDFB7BFA6482FEE1E();
											func_187(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (unk_0xDFB7BFA6482FEE1E() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = unk_0xDFB7BFA6482FEE1E();
											iLocal_302 = 1;
										}
										else if (unk_0xDFB7BFA6482FEE1E() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = unk_0xDFB7BFA6482FEE1E();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = unk_0xDFB7BFA6482FEE1E();
												iLocal_305 = 1;
											}
											else if (unk_0xDFB7BFA6482FEE1E() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = unk_0xDFB7BFA6482FEE1E();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = unk_0xDFB7BFA6482FEE1E();
												iLocal_306 = 1;
											}
											else if (unk_0xDFB7BFA6482FEE1E() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_184() || iLocal_297 == 1)
			{
				if (unk_0x419E13582192CFEA(iLocal_36[0]))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
					{
						if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
						{
							iLocal_81[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[0]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[0]);
								}
								unk_0xA415F00D0E0DFBCE(iLocal_36[0], 50, 1);
								unk_0x9DA29013F33252A6(iLocal_36[0], unk_0x7D2B9E6A64637269(), 0, 16);
								func_187(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[0]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[0]);
								}
								unk_0x45B1B4E55BF15523(iLocal_36[0], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (unk_0xDFB7BFA6482FEE1E() > iLocal_81[0] + 500)
								{
									if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
									{
										unk_0xCA089CD1A17D76DF(iLocal_36[0]);
									}
									else
									{
										unk_0x16D66F11FE644901(iLocal_36[0]);
									}
									unk_0x45B1B4E55BF15523(iLocal_36[0], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x419E13582192CFEA(iLocal_36[1]))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
					{
						if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
						{
							iLocal_81[1] = unk_0xDFB7BFA6482FEE1E();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[1]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[1]);
								}
								unk_0xA415F00D0E0DFBCE(iLocal_36[1], 50, 1);
								unk_0x9DA29013F33252A6(iLocal_36[1], unk_0x7D2B9E6A64637269(), 0, 16);
								func_187(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[1]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[1]);
								}
								unk_0x45B1B4E55BF15523(iLocal_36[1], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (unk_0xDFB7BFA6482FEE1E() > iLocal_81[1] + 500)
								{
									if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
									{
										unk_0xCA089CD1A17D76DF(iLocal_36[1]);
									}
									else
									{
										unk_0x16D66F11FE644901(iLocal_36[1]);
									}
									unk_0x45B1B4E55BF15523(iLocal_36[1], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_184())
				{
					if (iLocal_307 == 0)
					{
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) < 2)
						{
							unk_0x20D884FB6567BAD5(5);
							unk_0x5E84945E26CAEF1F(1f);
							unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
							unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
								{
									func_185(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = unk_0xDFB7BFA6482FEE1E();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0xDFB7BFA6482FEE1E() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
								{
									func_185(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = unk_0xDFB7BFA6482FEE1E();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
								{
									func_185(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0xDFB7BFA6482FEE1E();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0xDFB7BFA6482FEE1E() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
								{
									func_185(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0xDFB7BFA6482FEE1E();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_181(unk_0x7D2B9E6A64637269(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (unk_0x419E13582192CFEA(iLocal_41))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_41))
								{
									if (func_177(unk_0x7D2B9E6A64637269(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0xDFB7BFA6482FEE1E();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0xDFB7BFA6482FEE1E() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0xDFB7BFA6482FEE1E();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0xDFB7BFA6482FEE1E() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
				}
			}
			if (!func_184())
			{
				if (iLocal_309 == 0)
				{
					if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (unk_0x419E13582192CFEA(iLocal_36[0]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
								{
									iLocal_65 = unk_0xDFB7BFA6482FEE1E();
									iLocal_309 = 1;
								}
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_36[1]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
								{
									iLocal_65 = unk_0xDFB7BFA6482FEE1E();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (unk_0x419E13582192CFEA(iLocal_36[0]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) > 4f)
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
								{
									if (iLocal_329[0] == 0)
									{
										if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
										{
											unk_0xCA089CD1A17D76DF(iLocal_36[0]);
										}
										else
										{
											unk_0x16D66F11FE644901(iLocal_36[0]);
										}
										unk_0xF0ED372419FE0E70(iLocal_36[0], unk_0x7D2B9E6A64637269(), -1, 0.5f, 2f, 1073741824, 0);
										func_187(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = unk_0xDFB7BFA6482FEE1E();
								}
								else if (unk_0xDFB7BFA6482FEE1E() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
										{
											unk_0xCA089CD1A17D76DF(iLocal_36[0]);
										}
										else
										{
											unk_0x16D66F11FE644901(iLocal_36[0]);
										}
										unk_0x45B1B4E55BF15523(iLocal_36[0], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[0]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[0]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[0]);
								}
								unk_0x5C679902079A7E80(&uLocal_48);
								unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
								unk_0x373635EFD76DFAB3(0, 2000);
								unk_0xCC2EDAABFCD738A4(uLocal_48, 1);
								unk_0x1BBD0A5729AB1226(uLocal_48);
								unk_0x8A1AC8EBC73850C8(iLocal_36[0], uLocal_48);
								unk_0x8D5B447F21217223(&uLocal_48);
								func_187(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = unk_0xDFB7BFA6482FEE1E();
												iLocal_68 = unk_0xDFB7BFA6482FEE1E();
												iLocal_65 = unk_0xDFB7BFA6482FEE1E();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (unk_0xDFB7BFA6482FEE1E() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xDFB7BFA6482FEE1E() > iLocal_68 + 7000)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 15f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_36[1]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) > 4f)
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
								{
									if (iLocal_329[1] == 0)
									{
										if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
										{
											unk_0xCA089CD1A17D76DF(iLocal_36[1]);
										}
										else
										{
											unk_0x16D66F11FE644901(iLocal_36[1]);
										}
										unk_0xF0ED372419FE0E70(iLocal_36[1], unk_0x7D2B9E6A64637269(), -1, 0.5f, 2f, 1073741824, 0);
										func_187(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = unk_0xDFB7BFA6482FEE1E();
								}
								else if (unk_0xDFB7BFA6482FEE1E() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
										{
											unk_0xCA089CD1A17D76DF(iLocal_36[1]);
										}
										else
										{
											unk_0x16D66F11FE644901(iLocal_36[1]);
										}
										unk_0x45B1B4E55BF15523(iLocal_36[1], unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (unk_0xB4E725A8915BDF60(iLocal_36[1]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_36[1]);
								}
								else
								{
									unk_0x16D66F11FE644901(iLocal_36[1]);
								}
								unk_0x5C679902079A7E80(&uLocal_48);
								unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
								unk_0x373635EFD76DFAB3(0, 2000);
								unk_0xCC2EDAABFCD738A4(uLocal_48, 1);
								unk_0x1BBD0A5729AB1226(uLocal_48);
								unk_0x8A1AC8EBC73850C8(iLocal_36[1], uLocal_48);
								unk_0x8D5B447F21217223(&uLocal_48);
								func_187(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = unk_0xDFB7BFA6482FEE1E();
												iLocal_69 = unk_0xDFB7BFA6482FEE1E();
												iLocal_65 = unk_0xDFB7BFA6482FEE1E();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (unk_0xDFB7BFA6482FEE1E() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = unk_0xDFB7BFA6482FEE1E();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xDFB7BFA6482FEE1E() > iLocal_69 + 7000)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 10f)
								{
									if (!unk_0xCCCF5C35DC145D71(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (unk_0xDFB7BFA6482FEE1E() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (unk_0xDFB7BFA6482FEE1E() > iLocal_65 + 30000)
							{
								unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_33))
					{
						if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
						{
							if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 1))
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()) || unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_33, 1) < 5f && unk_0x195733224245A760(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()) || unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_36[0]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
						{
							if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0x0EF09B31D2D655FC(unk_0x7D2B9E6A64637269()))
								{
									if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_36[1]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
						{
							if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0x0EF09B31D2D655FC(unk_0x7D2B9E6A64637269()))
								{
									if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_184()
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (unk_0x419E13582192CFEA(iLocal_35[iLocal_64]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_64]))
				{
					if (func_189(unk_0x7D2B9E6A64637269()) != joaat("weapon_unarmed") && !func_188(0))
					{
						if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_64], unk_0x7D2B9E6A64637269()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (unk_0x419E13582192CFEA(iLocal_36[0]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
			{
				if (func_189(unk_0x7D2B9E6A64637269()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_36[1]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
			{
				if (func_189(unk_0x7D2B9E6A64637269()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_185(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(uParam0, sParam1, sParam2, func_186(iParam3), 0);
}

int func_186(int iParam0)
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

void func_187(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	var uVar0;
	
	unk_0xBDC364B886846D11(iParam0, &uVar0, 1);
	return uVar0;
}

void func_190()
{
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Local_93 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_36[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
		{
			Local_95[0 /*3*/] = { unk_0xD6E677FAD7521410(iLocal_36[0], 1) };
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_36[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
		{
			Local_95[1 /*3*/] = { unk_0xD6E677FAD7521410(iLocal_36[1], 1) };
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_36[0]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (unk_0x419E13582192CFEA(iLocal_36[1]))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1))
					{
						if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
						{
							if (((Local_93.x < Local_95[0 /*3*/] && !unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 90f)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
								iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
							}
						}
						else if (Local_93.x < Local_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
						}
					}
					else if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 15f)
					{
						if ((Local_93.x > Local_95[1 /*3*/] && !unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 90f)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
						}
					}
					else if (Local_93.x > Local_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
						iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
					}
				}
				else if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1))
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 15f)
					{
						if ((Local_93.x < Local_95[0 /*3*/] && !unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 90f)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
						}
					}
					else if (Local_93.x < Local_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
						iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 15f)
				{
					if ((Local_93.x > Local_95[1 /*3*/] && !unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 90f)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
						iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
					}
				}
				else if (Local_93.x > Local_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
					iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_93.x > 942f)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
					{
						if (Local_93.x > Local_95[1 /*3*/])
						{
							if (!unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
								iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
					else if (Local_93.x > 942f)
					{
						if (!unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
						}
					}
				}
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_93.x < 860f)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
					{
						if (Local_93.x < Local_95[0 /*3*/])
						{
							if (!unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
								iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
					else if (Local_93.x < 860f)
					{
						if (!unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xDFB7BFA6482FEE1E();
							iLocal_83[1] = unk_0xDFB7BFA6482FEE1E();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
				{
					if ((func_189(unk_0x7D2B9E6A64637269()) == joaat("weapon_unarmed") || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) || func_188(0))
					{
						if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_93.x > Local_95[0 /*3*/] || unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 15f)
				{
					if ((func_189(unk_0x7D2B9E6A64637269()) == joaat("weapon_unarmed") || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) || func_188(0))
					{
						if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_93.x < Local_95[1 /*3*/] || unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0x16B4C536089C3CAD(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) != 0)
		{
			if (unk_0x419E13582192CFEA(iLocal_36[0]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_36[0]))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_36[1]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_36[1]))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_182())
						{
							if (unk_0x419E13582192CFEA(iLocal_35[iLocal_78]))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_78]))
								{
									if (unk_0xB0F01A503C825A11(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_189(unk_0x7D2B9E6A64637269()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_189(unk_0x7D2B9E6A64637269()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x0BABEFEA577FCFA4(Local_93, Local_96, 1) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()))
				{
					iLocal_31 = 2;
				}
				if (func_177(iLocal_36[0], unk_0x7D2B9E6A64637269(), 1) < 20f)
				{
					if (unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (Local_93.f_2 < 36f || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()))
					{
						iLocal_31 = 2;
					}
					if (func_177(iLocal_36[1], unk_0x7D2B9E6A64637269(), 1) < 20f)
					{
						if (unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[0], 1) < 20f)
			{
				if (Local_93.x > Local_95[0 /*3*/] && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[0], unk_0x7D2B9E6A64637269()) || unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_177(unk_0x7D2B9E6A64637269(), iLocal_36[1], 1) < 20f)
			{
				if (Local_93.x < Local_95[1 /*3*/] && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (unk_0xCA70422943A4EC8D(iLocal_36[1], unk_0x7D2B9E6A64637269()) || unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_191()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (unk_0x419E13582192CFEA(iLocal_35[iLocal_55]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x419E13582192CFEA(iLocal_35[iLocal_54]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_54]))
			{
				func_196(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_195(1);
						if (iLocal_311 == 1)
						{
							func_114();
						}
					}
					if (unk_0x077B4D0A7F830A6F(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x16B4C536089C3CAD(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
						}
					}
					if ((((((((func_192(iLocal_35[iLocal_54], iLocal_35[0]) || func_192(iLocal_35[iLocal_54], iLocal_35[1])) || func_192(iLocal_35[iLocal_54], iLocal_35[2])) || func_192(iLocal_35[iLocal_54], iLocal_35[3])) || func_192(iLocal_35[iLocal_54], iLocal_35[4])) || func_192(iLocal_35[iLocal_54], iLocal_35[5])) || func_192(iLocal_35[iLocal_54], iLocal_35[6])) || func_192(iLocal_35[iLocal_54], iLocal_36[0])) || func_192(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_189(unk_0x7D2B9E6A64637269()) == joaat("weapon_unarmed") || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || func_188(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_195(0);
								}
							}
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_195(1);
										if (iLocal_311 == 1)
										{
											func_114();
										}
									}
									else
									{
										func_195(3);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = unk_0xDFB7BFA6482FEE1E();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (unk_0xDFB7BFA6482FEE1E() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_195(2);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_195(3);
									if (iLocal_311 == 1)
									{
										func_193();
									}
								}
							}
						}
						if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = unk_0xDFB7BFA6482FEE1E();
								iLocal_308 = 1;
							}
							else if (unk_0xDFB7BFA6482FEE1E() > iLocal_74 + 3000)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 20f && unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_195(3);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (unk_0x419E13582192CFEA(iLocal_33))
						{
							if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
							{
								if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 1))
								{
									if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_195(3);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_33, 1) < 5f && unk_0x195733224245A760(unk_0x7D2B9E6A64637269()))
								{
									if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_195(3);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (unk_0x419E13582192CFEA(iLocal_35[0]))
										{
											if (!unk_0xECEC7528A52B4EE8(iLocal_35[0]))
											{
												if (unk_0x591190E69BE43117(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_195(3);
														if (iLocal_311 == 1)
														{
															func_193();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_35[6]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_35[6]))
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (unk_0xCA70422943A4EC8D(iLocal_35[6], unk_0x7D2B9E6A64637269()))
										{
											if (Local_93.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_195(3);
													if (iLocal_311 == 1)
													{
														func_193();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_195(1);
												if (iLocal_311 == 1)
												{
													func_114();
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
						if (iLocal_276 == 0)
						{
							iLocal_59 = unk_0xDFB7BFA6482FEE1E();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (unk_0xDFB7BFA6482FEE1E() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()))
									{
										if (iLocal_29 != 4)
										{
											func_195(4);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_54], unk_0x7D2B9E6A64637269()) || unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_195(4);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_192(int iParam0, int iParam1)
{
	if (((func_177(iParam0, iParam1, 1) < 20f && unk_0x836F48E8C4A773BF(iParam0, iParam1, 90f)) && !unk_0xECEC7528A52B4EE8(iParam0)) && unk_0xECEC7528A52B4EE8(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	Global_19991 = 0;
	func_194();
}

void func_194()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_195(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_196(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_177(unk_0x7D2B9E6A64637269(), iParam0, 1) < 20f && unk_0xCA70422943A4EC8D(iParam0, unk_0x7D2B9E6A64637269()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					unk_0x8ADA462BC5F42FD8(iParam0, unk_0x7D2B9E6A64637269(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				unk_0x8ADA462BC5F42FD8(iParam0, unk_0x7D2B9E6A64637269(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				unk_0xBE91B077ADADE97F(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0x7B44CC985AF750BD(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[0], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[0], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0x7B44CC985AF750BD(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[1], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[1], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0x7B44CC985AF750BD(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[2], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[2], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0x7B44CC985AF750BD(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[3], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[3], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0x7B44CC985AF750BD(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[4], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[4], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0x7B44CC985AF750BD(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[5], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[5], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0x7B44CC985AF750BD(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_35[6], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[6], -1680762137) != 1)
						{
							unk_0x1ADBF00B482AFCC6(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (unk_0x419E13582192CFEA(iLocal_35[4]))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_35[4]))
					{
						if (unk_0x419E13582192CFEA(iLocal_35[5]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_35[5]))
							{
								if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_93.f_1 > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_138(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_138(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0x8ADA462BC5F42FD8(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0x8ADA462BC5F42FD8(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_182())
											{
												if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
												{
													if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = unk_0xDFB7BFA6482FEE1E();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (unk_0xDFB7BFA6482FEE1E() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_138(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_138(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0x8ADA462BC5F42FD8(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0x8ADA462BC5F42FD8(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_182())
												{
													if (!unk_0x123480158F10FA67() || !unk_0x70729B766882A4DF())
													{
														if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_182())
								{
									if (iLocal_310 == 0)
									{
										if (unk_0x7B44CC985AF750BD(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0x880C7B361C9651EE(iLocal_35[4]);
											unk_0x880C7B361C9651EE(iLocal_35[5]);
											unk_0x5F2B3E2AFA7B81C5(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = unk_0xDFB7BFA6482FEE1E();
							iLocal_320 = 1;
						}
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (unk_0x7B44CC985AF750BD(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x5F2B3E2AFA7B81C5(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (unk_0x591190E69BE43117(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[6], 1) < 15f && Local_93.f_2 < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (unk_0x7B44CC985AF750BD(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (unk_0xCA70422943A4EC8D(iParam0, unk_0x7D2B9E6A64637269()) || unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iParam0))
									{
										if (!unk_0xB4E725A8915BDF60(iParam0))
										{
											unk_0x16D66F11FE644901(iParam0);
										}
										if (unk_0xB4E725A8915BDF60(iParam0))
										{
											unk_0xCA089CD1A17D76DF(iParam0);
										}
										unk_0x5C679902079A7E80(&uLocal_48);
										unk_0xF0ED372419FE0E70(0, unk_0x7D2B9E6A64637269(), -1, 2f, 1f, 1073741824, 0);
										unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
										unk_0x1BBD0A5729AB1226(uLocal_48);
										unk_0x8A1AC8EBC73850C8(iParam0, uLocal_48);
										unk_0x8D5B447F21217223(&uLocal_48);
										unk_0xBE91B077ADADE97F(iParam0, 1);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), 45f))
									{
										unk_0xB0C1A43193C25F7A(iParam0, unk_0x7D2B9E6A64637269(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0x7B44CC985AF750BD(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[0], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[0], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0x7B44CC985AF750BD(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[1], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[1], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0x7B44CC985AF750BD(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[2], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[2], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0x7B44CC985AF750BD(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[3], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[3], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0x7B44CC985AF750BD(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[4], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[4], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0x7B44CC985AF750BD(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[5], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[5], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0x7B44CC985AF750BD(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x4E8DA737B686529A(iLocal_35[6], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[6], -1680762137) != 1)
										{
											unk_0x1ADBF00B482AFCC6(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0xBE91B077ADADE97F(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(unk_0x7D2B9E6A64637269(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (unk_0xCA70422943A4EC8D(iParam0, unk_0x7D2B9E6A64637269()) || unk_0x05FF4D131FAE1483(unk_0x1146A9AE09CE2B14(), iParam0))
								{
									if (!unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0x16D66F11FE644901(iParam0);
									}
									if (unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0xCA089CD1A17D76DF(iParam0);
									}
									unk_0x5C679902079A7E80(&uLocal_48);
									unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
									unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 1072, 3);
									unk_0x1BBD0A5729AB1226(uLocal_48);
									unk_0x8A1AC8EBC73850C8(iParam0, uLocal_48);
									unk_0x8D5B447F21217223(&uLocal_48);
									unk_0xBE91B077ADADE97F(iParam0, 1);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), 45f))
								{
									unk_0xB0C1A43193C25F7A(iParam0, unk_0x7D2B9E6A64637269(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x7B44CC985AF750BD(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[0], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x7B44CC985AF750BD(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[1], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x7B44CC985AF750BD(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[2], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x7B44CC985AF750BD(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[3], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x7B44CC985AF750BD(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[4], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x7B44CC985AF750BD(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[5], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x7B44CC985AF750BD(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[6], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				unk_0x78B2DF314748056B(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(iParam0, unk_0x7D2B9E6A64637269(), 1) < 15f)
						{
							if (func_177(iParam0, unk_0x7D2B9E6A64637269(), 1) > 3f)
							{
								if (unk_0x4E8DA737B686529A(iParam0, 242628503) != 0 || unk_0x4E8DA737B686529A(iParam0, 242628503) != 1)
								{
									if (!unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0x16D66F11FE644901(iParam0);
									}
									if (unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0xCA089CD1A17D76DF(iParam0);
									}
									unk_0x5C679902079A7E80(&uLocal_48);
									unk_0xF0ED372419FE0E70(0, unk_0x7D2B9E6A64637269(), -1, 1f, 1f, 1073741824, 0);
									unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
									unk_0x1BBD0A5729AB1226(uLocal_48);
									unk_0x8A1AC8EBC73850C8(iParam0, uLocal_48);
									unk_0x8D5B447F21217223(&uLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x7B44CC985AF750BD(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[0], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x7B44CC985AF750BD(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[1], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x7B44CC985AF750BD(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[2], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x7B44CC985AF750BD(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[3], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x7B44CC985AF750BD(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[4], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x7B44CC985AF750BD(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[5], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x7B44CC985AF750BD(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x4E8DA737B686529A(iLocal_35[6], 1647992574) != 1 && unk_0x4E8DA737B686529A(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x1ADBF00B482AFCC6(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0xBE91B077ADADE97F(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0xDFB7BFA6482FEE1E();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0xDFB7BFA6482FEE1E() > iLocal_63 + 9000)
					{
						unk_0x20D884FB6567BAD5(5);
						unk_0x5E84945E26CAEF1F(1f);
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0x78B2DF314748056B(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(iParam0, unk_0x7D2B9E6A64637269(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									unk_0xBE91B077ADADE97F(iParam0, 1);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0x16D66F11FE644901(iParam0);
									}
									if (unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0xCA089CD1A17D76DF(iParam0);
									}
									unk_0x99EBE9AD8C344773(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_35[0]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_35[0]))
							{
								if (unk_0x419E13582192CFEA(iLocal_33))
								{
									if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
									{
										if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_33, 1) && unk_0x591190E69BE43117(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!unk_0xB4E725A8915BDF60(iLocal_35[0]))
											{
												unk_0x16D66F11FE644901(iLocal_35[0]);
											}
											if (unk_0xB4E725A8915BDF60(iLocal_35[0]))
											{
												unk_0xCA089CD1A17D76DF(iLocal_35[0]);
											}
											unk_0x5C679902079A7E80(&uLocal_48);
											unk_0x45B1B4E55BF15523(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
											unk_0x4261814A9A26E86F(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x1BBD0A5729AB1226(uLocal_48);
											unk_0x8A1AC8EBC73850C8(iLocal_35[0], uLocal_48);
											unk_0x8D5B447F21217223(&uLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (unk_0x419E13582192CFEA(iLocal_35[0]))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_35[0]))
							{
								if (unk_0x591190E69BE43117(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_138(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_185(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_63 + 3000)
						{
							if (unk_0x419E13582192CFEA(iLocal_35[5]))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_35[5]))
								{
									unk_0x4261814A9A26E86F(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = unk_0xDFB7BFA6482FEE1E();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_87 + 5000)
						{
							if (unk_0x419E13582192CFEA(iLocal_35[5]))
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_35[5]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_35[5]);
									unk_0x9DA29013F33252A6(iLocal_35[5], unk_0x7D2B9E6A64637269(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x419E13582192CFEA(iParam0))
							{
								if (!unk_0xECEC7528A52B4EE8(iParam0))
								{
									unk_0xBE91B077ADADE97F(iParam0, 1);
									if (unk_0xC49311A2A500FF09(iParam0, 0))
									{
										if (func_177(iParam0, unk_0x7D2B9E6A64637269(), 1) > 200f)
										{
											if (!unk_0xB4E725A8915BDF60(iParam0))
											{
												unk_0x16D66F11FE644901(iParam0);
											}
											if (unk_0xB4E725A8915BDF60(iParam0))
											{
												unk_0xCA089CD1A17D76DF(iParam0);
											}
											unk_0x1DC2BF231DE6A016(iParam0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_177(iParam0, unk_0x7D2B9E6A64637269(), 1) > 100f)
									{
										if (!unk_0xB4E725A8915BDF60(iParam0))
										{
											unk_0x16D66F11FE644901(iParam0);
										}
										if (unk_0xB4E725A8915BDF60(iParam0))
										{
											unk_0xCA089CD1A17D76DF(iParam0);
										}
										unk_0x1DC2BF231DE6A016(iParam0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x419E13582192CFEA(iParam0))
							{
								if (!unk_0xECEC7528A52B4EE8(iParam0))
								{
									if (!unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0x16D66F11FE644901(iParam0);
									}
									if (unk_0xB4E725A8915BDF60(iParam0))
									{
										unk_0xCA089CD1A17D76DF(iParam0);
									}
									unk_0xBE91B077ADADE97F(iParam0, 1);
									unk_0x1DC2BF231DE6A016(iParam0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
									unk_0x504B26425DFF773C(iParam0, 1);
									unk_0x0F3BD19FF11738D3(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0xDFB7BFA6482FEE1E();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0xDFB7BFA6482FEE1E() > iLocal_63 + 6000)
					{
						unk_0x20D884FB6567BAD5(5);
						unk_0x5E84945E26CAEF1F(1f);
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0x78B2DF314748056B(5, iLocal_264, 1862763509);
				unk_0xBE91B077ADADE97F(iParam0, 1);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (unk_0x419E13582192CFEA(iLocal_35[iLocal_56]))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_35[iLocal_56]))
						{
							if (func_177(unk_0x7D2B9E6A64637269(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_197(iLocal_35[iLocal_56], 6))
								{
									if (unk_0xCA70422943A4EC8D(iLocal_35[iLocal_56], unk_0x7D2B9E6A64637269()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
											{
												unk_0x16D66F11FE644901(iLocal_35[iLocal_56]);
											}
											if (unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
											{
												unk_0xCA089CD1A17D76DF(iLocal_35[iLocal_56]);
											}
											unk_0xB111AAA7C1B0D64F(iLocal_35[iLocal_56], -1, unk_0x7D2B9E6A64637269(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = unk_0xDFB7BFA6482FEE1E();
										}
									}
									else if (unk_0xDFB7BFA6482FEE1E() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
									{
										unk_0x16D66F11FE644901(iLocal_35[iLocal_56]);
									}
									if (unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
									{
										unk_0xCA089CD1A17D76DF(iLocal_35[iLocal_56]);
									}
									unk_0x1DC2BF231DE6A016(iLocal_35[iLocal_56], unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
								{
									unk_0x16D66F11FE644901(iLocal_35[iLocal_56]);
								}
								if (unk_0xB4E725A8915BDF60(iLocal_35[iLocal_56]))
								{
									unk_0xCA089CD1A17D76DF(iLocal_35[iLocal_56]);
								}
								unk_0x1DC2BF231DE6A016(iLocal_35[iLocal_56], unk_0x7D2B9E6A64637269(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_197(int iParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), iParam1))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198()
{
	iLocal_37 = func_26(0);
	iLocal_38 = func_26(1);
	iLocal_39 = func_26(2);
	if (func_34(iLocal_37, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_37))
		{
			if (!func_33(iLocal_37))
			{
				if (!func_200())
				{
					if (func_199(iLocal_37))
					{
						if (func_32(iLocal_37, 0))
						{
							unk_0x4985CD0720AFD468(iLocal_37, 1, 1);
							unk_0xBE91B077ADADE97F(iLocal_37, 1);
							unk_0xCA089CD1A17D76DF(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iLocal_350 = 1;
					}
					else if (unk_0xC49311A2A500FF09(iLocal_37, 0))
					{
						if (!unk_0xF41EB7643E61A928(iLocal_37, unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_200())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_199(iLocal_37) && unk_0x9984C023D4E57C2E(iLocal_37, 1)) && iLocal_350 == 0)
					{
						Local_94 = { unk_0xD6E677FAD7521410(iLocal_37, 1) };
						unk_0xABAA7F8FD10DCDF2(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0xA0F8D741F5D8E7E4(iLocal_37, unk_0x75B58B38E45C6F9A(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (unk_0x419E13582192CFEA(unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								unk_0x7B5530AB21BFC748(iLocal_37, unk_0x75B58B38E45C6F9A(iLocal_37, 0), unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0xA0F8D741F5D8E7E4(iLocal_37, unk_0x75B58B38E45C6F9A(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_25(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_39, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_39))
		{
			if (!func_33(iLocal_39))
			{
				if (!func_200())
				{
					if (func_199(iLocal_39))
					{
						if (func_32(iLocal_39, 0))
						{
							unk_0x4985CD0720AFD468(iLocal_39, 1, 1);
							unk_0xBE91B077ADADE97F(iLocal_39, 1);
							unk_0xCA089CD1A17D76DF(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iLocal_352 = 1;
					}
					else if (unk_0xC49311A2A500FF09(iLocal_39, 0))
					{
						if (!unk_0xF41EB7643E61A928(iLocal_39, unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_200())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_199(iLocal_39) && unk_0x9984C023D4E57C2E(iLocal_39, 1)) && iLocal_352 == 0)
					{
						Local_94 = { unk_0xD6E677FAD7521410(iLocal_39, 1) };
						unk_0xABAA7F8FD10DCDF2(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0xA0F8D741F5D8E7E4(iLocal_39, unk_0x75B58B38E45C6F9A(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (unk_0x419E13582192CFEA(unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								unk_0x7B5530AB21BFC748(iLocal_39, unk_0x75B58B38E45C6F9A(iLocal_39, 0), unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0xA0F8D741F5D8E7E4(iLocal_39, unk_0x75B58B38E45C6F9A(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_25(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_38, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_38))
		{
			if (!func_33(iLocal_38))
			{
				if (!func_200())
				{
					if (func_199(iLocal_38))
					{
						if (func_32(iLocal_38, 0))
						{
							unk_0x4985CD0720AFD468(iLocal_38, 1, 1);
							unk_0xBE91B077ADADE97F(iLocal_38, 1);
							unk_0xCA089CD1A17D76DF(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iLocal_351 = 1;
					}
					else if (unk_0xC49311A2A500FF09(iLocal_38, 0))
					{
						if (!unk_0xF41EB7643E61A928(iLocal_38, unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_200())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_199(iLocal_38) && unk_0x9984C023D4E57C2E(iLocal_38, 1)) && iLocal_351 == 0)
					{
						Local_94 = { unk_0xD6E677FAD7521410(iLocal_38, 1) };
						unk_0xABAA7F8FD10DCDF2(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0xA0F8D741F5D8E7E4(iLocal_38, unk_0x75B58B38E45C6F9A(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (unk_0x419E13582192CFEA(unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								unk_0x7B5530AB21BFC748(iLocal_38, unk_0x75B58B38E45C6F9A(iLocal_38, 0), unk_0x7A0F33AA19956CEB(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (unk_0xA1CB00B61C47B900(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0xA0F8D741F5D8E7E4(iLocal_38, unk_0x75B58B38E45C6F9A(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_25(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_199(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			if (unk_0xF41EB7643E61A928(iParam0, unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0) && unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0) == iParam0)
			{
				if (unk_0x419E13582192CFEA(iLocal_33))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_33, 0))
					{
						if ((unk_0xF41EB7643E61A928(iParam0, iLocal_33, 0) && unk_0x27FC1B0077581B37(iLocal_33, -1, 0) == iParam0) && !unk_0x591190E69BE43117(iLocal_33, Local_92, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_200()
{
	return Global_22529;
}

void func_201()
{
	if (unk_0x419E13582192CFEA(iLocal_33))
	{
		if (!unk_0xBFCE58B2B3249999(iLocal_33, 0))
		{
			func_204(3);
			return;
		}
		else
		{
			if (func_203(&iLocal_33))
			{
				func_204(2);
				return;
			}
			if (unk_0x419E13582192CFEA(iLocal_32))
			{
				if (!unk_0xBFCE58B2B3249999(iLocal_32, 0))
				{
					func_204(1);
					return;
				}
				if (unk_0xBFCE58B2B3249999(iLocal_32, 0))
				{
					if (!unk_0x83E7671FB1B0EA3F(iLocal_33))
					{
						if ((unk_0x14048B1C509BDE11(iLocal_32) || func_202(iLocal_32)) || func_203(&iLocal_32))
						{
							func_204(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x419E13582192CFEA(iLocal_32))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_32, 0))
			{
				if (func_177(iLocal_32, unk_0x7D2B9E6A64637269(), 1) > 600f)
				{
					func_204(5);
					return;
				}
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_40))
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_40))
		{
			func_204(6);
			return;
		}
	}
}

int func_202(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (!unk_0x2AB8EC6521549BAD(iParam0))
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

int func_203(var uParam0)
{
	if (unk_0xBFCE58B2B3249999(*uParam0, 0))
	{
		if (((unk_0x0D628BB90DA6214A(*uParam0, 0, 7000) || unk_0x0D628BB90DA6214A(*uParam0, 3, 30000)) || unk_0x0D628BB90DA6214A(*uParam0, 2, 30000)) || unk_0x0D628BB90DA6214A(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_205(int iParam0, int iParam1)
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

void func_206()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_207(657);
		}
	}
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_62099 = 0;
	if (!Global_62323[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_74193)
	{
		if (Global_74194[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_74194[iVar1 /*9*/].f_1 = 1;
			Global_74194[iVar1 /*9*/].f_2 = 0f;
			if (Global_74194[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_208(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_209()
{
	unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x16C6E55F8C91ED24(joaat("packer"), 0);
	unk_0x16C6E55F8C91ED24(joaat("phantom"), 0);
	unk_0x08918C6897982748("FHPRB_START");
	unk_0x08918C6897982748("FHPRB_TRUCK");
	unk_0x08918C6897982748("FHPRB_COPS");
	unk_0x08918C6897982748("FHPRB_LOST");
	unk_0x08918C6897982748("FHPRB_STOP");
	unk_0xE6B53A6E51AAA49F(uLocal_42, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_43, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_44, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_45, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_46, 0);
	unk_0xE6B53A6E51AAA49F(uLocal_47, 0);
	if (unk_0xE0FA63A00F898A62("SCRAP_SECURITY"))
	{
		if (unk_0x314B0D9D224ABE3A("SCRAP_SECURITY"))
		{
			unk_0xC1085DC8A8C1737B("SCRAP_SECURITY", 0);
		}
	}
	unk_0x20D884FB6567BAD5(5);
	if (unk_0x4336DC3297C47528(iLocal_90))
	{
		unk_0x23AD9DB85DF0B50D(iLocal_90);
	}
	if (unk_0x4336DC3297C47528(iLocal_91))
	{
		unk_0x23AD9DB85DF0B50D(iLocal_91);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_210()
{
	int iVar0;
	
	if (unk_0x79CDCC8ABB331B8C("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_112293.f_9083 || func_208(0))
	{
		if (!func_211())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_211()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

