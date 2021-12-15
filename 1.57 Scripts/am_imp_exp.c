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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	struct<14> Local_77 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 16;
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
	int iLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
	bool bLocal_282 = 0;
	bool bLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
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
	int iLocal_309 = 0;
	var uLocal_310 = 0;
	int iLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317[4] = { 0, 0, 0, 0 };
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_323 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_324 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	struct<4> Local_331[32];
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	char* sLocal_335 = NULL;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	struct<21> Local_340 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_95 = 1;
	bLocal_97 = true;
	bLocal_99 = true;
	iLocal_104 = -1;
	bLocal_282 = true;
	bLocal_283 = true;
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_311 = -1;
	iLocal_314 = -1;
	if (!func_544(ScriptParam_340))
	{
		func_540();
	}
	iLocal_322[0] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-891.3f, 807.9f, 188.1f));
	iLocal_322[1] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-276.5f, -206.3f, 38.4f));
	iLocal_322[2] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1485.5f, -644.5f, 30.1f));
	iLocal_322[3] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1746.3f, -939.5f, 7.7f));
	iLocal_322[4] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-2106.4f, -345.3f, 13f));
	iLocal_322[5] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1520f, 74.4f, 61.3f));
	iLocal_322[6] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1333f, -286f, 40.3f));
	iLocal_322[7] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1178.1f, 54.8f, 53.9f));
	iLocal_322[8] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1298.7f, -359.4f, 36.7f));
	iLocal_322[9] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-355.2f, 147.5f, 75.8f));
	iLocal_322[10] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-982.1f, -1064.7f, 2.2f));
	iLocal_322[11] = unk_0x01214190405F438E(unk_0x8706A6A3C7549518(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_539();
		bLocal_80 = false;
		bLocal_82 = false;
		bLocal_85 = false;
		bLocal_88 = false;
		bLocal_90 = false;
		Global_2544210.f_1750 = 0;
		if (func_529() || func_528())
		{
			func_540();
		}
		if (func_522())
		{
			if (!func_521())
			{
				if (!func_520())
				{
					if (func_518())
					{
						if (!iLocal_78)
						{
							func_514();
							func_513(&Local_323, 5);
							func_512();
							bLocal_99 = true;
							bLocal_100 = true;
							if (unk_0x234B68AC2E35ED5A(iLocal_332, 1))
							{
								unk_0xC664C0067EEAB8D1(&iLocal_332, 1);
							}
							iLocal_78 = 1;
							iLocal_314 = -999;
						}
					}
				}
			}
			else if (!func_520())
			{
				if (!bLocal_100)
				{
					if (!func_511(&uLocal_277))
					{
						func_510(&uLocal_277, 0, 0);
					}
					else if (func_509(&uLocal_277, 100, 0))
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_332, 1))
						{
							if (func_518())
							{
								func_499(&Local_323, 5, Global_2097152[func_508() /*5557*/].f_675.f_37);
								bLocal_99 = false;
								bLocal_100 = true;
								iLocal_78 = 1;
								iLocal_314 = -999;
							}
						}
					}
				}
			}
			func_402();
			func_398();
			func_383();
			func_376();
			func_267();
			func_176();
		}
		func_172();
		func_142();
		func_76();
		func_73();
		if (!iLocal_102)
		{
			if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0xD2FBB949CDCF79AB(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_102 = 1;
			}
		}
		if (unk_0x443E2CA72E118E64())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_97)
	{
	}
	else
	{
		if (iLocal_98 >= Local_331)
		{
			iLocal_98 = 0;
			unk_0xC664C0067EEAB8D1(&iLocal_332, 10);
			unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 7);
			unk_0xC664C0067EEAB8D1(&iLocal_332, 11);
			unk_0xC664C0067EEAB8D1(&iLocal_332, 23);
			if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
			{
				unk_0x191DDA30577F440A(&(Local_324.f_23), 1);
				unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 3);
			}
		}
		iVar0 = iLocal_98;
		if (Local_331[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_324[iVar1] == -1)
				{
					if (!Local_324.f_6[iVar1])
					{
						if (Local_324[iVar1] == Local_331[iVar0 /*4*/])
						{
							if (Local_324[iVar1] == Local_324.f_28)
							{
								func_72();
							}
							Local_324.f_33 = 0;
							Local_324.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 7))
			{
				if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
				{
					if (Local_331[iVar0 /*4*/].f_3 > 0 || func_71(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0)), 6))
					{
						if (Local_331[iVar0 /*4*/].f_3 < 3)
						{
							unk_0x191DDA30577F440A(&(Local_324.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_332, 11))
			{
				if (unk_0x234B68AC2E35ED5A(Local_331[iVar0 /*4*/].f_2, 2))
				{
					unk_0x191DDA30577F440A(&iLocal_332, 11);
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_332, 21))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_332, 3))
				{
					if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
					{
						if (unk_0x234B68AC2E35ED5A(Local_331[iVar0 /*4*/].f_2, 3))
						{
							unk_0x191DDA30577F440A(&iLocal_332, 21);
						}
					}
				}
			}
		}
		iLocal_98++;
		if (iLocal_98 >= Local_331)
		{
			unk_0x191DDA30577F440A(&iLocal_332, 10);
			if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 7) || unk_0x234B68AC2E35ED5A(iLocal_332, 23))
			{
				unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 1);
			}
			if (unk_0x234B68AC2E35ED5A(iLocal_332, 11))
			{
				unk_0x191DDA30577F440A(&(Local_324.f_23), 3);
			}
			if (unk_0x234B68AC2E35ED5A(iLocal_332, 21))
			{
				unk_0x191DDA30577F440A(&(Local_324.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_324.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_324.f_20)
	{
		case 0:
			func_66();
			Local_324.f_32++;
			Local_324.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				uLocal_310 = unk_0x551F46B3C7DFB654();
				Local_324.f_20 = 2;
			}
			else if (Local_324.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_324.f_17 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_310) > Global_262145.f_11647)
			{
				Local_324.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (Local_324.f_26)
	{
		case 0:
			if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
			{
				if (bLocal_282)
				{
					if (bLocal_283)
					{
						if (Global_2544210.f_1723)
						{
							unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 2);
							unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 6);
							unk_0xC664C0067EEAB8D1(&iLocal_332, 21);
							unk_0xCE293C7793B5EC3F(0);
							Local_324.f_34 = 0;
							unk_0x191DDA30577F440A(&(Local_324.f_23), 0);
							Global_2544210.f_1723 = 0;
						}
					}
					else if (Local_324.f_27 == -15)
					{
						unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 2);
						unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 6);
						unk_0xC664C0067EEAB8D1(&iLocal_332, 21);
						unk_0xCE293C7793B5EC3F(0);
						Local_324.f_34 = 0;
						iVar2 = func_63();
						func_49(&(Local_324.f_27), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_58(iVar2), func_56(iVar2));
						func_48(&(Local_324.f_27), 0, unk_0xB36B8558948EA7A8(0, 60), unk_0xB36B8558948EA7A8(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_511(&uLocal_299))
						{
							func_510(&uLocal_299, 0, 0);
						}
						else if (func_509(&uLocal_299, 10000, 0))
						{
							func_46(&uLocal_299);
							if (func_42(Local_324.f_27))
							{
								unk_0x191DDA30577F440A(&(Local_324.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_324.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (unk_0xB02FAE47395D3028(Local_324.f_24))
					{
						unk_0x120FD3F0779D3C4C(Local_324.f_24);
					}
					Local_324.f_24 = -1;
					iLocal_285 = unk_0xB36B8558948EA7A8(0, 10);
					iVar3 = func_33();
					if (iVar3 != 0)
					{
						Local_324.f_67 = iVar3;
						unk_0xCE293C7793B5EC3F(1);
						Local_324.f_34 = 1;
					}
				}
			}
			else if (unk_0xA8911798335DCDA2(1))
			{
				if (func_32(Local_324.f_67))
				{
					if (!unk_0xB7D6400C89373777(Local_324.f_22))
					{
						if (func_21(&Var0, &uVar1))
						{
							if (func_18(&(Local_324.f_22), Local_324.f_67, Var0, uVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
								{
									if (unk_0x5B38E054B758C032(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset"))
									{
										iVar4 = unk_0x05351AF95891EE5C(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset");
									}
									unk_0x191DDA30577F440A(&iVar4, 5);
									unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset", iVar4);
								}
								if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
								{
									if (unk_0x5B38E054B758C032(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset"))
									{
										iVar5 = unk_0x05351AF95891EE5C(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset");
									}
									unk_0x191DDA30577F440A(&iVar5, 10);
									unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_324.f_22), "MPBitset", iVar5);
								}
								if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0x6C9577C090944B92(unk_0x854C404AEB476240(Local_324.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0x191DDA30577F440A(&(Local_324.f_23), 0);
								unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 2);
								unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 4);
								unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 3);
								unk_0xC664C0067EEAB8D1(&iLocal_332, 11);
								unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 6);
								unk_0x191DDA30577F440A(&iLocal_332, 23);
								unk_0x824F744352C8BC82(Local_324.f_67);
								Local_324.f_26 = 1;
								func_46(&(Local_324.f_30));
								func_510(&(Local_324.f_30), 0, 0);
								unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_324.f_22), 7);
								unk_0x0201EE6F15BD3F23(unk_0x854C404AEB476240(Local_324.f_22), 1);
								unk_0x16C6E55F8C91ED24(Local_324.f_67, 1);
								unk_0x5607401B1908D7C3(Local_324.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 2))
			{
				if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
				{
					if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_324.f_22), 0))
					{
						Local_77.f_2 = 157802995;
						func_16(Local_77, func_17(1));
						unk_0x191DDA30577F440A(&(Local_324.f_23), 2);
					}
				}
			}
			if (unk_0x234B68AC2E35ED5A(iLocal_332, 3) || (unk_0x234B68AC2E35ED5A(iLocal_332, 10) && unk_0x234B68AC2E35ED5A(Local_324.f_23, 1)))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_332, 3))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 2))
					{
						if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
						{
							if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_324.f_22), 0))
							{
								Local_77.f_2 = 157802995;
								func_16(Local_77, func_17(1));
								unk_0x191DDA30577F440A(&(Local_324.f_23), 2);
							}
						}
					}
				}
				Local_324.f_26 = 2;
			}
			if (func_15(unk_0x854C404AEB476240(Local_324.f_22)))
			{
				Local_324.f_26 = 2;
				Local_77.f_2 = 973024217;
				func_16(Local_77, func_17(1));
			}
			if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 4))
			{
				if (func_509(&(Local_324.f_30), 360000, 0))
				{
					unk_0x191DDA30577F440A(&(Local_324.f_23), 4);
					func_46(&(Local_324.f_30));
					func_510(&(Local_324.f_30), 0, 0);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(iLocal_332, 10))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 3))
				{
					if (func_511(&(Local_324.f_30)))
					{
						if (func_509(&(Local_324.f_30), 120000, 0))
						{
							Local_324.f_26 = 2;
							Local_77.f_2 = 973024217;
							func_16(Local_77, func_17(1));
						}
					}
					else
					{
						func_510(&(Local_324.f_30), 0, 0);
					}
				}
				else if (func_511(&(Local_324.f_30)))
				{
					func_46(&(Local_324.f_30));
				}
			}
			if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 6))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_332, 3))
				{
					if (Local_324.f_26 == 1)
					{
						Local_324.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_324.f_26 == 1)
				{
					Local_324.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
			{
				if (func_10(Local_324.f_22))
				{
					func_9(&(Local_324.f_22));
					Local_324.f_26 = 3;
				}
			}
			else
			{
				Local_324.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0x234B68AC2E35ED5A(iLocal_332, 10))
			{
				if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 1))
				{
					Local_324.f_26 = 0;
					unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 0);
					Local_324.f_27 = -15;
					if (Local_324.f_67 != 0)
					{
						unk_0x16C6E55F8C91ED24(Local_324.f_67, 0);
					}
					Local_324.f_67 = 0;
					if (bLocal_283)
					{
						func_7(func_8(unk_0xC3F1DAC7D0C05D0F("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0x443E2CA72E118E64())
	{
		switch (Local_324.f_69)
		{
			case 0:
				if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 8))
				{
					if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
					{
						if (!func_6())
						{
							if (unk_0xC83252B7627E1711(unk_0x854C404AEB476240(Local_324.f_22)))
							{
								if (!unk_0x8954E9D0A9F6F8CF(unk_0x854C404AEB476240(Local_324.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 9))
									{
										unk_0x191DDA30577F440A(&(Local_324.f_23), 9);
									}
								}
							}
						}
						else if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 9))
						{
							unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 9))
	{
		if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
		{
			if (func_4(Local_324.f_22))
			{
				if (unk_0xB364346471C3B028(Local_324.f_22))
				{
					unk_0x3CBE9F07524C242D(unk_0x854C404AEB476240(Local_324.f_22), true, 0);
					unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_324.f_22), 1);
					unk_0xA2C015B68CE01357(unk_0x854C404AEB476240(Local_324.f_22), false);
					unk_0xFC4706297CB9D7D2(unk_0x854C404AEB476240(Local_324.f_22), 1, 1);
					unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 9);
				}
				else
				{
					unk_0x1AA7FA4BBD799B88(Local_324.f_22);
				}
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 9);
			}
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Local_324.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_5(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
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

int func_6()
{
	int iVar0;
	
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			iVar0 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_324.f_22), -1, 0);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 1595854775;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
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
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
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
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
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
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
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
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0x1146A9AE09CE2B14(), 7))
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

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
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

