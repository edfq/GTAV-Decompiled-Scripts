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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_53[12];
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_81 = 16;
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
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	struct<3> Local_248 = { 0, 0, 0 } ;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_263[3] = { 0, 0, 0 };
	var uLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
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
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<3> Local_305 = { 0, 0, 0 } ;
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_266 = 0f;
	bLocal_267 = true;
	Local_305 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_89(0);
	}
	uLocal_247 = unk_0xE2D3D51028F0428A();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xF01AD4AF166855D2(unk_0x9E2D6C50374FCFA9());
	}
	while (true)
	{
		if (unk_0x55B23FE400FCEA6B(uLocal_247, 0))
		{
			func_89(0);
		}
		func_88();
		Local_248 = { unk_0x6B62510F212526DC(iLocal_247, 1) };
		switch (iLocal_246)
		{
			case 0:
				func_86();
				iLocal_246 = 1;
				break;
			
			case 1:
				if (!Global_31514)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_246 = 2;
				}
				break;
			
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_246 = 3;
				}
				break;
			
			case 3:
				func_70();
				wait(0);
				func_69();
				wait(0);
				func_66();
				func_65();
				iLocal_246 = 4;
				break;
			
			case 4:
				if (!Global_31514)
				{
					if (Global_96902)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_89(1);
				}
				break;
		}
		wait(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_3()
{
	if (Global_111860)
	{
		return 1;
	}
	if (!func_2(14) && unk_0xB4C854DD86E40FDA(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[0] = 1;
				}
			}
			else
			{
				iLocal_59[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[1] = 1;
				}
			}
			else
			{
				iLocal_59[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[2] = 1;
				}
			}
			else
			{
				iLocal_59[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[3] = 1;
				}
			}
			else
			{
				iLocal_59[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[4] = 1;
				}
			}
			else
			{
				iLocal_59[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[5] = 1;
				}
			}
			else
			{
				iLocal_59[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[6] = 1;
				}
			}
			else
			{
				iLocal_59[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[7] = 1;
				}
			}
			else
			{
				iLocal_59[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[8] = 1;
				}
			}
			else
			{
				iLocal_59[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[9] = 1;
				}
			}
			else
			{
				iLocal_59[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	struct<3> Var0;
	
	switch (iLocal_50)
	{
		case 0:
			unk_0xD69A0C3662175E68(joaat("police3"));
			unk_0xD69A0C3662175E68(joaat("s_m_y_cop_01"));
			if (unk_0x0152AA00FA3130F1(joaat("police3")) && unk_0x0152AA00FA3130F1(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_66 = unk_0xBA715A7BEBA5A1F9(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1, 0);
			iLocal_68 = unk_0x487C17B41938052C(iLocal_66, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		
		case 2:
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A())))
			{
				unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!unk_0x55B23FE400FCEA6B(iLocal_68, 0))
				{
					unk_0xC1A74225341AA9FB(iLocal_68, unk_0xE2D3D51028F0428A(), 0, 16);
				}
				if (!func_14(&uLocal_72))
				{
					func_11(&uLocal_72);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&uLocal_72))
			{
				if (func_8(&uLocal_72) > 15f)
				{
					iLocal_67 = unk_0xBA715A7BEBA5A1F9(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1, 0);
					iLocal_69 = unk_0x487C17B41938052C(iLocal_67, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_26(&iLocal_69);
					unk_0xC1A74225341AA9FB(iLocal_69, unk_0xE2D3D51028F0428A(), 0, 16);
					iLocal_50++;
				}
				else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_66))
	{
		unk_0xD59CC8123FD1A789(&iLocal_66);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_68))
	{
		unk_0x05CB75C0837196F9(&iLocal_68);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_67))
	{
		unk_0xD59CC8123FD1A789(&iLocal_67);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_69))
	{
		unk_0x05CB75C0837196F9(&iLocal_69);
	}
}

