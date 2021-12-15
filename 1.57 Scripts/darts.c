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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	struct<3> Local_35 = { 0, 0, 0 } ;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	var uLocal_138[2] = { 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	bool bLocal_155 = 0;
	bool bLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
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
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	int iLocal_221 = 0;
	char* sLocal_222 = NULL;
	char* sLocal_223 = NULL;
	char* sLocal_224[3] = { NULL, NULL, NULL };
	char* sLocal_225[3] = { NULL, NULL, NULL };
	char* sLocal_226[3] = { NULL, NULL, NULL };
	char* sLocal_227[3] = { NULL, NULL, NULL };
	struct<5> Local_228 = { 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26[20];
	var uVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	Local_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	Local_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_130 = ((0.05f + 0.275f) - 0.01f);
	Local_137 = { 500f, 500f, 500f };
	bLocal_148 = true;
	Local_209 = { -573.1373f, 294.0269f, 78.1765f };
	Local_210 = { -574.1169f, 292.7964f, 78.1766f };
	Local_211 = { 1995.295f, 3050.084f, 46.91535f };
	Local_212 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_213 = 172.6813f;
	fLocal_214 = 274.5094f;
	fLocal_215 = 142.6717f;
	fLocal_216 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_222 = "facials@gen_female@variations@happy";
	switch (func_503(unk_0x7D2B9E6A64637269()))
	{
		case 0:
			sLocal_223 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_223 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_223 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_224[0] = "mood_happy_1";
	sLocal_224[1] = "mood_happy_2";
	sLocal_224[2] = "mood_happy_3";
	sLocal_225[0] = "darts_outro_01_guy1";
	sLocal_225[1] = "darts_outro_02_guy2";
	sLocal_225[2] = "darts_outro_03_guy2";
	sLocal_226[0] = "darts_outro_01_guy2";
	sLocal_226[1] = "darts_outro_02_guy1";
	sLocal_226[2] = "darts_outro_03_guy1";
	sLocal_227[0] = "darts_outro_01_cam";
	sLocal_227[1] = "darts_outro_02_cam";
	sLocal_227[2] = "darts_outro_03_cam";
	uLocal_138[0] = unk_0x7D2B9E6A64637269();
	bLocal_151 = true;
	Var17 = { 1992.293f, 3050.583f, 47.98973f };
	Var18 = { -572.0406f, 294.1958f, 79.9374f };
	func_502();
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iLocal_175 = 1;
		switch (unk_0xB36B8558948EA7A8(0, 2))
		{
			case 0:
				iLocal_172 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_172 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_170 = 10;
		unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0x419E13582192CFEA(ScriptParam_228.f_4))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (iLocal_175 == 2)
			{
				ScriptParam_228 = { Var18 };
				ScriptParam_228.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_228 = { Var17 };
				ScriptParam_228.f_3 = 57.78315f;
			}
			if (unk_0xCC09B877A009E41F(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_228.f_4 = unk_0xB219A5BFF547852F(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x8247BBE4CAEA2EB0(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_228, &Var19, 0);
				ScriptParam_228.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { unk_0xD6E677FAD7521410(ScriptParam_228.f_4, 1) };
	}
	if (!unk_0xE50EB54E0F21BED0(func_501(), 0))
	{
		func_499(iLocal_170, 1);
		if (unk_0xC49311A2A500FF09(func_501(), 0))
		{
			unk_0xCC5ED49CF9C9215F(func_501(), 0, 0);
		}
		uLocal_138[1] = func_501();
	}
	else
	{
		unk_0xC189FA1CE4E3B2A5(1);
	}
	if (unk_0x4210287E2833D44B(67))
	{
		func_490();
		func_472(&Var0, &Var5, &Var6);
	}
	unk_0x29DDCB8E40A160C7(0);
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
	func_470(1);
	iLocal_166 = func_467(func_503(uLocal_138[0]), 1);
	fVar15 = (to_float(iLocal_166) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = round(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_466(23, 1);
	while (true)
	{
		wait(0);
		unk_0xEFD424FDD55A6EC7(2);
		unk_0xAF98B1BA240CE3DB();
		unk_0x1F2C4D3A741ED5AD(15, 0f, -0.0375f);
		if (iLocal_158 && Var0 < 13)
		{
			unk_0x32781653075794DC(Var4, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0xECEC7528A52B4EE8(ScriptParam_228.f_5) && !unk_0x419E13582192CFEA(func_501())) || (unk_0x419E13582192CFEA(func_501()) && unk_0xECEC7528A52B4EE8(func_501())))
		{
			func_472(&Var0, &Var5, &Var6);
		}
		if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]))
		{
			unk_0xD991F7672CE8EAD3(uLocal_138[0], 239, 1);
			unk_0xD991F7672CE8EAD3(uLocal_138[0], 124, 1);
			func_465();
			unk_0xB5D61F76D4980A55(0);
			unk_0xB5D61F76D4980A55(2);
			iVar14 = 0;
			while (iVar14 < unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar26, -1))
			{
				if (uVar26[iVar14] != uLocal_138[1])
				{
					if (!unk_0xECEC7528A52B4EE8(uVar26[iVar14]))
					{
						unk_0xD991F7672CE8EAD3(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					unk_0x66AE54CE92457FEE(1);
					func_464(&(Var0.f_243), &ScriptParam_228);
					func_463(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x419E13582192CFEA(Var0.f_243))
					{
						Local_207 = { unk_0x9E695CE384C77EF0(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_208 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_84 = unk_0x1CA878DB277C6DF0(26379945, Local_207, Local_208, 65f, 0, 2);
						unk_0xEF20E9A7B745D17A(uLocal_84, 30f);
					}
					func_462();
					settimera(0);
					Var0 = 1;
					break;
				
				case 1:
					if (timera() > 500 && !unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
					{
						unk_0x6AF7EE4DD9F8B944(ScriptParam_228, 0.5f, 1, 0, 0, 0);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
						{
							unk_0x8D5B447F21217223(&uLocal_173);
							unk_0x5C679902079A7E80(&uLocal_173);
							unk_0xCC5ED49CF9C9215F(0, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_173);
							unk_0x8A1AC8EBC73850C8(unk_0x7D2B9E6A64637269(), uLocal_173);
						}
						Local_42 = { Local_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_461(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_461(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_460(0);
					func_458(&Var4, iLocal_175, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x419E13582192CFEA(Var0.f_243))
					{
						Var19 = { unk_0x8EB57098C563AB39(Var0.f_243, Var4.f_18) };
					}
					func_455(&Var4, &Var5);
					unk_0x9783B77820E7F699(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_452(&Var4, &Var5))
					{
						func_449(&(Var0.f_243), &Var2, &Var3, 0);
						iLocal_217 = func_503(uLocal_138[0]);
						switch (iLocal_217)
						{
							case 0:
								sLocal_219 = func_448("MICHAEL");
								if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_219 = func_448("FRANKLIN");
								bLocal_155 = true;
								if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_219 = func_448("TREVOR");
								if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0xE50EB54E0F21BED0(func_501(), 0))
						{
							iLocal_218 = func_503(func_501());
							if (iLocal_218 == 145)
							{
								iLocal_218 = func_445(func_501());
							}
							switch (iLocal_218)
							{
								case 0:
									sLocal_220 = func_448("MICHAEL");
									break;
								
								case 1:
									sLocal_220 = func_448("FRANKLIN");
									break;
								
								case 2:
									sLocal_220 = func_448("TREVOR");
									break;
								
								case 19:
									sLocal_220 = func_448("LAMAR");
									unk_0x4170FE884DF7426D(func_501(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_220 = func_448("JIMMY");
									break;
								
								default:
									sLocal_220 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0xB36B8558948EA7A8(0, 200);
							if (iLocal_175 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_220 = func_448("RAYMOND");
									iLocal_221 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_220 = func_448("JOHAN");
									iLocal_221 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_220 = func_448("STAN");
									iLocal_221 = 1891555423;
								}
								else
								{
									sLocal_220 = func_448("VINCE");
									iLocal_221 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_220 = func_448("KRISTY");
								iLocal_221 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_220 = func_448("MARLENE");
								iLocal_221 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_220 = func_448("LORIE");
								iLocal_221 = 1954368234;
							}
							else
							{
								sLocal_220 = func_448("SHELLEY");
								iLocal_221 = -863218904;
							}
						}
						uLocal_36 = unk_0x795434E153F90E41(iLocal_37, Var3, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0xDFC8B8E3558D7160())
					{
						uVar27 = unk_0x795434E153F90E41(joaat("prop_dart_1"), Var3, 1, 1, 0);
						func_442(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_228);
						func_441(&Var4, sLocal_219, sLocal_220);
						unk_0xCA089CD1A17D76DF(uLocal_138[1]);
						uLocal_174 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -1871534317, 0, 0, 0);
						}
						func_440(&(Var0.f_257), 0, unk_0x7D2B9E6A64637269(), sLocal_219, 0, 1);
						if (unk_0xE50EB54E0F21BED0(func_501(), 0))
						{
							if (iLocal_175 == 2)
							{
								func_440(&(Var0.f_257), 3, uLocal_138[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_440(&(Var0.f_257), 3, uLocal_138[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_440(&(Var0.f_257), 3, func_501(), sLocal_220, 0, 1);
							func_438(&uVar25);
							iVar13 = 6;
						}
						if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_437(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0xECEC7528A52B4EE8(uLocal_138[1]) && unk_0xBBC3519C07015926(uLocal_138[0])) && !unk_0xC49311A2A500FF09(uLocal_138[0], 1)) && unk_0xBBC3519C07015926(uLocal_138[1])) && !unk_0xC49311A2A500FF09(uLocal_138[1], 1))
					{
						bLocal_146 = func_435(&uLocal_162);
						if ((func_434() && unk_0xDFB7BFA6482FEE1E() >= iLocal_164 + 1000) && iVar13 != 9)
						{
							if (!unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
							{
								unk_0x8BA9BCDD56AA7115(500);
							}
						}
						if (unk_0x8B6A925F148E0E94() && iVar13 != 9)
						{
							func_430(0);
							func_428();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
								{
									uLocal_168 = unk_0xD955F1CC0BCABC78(unk_0x9E695CE384C77EF0(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xA8D713A937F31250(ScriptParam_228.f_4) - 3.783146f), 2);
									uLocal_174 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x47554D1FFAB68B45(uLocal_174, uLocal_168, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x6FA8221C9D2ECB46(uLocal_174, 1);
									unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
									unk_0x880C7B361C9651EE(uLocal_138[0]);
									unk_0x880C7B361C9651EE(uLocal_138[1]);
									unk_0x16D66F11FE644901(uLocal_138[0]);
									unk_0x16D66F11FE644901(uLocal_138[1]);
									unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x4261814A9A26E86F(uLocal_138[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x4261814A9A26E86F(uLocal_138[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xED3365BAA5895E01(uVar27, uLocal_168, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_427(&uVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0xEEC203A73BC92E7E(uLocal_168))
								{
									if (!bVar9)
									{
										if (func_426(&uVar25) > 1.5f)
										{
											func_425(uLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_424(&uVar25);
										}
									}
									else if (!unk_0xCCCF5C35DC145D71(uLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_423(&uVar25))
											{
												func_438(&uVar25);
											}
											else if (func_426(&uVar25) > 0.5f)
											{
												func_422(uLocal_138[1]);
												func_424(&uVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_427(&uVar25);
											func_421("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x0BC8768247440B3A(uLocal_168) > 0.25f)
											{
												func_427(&uVar25);
												func_421("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x0BC8768247440B3A(uLocal_168) > 0.55f)
											{
												func_421("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x0BC8768247440B3A(uLocal_168) > 0.85f)
											{
												func_421("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x0BC8768247440B3A(uLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x0BC8768247440B3A(uLocal_168) > 0.99f)
								{
									if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
									{
										func_418(Var0.f_243.f_1, Var0.f_243.f_4, func_420(2), func_419(0), 0, 1);
										iLocal_31 = 0;
										unk_0x66AE54CE92457FEE(1);
										unk_0xFE1DEC9C5734D0C0(uLocal_174, 0);
										unk_0xCA089CD1A17D76DF(uLocal_138[0]);
										unk_0xCA089CD1A17D76DF(uLocal_138[1]);
										unk_0x90ED32458AC2D129(uVar27, -1000f, 0);
										unk_0x04F4D55F2C0C756D(&uVar27);
										unk_0xC0BBE340BE2AA02D(func_417(0));
										func_424(&uVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
								{
									uLocal_168 = unk_0xD955F1CC0BCABC78(unk_0x9E695CE384C77EF0(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xA8D713A937F31250(ScriptParam_228.f_4) - 3.783146f), 2);
									uLocal_174 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x47554D1FFAB68B45(uLocal_174, uLocal_168, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x6FA8221C9D2ECB46(uLocal_174, 1);
									unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
									unk_0x880C7B361C9651EE(uLocal_138[0]);
									unk_0x880C7B361C9651EE(uLocal_138[1]);
									unk_0x16D66F11FE644901(uLocal_138[0]);
									unk_0x16D66F11FE644901(uLocal_138[1]);
									unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x4261814A9A26E86F(uLocal_138[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x4261814A9A26E86F(uLocal_138[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xED3365BAA5895E01(uVar27, uLocal_168, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_427(&uVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0xEEC203A73BC92E7E(uLocal_168))
								{
									if (!bVar9)
									{
										if (func_426(&uVar25) > 0.5f)
										{
											func_425(uLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_424(&uVar25);
										}
									}
									else if (!unk_0xCCCF5C35DC145D71(uLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_423(&uVar25))
											{
												func_438(&uVar25);
											}
											else if (func_426(&uVar25) > 0.25f)
											{
												func_422(uLocal_138[1]);
												func_424(&uVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0x0BC8768247440B3A(uLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x0BC8768247440B3A(uLocal_168) > 0.99f)
								{
									if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
									{
										func_416();
										unk_0xFE1DEC9C5734D0C0(uLocal_174, 0);
										unk_0xCA089CD1A17D76DF(uLocal_138[0]);
										unk_0xCA089CD1A17D76DF(uLocal_138[1]);
										unk_0x90ED32458AC2D129(uVar27, -1000f, 0);
										unk_0x04F4D55F2C0C756D(&uVar27);
										unk_0xC0BBE340BE2AA02D(func_417(0));
										func_424(&uVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x8B6A925F148E0E94())
								{
									iLocal_158 = 1;
									iLocal_31 = 0;
									unk_0x66AE54CE92457FEE(1);
									if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
									{
										unk_0x78CDDD1E6367978D(uLocal_138[0], Var2, 1, 0, 0, 1);
										unk_0xCD37A28258D70638(uLocal_138[0], Var0.f_243.f_4);
										unk_0x78CDDD1E6367978D(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
										unk_0xCD37A28258D70638(uLocal_138[1], Var0.f_243.f_4);
										unk_0xCA089CD1A17D76DF(uLocal_138[0]);
										unk_0xCA089CD1A17D76DF(uLocal_138[1]);
									}
									unk_0xFE1DEC9C5734D0C0(uLocal_174, 0);
									unk_0x90ED32458AC2D129(uVar27, -1000f, 0);
									unk_0x04F4D55F2C0C756D(&uVar27);
									if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
									{
										func_418(Var0.f_243.f_1, Var0.f_243.f_4, func_420(2), func_419(0), 0, 1);
									}
									else
									{
										func_416();
									}
									unk_0xC0BBE340BE2AA02D(func_417(0));
									func_424(&uVar25);
									unk_0x6E1E3A5B1F9AB95B(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_164 = unk_0xDFB7BFA6482FEE1E();
							if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
							{
								unk_0x78CDDD1E6367978D(uLocal_138[0], Var2, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(uLocal_138[0], Var0.f_243.f_4);
								unk_0x78CDDD1E6367978D(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(uLocal_138[1], Var0.f_243.f_4);
							}
							unk_0xB84B43B766630B5C(func_417(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((unk_0xDFB7BFA6482FEE1E() - iLocal_164) > 1500)
							{
								func_414(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_413(&(Var5.f_57), 1, 0))
							{
								unk_0xB84B43B766630B5C(func_417(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0x234B68AC2E35ED5A(Global_112254, 0))
					{
						if (func_410(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar24))
						{
							unk_0x191DDA30577F440A(&Global_112254, 0);
							Var0 = 8;
						}
					}
					else
					{
						unk_0x6FA8221C9D2ECB46(uLocal_75, 1);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x8B6A925F148E0E94())
					{
						unk_0x6E1E3A5B1F9AB95B(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0x419E13582192CFEA(func_501()))
							{
								if (!unk_0x234B68AC2E35ED5A(Global_112254, 10))
								{
									unk_0x191DDA30577F440A(&Global_112254, 10);
								}
								else
								{
									unk_0xC664C0067EEAB8D1(&Global_112254, 10);
								}
								func_408(&Var5);
								iVar13++;
							}
							else
							{
								func_408(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0x3640D836D145B814())
							{
								if (fLocal_89 != unk_0x451E904FC8FB5C54(0))
								{
									fLocal_89 = unk_0x451E904FC8FB5C54(0);
									unk_0xEF20E9A7B745D17A(uLocal_75, func_407(fLocal_89));
									unk_0xEF20E9A7B745D17A(uLocal_76, func_407(fLocal_89));
								}
							}
							if (func_347(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xC0BBE340BE2AA02D(func_417(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_346(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_343(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_336(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_112293.f_18968.f_5 >= 5 && Global_112293.f_18968.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_112293.f_18968.f_5 >= 3 && Global_112293.f_18968.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_335(Global_112293.f_18968.f_5, &iLocal_167))
						{
							func_334(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_333(Global_112293.f_18968.f_5);
						fLocal_46 = func_332(Global_112293.f_18968.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
						{
							unk_0x16D66F11FE644901(uLocal_138[1]);
							unk_0x78CDDD1E6367978D(uLocal_138[1], Var2.f_3, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(uLocal_138[1], Var0.f_243.f_4);
						}
						if (func_423(&uVar23))
						{
							func_424(&uVar23);
						}
						unk_0xB84B43B766630B5C(func_417(2));
						func_331(uLocal_138[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x3640D836D145B814())
					{
						if (fLocal_89 != unk_0x451E904FC8FB5C54(0))
						{
							fLocal_89 = unk_0x451E904FC8FB5C54(0);
							unk_0xEF20E9A7B745D17A(uLocal_75, func_407(fLocal_89));
							unk_0xEF20E9A7B745D17A(uLocal_76, func_407(fLocal_89));
						}
					}
					if (!bLocal_156)
					{
						unk_0x068BDE31F7D112BB("mini@dartsoutro");
						bLocal_156 = true;
					}
					if (!iLocal_157)
					{
						if (bLocal_156)
						{
							if (!unk_0x0EC2B29D4172D225("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_157 = 1;
							}
						}
					}
					func_249(&Var0, &Var3, &Var4, &Var5, &uVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_426(&(Var0.f_254)) > 0.5f)
							{
								unk_0x66AE54CE92457FEE(1);
								unk_0x1036762BD3781C84();
								func_248(unk_0x7D2B9E6A64637269());
								func_346(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_247(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_246(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_244(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_244(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_244(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_244(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0x451E904FC8FB5C54(1);
								if (fVar34 > 2f)
								{
									Var20 = { 1992.294f, 3047.577f, 46.21517f };
									Var21 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var20 = { 1992.336f, 3047.924f, 46.21517f };
									Var21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_243();
								uLocal_168 = unk_0xD955F1CC0BCABC78(Var20, Var21, 2);
								uLocal_174 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x47554D1FFAB68B45(uLocal_174, uLocal_168, sLocal_227[iVar33], "mini@dartsoutro");
								unk_0x6FA8221C9D2ECB46(uLocal_174, 1);
								unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
								if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]) && !unk_0xECEC7528A52B4EE8(uLocal_138[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0x9B0169E27978C1A2(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_242(&uLocal_138, iVar35);
										unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), sLocal_223, sLocal_224[unk_0xB36B8558948EA7A8(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_241(&uLocal_138);
										unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x4261814A9A26E86F(uLocal_138[1], sLocal_222, sLocal_224[unk_0xB36B8558948EA7A8(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_239(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_424(&(Var0.f_254));
							iLocal_152 = 0;
							unk_0xC0BBE340BE2AA02D(func_417(3));
							func_416();
							if (unk_0x0E8572B08CEB6A11(uLocal_174))
							{
								unk_0xFE1DEC9C5734D0C0(uLocal_174, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_426(&(Var0.f_254)) > 0.92f)
					{
						func_41(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0xE50EB54E0F21BED0(func_501(), 0))
					{
						unk_0xCA089CD1A17D76DF(uLocal_138[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0xCA089CD1A17D76DF(uLocal_138[0]);
							if (!bLocal_154)
							{
								unk_0x09F9466B03D29D2D(0, bLocal_154, 3000, 1, 0, 0);
							}
							else
							{
								unk_0xE5AC37B329B31F82(0, 0, 3, 0);
							}
							unk_0xDF23DCD7A3E1B7A5(0);
							unk_0x3A13FD2813C8251F(0, 1065353216);
							unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
							unk_0x1036762BD3781C84();
							unk_0x8ADA462BC5F42FD8(uLocal_138[0], uLocal_138[1], 5000, 2049, 3);
							func_438(&uVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&uVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_438(&uVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&uVar25) > 0.3f)
							{
								if (!unk_0xECEC7528A52B4EE8(uLocal_138[1]))
								{
									if (!bVar7)
									{
										func_4(uLocal_138[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_438(&uVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x609EEF618F8CC869(2, 201))
					{
						func_1(uLocal_138[1]);
						iLocal_171 = 2;
						bVar7 = true;
						if (unk_0xB30CD10E2CD1B67D(func_417(2)))
						{
							unk_0xC0BBE340BE2AA02D(func_417(2));
						}
						Var0 = 13;
					}
					if (unk_0x609EEF618F8CC869(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_334(&(Var5.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_472(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xA300BD5F71A8C704())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_334(&(uParam0->f_666), 8, 1);
			func_334(&(uParam0->f_666), 15, 0);
			func_334(&(uParam0->f_666), 16, 0);
			func_334(&(uParam0->f_666), 17, 0);
		}
		unk_0x4C4EBDF5C0D2DCB8();
		set_warning_message_with_header("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_334(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xE50EB54E0F21BED0(func_501(), 0) || iParam2)
	{
		func_425(iParam0, sParam1, iParam3);
	}
	else if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(var uParam0)
{
	if (func_423(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x2053F6ACFD4ED4BC() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x2053F6ACFD4ED4BC();
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0xC6D04E4B28753F77(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x9437DA8C00A86EE5(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A())
		{
			unk_0xA82C5CF50055A1B4(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
			{
				unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
			}
		}
	}
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(8);
	unk_0xEFD424FDD55A6EC7(9);
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(19);
	unk_0x366E7F593105797F(2, 19, 1);
	unk_0x366E7F593105797F(0, 37, 1);
	unk_0x366E7F593105797F(0, 21, 1);
	unk_0x366E7F593105797F(0, 28, 1);
	unk_0x366E7F593105797F(0, 29, 1);
	unk_0x366E7F593105797F(0, 171, 1);
	func_38(0);
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (unk_0x59F1FAF3E8A64BD4() || (unk_0x8B6A925F148E0E94() && !unk_0x07BE48DF95787FCB()))
		{
			unk_0xA944664D6E32BDF8();
		}
	}
	Global_42559 = 1;
	if (!uParam0->f_563)
	{
		switch (func_503(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2())))
		{
			case 1:
				unk_0x9673FB069F90F6B9("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9673FB069F90F6B9("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9673FB069F90F6B9("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x704F8697BB515627(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x392841D58D2EED1D();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x704F8697BB515627(uParam0->f_1, "TRANSITION_OUT");
			unk_0x392841D58D2EED1D();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x0C7C436873368EDB(2))
			{
				if (unk_0xDAE4BC89A198A6AF(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x86AF801D34E482FF(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xDAE4BC89A198A6AF(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x704F8697BB515627(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x392841D58D2EED1D();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x704F8697BB515627(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x392841D58D2EED1D();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x704F8697BB515627(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x392841D58D2EED1D();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x86AF801D34E482FF(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0x704F8697BB515627(uParam0->f_4, "CLEAR_ALL");
	unk_0x392841D58D2EED1D();
	if (unk_0x3640D836D145B814())
	{
		unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x9D7453DF8B7E9E0B(true);
		unk_0x392841D58D2EED1D();
	}
	unk_0x704F8697BB515627(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(0);
	func_13(unk_0x908D1ACF42DAF9B8(2, 215, true));
	func_12("ES_HELP");
	if (unk_0x3640D836D145B814())
	{
		unk_0x9D7453DF8B7E9E0B(true);
		unk_0x9E3D03981E2E9AD9(215);
	}
	unk_0x392841D58D2EED1D();
	if (bParam1)
	{
		unk_0x704F8697BB515627(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x9E3D03981E2E9AD9(1);
		func_13(unk_0x908D1ACF42DAF9B8(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0x3640D836D145B814())
		{
			unk_0x9D7453DF8B7E9E0B(true);
			unk_0x9E3D03981E2E9AD9(216);
		}
		unk_0x392841D58D2EED1D();
	}
	unk_0x704F8697BB515627(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x392841D58D2EED1D();
}

void func_12(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_13(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_15(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (unk_0xDAE4BC89A198A6AF(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x704F8697BB515627(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x02BFF15CAA701972())
				{
					unk_0x9E3D03981E2E9AD9(150);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(100);
				}
				unk_0x9D7453DF8B7E9E0B(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x9E3D03981E2E9AD9((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(uParam0->f_56);
				}
				unk_0x9D7453DF8B7E9E0B(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x9E3D03981E2E9AD9(2);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(69);
				}
				unk_0x392841D58D2EED1D();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x704F8697BB515627(uParam0->f_1, "TRANSITION_UP");
				unk_0x82D42F43BE26EB72(0.15f);
				unk_0x9D7453DF8B7E9E0B(true);
				unk_0x392841D58D2EED1D();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x44EF5678D6916481(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x451E904FC8FB5C54(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x203739B163D4D88E(2, 215);
	unk_0x203739B163D4D88E(2, 216);
	unk_0x203739B163D4D88E(2, 200);
	unk_0x366E7F593105797F(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x8B6A925F148E0E94())
			{
				unk_0xBDF731C5B27D78FF();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xEFD424FDD55A6EC7(7);
				unk_0xEFD424FDD55A6EC7(8);
				unk_0xEFD424FDD55A6EC7(9);
				unk_0xEFD424FDD55A6EC7(6);
				unk_0x44EF5678D6916481(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x366E7F593105797F(0, 140, 1);
				unk_0x366E7F593105797F(0, 141, 1);
				unk_0x366E7F593105797F(0, 142, 1);
				unk_0x366E7F593105797F(2, 188, 1);
				if (unk_0x96DF114B59E81B9C(2, 188))
				{
					unk_0x9B0169E27978C1A2(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x9B0169E27978C1A2(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x366E7F593105797F(2, 187, 1);
				if (unk_0x96DF114B59E81B9C(2, 187))
				{
					unk_0x9B0169E27978C1A2(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x9B0169E27978C1A2(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x366E7F593105797F(2, 202, 1);
				if (unk_0x96DF114B59E81B9C(2, 202))
				{
					unk_0x9B0169E27978C1A2(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x9B0169E27978C1A2(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xEFD424FDD55A6EC7(7);
				unk_0xEFD424FDD55A6EC7(8);
				unk_0xEFD424FDD55A6EC7(9);
				unk_0xEFD424FDD55A6EC7(6);
				unk_0x366E7F593105797F(0, 140, 1);
				unk_0x366E7F593105797F(0, 141, 1);
				unk_0x366E7F593105797F(0, 142, 1);
				if (unk_0x86AF801D34E482FF(2, 215) || unk_0x96DF114B59E81B9C(2, 200))
				{
					unk_0x9B0169E27978C1A2(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x9B0169E27978C1A2(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xB4D5E37C91862216(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x968AC0BD45D79791(iVar13, iVar14, iVar15, iVar0);
	unk_0x70D76B2EE444F0BD(fVar9, fVar10);
	unk_0xD7BF3EFD7B2022EC(0);
	unk_0x9E8B548C035F223D(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0x80B2E30CC8B794C0(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0x80B2E30CC8B794C0(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0x80B2E30CC8B794C0(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0x968AC0BD45D79791(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xFA1A73C829B8839F() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x70D76B2EE444F0BD(fVar20, fVar21);
				unk_0xD7BF3EFD7B2022EC(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xD7BF3EFD7B2022EC(0);
			}
			unk_0x9E8B548C035F223D(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x70D76B2EE444F0BD(fVar20, fVar21);
			unk_0xD7BF3EFD7B2022EC(2);
			unk_0x9E8B548C035F223D(1f, 0.4f);
			unk_0x7160B751D113C8C6(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x70D76B2EE444F0BD(fVar20, fVar22);
			unk_0x968AC0BD45D79791(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0xE5A80C83FA218963("PERCENTAGE");
					unk_0x38CD3C04C877C35F(uParam0->f_554);
					unk_0xBC68FBDA73BBB4A6(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xE5A80C83FA218963("FO_TWO_NUM");
					unk_0x38CD3C04C877C35F(uParam0->f_554);
					unk_0x38CD3C04C877C35F(uParam0->f_555);
					unk_0xBC68FBDA73BBB4A6(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xE5A80C83FA218963("MTPHPER_XPNO");
					unk_0x38CD3C04C877C35F(uParam0->f_554);
					unk_0xBC68FBDA73BBB4A6(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xE5A80C83FA218963("ESDOLLA");
					unk_0xDA0C49A6D01B065C(uParam0->f_554, 1);
					unk_0xBC68FBDA73BBB4A6(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0xB4D5E37C91862216(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xB4D5E37C91862216(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xB4D5E37C91862216(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xDDD5C8D7152E128F(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x7160B751D113C8C6(iParam3);
	unk_0x57BF57F8A1C8167A(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0xE5A80C83FA218963("STRING");
		unk_0xA91D83F2CC1345A6(sParam0);
	}
	else
	{
		unk_0xE5A80C83FA218963(sParam0);
	}
	unk_0xBC68FBDA73BBB4A6(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (unk_0x15173FB88ABC94F9(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x32C9F8FADAAEEFE6(&iVar2, &iVar3);
			fVar5 = unk_0x451E904FC8FB5C54(0);
			if (func_20())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
			{
				fVar4 = 1f;
			}
			if (unk_0x636F1F53CC61D2C9(joaat("director_mode")) > 0)
			{
				unk_0x24BE716BB6F8D262(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x24BE716BB6F8D262(&iVar2, &iVar3);
		}
		Var7 = { unk_0x345540F6D1175D5D(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_19(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_19(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x928E0D7BE0057D1C() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22669)
			{
				*fParam4 = (*fParam4 * (Global_22669 / *fParam3));
				*fParam3 = Global_22669;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_20()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x32C9F8FADAAEEFE6(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_7286[iParam0 /*16*/])))
	{
		if (unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_23(unk_0x1146A9AE09CE2B14()) };
			if (unk_0x72021D50470D04D2(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_22670.f_7286[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)
{
	return uParam0;
}

struct<13> func_23(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_6277[iParam0 /*16*/])))
	{
		if (unk_0x15173FB88ABC94F9(&(Global_22670.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_23(unk_0x1146A9AE09CE2B14()) };
			unk_0x72021D50470D04D2(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_22670.f_6277[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iParam5);
	unk_0x70D76B2EE444F0BD(fParam3, fParam4);
	unk_0xD7BF3EFD7B2022EC(1);
	unk_0x9E8B548C035F223D(1f, func_27(14f));
	unk_0x7160B751D113C8C6(0);
	unk_0x57BF57F8A1C8167A(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0xE5A80C83FA218963("STRING");
		unk_0xA91D83F2CC1345A6(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xE5A80C83FA218963(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x38CD3C04C877C35F(uParam0->f_489[iParam1]);
		}
	}
	unk_0xBC68FBDA73BBB4A6(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDDD5C8D7152E128F("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDDD5C8D7152E128F("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xDDD5C8D7152E128F("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xD7BF3EFD7B2022EC(1);
	}
	else
	{
		unk_0xD7BF3EFD7B2022EC(2);
	}
	unk_0x9E8B548C035F223D(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x70D76B2EE444F0BD(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x70D76B2EE444F0BD(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x7160B751D113C8C6(0);
	unk_0x57BF57F8A1C8167A(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x9E8B548C035F223D(1f, func_27(18f));
			unk_0x57BF57F8A1C8167A(4);
			if (iParam0 < 0)
			{
				unk_0xF942A67633C39BF7("ESMINDOLLA");
				unk_0xDA0C49A6D01B065C((-1 * iParam0), 1);
				fVar1 = unk_0xB12E7ADB99F5BEEB(0);
			}
			else
			{
				unk_0xF942A67633C39BF7("ESDOLLA");
				unk_0xDA0C49A6D01B065C(iParam0, 1);
				fVar1 = unk_0xB12E7ADB99F5BEEB(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xDDD5C8D7152E128F("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xDDD5C8D7152E128F("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xDDD5C8D7152E128F("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x9E8B548C035F223D(1f, func_27(14f));
			break;
	}
	unk_0xB2A9BDF905DC5A51(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xE5A80C83FA218963("PERCENTAGE");
			unk_0x38CD3C04C877C35F(iParam0);
			break;
		
		case 1:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("FO_NUM");
			unk_0x38CD3C04C877C35F(iParam0);
			break;
		
		case 2:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("FO_TWO_NUM");
			unk_0x38CD3C04C877C35F(iParam0);
			unk_0x38CD3C04C877C35F(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x9E8B548C035F223D(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xE5A80C83FA218963("ESMINDOLLA");
				unk_0xDA0C49A6D01B065C((-1 * iParam0), 1);
			}
			else
			{
				unk_0xE5A80C83FA218963("ESDOLLA");
				unk_0xDA0C49A6D01B065C(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xE5A80C83FA218963(sParam4);
			break;
		
		case 7:
			unk_0xE5A80C83FA218963("STRING");
			unk_0xA91D83F2CC1345A6(sParam4);
			break;
		
		case 8:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("STRING");
			unk_0x4E2EF4B6B665F3F4(iParam0, 14);
			break;
		
		case 9:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("STRING");
			unk_0x4E2EF4B6B665F3F4(iParam0, 6);
			break;
		
		case 10:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("STRING");
			unk_0x4E2EF4B6B665F3F4(iParam0, 2055);
			break;
		
		case 18:
			unk_0x57BF57F8A1C8167A(5);
			unk_0xE5A80C83FA218963("STRING");
			unk_0x4E2EF4B6B665F3F4(iParam0, 2055);
			break;
		
		case 12:
			unk_0xE5A80C83FA218963("AHD_DIST");
			unk_0x38CD3C04C877C35F(iParam0);
			break;
		
		case 13:
			unk_0xE5A80C83FA218963(sParam4);
			unk_0x38CD3C04C877C35F(iParam0);
			unk_0x38CD3C04C877C35F(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xE5A80C83FA218963(sParam4);
			unk_0x38CD3C04C877C35F(iParam0);
			unk_0x38CD3C04C877C35F(iParam1);
			break;
		
		case 16:
			unk_0xE5A80C83FA218963(sParam4);
			unk_0x38CD3C04C877C35F(iParam1);
			break;
		
		case 20:
			unk_0xE5A80C83FA218963(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xBC68FBDA73BBB4A6((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x9E8B548C035F223D(1f, func_27(14f));
		}
		else
		{
			unk_0xBC68FBDA73BBB4A6(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_30(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_30(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0xF942A67633C39BF7(sParam0);
	return (unk_0xB12E7ADB99F5BEEB(1) / 2f);
}

void func_33()
{
	unk_0x0F33095580A670CE(1);
	if (unk_0x4E38E404B98F3D9A() || unk_0x8B6A925F148E0E94())
	{
		unk_0x0F33095580A670CE(7);
	}
	unk_0x51D19921B47902B3(0);
}

void func_34(char* sParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x3640D836D145B814())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_39(0))
		{
			func_430(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

int func_39(int iParam0)
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

bool func_40()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		unk_0x366E7F593105797F(2, 199, 1);
	}
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (!iLocal_159)
		{
			if (func_216(uParam1, 0, &iLocal_160))
			{
				func_334(&(uParam1->f_666), 9, 0);
				iLocal_159 = 1;
			}
		}
	}
	if (iLocal_141)
	{
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			unk_0xA944664D6E32BDF8();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x5B99D5C0DE301BD3())
			{
				uParam1->f_646 = func_207(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_334(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_126(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_122(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x86AF801D34E482FF(2, 202))
				{
					uParam1->f_680 = 0;
					func_334(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x86AF801D34E482FF(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x86AF801D34E482FF(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_121(&(uParam1->f_72)))
			{
				if (!bLocal_161)
				{
					bLocal_161 = true;
					func_120(&(uParam1->f_509), 0, 0, 1, 1);
					func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_116(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_109(uParam1, 0, 0, iLocal_159);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xEEC203A73BC92E7E(uLocal_168) && unk_0x0BC8768247440B3A(uLocal_168) >= 0.995f) || !unk_0xEEC203A73BC92E7E(uLocal_168))
		{
			bLocal_154 = true;
			if (unk_0x0E8572B08CEB6A11(uLocal_174))
			{
				unk_0xFE1DEC9C5734D0C0(uLocal_174, 0);
				if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]) && !unk_0xECEC7528A52B4EE8(uLocal_138[1]))
				{
					unk_0x16D66F11FE644901(uLocal_138[0]);
					unk_0x16D66F11FE644901(uLocal_138[1]);
					unk_0xE37EB80DFB0D31FB(uLocal_138[0], 0, 0);
					unk_0xE37EB80DFB0D31FB(uLocal_138[1], 0, 0);
				}
			}
			func_108();
		}
		if (func_426(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_152)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_242(&uLocal_138, iVar2);
				}
				else
				{
					func_241(&uLocal_138);
				}
				iLocal_152 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x66AE54CE92457FEE(1);
			unk_0xC0BBE340BE2AA02D(func_417(3));
			if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]) && !unk_0xECEC7528A52B4EE8(uLocal_138[1]))
			{
				unk_0x880C7B361C9651EE(uLocal_138[0]);
				unk_0x880C7B361C9651EE(uLocal_138[1]);
			}
			func_107(uParam3);
			if (bParam4)
			{
				func_346(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_424(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_152 = 0;
			iLocal_150 = 0;
			bLocal_154 = false;
			func_104();
			iLocal_159 = 0;
			iLocal_134 = 0;
			uParam1->f_680 = 0;
			iLocal_160 = 0;
			bLocal_161 = false;
			func_96(&(uParam1->f_72), 0);
			func_462();
		}
		else if (iVar0 == 2)
		{
			func_95(uParam3);
			unk_0xC0BBE340BE2AA02D(func_417(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_53(func_90(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x1036762BD3781C84();
			*uParam0 = 13;
		}
		else if (((unk_0x86AF801D34E482FF(0, 234) || unk_0x86AF801D34E482FF(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_140)
			{
				Var3 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_52(Var3, 0, iLocal_140);
				iLocal_140 = 0;
			}
			else if (unk_0x86AF801D34E482FF(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var3 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_50(Var3);
			}
			else if (unk_0x86AF801D34E482FF(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_50(Var3);
			}
		}
		else if (((unk_0x86AF801D34E482FF(0, 211) || unk_0x96DF114B59E81B9C(0, 211)) && bVar1) && (iLocal_159 || !unk_0x5B99D5C0DE301BD3()))
		{
			uParam1->f_680 = 1;
			func_120(&(uParam1->f_509), 0, 0, 1, 1);
			func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_161)
			{
				func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_116(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x66AE54CE92457FEE(1);
		unk_0x1036762BD3781C84();
		func_46(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0x451E904FC8FB5C54(1);
		if (fVar4 > 2f)
		{
			Var5 = { 1992.294f, 3047.577f, 46.21517f };
			Var6 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var5 = { 1992.336f, 3047.924f, 46.21517f };
			Var6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_243();
		uLocal_168 = unk_0xD955F1CC0BCABC78(Var5, Var6, 2);
		uLocal_174 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0x47554D1FFAB68B45(uLocal_174, uLocal_168, sLocal_227[iVar7], "mini@dartsoutro");
		unk_0x6FA8221C9D2ECB46(uLocal_174, 1);
		unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
		if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]) && !unk_0xECEC7528A52B4EE8(uLocal_138[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), sLocal_223, sLocal_224[unk_0xB36B8558948EA7A8(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xAD844C8843FC405C(uLocal_138[1], uLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xAD844C8843FC405C(uLocal_138[0], uLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x4261814A9A26E86F(uLocal_138[1], sLocal_222, sLocal_224[unk_0xB36B8558948EA7A8(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_154 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0xDFB7BFA6482FEE1E();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_247(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_246(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0xDFB7BFA6482FEE1E() - uParam1->f_671) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x9B0169E27978C1A2(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_141 = 1;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_45(uParam0);
	func_44(uParam0);
	if (unk_0xDA654EB115F9FF7D(&(uParam0->f_550), "SPR_RESULT") || (unk_0xDA654EB115F9FF7D(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		unk_0xA08F3C300F9E3468("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xA08F3C300F9E3468("CommonMenu", 0);
		unk_0xA08F3C300F9E3468("MPLeaderboard", 0);
		unk_0xA08F3C300F9E3468("MPHud", 0);
		uParam0->f_1 = unk_0x42AA2CCF0B61DCD8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xE4D3CB39357EAEFA("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xDAE4BC89A198A6AF(uParam0->f_1) || !unk_0xAD9D75DD073BF477("CommonMenu")) || !unk_0xAD9D75DD073BF477("MPLeaderboard")) || !unk_0xAD9D75DD073BF477("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xDAE4BC89A198A6AF(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0xDAE4BC89A198A6AF(uParam0->f_1) || !unk_0xAD9D75DD073BF477("CommonMenu")) || !unk_0xAD9D75DD073BF477("MPLeaderboard")) || !unk_0xAD9D75DD073BF477("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xDAE4BC89A198A6AF(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_43(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_77509 = 1;
	return 1;
}

void func_43(var uParam0)
{
	unk_0x704F8697BB515627(uParam0->f_4, "CLEAR_ALL");
	unk_0x392841D58D2EED1D();
	if (unk_0x3640D836D145B814())
	{
		unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x9D7453DF8B7E9E0B(true);
		unk_0x392841D58D2EED1D();
	}
	unk_0x704F8697BB515627(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(2);
	func_13(unk_0x908D1ACF42DAF9B8(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0x392841D58D2EED1D();
	unk_0x704F8697BB515627(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(1);
	func_13(unk_0x908D1ACF42DAF9B8(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0x392841D58D2EED1D();
	unk_0x704F8697BB515627(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(0);
	func_13(unk_0x908D1ACF42DAF9B8(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0x392841D58D2EED1D();
	unk_0x704F8697BB515627(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x392841D58D2EED1D();
}

void func_44(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xD7BF3EFD7B2022EC(0);
	unk_0x9E8B548C035F223D(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xF942A67633C39BF7("STRING");
			unk_0xA91D83F2CC1345A6(&(uParam0->f_13));
			fVar0 = unk_0xB12E7ADB99F5BEEB(1);
		}
		else
		{
			unk_0xF942A67633C39BF7(&(uParam0->f_13));
			fVar0 = unk_0xB12E7ADB99F5BEEB(1);
		}
	}
	else
	{
		unk_0xF942A67633C39BF7("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x38CD3C04C877C35F(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x1896EC0B030A48A2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xA91D83F2CC1345A6(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xB12E7ADB99F5BEEB(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_45(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_46(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_50(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_51(Param0) };
	if (bLocal_88)
	{
		unk_0x7508AE96782B0441(uLocal_86, Var0);
		unk_0x32279DAB93C9A9FA(uLocal_86, uLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0x7508AE96782B0441(uLocal_85, Var0);
		unk_0x32279DAB93C9A9FA(uLocal_85, uLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_51(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_52(struct<3> Param0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	
	Var0 = { func_51(Param0) };
	if (bParam1)
	{
		unk_0x7508AE96782B0441(uLocal_85, Var0);
		unk_0x32279DAB93C9A9FA(uLocal_85, uLocal_84, 1500, 1, 1);
		unk_0x6FA8221C9D2ECB46(uLocal_84, 0);
		unk_0x7508AE96782B0441(uLocal_86, Var0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0x7508AE96782B0441(uLocal_85, Var0);
		unk_0x32279DAB93C9A9FA(uLocal_85, uLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0x32279DAB93C9A9FA(uLocal_84, uLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0x32279DAB93C9A9FA(uLocal_84, uLocal_86, 1500, 1, 1);
		}
		unk_0x6FA8221C9D2ECB46(uLocal_85, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_89(iParam0) == 3)
	{
		return;
	}
	if (func_89(iParam0) == 4)
	{
		return;
	}
	func_54(func_89(iParam0), 1, iParam1, iParam2, 0);
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_88();
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
					func_87(99, 1);
					func_86(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
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
							func_86(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_86(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_property"), iParam3);
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
									func_86(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				
				case 1:
					func_87(97, iParam3);
					break;
				
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
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
					func_86(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_total_cash_earned"), iParam3);
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
	func_56(iParam0);
	if (Global_42009 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
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

void func_56(int iParam0)
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

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_63(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_63(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_63(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_63(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_60(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_60(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_60(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_60(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_60(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_60(8276, 0, -1, 1, 0);
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
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_59() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_59() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_58(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)
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

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_61(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_62();
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

int func_62()
{
	return Global_1312763;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_62();
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

void func_64(int iParam0)
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_65(int iParam0)
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
		return func_67(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_66(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_66(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_66(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_66(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_66(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_66(8276, -1, 0);
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
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_59() /*5557*/].f_675.f_10, iParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_61(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_62();
	}
	iVar1 = func_69(iParam0, iParam1);
	uVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
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

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_62();
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

int func_70(bool bParam0)
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
		func_85(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_71(27, 1);
	return 1;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_72(iParam0, iParam1);
}

int func_72(int iParam0, int iParam1)
{
	if (func_84(14) && !func_83(iParam0))
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
	if (func_82(&Global_4272779))
	{
		if (func_80(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_73(&Global_4272779, iParam0))
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

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	func_76(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_74(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_75(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
	func_78(uParam0, (Global_4272778 - 0.5f));
}

void func_77(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_78(var uParam0, float fParam1)
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

float func_79(var uParam0)
{
	return uParam0->f_80;
}

bool func_80(var uParam0, int iParam1)
{
	return func_81(uParam0, iParam1) != -1;
}

int func_81(var uParam0, int iParam1)
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

bool func_82(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_83(int iParam0)
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

bool func_84(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_85(int iParam0, int iParam1)
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

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)
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

void func_88()
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

int func_89(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_90()
{
	func_91();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_91()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_93(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_503(unk_0x7D2B9E6A64637269());
			if (func_92(iVar0) && (!func_84(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_92(Global_112293.f_2361.f_539.f_4321))
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

bool func_92(int iParam0)
{
	return iParam0 < 3;
}

int func_93(int iParam0)
{
	if (func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_95(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_96(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_102(uParam0);
		func_101(uParam0);
		func_100(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_98();
	}
	if (unk_0xB30CD10E2CD1B67D("LEADERBOARD_SCENE"))
	{
		unk_0xC0BBE340BE2AA02D("LEADERBOARD_SCENE");
	}
	if (unk_0x0B4295B1608BB934())
	{
		func_97(&(Global_1840924.f_49));
	}
	Global_2544210.f_4031 = 0;
}

void func_97(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_98()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_99(&(Global_1835392.f_2780));
	func_97(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_97(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_97(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_99(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_100(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_97(&(Global_1835392.f_2830));
}

void func_101(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_97(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_103(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_97(&(Global_1835008.f_1));
	unk_0xC9CDDA3F4021A8AE(*uParam2, uParam2->f_1, -1);
}

void func_104()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_106(&(Global_1835013.f_73));
	func_106(&(Global_1835013.f_142));
	func_106(&(Global_1835013.f_211));
	func_106(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_105(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_105(var uParam0)
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

void func_106(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_107(var uParam0)
{
	func_45(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_108()
{
	unk_0x6FA8221C9D2ECB46(uLocal_81, 1);
}

int func_109(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_120(&(uParam0->f_509), 0, 0, 1, 1);
			func_119(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_119(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_119(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x5B99D5C0DE301BD3())
			{
				func_119(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_116(&(uParam0->f_509), 1);
			func_334(&(uParam0->f_666), 8, 0);
			func_334(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_112(func_115(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_112(func_115(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_112(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_413(&(uParam0->f_57), 0, 0);
			}
			func_122(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xA300BD5F71A8C704())
		{
			if ((unk_0xDFB7BFA6482FEE1E() - uParam0->f_671) > 900)
			{
				if (unk_0x5C6675393464A814(2, 216))
				{
					unk_0x9B0169E27978C1A2(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_334(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x86AF801D34E482FF(2, 215))
				{
					unk_0x9B0169E27978C1A2(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_111();
					func_110();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x609EEF618F8CC869(2, 201))
		{
			return 2;
		}
		else if (unk_0x609EEF618F8CC869(2, 202))
		{
			func_334(&(uParam0->f_666), 9, 0);
			func_334(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_110()
{
	if (Global_2441237.f_2841[0 /*80*/].f_2 != 0)
	{
		Global_2441237.f_2841[0 /*80*/].f_2 = 5;
	}
}

void func_111()
{
	Global_31490 = 1;
}

void func_112(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_113(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_30(3, iVar0);
		Global_1380638.f_2797[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_2797.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_2797.f_183[iVar0] = iParam3;
		Global_1380638.f_2797.f_172[iVar0] = iParam2;
		Global_1380638.f_2797.f_205[iVar0] = iParam4;
		Global_1380638.f_2797.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1380638.f_2797.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1380638.f_2797.f_420[iVar0] = iParam7;
		Global_1380638.f_2797.f_453[iVar0] = iParam8;
		Global_1380638.f_2797.f_431[iVar0] = iParam9;
		Global_1380638.f_2797.f_442[iVar0] = iParam10;
		Global_1380638.f_2797.f_464[iVar0] = iParam11;
		Global_1380638.f_2797.f_475[iVar0] = iParam12;
		Global_1380638.f_2797.f_486[iVar0] = iParam13;
		Global_1380638.f_2797.f_497[iVar0] = iParam14;
	}
}

int func_113(var uParam0)
{
	if (unk_0x4030103C8B148AFC(uParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(uParam0, "") || unk_0xDA654EB115F9FF7D(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_114(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 1024);
	}
	else
	{
		func_117(&(uParam0->f_1), 1024);
	}
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_119(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xE4D3CB39357EAEFA("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 32);
	}
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		func_118(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD2E50C41F073454(*uParam0, 1);
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (bParam3)
		{
			func_118(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_118(&(uParam0->f_1), 8192);
	}
}

int func_121(var uParam0)
{
	if ((unk_0x234B68AC2E35ED5A(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_122(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB()) || unk_0x8B6A925F148E0E94()) || unk_0xA2DFFBCD9CFB74A3())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_125(uParam0))
	{
		return;
	}
	unk_0xBDF731C5B27D78FF();
	unk_0x0F33095580A670CE(iParam2);
	if (!func_124(uParam0->f_1, 256) || (func_124(uParam0->f_1, 8192) && unk_0x0C7C436873368EDB(2)))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_CLEAR_SPACE");
		unk_0x82D42F43BE26EB72(fParam1);
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(*uParam0, "SET_MAX_WIDTH");
		unk_0x82D42F43BE26EB72(fParam5);
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x392841D58D2EED1D();
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(func_124(uParam0->f_1, 4096));
			unk_0x392841D58D2EED1D();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x0D901EFDFD7EF9D5(2);
					break;
				
				case 2:
					bVar4 = !unk_0x0D901EFDFD7EF9D5(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x9E3D03981E2E9AD9(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x234B68AC2E35ED5A(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x234B68AC2E35ED5A(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x908D1ACF42DAF9B8(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xD895F953C52A8886(iVar0, iVar1, bVar2);
						}
						if (!unk_0xAB6A270F84A8781E(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xAB6A270F84A8781E(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x3640D836D145B814())
					{
						if (func_124(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x9D7453DF8B7E9E0B(true);
								unk_0x9E3D03981E2E9AD9(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x9D7453DF8B7E9E0B(false);
								unk_0x9E3D03981E2E9AD9(-1);
							}
						}
					}
					unk_0x392841D58D2EED1D();
				}
			}
			iVar6++;
		}
		fVar8 = func_123(bParam4, func_123(func_124(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x704F8697BB515627(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x82D42F43BE26EB72(fVar8);
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x82D42F43BE26EB72(0f);
		unk_0x82D42F43BE26EB72(0f);
		unk_0x82D42F43BE26EB72(0f);
		unk_0x82D42F43BE26EB72(80f);
		unk_0x392841D58D2EED1D();
		func_118(&(uParam0->f_1), 256);
		func_117(&(uParam0->f_1), 128);
	}
	unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 0, 0);
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_125(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			func_118(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_126(var uParam0, var uParam1)
{
	func_127(uParam1, uParam0);
}

void func_127(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_206(&(Global_1840924.f_49), 1, 0);
	unk_0xBD35EB504610C23C();
	func_205();
	func_38(0);
	unk_0xAF98B1BA240CE3DB();
	func_203(1);
	unk_0xEFD424FDD55A6EC7(10);
	func_202(1);
	func_201(1);
	if (!func_198())
	{
		if (!unk_0xB30CD10E2CD1B67D("LEADERBOARD_SCENE"))
		{
			unk_0xB84B43B766630B5C("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x234B68AC2E35ED5A(uParam1->f_42, 3))
	{
		*uParam0 = func_197();
		unk_0x191DDA30577F440A(&(uParam1->f_42), 3);
	}
	Var10 = { func_23(unk_0x1146A9AE09CE2B14()) };
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		if (((!unk_0x1D0F0A8090E1551E() || !unk_0x5B99D5C0DE301BD3()) || (!unk_0xAE06D39287DB2B6A() && unk_0xF54628B8295E0CFD())) || Global_1835392.f_2832 != 0)
		{
			if (!unk_0x5B99D5C0DE301BD3())
			{
				if (Global_1835392.f_2829 != 2)
				{
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!unk_0xAE06D39287DB2B6A() && unk_0xF54628B8295E0CFD())
			{
				if (Global_1835392.f_2829 != 3)
				{
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!unk_0x1D0F0A8090E1551E())
			{
				if (Global_1835392.f_2829 != 4)
				{
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_42, 1))
			{
				unk_0x704F8697BB515627(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x392841D58D2EED1D();
				func_196(*uParam0, Global_1835392.f_2780);
				if (unk_0x49875FC4498CDA9A(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_195(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar6 = { Global_1835392.f_2780.f_9 };
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &cVar6, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_193(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar9 = 0;
				unk_0x191DDA30577F440A(&iVar9, 4);
				func_192(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x191DDA30577F440A(&iVar9, 5);
				func_192(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x191DDA30577F440A(&iVar9, 6);
				func_192(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x191DDA30577F440A(&(uParam1->f_42), 1);
				func_191(*uParam0);
				unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 2);
				unk_0x66AE54CE92457FEE(1);
			}
			else
			{
				func_191(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_156(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 1);
				if (!unk_0x234B68AC2E35ED5A(uParam1->f_42, 0))
				{
					unk_0x704F8697BB515627(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x392841D58D2EED1D();
					func_196(*uParam0, Global_1835392.f_2780);
					if (unk_0x49875FC4498CDA9A(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_195(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar6 = { Global_1835392.f_2780.f_9 };
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &cVar6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_193(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					unk_0x191DDA30577F440A(&(uParam1->f_42), 0);
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 4);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 5);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 6);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x191DDA30577F440A(&iVar9, 7);
						func_155(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_97(&(Global_1835392.f_2823));
				}
				else if (func_153(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 4);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 5);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x191DDA30577F440A(&iVar9, 6);
							func_192(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x191DDA30577F440A(&iVar9, 7);
						func_155(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_97(&(Global_1835392.f_2823));
				}
				func_191(*uParam0);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 0);
				if (!unk_0x234B68AC2E35ED5A(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x704F8697BB515627(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x392841D58D2EED1D();
					func_196(*uParam0, Global_1835392.f_2780);
					if (unk_0x49875FC4498CDA9A(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_195(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar6 = { Global_1835392.f_2780.f_9 };
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &cVar6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_194(*uParam0, &(Global_1835392.f_2780.f_1), &cVar6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_193(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!unk_0x234B68AC2E35ED5A(uParam1->f_42, 6))
					{
						func_100(&Global_1839723);
						func_149(uParam1, &Global_1839723);
						func_148(uParam1, &Global_1839723);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_195(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x191DDA30577F440A(&iVar9, 4);
									func_192(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x191DDA30577F440A(&iVar9, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_195(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_192(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_192(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x191DDA30577F440A(&iVar9, 6);
									if (!unk_0x678E959F60C0DB94())
									{
										bVar14 = true;
									}
									else if (!unk_0xB0B4E62B0960B28D())
									{
										bVar14 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_195(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_192(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_192(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_147(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_195(uParam1->f_44))
								{
									unk_0x35EE8BE28AE0C86D(unk_0x1146A9AE09CE2B14(), &uVar11);
									if (!Global_1839723[iVar0 /*100*/].f_74 && unk_0xDA654EB115F9FF7D(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_146(&(Global_1839723[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x191DDA30577F440A(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x191DDA30577F440A(&iVar9, 3);
											}
										}
									}
									if (func_195(uParam1->f_44))
									{
										cVar6 = { Global_1839723[iVar0 /*100*/] };
										if (!unk_0xAB6A270F84A8781E(&(Global_1839723[iVar0 /*100*/].f_84)) && !unk_0xDA654EB115F9FF7D(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar6, "/", 64);
											StringConCat(&cVar6, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_145(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &cVar6, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_145(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar5 = false;
										if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2770, iVar1))
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_136(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_136(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_133(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_133(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_132();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x191DDA30577F440A(&iVar9, 2);
											unk_0x191DDA30577F440A(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_131(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x191DDA30577F440A(&iVar9, 4);
						func_192(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x191DDA30577F440A(&iVar9, 5);
						func_192(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x191DDA30577F440A(&iVar9, 6);
						func_192(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x191DDA30577F440A(&(uParam1->f_42), 1);
					unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 2);
					func_191(*uParam0);
					unk_0x66AE54CE92457FEE(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x191DDA30577F440A(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_191(*uParam0);
					func_128(uParam0, uParam1);
				}
			}
		}
	}
}

void func_128(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		unk_0xA944664D6E32BDF8();
		unk_0x203739B163D4D88E(2, 239);
		unk_0x203739B163D4D88E(2, 240);
		unk_0x203739B163D4D88E(2, 237);
		unk_0x203739B163D4D88E(2, 238);
		unk_0x366E7F593105797F(2, 200, 1);
		if (unk_0x51794501073F0A33(2, 241))
		{
			unk_0x5EFB6245D1251EDA(2, 188, 1f);
		}
		if (unk_0x51794501073F0A33(2, 242))
		{
			unk_0x5EFB6245D1251EDA(2, 187, 1f);
		}
		if (unk_0x4F7359A5B79A8C65(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x5EFB6245D1251EDA(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		func_130(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x234B68AC2E35ED5A(uParam1->f_246, 0))
		{
			if ((unk_0x5C6675393464A814(2, 188) || unk_0x51794501073F0A33(2, 188)) || iVar6 < -100)
			{
				unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x191DDA30577F440A(&(uParam1->f_246), 0);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 188))
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_246), 0);
		}
		if (!unk_0x234B68AC2E35ED5A(uParam1->f_246, 1))
		{
			if ((unk_0x5C6675393464A814(2, 187) || unk_0x51794501073F0A33(2, 187)) || iVar6 > 100)
			{
				unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x191DDA30577F440A(&(uParam1->f_246), 1);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 187))
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0x234B68AC2E35ED5A(uParam1->f_246, 3))
	{
		if ((unk_0x5C6675393464A814(2, 204) || unk_0x96DF114B59E81B9C(2, 204)) || unk_0x86AF801D34E482FF(2, 237))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_246), 3);
			func_97(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_129(uParam1, 204))
	{
		unk_0xC664C0067EEAB8D1(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xC664C0067EEAB8D1(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_131(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x191DDA30577F440A(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xC664C0067EEAB8D1(&(uParam1->f_42), 2);
		}
		if (func_147(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_246, 2))
			{
				if (unk_0x5C6675393464A814(2, 217) || unk_0x96DF114B59E81B9C(2, 217))
				{
					if (!unk_0xC1FCB6CC23926AD5())
					{
						unk_0x9B0169E27978C1A2(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x191DDA30577F440A(&(uParam1->f_246), 2);
						unk_0x02DA1DDD95DF45DB(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x5C6675393464A814(2, 217))
			{
				unk_0xC664C0067EEAB8D1(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_129(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_130(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x5C6675393464A814(2, iParam1) && !unk_0x51794501073F0A33(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_153(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x5C6675393464A814(2, iParam1) && !unk_0x51794501073F0A33(2, iParam1)) || func_153(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_130(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0xBDAD193FD6CC54F5(2, 218) * 127f));
	*uParam1 = floor((unk_0xBDAD193FD6CC54F5(2, 219) * 127f));
	*uParam2 = floor((unk_0xBDAD193FD6CC54F5(2, 220) * 127f));
	*uParam3 = floor((unk_0xBDAD193FD6CC54F5(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0xC40DD87705E0DB63(2, 218) * 127f));
			*uParam1 = floor((unk_0xC40DD87705E0DB63(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0xC40DD87705E0DB63(2, 220) * 127f));
			*uParam3 = floor((unk_0xC40DD87705E0DB63(2, 221) * 127f));
		}
	}
}

void func_131(var uParam0, int iParam1, int iParam2)
{
	unk_0x704F8697BB515627(uParam0, "SET_SLOT_STATE");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	unk_0x392841D58D2EED1D();
}

void func_132()
{
	unk_0x392841D58D2EED1D();
}

void func_133(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x21300A5159EC89B1(fParam15, 2);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x38CD3C04C877C35F(floor(fParam15));
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0xA700E2BE6F531543())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_135(fParam15);
					}
					else
					{
						fParam15 = func_134(fParam15);
					}
				}
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x21300A5159EC89B1(fParam15, 2);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 0:
			break;
	}
}

float func_134(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_135(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_136(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x38CD3C04C877C35F(iParam15);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x38CD3C04C877C35F(-iParam15);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 14);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 2055);
					unk_0xD4B2C39F7AD5A6A6();
				}
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 14);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 2055);
					unk_0xD4B2C39F7AD5A6A6();
				}
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 14);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam15, 2055);
					unk_0xD4B2C39F7AD5A6A6();
				}
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0x62A5B93F8270CC83(iParam15))
				{
					unk_0x35CA0C119E6A2A27("SCLB_VEH_CUST");
					unk_0x1896EC0B030A48A2(unk_0x3FCA3350E87E4DB8(iParam15));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
					unk_0xD4B2C39F7AD5A6A6();
				}
			}
			else if (unk_0x62A5B93F8270CC83(iParam15))
			{
				unk_0x35CA0C119E6A2A27(unk_0x3FCA3350E87E4DB8(iParam15));
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 8:
			if (func_144(iParam15) != 0)
			{
				unk_0x35CA0C119E6A2A27(func_141(func_144(iParam15), 0));
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0xA700E2BE6F531543())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = floor(func_135(to_float(iParam15)));
					}
					else
					{
						iParam15 = floor(func_134(to_float(iParam15)));
					}
				}
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x38CD3C04C877C35F(iParam15);
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				Var0 = { func_140(iParam15) };
				unk_0x35CA0C119E6A2A27(&Var0);
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 22:
			if (bParam16)
			{
				unk_0x35CA0C119E6A2A27("NUMBER");
				unk_0x38CD3C04C877C35F(func_137(iParam15));
				unk_0xD4B2C39F7AD5A6A6();
			}
			else
			{
				unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
				unk_0xD4B2C39F7AD5A6A6();
			}
			break;
		
		case 0:
			break;
	}
}

int func_137(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_139(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (to_float(iParam0) - to_float(iVar0));
		iVar2 = floor((fVar1 / to_float(Global_262145.f_30562)));
		return (199 + iVar2);
	}
	fVar3 = (to_float(Global_262145.f_30561) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return floor(func_138(-fVar5, -fVar6, fVar7, 1));
}

float func_138(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_139(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (to_float(Global_262145.f_30561) / 2f);
	return round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_140(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_141(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case -1280223747:
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		default:
			if (func_143(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_142(&(Var0.f_31));
				}
				else
				{
					return func_142(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_142(var uParam0)
{
	return uParam0;
}

int func_143(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xB3E2CBD7C8448401();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x0466DAD8CA6C1EAD(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_144(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_145(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0x704F8697BB515627(uParam0, "SET_SLOT");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	if (iParam3 > 0)
	{
		unk_0x35CA0C119E6A2A27("NUMBER");
		unk_0x38CD3C04C877C35F(iParam3);
		unk_0xD4B2C39F7AD5A6A6();
	}
	else
	{
		unk_0x35CA0C119E6A2A27("SC_LB_EMPTY");
		unk_0xD4B2C39F7AD5A6A6();
	}
	unk_0x5FEAD10623875182(cParam4);
	unk_0x5FEAD10623875182(uParam5);
}

int func_146(var uParam0, var uParam1)
{
	if (!func_147(*uParam0))
	{
		return 0;
	}
	if (!func_147(*uParam1))
	{
		return 0;
	}
	if (unk_0x65436E51C985931E(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

void func_148(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_42, 5) && !unk_0x234B68AC2E35ED5A(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_149(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_42, 5) && !unk_0x234B68AC2E35ED5A(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_152(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_152(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_152(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_150(uParam1);
	}
}

void func_150(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x07AB8C53F0D76F02(Global_1835392.f_2826))
	{
		iVar4 = unk_0xEAE1AF477F6A275F(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_151(&Global_1839593);
				iVar2 = 0;
				unk_0x561E884F17F3B19A(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (unk_0x234B68AC2E35ED5A(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x234B68AC2E35ED5A(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x234B68AC2E35ED5A(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x234B68AC2E35ED5A(Global_1839593.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_146(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (unk_0x234B68AC2E35ED5A(Global_1839593.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_151(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_152(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0x1146A9AE09CE2B14()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = floor(to_float((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_153(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_154(uParam0, bParam2, 0);
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

void func_154(var uParam0, bool bParam1, bool bParam2)
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

void func_155(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x191DDA30577F440A(&iParam2, 7);
	unk_0x704F8697BB515627(uParam0, "SET_SLOT");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	unk_0x35CA0C119E6A2A27(sParam3);
	unk_0xC34AC094B6EDF9A4();
	unk_0x392841D58D2EED1D();
}

int func_156(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_190(&(Global_1835392.f_2827)))
		{
			func_154(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_153(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x1D0F0A8090E1551E() || !unk_0x5B99D5C0DE301BD3()) || (!unk_0xAE06D39287DB2B6A() && unk_0xF54628B8295E0CFD())) || Global_1835392.f_2832 != 0)
	{
		unk_0xC664C0067EEAB8D1(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_42, 4))
	{
		func_189(uParam0);
		unk_0x191DDA30577F440A(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_187(uParam0))
	{
		return 0;
	}
	if (!func_185(uParam0))
	{
		return 0;
	}
	if (!func_172(uParam0))
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_42, 6))
	{
		func_100(&Global_1839723);
		func_149(uParam0, &Global_1839723);
		func_148(uParam0, &Global_1839723);
		unk_0x191DDA30577F440A(&(uParam0->f_42), 6);
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_42, 7))
	{
		if (!func_190(&(Global_1835392.f_2830)))
		{
			func_154(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_153(&(Global_1835392.f_2830), 30000, 1))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_42), 7);
		}
		if (func_169(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_166(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_161(&Global_1839723))
		{
			func_157(&Global_1839723);
			unk_0x191DDA30577F440A(&(uParam0->f_42), 7);
			func_157(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_157(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_160(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_159(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_151(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xDA654EB115F9FF7D(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_147((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x191DDA30577F440A(&(Global_1839593.f_61), 0);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_1839593.f_61), 0);
			}
			unk_0x191DDA30577F440A(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (unk_0x234B68AC2E35ED5A(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			unk_0xD54899846E0850A1(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_158(unk_0x1146A9AE09CE2B14()) };
}

Vector3 func_158(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x07AB8C53F0D76F02(Global_1838577.f_81[iParam1]))
		{
			unk_0x2AC25F1D790316ED(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x07AB8C53F0D76F02(iParam0))
		{
			unk_0x2AC25F1D790316ED(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x07AB8C53F0D76F02(Global_1838577.f_81[iVar0]))
		{
			iVar3 = unk_0x68002870F0EF2AD1(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_161(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_165(uParam0);
			if (unk_0xE22116C6D321FECA() && !unk_0x68B90AB279E39C7B(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_147((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_164(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841025))
					{
						Global_1841025[Global_1841025.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841025.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841025.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_162(&((uParam0[1 /*100*/])->f_76), &(Global_1841025.f_206), &Global_1841025, &(Global_1841025.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841025.f_206 > 12)
			{
				Global_1841025.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841025.f_206)
				{
					if (func_147((uParam0[iVar0 /*100*/])->f_32) && func_147(Global_1841025[iVar1 /*13*/]))
					{
						if (unk_0x65436E51C985931E(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841025[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841025.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_162(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x1F0230A9743E2AD3())
			{
			}
			else
			{
				unk_0xF08FE90569CA1845();
				unk_0x5F451CBA22BC908B(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x1F0230A9743E2AD3())
			{
				if (unk_0xFF47446BCCB6E3AF())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x6F85190262F12BB5(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_163(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x1F0230A9743E2AD3())
			{
				unk_0x10C3C5B6A801C599();
			}
			else
			{
				unk_0xF08FE90569CA1845();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_163(var uParam0, var uParam1)
{
	unk_0xDE25303DF0CA8E75(uParam0, 35, uParam1);
}

int func_164(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_147(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x65436E51C985931E(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_105(&(Global_1841025[iVar0 /*13*/]));
		StringCopy(&(Global_1841025.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x1F0230A9743E2AD3())
		{
			unk_0xF08FE90569CA1845();
		}
	}
	if (unk_0x1F0230A9743E2AD3())
	{
		unk_0x10C3C5B6A801C599();
	}
	Global_1841025.f_206 = 0;
}

int func_166(var uParam0)
{
	int iVar0;
	
	if (unk_0x3640D836D145B814())
	{
		return 1;
	}
	else if (unk_0x2322DD4FBF5E4E2F() || unk_0xE22116C6D321FECA())
	{
		if (!func_168(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_167(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_167(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_147(*uParam1))
			{
				if (!unk_0x9B4A5ABBC2942C51(uParam1))
				{
					if (unk_0x2322DD4FBF5E4E2F() || unk_0xE22116C6D321FECA())
					{
						if (unk_0x2758917A814C20F8(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x60FF5ED57C36A351())
					{
						if (unk_0x2758917A814C20F8(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x2866F13E46EAAE03(uParam1), 64);
						if (unk_0xDC39E4D9D73B0D14())
						{
						}
						else if (unk_0xE22116C6D321FECA())
						{
						}
						else if (unk_0x3640D836D145B814())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xF04DBC0AC5A2AB23(unk_0x817F41864B424C70(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x9B4A5ABBC2942C51(uParam1))
			{
				if (!unk_0xEA6E45901A12B311())
				{
					if (unk_0xA63E80C5933E74F0())
					{
						StringCopy(sParam2, unk_0x2866F13E46EAAE03(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xF04DBC0AC5A2AB23(unk_0x817F41864B424C70(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x2322DD4FBF5E4E2F() && !unk_0xE22116C6D321FECA())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_105(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_147((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x4AA9B591F7C133EB(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xC43919AB44F8EB1D((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_147((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_169(var uParam0)
{
	int iVar0;
	
	if (unk_0x2322DD4FBF5E4E2F() || unk_0xE22116C6D321FECA())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_171(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_170(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB6A270F84A8781E(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE8C1AC5A90BA3636(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_147(Var0))
			{
				if (!unk_0x9B4A5ABBC2942C51(&Var0))
				{
					if ((unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F()) || unk_0xE22116C6D321FECA())
					{
						if (unk_0x2758917A814C20F8(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x2866F13E46EAAE03(&Var0), 64);
						if (unk_0xDC39E4D9D73B0D14())
						{
						}
						else if (unk_0xE22116C6D321FECA())
						{
						}
						else if (unk_0x3640D836D145B814())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xF04DBC0AC5A2AB23(unk_0x817F41864B424C70(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x9B4A5ABBC2942C51(&Var0))
			{
				if (!unk_0xEA6E45901A12B311())
				{
					if (unk_0xA63E80C5933E74F0())
					{
						StringCopy(sParam17, unk_0x2866F13E46EAAE03(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xF04DBC0AC5A2AB23(unk_0x817F41864B424C70(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_171(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x2322DD4FBF5E4E2F() && !unk_0xE22116C6D321FECA())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB6A270F84A8781E(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE8C1AC5A90BA3636(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_147(Var1[0 /*13*/]))
			{
				if (!unk_0x9B4A5ABBC2942C51(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x4AA9B591F7C133EB(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xF04DBC0AC5A2AB23(unk_0x817F41864B424C70(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xC43919AB44F8EB1D(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_23(unk_0x1146A9AE09CE2B14()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835392.f_2775[iVar9] = -1;
			Global_1835392.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x29712F962253A7EB())
			{
				if (unk_0xDA1611E46AAEA71B(&Var12))
				{
					if (unk_0xEDDAF8F99F371228(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_183(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_184(), 0, 0, 0))
			{
				func_182(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_184())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0x03E204E0FE6D29E3(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_146(&Var0, &Var12) || func_146(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0x234B68AC2E35ED5A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xD8E1354FA73B9C12(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xF6C7A5A21FE66C97(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_181(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0x03E204E0FE6D29E3(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar9] < 11)
							{
								if (func_184() && iVar5 == 0)
								{
									func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar9] = 0;
									Global_1835392.f_2704[iVar9]++;
								}
								if (func_184() && (func_146(&Var0, &Var12) || func_146(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_146(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835392.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_179(uParam0->f_44))
									{
										iVar4 = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_195(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xF6C7A5A21FE66C97(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						if (!func_184())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_181(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0x03E204E0FE6D29E3(iVar7, &Var0);
							if (Global_1835392.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_184() && iVar5 == iVar7)
								{
									if (!func_146(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_184() && (func_146(&Var0, &Var12) || func_146(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar9] < 11)
								{
									if (func_147(Var0) && !func_146(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_146(&Var0, &Var12))
										{
											if (Global_1835392.f_2775[iVar9] < 0)
											{
												Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_179(uParam0->f_44))
										{
											iVar4 = unk_0xD8E1354FA73B9C12(iVar7, Global_1835392.f_2709);
											if (iVar4 == 1)
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_195(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xD8E1354FA73B9C12(iVar7, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xF6C7A5A21FE66C97(iVar7, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_181(&Var0);
							iVar7++;
						}
						unk_0xE8FF84E6B65800A1();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835392.f_2775[iVar9] == -1 && func_184())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						unk_0xE8FF84E6B65800A1();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_174(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_182(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0x03E204E0FE6D29E3(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835392.f_2704[iVar9] < 11 || bVar10)
							{
								if (func_184() && (func_146(&Var0, &Var12) || func_146(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_179(uParam0->f_44))
									{
										iVar4 = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_195(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xF6C7A5A21FE66C97(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835392.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar9] < 11)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_179(uParam0->f_44))
									{
										iVar4 = unk_0xD8E1354FA73B9C12(iVar2, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_195(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xD8E1354FA73B9C12(iVar2, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xF6C7A5A21FE66C97(iVar2, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_181(&Var0);
							iVar2++;
						}
					}
					unk_0xE8FF84E6B65800A1();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xE8FF84E6B65800A1();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x191DDA30577F440A(&(Global_1835392.f_2832), iVar9);
					Global_1835392.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835392.f_2775[iVar9] == -1 && func_184())
				{
					if (Global_1835392.f_2704[iVar9] >= 1)
					{
						func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
					Global_1835392.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_173(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_184() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_184())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_174(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_177() && !func_176())
			{
				func_175(*uParam2);
				if (unk_0x959CFDF61FAE6BC9(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xE51580B6E84596E9(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x475CA10CECBD99A2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_175(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1835008 = 1;
	func_206(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_176()
{
	if (unk_0xA300BD5F71A8C704() && !func_198())
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if (unk_0xE368706564BE90F6() || Global_1835008)
	{
		func_178();
		return 1;
	}
	return 0;
}

void func_178()
{
	if (func_153(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xC9CDDA3F4021A8AE(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_97(&(Global_1835008.f_1));
	}
}

int func_179(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_195(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), 64);
		sParam1->f_32 = { func_23(unk_0x1146A9AE09CE2B14()) };
	}
	sParam1->f_59 = iParam2;
	if (func_179(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_181(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_182(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_183(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_177() && !func_176())
			{
				func_175(*uParam2);
				if (bParam5)
				{
					if (unk_0x234B68AC2E35ED5A(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x7567140AEEBE24B9(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x78EE0531704D6DD9(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x6D488077FC7AF376(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xE51580B6E84596E9(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x475CA10CECBD99A2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_184()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_185(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_23(unk_0x1146A9AE09CE2B14()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x3C475AF50685F9DC();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_184())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_182(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x235110569A42EC48(&Var1))
					{
						if (func_184())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0x03E204E0FE6D29E3(iVar6, &Var0);
									if (func_195(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_146(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x234B68AC2E35ED5A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xD8E1354FA73B9C12(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xF6C7A5A21FE66C97(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_181(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_184() && iVar4 == 0)
						{
							if (Global_1835392.f_2704[iVar9] < 11)
							{
								func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								Global_1835392.f_2775[iVar9] = 0;
								Global_1835392.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0x03E204E0FE6D29E3(0, &Var0);
							if (func_184() && (func_146(&Var0, &Var10) || func_146(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_147(Var0) && Global_1835392.f_2704[iVar9] < 11)
							{
								if (func_146(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_179(uParam0->f_44))
								{
									iVar7 = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2709);
									if (iVar7 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_195(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835392.f_2708)
								{
									if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2710[iVar2]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xF6C7A5A21FE66C97(0, Global_1835392.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_181(&Var0);
								unk_0xE8FF84E6B65800A1();
								func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar9] == -1 && func_184())
								{
									if (Global_1835392.f_2704[iVar9] >= 1)
									{
										func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
									Global_1835392.f_2704[iVar9]++;
								}
								return 0;
							}
							func_181(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_181(&Var0);
							unk_0xE8FF84E6B65800A1();
							func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar9] == -1 && func_184())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_184())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0x03E204E0FE6D29E3(iVar6, &Var0);
							if (Global_1835392.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_184() && iVar4 == iVar6)
								{
									if (!func_146(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_184() && (func_146(&Var0, &Var10) || func_146(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_147(Var0) && !func_146(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_146(&Var0, &Var10))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_179(uParam0->f_44))
										{
											iVar7 = unk_0xD8E1354FA73B9C12(iVar6, Global_1835392.f_2709);
											if (iVar7 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_195(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar2] = unk_0xD8E1354FA73B9C12(iVar6, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar2] = unk_0xF6C7A5A21FE66C97(iVar6, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_181(&Var0);
							iVar6++;
						}
						unk_0xE8FF84E6B65800A1();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar9] == -1 && func_184())
						{
							if (Global_1835392.f_2704[iVar9] >= 1)
							{
								func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_180(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
							Global_1835392.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x191DDA30577F440A(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_173(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_186(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_177() && !func_176())
			{
				func_175(*uParam2);
				if (leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xE51580B6E84596E9(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x475CA10CECBD99A2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_187(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_23(unk_0x1146A9AE09CE2B14()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835392.f_2775[iVar10] = -1;
			Global_1835392.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_188(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_183(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_184(), 0, 0, 0))
			{
				func_182(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_184())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0x03E204E0FE6D29E3(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_146(&Var1, &Var0) || func_146(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0x234B68AC2E35ED5A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xD8E1354FA73B9C12(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xF6C7A5A21FE66C97(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_181(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0x03E204E0FE6D29E3(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar10] < 11)
							{
								if (func_184() && iVar6 == 0)
								{
									func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835392.f_2775[iVar10] = 0;
									Global_1835392.f_2704[iVar10]++;
								}
								if (func_184() && (func_146(&Var1, &Var0) || func_146(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_146(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835392.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_179(uParam0->f_44))
									{
										iVar5 = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2709);
										if (iVar5 == 1)
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_195(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xF6C7A5A21FE66C97(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						if (!func_184())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_181(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0x03E204E0FE6D29E3(iVar8, &Var1);
							if (Global_1835392.f_2704[iVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_184() && iVar6 == iVar8)
								{
									if (!func_146(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
										Global_1835392.f_2704[iVar10]++;
									}
								}
								if (func_184() && (func_146(&Var1, &Var0) || func_146(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar10] < 11)
								{
									if (func_147(Var1) && !func_146(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_146(&Var1, &Var0))
										{
											if (Global_1835392.f_2775[iVar10] < 0)
											{
												Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_179(uParam0->f_44))
										{
											iVar5 = unk_0xD8E1354FA73B9C12(iVar8, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_195(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835392.f_2708)
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xD8E1354FA73B9C12(iVar8, Global_1835392.f_2710[iVar3]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xF6C7A5A21FE66C97(iVar8, Global_1835392.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835392.f_2704[iVar10]++;
									}
								}
							}
							func_181(&Var1);
							iVar8++;
						}
						unk_0xE8FF84E6B65800A1();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835392.f_2775[iVar10] == -1 && func_184())
							{
								if (Global_1835392.f_2704[iVar10] >= 1)
								{
									func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
								Global_1835392.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						unk_0xE8FF84E6B65800A1();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_174(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_182(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0x03E204E0FE6D29E3(iVar3, &Var1);
							if (func_184() && (func_146(&Var1, &Var0) || func_146(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835392.f_2704[iVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_179(uParam0->f_44))
										{
											iVar5 = unk_0xD8E1354FA73B9C12(0, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_195(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0xD8E1354FA73B9C12(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xF6C7A5A21FE66C97(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835392.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar10]++;
											}
										}
										else if (Global_1835392.f_2704[iVar10] == 1 && Global_1835392.f_2775[iVar10] == -1)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
									else if (Global_1835392.f_2704[iVar10] < 11)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_179(uParam0->f_44))
										{
											iVar5 = unk_0xD8E1354FA73B9C12(iVar3, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_195(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0xD8E1354FA73B9C12(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0xF6C7A5A21FE66C97(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
								}
							}
							func_181(&Var1);
							iVar3++;
						}
					}
					unk_0xE8FF84E6B65800A1();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x191DDA30577F440A(&(Global_1835392.f_2832), iVar10);
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar10] == -1 && func_184())
			{
				if (Global_1835392.f_2704[iVar10] >= 1)
				{
					func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_180(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
				Global_1835392.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_173(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_188(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0xDA654EB115F9FF7D(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xDA654EB115F9FF7D(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	int iVar0;
	
	if (unk_0x07AB8C53F0D76F02(Global_1835392.f_2826))
	{
		iVar0 = unk_0x68002870F0EF2AD1(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam0->f_42), 5);
			func_159(Global_1835392.f_2826, -1);
		}
	}
}

bool func_190(var uParam0)
{
	return uParam0->f_1;
}

void func_191(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(uParam0))
	{
		unk_0x44EF5678D6916481(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_192(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0x234B68AC2E35ED5A(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x234B68AC2E35ED5A(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x234B68AC2E35ED5A(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x0B4295B1608BB934() && unk_0x29712F962253A7EB())
		{
			if (unk_0xE22116C6D321FECA() && !unk_0x68B90AB279E39C7B(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_23(unk_0x1146A9AE09CE2B14()) };
				if (unk_0xDA1611E46AAEA71B(&Var4))
				{
					unk_0xEDDAF8F99F371228(&Var1, 35, &Var4);
					if (!unk_0xAB6A270F84A8781E(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x704F8697BB515627(uParam0, "SET_SLOT");
	unk_0x9E3D03981E2E9AD9(*iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	if (bVar3)
	{
		unk_0x35CA0C119E6A2A27(sVar0);
		unk_0x5F14E9A3543AFD0E(&Var2);
		unk_0xD4B2C39F7AD5A6A6();
	}
	else
	{
		unk_0x35CA0C119E6A2A27(sVar0);
		unk_0xD4B2C39F7AD5A6A6();
	}
	unk_0x392841D58D2EED1D();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x191DDA30577F440A(&iVar5, 7);
		unk_0x704F8697BB515627(uParam0, "SET_SLOT");
		unk_0x9E3D03981E2E9AD9(*iParam1);
		unk_0x9E3D03981E2E9AD9(iVar5);
		if (!unk_0x0B4295B1608BB934())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x1D0F0A8090E1551E())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x35CA0C119E6A2A27(sVar0);
		unk_0xC34AC094B6EDF9A4();
		unk_0x392841D58D2EED1D();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x234B68AC2E35ED5A(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x234B68AC2E35ED5A(iParam2, 5))
		{
			if (unk_0x3C475AF50685F9DC() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x234B68AC2E35ED5A(iParam2, 6))
		{
			if (unk_0x678E959F60C0DB94())
			{
				if (unk_0xB0B4E62B0960B28D())
				{
					if (unk_0x0B4295B1608BB934() && unk_0x29712F962253A7EB())
					{
						if (unk_0xE22116C6D321FECA() && !unk_0x68B90AB279E39C7B(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_23(unk_0x1146A9AE09CE2B14()) };
							if (unk_0xDA1611E46AAEA71B(&Var6))
							{
								unk_0xEDDAF8F99F371228(&Var1, 35, &Var6);
								if (!unk_0xAB6A270F84A8781E(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x191DDA30577F440A(&iVar7, 7);
		unk_0x704F8697BB515627(uParam0, "SET_SLOT");
		unk_0x9E3D03981E2E9AD9(*iParam1);
		unk_0x9E3D03981E2E9AD9(iVar7);
		if (bVar3)
		{
			unk_0x35CA0C119E6A2A27(sVar0);
			unk_0x5F14E9A3543AFD0E(&Var2);
			unk_0xC34AC094B6EDF9A4();
		}
		else
		{
			unk_0x35CA0C119E6A2A27(sVar0);
			unk_0xC34AC094B6EDF9A4();
		}
		unk_0x392841D58D2EED1D();
		*iParam1++;
	}
}

void func_193(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x704F8697BB515627(uParam0, "SET_TITLE");
	unk_0x35CA0C119E6A2A27(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x35CA0C119E6A2A27(uParam2[iVar0 /*6*/]);
		unk_0xD4B2C39F7AD5A6A6();
		iVar0++;
	}
	unk_0x392841D58D2EED1D();
}

void func_194(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x704F8697BB515627(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x35CA0C119E6A2A27(sParam1);
	if (!unk_0xAB6A270F84A8781E(sParam2))
	{
		unk_0x1896EC0B030A48A2(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				unk_0x5F14E9A3543AFD0E(sParam3);
			}
		}
		else if (!unk_0xAB6A270F84A8781E(sParam3))
		{
			unk_0x1896EC0B030A48A2(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				unk_0x5F14E9A3543AFD0E(sParam3);
			}
		}
		else if (!unk_0xAB6A270F84A8781E(sParam3))
		{
			unk_0x1896EC0B030A48A2(sParam3);
		}
		unk_0x38CD3C04C877C35F(iParam5);
	}
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x392841D58D2EED1D();
}

int func_195(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_196(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(uParam0, "SET_DISPLAY_TYPE");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x392841D58D2EED1D();
}

var func_197()
{
	return unk_0x42AA2CCF0B61DCD8("SC_LEADERBOARD");
}

bool func_198()
{
	return func_199(unk_0x1146A9AE09CE2B14());
}

int func_199(int iParam0)
{
	switch (func_200(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_200(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192;
}

void func_201(int iParam0)
{
	Global_1315740 = iParam0;
}

void func_202(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		func_205();
	}
	func_204(4, -1);
	func_204(6, -1);
	func_204(7, -1);
	func_204(3, -1);
	func_204(1, -1);
	func_204(2, -1);
	func_204(11, -1);
	func_204(13, -1);
	func_204(14, -1);
	func_204(16, -1);
}

void func_204(int iParam0, int iParam1)
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

void func_205()
{
	Global_2544210.f_4598 = 0;
}

void func_206(var uParam0, bool bParam1, bool bParam2)
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

int func_207(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0x2053F6ACFD4ED4BC() && Global_1840924.f_2 > 0)
	{
		func_97(&Global_1840924);
		func_97(&(Global_1840924.f_49));
		*uParam0 = 0;
		Global_1840924.f_2 = 0;
		func_215(0);
	}
	Global_1840924.f_2 = unk_0x2053F6ACFD4ED4BC();
	iVar1 = -1;
	if (unk_0xE22116C6D321FECA())
	{
		if (unk_0x6B59962A89E93CDE() == 0)
		{
			iVar1 = unk_0xF66D3F19222C4D15();
		}
	}
	if ((unk_0xE22116C6D321FECA() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_213() && unk_0x0B4295B1608BB934()))
	{
		if (unk_0x63BF5A9404EFAAE0())
		{
			func_210(&(Global_1840924.f_3), func_212(&(Global_1840924.f_3)));
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 4))
			{
				unk_0x191DDA30577F440A(uParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_208(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_213())
			{
				set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
			{
				if (!unk_0x5C6675393464A814(2, 201))
				{
					unk_0x191DDA30577F440A(uParam0, 0);
				}
			}
			else if (unk_0x609EEF618F8CC869(2, 201))
			{
				func_97(&(Global_1840924.f_49));
				func_97(&Global_1840924);
				*uParam0 = 0;
				Global_1840924.f_2 = 0;
				func_215(0);
				return 1;
			}
		}
	}
	else
	{
		func_210(&(Global_1840924.f_3), func_212(&(Global_1840924.f_3)));
		if ((func_190(&(Global_1840924.f_49)) && !func_153(&(Global_1840924.f_49), 2000, 1)) && !unk_0x0B4295B1608BB934())
		{
			unk_0x191DDA30577F440A(uParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_208(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0x234B68AC2E35ED5A(*uParam0, 3))
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 1))
			{
				unk_0xEFE8081075F37187(0);
				unk_0x191DDA30577F440A(uParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_208(&(Global_1840924.f_3), 0);
			}
		}
		if (func_190(&Global_1840924))
		{
			if (!func_153(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x0B4295B1608BB934())
				{
					if (unk_0xEC27FD4DF41FBE05())
					{
						set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xC1FCB6CC23926AD5())
					{
						if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
						{
							if (!unk_0x5C6675393464A814(2, 201))
							{
								unk_0x191DDA30577F440A(uParam0, 0);
							}
						}
						else if (unk_0x609EEF618F8CC869(2, 201))
						{
							func_97(&Global_1840924);
							*uParam0 = 0;
							Global_1840924.f_2 = 0;
							func_215(0);
							return 1;
						}
					}
				}
				else
				{
					func_97(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_215(0);
					return 1;
				}
			}
			else if (unk_0x234B68AC2E35ED5A(*uParam0, 3))
			{
				if (unk_0xEC27FD4DF41FBE05())
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
				{
					if (!unk_0x5C6675393464A814(2, 201))
					{
						unk_0x191DDA30577F440A(uParam0, 0);
					}
				}
				else if (unk_0x609EEF618F8CC869(2, 201))
				{
					func_97(&(Global_1840924.f_49));
					func_97(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_215(0);
					return 1;
				}
			}
			else
			{
				if (unk_0xEC27FD4DF41FBE05())
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xC1FCB6CC23926AD5())
				{
					if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
					{
						if (!unk_0x5C6675393464A814(2, 201))
						{
							unk_0x191DDA30577F440A(uParam0, 0);
						}
					}
					else if (unk_0x609EEF618F8CC869(2, 201))
					{
						func_97(&(Global_1840924.f_49));
						func_97(&Global_1840924);
						*uParam0 = 0;
						Global_1840924.f_2 = 0;
						func_215(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_208(var uParam0, bool bParam1)
{
	func_209(uParam0);
	if (bParam1)
	{
		func_215(0);
	}
	uParam0->f_35 = 1;
}

void func_209(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_211(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0x38CD3C04C877C35F(uParam0->f_33);
			unk_0x38CD3C04C877C35F(uParam0->f_34);
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0x38CD3C04C877C35F(uParam0->f_33);
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0xA91D83F2CC1345A6(&(uParam0->f_17));
			unk_0x38CD3C04C877C35F(uParam0->f_33);
			unk_0x38CD3C04C877C35F(uParam0->f_34);
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0xA91D83F2CC1345A6(&(uParam0->f_17));
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0x4E2EF4B6B665F3F4(uParam0->f_33, 70);
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		else
		{
			unk_0xFFBE12D059373A24(&(uParam0->f_1));
			unk_0x2DFA0FE2AE5529AD(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_211(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_212(var uParam0)
{
	return uParam0->f_35;
}

int func_213()
{
	if (func_214())
	{
		return 0;
	}
	if (unk_0x6280556FDB0D083D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_214()
{
	return Global_2464001;
}

void func_215(bool bParam0)
{
	unk_0x83C4A7EF0169D5FD();
	if (bParam0)
	{
		unk_0x4200AA9EB255E874();
	}
}

int func_216(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_134)
	{
		func_228(&(uParam0->f_72), bParam1);
		iLocal_134 = 1;
		func_334(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_225(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_217(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_217(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_195(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_23(unk_0x1146A9AE09CE2B14()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_224(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_182(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x3549431D4E321B7E(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_223(uParam0->f_44, iVar4))
					{
						if (func_222(uParam0->f_44, 4, iVar4))
						{
							unk_0x191DDA30577F440A(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							unk_0xC664C0067EEAB8D1(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x03E204E0FE6D29E3(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_147(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_223(uParam0->f_44, iVar4))
								{
									if (func_222(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = unk_0xD8E1354FA73B9C12(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = unk_0xF6C7A5A21FE66C97(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xE8FF84E6B65800A1();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_221();
				if (Global_1835013.f_4)
				{
					if (func_220(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xE4210DA3CA1E3CF5(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x02BFF15CAA701972() && func_219())
			{
				if (func_218())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_220(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				unk_0xE4210DA3CA1E3CF5(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_183(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_182(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x235110569A42EC48(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x03E204E0FE6D29E3(0, &Var0);
						if (unk_0xDA654EB115F9FF7D(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					unk_0xE8FF84E6B65800A1();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_218()
{
	return unk_0x234B68AC2E35ED5A(Global_959568.f_8, 1);
}

var func_219()
{
	return Global_2461742.f_3;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_221()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x5EF0C89900BD8BB6(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	if (unk_0x4229C0FE8A11D6B0(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_224(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_177() && !func_176())
			{
				func_175(*uParam2);
				if (unk_0x37C686EC5F835E98(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xE51580B6E84596E9(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x475CA10CECBD99A2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_225(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x5B99D5C0DE301BD3())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_227(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_226(190, 131, 0, 0f, 1);
		func_226(190, 103, iLocal_106[1], 0f, 0);
		func_226(190, 99, iLocal_106[2], 0f, 0);
		func_226(190, 109, iLocal_106[3], 0f, 0);
		func_226(190, 106, iLocal_106[5], 0f, 0);
		func_226(190, 2, iLocal_106[10], 0f, 0);
		func_226(190, 107, iLocal_106[8], 0f, 0);
		func_226(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_226(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x81E9B27A86C752C9(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x3549431D4E321B7E(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_222(iParam0, 4, iVar1))
				{
					unk_0x191DDA30577F440A(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xC664C0067EEAB8D1(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x4229C0FE8A11D6B0(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x191DDA30577F440A(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xC664C0067EEAB8D1(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_227(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x0B4295B1608BB934())
	{
	}
	if ((!unk_0x3CEB66EC8A34CB10() && (unk_0xAE06D39287DB2B6A() || !unk_0xF54628B8295E0CFD())) && unk_0x976177065FE891D9())
	{
		Var0.f_2.f_1 = 4;
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x29712F962253A7EB())
			{
				Var2 = { func_23(unk_0x1146A9AE09CE2B14()) };
				if (unk_0xDA1611E46AAEA71B(&Var2))
				{
					if (unk_0xEDDAF8F99F371228(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x02BFF15CAA701972() && Global_2461742.f_3)
			{
				unk_0xF57054D6036F7B21(&Var0, &(Global_1669483.f_10));
			}
			else
			{
				unk_0x968102705396C4F1(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x3CEB66EC8A34CB10())
	{
	}
	if (!unk_0xAE06D39287DB2B6A())
	{
	}
	if (unk_0xF54628B8295E0CFD())
	{
	}
	if (!unk_0x976177065FE891D9())
	{
	}
	return 0;
}

void func_228(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_229(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_229(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xAB6A270F84A8781E(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_238())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_238())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x35EE8BE28AE0C86D(unk_0x1146A9AE09CE2B14(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_238())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_238())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_238())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_238())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_238())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_237(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_550 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0xAB6A270F84A8781E(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_236(Global_4456448.f_133963) || func_233(Global_4456448.f_133963))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_232(Global_4456448.f_133963))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0xAB6A270F84A8781E(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0xAB6A270F84A8781E(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_231(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 3;
			Global_1835392.f_2780.f_28 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xC664C0067EEAB8D1(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 22;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2709 = 4;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2708 = 3;
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_T_TT", 32);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
					Global_1835392.f_2708 = 2;
					Global_1835392.f_2780.f_28 = 3;
					Global_1835392.f_2780.f_29[0] = 2;
					Global_1835392.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2709 = 4;
			Global_1835392.f_2708 = 3;
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x191DDA30577F440A(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 3;
			Global_1835392.f_2780 = 1;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835392.f_2708)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
		{
			unk_0x191DDA30577F440A(&(Global_1835392.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835392.f_2826 = func_230(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_230(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_195(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x15173FB88ABC94F9(&cVar0);
}

struct<6> func_231(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_232(int iParam0)
{
	return iParam0 == 74;
}

var func_233(int iParam0)
{
	return (func_235(iParam0) || func_234(iParam0));
}

bool func_234(int iParam0)
{
	return iParam0 == 44;
}

bool func_235(int iParam0)
{
	return iParam0 == 45;
}

bool func_236(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_237(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_238()
{
	if ((((((((((((Global_4456448.f_76587 == 1 || Global_4456448.f_76587 == 3) || Global_4456448.f_76587 == 5) || Global_4456448.f_76587 == 7) || Global_4456448.f_76587 == 19) || Global_4456448.f_76587 == 8) || Global_4456448.f_76587 == 9) || Global_4456448.f_76587 == 11) || Global_4456448.f_76587 == 13) || Global_4456448.f_76587 == 21) || Global_4456448.f_76587 == 23) || Global_4456448.f_76587 == 25) || Global_4456448.f_76587 == 26)
	{
		return 1;
	}
	return 0;
}

int func_239(var uParam0, int iParam1)
{
	if (!func_423(&(uParam0->f_2)))
	{
		func_438(&(uParam0->f_2));
	}
	unk_0xEFD424FDD55A6EC7(14);
	unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x86AF801D34E482FF(2, 201) || uParam0->f_8)
		{
			if (!func_423(&(uParam0->f_5)))
			{
				func_438(&(uParam0->f_5));
				func_240(uParam0, 1051260355);
			}
		}
		if (func_423(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_424(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_423(&(uParam0->f_5)))
		{
			func_438(&(uParam0->f_5));
			func_240(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_424(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_240(var uParam0, float fParam1)
{
	unk_0x704F8697BB515627(*uParam0, "SHARD_ANIM_OUT");
	unk_0x9E3D03981E2E9AD9(uParam0->f_9);
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x392841D58D2EED1D();
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0xECEC7528A52B4EE8((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_242(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0xECEC7528A52B4EE8((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_243()
{
	int iVar0;
	
	if (!bLocal_155)
	{
		iVar0 = (unk_0xB36B8558948EA7A8(0, 65535) % 3);
	}
	else
	{
		iLocal_169++;
		iVar0 = (iLocal_169 % 2);
	}
	return iVar0;
}

void func_244(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_245(iParam4);
	if (iParam4 != 5)
	{
		unk_0x704F8697BB515627(*uParam0, "RESET_MOVIE");
		unk_0x392841D58D2EED1D();
	}
	unk_0x704F8697BB515627(*uParam0, sVar0);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	func_12(sParam2);
	unk_0x392841D58D2EED1D();
	func_438(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x02BFF15CAA701972())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_246(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(*uParam0, "CLEAR_SCORES");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x392841D58D2EED1D();
}

int func_247(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		unk_0x04F4D55F2C0C756D(uParam0);
	}
	return 1;
}

void func_248(int iParam0)
{
	unk_0x32279DAB93C9A9FA(uLocal_77, uLocal_75, 1500, 1, 1);
	unk_0x6FA8221C9D2ECB46(uLocal_78, 1);
	unk_0x32279DAB93C9A9FA(uLocal_77, uLocal_78, 8000, 1, 1);
	unk_0x612434A5544F5847(uLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0x5C062C9AFC66C513(uLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0xEF20E9A7B745D17A(uLocal_80, 35f);
}

void func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x257CAD90873BF327(uLocal_75))
	{
		bVar0 = false;
		func_330(uParam0);
		if (!bLocal_147)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x66AE54CE92457FEE(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0x234B68AC2E35ED5A(Global_112254, 3))
						{
							func_421("DARTS_INSTR_W", -1);
							unk_0x191DDA30577F440A(&Global_112254, 3);
						}
						func_334(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0x234B68AC2E35ED5A(Global_112254, 4))
						{
							func_421("DARTS_INSTR_B", -1);
							unk_0x191DDA30577F440A(&Global_112254, 4);
						}
						func_334(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x66AE54CE92457FEE(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x257CAD90873BF327(uLocal_84) && uParam0->f_3 == 2)
			{
				func_329(uParam3);
			}
		}
		else
		{
			func_327(uParam3, iLocal_30);
		}
		func_326(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_323(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_315(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_308(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x5C6675393464A814(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_307(iLocal_31, 0);
				if (((((!func_306("DARTS_SHT_USE") && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B")) && !func_306("DARTS_AIM_HLP")) && !func_306("DARTS_STD_HLP")) && !func_306("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_421("DARTS_LEVEL", -1);
						unk_0x191DDA30577F440A(&(Global_112293.f_18968.f_6), iLocal_167);
						func_334(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_334(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_334(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (func_296(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x1036762BD3781C84();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_142)
				{
					if (!func_423(uParam4))
					{
						func_294(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_293(uLocal_138[(1 - iLocal_30)]);
						func_424(uParam4);
						iLocal_142 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_165 = 0;
				func_292(&(uParam0->f_422), &(uParam0->f_249));
				func_289(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (timera() > unk_0xB36B8558948EA7A8(1250, 2500))
			{
				func_292(&(uParam0->f_422), &(uParam0->f_249));
				func_289(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_275(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_273(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_258(uParam0, uParam3);
			break;
		
		case 5:
			func_251(uParam0, uParam2, uParam3);
			if (func_423(uParam4))
			{
				func_424(uParam4);
			}
			break;
		
		case 6:
			func_250(uParam0, uParam3);
			break;
	}
}

void func_250(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_165++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_149 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_273(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_258(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_148)
			{
				if (unk_0x419E13582192CFEA(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x04F4D55F2C0C756D(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x26C2ACB261895E70(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x419E13582192CFEA(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x78CDDD1E6367978D(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_273(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_258(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x795434E153F90E41(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_40, 1, 1, 0);
					Var0 = { unk_0x26C2ACB261895E70(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x78CDDD1E6367978D(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar1 = unk_0x644B8DBA4F69BB73(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0xBDDCDEC7B6205897(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_292(&(uParam0->f_422), &(uParam0->f_249));
			func_289(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_273(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_334(&(uParam1->f_666), 2, 0);
				func_334(&(uParam1->f_666), 3, 0);
				func_334(&(uParam1->f_666), 4, 0);
				func_334(&(uParam1->f_666), 5, 1);
				settimerb(0);
			}
			func_258(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0x795434E153F90E41(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, Local_40, 1, 1, 0);
							Var0 = { unk_0x26C2ACB261895E70(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0x419E13582192CFEA(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0x78CDDD1E6367978D(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar3 = unk_0x644B8DBA4F69BB73(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0xBDDCDEC7B6205897(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_165 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_251(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_257();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_256("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_255("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_256("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_256("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_256("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_255("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_256("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_256("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			settimerb(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x86AF801D34E482FF(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var0 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_50(Var0);
			}
			if (unk_0x86AF801D34E482FF(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_50(Var0);
			}
			if (unk_0x86AF801D34E482FF(2, 202))
			{
				Var0 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_52(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x86AF801D34E482FF(2, 201))
			{
				iLocal_139 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x86AF801D34E482FF(2, 201) || (iLocal_149 && bLocal_148))
			{
				iLocal_139 = 1;
			}
			if ((unk_0x86AF801D34E482FF(2, 189) || unk_0x86AF801D34E482FF(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0xD6E677FAD7521410(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], 1) };
				func_52(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_144)
				{
					if (func_254(iLocal_30 == 0, &(uLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_144 = 1;
					}
				}
				else if ((unk_0xDFB7BFA6482FEE1E() % 500) < 50)
				{
				}
			}
			else if (!iLocal_144)
			{
				if (func_253(iLocal_30 == 0, &(uLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_144 = 1;
				}
			}
			else if ((unk_0xDFB7BFA6482FEE1E() % 500) < 50)
			{
			}
			if (iLocal_139 || timerb() > 2000)
			{
				iLocal_149 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_247(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_252(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x4569EA65F1B056ED(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_437(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_416();
				if (!bLocal_148)
				{
					unk_0x4C4EBDF5C0D2DCB8();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_145 = 0;
				iLocal_142 = 0;
				iLocal_144 = 0;
				iLocal_139 = 0;
				iLocal_163 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_252(var uParam0, int iParam1, int iParam2)
{
	unk_0x704F8697BB515627(*uParam0, "ADD_DARTS_SCORE");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	unk_0x392841D58D2EED1D();
}

int func_253(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x191DDA30577F440A(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x191DDA30577F440A(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x191DDA30577F440A(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x191DDA30577F440A(&iVar0, 3);
		}
	}
	iVar1 = unk_0xB36B8558948EA7A8(0, 100);
	iVar2 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0x234B68AC2E35ED5A(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_254(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x191DDA30577F440A(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x191DDA30577F440A(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x191DDA30577F440A(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x191DDA30577F440A(&iVar0, 3);
		}
	}
	iVar1 = unk_0xB36B8558948EA7A8(0, 100);
	iVar2 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0x234B68AC2E35ED5A(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x419E13582192CFEA(func_501()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x7D2B9E6A64637269(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_255(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

void func_256(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x49648AD747832803(iParam2, 1);
}

void func_257()
{
	unk_0x6FA8221C9D2ECB46(uLocal_84, 1);
	unk_0x6FA8221C9D2ECB46(uLocal_75, 0);
}

void func_258(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_270(uParam0);
		func_334(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_268(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_268(0);
					iLocal_106[1]++;
				}
			}
			func_334(&(uParam1->f_666), 2, 0);
			func_334(&(uParam1->f_666), 3, 0);
			func_334(&(uParam1->f_666), 4, 0);
			func_334(&(uParam1->f_666), 5, 1);
			func_270(uParam0);
			func_334(&(uParam1->f_666), 5, 0);
			settimerb(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_256("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_334(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_334(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_256("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_256("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_144)
			{
				if (func_267(uLocal_138[(1 - iLocal_30)]))
				{
					iLocal_144 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			settimera(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_334(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_266(uParam1, 1);
					func_268(0);
					iLocal_106[1]++;
				}
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_265(uLocal_138[iLocal_30]))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					func_264(uLocal_138[(1 - iLocal_30)]);
					iLocal_144 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_263(uLocal_138[1], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_266(uParam1, 0);
					func_268(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_261(uLocal_138[iLocal_30], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_334(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_334(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_143)
						{
							func_260(uLocal_138[1]);
							iLocal_143 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_334(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_259("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_326(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			settimera(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_334(&(uParam1->f_666), 3, 0);
			func_334(&(uParam1->f_666), 2, 0);
			func_334(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_259(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	unk_0x38CD3C04C877C35F(iParam2);
	unk_0x49648AD747832803(iParam3, 1);
}

void func_260(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_261(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x419E13582192CFEA(func_501()))
		{
			if (bParam1)
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_501(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_262())
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_262()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x419E13582192CFEA(func_501()))
		{
			if (bParam1)
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_501(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_262())
			{
				func_4(unk_0x7D2B9E6A64637269(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x7D2B9E6A64637269())
		{
			iVar1 = 1;
		}
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x7D2B9E6A64637269())
	{
		iVar0 = 1;
	}
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_112293.f_18968++;
			func_269("DARTS_STAT_NUM_BULLSEYES", Global_112293.f_18968);
			break;
		
		case 1:
			Global_112293.f_18968.f_1++;
			func_269("DARTS_STAT_NUM_180S", Global_112293.f_18968.f_1);
			break;
		
		case 2:
			Global_112293.f_18968.f_2++;
			func_269("DARTS_STAT_NUM_WINS", Global_112293.f_18968.f_2);
			break;
		
		case 3:
			Global_112293.f_18968.f_3++;
			func_269("DARTS_STAT_NUM_LOSS", Global_112293.f_18968.f_3);
			break;
		
		case 4:
			Global_112293.f_18968.f_4++;
			func_269("DARTS_STAT_DARTS_THROWN", Global_112293.f_18968.f_4);
			break;
		
		case 5:
			Global_112293.f_18968.f_5++;
			func_269("DARTS_STAT_NUM_GAMES", Global_112293.f_18968.f_5);
			break;
		
		case 7:
			Global_112293.f_18968.f_7 = (to_float(Global_112293.f_18968.f_2) / to_float(Global_112293.f_18968.f_5));
			break;
		
		case 8:
			Global_112293.f_18968.f_8 = (to_float(Global_112293.f_18968.f_4) / to_float(Global_112293.f_18968.f_5));
			break;
	}
}

void func_269(char* sParam0, var uParam1)
{
}

void func_270(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_268(5);
	unk_0x4C4EBDF5C0D2DCB8();
	unk_0x66AE54CE92457FEE(1);
	if (unk_0xB30CD10E2CD1B67D(func_417(2)))
	{
		unk_0xC0BBE340BE2AA02D(func_417(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_257();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_153 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_268(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_268(3);
		iLocal_106[9]++;
	}
	func_268(7);
	func_438(&(uParam0->f_254));
	if (func_272(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_271(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_171 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_171 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xB84B43B766630B5C(func_417(3));
	iLocal_150 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_271(bool bParam0)
{
	char* sVar0;
	
	unk_0x9783B77820E7F699(0);
	switch (func_90())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3DF34AABABC07A1C(sVar0);
}

int func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.x = (Var3.x + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = unk_0x6EE46314283D3C7D(0f, 1f, Var3.x, Var3.f_2);
	fVar0 = func_274(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x4569EA65F1B056ED(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x4569EA65F1B056ED(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_274(struct<3> Param0)
{
	return sqrt(((Param0.x * Param0.x) + (Param0.f_2 * Param0.f_2)));
}

int func_275(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_276(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_277("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0x7FF6ACE380ED166C();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		unk_0x78CDDD1E6367978D(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0x78CDDD1E6367978D(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0xBDDCDEC7B6205897(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_277(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_288(&Var0);
			break;
		
		case 1:
			func_287(&Var0);
			break;
		
		case 5:
			func_286(&Var0);
			break;
		
		case 6:
			func_285(&Var0);
			break;
		
		case 7:
			func_284(&Var0);
			break;
		
		case 8:
			func_283(&Var0);
			break;
		
		case 9:
			func_282(&Var0);
			break;
	}
	if (func_280())
	{
		unk_0x0F33095580A670CE(iParam5);
		if (iParam3 == 1)
		{
			unk_0xDDD5C8D7152E128F(sParam0, sParam1, func_279(Var0), func_278(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xDDD5C8D7152E128F(sParam0, sParam1, func_279(Var0), func_278(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x0F33095580A670CE(4);
	}
}

float func_278(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_279(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_280()
{
	if (func_281())
	{
		return 1;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB())
	{
		return 0;
	}
	if (unk_0xA2DFFBCD9CFB74A3())
	{
		return 0;
	}
	return 1;
}

bool func_281()
{
	return Global_1312458;
}

void func_282(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_283(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_284(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_285(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_286(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_287(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_288(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_289(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0x644B8DBA4F69BB73(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0x644B8DBA4F69BB73(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0xB36B8558948EA7A8(0, 100);
		iVar6 = unk_0xB36B8558948EA7A8(func_291(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x644B8DBA4F69BB73(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x644B8DBA4F69BB73(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0xB36B8558948EA7A8(0, 100);
		iVar6 = unk_0xB36B8558948EA7A8(func_291(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0x644B8DBA4F69BB73(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x644B8DBA4F69BB73(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0x644B8DBA4F69BB73(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (sin(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (cos(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_290(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_290(uParam0);
		*uParam0 = unk_0x795434E153F90E41(uParam0->f_1, Local_40, 0, 0, 0);
		fVar1 = unk_0x644B8DBA4F69BB73(0f, 90f);
		Var7 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, Local_41) };
		Var8 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0x832AD84AA258AE80((Var7.x - Var8.x), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0xBDDCDEC7B6205897(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_41 };
		*uParam2 = 3;
		unk_0xE2D24A37AFCF27BF(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_290(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_41 - uParam0->f_8 };
	fVar1 = vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0x832AD84AA258AE80(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0x1567C6DF07BA7B08(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_41 - uParam0->f_11 };
	fVar1 = vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

int func_291(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_292(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_262())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_294(var uParam0)
{
	func_295(uParam0, 0f);
}

void func_295(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x234B68AC2E35ED5A(*uParam0, 4)) + fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_296(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (timerb() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_305(uParam0, uParam1, 0))
					{
						unk_0xE2D24A37AFCF27BF(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x86AF801D34E482FF(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_304(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_303();
						}
						func_302(uParam0, iParam6);
						func_301(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x644B8DBA4F69BB73(0.02f, 0.1f);
						iVar1 = unk_0xB36B8558948EA7A8(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0x644B8DBA4F69BB73(0.02f, 0.1f);
						iVar1 = unk_0xB36B8558948EA7A8(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0x1036762BD3781C84();
							iLocal_52 = 1;
							settimerb(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_277("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (timerb() > 25)
				{
					if (func_305(uParam0, uParam1, 1))
					{
						unk_0xE2D24A37AFCF27BF(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_297(uParam0))
			{
				if (!iLocal_55)
				{
					func_304(uParam0, *uParam2);
				}
				else
				{
					func_303();
					func_302(uParam0, iParam6);
					func_301(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				settimerb(0);
			}
			break;
	}
	return 0;
}

int func_297(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0xBDAD193FD6CC54F5(2, 220);
	fVar2 = unk_0xBDAD193FD6CC54F5(2, 221);
	iLocal_91 = round(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0xDFB7BFA6482FEE1E();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = round(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0xDFB7BFA6482FEE1E();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (unk_0xDFB7BFA6482FEE1E() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = unk_0xDFB7BFA6482FEE1E();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = round(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (to_float(iLocal_95) / to_float(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_300();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_299();
			}
			else
			{
				func_298();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_298()
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_299()
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_300()
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_301(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	unk_0x09A7440D17F223C3(Var0, &Local_38, &(Local_38.f_1));
	if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_277("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_277("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_302(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0x98501142AE80A99C(2, 218);
	fVar4 = unk_0x98501142AE80A99C(2, 219);
	fVar5 = unk_0xBDAD193FD6CC54F5(2, 220);
	fVar6 = unk_0xBDAD193FD6CC54F5(2, 221);
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (unk_0x0BCA9ADE67DF9DD8(fVar5) > unk_0x0BCA9ADE67DF9DD8(fVar3) || unk_0x0BCA9ADE67DF9DD8(fVar6) > unk_0x0BCA9ADE67DF9DD8(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xA65C4F563B7CF68E())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x3840DB3ECC7D0818())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x5C6675393464A814(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0x644B8DBA4F69BB73((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x644B8DBA4F69BB73((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x644B8DBA4F69BB73((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x644B8DBA4F69BB73((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0x644B8DBA4F69BB73((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x644B8DBA4F69BB73((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x644B8DBA4F69BB73((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x644B8DBA4F69BB73((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_303()
{
	if (unk_0x5C6675393464A814(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (unk_0x5C6675393464A814(2, 229))
	{
		if (bLocal_49)
		{
			if (timera() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			settimera(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_306("DARTS_FST_HLP") && !func_306("DARTS_AIM_HLP")) && !func_306("DARTS_CLOCK")) && !func_306("DARTS_STD_HLP")) && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!unk_0x234B68AC2E35ED5A(Global_112254, 1))
			{
				func_421("DARTS_SHT_USE", -1);
				unk_0x191DDA30577F440A(&Global_112254, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_304(var uParam0, struct<4> Param1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.x = (Var0.x + unk_0x644B8DBA4F69BB73(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0x644B8DBA4F69BB73(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_41 };
}

int func_305(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		unk_0x78CDDD1E6367978D(*uParam0, Local_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x795434E153F90E41(uParam0->f_1, Local_40, 0, 0, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_290(uParam0);
	fVar4 = unk_0x644B8DBA4F69BB73(0f, 90f);
	Var1 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, Local_41) };
	Var2 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = unk_0x832AD84AA258AE80((Var1.x - Var2.x), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0xBDDCDEC7B6205897(*uParam0, uParam0->f_17, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_277("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	Var0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0x09A7440D17F223C3(Var0, &Local_39, &(Local_39.f_1));
	return 1;
}

bool func_306(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_307(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_112254, 9))
		{
			if ((!func_306("DARTS_SHT_USE") && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B"))
			{
				func_421("DARTS_AIM_HLP", -1);
				unk_0x191DDA30577F440A(&Global_112254, 9);
			}
		}
		else if (iParam1 && !unk_0x234B68AC2E35ED5A(Global_112254, 7))
		{
			if ((!func_306("DARTS_AIM_HLP") && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B"))
			{
				func_421("DARTS_CLOCK", -1);
				unk_0x191DDA30577F440A(&Global_112254, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_112254, 8))
		{
			if ((!func_306("DARTS_SHT_USE") && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B"))
			{
				func_421("DARTS_STD_HLP", -1);
				unk_0x191DDA30577F440A(&Global_112254, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_306("DARTS_SHT_USE")) && !func_306("DARTS_INSTR_W")) && !func_306("DARTS_INSTR_B"))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112254, 2))
			{
				func_421("DARTS_FST_HLP", -1);
				unk_0x191DDA30577F440A(&Global_112254, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_308(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_311(iParam0) };
			*uParam3 = { unk_0x9E695CE384C77EF0(*uParam1, Var0) };
			func_310(*uParam3);
			settimerb(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (timerb() > 3000 || unk_0x86AF801D34E482FF(2, 201))
			{
				func_309();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_309()
{
	unk_0x32279DAB93C9A9FA(uLocal_75, uLocal_87, 2000, 1, 1);
	unk_0xFE1DEC9C5734D0C0(uLocal_87, 0);
}

void func_310(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_87 = unk_0x1CA878DB277C6DF0(26379945, Param0, Var0, 65f, 0, 2);
	unk_0x32279DAB93C9A9FA(uLocal_87, uLocal_75, 2000, 1, 1);
}

Vector3 func_311(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_314(iParam0);
		Var1.f_1 = -0.5f;
		Var1.x = func_313(fVar0);
		Var1.f_2 = func_312(fVar0);
	}
	return Var1;
}

float func_312(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (cos(fParam0) * fVar0);
	return fVar1;
}

float func_313(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (sin(fParam0) * fVar0);
	return fVar1;
}

var func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_315(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x5C6675393464A814(2, 228))
			{
				func_322(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x5C6675393464A814(2, 228))
			{
				if (!unk_0x257CAD90873BF327(uLocal_84))
				{
					func_320();
					func_319(&uLocal_176, Local_207, Local_208, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x5C6675393464A814(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_316(&uLocal_176, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_322(0);
			func_502();
			if (unk_0x0E8572B08CEB6A11(uLocal_176))
			{
				if (unk_0x2671671BBCC6AD9F(uLocal_176))
				{
					unk_0x6FA8221C9D2ECB46(uLocal_176, 0);
				}
				unk_0xFE1DEC9C5734D0C0(uLocal_176, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_316(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0xB5D61F76D4980A55(2);
	func_318(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x3840DB3ECC7D0818())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		fVar1 = unk_0x98501142AE80A99C(2, 239);
		fVar2 = unk_0x98501142AE80A99C(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0x98501142AE80A99C(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0x98501142AE80A99C(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_317((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_317((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0xDFB7BFA6482FEE1E())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x0D901EFDFD7EF9D5(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0xDFB7BFA6482FEE1E() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * timestep());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x0D901EFDFD7EF9D5(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.x;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var6.x - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0x0D901EFDFD7EF9D5(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x0D901EFDFD7EF9D5(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x96DF114B59E81B9C(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0xDFB7BFA6482FEE1E() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x96DF114B59E81B9C(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0xDFB7BFA6482FEE1E() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x49721683C2EB0132(2, 207);
			iVar0[3] = unk_0x49721683C2EB0132(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0xFD866EC0672D68D5(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x0E8572B08CEB6A11(*uParam0))
	{
		if (unk_0x2671671BBCC6AD9F(*uParam0))
		{
			if (unk_0xBEFF25A5E38D38C3(*uParam0))
			{
				unk_0xFFCFF4576AE8F21E();
			}
		}
	}
}

int func_317(int iParam0, int iParam1, int iParam2)
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

void func_318(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x98501142AE80A99C(2, 218) * 127f));
	*uParam1 = floor((unk_0x98501142AE80A99C(2, 219) * 127f));
	*uParam2 = floor((unk_0x98501142AE80A99C(2, 220) * 127f));
	*uParam3 = floor((unk_0x98501142AE80A99C(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x7739A311341A5999(2, 218))
		{
			*uParam0 = floor((unk_0xA1108F381688010B(2, 218) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 219))
		{
			*uParam1 = floor((unk_0xA1108F381688010B(2, 219) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 220))
		{
			*uParam2 = floor((unk_0xA1108F381688010B(2, 220) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 221))
		{
			*uParam3 = floor((unk_0xA1108F381688010B(2, 221) * 127f));
		}
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (bParam5)
		{
			if (unk_0x3840DB3ECC7D0818())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA65C4F563B7CF68E())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_319(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x6FA8221C9D2ECB46(*uParam0, 1);
	unk_0xFD866EC0672D68D5(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x9C9EC7CC88D050FA(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0xCD29B8E8A95DC63C(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0x79492A7A520B137D(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_320()
{
	if (iLocal_136)
	{
		return;
	}
	func_321();
	unk_0x1780951D345B980F("Darts Zoom");
	iLocal_136 = 1;
}

void func_321()
{
	if (iLocal_135 || iLocal_136)
	{
		unk_0xBD9F36815B9331DB();
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		unk_0x32279DAB93C9A9FA(uLocal_84, uLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0x32279DAB93C9A9FA(uLocal_75, uLocal_84, 1000, 1, 1);
	}
}

void func_323(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_244(&(uParam0->f_62), func_325(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_239(&(uParam0->f_62), 0))
			{
				func_324(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_324(var uParam0)
{
	uParam0->f_8 = 0;
	func_424(&(uParam0->f_2));
	func_424(&(uParam0->f_5));
}

char* func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_326(var uParam0)
{
	if (!iLocal_54)
	{
		if (!unk_0x5C6675393464A814(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x5C6675393464A814(2, 201) || unk_0x86AF801D34E482FF(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_327(var uParam0, int iParam1)
{
	if (!unk_0xA300BD5F71A8C704())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_328(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_334(&(uParam0->f_666), 8, 0);
				func_334(&(uParam0->f_666), 16, 0);
				func_334(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_328(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_334(&(uParam0->f_666), 8, 0);
				func_334(&(uParam0->f_666), 16, 0);
				func_334(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_120(&(uParam0->f_509), 1, 0, 0, 1);
			func_119(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_334(&(uParam0->f_666), 16, 1);
			func_334(&(uParam0->f_666), 8, 0);
			func_334(&(uParam0->f_666), 15, 0);
			func_334(&(uParam0->f_666), 17, 0);
			func_334(&(uParam0->f_666), 23, 0);
		}
		unk_0x53CE6C5893F65093(76, 66);
		unk_0x0C456F50E9145299(0f, 0f, 0f, 0f);
		unk_0x17552FF90A99ABEA();
		func_202(func_115(func_3(&(uParam0->f_666), 16), 1, 2));
		func_122(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_334(&(uParam0->f_666), 15, 0);
		func_334(&(uParam0->f_666), 16, 0);
		func_334(&(uParam0->f_666), 23, 0);
	}
}

int func_328(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x191DDA30577F440A(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_329(var uParam0)
{
	if (!unk_0xA300BD5F71A8C704())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_120(&(uParam0->f_509), 0, 0, 0, 1);
			func_328(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_119(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_334(&(uParam0->f_666), 23, 1);
			func_334(&(uParam0->f_666), 8, 0);
			func_334(&(uParam0->f_666), 16, 0);
			func_334(&(uParam0->f_666), 15, 0);
			func_334(&(uParam0->f_666), 17, 0);
		}
		func_122(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_334(&(uParam0->f_666), 15, 0);
		func_334(&(uParam0->f_666), 16, 0);
		func_334(&(uParam0->f_666), 23, 0);
		func_334(&(uParam0->f_666), 17, 0);
	}
}

void func_330(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0x5C6675393464A814(2, 201) && !unk_0x5C6675393464A814(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_147 = false;
				unk_0x66AE54CE92457FEE(1);
			}
		}
		if (unk_0x609EEF618F8CC869(2, 235) || unk_0x6DC4D8B66C3E0EA0(2, 235))
		{
			if (!bLocal_147)
			{
				*uParam0 = 14;
				bLocal_147 = true;
				unk_0x66AE54CE92457FEE(1);
			}
		}
		else if (func_306("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_147 = false;
		}
	}
}

void func_331(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_332(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_333(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_334(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x191DDA30577F440A(uParam0, iParam1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(uParam0, iParam1);
	}
}

int func_335(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_112293.f_18968.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_247(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_246(uParam1, iVar0);
		func_252(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_163 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_140 = 1;
	iLocal_141 = 0;
	iLocal_143 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_149 = 0;
	func_334(&(uParam2->f_666), 6, 0);
	func_342();
	func_340(uParam2);
	if (iParam0->f_457)
	{
		func_337(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_337(bool bParam0)
{
	unk_0xDD7C2F9844E745B1(0);
	if (unk_0x2671671BBCC6AD9F(uLocal_77))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_77, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_81))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_81, 0);
	}
	if (unk_0x8B6A925F148E0E94())
	{
		func_339();
		unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
		unk_0x6E1E3A5B1F9AB95B(500);
	}
	func_338(bParam0);
}

void func_338(bool bParam0)
{
	if (bParam0)
	{
		unk_0x6FA8221C9D2ECB46(uLocal_75, 1);
	}
}

void func_339()
{
	unk_0x6FA8221C9D2ECB46(uLocal_77, 1);
}

void func_340(var uParam0)
{
	func_341();
	uParam0->f_670 = 3;
	func_334(&(uParam0->f_666), 15, 0);
	func_334(&(uParam0->f_666), 16, 0);
	func_334(&(uParam0->f_666), 17, 0);
}

void func_341()
{
	int iVar0;
	
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_342()
{
	settimera(0);
	iLocal_54 = 0;
	unk_0x4C4EBDF5C0D2DCB8();
}

void func_343(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_345(&iVar0, 0, iParam1))
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
		func_344(&(Global_22670.f_5917[iVar0 /*10*/]));
		Global_22670.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22670.f_5978[iVar0] = 0;
	}
}

void func_344(var uParam0)
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

int func_345(var uParam0, bool bParam1, int iParam2)
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

void func_346(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x704F8697BB515627(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	unk_0x9E3D03981E2E9AD9(iParam3);
	unk_0x9E3D03981E2E9AD9(iParam4);
	unk_0x392841D58D2EED1D();
}

int func_347(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x366E7F593105797F(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_404(0, 0, 0, 1);
		func_403(0, -1, 1);
		if (func_402())
		{
			if (Global_4271211 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4271211;
				func_401(uParam0->f_660, 1, 1);
				unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0x49875FC4498CDA9A(sVar0))
				{
					func_400(sVar0, 0, 0);
				}
			}
			Global_4271212 = unk_0xDFB7BFA6482FEE1E() + 300;
		}
		else if (func_399() && unk_0xDFB7BFA6482FEE1E() > Global_4271212)
		{
			if (Global_4271211 == uParam0->f_660)
			{
				iVar2 = func_398(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4271212 = unk_0xDFB7BFA6482FEE1E() + 300;
		}
		if (func_397(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_401(uParam0->f_660, 1, 1);
			unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x49875FC4498CDA9A(sVar0))
			{
				func_400(sVar0, 0, 0);
			}
		}
		if (func_396(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_401(uParam0->f_660, 1, 1);
			unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x49875FC4498CDA9A(sVar0))
			{
				func_400(sVar0, 0, 0);
			}
		}
		if (func_395(&(uParam0->f_633)) || func_394(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0x9B0169E27978C1A2(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_380(uParam0);
		}
		if (func_379(&(uParam0->f_636)) || func_377(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0x9B0169E27978C1A2(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_380(uParam0);
		}
		if ((unk_0x86AF801D34E482FF(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_376(uParam0->f_662 + 1, 1);
			*uParam2 = func_376(uParam0->f_664 + 1, 0);
			unk_0x9B0169E27978C1A2(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_350(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0x609EEF618F8CC869(2, 202) || func_349())
		{
			func_348(0, 0);
			func_334(&(uParam0->f_666), 8, 0);
			func_334(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x609EEF618F8CC869(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x609EEF618F8CC869(2, 202))
		{
			func_380(uParam0);
			func_334(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_348(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22670.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22670.f_2381[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2464040[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22670.f_4175[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22670.f_4432[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22670.f_4690[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22670.f_5346[iVar0] = 0;
		Global_22670.f_5484[iVar0] = 0;
		Global_22670.f_5613[iVar0] = 0;
		Global_22670.f_6136[iVar0] = 0f;
		Global_22670.f_5742[iVar0] = 0;
		Global_22670.f_6002[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22670.f_5313[iVar0] = 0;
		Global_22670.f_5325[iVar0] = 0f;
		Global_22670.f_5319[iVar0] = -1f;
		Global_22670.f_5332[iVar0] = 0;
		Global_22670.f_5340[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22670.f_5221[iVar0 /*4*/]), "", 16);
		Global_22670.f_5270[iVar0] = -1;
		Global_22670.f_5283[iVar0] = 361;
		Global_22670.f_5296[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22670.f_6277[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22670.f_7286[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22670.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4271135.f_16), "", 16);
	Global_4271135.f_20 = -1;
	Global_22670 = 0;
	Global_22670.f_5475 = 0;
	Global_22670.f_5476 = 0;
	Global_22670.f_5477 = 0;
	Global_22670.f_5479 = 0;
	Global_22670.f_5480 = 0;
	Global_22670.f_5481 = 0;
	Global_22670.f_5478 = 0;
	Global_22670.f_6131 = 0;
	Global_22670.f_6271 = 0;
	Global_22670.f_5996 = 0;
	Global_22670.f_5995 = 0;
	Global_22670.f_5997 = 0;
	StringCopy(&(Global_22670.f_4947), "", 24);
	Global_22670.f_5019 = 0;
	Global_22670.f_5020 = 0;
	Global_22670.f_5021 = 0;
	Global_22670.f_5022 = 0;
	Global_22670.f_5023 = 0;
	Global_22670.f_5024 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_4953[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_5025 = 0;
	StringCopy(&(Global_4271135.f_21), "", 16);
	Global_4271135.f_61 = 0;
	Global_4271135.f_62 = 0;
	Global_4271135.f_63 = 0;
	Global_4271135.f_64 = 0;
	Global_4271135.f_65 = 0;
	Global_4271135.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4271135.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4271135.f_67 = 0;
	StringCopy(&(Global_22670.f_1), "", 16);
	Global_22670.f_5331 = 0f;
	Global_22670.f_68 = 0;
	Global_22670.f_69 = 0;
	Global_22670.f_70 = 0;
	Global_22670.f_71 = 0;
	Global_22670.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_6001 = 0;
	Global_22670.f_6000 = 0;
	Global_22670.f_5998 = 0;
	Global_22670.f_5999 = 0;
	Global_22670.f_5026 = 0;
	Global_22670.f_5027 = 0;
	Global_22670.f_5482 = 10;
	Global_22670.f_5483 = 0;
	Global_22670.f_6133 = 0f;
	Global_22670.f_6134 = 0f;
	Global_22670.f_5985 = 0;
	Global_22670.f_5986 = 0;
	Global_22670.f_5987 = 0f;
	Global_22670.f_5988 = 0;
	Global_22670.f_5990 = 0;
	Global_22670.f_5989 = 0;
	Global_22670.f_5991 = 0;
	Global_22670.f_5992 = 0;
	Global_22670.f_5993 = 0;
	Global_22670.f_5994 = 0;
	Global_22670.f_8670 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22670.f_6265[iVar0] = -1;
		Global_22670.f_6268[iVar0] = -1;
		iVar0++;
	}
	Global_22670.f_5338 = 0f;
	Global_22670.f_5309 = 0;
	Global_22670.f_5339 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22670.f_6272)
	{
		Global_22670.f_6272[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_8649 = 0;
	Global_22670.f_8644 = 0;
	Global_22670.f_8654 = 0;
	Global_22670.f_8659 = 0;
	Global_22670.f_8664 = 0;
	Global_22670.f_8666 = 0;
	Global_22670.f_8672 = 0;
	Global_22667 = 0.05f;
	Global_22668 = 0.05f;
	Global_22669 = 0.225f;
	fVar2 = unk_0x451E904FC8FB5C54(0);
	if (bParam0)
	{
		Global_22669 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22669 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22669 = 0.225f;
	}
}

int func_349()
{
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (unk_0x86AF801D34E482FF(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_350(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_345(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_373(0, bParam6))
	{
		return;
	}
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22670)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22670 = 0;
		}
	}
	if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) == unk_0x15173FB88ABC94F9("HIDE"))
	{
		fVar57 = Global_22668;
	}
	else
	{
		fVar57 = (((Global_22668 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22669;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x32C9F8FADAAEEFE6(&iVar58, &iVar59);
		fVar61 = unk_0x451E904FC8FB5C54(0);
		if (func_20())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_20())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x24BE716BB6F8D262(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22670.f_5475 <= 1)
		{
			func_369(Global_22670.f_5475 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22670.f_6271 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22670.f_5985)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) == unk_0x15173FB88ABC94F9("HIDE"))
			{
				fVar49 = Global_22668;
			}
			else
			{
				if (Global_22670)
				{
					StringCopy(&cVar63, func_24(29), 64);
					StringCopy(&cVar64, func_21(29, 1), 64);
					if (unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_368(Global_22667, Global_22668, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0xDDD5C8D7152E128F(&cVar63, &cVar64, (Global_22667 + (fParam5 * 0.5f)), (Global_22668 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xDDD5C8D7152E128F(&cVar63, &cVar64, (Global_22667 + (fParam5 * 0.5f)), (Global_22668 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22670.f_8644)
				{
					iVar1 = Global_22670.f_8640;
					iVar2 = Global_22670.f_8641;
					iVar3 = Global_22670.f_8642;
					iVar4 = Global_22670.f_8643;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_368(Global_22667, (Global_22668 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22668 + fVar55) + 0.034722f) + 0f);
				if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) != 0)
				{
					func_367();
					unk_0xE5A80C83FA218963(&(Global_22670.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22670.f_68)
					{
						if (Global_22670.f_5[iVar14] == 2)
						{
							unk_0x38CD3C04C877C35F(Global_22670.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22670.f_5[iVar14] == 3)
						{
							unk_0x21300A5159EC89B1(Global_22670.f_14[iVar16], Global_22670.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22670.f_5[iVar14] == 1)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22670.f_5[iVar14] == 8)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22670.f_5[iVar14] == 5)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 6)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 7)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 9)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xBC68FBDA73BBB4A6((Global_22667 + 0.00390625f), ((Global_22668 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22670.f_5992)
				{
					func_367();
					func_365((((Global_22667 + fParam5) - 0.00390625f) - func_366("CM_ITEM_COUNT", Global_22670.f_5993, Global_22670.f_5994)), ((Global_22668 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22670.f_5993, Global_22670.f_5994);
				}
				else if (Global_22670.f_5988 > Global_22670.f_5482)
				{
					if (Global_22670.f_5991 != 0)
					{
						func_367();
						func_365((((Global_22667 + fParam5) - 0.00390625f) - func_366("CM_ITEM_COUNT", Global_22670.f_5991, Global_22670.f_5990)), ((Global_22668 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22670.f_5991, Global_22670.f_5990);
					}
				}
			}
			iVar6 = Global_22670.f_5995;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22670.f_8654)
			{
				iVar1 = Global_22670.f_8650;
				iVar2 = Global_22670.f_8651;
				iVar3 = Global_22670.f_8652;
				iVar4 = Global_22670.f_8653;
			}
			else
			{
				unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22670.f_5482 && iVar6 <= Global_22670.f_5475)
			{
				if (iVar6 >= 0)
				{
					if (Global_22670.f_5742[iVar6])
					{
						if (Global_22670.f_5613[iVar6] && iVar6 != Global_22670.f_5995)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22670.f_6002[iVar6] != 0f)
						{
							fVar54 = Global_22670.f_6002[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22670.f_5988 > Global_22670.f_5482)
			{
				if (Global_22670.f_8659)
				{
					iVar1 = Global_22670.f_8655;
					iVar2 = Global_22670.f_8656;
					iVar3 = Global_22670.f_8657;
					iVar4 = Global_22670.f_8658;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_368(Global_22667, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x345540F6D1175D5D("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22670.f_8672)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xB4D5E37C91862216(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "shop_arrows_upANDdown", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_4947)) != 0 && Global_22670.f_5023 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22667 + 0.0046875f);
				if (Global_22670.f_5025 != 0)
				{
					func_18(Global_22670.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22667 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_364(fVar40);
				unk_0x9681B7444691EB29(&(Global_22670.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22670.f_5019)
				{
					if (Global_22670.f_4953[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_22670.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22670.f_4953[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_22670.f_4962[iVar16], Global_22670.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22670.f_4953[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5F1D2FA6FBF403D1(fVar40, (fVar49 + 0.00277776f));
				unk_0xB4D5E37C91862216(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_368(Global_22667, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22670.f_8664)
				{
					iVar1 = Global_22670.f_8660;
					iVar2 = Global_22670.f_8661;
					iVar3 = Global_22670.f_8662;
					iVar4 = Global_22670.f_8663;
				}
				else
				{
					unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_364(fVar40);
				unk_0xE5A80C83FA218963(&(Global_22670.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22670.f_5019)
				{
					if (Global_22670.f_4953[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_22670.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22670.f_4953[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_22670.f_4962[iVar16], Global_22670.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22670.f_4953[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBC68FBDA73BBB4A6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22670.f_5025 != 0)
				{
					func_18(Global_22670.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					func_363(Global_22670.f_5025, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_5025), func_21(Global_22670.f_5025, 1), ((Global_22667 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22670.f_5023 > 0)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - Global_22670.f_5024) > Global_22670.f_5023)
					{
						StringCopy(&(Global_22670.f_4947), "", 24);
						Global_22670.f_5023 = -1;
					}
				}
			}
			if (unk_0x15173FB88ABC94F9(&(Global_4271135.f_21)) != 0 && Global_4271135.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22667 + 0.0046875f);
				if (Global_4271135.f_67 != 0)
				{
					func_18(Global_4271135.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22667 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_364(fVar40);
				unk_0x9681B7444691EB29(&(Global_4271135.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4271135.f_61)
				{
					if (Global_4271135.f_25[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_4271135.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4271135.f_25[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_4271135.f_34[iVar16], Global_4271135.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4271135.f_25[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5F1D2FA6FBF403D1(fVar40, (fVar49 + 0.00277776f));
				unk_0xB4D5E37C91862216(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_368(Global_22667, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22670.f_8664)
				{
					iVar1 = Global_22670.f_8660;
					iVar2 = Global_22670.f_8661;
					iVar3 = Global_22670.f_8662;
					iVar4 = Global_22670.f_8663;
				}
				else
				{
					unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_364(fVar40);
				unk_0xE5A80C83FA218963(&(Global_4271135.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4271135.f_61)
				{
					if (Global_4271135.f_25[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_4271135.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4271135.f_25[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_4271135.f_34[iVar16], Global_4271135.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4271135.f_25[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBC68FBDA73BBB4A6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4271135.f_67 != 0)
				{
					func_18(Global_4271135.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_363(Global_4271135.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xDDD5C8D7152E128F(func_24(Global_4271135.f_67), func_21(Global_4271135.f_67, 1), ((Global_22667 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4271135.f_65 > 0)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - Global_4271135.f_66) > Global_4271135.f_65)
					{
						StringCopy(&(Global_4271135.f_21), "", 16);
						Global_4271135.f_65 = -1;
					}
				}
			}
			func_358(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x53CE6C5893F65093(76, 84);
			unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22670.f_5985)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22670.f_5475;
			if (Global_22670.f_5986)
			{
				iVar66 = (Global_22670.f_5989 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22670.f_6002[iVar6] != 0f)
				{
					fVar54 = Global_22670.f_6002[iVar6];
				}
				if (Global_22670.f_5986)
				{
					iVar6 = Global_22670.f_8295[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22670.f_5995 && iVar9 < Global_22670.f_5482)
				{
					bVar33 = true;
					if (Global_22670.f_5996 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22670.f_5613[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22670.f_6136[iVar6] = fVar35;
				fVar34 = (Global_22667 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22670.f_5996 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22670.f_8666)
					{
						unk_0xB4D5E37C91862216(Global_22670.f_8665, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xB4D5E37C91862216(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Nav", (Global_22667 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22670.f_6134 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22670.f_5483)
				{
					if (unk_0x234B68AC2E35ED5A(Global_22670.f_5346[iVar6], iVar8) || Global_22670.f_5313[iVar8] == 5)
					{
						if (Global_22670.f_5986)
						{
							iVar19 = Global_22670.f_8311[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar20 = Global_22670.f_8352[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar21 = Global_22670.f_8393[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar22 = Global_22670.f_8434[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar23 = Global_22670.f_8475[((iVar9 * Global_22670.f_5483) + iVar8)];
						}
						else
						{
							Global_22670.f_8311[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar19;
							Global_22670.f_8352[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar20;
							Global_22670.f_8393[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar21;
							Global_22670.f_8434[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar22;
							Global_22670.f_8475[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22670.f_6268[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22670.f_6265[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22670.f_6268[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22670.f_6265[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22670.f_5319[iVar8] != -1f)
						{
							fVar34 = ((Global_22667 + 0.0046875f) + Global_22670.f_5319[iVar8]);
						}
						if ((iVar8 < 4 && Global_22670.f_5319[iVar8 + 1] != -1f) && fVar34 < Global_22670.f_5319[iVar8 + 1])
						{
							fVar44 = (Global_22670.f_5319[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22667 + Global_22669) - 0.0046875f) - fVar34);
						}
						if ((Global_22670.f_5332[iVar8] && Global_22670.f_6131) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22670.f_5313[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_22670.f_2124[iVar24])
											{
												bVar51 = true;
											}
											func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xF942A67633C39BF7(&(Global_22670.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x38CD3C04C877C35F(Global_22670.f_4175[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x21300A5159EC89B1(Global_22670.f_4432[(iVar21 + iVar27)], Global_22670.f_4561[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_18(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22670.f_4690[(iVar22 + iVar14)] == 2 || Global_22670.f_4690[(iVar22 + iVar14)] == 51) || Global_22670.f_4690[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
										Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar42;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22670.f_5340[iVar69] == 2)
												{
													Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar69)] = (Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar69)] - Global_22670.f_5325[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar42 = Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_22670.f_2124[iVar24])
										{
											bVar51 = true;
										}
										func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_355(bVar32);
										}
										unk_0xE5A80C83FA218963(&(Global_22670.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x38CD3C04C877C35F(Global_22670.f_4175[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x21300A5159EC89B1(Global_22670.f_4432[(iVar21 + iVar27)], Global_22670.f_4561[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22670.f_4690[(iVar22 + iVar28)] == 2 || Global_22670.f_4690[(iVar22 + iVar28)] == 51) || Global_22670.f_4690[(iVar22 + iVar28)] == 61)
											{
												if (func_18(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_18(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_363(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22670.f_5340[iVar8] == 2)
															{
																unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[(iVar22 + iVar28)]), func_21(Global_22670.f_4690[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[(iVar22 + iVar28)]), func_21(Global_22670.f_4690[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22670.f_5340[iVar8] == 2)
										{
											unk_0xBC68FBDA73BBB4A6(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xBC68FBDA73BBB4A6((fVar34 + fVar40), fVar35, 0);
											if (func_354() && unk_0x636F1F53CC61D2C9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22670.f_2124[iVar24])
													{
														bVar51 = true;
													}
													func_356(0, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x9E8B548C035F223D(0f, (0.35f * 0.7f));
													unk_0x968AC0BD45D79791(255, 255, 255, 150);
													unk_0x80B2E30CC8B794C0((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xE5A80C83FA218963(&cVar75);
													unk_0x38CD3C04C877C35F((Global_22670.f_5995 + iVar30));
													unk_0xBC68FBDA73BBB4A6((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22670.f_4690[(iVar22 + iVar14)] != 2 && Global_22670.f_4690[(iVar22 + iVar14)] != 51) && Global_22670.f_4690[(iVar22 + iVar14)] != 61)
											{
												if (func_18(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_18(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_363(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22670.f_4690[(iVar22 + iVar14)] == 30)
															{
																unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[(iVar22 + iVar14)]), func_21(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), (Global_22667 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22670.f_5340[iVar8] == 2)
															{
																unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[(iVar22 + iVar14)]), func_21(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[(iVar22 + iVar14)]), func_21(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_355(bVar32);
										}
										unk_0xF942A67633C39BF7("NUMBER");
										unk_0x38CD3C04C877C35F(Global_22670.f_4175[iVar20]);
										fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										func_353((fVar34 + fVar40), fVar35, "NUMBER", Global_22670.f_4175[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_355(bVar32);
										}
										unk_0xF942A67633C39BF7("NUMBER");
										unk_0x21300A5159EC89B1(Global_22670.f_4432[iVar21], Global_22670.f_4561[iVar21]);
										fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_356(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
									func_352((fVar34 + fVar40), fVar35, "NUMBER", Global_22670.f_4432[iVar21], Global_22670.f_4561[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_18(Global_22670.f_4690[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22670.f_5986)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22670.f_5340[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
											Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
											fVar42 = Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22670.f_5340[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_363(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xDDD5C8D7152E128F(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_363(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xDDD5C8D7152E128F(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_18(Global_22670.f_4690[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_363(Global_22670.f_4690[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xDDD5C8D7152E128F(func_24(Global_22670.f_4690[iVar22]), func_21(Global_22670.f_4690[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_351(Global_22670.f_4690[iVar22])), (fVar37 * func_351(Global_22670.f_4690[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22670.f_5313[iVar8] == 5)
						{
							if (Global_22670.f_5325[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
							if (Global_22670.f_5332[iVar8])
							{
								if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22670.f_8295[iVar9] = iVar6;
						Global_22670.f_5997 = iVar6;
						iVar9++;
						if (Global_22670.f_5613[iVar6])
						{
							iVar13++;
						}
						if (Global_22670.f_6002[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22670.f_6002[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22670.f_5985)
					{
						Global_22670.f_5742[iVar6] = 1;
						if (Global_22670.f_5484[iVar6])
						{
							if (bVar32)
							{
								Global_22670.f_5991 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22670.f_5991 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22670.f_5985)
			{
				Global_22670.f_5987 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22670.f_5990 = iVar11;
				Global_22670.f_5988 = iVar10;
				Global_22670.f_5985 = 1;
			}
		}
		if (!Global_22670.f_5986)
		{
			Global_22670.f_5989 = iVar9;
			Global_22670.f_5986 = 1;
		}
		iVar5++;
	}
	Global_22670.f_6133 = fVar49;
	Global_22670.f_6135 = unk_0xDFB7BFA6482FEE1E();
	unk_0x643A5EAD42A4060C(Global_22670.f_6133);
	if (!Global_22670.f_8639)
	{
		func_38(0);
	}
	Global_22670.f_8639 = 0;
	if (bParam2)
	{
		unk_0xEFD424FDD55A6EC7(10);
	}
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(9);
	unk_0xEFD424FDD55A6EC7(8);
	if (bParam0)
	{
		func_202(1);
	}
	unk_0x17552FF90A99ABEA();
}

float func_351(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_352(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x21300A5159EC89B1(uParam3, uParam4);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, 0);
}

void func_353(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(iParam3);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, iParam4);
}

var func_354()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

void func_355(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xB4D5E37C91862216(Global_22670.f_8667[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xB4D5E37C91862216(Global_22670.f_8667[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
}

void func_356(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_357(Global_22670.f_6268[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xB4D5E37C91862216(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xB4D5E37C91862216(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x968AC0BD45D79791(155, 155, 155, 255);
		}
		else
		{
			unk_0x968AC0BD45D79791(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x968AC0BD45D79791(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x968AC0BD45D79791(155, 155, 155, 255);
	}
	else
	{
		unk_0x968AC0BD45D79791(155, 155, 155, 255);
	}
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0xD7BF3EFD7B2022EC(1);
	if (bParam5)
	{
		unk_0x9E8B548C035F223D(0f, 0.425f);
		unk_0x57BF57F8A1C8167A(4);
	}
	else if (bParam6)
	{
		unk_0x9E8B548C035F223D(0f, 0.425f);
		unk_0x57BF57F8A1C8167A(6);
	}
	else
	{
		unk_0x57BF57F8A1C8167A(0);
	}
	unk_0x70D76B2EE444F0BD(0f, 1f);
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_357(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_358(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_345(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_373(bParam4, bParam8))
	{
		return;
	}
	if (func_361())
	{
		return;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_359(unk_0x1146A9AE09CE2B14(), 0))
		{
			return;
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (unk_0x4793CFF25F0D14B5() == 0 || unk_0xFEABE4F1525A0A08())
		{
			return;
		}
	}
	if (Global_22670.f_5026 != 0)
	{
		if (unk_0x0C7C436873368EDB(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22670.f_5026)
			{
				if (Global_22670.f_5283[iVar1] != 361)
				{
					StringCopy(&(Global_22670.f_5028[iVar1 /*16*/]), unk_0x908D1ACF42DAF9B8(2, Global_22670.f_5283[iVar1], true), 64);
				}
				else if (Global_22670.f_5296[iVar1] != 32)
				{
					StringCopy(&(Global_22670.f_5028[iVar1 /*16*/]), unk_0xD895F953C52A8886(2, Global_22670.f_5296[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22670.f_5027 = 0;
		}
		if (!Global_22670.f_5027)
		{
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x82D42F43BE26EB72((1f - (Global_22670.f_5338 / 100f)));
			unk_0x392841D58D2EED1D();
			if (unk_0x3640D836D145B814())
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x9D7453DF8B7E9E0B(true);
				unk_0x392841D58D2EED1D();
			}
			iVar1 = 0;
			while (iVar1 < Global_22670.f_5026)
			{
				if (unk_0x15173FB88ABC94F9(&(Global_22670.f_5221[iVar1 /*4*/])) != unk_0x15173FB88ABC94F9("PREV"))
				{
					unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(iVar1);
					func_13(&(Global_22670.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x15173FB88ABC94F9(&(Global_22670.f_5221[iVar2 /*4*/])) == unk_0x15173FB88ABC94F9("PREV"))
					{
						func_13(&(Global_22670.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22670.f_5270[iVar1] == -1)
					{
						func_12(&(Global_22670.f_5221[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22670.f_5270[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x35CA0C119E6A2A27(&(Global_22670.f_5221[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4E2EF4B6B665F3F4(iVar3, 70);
						}
						else
						{
							unk_0x38CD3C04C877C35F(iVar3);
						}
						unk_0xD4B2C39F7AD5A6A6();
					}
					if (unk_0x3640D836D145B814())
					{
						if (Global_22670.f_5283[iVar1] != 361 && unk_0x234B68AC2E35ED5A(Global_22670.f_5309, iVar1))
						{
							unk_0x9D7453DF8B7E9E0B(true);
							unk_0x9E3D03981E2E9AD9(Global_22670.f_5283[iVar1]);
						}
						else
						{
							unk_0x9D7453DF8B7E9E0B(false);
							unk_0x9E3D03981E2E9AD9(361);
						}
					}
					unk_0x392841D58D2EED1D();
				}
				iVar1++;
			}
			if (unk_0x15173FB88ABC94F9(&(Global_4271135.f_16)) != unk_0x15173FB88ABC94F9(""))
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(Global_22670.f_5026);
				func_13(&Global_4271135);
				if (Global_4271135.f_20 == -1)
				{
					func_12(&(Global_4271135.f_16));
				}
				else
				{
					iVar4 = Global_22670.f_5270[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x35CA0C119E6A2A27(&(Global_4271135.f_16));
					if (bParam5)
					{
						unk_0x4E2EF4B6B665F3F4(iVar4, 70);
					}
					else
					{
						unk_0x38CD3C04C877C35F(iVar4);
					}
					unk_0xD4B2C39F7AD5A6A6();
				}
				unk_0x392841D58D2EED1D();
			}
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(80);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22670.f_5339)
			{
				unk_0x9E3D03981E2E9AD9(1);
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(0);
			}
			unk_0x392841D58D2EED1D();
			Global_22670.f_5027 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22670.f_5026)
		{
			if (Global_22670.f_5270[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x9E3D03981E2E9AD9(iVar1);
					unk_0x35CA0C119E6A2A27(&(Global_22670.f_5221[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4E2EF4B6B665F3F4(iParam2, 70);
					}
					else
					{
						unk_0x38CD3C04C877C35F(iParam2);
					}
					unk_0xD4B2C39F7AD5A6A6();
					unk_0x392841D58D2EED1D();
				}
			}
			iVar1++;
		}
		if (Global_4271135.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x9E3D03981E2E9AD9(iVar1);
				unk_0x35CA0C119E6A2A27(&(Global_4271135.f_16));
				if (bParam5)
				{
					unk_0x4E2EF4B6B665F3F4(iParam2, 70);
				}
				else
				{
					unk_0x38CD3C04C877C35F(iParam2);
				}
				unk_0xD4B2C39F7AD5A6A6();
				unk_0x392841D58D2EED1D();
			}
		}
		unk_0x53CE6C5893F65093(76, 66);
		unk_0x0C456F50E9145299(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22670.f_8674)
			{
				unk_0x1F2C4D3A741ED5AD(15, 0f, -0.0375f);
				Global_22670.f_8674 = 1;
			}
		}
		else if (Global_22670.f_8674)
		{
			unk_0x956EB3331C33B055(15);
			Global_22670.f_8674 = 0;
		}
		unk_0x17552FF90A99ABEA();
		if (Global_22670.f_5312)
		{
			unk_0x53CE6C5893F65093(82, 66);
			unk_0x0C456F50E9145299(0f, 0f, 0f, 0f);
			unk_0x43D93129BD1AD792(Global_22670.f_5917[iVar0 /*10*/], Global_22670.f_5310, Global_22670.f_5311, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x17552FF90A99ABEA();
		}
		else
		{
			unk_0x44EF5678D6916481(Global_22670.f_5917[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_359(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_360(-1, 0) == 8;
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

int func_360(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
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

int func_361()
{
	struct<3> Var0;
	
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	if (func_362())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x3AEC124A3999B3D1(&Var0);
		if (Global_19743 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_362()
{
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_363(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xB4D5E37C91862216(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xB4D5E37C91862216(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_364(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x57BF57F8A1C8167A(0);
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0x403A87C18C91C19E(2);
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
	unk_0x70D76B2EE444F0BD(fParam0, ((Global_22667 + Global_22669) - 0.0046875f));
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_365(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(uParam3);
	unk_0x38CD3C04C877C35F(uParam4);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, 0);
}

float func_366(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x4030103C8B148AFC(sParam0))
	{
		if (unk_0x15173FB88ABC94F9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_367();
	unk_0xF942A67633C39BF7(sParam0);
	unk_0x38CD3C04C877C35F(uParam1);
	unk_0x38CD3C04C877C35F(uParam2);
	return unk_0xB12E7ADB99F5BEEB(1);
}

void func_367()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22670.f_8649)
	{
		iVar0 = Global_22670.f_8645;
		iVar1 = Global_22670.f_8646;
		iVar2 = Global_22670.f_8647;
		iVar3 = Global_22670.f_8648;
	}
	unk_0x57BF57F8A1C8167A(0);
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
	unk_0x70D76B2EE444F0BD((Global_22667 + 0.0046875f), ((Global_22667 + Global_22669) - 0.0046875f));
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_368(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x80B2E30CC8B794C0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_369(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22670.f_5475 > iParam0)
	{
		return;
	}
	if (Global_22670.f_5475 >= 128)
	{
		return;
	}
	if (Global_22670.f_5477 >= 256)
	{
		return;
	}
	if (Global_22670.f_6000 < Global_22670.f_5998)
	{
		return;
	}
	if (Global_22670.f_5475 != iParam0)
	{
		Global_22670.f_5475 = iParam0;
		Global_22670.f_5476 = 0;
	}
	iVar0 = Global_22670.f_5313[Global_22670.f_5476];
	if (iVar0 != 1)
	{
		while (Global_22670.f_5476 < 4 && iVar0 != 1)
		{
			Global_22670.f_5476++;
			iVar0 = Global_22670.f_5313[Global_22670.f_5476];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]), sParam1, 24);
	if (!unk_0xAB6A270F84A8781E(sParam1) && !unk_0x49875FC4498CDA9A(sParam1))
	{
	}
	Global_22670.f_1610[Global_22670.f_5477] = bParam3;
	Global_22670.f_1867[Global_22670.f_5477] = iParam4;
	Global_22670.f_2124[Global_22670.f_5477] = iParam6;
	Global_22670.f_5477++;
	if (!bParam3)
	{
		func_372(Global_22670.f_5475, 1);
	}
	else
	{
		func_372(Global_22670.f_5475, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_371(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]));
		if (Global_22670.f_5332[Global_22670.f_5476])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22670.f_5325[Global_22670.f_5476])
		{
			Global_22670.f_5325[Global_22670.f_5476] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_370(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]));
			if (fVar4 > Global_22670.f_6002[iParam0])
			{
				Global_22670.f_6002[iParam0] = fVar4;
			}
		}
	}
	unk_0x191DDA30577F440A(&(Global_22670.f_5346[iParam0]), Global_22670.f_5476);
	Global_22670.f_5476++;
	Global_22670.f_6001 = 1;
	Global_22670.f_5999 = (Global_22670.f_5477 - 1);
	Global_22670.f_6000 = 0;
	Global_22670.f_5998 = iParam2;
}

float func_370(char* sParam0)
{
	if (!unk_0x49875FC4498CDA9A(sParam0))
	{
	}
	return unk_0x7E12948ACF187619(0.35f, 0);
}

float func_371(char* sParam0)
{
	if (!unk_0x4030103C8B148AFC(uParam0))
	{
		if (unk_0x15173FB88ABC94F9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_356(0, 1, 0, 0, 0, 0, 0);
	unk_0xF942A67633C39BF7(sParam0);
	return unk_0xB12E7ADB99F5BEEB(1);
}

void func_372(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_22670.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_22670.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_373(bool bParam0, bool bParam1)
{
	if (Global_2441237.f_2012.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE0A6F16F546C8274() || (func_375(8, -1) && func_374() != 65)) || (unk_0xC62ED852B1172A41() != 0 && !bParam1)) || (unk_0xF471787D45ADC2C1() && !bParam0)) || unk_0x1C8EA7DABB529A31()) || Global_77508) || Global_22670.f_8673) || unk_0xD76BEAE1A33E3251()) || Global_99422.f_1441)
	{
		return 0;
	}
	return 1;
}

int func_374()
{
	return Global_1312836;
}

bool func_375(int iParam0, int iParam1)
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

int func_376(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_377(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_398(0) == 1 && Global_4271211 == iParam1)
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

void func_378(var uParam0)
{
	if (!func_423(uParam0))
	{
		func_438(uParam0);
	}
}

int func_379(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		fVar0 = unk_0xBDAD193FD6CC54F5(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x5C6675393464A814(2, 190)) || unk_0x51794501073F0A33(2, 190))
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

void func_380(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_348(0, 0);
	unk_0xB4D5E37C91862216(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_393(uVar0, uVar1, uVar2, uVar3, 1);
	func_392(1, 2, 0, 0, 0);
	func_391(1, 2, 1, 1, 1);
	func_390(0, 1, 0, 0, 0);
	func_389("DARTS_TITLE");
	func_387(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_369(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_384(0, func_376(uParam0->f_662 + 1, 1), 0);
	func_369(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_384(1, func_376(uParam0->f_664 + 1, 0), 0);
	func_383(2, 141, 141, 1);
	func_369(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_382(0);
	func_401(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_400(func_114(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_381(201, "ITEM_SELECT", -1, 0);
	func_381(202, "IB_QUIT", -1, 0);
}

void func_381(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x908D1ACF42DAF9B8(2, iParam0, true);
	if (Global_22670.f_5026 >= 12)
	{
		StringCopy(&Global_4271135, sVar0, 64);
		StringCopy(&(Global_4271135.f_16), sParam1, 16);
		Global_4271135.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x191DDA30577F440A(&(Global_22670.f_5309), Global_22670.f_5026);
	}
	StringCopy(&(Global_22670.f_5028[Global_22670.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22670.f_5221[Global_22670.f_5026 /*4*/]), sParam1, 16);
	Global_22670.f_5270[Global_22670.f_5026] = iParam2;
	Global_22670.f_5283[Global_22670.f_5026] = iParam0;
	Global_22670.f_5296[Global_22670.f_5026] = 32;
	Global_22670.f_5026++;
}

void func_382(int iParam0)
{
	Global_22670.f_5995 = iParam0;
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_22670.f_8670 = iParam3;
	Global_22670.f_8667[0] = iParam1;
	Global_22670.f_8667[1] = iParam2;
	Global_22670.f_8671 = iParam0;
}

void func_384(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22670.f_5475 > iParam0)
	{
		return;
	}
	if (Global_22670.f_5475 >= 128)
	{
		return;
	}
	if (Global_22670.f_5479 >= 256)
	{
		return;
	}
	if (Global_22670.f_6000 < Global_22670.f_5998)
	{
		return;
	}
	if (Global_22670.f_5475 != iParam0)
	{
		Global_22670.f_5475 = iParam0;
		Global_22670.f_5476 = 0;
	}
	iVar0 = Global_22670.f_5313[Global_22670.f_5476];
	if (iVar0 != 2)
	{
		while (Global_22670.f_5476 < 4 && iVar0 != 2)
		{
			Global_22670.f_5476++;
			iVar0 = Global_22670.f_5313[Global_22670.f_5476];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_22670.f_4175[Global_22670.f_5479] = iParam1;
	Global_22670.f_5479++;
	fVar1 = func_386("NUMBER", iParam1);
	if (Global_22670.f_5332[Global_22670.f_5476])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_22670.f_5325[Global_22670.f_5476])
	{
		Global_22670.f_5325[Global_22670.f_5476] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_385("NUMBER", iParam1);
		if (fVar4 > Global_22670.f_6002[iParam0])
		{
			Global_22670.f_6002[iParam0] = fVar4;
		}
	}
	unk_0x191DDA30577F440A(&(Global_22670.f_5346[iParam0]), Global_22670.f_5476);
	Global_22670.f_5476++;
	Global_22670.f_6001 = 2;
}

float func_385(char* sParam0, int iParam1)
{
	if (!unk_0x49875FC4498CDA9A(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x7E12948ACF187619(0.35f, 0);
}

float func_386(char* sParam0, int iParam1)
{
	if (!unk_0x49875FC4498CDA9A(sParam0))
	{
		return 0f;
	}
	func_356(1, 1, 0, 0, 0, 0, 0);
	unk_0xF942A67633C39BF7(sParam0);
	unk_0x38CD3C04C877C35F(uParam1);
	return unk_0xB12E7ADB99F5BEEB(1);
}

void func_387(int iParam0, char* sParam1, char* sParam2)
{
	Global_22670 = iParam0;
	func_388(29, sParam1, sParam2);
}

void func_388(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22670.f_6277[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22670.f_7286[iParam0 /*16*/]), sParam2, 64);
}

void func_389(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22670.f_1), sParam0, 16);
	Global_22670.f_68 = 0;
	Global_22670.f_69 = 0;
	Global_22670.f_70 = 0;
	Global_22670.f_71 = 0;
	Global_22670.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22670.f_5332[0] = iParam0;
	Global_22670.f_5332[1] = iParam1;
	Global_22670.f_5332[2] = iParam2;
	Global_22670.f_5332[3] = iParam3;
	Global_22670.f_5332[4] = iParam4;
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22670.f_5340[0] = iParam0;
	Global_22670.f_5340[1] = iParam1;
	Global_22670.f_5340[2] = iParam2;
	Global_22670.f_5340[3] = iParam3;
	Global_22670.f_5340[4] = iParam4;
}

void func_392(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22670.f_5313[0] = iParam0;
	Global_22670.f_5313[1] = iParam1;
	Global_22670.f_5313[2] = iParam2;
	Global_22670.f_5313[3] = iParam3;
	Global_22670.f_5313[4] = iParam4;
	Global_22670.f_5483 = 0;
	if (iParam0 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam1 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam2 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam3 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam4 != 0)
	{
		Global_22670.f_5483++;
	}
}

void func_393(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_22670.f_8644 = iParam4;
	Global_22670.f_8640 = uParam0;
	Global_22670.f_8641 = uParam1;
	Global_22670.f_8642 = uParam2;
	Global_22670.f_8643 = uParam3;
}

int func_394(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_398(0) == -1 && Global_4271211 == iParam1)
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

int func_395(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		fVar0 = unk_0xBDAD193FD6CC54F5(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x5C6675393464A814(2, 189))
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

int func_396(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		fVar0 = unk_0xBDAD193FD6CC54F5(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x5C6675393464A814(2, 187))
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

int func_397(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		fVar0 = unk_0xBDAD193FD6CC54F5(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x5C6675393464A814(2, 188))
	{
		if (!func_423(uParam0))
		{
			func_378(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_438(uParam0);
			return 1;
		}
	}
	else if (func_423(uParam0))
	{
		func_424(uParam0);
	}
	return 0;
}

int func_398(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_22669);
	fVar1 = (Global_22670.f_5987 - (IntToFloat(Global_22670.f_5989) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	unk_0x3B89B4AD3274A55C(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x3B89B4AD3274A55C(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x17552FF90A99ABEA();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4271205 >= fVar0 && Global_4271205 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4271205 >= fVar0 && Global_4271205 < fVar4)
	{
		return -1;
	}
	if (Global_4271205 >= fVar4 && Global_4271205 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		return unk_0x51794501073F0A33(2, 237);
	}
	return 0;
}

void func_400(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22670.f_4947), sParam0, 24);
	Global_22670.f_5019 = 0;
	Global_22670.f_5020 = 0;
	Global_22670.f_5021 = 0;
	Global_22670.f_5022 = 0;
	Global_22670.f_5023 = iParam1;
	Global_22670.f_5024 = unk_0xDFB7BFA6482FEE1E();
	Global_22670.f_5025 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_4953[iVar0] = 0;
		iVar0++;
	}
}

void func_401(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22670.f_5996 = iParam0;
	Global_22670.f_6131 = iParam2;
	if (Global_22670.f_5996 < Global_22670.f_5995)
	{
		Global_22670.f_5995 = Global_22670.f_5996;
	}
	else if ((Global_22670.f_5986 && Global_22670.f_5996 > Global_22670.f_5997) || (!Global_22670.f_5986 && Global_22670.f_5996 >= (Global_22670.f_5995 + Global_22670.f_5482)))
	{
		iVar0 = Global_22670.f_5995;
		while (iVar0 <= Global_22670.f_5996)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22670.f_5346[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22670.f_5482 && Global_22670.f_5995 < 128)
		{
			Global_22670.f_5995++;
			iVar1 = 0;
			iVar0 = Global_22670.f_5995;
			while (iVar0 <= Global_22670.f_5996)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22670.f_5346[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22670.f_5985 = 0;
	Global_22670.f_5986 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22670.f_4947), "", 24);
		StringCopy(&(Global_4271135.f_21), "", 16);
	}
}

int func_402()
{
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (Global_4271211 > -1)
		{
			if (unk_0x86AF801D34E482FF(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xA944664D6E32BDF8();
	}
	if (Global_4271211 == -6)
	{
		unk_0x16EB94D2E38AD136(4);
		if (iParam0 && unk_0x5C6675393464A814(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4271211 = -1;
			return 0;
		}
	}
	if (((Global_4271211 > -1 || Global_4271211 == -3) || Global_4271211 == -2) || unk_0xE83E493D593614A6())
	{
		unk_0x16EB94D2E38AD136(1);
		return 0;
	}
	if (Global_4271211 == -1 && iParam0)
	{
		if (unk_0x5C6675393464A814(2, 237))
		{
			unk_0x16EB94D2E38AD136(4);
			Global_4271211 = -6;
			return 1;
		}
		else
		{
			unk_0x16EB94D2E38AD136(3);
			return 0;
		}
	}
	unk_0x16EB94D2E38AD136(1);
	return 0;
}

void func_404(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		Global_4271211 = -1;
		return;
	}
	unk_0xB6C1B9E2FFDAEEDF(1);
	fVar0 = Global_22667;
	fVar2 = (fVar0 + Global_22669);
	fVar3 = Global_22670.f_5987;
	fVar1 = (Global_22670.f_5987 - (IntToFloat(Global_22670.f_5989) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22670.f_5989 < 1)
	{
		fVar1 = (Global_22670.f_5987 - 0.034722f);
	}
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x3B89B4AD3274A55C(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x3B89B4AD3274A55C(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x17552FF90A99ABEA();
	func_406();
	if (Global_4271211 == -6)
	{
		return;
	}
	Global_4271211 = -1;
	fVar7 = Global_4271205;
	fVar8 = Global_4271206;
	if (Global_22670.f_5990 > Global_22670.f_5989)
	{
		if (((Global_4271205 >= fVar0 && Global_4271205 <= fVar2) && Global_4271206 >= fVar3) && Global_4271206 < (fVar3 + fVar6))
		{
			Global_4271211 = -2;
			if (bParam3)
			{
				func_405(0);
			}
			return;
		}
		if (((Global_4271205 >= fVar0 && Global_4271205 <= fVar2) && Global_4271206 >= (fVar3 + fVar6)) && Global_4271206 < (fVar3 + 0.034722f))
		{
			Global_4271211 = -3;
			if (bParam3)
			{
				func_405(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22670.f_5990 == -1)
		{
			Global_4271211 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22670.f_5989);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x53CE6C5893F65093(76, 84);
				unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
				func_368(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22669, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x17552FF90A99ABEA();
			}
		}
		Global_4271211 = Global_22670.f_8295[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4271211 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4271211 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4271211 = -4;
		return;
	}
	Global_4271211 = -1;
}

void func_405(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22667;
	fVar1 = Global_22670.f_5987;
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	if (Global_4271211 == -2)
	{
		func_368(fVar0, fVar1, Global_22669, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4271211 == -3)
	{
		func_368(fVar0, (fVar1 + fVar2), Global_22669, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x17552FF90A99ABEA();
}

void func_406()
{
	Global_4271207 = Global_4271205;
	Global_4271208 = Global_4271206;
	Global_4271205 = unk_0xC40DD87705E0DB63(2, 239);
	Global_4271206 = unk_0xC40DD87705E0DB63(2, 240);
	Global_4271209 = (Global_4271205 - Global_4271207);
	Global_4271210 = (Global_4271206 - Global_4271208);
}

float func_407(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_408(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_348(0, 0);
	unk_0xB4D5E37C91862216(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_393(uVar0, uVar1, uVar2, uVar3, 1);
	func_392(1, 2, 0, 0, 0);
	func_391(1, 2, 1, 1, 1);
	func_390(0, 1, 0, 0, 0);
	func_389("DARTS_TITLE");
	func_387(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_369(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_384(0, 1, 0);
	func_369(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_384(1, 1, 0);
	func_369(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_383(2, 141, 141, 1);
	func_382(0);
	func_401(0, 1, 1);
	func_400("DARTS_LEGD", 0, 0);
	func_409();
	func_381(201, "ITEM_SELECT", -1, 0);
	func_381(202, "IB_QUIT", -1, 0);
}

void func_409()
{
	if (unk_0x3640D836D145B814())
	{
		unk_0x8E01EA82E83CAEF2(0.325f, 0.3f);
	}
}

int func_410(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_434() && unk_0xDFB7BFA6482FEE1E() >= iLocal_164 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
		{
			unk_0x8BA9BCDD56AA7115(500);
		}
	}
	if (unk_0x8B6A925F148E0E94() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_164 = unk_0xDFB7BFA6482FEE1E();
						func_418(uParam1->f_1, uParam1->f_4, func_420(2), func_419(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_289(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_276(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_438(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_426(uParam5) > 1f && !func_306("DARTS_DOUBLE_T"))
					{
						func_421("DARTS_DOUBLE_T", -1);
					}
					if (func_426(uParam5) > 5f)
					{
						func_438(uParam5);
						unk_0x66AE54CE92457FEE(1);
						func_412(uParam1->f_1, uParam1->f_4, func_420(3), func_419(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x257CAD90873BF327(uLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_289(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_276(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_438(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_426(uParam5) > 1f && !func_306("DARTS_TRIPLE_T"))
					{
						func_421("DARTS_TRIPLE_T", -1);
					}
					if (func_426(uParam5) > 5f)
					{
						func_438(uParam5);
						unk_0x66AE54CE92457FEE(1);
						func_418(uParam1->f_1, uParam1->f_4, func_420(4), func_419(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x257CAD90873BF327(uLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_289(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_276(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x4569EA65F1B056ED(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_438(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_426(uParam5) > 1f && !func_306("DARTS_BULL_T"))
					{
						func_421("DARTS_BULL_T", -1);
					}
					if (func_426(uParam5) > 5f)
					{
						func_438(uParam5);
						unk_0x66AE54CE92457FEE(1);
						unk_0x9B0169E27978C1A2(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_412(uParam1->f_1, uParam1->f_4, func_420(5), func_419(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x257CAD90873BF327(uLocal_83) && !func_306("DARTS_DBL_WIN"))
			{
				func_421("DARTS_DBL_WIN", -1);
			}
			if (func_426(uParam5) > 6f)
			{
				func_438(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x9B0169E27978C1A2(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0x32279DAB93C9A9FA(uLocal_75, uLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x257CAD90873BF327(uLocal_75))
			{
				iLocal_31 = 0;
				unk_0x66AE54CE92457FEE(1);
				unk_0x1036762BD3781C84();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_411(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x8B6A925F148E0E94())
			{
				iLocal_31 = 0;
				unk_0x66AE54CE92457FEE(1);
				unk_0x1036762BD3781C84();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_411(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x6FA8221C9D2ECB46(uLocal_75, 1);
				unk_0x6E1E3A5B1F9AB95B(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_411(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		unk_0x78CDDD1E6367978D(*uParam0, Var0, 1, 0, 0, 1);
		unk_0x39E572BDDBA714A2(uParam0);
		unk_0x04F4D55F2C0C756D(uParam0);
	}
}

void func_412(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)
{
	unk_0xC236342F1874172C(uLocal_83);
	unk_0xEF20E9A7B745D17A(uLocal_83, 35f);
	unk_0x7508AE96782B0441(uLocal_83, unk_0x26C2ACB261895E70(Param0, fParam1, Param2));
	unk_0xBD833AA6EB59C81B(uLocal_83, Vector(fParam1, 0f, 0f) - Param3, 2);
	unk_0x32279DAB93C9A9FA(uLocal_83, uLocal_82, iParam4, 1, 1);
}

int func_413(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_423(&(uParam0->f_2)))
	{
		func_438(&(uParam0->f_2));
	}
	unk_0xEFD424FDD55A6EC7(14);
	if (!bParam2)
	{
		unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x44EF5678D6916481(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x5C6675393464A814(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_424(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_414(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_415(iParam5);
	unk_0x704F8697BB515627(*uParam0, "RESET_MOVIE");
	unk_0x392841D58D2EED1D();
	unk_0x704F8697BB515627(*uParam0, sVar0);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xB2A9BDF905DC5A51(iParam4);
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0xD4B2C39F7AD5A6A6();
	if (!unk_0xAB6A270F84A8781E(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x9E3D03981E2E9AD9(100);
		unk_0x9D7453DF8B7E9E0B(true);
	}
	unk_0x392841D58D2EED1D();
	if (bParam6)
	{
		unk_0x704F8697BB515627(*uParam0, "TRANSITION_UP");
		unk_0x82D42F43BE26EB72(iParam7);
		unk_0x392841D58D2EED1D();
	}
	func_438(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_416()
{
	unk_0x6FA8221C9D2ECB46(uLocal_75, 1);
	unk_0x09F9466B03D29D2D(1, false, 3000, 1, 0, 0);
	if (unk_0x2671671BBCC6AD9F(uLocal_82))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_82, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_77))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_77, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_78))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_78, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_79))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_79, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_80))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_80, 0);
	}
	if (unk_0x2671671BBCC6AD9F(uLocal_81))
	{
		unk_0x6FA8221C9D2ECB46(uLocal_81, 0);
	}
}

char* func_417(int iParam0)
{
	if (iLocal_175 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_175 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_418(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)
{
	unk_0xC236342F1874172C(uLocal_82);
	unk_0xEF20E9A7B745D17A(uLocal_82, 35f);
	unk_0x7508AE96782B0441(uLocal_82, unk_0x26C2ACB261895E70(Param0, fParam1, Param2));
	unk_0xBD833AA6EB59C81B(uLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		unk_0x6FA8221C9D2ECB46(uLocal_82, 1);
	}
	else
	{
		unk_0x32279DAB93C9A9FA(uLocal_82, uLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_419(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_421(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_422(var uParam0)
{
	if (!unk_0xE50EB54E0F21BED0(func_501(), 0))
	{
		func_4(func_501(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_423(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_424(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_425(var uParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(uParam0, sParam1, func_6(iParam2), 1);
}

float func_426(var uParam0)
{
	if (func_423(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_427(var uParam0)
{
	if (!func_423(uParam0))
	{
		func_378(uParam0);
	}
	else
	{
		func_438(uParam0);
	}
}

void func_428()
{
	Global_19991 = 0;
	func_429();
}

void func_429()
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

void func_430(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_433())
		{
			func_432(1, 1);
		}
		else
		{
			func_432(0, 0);
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
	if (!func_431())
	{
		Global_19798.f_1 = 3;
	}
}

int func_431()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_432(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

bool func_433()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_434()
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

int func_435(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0BF0F8F3AD0993F6();
	if (unk_0x419E13582192CFEA(uVar0))
	{
		if (!func_436(iVar0))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0xD406352E21A7E1D0(iVar0, unk_0x7D2B9E6A64637269(), Local_137, 0, 1, 0))
			{
				unk_0x74891A80460EA768(iVar0);
				unk_0x3CBE9F07524C242D(iVar0, 0, 0);
				unk_0x4603196EEEA2355C(iVar0, 0, 0);
				unk_0xA2C015B68CE01357(iVar0, 1);
				unk_0x4985CD0720AFD468(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
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

void func_437(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x704F8697BB515627(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x392841D58D2EED1D();
}

void func_438(var uParam0)
{
	func_439(uParam0, 0f);
}

void func_439(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_440(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_441(var uParam0, var uParam1, char* sParam2)
{
	unk_0x704F8697BB515627(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(uParam1);
	func_34(sParam2);
	unk_0x392841D58D2EED1D();
}

void func_442(var uParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(func_501()) && !unk_0xECEC7528A52B4EE8(func_501()))
	{
		unk_0xC1A7CF4B179CD225(func_501());
	}
	else
	{
		if (unk_0x419E13582192CFEA(uParam5->f_5) && !unk_0xECEC7528A52B4EE8(uParam5->f_5))
		{
			unk_0x4985CD0720AFD468(uParam5->f_5, 1, 1);
			uLocal_138[1] = uParam5->f_5;
			unk_0xCA089CD1A17D76DF(uLocal_138[1]);
		}
		else if (func_444(uParam4))
		{
			unk_0xCA089CD1A17D76DF(uLocal_138[1]);
		}
		else
		{
			uLocal_138[1] = unk_0x0FDCFECB2EF2BC1C(26, iLocal_172, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0x5B38E054B758C032(uLocal_138[1], "Darts_name"))
		{
			iVar0 = unk_0x05351AF95891EE5C(uLocal_138[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_220 = func_448("RAYMOND");
				iLocal_221 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_220 = func_448("JOHAN");
				iLocal_221 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_220 = func_448("STAN");
				iLocal_221 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_220 = func_448("VINCE");
				iLocal_221 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_220 = func_448("KRISTY");
				iLocal_221 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_220 = func_448("MARLENE");
				iLocal_221 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_220 = func_448("LORIE");
				iLocal_221 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_220 = func_448("SHELLEY");
				iLocal_221 = -863218904;
			}
		}
		unk_0x6C9577C090944B92(uLocal_138[1], "Darts_name", iLocal_221);
	}
	iVar1 = unk_0x6471F4759775FCA4(uLocal_138[1]);
	func_443(iVar1);
	unk_0xB0C1A43193C25F7A(uLocal_138[1], uLocal_138[0], 0);
	unk_0xB0C1A43193C25F7A(uLocal_138[0], uLocal_138[1], 0);
}

void func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_444(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), uParam0, -1))
	{
		if (!unk_0xECEC7528A52B4EE8((*uParam0)[iVar0]))
		{
			if ((((((unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x6471F4759775FCA4((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x4985CD0720AFD468((*uParam0)[iVar0], 1, 1);
				uLocal_138[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_445(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar2 = (func_447() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_446(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_446(int iParam0)
{
	if (!func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_447()
{
	if (Global_31345 == 0 || Global_31345 == 2)
	{
		return 175;
	}
	return 161;
}

char* func_448(char* sParam0)
{
	if (unk_0xFA1A73C829B8839F() == 7)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xDA654EB115F9FF7D(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_449(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		uParam0->f_4 = unk_0xA8D713A937F31250(*uParam0);
	}
	if (!bParam3)
	{
		func_451(uParam1, uParam0);
	}
	Local_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	Local_41 = { Local_41 + Local_35 };
	Local_40 = { unk_0x26C2ACB261895E70(uParam0->f_1, uParam0->f_4, Local_41) };
	func_450(uParam2, uParam0);
}

void func_450(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_35 };
	*uParam0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_451(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { unk_0x26C2ACB261895E70(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_452(var uParam0, var uParam1)
{
	if (!unk_0x952AB441FA24BF16("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0x952AB441FA24BF16("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0xA9C0BBFB9CBB66F1(iLocal_28) || !unk_0xA9C0BBFB9CBB66F1(iLocal_29)) || !unk_0xA9C0BBFB9CBB66F1(iLocal_37)) || !unk_0xA9C0BBFB9CBB66F1(iLocal_172)) || !unk_0xDAE4BC89A198A6AF(*uParam0)) || !unk_0xDAE4BC89A198A6AF(uParam1->f_645)) || !unk_0xDAE4BC89A198A6AF(uParam1->f_57)) || !unk_0xDAE4BC89A198A6AF(uParam1->f_62)) || !unk_0x080D38ACEC5DC1A2(3)) || !unk_0xAD9D75DD073BF477("Darts")) || !unk_0x0EC2B29D4172D225(sLocal_222)) || !unk_0x0EC2B29D4172D225(sLocal_223)) || !func_453(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_453(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_345(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22670.f_5892[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_5892[iVar0 /*4*/])))
	{
		unk_0xBB3CDAB62C8773C8(&(Global_22670.f_5892[iVar0 /*4*/]), 9);
		Global_22670.f_5885[iVar0] = 1;
		if (!unk_0xA7E5F88C5CF2D04B(&(Global_22670.f_5892[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA08F3C300F9E3468("CommonMenu", 0);
	Global_22670.f_5871[iVar0] = 1;
	if (!unk_0xAD9D75DD073BF477("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA08F3C300F9E3468("MPShopSale", 0);
		Global_22670.f_5878[iVar0] = 1;
		if (!unk_0xAD9D75DD073BF477("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22670.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_454(&(Global_22670.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_454(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				*uParam0 = unk_0x42AA2CCF0B61DCD8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xDAE4BC89A198A6AF(*uParam0))
					{
						uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_455(var uParam0, var uParam1)
{
	unk_0x16E516CA9C88FF48(iLocal_28);
	unk_0x16E516CA9C88FF48(iLocal_29);
	unk_0x16E516CA9C88FF48(iLocal_37);
	unk_0x16E516CA9C88FF48(iLocal_172);
	unk_0xA08F3C300F9E3468("Darts", 0);
	unk_0xA08F3C300F9E3468("ShopUI_Title_Darts", 0);
	unk_0x068BDE31F7D112BB(sLocal_222);
	unk_0x068BDE31F7D112BB(sLocal_223);
	*uParam0 = unk_0x42AA2CCF0B61DCD8("darts_scoreboard");
	uParam1->f_645 = func_197();
	uParam1->f_57 = func_457();
	uParam1->f_62 = func_456();
	unk_0xBB3CDAB62C8773C8("DARTS", 3);
}

var func_456()
{
	return unk_0x42AA2CCF0B61DCD8("MIDSIZED_MESSAGE");
}

var func_457()
{
	return unk_0x42AA2CCF0B61DCD8("MP_BIG_MESSAGE_FREEMODE");
}

void func_458(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_459(Param2) && fParam3 != 0f)
	{
		uParam0->f_18 = { unk_0x26C2ACB261895E70(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_459(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (unk_0x928E0D7BE0057D1C())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_461(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_462()
{
	int iVar0;
	
	unk_0xBFB86C21E4EE9D40();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_463(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	fLocal_89 = unk_0x451E904FC8FB5C54(0);
	fVar7 = 30f;
	fVar7 = func_407(fLocal_89);
	Var8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (unk_0x928E0D7BE0057D1C())
	{
		Var11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		Var11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	Var14 = { 0.261599f, -0.750354f, -0.392929f };
	Var16 = { 0.281314f, -0.573735f, -0.39603f };
	Var1 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var14) };
	Var5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	Var15 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var16) };
	Var6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	uLocal_75 = unk_0x1CA878DB277C6DF0(26379945, Var0, Var2, fVar7, 0, 2);
	uLocal_76 = unk_0x1CA878DB277C6DF0(26379945, Var1, Var3, fVar7, 0, 2);
	uLocal_77 = unk_0x1CA878DB277C6DF0(26379945, Var4, Var5, 65f, 0, 2);
	uLocal_78 = unk_0x1CA878DB277C6DF0(26379945, Var15, Var6, 65f, 0, 2);
	uLocal_79 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_80 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_82 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_83 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_81 = unk_0x1CA878DB277C6DF0(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0xEF20E9A7B745D17A(uLocal_77, 43.35f);
	unk_0xEF20E9A7B745D17A(uLocal_78, 42.35f);
	unk_0x9C9EC7CC88D050FA(uLocal_77, "HAND_SHAKE", 0.1f);
	unk_0x9C9EC7CC88D050FA(uLocal_78, "HAND_SHAKE", 0.1f);
}

void func_464(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x419E13582192CFEA(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_465()
{
	Global_22531.f_6 = 1;
}

void func_466(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&Global_31593, iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_31593, iParam0);
	}
}

var func_467(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_468(iParam0, iParam1);
	unk_0xD885BEFA31A18D47(uVar1, &uVar0, -1);
	return uVar0;
}

var func_468(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_469(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_469(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		func_471();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_39(0))
		{
			func_430(0);
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

void func_471()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_472(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x29DDCB8E40A160C7(1);
	func_268(8);
	func_321();
	if (bLocal_146)
	{
		func_489(&uLocal_162);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_411(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x824F744352C8BC82(iLocal_28);
	unk_0x824F744352C8BC82(iLocal_29);
	if (!unk_0xECEC7528A52B4EE8(uLocal_138[0]) && !unk_0xECEC7528A52B4EE8(uLocal_138[1]))
	{
		unk_0x880C7B361C9651EE(uLocal_138[0]);
		unk_0x880C7B361C9651EE(uLocal_138[1]);
	}
	func_488();
	unk_0x824F744352C8BC82(iLocal_37);
	func_487();
	func_486(uParam1->f_645);
	func_485(&(uParam1->f_57));
	if (!unk_0xE50EB54E0F21BED0(func_501(), 0))
	{
		unk_0x4B75B1FF20EA3A22(func_501(), func_484());
		func_483(iLocal_170, iLocal_171);
	}
	else
	{
		func_481(&(uLocal_138[1]));
	}
	func_470(0);
	func_480(uParam2, 0);
	func_36(0);
	unk_0x956EB3331C33B055(15);
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (iParam0->f_460 && !iLocal_160)
		{
			func_479(190, 0);
		}
	}
	func_104();
	func_462();
	func_96(&(uParam1->f_72), 0);
	wait(200);
	if (iLocal_153)
	{
		func_476(130, 0, 0);
		func_473();
	}
	func_466(23, 0);
	unk_0x4BFE89D21F9885DC();
}

void func_473()
{
	func_474();
}

int func_474()
{
	if (func_475(0))
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

bool func_475(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_476(int iParam0, int iParam1, int iParam2)
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
		func_63((891 + iParam0), 1, -1, 1);
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
		Global_112293.f_10192[iParam0 /*12*/].f_10 = iParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = iParam2;
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
		func_477();
	}
}

void func_477()
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
		func_85(13, floor(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_478() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_474();
				}
			}
		}
	}
}

int func_478()
{
	return Global_31345;
}

void func_479(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x5B99D5C0DE301BD3())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_227(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x81E9B27A86C752C9(103, iLocal_106[1], 0f);
		unk_0x81E9B27A86C752C9(99, iLocal_106[2], 0f);
		unk_0x81E9B27A86C752C9(109, iLocal_106[3], 0f);
		unk_0x81E9B27A86C752C9(106, iLocal_106[5], 0f);
		unk_0x81E9B27A86C752C9(2, iLocal_106[10], 0f);
		unk_0x81E9B27A86C752C9(107, iLocal_106[8], 0f);
		unk_0x81E9B27A86C752C9(116, iLocal_106[6], 0f);
	}
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(false);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_475(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_36(0);
}

void func_481(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0) && !unk_0xECEC7528A52B4EE8(*uParam0))
	{
		unk_0x8D5B447F21217223(&uLocal_173);
		unk_0x5C679902079A7E80(&uLocal_173);
		if (unk_0x419E13582192CFEA(uLocal_138[0]))
		{
			unk_0x8ADA462BC5F42FD8(0, uLocal_138[0], 8000, 2049, 3);
		}
		unk_0x373635EFD76DFAB3(0, 1000);
		if (bLocal_151)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112254, 10))
			{
				unk_0x45B1B4E55BF15523(0, func_482(iLocal_175 == 2, Local_210, Local_212), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, fLocal_214, fLocal_216));
			}
			else
			{
				unk_0x45B1B4E55BF15523(0, func_482(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, fLocal_213, fLocal_215));
			}
			unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x45B1B4E55BF15523(0, func_482(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, 172.6813f, 142.6717f));
			unk_0x8B515AB1F9C6E8CE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x1BBD0A5729AB1226(uLocal_173);
		unk_0x8A1AC8EBC73850C8(*uParam0, uLocal_173);
		unk_0x504B26425DFF773C(*uParam0, 1);
	}
	unk_0x824F744352C8BC82(iLocal_172);
}

Vector3 func_482(bool bParam0, struct<3> Param1, struct<3> Param2)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_483(int iParam0, var uParam1)
{
	if (Global_95196 == iParam0)
	{
		Global_95197 = Global_95196;
		Global_95198 = uParam1;
		Global_95196 = 23;
	}
}

var func_484()
{
	return unk_0xC66769C13C830856(unk_0x638BDC79E655C1C2());
}

void func_485(var uParam0)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x3D9BC07C93913E04(uParam0);
		*uParam0 = 0;
	}
}

void func_486(var uParam0)
{
	unk_0x3D9BC07C93913E04(&uParam0);
}

void func_487()
{
	unk_0x66AE54CE92457FEE(1);
	unk_0xA5C5D178B75F53C6(0);
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
	unk_0xDD7C2F9844E745B1(1);
}

void func_488()
{
	if (unk_0x419E13582192CFEA(uLocal_36))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_36);
	}
}

void func_489(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x419E13582192CFEA(uVar0))
	{
		if (!func_436(iVar0))
		{
			unk_0x3CBE9F07524C242D(iVar0, 1, 0);
			unk_0x4603196EEEA2355C(iVar0, 1, 0);
			unk_0xA2C015B68CE01357(iVar0, 0);
		}
	}
}

void func_490()
{
	int iVar0;
	
	if (unk_0x79CDCC8ABB331B8C("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_112293.f_9083 || func_475(0))
	{
		if (!func_498())
		{
			iVar0 = func_497();
			if (iVar0 != -1)
			{
				if (!func_492(iVar0))
				{
					return;
				}
				unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_491();
		}
	}
}

void func_491()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_90())
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
			switch (func_90())
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

int func_492(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_491();
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xD91B27582ECB3B74(5000);
	}
	iVar0 = Global_90122[iParam0 /*5*/];
	iVar1 = Global_77517.f_109[iVar0 /*4*/];
	func_496(iVar1, 1);
	unk_0xEB25B6CFBE0FD35C(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	func_493(&(Global_112293.f_2361.f_539), iVar1);
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

void func_493(var uParam0, int iParam1)
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
			if (!func_495(Global_112293.f_18531[iVar0], &Var2, &fVar3))
			{
				Global_112293.f_18531[iVar0] = 318;
				func_494(&(uParam0->f_2296[iVar0]));
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

void func_494(var uParam0)
{
	*uParam0 = -15;
}

int func_495(int iParam0, var uParam1, float fParam2)
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
			return func_495(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_495(8, uParam1, fParam2);
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

void func_496(int iParam0, bool bParam1)
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

int func_497()
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

int func_498()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

void func_499(int iParam0, bool bParam1)
{
	if (unk_0xECEC7528A52B4EE8(func_501()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xAB3E7E62A69D0DB3(func_501(), func_484()))
		{
			return;
		}
		if (!unk_0xECEC7528A52B4EE8(func_500()))
		{
			if (!unk_0xAB3E7E62A69D0DB3(func_500(), func_484()))
			{
				return;
			}
		}
	}
	if (Global_95196 == 23)
	{
		Global_95198 = 10;
		Global_95196 = iParam0;
	}
}

var func_500()
{
	return Global_95203;
}

int func_501()
{
	return Global_95202;
}

void func_502()
{
	if (iLocal_135 == 1)
	{
		return;
	}
	func_321();
	unk_0x1780951D345B980F("Darts");
	iLocal_135 = 1;
}

int func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

