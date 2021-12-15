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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	struct<3> Local_83[5];
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93[5] = { 0, 0, 0, 0, 0 };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
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
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	iLocal_79 = 6;
	iLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	Local_56 = { ScriptParam_274.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x4B34601C5C56F3EE(82))
	{
		func_151(1);
	}
	uLocal_53 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
	iLocal_59 = 0;
	func_149(&Global_111566, 0);
	func_143();
	unk_0x3E397AA8C35A7536(1);
	if (func_142(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_37937)
	{
		wait(0);
	}
	if (!func_142(uLocal_58, 8))
	{
		if (!func_140(iLocal_64))
		{
			if (func_139(0, iLocal_63))
			{
				func_151(0);
			}
			else
			{
				func_151(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_139(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_142(uLocal_58, 8388608))
	{
		func_151(1);
	}
	if (func_142(uLocal_58, 524288) && (func_138() && !func_137()))
	{
		func_151(1);
	}
	if (unk_0xB4C854DD86E40FDA(unk_0x1307D54181723A6E()) > 1 && !func_142(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_136(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_135(10);
	}
	while (true)
	{
		if (!func_142(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x9CD4CBF2BBE10F00(ScriptParam_274.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					func_134(&uLocal_58, 268435456);
				}
			}
		}
		uLocal_53 = unk_0x407E03586628E458(unk_0x9E2D6C50374FCFA9());
		if (func_142(uLocal_58, 1048576))
		{
			if (unk_0x55B23FE400FCEA6B(uLocal_53, 0))
			{
				func_151(1);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_53) && !unk_0x55B23FE400FCEA6B(iLocal_53, 0))
		{
			Local_55 = { unk_0x6B62510F212526DC(iLocal_53, 1) };
			fLocal_57 = vdist2(Local_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_274.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = vdist2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_140(iLocal_64) || (func_142(uLocal_58, 16) && !func_142(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_130();
						func_135(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_136(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_135(10);
						}
						if ((Local_55.f_2 - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_128() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_135(3);
					}
					else
					{
						func_130();
					}
					break;
				
				case 3:
					if (unk_0xDB51AF48ABE62D4D())
					{
						func_151(1);
						return;
					}
					if (!func_140(iLocal_64))
					{
						if (!func_142(uLocal_58, 8))
						{
							bVar2 = true;
							if (unk_0x3C57C2F07FEE34D2(&(Global_99974.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_151(0);
								break;
							}
						}
					}
					if (!func_142(uLocal_58, 4))
					{
						func_117();
						func_134(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100008)
					{
						if (iLocal_69 != 263)
						{
							if (func_116(6) && !func_115(iLocal_69))
							{
							}
							else
							{
								func_136(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_135(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_142(uLocal_58, 64);
						func_149(&uLocal_58, 128);
						if (!func_114(3) && !Global_100008)
						{
							if (func_142(uLocal_58, 2097152))
							{
								if ((!func_142(uLocal_58, 1) || !unk_0xE5965CDF24F93A9F(func_113())) && !Global_100008)
								{
									func_135(10);
									break;
								}
							}
						}
						if (func_142(uLocal_58, 524288) && (func_138() && !func_137()))
						{
							func_151(1);
						}
						if (func_112())
						{
							func_151(1);
						}
						if ((!func_104(6) || Global_111962) || func_103())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							func_101(&uLocal_58, 128);
							bVar3 = false;
						}
						if (func_142(uLocal_58, 1))
						{
							if (!func_100())
							{
								func_101(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_99(1))
						{
							bVar3 = false;
						}
						if (Global_77852)
						{
							bVar3 = false;
						}
						if (func_98())
						{
							bVar3 = false;
						}
						if (unk_0x04458B4E5D9E466A())
						{
							bVar3 = false;
						}
						if (func_97() || func_96(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
						{
							bVar3 = false;
						}
						if (!unk_0x9895F96718388657(unk_0x9E2D6C50374FCFA9()))
						{
							bVar3 = false;
						}
						if (func_95(0) || func_94())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x8F41785F110B0DA0(iLocal_53, ScriptParam_274.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, 0, 1, iLocal_67))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x09FC827691DACE59();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									func_101(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!func_142(uLocal_58, 134217728))
										{
											func_93("MG_NA_TIME", iLocal_79, iLocal_80);
											func_101(&uLocal_58, 134217728);
										}
									}
									else
									{
										func_149(&uLocal_58, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								func_101(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!func_142(uLocal_58, 134217728))
									{
										func_93("MG_NA_TIME", iLocal_79, iLocal_80);
										func_101(&uLocal_58, 134217728);
									}
								}
								else
								{
									func_149(&uLocal_58, 134217728);
								}
							}
							if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x07899AAA5D680386(0, 51);
								if (func_92(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_91(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_101(&uLocal_58, 2048);
									}
									else if (!func_142(uLocal_58, 2048) || !unk_0xF847447D4467709D())
									{
										func_90(&iLocal_60);
										func_149(&uLocal_58, 2048);
									}
									if (func_88(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_90(&iLocal_60);
										func_149(&uLocal_58, 2048);
										unk_0xAF76A37C80EFD1D8(&Local_52);
										unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
										func_135(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_90(&iLocal_60);
									func_149(&uLocal_58, 2048);
									unk_0xAF76A37C80EFD1D8(&Local_52);
									unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 56);
									func_135(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_90(&iLocal_60);
								func_149(&uLocal_58, 2048);
								unk_0x3410421C60BF7143(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x07899AAA5D680386(0, 51);
					if (unk_0xF79F112CE5999680(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_90(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_142(uLocal_58, 1))
						{
							if (func_116(6) || func_116(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
							{
								unk_0x3D81769BEC61BFF8(&iLocal_54);
							}
							if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
							{
								unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
							}
							func_46();
							if (Global_43774)
							{
								func_37(unk_0xE2D3D51028F0428A());
							}
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 56);
							uLocal_50 = func_36();
							func_101(&uLocal_58, 2);
							func_135(6);
							func_32(&uLocal_71);
							if (iLocal_63 != -1)
							{
								func_31(iLocal_63);
								func_29(func_30(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_135(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_142(Global_111566, 262144))
					{
						func_149(&Global_111566, 262144);
						func_27();
					}
					if (func_142(uLocal_58, 2097152))
					{
						if (!func_114(3) && !unk_0x87C0DA419F19FF57(uLocal_50))
						{
							func_135(10);
						}
					}
					if (!unk_0x87C0DA419F19FF57(uLocal_50))
					{
						unk_0xA5C246361B61ED23(round((func_23(&uLocal_71) * 1000f)), iLocal_63, 0);
						func_22(&uLocal_71);
						func_149(&uLocal_58, 256);
						func_21();
						if (bVar0)
						{
							func_149(&uLocal_58, 2);
						}
						else if (func_142(uLocal_58, 2))
						{
							if (func_142(Global_111566, 0))
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_149(&uLocal_58, 2);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_149(&uLocal_58, 2);
							}
						}
						func_135(0);
						if (iLocal_63 != -1)
						{
							if (func_142(Global_111566, 0))
							{
								unk_0x0B33380E33B61778(func_30(iLocal_63), 0, Global_100011, 0);
								func_19(func_30(iLocal_63), 0, Global_100011, 1, 0);
							}
							else
							{
								unk_0x0B33380E33B61778(func_30(iLocal_63), 0, Global_100011, 0);
								func_19(func_30(iLocal_63), 0, Global_100011, 0, 0);
							}
						}
						func_5();
						func_149(&Global_111566, 0);
						if (func_142(uLocal_58, 16777216))
						{
							func_151(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_112915.f_9085)
							{
								if (!func_139(0, iLocal_63))
								{
									func_151(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_135(0);
					break;
				
				case 10:
					func_151(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_136(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_135(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_136(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_90(&iLocal_60);
					}
					if (!unk_0xACC32B78196FBC2A(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x3410421C60BF7143(1);
						}
					}
					func_135(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_140(iLocal_64) && func_139(0, iLocal_63))
									{
										func_143();
										if (iLocal_69 != 263)
										{
											func_136(iLocal_69, 1, 0);
										}
										func_135(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_136(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_135(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_143();
									if (iLocal_69 != 263)
									{
										func_136(iLocal_69, 1, 0);
									}
									func_135(0);
								}
							}
						}
						else
						{
							func_136(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_267.f_71));
	func_3(&(Local_267.f_77));
	func_3(&(Local_267.f_99));
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0xAFC1FBF3F6AE7B9A("amb@world_human_aa_smoke@male@idle_a");
	unk_0xAFC1FBF3F6AE7B9A("random@street_race");
	unk_0xAFC1FBF3F6AE7B9A("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xACC32B78196FBC2A(sVar0))
	{
		if (unk_0x1E63BE2394148DA0(sVar0))
		{
			if (unk_0x96A05000CCD43584(sVar0))
			{
				unk_0xA3D2C191DF3CB742(sVar0, 0);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xF1A23B343DFEDFD0((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_142(Global_112915.f_19016, 1))
	{
		func_149(&(Global_112915.f_19016), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_100013.f_8)
	{
		if (Global_100013.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100013.f_10 > 1)
	{
		return 0;
	}
	Global_100013.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_8()
{
	if (Global_112915.f_19016.f_18 < Global_112915.f_19016.f_19[iLocal_82] || Global_112915.f_19016.f_19[iLocal_82] == 0)
	{
		Global_112915.f_19016.f_19[iLocal_82] = Global_112915.f_19016.f_18;
		Global_112915.f_19016.f_18 = 999;
	}
	if (iLocal_82 == Global_112915.f_19016.f_1 || Global_112915.f_19016.f_1 == -1)
	{
		if (Global_112915.f_19016.f_1 != 5)
		{
			Global_112915.f_19016.f_1++;
			switch (Global_112915.f_19016.f_1)
			{
				case 1:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					break;
				
				case 2:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					break;
				
				case 3:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					break;
				
				case 4:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					break;
				
				case 5:
					func_136(70, 1, 0);
					func_17(70, 1);
					func_136(71, 1, 0);
					func_17(71, 1);
					func_136(72, 1, 0);
					func_17(72, 1);
					func_136(73, 1, 0);
					func_17(73, 1);
					func_136(74, 1, 0);
					func_17(74, 1);
					func_136(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_136(70, 1, 0);
			func_17(70, 1);
			func_136(71, 1, 0);
			func_17(71, 1);
			func_136(73, 1, 0);
			func_17(73, 1);
			func_136(74, 1, 0);
			func_17(74, 1);
			func_136(75, 1, 0);
			func_17(75, 1);
			func_136(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_112915.f_19016.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31881 == 1)
	{
		Global_31882 = 1;
	}
	Global_31881 = 1;
	unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31881 == 1)
	{
		Global_31882 = 1;
	}
	Global_31881 = 1;
	unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31881 == 1)
	{
		Global_31882 = 1;
	}
	Global_31881 = 1;
	unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112915.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112915.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112915.f_20410.f_145++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112915.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[0])
			{
				Global_112915.f_20410.f_146[0] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[1])
			{
				Global_112915.f_20410.f_146[1] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[2])
			{
				Global_112915.f_20410.f_146[2] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 20);
	}
	if (Global_31881 == 1)
	{
		Global_31882 = 1;
	}
	Global_31881 = 1;
	unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	unk_0xEC6D4F9C59CDA6F5();
	unk_0xA9FC42DEA687033D();
	switch (iLocal_82)
	{
		case 0:
			unk_0x13A2865660B9B033(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0x13A2865660B9B033(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x13A2865660B9B033(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x13A2865660B9B033(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x13A2865660B9B033(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xACC32B78196FBC2A(&Global_97044))
	{
		return;
	}
	if (unk_0x1C1342F0ADFEA3B3(sParam0, &Global_97044, 0, -1) != 0)
	{
		return;
	}
	unk_0xA77F683FA0E7B1F5(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94151);
	StringCopy(&Global_97044, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_42558)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_42557 = 0;
	Global_42559 = 0;
	Global_42596 = 15;
	Global_62687 = 0;
	Global_62688 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		unk_0x5F540C4C109AB569(StackVal, 0, 0, 0);
	}
	else if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x6E34665F75B2EE0A(0, &cVar0);
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_23(var uParam0)
{
	if (func_26(uParam0))
	{
		if (func_25(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_24(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_24(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_25(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

bool func_26(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xACC32B78196FBC2A(&Global_97044))
	{
		unk_0xA77F683FA0E7B1F5(&Global_97044, 0, 0, 0, 1, 0);
		StringCopy(&Global_97044, "", 64);
	}
	StringCopy(&Global_97044, sParam0, 64);
	unk_0xB85C479D5C3EA069(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		uVar0 = iParam0;
		unk_0x5F540C4C109AB569(8, &uVar0, 1, 1);
	}
	else if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x6E34665F75B2EE0A(8, &cVar1);
	}
}

void func_32(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_35(uParam0);
	}
	else
	{
		func_33(uParam0);
	}
}

void func_33(var uParam0)
{
	func_34(uParam0, 0f);
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(var uParam0)
{
	if (!func_26(uParam0))
	{
		func_33(uParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0x3410421C60BF7143(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_82;
	Var0.f_1 = { Local_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	unk_0x9DCF157443EA30D6("SwitchSceneNeutral", 0, 1);
	wait(400);
	iVar2 = start_new_script_with_args(&Local_51, &Var0, 18, iLocal_61);
	unk_0xD195D79715508EFA(&Local_51);
	return iVar2;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_43560[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43534[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43534[iParam0 /*5*/].f_1 == unk_0xE2D3D51028F0428A())
		{
			Global_43772 = 0;
		}
	}
	Global_43534[iParam0 /*5*/] = 13;
	Global_43534[iParam0 /*5*/].f_1 = 0;
	Global_43534[iParam0 /*5*/].f_2 = 0;
	Global_43534[iParam0 /*5*/].f_3 = 0;
	Global_43534[iParam0 /*5*/].f_4 = 0;
	Global_43532 = (Global_43532 - 1);
	if (Global_43532 < 0)
	{
		Global_43532 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43534[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_43641[iVar0 /*6*/] = iParam0;
	Global_43641[iVar0 /*6*/].f_1 = iParam1;
	Global_43641[iVar0 /*6*/].f_2 = iParam2;
	Global_43641[iVar0 /*6*/].f_3 = iParam3;
	Global_43641[iVar0 /*6*/].f_4 = iParam4;
	Global_43641[iVar0 /*6*/].f_5 = iParam5;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43641[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_43641[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_43641[iVar0 /*6*/])
			{
				if (iParam1 == Global_43641[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_43560[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_43560[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_8629[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8629[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8629[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8629[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8629[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8629[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xB0550BC91B0159D6(&Global_7824, 25);
	unk_0xCED9E32812D6C7C7(&Global_7825, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_49(0))
		{
			return 0;
		}
		Global_42560++;
		*iParam0 = Global_42560;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_42596 = iParam2;
		Global_42558 = *iParam0;
		Global_42559 = iParam4;
		Global_42557 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_42557 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42557)
			{
				if (Global_42563[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42558 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_42557 == 8)
		{
			return 0;
		}
		Global_42560++;
		*iParam0 = Global_42560;
		Global_42563[Global_42557 /*4*/] = Global_42560;
		Global_42563[Global_42557 /*4*/].f_1 = iParam1;
		Global_42563[Global_42557 /*4*/].f_2 = iParam2;
		Global_42563[Global_42557 /*4*/].f_3 = 0;
		Global_42557++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_42557 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_42557)
	{
		if (Global_42563[iVar0 /*4*/] == *uParam0)
		{
			Global_42563[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	float fVar0;
	
	fVar0 = vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_81);
	if (fVar0 < 62500f)
	{
		func_80();
		func_77();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_76();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_98)
	{
		if (func_52())
		{
			iLocal_98 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_46++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xE5965CDF24F93A9F(Local_267[iVar0 /*14*/]) || !unk_0xE5965CDF24F93A9F(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xE5965CDF24F93A9F(Local_267.f_83) || !unk_0xE5965CDF24F93A9F(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&uLocal_90))
	{
		func_35(&uLocal_90);
		return;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_95) && !unk_0x55B23FE400FCEA6B(iLocal_95, 0))
	{
		if (unk_0xB6F46ABD140050F1(iLocal_95))
		{
			return;
		}
	}
	if (func_23(&uLocal_90) >= 8f)
	{
		iVar0 = (unk_0x5853B15F78E1A265(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x55B23FE400FCEA6B(Local_267[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&uLocal_90);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					func_74();
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
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_73();
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
				func_66();
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
				if (func_65())
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
			if (func_64())
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
			func_63();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_62();
		func_57();
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
		func_74();
	}
	return 0;
}

void func_57()
{
	if (!func_58())
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

int func_58()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_61())
	{
		return 0;
	}
	if (func_59(unk_0x9E2D6C50374FCFA9()))
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

bool func_59(int iParam0)
{
	return func_60(iParam0, 20);
}

bool func_60(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_61()
{
	return -1;
}

void func_62()
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

void func_63()
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

int func_64()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()
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

void func_66()
{
	if (func_116(14))
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
		Global_19954 = func_67();
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

var func_67()
{
	func_68();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_71(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_70(unk_0xE2D3D51028F0428A());
			if (func_69(iVar0) && (!func_116(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_69(Global_112915.f_2363.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_73()
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

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
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

void func_76()
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0x55B23FE400FCEA6B(Local_267.f_83, 0))
	{
		iVar0 = unk_0x09FC827691DACE59();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		unk_0x56593357686570F4(Local_267.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_77()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x09FC827691DACE59();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!unk_0x55B23FE400FCEA6B(iLocal_95, 0) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		switch (iLocal_266)
		{
			case 0:
				if (vdist2(unk_0x6B62510F212526DC(iLocal_95, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 64f && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				unk_0xA888F8CC04F25CC8(&uVar1);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 0, 2);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
				unk_0xC963A45B50851768(uVar1);
				unk_0x8ACADA903FCAA42F(iLocal_95, uVar1);
				unk_0x7461D7C5BA953BC7(&uVar1);
				iLocal_266 = 2;
				break;
			
			case 2:
				if ((unk_0x174CED88B97C78D9(iLocal_95, 242628503) != 1 || unk_0x2E7F5417D4F4DD69(iLocal_95, unk_0xE2D3D51028F0428A(), 20f)) && !unk_0x2E5F8A288A954523())
				{
					unk_0x529D306014D3C29A(iLocal_95, unk_0xE2D3D51028F0428A(), -1);
					if (!iLocal_100)
					{
						func_78(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_78(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xB6F46ABD140050F1(iLocal_95))
				{
					func_33(&uLocal_87);
					unk_0x49D97B076E3590AC(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_266 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0x6B62510F212526DC(iLocal_95, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 225f)
				{
					unk_0xA888F8CC04F25CC8(&uVar2);
					unk_0x30E00B59448AB97E(0, Local_267.f_83.f_9, 1000);
					unk_0x49D97B076E3590AC(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uVar2);
					unk_0x8ACADA903FCAA42F(iLocal_95, uVar2);
					unk_0x7461D7C5BA953BC7(&uVar2);
					iLocal_266 = 0;
				}
				if (func_26(&uLocal_87))
				{
					if (func_23(&uLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (func_23(&uLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_78(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(iParam0, sParam1, sParam2, func_79(iParam3), 0);
}

int func_79(int iParam0)
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

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xE5965CDF24F93A9F(Local_267[iVar2 /*14*/].f_1) && unk_0xE5965CDF24F93A9F(Local_267[iVar2 /*14*/]))
		{
			if (func_85(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_267[iVar2 /*14*/].f_1, 1))
			{
				func_83();
				func_82(iLocal_69);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
			if (!unk_0xF68107C40359970C(Local_267[iVar2 /*14*/]))
			{
				if (func_26(&(Local_83[iVar2 /*3*/])))
				{
					if (func_23(&(Local_83[iVar2 /*3*/])) > uLocal_93[iVar2])
					{
						if (unk_0x55A0C756C4A8220C(Local_267[iVar2 /*14*/].f_1, 0) && unk_0xF6F5D18EF8EAB859(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x5853B15F78E1A265(250, 500);
							iVar1 = unk_0x5853B15F78E1A265(250, 500);
							unk_0xA888F8CC04F25CC8(&uVar3);
							unk_0xCD41D6F721CB9C3A(0, Local_267[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0xCD41D6F721CB9C3A(0, Local_267[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0xC963A45B50851768(uVar3);
							if (!unk_0xF68107C40359970C(Local_267[iVar2 /*14*/]))
							{
								unk_0x8ACADA903FCAA42F(Local_267[iVar2 /*14*/], uVar3);
							}
							unk_0x7461D7C5BA953BC7(&uVar3);
						}
						func_33(&(Local_83[iVar2 /*3*/]));
						uLocal_93[iVar2] = unk_0xC4EAB25A108C2429(0f, 3f);
					}
				}
				else
				{
					func_35(&(Local_83[iVar2 /*3*/]));
				}
			}
			if (!unk_0x55B23FE400FCEA6B(Local_267[iVar2 /*14*/], 0))
			{
				if ((unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), Local_267[iVar2 /*14*/]) && !unk_0x32DCDA1B2F8A0694(Local_267[iVar2 /*14*/])) && !unk_0x03454821A9ECF4AA(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					unk_0xA888F8CC04F25CC8(&uVar3);
					unk_0x30E00B59448AB97E(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x49D97B076E3590AC(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uVar3);
					unk_0x8ACADA903FCAA42F(Local_267[iVar2 /*14*/], uVar3);
					unk_0x7461D7C5BA953BC7(&uVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x32DCDA1B2F8A0694(Local_267[iVar2 /*14*/]) || unk_0x03454821A9ECF4AA(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (unk_0x32DCDA1B2F8A0694(Local_267[iVar2 /*14*/]) || unk_0x03454821A9ECF4AA(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					unk_0xA888F8CC04F25CC8(&uVar3);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1000);
					unk_0x49D97B076E3590AC(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x30E00B59448AB97E(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x49D97B076E3590AC(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uVar3);
					unk_0x8ACADA903FCAA42F(Local_267[iVar2 /*14*/], uVar3);
					unk_0x7461D7C5BA953BC7(&uVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xE5965CDF24F93A9F(Local_267.f_83.f_1) && unk_0xE5965CDF24F93A9F(Local_267.f_83))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_267.f_83.f_1, 0))
		{
			iLocal_54 = Local_267.f_83.f_1;
		}
		if (func_85(Local_267.f_83, 1, 0, 0, 0))
		{
			func_83();
			func_82(iLocal_69);
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
		}
		if (!unk_0xF68107C40359970C(Local_267.f_83))
		{
			if (func_26(&uLocal_84))
			{
				if (func_23(&uLocal_84) > fLocal_94)
				{
					if (unk_0x55A0C756C4A8220C(Local_267.f_83.f_1, 0) && unk_0xF6F5D18EF8EAB859(Local_267.f_83, Local_267.f_83.f_1, 0))
					{
						iVar0 = unk_0x5853B15F78E1A265(250, 500);
						iVar1 = unk_0x5853B15F78E1A265(250, 500);
						unk_0xA888F8CC04F25CC8(&uVar3);
						unk_0xCD41D6F721CB9C3A(0, Local_267.f_83.f_1, 1, iVar0);
						unk_0xCD41D6F721CB9C3A(0, Local_267.f_83.f_1, 31, iVar1);
						unk_0xC963A45B50851768(uVar3);
						if (!unk_0xF68107C40359970C(Local_267.f_83))
						{
							unk_0x8ACADA903FCAA42F(Local_267.f_83, uVar3);
						}
						unk_0x7461D7C5BA953BC7(&uVar3);
					}
					func_33(&uLocal_84);
					fLocal_94 = unk_0xC4EAB25A108C2429(0f, 3f);
				}
			}
			else
			{
				func_35(&uLocal_84);
			}
		}
		if (!unk_0x55B23FE400FCEA6B(Local_267.f_83, 0))
		{
			if ((unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), Local_267.f_83) && !unk_0x32DCDA1B2F8A0694(Local_267.f_83)) && !unk_0x03454821A9ECF4AA(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				unk_0xA888F8CC04F25CC8(&uVar3);
				unk_0x30E00B59448AB97E(0, Local_267.f_83.f_9, 1000);
				unk_0x49D97B076E3590AC(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uVar3);
				unk_0x8ACADA903FCAA42F(Local_267.f_83, uVar3);
				unk_0x7461D7C5BA953BC7(&uVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (unk_0x32DCDA1B2F8A0694(Local_267.f_83) || unk_0x03454821A9ECF4AA(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				unk_0xA888F8CC04F25CC8(&uVar3);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 1000);
				unk_0x49D97B076E3590AC(0, "gestures@m@standing@casual", func_81(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x30E00B59448AB97E(0, Local_267.f_83.f_9, 1000);
				unk_0x49D97B076E3590AC(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uVar3);
				unk_0x8ACADA903FCAA42F(Local_267.f_83, uVar3);
				unk_0x7461D7C5BA953BC7(&uVar3);
				iLocal_266 = 4;
				func_33(&uLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_81()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x5853B15F78E1A265(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_82(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_136(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_90(&iLocal_60);
		iLocal_59 = 9;
	}
}

void func_83()
{
	int iVar0[10];
	var uVar1;
	int iVar2;
	
	unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xE5965CDF24F93A9F(iVar0[iVar2]) && !unk_0xF68107C40359970C(iVar0[iVar2]))
		{
			if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
			{
				unk_0x7734082B0EDB0BE0(iVar0[iVar2], unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0xA888F8CC04F25CC8(&uVar1);
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), unk_0x5853B15F78E1A265(300, 900));
				unk_0xC1A74225341AA9FB(0, unk_0xE2D3D51028F0428A(), 0, 0);
				unk_0xC963A45B50851768(uVar1);
				unk_0x8ACADA903FCAA42F(iVar0[iVar2], uVar1);
				unk_0x7461D7C5BA953BC7(&uVar1);
			}
		}
		iVar2++;
	}
	switch (Global_112915.f_19016.f_1)
	{
		case 0:
			func_84(0);
			break;
		
		case 1:
			func_84(0);
			break;
		
		case 3:
			func_84(0);
			break;
		
		case 4:
			func_84(0);
			break;
		
		case 5:
			func_84(0);
			break;
		
		case 2:
			func_84(0);
			break;
	}
}

void func_84(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			Var1 = { unk_0x6B62510F212526DC(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0xCED7266BAB0BDC20(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x72F6AE51B7E34865(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
				{
					if (func_86(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
			{
				if (unk_0x0747E45CFF1F74AA(unk_0xB3FF0049C1FD38EC(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x51B334B227EC8042(iParam0))
			{
				return 1;
			}
			if (unk_0x5007A91D57C39FFC(iVar0, 4))
			{
				if (unk_0xE323E6755636A70E(iVar0))
				{
					if (unk_0x8F41785F110B0DA0(iParam0, unk_0x6B62510F212526DC(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x9AC74C7EF847A074(Var1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x863026E0C5C2E52B((Var1.x - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.x + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (unk_0x177106D5E97D1958(iParam0))
			{
				if (unk_0xBA67EB7A53262B5B(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x89D0E0233F6E59A7(-1, Var1, 25f) && !unk_0x89D0E0233F6E59A7(11, Var1, 25f)) && !unk_0x89D0E0233F6E59A7(13, Var1, 25f))
			{
				return 1;
			}
			unk_0xE68645525D451A8B(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_86(var uParam0, int iParam1)
{
	return func_87(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), uParam0, iParam1);
}

var func_87(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, uParam2);
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_95(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/] == 1 && Global_43328[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43328[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43328[iVar0 /*32*/].f_5 = 1;
			Global_43328[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43328[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43328[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
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
		if (Global_43328[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_89(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*iParam0 == -1)
		{
			func_90(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/] = 1;
			Global_43328[iVar0 /*32*/].f_1 = Global_43529;
			Global_43529++;
			Global_43328[iVar0 /*32*/].f_4 = 0;
			Global_43328[iVar0 /*32*/].f_29 = 0;
			Global_43328[iVar0 /*32*/].f_5 = 0;
			Global_43328[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43328[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43328[iVar0 /*32*/].f_6 = iParam3;
			Global_43328[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43328[iVar0 /*32*/].f_7 = 0;
			Global_43328[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43328[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43328[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43328[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43328[iVar0 /*32*/].f_12 = 0;
				Global_43328[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43328[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_92(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_93(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x89B545A74F93B1DD(0, 0, 1, -1);
}

var func_94()
{
	return Global_75021;
}

int func_95(int iParam0)
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

bool func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_98()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

int func_100()
{
	return 1;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_103()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return ((((bVar1 && unk_0x4C1B8C5717647539(0, 69)) || (bVar1 && unk_0x4C1B8C5717647539(0, 70))) || (bVar1 && unk_0x4C1B8C5717647539(0, 68))) || unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()));
	}
	return (((((bVar1 && unk_0x4C1B8C5717647539(0, 24)) || (bVar1 && unk_0x4C1B8C5717647539(0, 25))) || (bVar1 && unk_0x4C1B8C5717647539(0, 47))) || unk_0x1E6ABFB33BDD2A4C(unk_0xE2D3D51028F0428A())) || unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()));
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_67();
				if (!func_69(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_111962) || Global_31508) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_111()) || Global_31508) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_111962) || Global_31508) || func_110()) || func_96(8, -1)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_111()) || Global_111962) || Global_31508) || func_110()) || func_96(8, -1)) || func_109()) || func_108()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_111() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_96(8, -1)) || func_98()) || func_106()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_96(8, -1) || func_109()) || func_108()) || func_106()) || func_105())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_111()) || Global_31508) || func_110()) || func_96(8, -1)) || func_108()) || func_107()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_111()) || func_108()) || Global_111962) || Global_31508) || func_110()) || Global_43774) || func_96(8, -1)) || func_107()) || func_106()) || func_98()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_111()) || Global_111962) || Global_31508) || func_110()) || func_96(8, -1)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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

var func_105()
{
	return Global_100013.f_1;
}

int func_106()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_107()
{
	if (Global_78112)
	{
		return 1;
	}
	else if (Global_62684 && !Global_62690)
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return Global_100026.f_376 > 0;
}

bool func_109()
{
	return Global_100026.f_375 > 0;
}

var func_110()
{
	return Global_1575046;
}

int func_111()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_112()
{
	if (unk_0xB4C854DD86E40FDA(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_113()
{
	return Global_95806;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_116(6) || func_116(7))
			{
				return 1;
			}
			else
			{
				return func_114(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_140(5))
			{
				if (func_104(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x12DD4A0B247D9B4D(Global_31884[iVar0 /*23*/].f_19);
}

bool func_116(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_117()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x09FC827691DACE59();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_127();
		func_126();
		switch (iLocal_82)
		{
			case 0:
				func_125(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_125(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_125(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_125(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_125(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_124(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_125(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_125(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_125(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_125(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_124(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_125(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_125(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_125(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_125(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_125(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_124(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_125(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_125(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_125(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_125(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_124(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_125(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_125(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_125(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_125(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_125(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_124(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_125(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_125(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_125(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_125(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_125(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_124(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xACC32B78196FBC2A(sVar1))
		{
			if (unk_0x1E63BE2394148DA0(sVar1))
			{
				if (!unk_0x96A05000CCD43584(sVar1))
				{
					unk_0xA3D2C191DF3CB742(sVar1, 1);
				}
			}
		}
	}
	func_118();
}

void func_118()
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267)
		{
			if (!func_123(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = unk_0xBA715A7BEBA5A1F9(func_122(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, 1, 1, 0);
				unk_0x9F65B3BAFA302A65(Local_267[iVar5 /*14*/].f_1, 1084227584);
				unk_0x05EAB38F5AC8DA1D(Local_267[iVar5 /*14*/].f_1, 1);
				if (func_123(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = unk_0x487C17B41938052C(Local_267[iVar5 /*14*/].f_1, 4, func_121(), -1, 1, 1);
					unk_0x371D594409A68A18(Local_267[iVar5 /*14*/].f_1, 1, 0, 0);
				}
				else
				{
					Local_267[iVar5 /*14*/] = unk_0xA8D58C3AADA2C41C(4, func_121(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = sVar3;
					Local_267[iVar5 /*14*/].f_13 = sVar4;
					unk_0xA888F8CC04F25CC8(&uVar0);
					unk_0x19C58BA8A663B64B(0, unk_0x5853B15F78E1A265(100, 500));
					unk_0x49D97B076E3590AC(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0xC4EAB25A108C2429(0, 1065353216), 0, 0, 0);
					unk_0xC963A45B50851768(uVar0);
					unk_0x8ACADA903FCAA42F(Local_267[iVar5 /*14*/], uVar0);
					unk_0x7461D7C5BA953BC7(&uVar0);
				}
				unk_0xA84812D8D6EE8D32(Local_267[iVar5 /*14*/], 1);
				unk_0x792D27BEE2A1111B(Local_267[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = unk_0xBA715A7BEBA5A1F9(func_122(1), Local_267.f_83.f_2, Local_267.f_83.f_5, 1, 1, 0);
		unk_0x9F65B3BAFA302A65(Local_267.f_83.f_1, 1084227584);
		unk_0x05EAB38F5AC8DA1D(Local_267.f_83.f_1, 1);
		if (func_123(Local_267.f_83.f_6))
		{
			Local_267.f_83 = unk_0x487C17B41938052C(Local_267.f_83.f_1, 4, func_121(), -1, 1, 1);
			unk_0x371D594409A68A18(Local_267.f_83.f_1, 1, 0, 0);
		}
		else
		{
			Local_267.f_83 = unk_0xA8D58C3AADA2C41C(4, func_121(), Local_267.f_83.f_6, Local_267.f_83.f_9, 1, 1);
			iVar1 = (unk_0x5853B15F78E1A265(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = sVar4;
			unk_0xA888F8CC04F25CC8(&uVar0);
			unk_0x83F5BCFFFBA26699(0, func_120((unk_0x5853B15F78E1A265(0, 65535) % 1000), 1, 1000));
			unk_0x49D97B076E3590AC(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0xC4EAB25A108C2429(0, 1065353216), 0, 0, 0);
			unk_0xC963A45B50851768(uVar0);
			unk_0x8ACADA903FCAA42F(Local_267.f_83, uVar0);
			unk_0x7461D7C5BA953BC7(&uVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_83;
	if (!unk_0x55B23FE400FCEA6B(Local_267[0 /*14*/], 0))
	{
		func_119(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x55B23FE400FCEA6B(Local_267[1 /*14*/], 0))
	{
		func_119(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x55B23FE400FCEA6B(Local_267[2 /*14*/], 0))
	{
		func_119(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&uLocal_90))
	{
		func_35(&uLocal_90);
	}
	else
	{
		func_33(&uLocal_90);
	}
}

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(uParam2))
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

int func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_121()
{
	return joaat("a_m_y_motox_01");
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (unk_0x2886B1BFE0896A9A(Local_267.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x5853B15F78E1A265(0, iVar0);
	if (Local_267.f_71[iVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[iVar0];
}

int func_123(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_124(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	if (func_123(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { Param0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { Param2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_125(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		if (!bVar1 && func_123(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { Param0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { Param2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_127()
{
	switch (iLocal_82)
	{
		case 0:
			unk_0x208B14CA225DC5A0(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			unk_0x02B222EADC9DC566(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0, 0, 0);
			unk_0x247F21B1803F0EC4("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0x208B14CA225DC5A0(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x208B14CA225DC5A0(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			unk_0x17B104183E0F2C46(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0, 0, 0);
			unk_0x208B14CA225DC5A0(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			unk_0x247F21B1803F0EC4("WORLD_HUMAN_HIKER", 0);
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_EMPTY", 0);
			unk_0x247F21B1803F0EC4("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_EMPTY", 1);
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0x208B14CA225DC5A0(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			unk_0x17B104183E0F2C46(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xA3D2C191DF3CB742("QUARRY", 0);
			unk_0x208B14CA225DC5A0(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			unk_0x17B104183E0F2C46(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0, 0, 0);
			break;
	}
}

var func_128()
{
	return ((((((((func_129(&(Local_267.f_71)) && func_129(&(Local_267.f_77))) && func_129(&(Local_267.f_99))) && unk_0x6F940C2636C076AD("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x6F940C2636C076AD("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x6F940C2636C076AD("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x6F940C2636C076AD("amb@world_human_aa_smoke@male@idle_a")) && unk_0x6F940C2636C076AD("random@street_race")) && unk_0x6F940C2636C076AD("gestures@m@standing@casual"));
}

int func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x0152AA00FA3130F1((*uParam0)[iVar0]))
			{
				if (!unk_0x0152AA00FA3130F1((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_130()
{
	char cVar0[64];
	
	func_132(&(Local_267.f_77), joaat("a_m_y_motox_01"));
	func_132(&(Local_267.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0:
			func_132(&(Local_267.f_71), joaat("sanchez"));
			func_132(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_132(&(Local_267.f_71), joaat("mesa"));
			func_132(&(Local_267.f_71), joaat("bjxl"));
			func_132(&(Local_267.f_71), joaat("patriot"));
			func_132(&(Local_267.f_71), joaat("dubsta2"));
			func_132(&(Local_267.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_132(&(Local_267.f_71), joaat("sanchez"));
			func_132(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_132(&(Local_267.f_71), joaat("sanchez"));
			func_132(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_132(&(Local_267.f_71), joaat("mesa"));
			func_132(&(Local_267.f_71), joaat("bfinjection"));
			func_132(&(Local_267.f_71), joaat("bjxl"));
			func_132(&(Local_267.f_71), joaat("sadler"));
			func_132(&(Local_267.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_132(&(Local_267.f_71), joaat("sanchez"));
			func_132(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	unk_0x8FB472886552D737("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x8FB472886552D737("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x8FB472886552D737("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x8FB472886552D737("amb@world_human_aa_smoke@male@idle_a");
	unk_0x8FB472886552D737("random@street_race");
	unk_0x8FB472886552D737("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		unk_0xD69A0C3662175E68(joaat("prop_fncwood_14c"));
		unk_0xD69A0C3662175E68(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0xB018BAA4ED9AA217(1, &cVar0);
	func_131(&(Local_267.f_77));
	func_131(&(Local_267.f_71));
	func_131(&(Local_267.f_99));
}

void func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xD69A0C3662175E68((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_133(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_136(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 18);
		if (Global_31881 == 1)
		{
			Global_31882 = 1;
		}
		Global_31881 = 1;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 0);
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 15);
		unk_0xCED9E32812D6C7C7(&(Global_31884[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 0);
		unk_0xB0550BC91B0159D6(&(Global_31884[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x12DD4A0B247D9B4D(Global_31884[iVar0 /*23*/].f_19))
		{
			unk_0xE2B3315F89FB203D(1);
			unk_0xFFD8EB5462B07B59(&(Global_31884[iVar0 /*23*/].f_19));
			unk_0xE2B3315F89FB203D(0);
		}
	}
}

int func_137()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_138()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xE2D0C323A1AE5D85(Global_112915.f_9085.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_42596);
}

int func_141(int iParam0, int iParam1)
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

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143()
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	unk_0x3E397AA8C35A7536(1);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	func_101(&uLocal_58, 4194304);
	iLocal_61 = 44500;
	iLocal_54 = 0;
	iLocal_79 = 0;
	iLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_147(Local_56, &Local_81);
	iLocal_69 = func_146(iLocal_82);
	fLocal_66 = (to_float(func_145(iLocal_69)) + 5f);
	if (func_139(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		func_82(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_112915.f_19016.f_1)
	{
		if (func_115(func_146(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		func_82(iLocal_69);
	}
	if (!func_115(func_146(iLocal_82)) && unk_0xE9E8955A780DDA01())
	{
		if (iLocal_69 != 263)
		{
			if (func_144(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		func_82(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		iLocal_79 = 20;
		iLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		sLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M";
	}
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 15);
	}
	return unk_0xE2D0C323A1AE5D85(Global_31884[iVar0 /*23*/].f_11, 0);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_147(struct<3> Param0, var uParam1)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_148(0) };
	Var1[1 /*3*/] = { func_148(1) };
	Var1[3 /*3*/] = { func_148(3) };
	Var1[4 /*3*/] = { func_148(4) };
	Var1[5 /*3*/] = { func_148(5) };
	Var1[2 /*3*/] = { func_148(2) };
	Var1[6 /*3*/] = { func_148(6) };
	fVar2 = vdist2(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = vdist2(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_148(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_149(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

void func_150(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_136(iLocal_69, 0, 0);
		}
	}
	func_90(&iLocal_60);
	if (func_142(uLocal_58, 2))
	{
		func_5();
		func_149(&uLocal_58, 2);
		func_20(&iLocal_62);
	}
	iLocal_62 = -1;
	func_152();
	unk_0xAFBDF6A5E54114C1();
}

void func_152()
{
	func_149(&uLocal_58, 4);
	func_153();
	if (unk_0x87C0DA419F19FF57(uLocal_50))
	{
		unk_0xD4798E4F64B31C25(uLocal_50, 3);
	}
	if (!unk_0xE8F6C1F695B25B91(&Local_52))
	{
		if (unk_0xEE91150B7F06C500(&Local_52) != 0)
		{
			unk_0xD195D79715508EFA(&Local_52);
		}
	}
}

void func_153()
{
}