int func_7(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (vdist2(Param0, Param1) < (fParam2 * fParam2))
	{
		if (((unk_0xE5965CDF24F93A9F(iLocal_66) && unk_0xE5965CDF24F93A9F(iLocal_68)) && unk_0xE5965CDF24F93A9F(iLocal_67)) && unk_0xE5965CDF24F93A9F(iLocal_69))
		{
			if (unk_0x4D21C9FB671ED18F(iLocal_66) || !unk_0xBC7D3EDF3455BC35(iLocal_66))
			{
				if (unk_0x4D21C9FB671ED18F(iLocal_68) || !unk_0xBC7D3EDF3455BC35(iLocal_68))
				{
					if (unk_0x4D21C9FB671ED18F(iLocal_67) || !unk_0xBC7D3EDF3455BC35(iLocal_67))
					{
						if (unk_0x4D21C9FB671ED18F(iLocal_69) || !unk_0xBC7D3EDF3455BC35(iLocal_69))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (vdist2(Param0, Param1) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

void func_11(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

int func_15(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x5F8653E60ED2288E(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	if (!unk_0x55B23FE400FCEA6B(iVar0, 0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (iParam7 && unk_0x0747E45CFF1F74AA(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x0CF63873D754B965(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x0CF63873D754B965(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		uVar0 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(uVar0, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(uVar1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (unk_0x177106D5E97D1958(iParam0))
			{
				if (unk_0xBA67EB7A53262B5B(iParam0) == unk_0xE2D3D51028F0428A())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x8F41785F110B0DA0(iParam0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x51223AB40E2F620E(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x06FF19E64D0C2827(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE573ACA59D8C5C18(iParam0))
		{
			return 1;
		}
	}
	if (func_20(unk_0xE2D3D51028F0428A(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x32DCDA1B2F8A0694(iParam0) && func_18(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), unk_0xB3FF0049C1FD38EC(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iParam0))
		{
			return 1;
		}
		if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam1, unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_18(int iParam0, int iParam1)
{
	return func_19(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), iParam0, iParam1);
}

float func_19(int iParam0, int iParam1, int iParam2)
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
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xE323E6755636A70E(iParam0))
		{
			if (vdist(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(iParam1, 1)) < 2.5f)
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x5007A91D57C39FFC(uParam0, 4))
	{
		if (unk_0xE323E6755636A70E(uParam0) && !unk_0x807D601FA146717A(iParam0))
		{
			if (unk_0x8F41785F110B0DA0(uParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	if (unk_0x9AC74C7EF847A074(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x81C70E8A536AAC9E(Var0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x5007A91D57C39FFC(uParam0, 2))
	{
		if (unk_0xE323E6755636A70E(uParam0))
		{
			if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0x28AA31872A651BC7(iParam1), 0))
			{
				iVar1 = unk_0xB3FF0049C1FD38EC(unk_0x28AA31872A651BC7(iParam1), 0);
			}
			if (unk_0x3DA4842FA4407BE2(iParam0) || func_23(iVar1))
			{
				if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x863026E0C5C2E52B((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xAB793EA186AB8DAA(iParam0, -1, 0) != 0)
			{
				if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_19(unk_0xE2D3D51028F0428A(), iParam0, 1) < 40f)
						{
							if (unk_0xFD48978E4E1BAA06(unk_0x9E2D6C50374FCFA9(), &uVar1))
							{
								if ((unk_0x04D9F44466CBF3CA(uVar1) && unk_0x31EB55FAEEE9C0F5(uVar1) == iParam0) || (unk_0x9044EDB8A7BF67B4(uVar1) && unk_0x28AA31872A651BC7(uVar1) == unk_0xAB793EA186AB8DAA(iParam0, -1, 0)))
								{
									if ((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && unk_0x4C1B8C5717647539(0, 24)) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x4C1B8C5717647539(0, 69)))
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
	return 0;
}

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
		{
			if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x320D1840B6DAA1CC();
						}
						else if ((unk_0x320D1840B6DAA1CC() - uParam1->f_1) > uParam1->f_3)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0x9521FB98DB6DDF50(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0x50274A7EACA3133A(*iParam0, 1);
	unk_0xBC12D08EE7559CCD(*iParam0, 13, 1);
	unk_0xBC12D08EE7559CCD(*iParam0, 0, 1);
	unk_0x7DCB4594ACF18DA7(*iParam0, 1);
	unk_0x71B502FC2E129665(*iParam0, 1);
	unk_0x98F7E0916B6B5A0B(*iParam0, 0f);
	unk_0xABC2CA6F28903308(*iParam0, 1);
	unk_0x348A212511C78DBF(*iParam0, 100);
	unk_0x3DAB02AAC9E9EC02(*iParam0, 2);
	unk_0xBC12D08EE7559CCD(*iParam0, 23, 0);
	unk_0xE014FF3C785EEFB5(*iParam0, 1000f);
	unk_0xBC12D08EE7559CCD(*iParam0, 1, 1);
}

void func_27()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bLocal_294)
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_289, 0))
		{
			if (!unk_0xE896049AD1887FF0(iLocal_289))
			{
				unk_0x2F4DB11A0DB3685A(iLocal_289, 101, "PrisonHeli", 1);
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_290, 0))
			{
				Var0 = { unk_0xCACAD935C0BEE14F(iLocal_290, 0f, 4f, -2f) };
				unk_0x7D49955A299139E9(iLocal_290, Var0);
			}
			if (bLocal_292)
			{
				if (!func_28())
				{
					bLocal_292 = false;
					unk_0xA132A7A6A765A696(iLocal_289, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_292 = true;
				unk_0xA132A7A6A765A696(iLocal_289, 1, 0);
			}
			if (bLocal_292)
			{
				Var1 = { unk_0x6B62510F212526DC(iLocal_289, 1) };
				if (vdist2(Local_248, Var1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 1;
					}
				}
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uLocal_291))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_291);
		}
	}
}

int func_28()
{
	if (unk_0x09FC827691DACE59() >= 20 || unk_0x09FC827691DACE59() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_307.f_18[0])
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
		if (!bLocal_58)
		{
			if (vdist2(Var1, Local_305) < 5625f)
			{
				iLocal_306 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xF68107C40359970C(Local_307.f_27[iVar0]))
		{
			if (!Local_307.f_18[iVar0])
			{
				if (func_16(Local_307.f_27[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306)
				{
					unk_0xC1A74225341AA9FB(Local_307.f_27[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
					Local_307.f_18[iVar0] = 1;
				}
			}
			if (!Local_307.f_18[iVar0])
			{
				if (!unk_0xB4AE2A423A4176CE(Local_307.f_27[iVar0]))
				{
					unk_0x4218764824F31173(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(Local_307.f_36[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(Local_307.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE5965CDF24F93A9F(Local_307.f_31[iVar0]))
		{
			if (unk_0xF68107C40359970C(Local_307.f_31[iVar0]))
			{
				if (unk_0x12DD4A0B247D9B4D(Local_307.f_40[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(Local_307.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_22[0])
	{
		if (!unk_0xF68107C40359970C(Local_307.f_31[0]))
		{
			if ((func_16(Local_307.f_31[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0x03A927199A2DFE46(Local_307.f_31[0]);
				unk_0xC1A74225341AA9FB(Local_307.f_31[0], unk_0xE2D3D51028F0428A(), 0, 16);
				Local_307.f_22[0] = 1;
			}
		}
	}
	if (!Local_307.f_22[1])
	{
		if (!unk_0xF68107C40359970C(Local_307.f_31[1]))
		{
			if ((func_16(Local_307.f_31[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0x03A927199A2DFE46(Local_307.f_31[1]);
				unk_0xC1A74225341AA9FB(Local_307.f_31[1], unk_0xE2D3D51028F0428A(), 0, 16);
				Local_307.f_22[1] = 1;
			}
		}
	}
	if (!Local_307.f_22[2])
	{
		if (!unk_0xF68107C40359970C(Local_307.f_31[2]))
		{
			if ((func_16(Local_307.f_31[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0x03A927199A2DFE46(Local_307.f_31[2]);
				unk_0xC1A74225341AA9FB(Local_307.f_31[2], unk_0xE2D3D51028F0428A(), 0, 16);
				Local_307.f_22[2] = 1;
			}
		}
	}
	if (!Local_307.f_22[3])
	{
		if (!unk_0xF68107C40359970C(Local_307.f_31[3]))
		{
			if ((func_16(Local_307.f_31[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0x03A927199A2DFE46(Local_307.f_31[3]);
				unk_0xC1A74225341AA9FB(Local_307.f_31[3], unk_0xE2D3D51028F0428A(), 0, 16);
				Local_307.f_22[3] = 1;
			}
		}
	}
	if (!unk_0xF68107C40359970C(Local_307.f_27[1]))
	{
		if (unk_0xB4AE2A423A4176CE(Local_307.f_27[1]))
		{
			if (!Local_307.f_22[0])
			{
				if (!unk_0xF68107C40359970C(Local_307.f_31[0]))
				{
					unk_0x6FCE069E4940878C(Local_307.f_31[0], Local_307.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[1])
			{
				if (!unk_0xF68107C40359970C(Local_307.f_31[1]))
				{
					unk_0x6FCE069E4940878C(Local_307.f_31[1], Local_307.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0xF68107C40359970C(Local_307.f_27[2]))
	{
		if (unk_0xB4AE2A423A4176CE(Local_307.f_27[2]))
		{
			if (!Local_307.f_22[2])
			{
				if (!unk_0xF68107C40359970C(Local_307.f_31[2]))
				{
					unk_0x6FCE069E4940878C(Local_307.f_31[2], Local_307.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[3])
			{
				if (!unk_0xF68107C40359970C(Local_307.f_31[3]))
				{
					unk_0x6FCE069E4940878C(Local_307.f_31[3], Local_307.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_269++;
	if (iLocal_269 >= 30)
	{
		if (!bLocal_58)
		{
			if (func_15(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0xE5965CDF24F93A9F(Local_252.f_64[iVar0]) && !unk_0xF68107C40359970C(Local_252.f_64[iVar0]))
					{
						if (unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) != -1)
						{
							if (unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 1 || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
							{
								unk_0x348A212511C78DBF(Local_252.f_64[iVar0], 10);
								iLocal_268 = 1;
							}
						}
						else if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
						{
							unk_0x348A212511C78DBF(Local_252.f_64[iVar0], 10);
							iLocal_268 = 1;
						}
						else
						{
							unk_0x348A212511C78DBF(Local_252.f_64[iVar0], 100);
							iLocal_268 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0;
			}
		}
		iLocal_269 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE5965CDF24F93A9F(Local_252.f_64[iVar0]) && !unk_0xF68107C40359970C(Local_252.f_64[iVar0]))
		{
			if (unk_0x37BBF9ACD752871A(unk_0xB6BA8B8E3D0B41C6(), 0))
			{
				unk_0xEC1FA12F2050BD84(unk_0x9E2D6C50374FCFA9());
			}
			if ((((func_16(Local_252.f_64[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || unk_0x9AC74C7EF847A074(Local_252[iVar0 /*3*/], 20f, 1)) || unk_0x42B9E261D7C3EBBF(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				if (!unk_0xB4AE2A423A4176CE(Local_252.f_64[iVar0]))
				{
					unk_0x4218764824F31173(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
					Local_252.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(Local_252.f_75[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(Local_252.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0xE5965CDF24F93A9F(uLocal_264[iVar0]) && !unk_0x55B23FE400FCEA6B(uLocal_264[iVar0], 0)) && unk_0xE5965CDF24F93A9F(uLocal_263[iVar0])) && !unk_0x55B23FE400FCEA6B(uLocal_263[iVar0], 0))
		{
			Var1 = { unk_0xCACAD935C0BEE14F(uLocal_264[iVar0], 0f, 3.5f, -2f) };
			unk_0x7D49955A299139E9(uLocal_264[iVar0], Var1);
			unk_0x371D594409A68A18(uLocal_263[iVar0], 0, 0, 0);
			if (iLocal_265[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x55B23FE400FCEA6B(uLocal_263[iVar0], 0))
					{
						iLocal_265[iVar0] = 0;
						unk_0xA132A7A6A765A696(uLocal_263[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x55B23FE400FCEA6B(uLocal_263[iVar0], 0))
				{
					iLocal_265[iVar0] = 1;
					unk_0xA132A7A6A765A696(uLocal_263[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = false;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_263[0]))
	{
		unk_0xBBF86885619695CE(uLocal_263[0], (53f + fLocal_266));
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_263[1]))
	{
		unk_0xBBF86885619695CE(uLocal_263[1], (13f + fLocal_266));
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_263[2]))
	{
		unk_0xBBF86885619695CE(uLocal_263[2], (250f + fLocal_266));
	}
}

void func_31(int iParam0)
{
	if (!Local_252.f_53[iParam0])
	{
		unk_0x913E191F1F726271(Local_252.f_64[iParam0], unk_0xE2D3D51028F0428A(), -1, 0);
		unk_0xE014FF3C785EEFB5(Local_252.f_64[iParam0], 1000f);
		unk_0x41FBE02637A70478(Local_252.f_64[iParam0]);
		Local_252.f_53[iParam0] = 1;
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
		{
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 3, 0);
			unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
		}
	}
}

int func_32(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(*uParam0, 1) };
	}
	if (vdist2(Var0, Var1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) >= 2 || func_15(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 4, 150, 0))
		{
			if (unk_0x3E3727CDACEE36AC("PRISON_ALARMS"))
			{
				unk_0x0EB18A2EDD6957A4("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0x837739686F969991("PRISON_ALARMS", 0);
		}
	}
}

void func_34()
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			func_63(&Local_70, 2);
		}
		else
		{
			func_61(&Local_70, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_60(4, 1);
					if (!func_14(&uLocal_78))
					{
						func_11(&uLocal_78);
					}
					if (!bLocal_60)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_68) && !unk_0x55B23FE400FCEA6B(iLocal_68, 0))
						{
							func_59(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
							if (func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_58 = true;
								bLocal_60 = true;
							}
						}
					}
				}
				else
				{
					func_60(4, 0);
					if (func_14(&uLocal_78))
					{
						func_12(&uLocal_78);
					}
					bLocal_58 = false;
				}
			}
			else
			{
				func_60(4, 0);
				if (func_14(&uLocal_78))
				{
					func_12(&uLocal_78);
				}
				bLocal_58 = false;
			}
			if (bLocal_58)
			{
				if (func_14(&uLocal_78))
				{
					if (func_8(&uLocal_78) > 10f)
					{
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < 4)
						{
							unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 4, 0);
							unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
							bLocal_61 = true;
							bLocal_58 = false;
							func_60(4, 0);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!func_36())
					{
						if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
						{
							unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
				}
				else if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_55 = true;
				}
			}
			if (!bLocal_58)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!func_36())
							{
								unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_55 = true;
							}
						}
						else
						{
							unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5FB1EE6965515598("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_54)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_52[iVar0] = unk_0x7AFC31F33CB9B8D5(Local_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_54 = 1;
	}
}

int func_36()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_55();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_44();
		func_39();
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
		func_57();
	}
	return 0;
}

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_43())
	{
		return 0;
	}
	if (func_41(unk_0x9E2D6C50374FCFA9()))
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

bool func_41(int iParam0)
{
	return func_42(iParam0, 20);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_43()
{
	return -1;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
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

void func_48()
{
	if (func_2(14))
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
		Global_19954 = func_49();
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

var func_49()
{
	func_50();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_53(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_52(unk_0xE2D3D51028F0428A());
			if (func_51(iVar0) && (!func_2(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_51(Global_112915.f_2363.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_60(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&Global_31664, iParam0);
	StringCopy(&(Global_31665[iParam0 /*6*/]), unk_0x05CBA41180F5D521(), 24);
	Global_31720[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()
{
	unk_0xF1A23B343DFEDFD0(joaat("s_m_m_security_01"));
	unk_0xF1A23B343DFEDFD0(joaat("s_m_m_prisguard_01"));
}

void func_66()
{
	func_68();
	func_67();
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Local_307.f_27[iVar0]) && !unk_0x55B23FE400FCEA6B(Local_307.f_27[iVar0], 0))
		{
			unk_0x9521FB98DB6DDF50(Local_307.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x7A93DEA53EFC3CF2(Local_307.f_27[iVar0], 1000);
			unk_0xFF4BEB6CFF55A013(Local_307.f_27[iVar0], -183807561);
			unk_0x252A55826444C3CB(Local_307.f_27[iVar0], 0);
			unk_0x50274A7EACA3133A(Local_307.f_27[iVar0], 1);
			if (!unk_0xF68107C40359970C(Local_307.f_27[iVar0]))
			{
				unk_0x4218764824F31173(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE5965CDF24F93A9F(Local_307.f_27[iVar0]))
		{
			Local_307.f_27[iVar0] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_10[iVar0], 1, 1);
			wait(0);
		}
		iVar0++;
	}
	Var1 = { unk_0x6DB7FBD602C51670(Local_307[1 /*3*/], Local_307.f_10[1], -2f, 0f, 0f) };
	Var2 = { unk_0x6DB7FBD602C51670(Local_307[1 /*3*/], Local_307.f_10[1], -1f, 0f, 0f) };
	Var3 = { unk_0x6DB7FBD602C51670(Local_307[2 /*3*/], Local_307.f_10[2], 1f, 0f, 0f) };
	Var4 = { unk_0x6DB7FBD602C51670(Local_307[2 /*3*/], Local_307.f_10[2], -1f, 0f, 0f) };
	Local_307.f_31[0] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Var1, Local_307.f_10[1], 1, 1);
	Local_307.f_31[1] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Var2, Local_307.f_10[1], 1, 1);
	Local_307.f_31[2] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Var3, Local_307.f_10[2], 1, 1);
	Local_307.f_31[3] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Var4, Local_307.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE5965CDF24F93A9F(Local_307.f_31[iVar0]))
		{
			unk_0x9521FB98DB6DDF50(Local_307.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x7A93DEA53EFC3CF2(Local_307.f_31[iVar0], 500);
			unk_0xFF4BEB6CFF55A013(Local_307.f_31[iVar0], -183807561);
			unk_0x2D1ABDBE834C4AC4(Local_307.f_31[iVar0], 0);
			unk_0x50274A7EACA3133A(Local_307.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(joaat("s_m_m_prisguard_01"));
}

void func_69()
{
	if (bLocal_294)
	{
		iLocal_289 = unk_0xBA715A7BEBA5A1F9(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1, 0);
		unk_0x371D594409A68A18(iLocal_289, 1, 1, 0);
		unk_0xBAAB64584D161C4D(iLocal_289);
		unk_0xB96633932C330B51(iLocal_289, 0f, 0f, 10f);
		unk_0x7A93DEA53EFC3CF2(iLocal_289, 500);
		if (func_28())
		{
			bLocal_292 = true;
			unk_0xA132A7A6A765A696(iLocal_289, 1, 0);
		}
		iLocal_290 = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0xA9F390242F9EB2E1(iLocal_290, iLocal_289, -1);
		if (!unk_0x55B23FE400FCEA6B(iLocal_289, 0))
		{
			unk_0x2F4DB11A0DB3685A(iLocal_289, 101, "PrisonHeli", 1);
		}
		unk_0xF1A23B343DFEDFD0(joaat("polmav"));
	}
}

void func_70()
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()
{
	Local_270[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_270[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_270[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_270[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0x9D3E7062E40F2049("miss_Tower_01");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_270[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_270[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_270[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0x9D3E7062E40F2049("miss_Tower_02");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_270[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_270[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_270[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0x9D3E7062E40F2049("miss_Tower_03");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_270[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_270[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_270[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0x9D3E7062E40F2049("miss_Tower_04");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_270[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_270[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_270[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0x9D3E7062E40F2049("miss_Tower_05");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_270[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_270[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_270[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0x9D3E7062E40F2049("miss_Tower_06");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_270[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_270[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_270[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0x9D3E7062E40F2049("miss_Tower_07");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_270[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_270[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_270[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0x9D3E7062E40F2049("miss_Tower_08");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
	Local_270[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_270[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_270[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_270[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0x9D3E7062E40F2049("miss_Tower_10");
	unk_0xAD84831DE60C1442(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0xAD84831DE60C1442(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x5853B15F78E1A265(5000, 10000));
	unk_0x23C767CF5993CF13(0, 1);
	unk_0x23C767CF5993CF13(1, 2);
	unk_0x23C767CF5993CF13(2, 3);
	unk_0x23C767CF5993CF13(3, 0);
	unk_0xC65DEE4D8F9F02EB();
	unk_0x274F700901C096DD();
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE5965CDF24F93A9F(Local_252.f_64[iVar0]) && !unk_0x55B23FE400FCEA6B(Local_252.f_64[iVar0], 0))
		{
			unk_0xFF4BEB6CFF55A013(Local_252.f_64[iVar0], -183807561);
			unk_0xD6A76BAB45A4B460(Local_252.f_64[iVar0], 132, 1);
			unk_0x78D13FF59B219912(Local_252.f_64[iVar0], 300f, 10);
			unk_0xE014FF3C785EEFB5(Local_252.f_64[iVar0], 1000f);
			unk_0xD9C790C4CE748354(Local_252.f_64[iVar0], 1000f);
			unk_0x5C9D9A4EA475F37E(Local_252.f_64[iVar0], 1000f);
			unk_0x395228F7A14C6543(Local_252.f_64[iVar0], 2);
			unk_0xBC12D08EE7559CCD(Local_252.f_64[iVar0], 13, 1);
			unk_0xBC12D08EE7559CCD(Local_252.f_64[iVar0], 0, 0);
			unk_0x7DCB4594ACF18DA7(Local_252.f_64[iVar0], 1);
			unk_0x71B502FC2E129665(Local_252.f_64[iVar0], 1);
			unk_0x98F7E0916B6B5A0B(Local_252.f_64[iVar0], 0f);
			unk_0xABC2CA6F28903308(Local_252.f_64[iVar0], 1);
			unk_0x348A212511C78DBF(Local_252.f_64[iVar0], 20);
			unk_0x3DAB02AAC9E9EC02(Local_252.f_64[iVar0], 2);
			unk_0xBC12D08EE7559CCD(Local_252.f_64[iVar0], 23, 0);
			unk_0x9521FB98DB6DDF50(Local_252.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0x7A93DEA53EFC3CF2(Local_252.f_64[iVar0], 1000);
			unk_0x50274A7EACA3133A(Local_252.f_64[iVar0], 1);
			unk_0xE014FF3C785EEFB5(Local_252.f_64[iVar0], 1000f);
			if (!unk_0xF68107C40359970C(Local_252.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0xAC81ED4A4F2FEC9C(Local_252.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0x4218764824F31173(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x0318E2EE6FB4563F(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_263[0] = unk_0xBA715A7BEBA5A1F9(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1, 0);
		if (unk_0xE5965CDF24F93A9F(uLocal_263[0]) && !unk_0x55B23FE400FCEA6B(uLocal_263[0], 0))
		{
			uLocal_264[0] = unk_0x487C17B41938052C(uLocal_263[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0xFEF687AF74EEDCC2(uLocal_264[0], 0);
			unk_0xFF4BEB6CFF55A013(uLocal_264[0], iLocal_250);
			unk_0x959E1626CBC7D38A(uLocal_263[0], 0, 0);
			unk_0x1C2ED929474DC6FE(uLocal_263[0], 0, 0);
			unk_0xFEF687AF74EEDCC2(uLocal_263[0], 0);
			unk_0x5C65DDDC219B3AA5(uLocal_263[0], 1);
		}
		wait(0);
	}
	if (!unk_0x0318E2EE6FB4563F(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_263[1] = unk_0xBA715A7BEBA5A1F9(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1, 0);
		if (unk_0xE5965CDF24F93A9F(uLocal_263[1]) && !unk_0x55B23FE400FCEA6B(uLocal_263[1], 0))
		{
			uLocal_264[1] = unk_0x487C17B41938052C(uLocal_263[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0xFEF687AF74EEDCC2(uLocal_264[1], 0);
			unk_0xFF4BEB6CFF55A013(uLocal_264[1], iLocal_250);
			unk_0x959E1626CBC7D38A(uLocal_263[1], 0, 0);
			unk_0x1C2ED929474DC6FE(uLocal_263[1], 0, 0);
			unk_0xFEF687AF74EEDCC2(uLocal_263[1], 0);
			unk_0x5C65DDDC219B3AA5(uLocal_263[1], 1);
		}
		wait(0);
	}
	if (!unk_0x0318E2EE6FB4563F(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_263[2] = unk_0xBA715A7BEBA5A1F9(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1, 0);
		if (unk_0xE5965CDF24F93A9F(uLocal_263[2]) && !unk_0x55B23FE400FCEA6B(uLocal_263[2], 0))
		{
			uLocal_264[2] = unk_0x487C17B41938052C(uLocal_263[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0xFEF687AF74EEDCC2(uLocal_264[2], 0);
			unk_0xFF4BEB6CFF55A013(uLocal_264[2], iLocal_250);
			unk_0x959E1626CBC7D38A(uLocal_263[2], 0, 0);
			unk_0x1C2ED929474DC6FE(uLocal_263[2], 0, 0);
			unk_0xFEF687AF74EEDCC2(uLocal_263[2], 0);
			unk_0x5C65DDDC219B3AA5(uLocal_263[2], 1);
		}
		wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0xE5965CDF24F93A9F(uLocal_264[iVar0]) && !unk_0x55B23FE400FCEA6B(uLocal_264[iVar0], 0)) && !unk_0x55B23FE400FCEA6B(uLocal_263[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_265[iVar0] = 1;
				unk_0xA132A7A6A765A696(uLocal_263[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xE5965CDF24F93A9F(Local_252.f_64[iVar0]))
		{
			Local_252.f_64[iVar0] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_31[iVar0], 1, 1);
			unk_0xF1A23B343DFEDFD0(joaat("s_m_m_prisguard_01"));
			wait(0);
		}
		iVar0++;
	}
}

void func_75()
{
	Local_252[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_252[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_252[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_252[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_252[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_252[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_252[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_252[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_252[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_252[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_252.f_31[0] = 248.9733f;
	Local_252.f_31[1] = 45.8793f;
	Local_252.f_31[2] = 186.3656f;
	Local_252.f_31[3] = 313.5206f;
	Local_252.f_31[4] = 95.9574f;
	Local_252.f_31[5] = 289.3531f;
	Local_252.f_31[6] = 13.7511f;
	Local_252.f_31[7] = 0f;
	Local_252.f_31[8] = 208.5786f;
	Local_252.f_31[9] = 280.9389f;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xBD3CEA9CD36E271E(Local_307.f_14[iVar0]))
		{
			wait(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()
{
	if (bLocal_298)
	{
		if (!unk_0x0152AA00FA3130F1(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xBD3CEA9CD36E271E(Local_252.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x0152AA00FA3130F1(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x0152AA00FA3130F1(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	if (bLocal_294)
	{
		if (!unk_0x0152AA00FA3130F1(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0xF777CAA43F4B281A(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!unk_0x0152AA00FA3130F1(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x0152AA00FA3130F1(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x0152AA00FA3130F1(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	int iVar0;
	
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x70F260358D1A42C4(Local_307.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()
{
	Local_307[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_307[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_307[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_307.f_10[0] = 0f;
	Local_307.f_10[1] = 0f;
	Local_307.f_10[2] = 198.4323f;
	Local_307.f_14[0] = "PatrolGuard02";
	Local_307.f_14[1] = "PatrolGuard03";
	Local_307.f_14[2] = "PatrolGuard04";
}

void func_83()
{
	int iVar0;
	
	Local_252.f_42[0] = "TowerGuard01";
	Local_252.f_42[1] = "TowerGuard02";
	Local_252.f_42[2] = "TowerGuard03";
	Local_252.f_42[3] = "TowerGuard04";
	Local_252.f_42[4] = "TowerGuard05";
	Local_252.f_42[5] = "TowerGuard06";
	Local_252.f_42[6] = "TowerGuard07";
	Local_252.f_42[7] = "TowerGuard08";
	Local_252.f_42[8] = "TowerGuard09";
	Local_252.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x70F260358D1A42C4(Local_252.f_42[iVar0]);
		iVar0++;
	}
	unk_0xD69A0C3662175E68(joaat("polmav"));
	unk_0xD69A0C3662175E68(joaat("s_m_m_prisguard_01"));
}

void func_84()
{
	bLocal_294 = false;
	if (func_28())
	{
		iLocal_295 = (unk_0x5853B15F78E1A265(0, 65535) % 2);
		if (iLocal_295 == 0)
		{
			bLocal_294 = true;
			unk_0xD69A0C3662175E68(joaat("polmav"));
			unk_0xB018BAA4ED9AA217(101, "PrisonHeli");
		}
		else
		{
			bLocal_294 = false;
		}
	}
}

void func_85()
{
	unk_0xD69A0C3662175E68(joaat("s_m_m_security_01"));
	unk_0xD69A0C3662175E68(joaat("s_m_m_prisguard_01"));
	unk_0xD69A0C3662175E68(joaat("polmav"));
}

void func_86()
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0;
	func_87();
	func_34();
	Local_70.f_4 = 75;
	Local_70.f_6 = 15;
	unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0xD642E010A287ADFD("Prison_Guards", &iLocal_250);
	unk_0xD642E010A287ADFD("Prison_Prisoners", &iLocal_251);
	unk_0x9972EFADA7A2A47D(2, iLocal_250, iLocal_251);
	unk_0x9972EFADA7A2A47D(2, iLocal_251, iLocal_250);
	unk_0x9972EFADA7A2A47D(1, iLocal_250, joaat("COP"));
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_250);
	unk_0x9972EFADA7A2A47D(3, 1862763509, iLocal_251);
	unk_0x9972EFADA7A2A47D(3, iLocal_251, 1862763509);
}

void func_87()
{
	Local_53[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_53[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_53[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_53[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_53[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_53[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_53[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_53[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_53[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_53[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_53[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_53[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_88()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 2, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (unk_0x7246AE6E7C9CA089(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 4, 0);
					unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
					unk_0x9972EFADA7A2A47D(5, 1862763509, -183807561);
					unk_0x9972EFADA7A2A47D(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
				if ((unk_0x9AC74C7EF847A074(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0x51223AB40E2F620E(unk_0x9E2D6C50374FCFA9())) || (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()) && !unk_0x7246AE6E7C9CA089(unk_0x9E2D6C50374FCFA9())))
				{
					unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
					unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 1, 0);
					unk_0x9972EFADA7A2A47D(5, 1862763509, -183807561);
					unk_0x9972EFADA7A2A47D(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	unk_0x837739686F969991("PRISON_ALARMS", 1);
	if (iLocal_56)
	{
		unk_0x9972EFADA7A2A47D(2, 1862763509, -183807561);
		unk_0x9972EFADA7A2A47D(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x046B574E2CF3F2CC(uLocal_52[iVar0]))
		{
			unk_0xB251DDFA99084C56(uLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x82EF7F252A48DC41(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	if (bParam0)
	{
		unk_0x7A997A0A971D305F(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, 0);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_90()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_66))
	{
		unk_0x3D81769BEC61BFF8(&iLocal_66);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_68))
	{
		unk_0xB3822DB3D538C8F3(&iLocal_68);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_67))
	{
		unk_0x3D81769BEC61BFF8(&iLocal_67);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_69))
	{
		unk_0xB3822DB3D538C8F3(&iLocal_69);
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Local_307.f_27[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(Local_307.f_36[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(Local_307.f_36[iVar0]));
			}
			if (unk_0x4D21C9FB671ED18F(Local_307.f_27[iVar0]))
			{
				unk_0x05CB75C0837196F9(&(Local_307.f_27[iVar0]));
			}
			else
			{
				unk_0xB3822DB3D538C8F3(&(Local_307.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xE5965CDF24F93A9F(Local_307.f_31[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(Local_307.f_40[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(Local_307.f_40[iVar0]));
			}
			if (unk_0x4D21C9FB671ED18F(Local_307.f_31[iVar0]))
			{
				unk_0x05CB75C0837196F9(&(Local_307.f_31[iVar0]));
			}
			else
			{
				unk_0xB3822DB3D538C8F3(&(Local_307.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_301))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_301);
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_299))
	{
		unk_0xD59CC8123FD1A789(&iLocal_299);
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_296[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_297[iVar0]));
			}
			unk_0x05CB75C0837196F9(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_263[iVar0]))
		{
			unk_0xD59CC8123FD1A789(&(uLocal_263[iVar0]));
		}
		if (unk_0xE5965CDF24F93A9F(uLocal_264[iVar0]))
		{
			unk_0x05CB75C0837196F9(&(uLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE5965CDF24F93A9F(Local_252.f_64[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(Local_252.f_75[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(Local_252.f_75[iVar0]));
			}
			if (unk_0x4D21C9FB671ED18F(Local_252.f_64[iVar0]))
			{
				unk_0x05CB75C0837196F9(&(Local_252.f_64[iVar0]));
			}
			else
			{
				unk_0xB3822DB3D538C8F3(&(Local_252.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_291))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_291);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_289))
	{
		if (unk_0x4D21C9FB671ED18F(iLocal_289))
		{
			unk_0xD59CC8123FD1A789(&iLocal_289);
			unk_0x05CB75C0837196F9(&iLocal_290);
		}
		else
		{
			func_96(&iLocal_289, &iLocal_290);
			unk_0x3D81769BEC61BFF8(&iLocal_289);
		}
	}
}

void func_96(var uParam0, var uParam1)
{
	if (((unk_0xE5965CDF24F93A9F(*uParam0) && unk_0xE5965CDF24F93A9F(*uParam1)) && !unk_0x55B23FE400FCEA6B(*uParam0, 0)) && !unk_0x55B23FE400FCEA6B(*uParam1, 0))
	{
		if (unk_0xCE282187B0A6217E(*uParam0))
		{
			if (unk_0xE896049AD1887FF0(*uParam0))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					unk_0xCDAACB23D43F080D(*uParam1, *uParam0, 0, 0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