int func_15(int iParam0)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0x8BA4AD00568AB5FC("bombdec1", 3))
		{
			if (unk_0x5B38E054B758C032(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0x8BA4AD00568AB5FC("bombdec", 3))
		{
			if (unk_0x5B38E054B758C032(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0x8BA4AD00568AB5FC("bombowner", 3))
		{
			if (unk_0x5B38E054B758C032(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

int func_17(int iParam0)
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
			if (func_14(iVar2, 0, 0))
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

int func_18(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_19(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_20(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
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

int func_20(int iParam0, struct<3> Param1, int iParam2)
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

int func_21(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_285)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var1 = { -807.2521f, -116.098f, 38f };
			Var2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var1 = { -797.881f, -1310.998f, 7.0005f };
			Var2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var1 = { -189.4078f, -1945.248f, 28.6205f };
			Var2 = { -191.5592f, -1950.239f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var1 = { -2961.456f, 466.0484f, 16.1725f };
			Var2 = { -2963.887f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var1 = { -411.9892f, 1220.346f, 326.6421f };
			Var2 = { -416.0102f, 1219.771f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var1 = { -1633.903f, -879.869f, 9.1264f };
			Var2 = { -1634.006f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var1 = { -331.5926f, -944.408f, 32.0788f };
			Var2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var1 = { 1094.243f, 255.0715f, 82.8556f };
			Var2 = { 1093.686f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var1 = { -1400.19f, 63.9074f, 54.3222f };
			Var2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var1 = { -1226.429f, -1648.143f, 4.1986f };
			Var2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!func_31(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_285 < 10)
		{
			if (Local_324.f_24 == -1)
			{
				Local_324.f_24 = unk_0x06B169AFEE356AD4(Var0, Var1);
			}
			else if (unk_0xB02FAE47395D3028(Local_324.f_24))
			{
				if (unk_0x61C86D1F86F629E4(Local_324.f_24))
				{
					if (!unk_0xED1E23A658F29D8D(Local_324.f_24))
					{
						if (!func_22(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							unk_0x120FD3F0779D3C4C(Local_324.f_24);
							Local_324.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_285++;
							unk_0x120FD3F0779D3C4C(Local_324.f_24);
							Local_324.f_24 = -1;
						}
					}
					else
					{
						iLocal_285++;
						unk_0x120FD3F0779D3C4C(Local_324.f_24);
						Local_324.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_285 = 0;
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_27(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_14(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_23(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
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
								if (unk_0x0BABEFEA577FCFA4(func_27(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0BABEFEA577FCFA4(func_27(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_23(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312763;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1590908[iVar0 /*874*/].f_844) && !func_29(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2453009.f_19;
}

bool func_31(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2335 != 0)
	{
		iVar1 = Global_262145.f_2335;
		if (unk_0x62A5B93F8270CC83(iVar1))
		{
			if (unk_0xB4DD528ED76ED647(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_324);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(Global_1391771, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391771.f_1;
			break;
		
		case 1:
			return Global_1391771.f_2;
			break;
		
		case 2:
			return Global_1391771.f_3;
			break;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_218;
			}
			else
			{
				return unk_0x0481156B0E5C0340(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_219;
			}
			else
			{
				return unk_0xB99E3F8D18D17364(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_220;
			}
			else
			{
				return unk_0x5E85B9A5E6984D7D(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391779;
			break;
		
		case 1:
			return Global_1391780;
			break;
		
		case 2:
			return Global_1391781;
			break;
	}
	return 0;
}

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)
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

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
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
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_56(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_57(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 15;
}

int func_59(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_60(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_61(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_62(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, unk_0x1947D86A2BB06F8D());
	func_54(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_53(&uVar0, unk_0xCA86FAB7FADC8353());
	func_51(&uVar0, unk_0x9E6858A319A1F6F2());
	func_52(&uVar0, unk_0xA91C851005050418());
	func_50(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_324.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_324.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0x191DDA30577F440A(&(Local_324.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_513(&Local_324, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_324.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_324.f_33 = 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_324.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_324);
	if (iVar0 != Local_324.f_28)
	{
		Local_324.f_28 = iVar0;
		Local_324.f_29 = unk_0x551F46B3C7DFB654();
	}
}

int func_70()
{
	if (Local_324.f_20 > 0)
	{
		if (Local_324[0] != Local_324[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

void func_72()
{
	Local_324.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2544210.f_4450 == 0 || unk_0x234B68AC2E35ED5A(Global_2544210.f_4451, 0))
		{
			if (!func_511(&uLocal_305) || func_509(&uLocal_305, 2000, 0))
			{
				iVar0 = func_35(&Local_323);
				if (iVar0 > -1)
				{
					Global_2544210.f_4450 = func_34(iVar0);
					func_46(&uLocal_303);
					func_510(&uLocal_303, 0, 0);
					if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4451, 0))
					{
						unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4451), 0);
					}
				}
				else
				{
					func_46(&uLocal_305);
					func_510(&uLocal_305, 0, 0);
				}
			}
		}
		else if (Global_2544210.f_4450 != 0)
		{
			if (func_509(&uLocal_303, 20000, 0))
			{
				if (!func_74(&Local_323, Global_2544210.f_4450))
				{
					Global_2544210.f_4450 = 0;
				}
				func_46(&uLocal_303);
				func_510(&uLocal_303, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_76()
{
	int iVar0;
	
	if (((((bLocal_84 || bLocal_85) || bLocal_86) || bLocal_88) || bLocal_87) || bLocal_89)
	{
		if (((((Global_2544210.f_28.f_41 || func_139(unk_0x1146A9AE09CE2B14(), 1, 0)) || func_138(unk_0x1146A9AE09CE2B14())) || !func_136()) || func_124()) || func_118())
		{
			bLocal_84 = false;
			bLocal_86 = false;
			bLocal_85 = false;
			bLocal_88 = false;
			bLocal_87 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_89)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (func_98())
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_84)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (func_98())
				{
					if (unk_0x234B68AC2E35ED5A(iLocal_309, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_86)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (unk_0xE0A6F16F546C8274())
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (!func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_87)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (unk_0xE0A6F16F546C8274())
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (!func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_88)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_85)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!unk_0x123480158F10FA67())
			{
				if (func_98() || func_77())
				{
					if (unk_0x234B68AC2E35ED5A(iLocal_309, 3))
					{
						if (!iLocal_91)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
								{
									if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
									{
										iLocal_320 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
									}
								}
							}
						}
						else if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
							{
								iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								if (iVar0 != iLocal_320)
								{
									iLocal_91 = 0;
									func_46(&uLocal_307);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_511(&uLocal_307))
		{
			func_510(&uLocal_307, 0, 0);
		}
		else if (func_509(&uLocal_307, 20000, 0))
		{
			func_117();
			iLocal_91 = 1;
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_332, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_82(int iParam0)
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

int func_83()
{
	return Global_31345;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1312603 == 11)
		{
			if (unk_0xCF7E9D7EE2349689(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
		}
		else
		{
			if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)
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

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_88();
		unk_0xEDA1E269A9237146();
	}
}

void func_88()
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

int func_89()
{
	if (!func_90())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_88();
	return unk_0xB4BAEA083E2652CB();
}

int func_90()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_94()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

bool func_95(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_96(sParam0);
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_333, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_333, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0x234B68AC2E35ED5A(iLocal_333, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0x234B68AC2E35ED5A(iLocal_333, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0x191DDA30577F440A(&iLocal_333, 0);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(unk_0x1146A9AE09CE2B14(), 1, 1) || unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269())) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_139(unk_0x1146A9AE09CE2B14(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || unk_0x123480158F10FA67()) || func_106() > 0) || !func_136()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(unk_0x1146A9AE09CE2B14(), 8))
	{
		return 1;
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 10))
	{
		return 1;
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 12))
	{
		return 1;
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 14))
	{
		return 1;
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 7))
	{
		return 1;
	}
	iVar0 = Global_1390515[func_81(-1)];
	if (unk_0x234B68AC2E35ED5A(iVar0, 6))
	{
		unk_0x191DDA30577F440A(&(Global_2544210.f_1794), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 2);
}

bool func_102()
{
	return Global_1312890;
}

bool func_103()
{
	return Global_1312892;
}

int func_104()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 28) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_1794, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_1795, 3);
}

int func_106()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_193;
}

int func_107()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_1372345.f_40 == 3;
}

bool func_110()
{
	return Global_2441237.f_3165.f_578;
}

bool func_111()
{
	return Global_99422.f_364 > 0;
}

bool func_112()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

var func_113()
{
	return Global_2394809;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_116(char* sParam0)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (!func_90())
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
	return func_95(sParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_123(17))
	{
		return 1;
	}
	if (func_123(0))
	{
		return 1;
	}
	if (func_122(unk_0x1146A9AE09CE2B14(), 1))
	{
		return 1;
	}
	if (func_119(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_120(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
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

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(2482, -1, 0);
	return unk_0x234B68AC2E35ED5A(iVar0, iParam0);
}

int func_124()
{
	if (func_128())
	{
		return 1;
	}
	if (func_125(unk_0x1146A9AE09CE2B14(), 1))
	{
		return 1;
	}
	if (func_122(unk_0x1146A9AE09CE2B14(), 1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_126(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_126(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
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
	return func_127(iParam0, 0);
	return 0;
}

int func_127(int iParam0, int iParam1)
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

int func_128()
{
	if (!func_135(unk_0x1146A9AE09CE2B14()))
	{
		if (func_131(unk_0x1146A9AE09CE2B14()) || func_130(unk_0x1146A9AE09CE2B14()) != -1)
		{
			return 1;
		}
		if (func_129(unk_0x1146A9AE09CE2B14()) && Global_1574671.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_131(int iParam0)
{
	if (func_134(iParam0))
	{
		return 1;
	}
	if (func_132(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_133(iParam0, 9);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_135(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_136()
{
	if (func_137() == 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	return Global_1312485.f_18;
}

bool func_138(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

void func_142()
{
	if (bLocal_82)
	{
		if (!unk_0x575B7C28D81C0B4D(Global_1669295))
		{
			Global_1669295 = unk_0x27E44C95E1D1461C(Global_1669296);
			unk_0x252BE56DB93DF816(Global_1669295, 293);
			unk_0xDD205B87CDFD0C1B(Global_1669295, 1f);
			unk_0x72D460C6FC1A44BE(Global_1669295, 0);
			unk_0xDD944E3FD2028A48(Global_1669295, "IMPEX_BLIP_FM");
			if (func_171())
			{
				unk_0x89936830A493350F(Global_1669295, 1);
			}
		}
	}
	else if (unk_0x575B7C28D81C0B4D(Global_1669295))
	{
		unk_0x1AD5BCFEC31BB8D9(&Global_1669295);
		if (bLocal_281)
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
				{
					if (!func_166(unk_0xD56332194D622ECE(unk_0x1146A9AE09CE2B14()), 1215605247, &uLocal_312, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_165("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_83)
	{
		if (iLocal_104 == -1)
		{
			iLocal_104 = func_149(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 4, -1);
			if (iLocal_104 != -1)
			{
				func_143(iLocal_104, 1);
			}
		}
	}
	else if (iLocal_104 != -1)
	{
		func_143(iLocal_104, 0);
		iLocal_104 = -1;
	}
}

void func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_144(39, bParam1);
			break;
		
		case 40:
			func_144(40, bParam1);
			break;
		
		case 41:
			func_144(41, bParam1);
			break;
		
		case 42:
			func_144(42, bParam1);
			break;
		
		case 43:
			func_144(43, bParam1);
			break;
		
		case 44:
			func_144(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_148(iParam0, 8, 0);
			func_147(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_145(iParam0, 8, 0);
		func_147(iParam0);
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0xC664C0067EEAB8D1(&uVar0, iParam1);
			func_146(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

void func_147(int iParam0)
{
	Global_99422.f_190[iParam0] = 1;
	Global_99422.f_189 = 1;
}

void func_148(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			uVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0x191DDA30577F440A(&uVar0, iParam1);
			func_146(func_82(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_668[iParam0]), iParam1);
	}
}

int func_149(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 55)
	{
		if (iParam1 == 6 || iParam1 == func_164(iVar0))
		{
			iVar4 = iVar0;
			if (func_163(iVar4))
			{
				fVar1 = unk_0x0BABEFEA577FCFA4(Param0, func_150(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_160(Global_101476);
			break;
		
		case 46:
			if (Global_1590745 != func_121())
			{
				if (func_159(Global_1590745))
				{
					return func_152(2, 2);
				}
				else if (func_151(Global_1590745))
				{
					return func_152(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1703091;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_151(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_152(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590745 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_153(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 4))
			{
				if (func_153(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 5))
			{
				if (func_153(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_158(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_158(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_156(iParam0) };
	}
	else
	{
		Var2 = { func_155(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_154(Var3, -Var0.f_3.f_2) };
	Var3 = { func_154(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0x26C2ACB261895E70(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_154(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_155(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_156(int iParam0)
{
	return func_157(iParam0);
}

struct<6> func_157(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161()
{
	return func_162(unk_0x1146A9AE09CE2B14());
}

var func_162(int iParam0)
{
	return unk_0xC844146213F10F48(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

bool func_163(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[39]);
			break;
		
		case 40:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[40]);
			break;
		
		case 41:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[41]);
			break;
		
		case 42:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[42]);
			break;
		
		case 43:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[43]);
			break;
		
		case 44:
			bVar0 = unk_0x575B7C28D81C0B4D(Global_99422.f_247[44]);
			break;
	}
	return bVar0;
}

int func_164(int iParam0)
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

void func_165(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_166(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_511(uParam2))
	{
		func_510(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_167(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_511(uParam3))
	{
		func_510(uParam3, 0, 0);
	}
	func_170(&Var3, iParam1);
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (func_168(iParam0, iParam1, 30))
			{
				if (unk_0xA2CCAAC7F5CA3F49(iParam0))
				{
					uVar0 = unk_0xFAA5505029C4B5A6(iParam0);
					if (!unk_0xECEC7528A52B4EE8(uVar0))
					{
						if (unk_0x72D30262CF8C8603(iVar0))
						{
							uVar2 = unk_0xCB567ED25393C1DF(iVar0);
							if (bParam2)
							{
								if (unk_0xCE141012DABC4B08(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x3CD4A5674D4CD9DF(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x3CD4A5674D4CD9DF(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0xCE141012DABC4B08(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x3CD4A5674D4CD9DF(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x3CD4A5674D4CD9DF(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0xC49311A2A500FF09(iVar0, 0))
						{
							uVar1 = unk_0x75B58B38E45C6F9A(iVar0, 0);
							if (unk_0x419E13582192CFEA(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x8ABA11AB6561D507(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xCC336B9652449E02(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x8ABA11AB6561D507(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xCC336B9652449E02(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x8ABA11AB6561D507(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xCC336B9652449E02(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x8ABA11AB6561D507(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xCC336B9652449E02(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x55F5BD4ABD80B211(iParam0) || unk_0x50997FC21D62251F(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x8ABA11AB6561D507(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xCC336B9652449E02(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x8ABA11AB6561D507(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xCC336B9652449E02(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xCC336B9652449E02(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), func_169(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(1200, -1, 0);
	if (!unk_0x234B68AC2E35ED5A(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0x234B68AC2E35ED5A(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_172()
{
	if (bLocal_80)
	{
		if (!iLocal_81)
		{
			func_174(1215605247, 1, 0);
			func_173(1);
			iLocal_81 = 1;
		}
	}
	else if (iLocal_81)
	{
		func_174(1215605247, 0, 0);
		func_173(0);
		iLocal_81 = 0;
	}
}

void func_173(bool bParam0)
{
	if (Global_2544210.f_4585 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2544210.f_4585 = bParam0;
	}
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x02BFF15CAA701972())
	{
	}
	else if (bParam1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_4564, func_175(iParam0)))
		{
			if (bParam2)
			{
				unk_0x191DDA30577F440A(&(Global_2544210.f_4564.f_1), func_175(iParam0));
			}
			unk_0x191DDA30577F440A(&(Global_2544210.f_4564), func_175(iParam0));
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4564, func_175(iParam0)))
	{
		if (bParam2)
		{
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4564.f_1), func_175(iParam0));
		}
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4564), func_175(iParam0));
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_176()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
	{
		if (iLocal_315 >= 32)
		{
			unk_0xC664C0067EEAB8D1(&iLocal_332, 5);
			iLocal_315 = 0;
			iLocal_287 = -1;
		}
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_315)))
		{
			iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_315));
			iVar1 = unk_0xD56332194D622ECE(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_332, 3))
				{
					if (unk_0x234B68AC2E35ED5A(Local_331[iLocal_315 /*4*/].f_2, 1))
					{
						unk_0x191DDA30577F440A(&iLocal_332, 3);
					}
				}
				if (iLocal_287 == -1)
				{
					if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
					{
						if (func_4(Local_324.f_22))
						{
							if (!unk_0xECEC7528A52B4EE8(iVar1))
							{
								if (unk_0x2C10A11A684CFE96(iVar1, unk_0x854C404AEB476240(Local_324.f_22)))
								{
									if (unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_324.f_22), -1, 0) == iVar1)
									{
										iLocal_287 = iLocal_315;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_315++;
		if (iLocal_315 >= 32)
		{
			unk_0x191DDA30577F440A(&iLocal_332, 5);
		}
		func_265();
		if (!unk_0x234B68AC2E35ED5A(iLocal_332, 3))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 3))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 1))
				{
					if (func_263())
					{
						unk_0x191DDA30577F440A(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_284 != Local_324.f_34)
	{
		if (Local_324.f_34 == 0)
		{
			if (!unk_0x159BC3DDA80D71AC(Local_324.f_22))
			{
				iLocal_284 = Local_324.f_34;
				unk_0xCE293C7793B5EC3F(iLocal_284);
			}
		}
		else
		{
			iLocal_284 = Local_324.f_34;
			unk_0xCE293C7793B5EC3F(iLocal_284);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
	{
		switch (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3)
		{
			case 0:
				if (!Global_2544210.f_1722)
				{
				}
				if (unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 3))
				{
					unk_0xC664C0067EEAB8D1(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 3);
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_332, 21))
				{
					unk_0xC664C0067EEAB8D1(&iLocal_332, 21);
				}
				if (unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 1))
				{
					unk_0xC664C0067EEAB8D1(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 1);
				}
				if (((!func_139(unk_0x1146A9AE09CE2B14(), 1, 0) && !func_112()) && !func_262(unk_0x1146A9AE09CE2B14(), 1, 0)) || func_71(unk_0x1146A9AE09CE2B14(), 6))
				{
					if (unk_0x234B68AC2E35ED5A(iLocal_332, 3))
					{
						unk_0xC664C0067EEAB8D1(&iLocal_332, 3);
					}
					if (unk_0x234B68AC2E35ED5A(iLocal_332, 19))
					{
						unk_0xC664C0067EEAB8D1(&iLocal_332, 19);
					}
					if (unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 3))
					{
						unk_0xC664C0067EEAB8D1(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 3);
					}
					if (iLocal_286 != -1)
					{
						iLocal_286 = -1;
					}
					if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_332, 16))
						{
							unk_0x191DDA30577F440A(&iLocal_332, 16);
							func_261(6, 1);
							unk_0x191DDA30577F440A(&iLocal_332, 7);
							Global_2544210.f_1721 = 1;
							Global_2544210.f_1722 = 0;
						}
						if (unk_0xA8911798335DCDA2(1))
						{
							if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
							{
								if (func_255())
								{
									if (Local_324.f_67 != 0)
									{
										unk_0x16C6E55F8C91ED24(Local_324.f_67, 1);
									}
									Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 1;
									Global_1669305 = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(Local_324.f_22));
									if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_324.f_22))))
									{
										unk_0x252BE56DB93DF816(Global_1669305, 348);
										func_165("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0x252BE56DB93DF816(Global_1669305, 225);
										func_165("IMPEX_HIPR_INT", -1);
									}
									unk_0xFA3E6ADC3E5D386E(Global_1669305, 2);
									unk_0xDD944E3FD2028A48(Global_1669305, "IMPEX_HIPR_BLP");
									func_261(6, 1);
									unk_0x191DDA30577F440A(&iLocal_332, 7);
									Global_2544210.f_1721 = 1;
									if (func_118())
									{
										unk_0xF3A3BAE36B132003(Global_1669305, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2544210.f_1722)
				{
					Global_2544210.f_1722 = 1;
				}
				break;
			
			case 1:
				if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
				{
					if (unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_324.f_22), 0))
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22)))
							{
								func_254(1);
								if (func_253())
								{
									func_248(2, 0, 1);
								}
								if (unk_0x575B7C28D81C0B4D(Global_1669305))
								{
									unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
								}
							}
							else
							{
								func_254(0);
								if (!func_247(unk_0x854C404AEB476240(Local_324.f_22), 0))
								{
									if (!unk_0x575B7C28D81C0B4D(Global_1669305))
									{
										if (!iLocal_103)
										{
											func_246();
										}
									}
								}
							}
						}
						if (!unk_0x234B68AC2E35ED5A(iLocal_332, 19))
						{
							if (func_255())
							{
								if (func_244())
								{
									if (!unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22)))
									{
										if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_324.f_22), 1)) < 2500f)
										{
											if (func_118())
											{
												func_165("FM_IMP_JAC", -1);
											}
											unk_0x191DDA30577F440A(&iLocal_332, 19);
										}
									}
								}
							}
						}
						if (func_243())
						{
						}
						func_241();
					}
					else
					{
						if (unk_0x575B7C28D81C0B4D(Global_1669305))
						{
							unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
						}
						func_261(6, 0);
						unk_0xC664C0067EEAB8D1(&iLocal_332, 7);
						Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_324.f_67 != 0)
					{
						unk_0x16C6E55F8C91ED24(Local_324.f_67, 0);
					}
					if (unk_0x575B7C28D81C0B4D(Global_1669305))
					{
						unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
					}
					func_261(6, 0);
					unk_0xC664C0067EEAB8D1(&iLocal_332, 7);
					Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 3;
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_332, 3))
				{
					func_261(6, 0);
					unk_0xC664C0067EEAB8D1(&iLocal_332, 7);
					if (unk_0x575B7C28D81C0B4D(Global_1669305))
					{
						unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
					}
					Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 3;
				}
				if (Local_324.f_26 == 3)
				{
					if (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 == 1)
					{
						if (Local_324.f_67 != 0)
						{
							unk_0x16C6E55F8C91ED24(Local_324.f_67, 0);
						}
						if (unk_0x575B7C28D81C0B4D(Global_1669305))
						{
							unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
						}
						if (unk_0x234B68AC2E35ED5A(iLocal_332, 16))
						{
							unk_0xC664C0067EEAB8D1(&iLocal_332, 16);
						}
						func_261(6, 0);
						unk_0xC664C0067EEAB8D1(&iLocal_332, 7);
						Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_254(0);
				break;
		}
		if (func_238())
		{
			if (func_237("IMPEX_HIPR_INT"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			if (unk_0x575B7C28D81C0B4D(Global_1669305))
			{
				unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
			}
			if (Local_324.f_67 != 0)
			{
				unk_0x16C6E55F8C91ED24(Local_324.f_67, 0);
			}
			Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 3;
			func_261(6, 0);
			unk_0xC664C0067EEAB8D1(&iLocal_332, 7);
			if (unk_0x234B68AC2E35ED5A(iLocal_332, 16))
			{
				unk_0xC664C0067EEAB8D1(&iLocal_332, 16);
			}
			func_254(0);
		}
		func_191();
		if (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 > 0 && Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 < 3)
		{
			func_188();
		}
	}
	else
	{
		if (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 != 0)
		{
			if (Local_324.f_67 != 0)
			{
				unk_0x16C6E55F8C91ED24(Local_324.f_67, 0);
			}
			Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(iLocal_332, 21))
		{
			unk_0xC664C0067EEAB8D1(&iLocal_332, 21);
		}
		if (Global_2544210.f_1721)
		{
			if (!func_511(&uLocal_297))
			{
				func_510(&uLocal_297, 0, 0);
			}
			else if (func_509(&uLocal_297, 5000, 0))
			{
				func_46(&uLocal_297);
				Global_2544210.f_1721 = 0;
			}
		}
		if (unk_0x234B68AC2E35ED5A(iLocal_332, 16))
		{
			if (Local_324.f_34 == 0)
			{
				unk_0xC664C0067EEAB8D1(&iLocal_332, 16);
			}
		}
	}
	func_177();
}

void func_177()
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!func_244())
			{
				if (!func_511(&uLocal_338))
				{
					func_510(&uLocal_338, 0, 0);
				}
				if (func_509(&uLocal_338, 1000, 0))
				{
					if (unk_0xB364346471C3B028(Local_324.f_22))
					{
						Var1 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_324.f_22), 1) };
						if (func_185(Var1, func_186(39), func_150(39, 0)))
						{
							if (func_180(39, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(40), func_150(40, 0)))
						{
							if (func_180(40, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(41), func_150(41, 0)))
						{
							if (func_180(41, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(42), func_150(42, 0)))
						{
							if (func_180(42, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(43), func_150(43, 0)))
						{
							if (func_180(43, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(Var1, func_186(44), func_150(44, 0)))
						{
							if (func_180(44, 0, &Var0, &uVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					func_46(&uLocal_338);
				}
				if (bVar4)
				{
					if (unk_0xB364346471C3B028(Local_324.f_22))
					{
						if (func_178(unk_0x854C404AEB476240(Local_324.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0xDB8D6815E13996A9(unk_0x854C404AEB476240(Local_324.f_22), Var0, 0, 0, 1);
							unk_0xCD37A28258D70638(unk_0x854C404AEB476240(Local_324.f_22), uVar2);
							unk_0xFC4706297CB9D7D2(unk_0x854C404AEB476240(Local_324.f_22), 1, 1);
							unk_0xA2C015B68CE01357(unk_0x854C404AEB476240(Local_324.f_22), false);
							unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_324.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_178(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_179(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
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

int func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_181(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_185(struct<3> Param0, var uParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1078E3E6E7C301E8(Param0))
	{
		iVar0 = unk_0xFA82BD1142427E0F(Param2, uParam1);
		if (!unk_0xE75EE67F14EAAE37(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x6307EBFB74CAFA98(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_187(Global_101476);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_287 > -1)
	{
		if (iLocal_287 != unk_0xDD0E57E73E5C4BF6())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_287)))
			{
				iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_287));
				bVar1 = true;
				if (unk_0xEBB066F8EADD0C1F(iVar0, unk_0x1146A9AE09CE2B14()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22), 0))
				{
					if (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_189(unk_0x854C404AEB476240(Local_324.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB4D5E37C91862216(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x8CA9CB0F4A5018B4(iParam0);
	if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (func_190(iParam0) == 0)
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
				{
					if (unk_0x6626CA37A88F93B9(iParam0))
					{
						unk_0x1E0A6E4148A87B0E(iParam0, "MP_Arrow");
						unk_0xA37E4224284E452A(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0xDA729DC5065773A2(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	if (unk_0xE267416B80E7921F(iVar0) == 0 && unk_0x48E10529AEAE00F9(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0x3B89994312445DE5(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(iLocal_332, 5))
	{
		if (iLocal_286 != iLocal_287)
		{
			if (iLocal_287 > -1)
			{
				if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_287)))
				{
					iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_287));
					if (iVar0 != unk_0x1146A9AE09CE2B14())
					{
						if (!func_262(unk_0x1146A9AE09CE2B14(), 1, 0))
						{
							func_192("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (unk_0x443E2CA72E118E64())
					{
						if (!unk_0x234B68AC2E35ED5A(Local_324.f_23, 8))
						{
							unk_0x191DDA30577F440A(&(Local_324.f_23), 8);
						}
					}
				}
			}
			iLocal_286 = iLocal_287;
		}
	}
}

int func_192(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x7C3E030BC3ED6671(iParam1);
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var2))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		if ((iVar1 != -1 && unk_0xE45310E861787FC2()) && iVar1 < 4)
		{
			if (Global_4456448.f_80260[iVar1] != -1)
			{
				unk_0xB2A9BDF905DC5A51(func_235(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xB2A9BDF905DC5A51(func_201(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0xB2A9BDF905DC5A51(func_201(iParam1, -2, 1, 0, 0));
		}
		unk_0xA91D83F2CC1345A6(func_199(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
		else
		{
			Global_2518253 = { func_198(iParam1) };
			if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
			{
				iVar3 = 0;
				if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2518183.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_197(&Var2) };
					}
					iVar0 = unk_0x05F3E4A6F62A5ACD(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, &Var2, Global_1314059, Global_1314060, Global_1314061);
				}
				else
				{
					iVar0 = unk_0x3C42479A3436E320(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, Global_1314059, Global_1314060, Global_1314061);
				}
			}
			else
			{
				iVar0 = unk_0x02B23FCAC192C764(0, 1);
			}
		}
		func_193(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_193(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_196() || !unk_0xE45310E861787FC2()) || !func_24(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_194(iParam2);
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

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_195(iVar0);
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

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_196()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

struct<16> func_197(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_233(iParam0) && !bParam4)
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
	if (((func_233(unk_0x1146A9AE09CE2B14()) || (func_232() && func_231())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_230();
		if (unk_0x419E13582192CFEA(iVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_14(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_235(iParam1, iParam0, 0);
							}
							else
							{
								return func_214(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_214(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_235(iParam1, iParam0, 0);
				}
				else
				{
					return func_202(0, -1, 0);
				}
			}
			else
			{
				return func_202(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_235(iParam1, iParam0, 0);
		}
		else
		{
			return func_214(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_214(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_202(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_213() || (func_212() && func_210())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_209(iParam2, iVar0);
		}
		else
		{
			return func_209(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_208(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_85535, 1))
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

int func_205(int iParam0, bool bParam1)
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

int func_206(int iParam0, int iParam1, int iParam2)
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
			if (!func_208(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1, int iParam2)
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

int func_209(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
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

bool func_210()
{
	if (func_211())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_211()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_212()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_213()
{
	if (func_211() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_223())
			{
				iVar3 = func_219(iParam0);
				if (!iVar3 == -1)
				{
					return func_217(iVar3);
				}
			}
			if ((func_216(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_208(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_219(iParam0);
	if (!iVar4 == -1)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
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

var func_218(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_221(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_121();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_121();
}

int func_222(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_121())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	if (((((func_229() || func_228()) || func_30()) || func_227()) || func_226()) || func_224())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return func_225(Global_4456448.f_85535);
}

int func_225(int iParam0)
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

var func_226()
{
	return Global_2453009.f_24;
}

var func_227()
{
	return Global_2453009.f_21;
}

var func_228()
{
	return Global_2453009.f_18;
}

var func_229()
{
	return Global_2453009.f_17;
}

var func_230()
{
	return Global_2359302.f_2;
}

bool func_231()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_232()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

int func_233(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_234())
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

bool func_234()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_235(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == -1)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
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
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_236(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_208(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_215(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_236(int iParam0)
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

bool func_237(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

int func_238()
{
	if ((Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 > 0 && Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 < 3) || (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 == 0 && func_71(unk_0x1146A9AE09CE2B14(), 6)))
	{
		if (func_139(unk_0x1146A9AE09CE2B14(), 1, 0) || func_112())
		{
			if ((!func_239(unk_0x1146A9AE09CE2B14(), 5) && !func_239(unk_0x1146A9AE09CE2B14(), 32)) && !func_239(unk_0x1146A9AE09CE2B14(), 148))
			{
				return 1;
			}
			else if (!iLocal_103)
			{
				if (unk_0x575B7C28D81C0B4D(Global_1669305))
				{
					unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
				}
				iLocal_103 = 1;
			}
		}
		else if (iLocal_103)
		{
			func_246();
			iLocal_103 = 0;
		}
		if (Local_324.f_26 == 3)
		{
			if (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 == 0 && func_71(unk_0x1146A9AE09CE2B14(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_240(iParam0))
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

int func_240(int iParam0)
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

void func_241()
{
	if (unk_0x575B7C28D81C0B4D(Global_1669305))
	{
		if (func_118() || func_242())
		{
			unk_0xF3A3BAE36B132003(Global_1669305, 0);
		}
		else
		{
			unk_0xF3A3BAE36B132003(Global_1669305, 4);
		}
		if (!iLocal_92)
		{
			if (func_262(unk_0x1146A9AE09CE2B14(), 1, 0))
			{
				unk_0x72D460C6FC1A44BE(Global_1669305, 1);
				iLocal_92 = 1;
			}
		}
		else if (!func_262(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			unk_0x72D460C6FC1A44BE(Global_1669305, 0);
			iLocal_92 = 0;
		}
	}
}

var func_242()
{
	return Global_2416162.f_1864;
}

int func_243()
{
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (unk_0x0D628BB90DA6214A(unk_0x854C404AEB476240(Local_324.f_22), 0, 7000) || unk_0x0D628BB90DA6214A(unk_0x854C404AEB476240(Local_324.f_22), 1, 40000))
			{
				if (unk_0xE5AEA27726895658(Local_324.f_22))
				{
					if (unk_0xB364346471C3B028(Local_324.f_22))
					{
						unk_0xEBF08082D648C482(unk_0x854C404AEB476240(Local_324.f_22), -2000f);
						unk_0xAFB5FBF26893A713(unk_0x854C404AEB476240(Local_324.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0x443E2CA72E118E64())
				{
					if (func_10(Local_324.f_22))
					{
						unk_0xEBF08082D648C482(unk_0x854C404AEB476240(Local_324.f_22), -2000f);
						unk_0xAFB5FBF26893A713(unk_0x854C404AEB476240(Local_324.f_22), 0f);
						return 1;
					}
				}
				else
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

int func_244()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_287 == -1 && unk_0x234B68AC2E35ED5A(iLocal_332, 5))
	{
		return 0;
	}
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22)))
				{
					if (func_245(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_287 >= 0)
			{
				if (iLocal_287 != unk_0xDD0E57E73E5C4BF6())
				{
					if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_287)))
					{
						iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_287));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0xD56332194D622ECE(iVar0);
							if (unk_0x2C10A11A684CFE96(iVar1, unk_0x854C404AEB476240(Local_324.f_22)))
							{
								if (func_245(iVar1, unk_0x854C404AEB476240(Local_324.f_22), -1))
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
	return 0;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (unk_0x2C10A11A684CFE96(iParam0, iParam1))
		{
			if (unk_0x27FC1B0077581B37(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_246()
{
	Global_1669305 = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(Local_324.f_22));
	if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(unk_0x854C404AEB476240(Local_324.f_22))))
	{
		unk_0x252BE56DB93DF816(Global_1669305, 348);
	}
	else
	{
		unk_0x252BE56DB93DF816(Global_1669305, 225);
	}
	unk_0xFA3E6ADC3E5D386E(Global_1669305, 2);
	unk_0xDD944E3FD2028A48(Global_1669305, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		unk_0xF3A3BAE36B132003(Global_1669305, 0);
	}
}

int func_247(int iParam0, int iParam1)
{
	if (func_166(iParam0, 1215605247, &uLocal_312, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0, int iParam1, bool bParam2)
{
	if (func_253())
	{
		if (iParam1 == 1)
		{
			if (Global_2544210.f_4461 == -1)
			{
				Global_2544210.f_4461 = Global_262145.f_26682;
			}
			func_252(&(Global_2544210.f_4459), 0, 0);
			if (bParam2)
			{
				if (Global_2544210.f_4464 == -1)
				{
					Global_2544210.f_4464 = Global_262145.f_26683;
				}
				func_252(&(Global_2544210.f_4462), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
				func_251(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_8 = 0;
			func_251(1);
		}
		if ((!unk_0xE45310E861787FC2() && !func_250()) && !func_249(unk_0x1146A9AE09CE2B14()))
		{
			Global_968396 = 0;
		}
		unk_0xE6363D7A51B58AD2(0, -1, -1, iParam0);
	}
}

int func_249(int iParam0)
{
	if (func_139(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_250()
{
	return Global_2453009.f_840;
}

void func_251(bool bParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_253())
		{
			if (func_14(unk_0x1146A9AE09CE2B14(), 1, 0))
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
			if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
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

void func_252(var uParam0, bool bParam1, bool bParam2)
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

bool func_253()
{
	return Global_1312436;
}

void func_254(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 28))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4658), 28);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 28))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4658), 28);
	}
}

int func_255()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_256(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_256(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xE8FFE38E2BA32BD6())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_260(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_110())
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
	if (func_259())
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	if (func_528())
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
	if (func_257(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	int iVar0;
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
		iVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(iVar0))
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

bool func_258()
{
	return Global_2453009.f_691;
}

bool func_259()
{
	return Global_2453009.f_844;
}

int func_260(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

void func_261(int iParam0, bool bParam1)
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

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
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

int func_263()
{
	struct<3> Var0;
	
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!func_244())
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_324.f_22), 1) };
				if (func_264(Var0, 1215605247, 18))
				{
					if (func_247(unk_0x854C404AEB476240(Local_324.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_264(struct<3> Param0, int iParam1, int iParam2)
{
	if (unk_0x0BABEFEA577FCFA4(Param0, func_169(iParam1), 1) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_265()
{
	if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
	{
		if (func_4(Local_324.f_22))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22), 0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 2))
					{
						unk_0x191DDA30577F440A(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 2);
					}
				}
				else if (func_266(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22), 1) < 180f)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 2))
					{
						unk_0x191DDA30577F440A(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 2);
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2, 2))
				{
					unk_0xC664C0067EEAB8D1(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_266(int iParam0, int iParam1, int iParam2)
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

void func_267()
{
	int iVar0;
	
	if (iLocal_78)
	{
		func_372();
		if (!unk_0x234B68AC2E35ED5A(iLocal_332, 1))
		{
			if (Global_2544210.f_1746 > 0)
			{
				if (Global_2544210.f_1749 == 0)
				{
					Global_2544210.f_1749 = unk_0x551F46B3C7DFB654();
				}
				else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2544210.f_1749) > Global_262145.f_11647)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_255())
							{
								if (!func_371())
								{
									if (!func_370(0) && !func_124())
									{
										Global_22230 = 0;
										iVar0 = func_80(1200, -1, 0);
										if (!unk_0x234B68AC2E35ED5A(iVar0, 0))
										{
											if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2544210.f_1749) > 20000)
											{
												if (func_369(18, "CELL_CLTEST6", 2, "NULL", Global_2544210.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_99, 0, 0, 0, 0, 0))
												{
													unk_0x191DDA30577F440A(&iVar0, 0);
													func_146(1200, iVar0, -1, 1, 0);
													unk_0x191DDA30577F440A(&iLocal_332, 1);
													func_367(0f, 0f, 0f, func_368(19), "");
													Global_2544210.f_1748 = 1;
													iLocal_78 = 0;
												}
											}
										}
										else if (func_369(18, "CELL_CLTEST1", 2, "NULL", Global_2544210.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_99, 0, 0, 0, 0, 0))
										{
											func_367(0f, 0f, 0f, func_368(19), "");
											unk_0x191DDA30577F440A(&iLocal_332, 1);
											Global_2544210.f_1748 = 1;
											iLocal_78 = 0;
										}
									}
								}
								else
								{
									Global_2544210.f_1749 = unk_0x551F46B3C7DFB654();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(iLocal_332, 1))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_309, 5))
		{
			if (func_255())
			{
				if (bLocal_99)
				{
					func_165("IMPEX_HELP_LNCH", -1);
				}
				unk_0x191DDA30577F440A(&iLocal_309, 5);
				func_510(&uLocal_295, 0, 0);
			}
		}
	}
	if (iLocal_101)
	{
		if (func_518())
		{
			if (!func_511(&uLocal_109))
			{
				func_510(&uLocal_109, 0, 0);
			}
			else if (func_509(&uLocal_109, 10000, 0))
			{
				if (func_268(18, "CELL_IMPT", 0, 0))
				{
					iLocal_101 = 0;
					func_46(&uLocal_109);
				}
			}
		}
	}
}

bool func_268(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_269(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_269(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_270(&uVar0, iParam0, func_366(), sParam1, iVar1, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_270(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_365(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB6A270F84A8781E(uParam7))
	{
		iVar2 = unk_0x15173FB88ABC94F9(sParam7);
	}
	if (func_364(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_360(iParam6))
	{
		return 0;
	}
	if (func_357(iVar0, iVar1, iVar2))
	{
		if (func_356())
		{
			return 0;
		}
		func_355();
		return func_277(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_276(iParam4))
	{
		return 0;
	}
	func_271(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_271(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1372345.f_40.f_1 = iParam0;
	Global_1372345.f_40.f_2 = iParam1;
	Global_1372345.f_40.f_3 = iParam2;
	StringCopy(&(Global_1372345.f_40.f_4), sParam3, 16);
	Global_1372345.f_40.f_8 = iParam4;
	Global_1372345.f_40.f_9 = iParam5;
	Global_1372345.f_40.f_14 = iParam6;
	func_272(iParam4);
	func_355();
	Global_1372345.f_40.f_13 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 7000);
}

void func_272(int iParam0)
{
	if (func_275(iParam0))
	{
		func_274();
		return;
	}
	func_273();
}

void func_273()
{
	Global_1372345.f_40.f_10 = 0;
}

void func_274()
{
	Global_1372345.f_40.f_10 = 1;
}

int func_275(int iParam0)
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

bool func_276(int iParam0)
{
	return iParam0 > Global_1372345.f_40.f_8;
}

int func_277(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_354();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_351(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_348(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_351(uParam0, sParam3, sParam4);
		}
		return func_331(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_330(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_319(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_318(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_278(iParam1, iParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_278(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_317();
	bVar0 = true;
	if (func_280(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_279(120000);
		return 1;
	}
	return 0;
}

void func_279(int iParam0)
{
	Global_1372345.f_40.f_11 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam0);
	Global_1372345.f_40.f_12 = 1;
}

int func_280(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_311(iVar0);
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
	sVar4 = func_310(uParam5, bParam6, &iVar3);
	uVar5 = func_308(iParam7, &iVar3);
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
		if (unk_0x234B68AC2E35ED5A(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_307(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_284(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 0))
	{
		func_283();
	}
	func_317();
	func_282();
	func_281();
	return 1;
}

void func_281()
{
	Global_1372345.f_57 = 0;
	Global_1372345.f_57.f_1 = 0;
}

void func_282()
{
	Global_1372345.f_40 = 3;
}

void func_283()
{
	unk_0x191DDA30577F440A(&Global_7668, 8);
}

int func_284(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_285(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_285(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_300();
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
	if (func_299() == 0)
	{
		func_297();
		return 0;
	}
	func_296(Global_4272463);
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
	func_300();
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
				func_295(0);
				break;
			
			case 1:
				func_295(1);
				break;
			
			case 2:
				func_295(2);
				break;
			
			case 3:
				func_295(3);
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
		func_300();
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
			if (!func_294())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_293(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_289(1);
			func_293(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_286(uParam0, sParam1);
	return 1;
}

void func_286(var uParam0, char* sParam1)
{
	if (!func_287())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, -1180597171, unk_0x15173FB88ABC94F9(sParam1), 0);
}

int func_287()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_121())
	{
		return 0;
	}
	if (func_288(unk_0x1146A9AE09CE2B14()))
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

bool func_288(int iParam0)
{
	return func_133(iParam0, 20);
}

void func_289(int iParam0)
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
		if (func_292(14))
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
								func_291(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_291(&(Global_7675[iVar1 /*15*/]));
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
								func_291(&(Global_7675[iVar1 /*15*/]));
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
								func_291(&(Global_7675[iVar1 /*15*/]));
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
								func_291(&(Global_7675[iVar1 /*15*/]));
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
								func_291(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_290(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_290(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xAB6A270F84A8781E(uParam7))
	{
		func_291(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_291(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_291(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_291(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_291(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_291(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

bool func_292(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_293(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_294()
{
	return Global_1312902;
}

void func_295(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112293.f_14049[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_296(int iParam0)
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

void func_297()
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
		if (!func_298(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
		{
			Global_4272463 = iVar2;
		}
		iVar2++;
	}
	Global_4271214[Global_4272463 /*104*/].f_24 = 1;
}

int func_298(struct<6> Param0, struct<6> Param1)
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

int func_299()
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
			if (!func_298(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
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

void func_300()
{
	if (func_292(14))
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
		Global_19798 = func_301();
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

var func_301()
{
	func_302();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_302()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_305(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_304(unk_0x7D2B9E6A64637269());
			if (func_303(iVar0) && (!func_292(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_303(Global_112293.f_2361.f_539.f_4321))
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

bool func_303(int iParam0)
{
	return iParam0 < 3;
}

int func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_305(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_305(int iParam0)
{
	if (func_303(iParam0))
	{
		return func_306(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_306(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_307(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_285(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_308(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_309(2, iParam1);
	return iParam0;
}

void func_309(int iParam0, var uParam1)
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

var func_310(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_309(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x3A2A8DAFDBEC4CFE(sParam0);
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		func_312(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_312(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_314(iParam0) != -1)
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
	if (func_313(iParam0))
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

int func_313(int iParam0)
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

int func_314(int iParam0)
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
			func_315(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_315(int iParam0)
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
	func_316(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

void func_317()
{
	Global_1372345.f_40.f_9 = 4;
}

int func_318(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_317();
	bVar0 = false;
	return func_280(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_319(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_320(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_320(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_311(iVar0);
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
	sVar4 = func_310(uParam5, bParam6, &iVar3);
	uVar5 = func_308(iParam7, &iVar3);
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
		if (unk_0x234B68AC2E35ED5A(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_369(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_322(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 0))
	{
		func_283();
	}
	func_321();
	func_282();
	func_281();
	return 1;
}

void func_321()
{
	Global_1372345.f_40.f_9 = 3;
}

int func_322(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_324(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			Global_8278[3 /*6*/] = { func_323(iParam0) };
			Global_8355 = iParam0;
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_323(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_324(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_300();
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
	if (func_329() == 0)
	{
		func_327();
		return 0;
	}
	func_326(Global_22192);
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
		func_295(0);
		func_295(2);
		func_295(1);
	}
	else
	{
		func_300();
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
					func_295(0);
					Global_8374 = 0;
					break;
				
				case 1:
					func_295(1);
					Global_8374 = 1;
					break;
				
				case 2:
					func_295(2);
					Global_8374 = 2;
					break;
				
				case 3:
					func_295(3);
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
		func_300();
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
			if (!func_294())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_293(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_289(1);
			func_293(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_325(uParam0, sParam1);
	return 1;
}

void func_325(var uParam0, char* sParam1)
{
	if (!func_287())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, 1654525105, unk_0x15173FB88ABC94F9(sParam1), 0);
}

void func_326(int iParam0)
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

void func_327()
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
		if (!func_328(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
		{
			Global_22192 = iVar2;
		}
		iVar2++;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_24 = 1;
}

int func_328(struct<6> Param0, struct<6> Param1)
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

int func_329()
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
			if (!func_328(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
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

int func_330(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	func_321();
	bVar0 = true;
	if (func_320(iParam0, iParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_279(120000);
		return 1;
	}
	return 0;
}

int func_331(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
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
	if (unk_0x234B68AC2E35ED5A(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 4))
	{
		bVar0 = func_347(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_337(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x234B68AC2E35ED5A(iParam4, 3))
		{
			func_336(1);
		}
		if (unk_0x234B68AC2E35ED5A(iParam4, 5))
		{
			func_335(1);
		}
		func_334();
		func_282();
		func_333();
		func_332();
		return 1;
	}
	return 0;
}

void func_332()
{
	Global_2553851 = 0;
}

void func_333()
{
	Global_1372345.f_57 = 1;
	Global_1372345.f_57.f_1 = 0;
}

void func_334()
{
	Global_1372345.f_40.f_9 = 1;
}

void func_335(int iParam0)
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

void func_336(int iParam0)
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

int func_337(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_346(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_338(sParam3, iParam4, bParam7);
}

int func_338(char* sParam0, int iParam1, bool bParam2)
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
					func_345();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_344();
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
				func_300();
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
				if (func_343())
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
			if (func_342())
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
			func_341();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_340();
		func_339();
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
		func_345();
	}
	return 0;
}

void func_339()
{
	if (!func_287())
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

void func_340()
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

void func_341()
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

int func_342()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_343()
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

void func_344()
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

void func_345()
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

void func_346(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_347(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_346(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_338(sParam3, iParam4, bParam7);
}

int func_348(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (func_350(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_349();
		func_334();
		func_282();
		func_333();
		func_332();
		return 1;
	}
	return 0;
}

void func_349()
{
	Global_22143 = 0;
}

bool func_350(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_346(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_338(sParam3, iParam4, bParam8);
}

int func_351(var uParam0, char* sParam1, char* sParam2)
{
	if (func_353(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_352();
		func_282();
		func_333();
		return 1;
	}
	return 0;
}

void func_352()
{
	Global_1372345.f_40.f_9 = 2;
}

bool func_353(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_346(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_338(sParam2, iParam3, 0);
}

void func_354()
{
	Global_1372345.f_55 = Global_1372345.f_40.f_1;
	Global_1372345.f_55.f_1 = Global_1372345.f_40.f_10;
}

void func_355()
{
	Global_1372345.f_40 = 1;
}

bool func_356()
{
	return Global_1372345.f_40 == 1;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	if (!func_358(iParam0))
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

int func_358(int iParam0)
{
	if (!func_359())
	{
		return 0;
	}
	if (!Global_1372345.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_359()
{
	if (Global_1372345.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_360(int iParam0)
{
	if (func_363())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_370(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1669334 || func_362())
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(iParam0, 6))
	{
		if (func_361())
		{
			return 0;
		}
	}
	return 1;
}

bool func_361()
{
	return unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1390181);
}

int func_362()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_363()
{
	return func_342();
}

int func_364(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_357(iParam0, iParam1, iParam2);
}

int func_365(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x15173FB88ABC94F9(&cVar0);
}

char* func_366()
{
	return "TXTMSG";
}

int func_367(struct<3> Param0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0xDA654EB115F9FF7D(&(Global_2544210.f_4032[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xAB6A270F84A8781E(&(Global_2544210.f_4032[iVar0 /*26*/].f_4)))
				{
					Global_2544210.f_4032[iVar0 /*26*/] = 1;
					Global_2544210.f_4032[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2544210.f_4032[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2544210.f_4032[iVar0 /*26*/] = 1;
				Global_2544210.f_4032[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_368(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_369(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_324(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			Global_8278[3 /*6*/] = { func_323(iParam0) };
			Global_8355 = iParam0;
			StringCopy(&Global_8356, sParam5, 64);
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
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

bool func_371()
{
	return func_359();
}

void func_372()
{
	if (func_70())
	{
		if (!iLocal_314 == Local_324.f_32)
		{
			Global_2544210.f_1706 = { Local_323 };
			func_373();
			iLocal_314 = Local_324.f_32;
		}
	}
}

void func_373()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2544210.f_1725[iVar1 /*4*/]), "", 16);
		if (!Global_2544210.f_1706[iVar1] == -1 && Global_2544210.f_1706.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2544210.f_1725[iVar0 /*4*/]), func_374(Global_2544210.f_1706[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2544210.f_1746 = iVar0;
}

char* func_374(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_375(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_375(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_375(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_375(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_375(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_375(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_375(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_375(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_375(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_375(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_375(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_375(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_375(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_375(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_375(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_375(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_375(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_375(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_375(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_375(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_375(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_376()
{
	int iVar0;
	
	if (!iLocal_93)
	{
		if (!func_381(unk_0x1146A9AE09CE2B14(), 1))
		{
			if (!func_122(unk_0x1146A9AE09CE2B14(), 0))
			{
				if (!Local_324.f_28 == -1)
				{
					if (!iLocal_316 == func_34(Local_324.f_28))
					{
						if (!func_380(unk_0x7D2B9E6A64637269()))
						{
							if (!func_379(unk_0x1146A9AE09CE2B14()))
							{
								iLocal_316 = func_34(Local_324.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_322)
								{
									unk_0xE27B43E56097B31E(iLocal_322[iVar0], iLocal_316);
									iVar0++;
								}
								iLocal_93 = 1;
								unk_0x16E516CA9C88FF48(iLocal_316);
								func_378();
								func_377(iLocal_316);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_381(unk_0x1146A9AE09CE2B14(), 1) || (Local_324.f_28 > -1 && !iLocal_316 == func_34(Local_324.f_28))) || func_380(unk_0x7D2B9E6A64637269())) || func_122(unk_0x1146A9AE09CE2B14(), 0)) || func_379(unk_0x1146A9AE09CE2B14()))
	{
		unk_0x824F744352C8BC82(iLocal_316);
		iVar0 = 0;
		while (iVar0 < iLocal_322)
		{
			unk_0x45884CED13CDACAD(iLocal_322[iVar0]);
			iVar0++;
		}
		func_378();
		iLocal_316 = 0;
		iLocal_93 = 0;
	}
}

void func_377(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
	{
		if (iParam0 == Local_324.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_279[0] = unk_0xCC4944A45BF68267(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[1] = unk_0xCC4944A45BF68267(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[2] = unk_0xCC4944A45BF68267(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[3] = unk_0xCC4944A45BF68267(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[4] = unk_0xCC4944A45BF68267(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[5] = unk_0xCC4944A45BF68267(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[6] = unk_0xCC4944A45BF68267(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[7] = unk_0xCC4944A45BF68267(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[8] = unk_0xCC4944A45BF68267(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[9] = unk_0xCC4944A45BF68267(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_280 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_279[0] = unk_0xCC4944A45BF68267(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[1] = unk_0xCC4944A45BF68267(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[2] = unk_0xCC4944A45BF68267(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[3] = unk_0xCC4944A45BF68267(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[4] = unk_0xCC4944A45BF68267(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[5] = unk_0xCC4944A45BF68267(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[6] = unk_0xCC4944A45BF68267(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[7] = unk_0xCC4944A45BF68267(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[8] = unk_0xCC4944A45BF68267(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[9] = unk_0xCC4944A45BF68267(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_280 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_279[0] = unk_0xCC4944A45BF68267(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[1] = unk_0xCC4944A45BF68267(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[2] = unk_0xCC4944A45BF68267(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[3] = unk_0xCC4944A45BF68267(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[4] = unk_0xCC4944A45BF68267(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[5] = unk_0xCC4944A45BF68267(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[6] = unk_0xCC4944A45BF68267(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[7] = unk_0xCC4944A45BF68267(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[8] = unk_0xCC4944A45BF68267(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[9] = unk_0xCC4944A45BF68267(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_280 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_279[0] = unk_0xCC4944A45BF68267(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[1] = unk_0xCC4944A45BF68267(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[2] = unk_0xCC4944A45BF68267(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[3] = unk_0xCC4944A45BF68267(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[4] = unk_0xCC4944A45BF68267(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[5] = unk_0xCC4944A45BF68267(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[6] = unk_0xCC4944A45BF68267(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[7] = unk_0xCC4944A45BF68267(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[8] = unk_0xCC4944A45BF68267(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_279[9] = unk_0xCC4944A45BF68267(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_280 = 1;
			break;
	}
}

void func_378()
{
	int iVar0;
	
	if (iLocal_280)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x07B3E7B841604E09(iLocal_279[iVar0]))
		{
			unk_0xB71F47F9B78DA5B4(iLocal_279[iVar0]);
		}
		iLocal_279[iVar0] = 0;
		iVar0++;
	}
	iLocal_280 = 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_120(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_380(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
	}
	return unk_0xB71084333B418824(iParam0) == Global_150962;
}

bool func_381(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_382(iParam0) != 0;
	}
	return func_139(iParam0, bParam1, 0);
}

int func_382(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

void func_383()
{
	var uVar0;
	
	if (!func_511(&uLocal_301))
	{
		func_510(&uLocal_301, 0, 0);
	}
	else if (func_509(&uLocal_301, 250, 0))
	{
		func_46(&uLocal_301);
		if (func_397(1, 0))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_309, 5) && !func_396())
			{
			}
			else if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if ((func_395() || func_396()) || func_392())
				{
					if (!func_391(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
					{
						if (!func_390(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) && !func_15(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
						{
							if (!unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
							{
								if (func_385(&uVar0))
								{
									if (!unk_0x234B68AC2E35ED5A(iLocal_309, 2))
									{
										if (func_255() && timera() > 500)
										{
											func_165("IMPEX_FSPRAY_FM", -1);
											unk_0x191DDA30577F440A(&iLocal_309, 2);
										}
									}
									else
									{
										settimera(0);
									}
								}
								else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 8))
								{
									if (func_255() && timera() > 500)
									{
										func_165("IMPEX_CASH_FM", -1);
										unk_0x191DDA30577F440A(&iLocal_309, 8);
									}
								}
								else
								{
									settimera(0);
								}
							}
							else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 11))
							{
								if (func_255() && timera() > 500)
								{
									func_165("IMPEX_WANTED_FM", -1);
									unk_0x191DDA30577F440A(&iLocal_309, 11);
								}
							}
							else
							{
								settimera(0);
							}
						}
						else if (!unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
						{
							if (!func_384())
							{
								if (!func_15(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
								{
									if (!unk_0x234B68AC2E35ED5A(iLocal_309, 3))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_309, 7);
										if (func_255() && timera() > 2000)
										{
											if (Global_2544210.f_4584 == 0)
											{
												if (!func_247(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
												{
													func_165("IMPEX_DELIVER_FM", -1);
													unk_0x191DDA30577F440A(&iLocal_309, 3);
												}
											}
										}
									}
									else
									{
										settimera(0);
									}
								}
								else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 7))
								{
									if (func_255() && timera() > 2000)
									{
										func_165("IMPEX_RIG_FM", -1);
										unk_0x191DDA30577F440A(&iLocal_309, 7);
									}
								}
								else
								{
									settimera(0);
								}
							}
							else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 6))
							{
								if (func_255() && timera() > 2000)
								{
									func_165("IMPEX_WANTED_P", -1);
									unk_0x191DDA30577F440A(&iLocal_309, 6);
								}
							}
							else
							{
								settimera(0);
							}
						}
						else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 4))
						{
							if (func_255() && timera() > 5000)
							{
								func_165("IMPEX_WANTED_FM", -1);
								unk_0x191DDA30577F440A(&iLocal_309, 4);
							}
						}
						else
						{
							settimera(0);
						}
					}
				}
				else
				{
					if (func_237("IMPEX_FSPRAY_FM"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					unk_0xC664C0067EEAB8D1(&iLocal_309, 2);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 3);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 4);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 6);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 7);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 8);
					unk_0xC664C0067EEAB8D1(&iLocal_309, 11);
					settimera(0);
				}
			}
			else
			{
				if (func_237("IMPEX_FSPRAY_FM"))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				unk_0xC664C0067EEAB8D1(&iLocal_309, 2);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 3);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 4);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 6);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 7);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 8);
				unk_0xC664C0067EEAB8D1(&iLocal_309, 11);
				if (timera() > 0)
				{
					settimera(0);
				}
			}
		}
		else if (func_237("IMPEX_FSPRAY_FM"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

int func_384()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0x9B73EB6255D4AE81(uVar3, iVar1, 0))
		{
			if (unk_0x419E13582192CFEA(unk_0x27FC1B0077581B37(iVar3, iVar1, 0)))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x27FC1B0077581B37(iVar3, iVar1, 0), 0))
				{
					uVar0 = unk_0x27FC1B0077581B37(iVar3, iVar1, 0);
					if (!unk_0x72D30262CF8C8603(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_385(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0) && unk_0xA6BE8F025C6B653F(iVar0))
		{
			*uParam0 = func_386(iVar0, 0);
			if (!unk_0x9C0D256830690A70((400 + *uParam0), 0, 0, 1, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_386(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (func_389(unk_0x1146A9AE09CE2B14()) && !bParam1)
	{
		return 0;
	}
	fVar3 = unk_0xE1C9109AA0B04165(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x547F3E9F33EBE1F4(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0x78AC08919151D27D(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (to_float(unk_0x5E7C0A485B91DB87(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x98FB758C7911C941(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0x3120C869DFADA521(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0x7495432563B8C64A(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0x3120C869DFADA521(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0x7495432563B8C64A(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0x06C6F76D2E20647E(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xF2A0B4A5DE0987FB(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0xF2A0B4A5DE0987FB(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iParam0)))
	{
		iVar1 = 0;
		if (unk_0xCCFA606BB731DE7C(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0xCCFA606BB731DE7C(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0xCCFA606BB731DE7C(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0xCCFA606BB731DE7C(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0xCCFA606BB731DE7C(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0xCCFA606BB731DE7C(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0x2B3E2A2E6B780A37(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0xE810D112A0C00FF3(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x3095B0C5EB2CFFEC(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xE3D43E568F45340A(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_388(unk_0x6471F4759775FCA4(iParam0), 0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11729));
		if (iVar0 > floor((4f * Global_262145.f_11729)))
		{
			iVar4 = Global_262145.f_11727;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11728)
		{
			iVar0 = Global_262145.f_11728;
		}
	}
	else if (func_387(iParam0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11732));
		if (iVar0 > floor((4f * Global_262145.f_11732)))
		{
			iVar4 = Global_262145.f_11730;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11731)
		{
			iVar0 = Global_262145.f_11731;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_387(int iParam0)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
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

int func_389(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_120(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

bool func_390(int iParam0)
{
	return unk_0x5B38E054B758C032(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_391(int iParam0)
{
	if (unk_0x5B38E054B758C032(iParam0, "Veh_Modded_By_Player") && unk_0x05351AF95891EE5C(iParam0, "Veh_Modded_By_Player") != unk_0x17114A8CCDEB9E3D(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_392()
{
	var uVar0;
	
	if (func_520())
	{
		return 0;
	}
	if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!func_394(uVar0, 1))
		{
			if (func_393(unk_0x6471F4759775FCA4(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_324.f_35[iVar1] == iVar0)
			{
				if (!func_509(&(Local_324.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_394(int iParam0, bool bParam1)
{
	if (Global_77248)
	{
		if (unk_0x419E13582192CFEA(iParam0) && (!bParam1 || unk_0xBFCE58B2B3249999(iParam0, 0)))
		{
			if (unk_0x5B38E054B758C032(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395()
{
	var uVar0;
	
	if (func_520())
	{
		return 0;
	}
	if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		if (!Global_1659956)
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (!func_394(uVar0, 1))
			{
				if (!unk_0x88CF23F322C9687A(uVar0, 0))
				{
					if (unk_0xBFCE58B2B3249999(iVar0, 1))
					{
						if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29 <= 0)
						{
							if (!unk_0x5B38E054B758C032(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1659955)
								{
									if (bLocal_281)
									{
										bLocal_281 = false;
									}
									if (func_74(&Local_323, unk_0x6471F4759775FCA4(iVar0)))
									{
										Global_2544210.f_1750 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_281)
					{
						bLocal_281 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_396()
{
	if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x234B68AC2E35ED5A(Local_324.f_23, 0))
		{
			if (unk_0x159BC3DDA80D71AC(Local_324.f_22))
			{
				if (func_4(Local_324.f_22))
				{
					if (unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_324.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_397(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0x1146A9AE09CE2B14(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 1))
	{
		bVar0 = false;
	}
	if (func_122(unk_0x1146A9AE09CE2B14(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_398()
{
	int iVar0;
	
	switch (iLocal_106)
	{
		case 0:
			if (!func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
			{
				if (!func_511(&uLocal_107) || func_509(&uLocal_107, 2000, 0))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_401(&uLocal_111, 4, iLocal_105, "MECHANIC_IMP", 0, 1);
							iLocal_334 = 0;
							iLocal_106++;
						}
					}
					func_46(&uLocal_107);
					func_510(&uLocal_107, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_90)
						{
							if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_334)
									{
										iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
										if (func_386(iVar0, 0) > 500)
										{
											sLocal_335 = "FM_IEPOOR";
										}
										else
										{
											sLocal_335 = "FM_IEGOOD";
										}
										iLocal_334 = 1;
									}
									else if (func_400(&uLocal_111, "FM_1AU", sLocal_335, 12, 0, 0, 0))
									{
										iLocal_276 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
										iLocal_106++;
										iLocal_334 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_399();
						iLocal_106 = 0;
					}
				}
				else
				{
					func_399();
					iLocal_106 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_90)
						{
							if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0) != iLocal_276)
								{
									iLocal_106 = 1;
								}
							}
						}
					}
					else
					{
						func_399();
						iLocal_106 = 0;
					}
				}
				else
				{
					func_399();
					iLocal_106 = 0;
				}
			}
			break;
	}
}

void func_399()
{
	var uVar0;
	
	if (unk_0x419E13582192CFEA(iLocal_105))
	{
		unk_0x824F744352C8BC82(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_105;
		unk_0x24DBE20C830AE9AB(&uVar0);
	}
}

bool func_400(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_346(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_338(sParam2, iParam3, 0);
}

void func_401(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_402()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	
	if (func_397(1, 1))
	{
		switch (Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1)
		{
			case 0:
				if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
				{
					bVar7 = func_392();
					if ((func_395() || func_396()) || bVar7)
					{
						if (!func_384())
						{
							if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
							{
								if (!func_498())
								{
									if (bLocal_89)
									{
										bLocal_89 = false;
									}
									iVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
									if (unk_0x8BA4AD00568AB5FC("AllowModSprayRepair", 2))
									{
										if (!unk_0x5B38E054B758C032(iVar3, "AllowModSprayRepair") || (unk_0x5B38E054B758C032(iVar3, "AllowModSprayRepair") && unk_0xCDB2D643EC18E75E(iVar3, "AllowModSprayRepair") == 0))
										{
											unk_0x674364FB1963C598(iVar3, "AllowModSprayRepair", 1);
										}
									}
									if (!iLocal_95)
									{
										if (func_497(iVar3))
										{
											unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
											unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
										}
									}
									iLocal_336 = iVar3;
									if (unk_0x234B68AC2E35ED5A(iLocal_332, 15))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_332, 15);
									}
									if (unk_0x234B68AC2E35ED5A(iLocal_309, 9))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_309, 9);
									}
									if (unk_0x234B68AC2E35ED5A(iLocal_309, 12))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_309, 12);
									}
									if (unk_0x234B68AC2E35ED5A(iLocal_309, 10))
									{
										unk_0xC664C0067EEAB8D1(&iLocal_309, 10);
									}
									if (!unk_0x234B68AC2E35ED5A(iLocal_332, 12))
									{
										if (bVar7)
										{
											unk_0x191DDA30577F440A(&iLocal_332, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0xC664C0067EEAB8D1(&iLocal_332, 12);
									}
									if (func_390(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_82 = true;
											if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
											{
												if (bLocal_88)
												{
													bLocal_88 = false;
												}
												if (unk_0x27FC1B0077581B37(iVar3, -1, 0) == unk_0x7D2B9E6A64637269())
												{
													bLocal_85 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_85)
												{
													bLocal_85 = false;
												}
												bLocal_88 = true;
											}
											bLocal_83 = false;
											bLocal_84 = false;
											bLocal_86 = false;
											bLocal_87 = false;
											bLocal_89 = false;
											bLocal_90 = true;
											if (func_496(1215605247, 18))
											{
												bLocal_80 = true;
											}
											iLocal_318 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
											if (!unk_0x0D5E478A215B3F4A(iLocal_318))
											{
												if (func_247(iLocal_318, 0))
												{
													if (!unk_0x234B68AC2E35ED5A(iLocal_332, 17))
													{
														unk_0x191DDA30577F440A(&iLocal_332, 17);
													}
													else if (func_247(iLocal_318, 1))
													{
														Var9 = { unk_0x9F2928DF31D785C7(iLocal_318) };
														if (unk_0x4DDAC4C80BACF92C(iLocal_318) < 0.5f || unk_0x0BCA9ADE67DF9DD8(Var9.f_1) < 1.3f)
														{
															func_495();
															func_486(unk_0x1146A9AE09CE2B14(), 0, 16388, 0);
															if (func_396())
															{
																unk_0x191DDA30577F440A(&iLocal_332, 4);
																unk_0x191DDA30577F440A(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 1);
															}
															if (func_395() || func_392())
															{
																unk_0x191DDA30577F440A(&iLocal_332, 6);
															}
															if (func_485())
															{
																bLocal_79 = true;
															}
															else
															{
																bLocal_79 = false;
															}
															unk_0x5C052A30B9FCA449(iLocal_318, 2);
															if (unk_0xA6BE8F025C6B653F(iLocal_318))
															{
																unk_0x3A653D4F5FA4B665(iLocal_318, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/] = func_75(unk_0x6471F4759775FCA4(iLocal_318));
															Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_317[iVar4] = func_121();
																if (!unk_0x9B73EB6255D4AE81(iLocal_318, iVar1, 0))
																{
																	if (unk_0x419E13582192CFEA(unk_0x27FC1B0077581B37(iLocal_318, iVar1, 0)))
																	{
																		if (!unk_0xE50EB54E0F21BED0(unk_0x27FC1B0077581B37(iLocal_318, iVar1, 0), 0))
																		{
																			iVar0 = unk_0x27FC1B0077581B37(iLocal_318, iVar1, 0);
																			if (unk_0x72D30262CF8C8603(iVar0))
																			{
																				if (func_14(unk_0xCB567ED25393C1DF(iVar0), 0, 0))
																				{
																					if (unk_0xFCC26BA7572E9F1F(unk_0xCB567ED25393C1DF(iVar0)))
																					{
																						iLocal_317[iVar4] = unk_0xCB567ED25393C1DF(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_288 = func_484(unk_0x6471F4759775FCA4(iLocal_318));
															iLocal_289 = func_386(iLocal_318, 0);
															fLocal_290 = to_float((iLocal_288 - iLocal_289));
															fLocal_290 = (fLocal_290 * Global_262145.f_2412);
															if (unk_0x234B68AC2E35ED5A(iLocal_332, 4))
															{
																fLocal_290 = (fLocal_290 * 1.3f);
															}
															fLocal_290 = (fLocal_290 / to_float(iVar5));
															fLocal_291 = 500f;
															func_483();
															func_173(0);
															func_481(1248, 1, -1);
															if (func_237("IMPEX_DELIVER_FM"))
															{
																unk_0x66AE54CE92457FEE(1);
															}
															unk_0xC664C0067EEAB8D1(&iLocal_332, 12);
															iVar6 = func_80(1200, -1, 0);
															if (!unk_0x234B68AC2E35ED5A(iVar6, 1))
															{
																unk_0x191DDA30577F440A(&iVar6, 1);
																func_146(1200, iVar6, -1, 1, 0);
															}
															else if (!unk_0x234B68AC2E35ED5A(iVar6, 2))
															{
																unk_0x191DDA30577F440A(&iVar6, 2);
																func_146(1200, iVar6, -1, 1, 0);
															}
															func_480();
															iLocal_292 = 0;
															iLocal_292 = round(fLocal_290);
															iLocal_292 = (iLocal_292 - (iLocal_292 % 25));
															if (iLocal_337 == iVar3)
															{
																iLocal_292 = (iLocal_292 + iLocal_294);
															}
															if (!unk_0x234B68AC2E35ED5A(iLocal_332, 4))
															{
																if (iLocal_292 > Global_262145.f_164)
																{
																	iLocal_292 = Global_262145.f_164;
																}
															}
															else if (iLocal_292 > Global_262145.f_164)
															{
																iLocal_292 = Global_262145.f_164;
															}
															iLocal_293 = 0;
															fLocal_291 = (fLocal_291 * Global_262145.f_4228);
															iLocal_293 = round(fLocal_291);
															unk_0xC664C0067EEAB8D1(&iLocal_332, 17);
															iLocal_319 = iLocal_318;
															iLocal_321 = unk_0x6471F4759775FCA4(iLocal_318);
															if (!unk_0x234B68AC2E35ED5A(iLocal_332, 4))
															{
																unk_0xABD845EBE246A2A8(19, iLocal_293, iLocal_292, iLocal_318);
															}
															else
															{
																unk_0xABD845EBE246A2A8(120, iLocal_293, iLocal_292, iLocal_318);
															}
															func_479(19, 1);
															func_478();
															func_514();
														}
														else if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
														{
															func_486(unk_0x1146A9AE09CE2B14(), 0, 16388, 0);
														}
													}
												}
												else if (unk_0x234B68AC2E35ED5A(iLocal_332, 17))
												{
													unk_0xC664C0067EEAB8D1(&iLocal_332, 17);
												}
											}
										}
										else
										{
											if (bLocal_82)
											{
												bLocal_82 = false;
											}
											if (bLocal_90)
											{
												bLocal_90 = false;
											}
											if (bLocal_85)
											{
												bLocal_85 = false;
											}
											if (bLocal_88)
											{
												bLocal_88 = false;
											}
											if (bLocal_89)
											{
												bLocal_89 = false;
											}
										}
									}
									else if (!func_15(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
									{
										if (func_385(&iVar8))
										{
											if (!func_391(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
											{
												if (unk_0x27FC1B0077581B37(iVar3, -1, 0) == unk_0x7D2B9E6A64637269())
												{
													if (iLocal_337 != iVar3)
													{
														iLocal_337 = iVar3;
														iLocal_294 = 0;
													}
													else if (iLocal_294 != iVar8)
													{
														if (iLocal_294 < iVar8)
														{
															iLocal_294 = iVar8;
														}
													}
												}
												if (!bLocal_83)
												{
													bLocal_83 = true;
												}
												if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
												{
													if (func_77())
													{
														if (bLocal_84)
														{
															bLocal_84 = false;
														}
														if (unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0) == unk_0x7D2B9E6A64637269())
														{
															if (func_386(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0) > 0)
															{
																if (!bLocal_87)
																{
																	bLocal_87 = true;
																}
															}
															else
															{
																if (bLocal_87)
																{
																	bLocal_87 = false;
																}
																if (!bLocal_86)
																{
																	bLocal_86 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_86)
													{
														bLocal_86 = false;
													}
													if (bLocal_87)
													{
														bLocal_87 = false;
													}
													if (!bLocal_84)
													{
														if (unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0) == unk_0x7D2B9E6A64637269())
														{
															bLocal_84 = true;
														}
													}
												}
											}
											else
											{
												func_477();
											}
										}
										else
										{
											func_477();
										}
									}
									else
									{
										func_477();
										if (bLocal_90)
										{
											bLocal_90 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								if (iLocal_336 != iVar3)
								{
									if (!iLocal_95)
									{
										if (func_497(iVar3))
										{
											unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
											unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
										}
									}
									iLocal_336 = iVar3;
								}
								if (!bLocal_89)
								{
									func_477();
									bLocal_89 = true;
								}
							}
						}
					}
					else
					{
						func_477();
						if (bLocal_90)
						{
							bLocal_90 = false;
						}
						if (iLocal_95)
						{
							if (Local_324.f_33)
							{
								if (bLocal_100)
								{
									iLocal_95 = 0;
								}
							}
						}
						if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							if ((func_237("IMPEX_NOT_NEED") || func_237("IMPEX_NO_MORE")) || func_237("IMPEX_NOT_PVEH"))
							{
								unk_0x66AE54CE92457FEE(1);
							}
						}
						iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
						if (func_394(iVar2, 1))
						{
							if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x7D2B9E6A64637269())
							{
								if (unk_0x5B38E054B758C032(iVar2, "Player_Vehicle"))
								{
									if (unk_0x05351AF95891EE5C(iVar2, "Player_Vehicle") != unk_0x17114A8CCDEB9E3D(unk_0x1146A9AE09CE2B14()) || iVar2 == iLocal_336)
									{
										if (unk_0xBFCE58B2B3249999(iVar2, 0))
										{
											if (func_255())
											{
												if (!unk_0x234B68AC2E35ED5A(iLocal_332, 15))
												{
													if (bVar7 || func_74(&Local_323, unk_0x6471F4759775FCA4(iVar2)))
													{
														func_165("IMPEX_NOT_PVEH", -1);
														unk_0x191DDA30577F440A(&iLocal_332, 15);
													}
												}
											}
										}
									}
									else if (unk_0x234B68AC2E35ED5A(iLocal_332, 15))
									{
										if (iVar2 != iLocal_336)
										{
											unk_0xC664C0067EEAB8D1(&iLocal_332, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0x234B68AC2E35ED5A(iLocal_332, 15))
							{
								if (iVar2 != iLocal_336)
								{
									unk_0xC664C0067EEAB8D1(&iLocal_332, 15);
								}
							}
							if (bLocal_96)
							{
								if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_496(1215605247, 18))
								{
									iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
									if (func_247(iVar2, 0))
									{
										if (!iLocal_94)
										{
											func_173(1);
											iLocal_94 = 1;
										}
										bLocal_80 = true;
									}
								}
								else if (iLocal_94)
								{
									func_173(0);
									iLocal_94 = 0;
									bLocal_80 = false;
								}
							}
						}
						if (func_496(1215605247, 18))
						{
							if (func_255())
							{
								if (func_394(iVar2, 1))
								{
									if (unk_0xBFCE58B2B3249999(iVar2, 0))
									{
										if (!unk_0x234B68AC2E35ED5A(iLocal_309, 10))
										{
											func_165("IMPEX_NOT_PVEH", -1);
											unk_0x191DDA30577F440A(&iLocal_309, 10);
										}
									}
								}
								else if (func_74(&Local_323, unk_0x6471F4759775FCA4(iVar2)))
								{
									if (unk_0x88CF23F322C9687A(iVar2, 0))
									{
										if (!unk_0x234B68AC2E35ED5A(iLocal_309, 12))
										{
											func_165("IMPEX_NOT_CREW", -1);
											unk_0x191DDA30577F440A(&iLocal_309, 12);
										}
									}
								}
								else if (!unk_0x234B68AC2E35ED5A(iLocal_309, 9))
								{
									if (unk_0x27FC1B0077581B37(iVar2, -1, 0) == unk_0x7D2B9E6A64637269())
									{
										func_165("IMPEX_NOT_NEED", -1);
										unk_0x191DDA30577F440A(&iLocal_309, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0x234B68AC2E35ED5A(iLocal_309, 9))
							{
								unk_0xC664C0067EEAB8D1(&iLocal_309, 9);
							}
							if (unk_0x234B68AC2E35ED5A(iLocal_309, 10))
							{
								unk_0xC664C0067EEAB8D1(&iLocal_309, 10);
							}
							if (unk_0x234B68AC2E35ED5A(iLocal_309, 12))
							{
								unk_0xC664C0067EEAB8D1(&iLocal_309, 12);
							}
							if (unk_0x234B68AC2E35ED5A(iLocal_332, 12))
							{
								if (func_255())
								{
									func_165("IMPEX_NO_MORE", -1);
									unk_0xC664C0067EEAB8D1(&iLocal_332, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_477();
					if (bLocal_90)
					{
						bLocal_90 = false;
					}
					if (iLocal_95)
					{
						iLocal_95 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
				{
					if (!func_166(unk_0xD56332194D622ECE(unk_0x1146A9AE09CE2B14()), 1215605247, &uLocal_312, 0, 500, 1, 0))
					{
						Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0xC664C0067EEAB8D1(&iLocal_332, 4);
					unk_0xC664C0067EEAB8D1(&iLocal_332, 6);
					Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0xE0A6F16F546C8274())
				{
					func_474(17, 1, -1);
					if (unk_0x234B68AC2E35ED5A(iLocal_332, 4))
					{
						unk_0x191DDA30577F440A(&(Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2), 1);
						func_473();
					}
					else
					{
						func_471();
					}
					if (bLocal_79)
					{
						if (unk_0x234B68AC2E35ED5A(iLocal_332, 6))
						{
							Local_77.f_2 = 219007971;
						}
						else
						{
							Local_77.f_2 = -472383201;
						}
						Local_77.f_3 = Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/];
						Local_77.f_10 = iLocal_317[0];
						Local_77.f_11 = iLocal_317[1];
						Local_77.f_12 = iLocal_317[2];
						Local_77.f_13 = iLocal_317[3];
						if (!unk_0x234B68AC2E35ED5A(iLocal_332, 6))
						{
						}
					}
					unk_0xC664C0067EEAB8D1(&iLocal_332, 6);
					func_470(4, iLocal_292);
					func_454(&iLocal_292, 1);
					if (iLocal_292 > 0)
					{
						if (func_453())
						{
							func_442(941287179, iLocal_292, &iVar10, 0, 0, 0);
							Global_4265506[iVar10 /*85*/].f_3 = iLocal_321;
						}
						else
						{
							unk_0x3E15E494AC200C6E(iLocal_292, iLocal_321);
						}
					}
					if (iLocal_289 > 0)
					{
						func_441("IMPEX_PASS", iLocal_292, 7000, 0);
					}
					else
					{
						func_441("IMPEX_PASS", iLocal_292, 7000, 0);
					}
					func_407(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_293, 1, -1, 0);
					func_406(29);
					func_486(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
					Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1 = 0;
					Local_331[unk_0xDD0E57E73E5C4BF6() /*4*/] = -1;
					unk_0xC664C0067EEAB8D1(&iLocal_332, 4);
					iLocal_101 = 1;
					func_403(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_381(unk_0x1146A9AE09CE2B14(), 1))
		{
			if (!bLocal_96)
			{
				if (iLocal_94)
				{
					func_173(0);
					iLocal_94 = 0;
				}
			}
			else if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_496(1215605247, 18))
			{
				iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if (func_247(iVar2, 0))
				{
					if (!iLocal_94)
					{
						func_173(1);
						iLocal_94 = 1;
					}
					bLocal_80 = true;
				}
			}
			else if (iLocal_94)
			{
				func_173(0);
				iLocal_94 = 0;
				bLocal_80 = false;
			}
		}
		if (bLocal_83)
		{
			bLocal_83 = false;
		}
		if (bLocal_84)
		{
			bLocal_84 = false;
		}
		if (bLocal_86)
		{
			bLocal_86 = false;
		}
		if (bLocal_87)
		{
			bLocal_87 = false;
		}
	}
}

void func_403(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_405(iParam1, iParam2))
	{
		iVar0 = func_404();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_404()
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

int func_405(int iParam0, var uParam1)
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

void func_406(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_508() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
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

var func_407(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_408(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_408(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_409(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_409(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_440(unk_0x1146A9AE09CE2B14()) || func_439(unk_0x1146A9AE09CE2B14()))
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
	else if (func_437() || func_434(unk_0x1146A9AE09CE2B14()))
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
	if (func_433(uParam2))
	{
	}
	if (func_432())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_430(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_429(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_427(0, &iVar1);
					break;
				
				case 3:
					func_427(1, &iVar1);
					break;
				
				case 1:
					func_424(&iVar1);
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
			func_481(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_419((func_423(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_481(1166, iVar1, -1);
				}
				func_414(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_410((func_412(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_410((func_412(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_410(int iParam0)
{
	if (func_432())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_411(joaat("mpply_globalxp"), iParam0);
	}
}

void func_411(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_412(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_413(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_413(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_413(int iParam0)
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

void func_414(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_198(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_417(func_418(&Var0));
			if (iVar1 == 0)
			{
				func_416(&Global_1390382, iParam0);
				func_415(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_416(&Global_1390383, iParam0);
				func_415(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_416(&Global_1390384, iParam0);
				func_415(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_416(&Global_1390385, iParam0);
				func_415(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_416(&Global_1390386, iParam0);
				func_415(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_415(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
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

void func_416(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_417(int iParam0)
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

int func_418(var uParam0)
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

void func_419(int iParam0, int iParam1, int iParam2)
{
	if (func_432())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_81(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_81(-1)])
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
		if (func_240(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_421(iParam0, 1);
		}
		func_420(640, iParam0, -1, 1);
		func_146(641, func_421(iParam0, 1), -1, 1, 0);
		Global_1390527[func_81(-1)] = iParam0;
		func_403(-1109644434, 7, 0);
	}
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_81(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_81(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_81(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_81(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_81(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_81(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_81(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_81(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_81(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_81(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_81(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_81(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_81(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_81(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_81(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_81(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_81(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_81(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_81(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_81(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_81(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_81(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_421(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_422(iParam0, 0);
}

int func_422(int iParam0, int iParam1)
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

int func_423(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_81(-1)];
			}
			else if (func_240(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_81(-1)];
	}
	return 0;
}

void func_424(int iParam0)
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
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_208(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_426(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = round((func_425(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_425(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_425(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_426(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_198(iParam0) };
		Global_2518266 = { func_198(iParam1) };
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

void func_427(bool bParam0, int iParam1)
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
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_426(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_428(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_426(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = round((func_425(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_425(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_428(int iParam0, int iParam1)
{
	return vdist(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_429(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_425(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_430(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_423(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_423(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_431(8000, 0, 0) > 0)
	{
		if (func_431(8000, 0, 0) < (iParam0 + func_423(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_431(8000, 0, 0) - func_423(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_431(int iParam0, bool bParam1, int iParam2)
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

int func_432()
{
	return 1;
}

int func_433(char* sParam0)
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

int func_434(int iParam0)
{
	return func_435(func_436(iParam0));
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_436(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_437()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_30();
	}
	return func_438(Global_4456448.f_85535);
}

int func_438(int iParam0)
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

bool func_439(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_440(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_441(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x49648AD747832803(iParam2, 1);
}

void func_442(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_453())
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
				func_443(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_443(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_443(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_443(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_443(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_453())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_26()) || unk_0xD699DB7515D82955())
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
			*uParam0 = func_450(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_449(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_444(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_444(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_445(iParam0);
	}
}

void func_445(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_453())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_448(iParam0))
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
		func_446(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_446(var uParam0)
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
	func_447(&(uParam0->f_14));
	func_447(&(uParam0->f_14.f_13));
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

void func_447(var uParam0)
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

int func_448(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_449(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_450(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_453())
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
				func_451(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_451(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_452();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_452()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

int func_453()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_469())
		{
			if (func_468(0))
			{
				if (!func_464(0))
				{
					if (unk_0x8CFC2F41A749E236(func_463()))
					{
						if (func_462() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_462());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_460(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_459("GB_BCUT_TICK1", func_463(), iVar0, 0, 0, 1);
						}
						func_458(20);
						func_455(func_463(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_457(iParam0);
		func_456(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_8(iParam0));
	}
}

void func_456(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_457(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

void func_458(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_459(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0xB2A9BDF905DC5A51(func_201(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_199(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_193(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_460(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_461(1);
	}
	else
	{
		iVar1 = func_461(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_461(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_462()
{
	return Global_262145.f_12567;
}

int func_463()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

bool func_464(bool bParam0)
{
	return func_465(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_465(int iParam0, bool bParam1)
{
	return func_466(iParam0, bParam1, 1);
}

int func_466(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_467(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_121() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_121())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_468(bool bParam0)
{
	return func_221(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_469()
{
	return func_222(unk_0x1146A9AE09CE2B14());
}

void func_470(int iParam0, int iParam1)
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

void func_471()
{
	int iVar0;
	
	iVar0 = func_472(42);
	Global_2414501[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2414501[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414501[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414501[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_473()
{
	int iVar0;
	
	iVar0 = func_472(43);
	Global_2414501[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2414501[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_474(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_476(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_475(iParam0, iVar0, iParam2);
}

void func_475(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_81(iParam2)];
	unk_0xAC4FD27671081628(iVar0, iParam1, 1);
}

int func_476(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2594365[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_477()
{
	if (bLocal_89)
	{
		bLocal_89 = false;
	}
	if (bLocal_84)
	{
		bLocal_84 = false;
	}
	if (bLocal_85)
	{
		bLocal_85 = false;
	}
	if (bLocal_86)
	{
		bLocal_86 = false;
	}
	if (bLocal_88)
	{
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		bLocal_87 = false;
	}
}

void func_478()
{
	Global_2097152[func_508() /*5557*/].f_675.f_35 = unk_0x666C16A4ED8F3098();
}

void func_479(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_508() /*5557*/].f_675.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_508() /*5557*/].f_675.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_508() /*5557*/].f_675.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_508() /*5557*/].f_675.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_508() /*5557*/].f_675.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_508() /*5557*/].f_675.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_508() /*5557*/].f_675.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_508() /*5557*/].f_675.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_508() /*5557*/].f_675.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_508() /*5557*/].f_675.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_508() /*5557*/].f_675.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_508() /*5557*/].f_675.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_508() /*5557*/].f_675.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_508() /*5557*/].f_675.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_508() /*5557*/].f_675.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_508() /*5557*/].f_675.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_508() /*5557*/].f_675.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_508() /*5557*/].f_675.f_30 = iVar0;
			break;
	}
}

void func_480()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1200, -1, 0);
	if (!unk_0x234B68AC2E35ED5A(iVar0, 3))
	{
		unk_0x191DDA30577F440A(&iVar0, 3);
		unk_0x191DDA30577F440A(&iLocal_333, 1);
		bVar1 = true;
	}
	else if (!unk_0x234B68AC2E35ED5A(iVar0, 4))
	{
		unk_0x191DDA30577F440A(&iVar0, 4);
		unk_0x191DDA30577F440A(&iLocal_333, 2);
		bVar1 = true;
	}
	else if (!unk_0x234B68AC2E35ED5A(iVar0, 5))
	{
		unk_0x191DDA30577F440A(&iVar0, 5);
		unk_0x191DDA30577F440A(&iLocal_333, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_146(1200, iVar0, -1, 1, 0);
	}
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_482(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_420(iParam0, iVar0, iParam2, 1);
	}
}

int func_482(int iParam0)
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

void func_483()
{
	if (!Global_2544210.f_4594)
	{
		Global_2544210.f_4594 = 1;
	}
	func_252(&(Global_2544210.f_4595), 0, 0);
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_485()
{
	int iVar0;
	
	if (func_14(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (!unk_0x9B73EB6255D4AE81(iVar0, -1, 0))
				{
					if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_486(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_494())
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
		if (!func_136())
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
				else if (bVar14 || (!func_24(unk_0x1146A9AE09CE2B14(), 0) && !func_234()))
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
					func_491(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_490(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(iVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(iVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(iVar27, 1);
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
					func_489();
					func_488();
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
				if (!func_490(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
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
					if (func_487(Global_4456448.f_133963))
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

bool func_487(int iParam0)
{
	return iParam0 == 17;
}

void func_488()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_489()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_490(int iParam0)
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

void func_491(int iParam0, int iParam1, int iParam2)
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
				func_493();
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
		if (func_24(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_492(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_493()
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

int func_494()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_495()
{
	func_117();
}

int func_496(int iParam0, int iParam1)
{
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), func_169(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0x27FC1B0077581B37(iParam0, -1, 0) == unk_0x7D2B9E6A64637269())
		{
			if (!func_391(iParam0))
			{
				if (iParam0 != iLocal_336)
				{
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_498()
{
	if (Global_2441237.f_502.f_16 || Global_2441237.f_502.f_17)
	{
		return 1;
	}
	return 0;
}

void func_499(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_500(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_500(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_507(iParam1);
			break;
		
		case 1:
			iVar0 = func_506(iParam1);
			break;
		
		case 2:
			iVar0 = func_505(iParam1);
			break;
		
		case 3:
			iVar0 = func_504(iParam1);
			break;
		
		case 4:
			iVar0 = func_503(iParam1);
			break;
		
		case 5:
			iVar0 = func_502(iParam1);
			break;
		
		case 6:
			iVar0 = func_501(iParam1);
			break;
	}
	return iVar0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_505(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_507(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_508()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_509(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_510(uParam0, bParam2, 0);
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

void func_510(var uParam0, bool bParam1, bool bParam2)
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

bool func_511(var uParam0)
{
	return uParam0->f_1;
}

void func_512()
{
	Global_2097152[func_508() /*5557*/].f_675.f_36 = unk_0x666C16A4ED8F3098();
}

void func_513(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xD77442BF501ECF27();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_500(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_508() /*5557*/].f_675.f_37 = iVar1;
}

void func_514()
{
	func_517("CELL_CLTEST1", 0);
	func_515("CELL_CLTEST1");
	func_517("CELL_CLTEST6", 0);
	func_515("CELL_CLTEST6");
}

void func_515(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_300();
					Global_112293.f_14139[iVar0 /*104*/].f_99[Global_19798] = 0;
					if (func_516(iVar0))
					{
					}
					else
					{
						Global_112293.f_14139[iVar0 /*104*/].f_24 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xAE77D1668DA754A8(Global_112293.f_14139[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_516(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_517(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112293.f_14139[iVar0 /*104*/].f_24 = 1;
				if (Global_112293.f_14139[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112293.f_14049[0 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112293.f_14049[1 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112293.f_14049[2 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112293.f_14049[3 /*20*/].f_17 = 0;
					}
					Global_112293.f_14139[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112293.f_14139[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_518()
{
	if (unk_0xE8FFE38E2BA32BD6())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_139(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		return 0;
	}
	if (func_110())
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
	if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_1574199)
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	if (func_528())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	if (!func_136())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (unk_0xD09C9D030AFD3F25())
	{
		return 0;
	}
	return 1;
}

bool func_519()
{
	return Global_74428;
}

bool func_520()
{
	if (Global_2097152[func_508() /*5557*/].f_675.f_35 == 0)
	{
		return 0;
	}
	return (unk_0x666C16A4ED8F3098() - Global_2097152[func_508() /*5557*/].f_675.f_35) < 86400;
}

bool func_521()
{
	if (Global_2097152[func_508() /*5557*/].f_675.f_36 == 0)
	{
		return 0;
	}
	return (unk_0x666C16A4ED8F3098() - Global_2097152[func_508() /*5557*/].f_675.f_36) < 86400;
}

bool func_522()
{
	if (!unk_0x234B68AC2E35ED5A(iLocal_332, 2))
	{
		if (!func_24(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (((((!unk_0xD09C9D030AFD3F25() && !func_139(unk_0x1146A9AE09CE2B14(), 1, 0)) && !func_112()) && (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))) && unk_0xE0A6F16F546C8274()) && func_523(19))
			{
				unk_0x191DDA30577F440A(&iLocal_332, 2);
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(iLocal_332, 2);
}

int func_523(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_525(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_524(unk_0x1146A9AE09CE2B14(), 1);
	iVar2 = func_421(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_423(iParam0);
}

int func_525(int iParam0)
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
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
			if (!func_526(-1))
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

bool func_526(int iParam0)
{
	return func_527(123, iParam0);
}

int func_527(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_528()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

int func_529()
{
	var uVar0;
	
	func_536(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_535())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_534())
	{
		return 1;
	}
	if (func_533(159))
	{
		if (!func_532())
		{
			return 1;
		}
	}
	if (func_533(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_530() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_530()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_530()
{
	switch (func_83())
	{
		case 0:
			return func_531();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_531()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_532()
{
	return Global_2453009.f_698;
}

int func_533(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_534()
{
	return Global_2463497;
}

bool func_535()
{
	return Global_2453009.f_693;
}

void func_536(var uParam0)
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
					func_537(iVar0);
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

void func_537(int iParam0)
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
						if (func_538(iVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_538(int iParam0, var uParam1)
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

void func_539()
{
	wait(0);
}

void func_540()
{
	if (iLocal_104 != -1)
	{
		func_143(iLocal_104, 0);
	}
	func_542(&iLocal_311);
	if (unk_0x234B68AC2E35ED5A(iLocal_332, 1))
	{
		func_541(0f, 0f, 0f, func_368(19), 1);
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x443E2CA72E118E64())
		{
			if (unk_0xB02FAE47395D3028(Local_324.f_24))
			{
				unk_0x120FD3F0779D3C4C(Local_324.f_24);
			}
			Local_324.f_24 = -1;
		}
	}
	func_378();
	Global_2544210.f_1718 = 0;
	Global_2544210.f_1719 = 0;
	Global_2544210.f_1721 = 0;
	Global_2544210.f_1747 = 0;
	if (unk_0x234B68AC2E35ED5A(iLocal_332, 7))
	{
		func_261(6, 0);
	}
	func_399();
	if (unk_0x575B7C28D81C0B4D(Global_1669295))
	{
		unk_0x1AD5BCFEC31BB8D9(&Global_1669295);
	}
	func_254(0);
	if (unk_0x575B7C28D81C0B4D(Global_1669305))
	{
		unk_0x1AD5BCFEC31BB8D9(&Global_1669305);
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (iLocal_81)
		{
			func_174(1215605247, 0, 0);
			func_173(0);
		}
		if (iLocal_94)
		{
			func_173(0);
		}
	}
	unk_0x4BFE89D21F9885DC();
}

void func_541(struct<3> Param0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xAB6A270F84A8781E(uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_2544210.f_4032[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_31(Global_2544210.f_4032[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2544210.f_4032[iVar0 /*26*/] = 0;
					Global_2544210.f_4032[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2544210.f_4032[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_542(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_543(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_544(struct<21> Param0)
{
	func_550(func_551(Param0), Param0);
	func_547(0, -1, 0);
	unk_0xF784CE07ED70869A(&Local_324, 74);
	unk_0xC84352B5E80ABF68(&Local_331, 129);
	unk_0x87F1904AB605184A(0);
	if (!func_546())
	{
		return 0;
	}
	Global_2544210.f_1721 = 0;
	Global_2544210.f_4450 = 0;
	if (unk_0x443E2CA72E118E64())
	{
	}
	if (func_71(unk_0x1146A9AE09CE2B14(), 6))
	{
		func_261(6, 0);
	}
	func_545();
	return 1;
}

void func_545()
{
	var uVar0;
	
	uVar0 = func_80(1200, -1, 0);
	if (unk_0x234B68AC2E35ED5A(uVar0, 3))
	{
		unk_0x191DDA30577F440A(&iLocal_333, 1);
	}
	if (unk_0x234B68AC2E35ED5A(iVar0, 4))
	{
		unk_0x191DDA30577F440A(&iLocal_333, 2);
	}
	if (unk_0x234B68AC2E35ED5A(iVar0, 5))
	{
		unk_0x191DDA30577F440A(&iLocal_333, 3);
		unk_0x191DDA30577F440A(&iLocal_333, 0);
	}
}

int func_546()
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
		if (func_535())
		{
			return 0;
		}
		if (func_533(157))
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

int func_547(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_549();
			}
			else
			{
				return 0;
			}
		}
		if (!func_548())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_549();
					}
					else
					{
						return 0;
					}
				}
				if (func_535())
				{
					if (!bParam2)
					{
						func_549();
					}
					else
					{
						return 0;
					}
				}
				if (func_533(157))
				{
					if (!bParam2)
					{
						func_549();
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
					func_549();
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
				func_549();
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
			func_549();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_548()
{
	return Global_1312878;
}

void func_549()
{
	unk_0x4BFE89D21F9885DC();
}

void func_550(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x02BFF15CAA701972())
	{
		func_549();
	}
	unk_0x35BEDD7AFD26FCD5(uParam0, 0, Param1.f_16);
}

int func_551(int iParam0)
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
	switch (func_552(func_553(iParam0, 1)))
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

int func_552(int iParam0)
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

int func_553(int iParam0, bool bParam1)
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

