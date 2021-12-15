#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
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
	uLocal_46 = unk_0x7B826893B2E27385();
	uLocal_47 = unk_0x19F6152D9806BBF8();
	iLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	Local_53 = { ScriptParam_166.f_1[0 /*3*/] };
	uLocal_54 = ScriptParam_166.f_17[0];
	if (unk_0x4B34601C5C56F3EE(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_294(0);
		}
		else
		{
			func_276();
		}
	}
	if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (vdist(Local_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (vdist(Local_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_65 = 2;
	}
	else if (vdist(Local_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_65 = 3;
	}
	else if (vdist(Local_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_65 = 4;
	}
	else
	{
		iLocal_65 = 5;
	}
	if (func_234(Local_53, 1, iLocal_65, 1, 0))
	{
		func_231(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	settimera(0);
	func_230();
	while (true)
	{
		wait(0);
		func_229();
		func_228(uLocal_58, &uLocal_64);
		func_225(&Local_164);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
		}
		if (!func_222())
		{
			if (func_221())
			{
				func_276();
			}
			if (unk_0xC92F9F18E020B461())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_195())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_194();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0xAA8EA67D77D37C61(101, Local_53, 30000f);
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_55))
						{
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_56))
						{
						}
						if (!unk_0xF68107C40359970C(iLocal_55))
						{
							if (unk_0xF68107C40359970C(iLocal_56))
							{
								unk_0x84918839A90C954C(iLocal_55, Local_53, 200f, -1, 0, 0);
								unk_0xABC2CA6F28903308(iLocal_55, 1);
								wait(0);
								func_276();
							}
							if (!unk_0xF68107C40359970C(iLocal_56))
							{
								if (unk_0x0318E2EE6FB4563F(Local_53, 2.5f))
								{
									if (iLocal_65 == 2)
									{
										if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_193())
											{
												func_184();
											}
										}
										else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0x987A5F1E1A67E3C0(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0x987A5F1E1A67E3C0(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_193())
									{
										func_184();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_183(&Local_107, 2);
							}
							if (!unk_0xF68107C40359970C(iLocal_56))
							{
								unk_0x84918839A90C954C(iLocal_56, Local_53, 200f, -1, 0, 0);
								unk_0xABC2CA6F28903308(iLocal_56, 1);
								wait(0);
							}
							func_276();
						}
						break;
				}
			}
			else
			{
				func_181("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_276();
			}
		}
		else
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_55))
			{
				if (!unk_0xF68107C40359970C(iLocal_55))
				{
					if (func_180(iLocal_55, -251125078))
					{
						if (func_179(iLocal_55, Local_53, 1) >= 190f)
						{
							unk_0x03A927199A2DFE46(iLocal_55);
							unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
						}
					}
					else if (func_180(iLocal_55, -982327190))
					{
						unk_0x03A927199A2DFE46(iLocal_55);
						unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_56))
			{
			}
			if (unk_0x320D1840B6DAA1CC() > iLocal_66 + 3000)
			{
				func_150();
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!func_130() && !func_127())
				{
					unk_0x11A68A2DDD8CD574(unk_0x9E2D6C50374FCFA9());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_56))
						{
							if (vdist(unk_0x6B62510F212526DC(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x987A5F1E1A67E3C0(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x987A5F1E1A67E3C0(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0x12DD4A0B247D9B4D(iLocal_59))
					{
						if (!unk_0xF68107C40359970C(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0x77A43AFA9AAEC041(iLocal_55, unk_0xE2D3D51028F0428A(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0xD5C6B5E3B93A5EDC(iLocal_55, 0))
									{
										if (timera() > 1000)
										{
											if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_55))
											{
												fLocal_132 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_55, 1));
												fLocal_132 = (fLocal_132 * 1.5f);
												settimera(0);
											}
											unk_0xBC12D08EE7559CCD(iLocal_55, 17, 0);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0xD5C6B5E3B93A5EDC(iLocal_55, 0))
										{
											unk_0xBC12D08EE7559CCD(iLocal_55, 17, 1);
											unk_0xBC12D08EE7559CCD(iLocal_55, 13, 0);
											func_119();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_55) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_55)) || unk_0x0747E45CFF1F74AA(iLocal_55, unk_0xE2D3D51028F0428A(), 0))
								{
									func_120(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									settimera(0);
									fLocal_132 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_55, 1));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0x55A0C756C4A8220C(iLocal_73, 0))
								{
									if (unk_0x0747E45CFF1F74AA(iLocal_73, unk_0xE2D3D51028F0428A(), 1))
									{
										unk_0xBC12D08EE7559CCD(iLocal_55, 17, 0);
										if (unk_0x174B84F6B78D6CA7(iLocal_55))
										{
											unk_0xB69D13E19147910F(iLocal_55, iLocal_73, unk_0xE2D3D51028F0428A(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
										}
										func_120(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										settimera(0);
										fLocal_132 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_55, 1));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0x12DD4A0B247D9B4D(iLocal_59))
								{
									if (unk_0xCA3605134E97DB2B(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0xD809204F14EF9B68(iLocal_59, 0);
										unk_0xA582EE8380437B1B(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_119();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0xCED7266BAB0BDC20(iLocal_55, unk_0xE2D3D51028F0428A()))
								{
									bLocal_130 = true;
								}
								func_117(iLocal_59, &uLocal_70);
							}
							if (unk_0xE5965CDF24F93A9F(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_120(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0xA888F8CC04F25CC8(&uLocal_61);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0xC963A45B50851768(uLocal_61);
											unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
											unk_0x7461D7C5BA953BC7(&uLocal_61);
											settimera(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_55) && !unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_55)) && !unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A())) && func_116(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_120(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												settimera(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0x4239F34C6EE6A3E9(iLocal_56))
								{
									func_114(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_112())
							{
								func_111();
								if (unk_0xE5965CDF24F93A9F(iLocal_56))
								{
									Var0 = { unk_0x6B62510F212526DC(iLocal_56, 1) };
								}
								if (!unk_0x8F41785F110B0DA0(iLocal_55, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (timera() > 20000)
									{
										if (func_110(iLocal_55) && !unk_0x32DCDA1B2F8A0694(iLocal_55))
										{
											if (func_120(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												settimera(0);
											}
										}
									}
								}
							}
							else if (func_110(iLocal_56))
							{
								if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, Global_19, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0xA888F8CC04F25CC8(&uLocal_61);
										unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 3000);
										unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
										unk_0xC963A45B50851768(uLocal_61);
										unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
										unk_0x7461D7C5BA953BC7(&uLocal_61);
										bLocal_127 = true;
										func_276();
									}
								}
								else if (bLocal_130)
								{
									if (func_120(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0xD86A0BC9CC0A625A(iLocal_56, 1193033728, 0);
										unk_0xA8685678DDA27FC3(iLocal_56, -668482597, 0, 0, 0);
										bLocal_127 = true;
										func_276();
									}
								}
								else
								{
									unk_0xD86A0BC9CC0A625A(iLocal_56, 1193033728, 0);
									unk_0xA8685678DDA27FC3(iLocal_56, -668482597, 0, 0, 0);
									bLocal_127 = true;
									func_276();
								}
							}
							else
							{
								bLocal_127 = true;
								func_276();
							}
						}
						else if (func_112())
						{
							if ((unk_0xF68107C40359970C(iLocal_55) || unk_0xE63474311C6E3825(iLocal_55, 1)) || func_180(iLocal_55, -1899872703))
							{
								func_120(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_107();
								func_183(&Local_107, 2);
								unk_0xFFD8EB5462B07B59(&iLocal_59);
							}
						}
					}
					else if (!unk_0x12DD4A0B247D9B4D(uLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0x12DD4A0B247D9B4D(iLocal_60))
							{
								unk_0xFFD8EB5462B07B59(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
							iLocal_58 = func_103(iLocal_56, 0, 0);
							func_102(&uLocal_64);
							if (unk_0xE5965CDF24F93A9F(iLocal_56))
							{
								fLocal_82 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_56, 0));
								unk_0xE68645525D451A8B(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_294(0);
							}
						}
						else
						{
							func_99();
						}
					}
					else
					{
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
						{
							if (bLocal_95)
							{
								func_294(0);
							}
							else
							{
								func_276();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0xF68107C40359970C(iLocal_56))
							{
								if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_56, 0)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_294(0);
									}
									else
									{
										unk_0x7734082B0EDB0BE0(iLocal_56, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
										func_276();
									}
								}
								else if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_56, 0)) < fLocal_82)
								{
									fLocal_82 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_56, 0));
								}
								if (unk_0x0747E45CFF1F74AA(iLocal_56, unk_0xE2D3D51028F0428A(), 1))
								{
									if (bLocal_95)
									{
										func_294(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!unk_0xF68107C40359970C(iLocal_56))
	{
		unk_0x7734082B0EDB0BE0(iLocal_56, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
		func_114(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0xABC2CA6F28903308(iLocal_56, 1);
		unk_0x50274A7EACA3133A(iLocal_56, 0);
		unk_0xA7266A50941DBAEA(iLocal_56, 1);
		unk_0xB3822DB3D538C8F3(&iLocal_56);
	}
	func_99();
	if (bLocal_90)
	{
		if (unk_0x12DD4A0B247D9B4D(iLocal_60))
		{
			if (unk_0x2791155FB0769FE5(uLocal_89))
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uLocal_89)) > 100f)
				{
					func_276();
				}
			}
		}
		else if (bLocal_95)
		{
			func_294(0);
		}
		else if (unk_0xF68107C40359970C(iLocal_55))
		{
			func_276();
		}
	}
	if (unk_0x12DD4A0B247D9B4D(iLocal_59))
	{
		if (unk_0xF68107C40359970C(iLocal_55))
		{
			unk_0xFFD8EB5462B07B59(&iLocal_59);
		}
		else if (!func_112())
		{
			func_276();
		}
	}
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0xF68107C40359970C(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_114(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0x987A5F1E1A67E3C0(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0x987A5F1E1A67E3C0(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_98())
				{
					if (func_95(2))
					{
						unk_0x3410421C60BF7143(1);
					}
					if (!func_127())
					{
						if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
						{
							if (func_94(1, 0, 1))
							{
								if (!unk_0xE2D0C323A1AE5D85(Global_7824, 11) || func_93())
								{
									if (!unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
									{
										unk_0x3410421C60BF7143(1);
										if (func_92())
										{
											func_91();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x0E536D72AB30F4C8(iLocal_102, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_57 = unk_0x0E536D72AB30F4C8(iLocal_101, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
										}
										if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
										{
											unk_0x9A97DC6DBC7B223D(iLocal_57, unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0x1C2ED929474DC6FE(iLocal_57, 0, 0);
										func_83(1, 1, 1, 0, 0, 0, 0);
										if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
										{
											if (unk_0xE5965CDF24F93A9F(iLocal_57))
											{
												while ((!func_81(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), uLocal_84, 1, 1056964608, 0, 1, 0) || func_92()) || !unk_0x8DEF8D80C66C34D4(iLocal_57))
												{
													if (!func_81(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), uLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_92())
													{
													}
													if (!unk_0x8DEF8D80C66C34D4(iLocal_57))
													{
													}
													wait(0);
												}
												if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
												{
													unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
												}
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iLocal_57))
										{
											while (func_92() || !unk_0x8DEF8D80C66C34D4(iLocal_57))
											{
												wait(0);
											}
										}
										unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
										if (!unk_0xF68107C40359970C(iLocal_56))
										{
											unk_0xC252F409BDE7A700(iLocal_56, 0);
										}
										unk_0x828750F785B6A54D(0);
										unk_0x527AAB28DB255A95(iLocal_69);
										unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
										func_79();
										func_73(0);
										wait(0);
										if (func_110(iLocal_56))
										{
											if (unk_0xECF091D7E67FF7F2(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x511A0AF0E8B0BF9A(sLocal_94);
										bLocal_99 = true;
										settimera(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_71(unk_0x6B62510F212526DC(iLocal_56, 1), &fLocal_83, &uLocal_84);
					if (!func_98())
					{
						if (!func_180(iLocal_56, 1227113341) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
						{
							unk_0x03A927199A2DFE46(iLocal_56);
							unk_0xC149E50FBB27DD70(iLocal_56, unk_0xE2D3D51028F0428A(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_180(iLocal_56, 1227113341))
					{
						unk_0x03A927199A2DFE46(iLocal_56);
						unk_0x7461D7C5BA953BC7(&uLocal_61);
						unk_0xA888F8CC04F25CC8(&uLocal_61);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
						unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0xC963A45B50851768(uLocal_61);
						unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
						unk_0x7461D7C5BA953BC7(&uLocal_61);
						unk_0xEB087B19F63AB053(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_98())
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						unk_0x03A927199A2DFE46(iLocal_56);
						unk_0x7461D7C5BA953BC7(&uLocal_61);
						unk_0xA888F8CC04F25CC8(&uLocal_61);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
						unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0xC963A45B50851768(uLocal_61);
						unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
						unk_0x7461D7C5BA953BC7(&uLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && !unk_0xA6BB28CAD9FB957E(unk_0xE2D3D51028F0428A())) && !unk_0x03454821A9ECF4AA(unk_0xE2D3D51028F0428A()))
					{
						if (bLocal_80)
						{
							if (unk_0x987A5F1E1A67E3C0(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_78 = { -710.1279f, -821.3084f, 22.6169f };
								Local_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0xF68107C40359970C(iLocal_56))
							{
								Var7 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
								func_68(iLocal_56, &Local_78, &Local_79, cLocal_142, sLocal_144);
								if ((Local_78.f_2 - Var7.f_2) > 20f)
								{
									Local_78 = { Var7 };
								}
								Local_78.f_2 = (Local_78.f_2 + 2f);
								unk_0x9CD4CBF2BBE10F00(Local_78, &(Local_78.f_2), 0, 0);
								if (Local_78.f_2 == 0f)
								{
									Local_78 = { Local_138 };
									Local_79.f_2 = fLocal_139;
								}
								if (unk_0x987A5F1E1A67E3C0(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_79.f_2 > 315f && Local_79.f_2 < 360f)
										{
											Local_79.f_2 = 251.4238f;
										}
										else if (Local_79.f_2 > 120f && Local_79.f_2 < 212f)
										{
											Local_79.f_2 = 67.2304f;
										}
										Local_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x5F8653E60ED2288E(Local_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_78 = { -814.0593f, -1082.483f, 10.0671f };
									Local_79.f_2 = 275.5752f;
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x5F8653E60ED2288E(Local_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_78 = { -375.0627f, 6030.533f, 30.5313f };
									Local_79.f_2 = 222.9049f;
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x5F8653E60ED2288E(Local_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_78 = { -379.7835f, 6029.472f, 30.5014f };
									Local_79.f_2 = 213.2611f;
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 128f && Local_79.f_2 < 195f)
										{
											if (Local_79.f_2 > 162f)
											{
												Local_79.f_2 = 220f;
											}
											else
											{
												Local_79.f_2 = 107f;
											}
										}
									}
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 244.444f && Local_79.f_2 < 326.2103f)
										{
											Local_79.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0x987A5F1E1A67E3C0(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var4 = { unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
								Var5 = { Var4 - Local_78 };
								Var5.f_2 = 0f;
								fVar10 = vmag(Var5);
								unk_0x9CD4CBF2BBE10F00(Var4, &(Var4.f_2), 0, 0);
								fVar9 = (Local_78.f_2 - Var4.f_2);
								Local_79.x = unk_0xC529D13129C03CF4(fVar9, fVar10);
								if (Local_79.x > 20f || Local_79.x < -330f)
								{
									Local_78 = { Local_138 };
									Local_79.x = 0f;
									Local_79.f_2 = fLocal_139;
									Var4 = { unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
									Var5 = { Var4 - Local_78 };
									Var5.f_2 = 0f;
									fVar10 = vmag(Var5);
									unk_0x9CD4CBF2BBE10F00(Var4, &(Var4.f_2), 0, 0);
									fVar9 = (Local_78.f_2 - Var4.f_2);
								}
							}
							if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x5F8653E60ED2288E(Local_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_79.f_2 < 35f || Local_79.f_2 > 275f)
									{
										if (Local_79.f_2 < 335f)
										{
											Local_79.f_2 = 260f;
										}
										else
										{
											Local_79.f_2 = 55f;
										}
									}
									else if (Local_79.f_2 > 107.2072f && Local_79.f_2 < 210f)
									{
										if (Local_79.f_2 > 154.6742f)
										{
											Local_79.f_2 = 233f;
										}
										else
										{
											Local_79.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 4)
						{
							if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 183.6065f, 6636.653f, 30.6299f) < vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_78 = { 183.6065f, 6636.653f, 30.6299f };
								Local_79 = { 0f, 0f, 265f };
							}
							else
							{
								Local_78 = { 172.2291f, 6631.007f, 30.7398f };
								Local_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
							if (!unk_0xF68107C40359970C(iLocal_56))
							{
								Var2 = { unk_0x6B62510F212526DC(iLocal_56, 1) };
							}
							Var3 = { Var1 - Var2 };
							Local_78 = { Var1 };
							Local_78 = { Local_78.x, Local_78.f_1, (Local_78.f_2 - 1f) };
							Local_79 = { 0f, 0f, unk_0xD12EFCAB87804BED(Var3.x, Var3.f_1) };
						}
						if (unk_0x987A5F1E1A67E3C0(Local_78, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_78 = { -521.475f, -1210.47f, 17.1848f };
							Local_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0x55A0C756C4A8220C(iLocal_73, 0))
						{
							unk_0x3D81769BEC61BFF8(&iLocal_73);
						}
						if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
						{
							if (!unk_0x55A0C756C4A8220C(iVar0, 0))
							{
								iVar0 = unk_0x9993EF7FDBCDB632();
								unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iVar0), &Local_136, &Local_137);
								if (unk_0x8F41785F110B0DA0(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0) || unk_0x8F41785F110B0DA0(iVar0, unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -543.34f, -1216.8f, 17.96f };
											fLocal_77 = 337.5f;
											bVar8 = true;
										}
										else
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_77 = 246.7714f;
											bVar8 = true;
										}
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x3707F224FA0050EA(iVar0, 0, 1, 1, 1);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
									else if (unk_0x987A5F1E1A67E3C0(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -187f, -855.51f, 29.02f };
										fLocal_77 = 158.28f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
									else if (unk_0x987A5F1E1A67E3C0(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -395.84f, 6051.16f, 31.19f };
										fLocal_77 = 139.92f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
									else if (unk_0x987A5F1E1A67E3C0(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -2972.31f, 490.07f, 15.03f };
										fLocal_77 = 357.64f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
									else if ((unk_0x987A5F1E1A67E3C0(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0xD132EDDA78FF4A51(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { 184.05f, 6628.75f, 31.27f };
										fLocal_77 = 89.37f;
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
									else
									{
										Var6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0x82FE2343F8BDFF0B(iVar0);
										Local_75 = { func_64(Local_78, unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2)) };
										if (func_63(0f, 0f, 0f, Local_75, 0))
										{
											Local_75 = { unk_0x6B62510F212526DC(iVar0, 1) };
										}
										if (unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iVar0)))
										{
											Local_137.x = (Local_137.x + 3f);
											Local_137.f_1 = (Local_137.f_1 + 3f);
										}
										bVar8 = true;
										if ((Local_137.x - Local_136.x) > Var6.x)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xC64B6E13A6A7F517(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iVar0, fLocal_77);
												unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
											}
										}
										else if (unk_0xE5965CDF24F93A9F(iVar0))
										{
											if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
											{
												unk_0xD59CC8123FD1A789(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_66(iVar0))
						{
							unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iVar0), &Local_136, &Local_137);
							if (unk_0x8F41785F110B0DA0(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0) || unk_0x8F41785F110B0DA0(iVar0, unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0xC64B6E13A6A7F517(iVar0, Local_140, 1, 0, 0, 1);
								unk_0xBBF86885619695CE(iVar0, fLocal_141);
								unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
							}
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_57))
						{
							unk_0x1C2ED929474DC6FE(iLocal_57, 1, 0);
						}
						unk_0x06B8FBA220C6488C(Local_78 - Vector(10f, 10f, 10f), Local_78 + Vector(10f, 10f, 10f), 0);
						unk_0x917F631782A9CB32(Local_78, 20f, 0);
						unk_0xF96094A43D443C41(Local_78, 10f, 0);
						unk_0x7A997A0A971D305F(Local_78, (Local_137.f_1 + 1f), 1, 0, 0, 0);
						unk_0x85050CAC8798CDD0(Local_78, 25f);
						unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 1);
						unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
						uLocal_68 = unk_0x8F5F4164BF5FB513(Local_78, Local_79, 2);
						unk_0x0BA4916484503B63(uLocal_68, 0);
						uLocal_97 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x0A18C027350D3C19(uLocal_97, 15f);
						unk_0x7B8CE3A05613F41C(uLocal_97, uLocal_68, sLocal_145, cLocal_142);
						unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
						unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
						unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
						if (!unk_0xF68107C40359970C(iLocal_56))
						{
							unk_0x51BB443B279E4104(iLocal_56);
							unk_0x950B26F4C891073F(iLocal_56, uLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0xDD786B89B15AA63F(uLocal_97, 1);
						unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_51(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						settimera(0);
						unk_0x828750F785B6A54D(0);
						func_50(joaat("rc_wallets_returned"), 1);
						unk_0x61481F9FBB1C7EDD(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
						{
						}
						if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
						{
						}
						if (unk_0xA6BB28CAD9FB957E(unk_0xE2D3D51028F0428A()))
						{
						}
						if (unk_0x03454821A9ECF4AA(unk_0xE2D3D51028F0428A()))
						{
						}
					}
					unk_0xC43E67C9BA871ECB();
					break;
				
				case 1:
					if ((unk_0xCE2C78E9FC0B01E3(uLocal_68) && unk_0x54DE1614490C2A83(uLocal_68) == 1f) || func_47())
					{
						unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
						unk_0x6DD7EC85B970FFF8(unk_0x9E2D6C50374FCFA9(), 0, 0);
						if (!unk_0xF68107C40359970C(iLocal_56))
						{
							unk_0x62BDDA84CCCF90A9(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0x50274A7EACA3133A(iLocal_56, 0);
							unk_0xABFC84F5C4943D7B(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0xA829C9A2767AC8EF())
						{
							unk_0x51BB443B279E4104(iLocal_56);
							Var4 = { unk_0x3DBAB8E11699EAEE(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0x9CD4CBF2BBE10F00(Var4, &(Var4.f_2), 0, 0);
							unk_0xC64B6E13A6A7F517(iLocal_56, Var4, 1, 0, 0, 1);
							Var4 = { unk_0x34AEDCEA59226CCB(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0xBBF86885619695CE(iLocal_56, Var4.f_2);
						}
						Var4 = { unk_0x34AEDCEA59226CCB(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
						if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_46(unk_0xE2D3D51028F0428A(), 215.68f, 60f))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x7D1424753688EE7A(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
							else if (func_46(unk_0xE2D3D51028F0428A(), 122.0371f, 60f))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x7D1424753688EE7A(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
						}
						else if (unk_0x987A5F1E1A67E3C0(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_46(unk_0xE2D3D51028F0428A(), 200.8887f, 60f))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x7D1424753688EE7A(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
							else if (func_46(unk_0xE2D3D51028F0428A(), 347.8599f, 60f))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x7D1424753688EE7A(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uLocal_61);
								unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
								unk_0xC963A45B50851768(uLocal_61);
								unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
								unk_0x7461D7C5BA953BC7(&uLocal_61);
							}
						}
						else
						{
							unk_0xA888F8CC04F25CC8(&uLocal_61);
							unk_0x7D1424753688EE7A(0, unk_0xCACAD935C0BEE14F(iLocal_56, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_56), 1);
							unk_0xC963A45B50851768(uLocal_61);
							unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
							unk_0x7461D7C5BA953BC7(&uLocal_61);
						}
						unk_0xA8685678DDA27FC3(iLocal_56, -668482597, 1, 0, 0);
						unk_0xC252F409BDE7A700(iLocal_56, 1);
						unk_0xABC2CA6F28903308(iLocal_56, 1);
						func_45(&iLocal_73);
						settimerb(0);
						unk_0xBD1E8007D7DFA747(0);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
							if (!func_44())
							{
								unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
							}
						}
						if (unk_0xE5965CDF24F93A9F(iLocal_57))
						{
							unk_0x4BDA5AFD88C085EB(&iLocal_57);
						}
						if (!unk_0xF68107C40359970C(iLocal_56))
						{
							unk_0x62BDDA84CCCF90A9(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x4F1E6A84BC157FA0(unk_0xE2D3D51028F0428A(), 0);
						unk_0x94953C3FF0664F66(0f);
						unk_0xDD786B89B15AA63F(uLocal_97, 0);
						func_43();
						unk_0x588DDCB644C6486A(uLocal_97, 0);
						unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
						if (unk_0xA829C9A2767AC8EF())
						{
							unk_0x5A7ACD1CDF509B0D(500);
							while (unk_0xECD40FEF3CF43BDB())
							{
								wait(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						wait(0);
						unk_0xBAEA2321313356D0(0, 0, 3, 0);
						func_83(0, 1, 1, 0, 0, 0, 0);
						func_3(func_37(), 1, iVar14);
						func_294(1);
					}
					else
					{
						unk_0xC43E67C9BA871ECB();
						if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), -3856156))
						{
							if (!unk_0xF68107C40359970C(iLocal_56) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x099CAD293190F449(iLocal_57, unk_0xE2D3D51028F0428A()))
								{
									unk_0xE6451C2F193342C7(iLocal_57, 0, 1);
									if (unk_0xECF091D7E67FF7F2(iLocal_56))
									{
										unk_0x9A97DC6DBC7B223D(iLocal_57, iLocal_56, unk_0xB897FCFCFA664B38(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x9A97DC6DBC7B223D(iLocal_57, iLocal_56, unk_0xB897FCFCFA664B38(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_36(iParam0) == 3)
	{
		return 0;
	}
	if (func_36(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_36(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
	}
	iVar5 = (Global_59864[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59864[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59864[iVar2] = 2147483647;
				}
				else
				{
					Global_59864[iVar2] = (Global_59864[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59864[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59864[iVar2];
			Global_59864[iVar2] = (Global_59864[iVar2] - iParam3);
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
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_2[Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112915.f_20564.f_233[iVar2 /*69*/]++;
		Global_112915.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112915.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_42596 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112915.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59872[iVar0 /*3*/][0] = Global_112915.f_20564[iVar0];
		Global_59872.f_31[iVar0 /*3*/][0] = Global_112915.f_20564.f_11[iVar0];
		Global_59872.f_62[iVar0 /*3*/][0] = Global_112915.f_20564.f_22[iVar0];
		Global_59872.f_93[iVar0 /*3*/][0] = Global_112915.f_20564.f_33[iVar0];
		Global_59872.f_124[iVar0 /*3*/][0] = Global_112915.f_20564.f_44[iVar0];
		Global_59872.f_155[iVar0 /*3*/][0] = Global_112915.f_20564.f_55[iVar0];
		Global_59872.f_186[iVar0 /*3*/][0] = Global_112915.f_20564.f_66[iVar0];
		Global_59872.f_217[iVar0 /*3*/][0] = Global_112915.f_20564.f_77[iVar0];
		Global_59872.f_248[iVar0 /*3*/][0] = Global_112915.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_59872[iVar0 /*3*/][1] = Global_112915.f_20564[iVar0];
			Global_59872.f_31[iVar0 /*3*/][1] = Global_112915.f_20564.f_11[iVar0];
			Global_59872.f_62[iVar0 /*3*/][1] = Global_112915.f_20564.f_22[iVar0];
			Global_59872.f_93[iVar0 /*3*/][1] = Global_112915.f_20564.f_33[iVar0];
			Global_59872.f_124[iVar0 /*3*/][1] = Global_112915.f_20564.f_44[iVar0];
			Global_59872.f_155[iVar0 /*3*/][1] = Global_112915.f_20564.f_55[iVar0];
			Global_59872.f_186[iVar0 /*3*/][1] = Global_112915.f_20564.f_66[iVar0];
			Global_59872.f_217[iVar0 /*3*/][1] = Global_112915.f_20564.f_77[iVar0];
			Global_59872.f_248[iVar0 /*3*/][1] = Global_112915.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59864[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (iParam0 == 12)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_112915.f_20564.f_471), iParam0);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0) || unk_0xE2D0C323A1AE5D85(Global_2359296[func_9() /*5559*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_112915.f_20564.f_471), iParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_9() /*5559*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_8(iParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
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
			break;
		
		default:
			break;
	}
	return "";
}

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574907;
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

void func_14(int iParam0)
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

bool func_15(int iParam0)
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
		return func_17(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_16(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_16(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_16(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_16(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_16(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_16(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0);
	}
	return unk_0xE2D0C323A1AE5D85(Global_2359296[func_9() /*5559*/].f_675.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_18(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (func_32(14) && !func_31(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31755 != 0 && !Global_77852)
	{
		return 0;
	}
	if (func_30(&Global_4535627))
	{
		if (func_28(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_4535627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_25(uParam0, iVar0);
		iVar0++;
	}
	func_26(uParam0, (Global_4535626 - 0.5f));
}

void func_25(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_26(var uParam0, float fParam1)
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

float func_27(var uParam0)
{
	return uParam0->f_80;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_31(int iParam0)
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

bool func_32(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_33(int iParam0, int iParam1)
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58432[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58432[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_35()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59864[0] == iVar0)
		{
			Global_59864[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59864[1] == iVar0)
		{
			Global_59864[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59864[2] == iVar0)
		{
			Global_59864[2] = iVar0;
		}
	}
}

int func_36(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

int func_37()
{
	func_38();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_41(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_40(unk_0xE2D3D51028F0428A());
			if (func_39(iVar0) && (!func_32(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_39(Global_112915.f_2363.f_539.f_4321))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_43()
{
	var uVar0;
	
	uVar0 = unk_0x1BCEC0B1056BD6AC(26379945, unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()), 1115815936, 1, 2);
	unk_0xDD786B89B15AA63F(uVar0, 1);
}

int func_44()
{
	if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(*iParam0))
	{
		unk_0x55B23FE400FCEA6B(*iParam0, 0);
		if (unk_0xA6A089369417736E(*iParam0) && unk_0x930E64CB0285CAEC(*iParam0, 1))
		{
			unk_0x3D81769BEC61BFF8(iParam0);
		}
	}
}

int func_46(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0x82FE2343F8BDFF0B(iParam0) < fVar0 && unk_0x82FE2343F8BDFF0B(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0x82FE2343F8BDFF0B(iParam0) < fVar0 || unk_0x82FE2343F8BDFF0B(iParam0) > fVar1)
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

int func_47()
{
	if (func_48(1000))
	{
		unk_0x859006DB870314C5(500);
		while (unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0xC43E67C9BA871ECB();
			wait(0);
		}
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (unk_0xE9E8955A780DDA01())
	{
		if ((unk_0x320D1840B6DAA1CC() - Global_28) > iParam0)
		{
			Global_27 = unk_0x320D1840B6DAA1CC();
		}
		Global_28 = unk_0x320D1840B6DAA1CC();
		if ((unk_0x320D1840B6DAA1CC() - Global_27) > iParam0)
		{
			if (func_49())
			{
				Global_27 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
	}
	return 0;
}

int func_49()
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xF09A4F413B0D30EB(0, 18) || unk_0xF09A4F413B0D30EB(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

int func_51(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_62(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_61(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_52(&uVar0, &uVar1, iParam6, 0);
}

int func_52(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam2 > Global_21287)
			{
				if (bParam3 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
				}
				else
				{
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_58();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22281 = Global_22282;
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_20904.f_370 = Global_22274;
		Global_21281 = Global_21282;
		Global_21283 = Global_21284;
		if (Global_21543 == 0)
		{
			Global_21439[0 /*6*/] = { Global_21465[0 /*6*/] };
			Global_21439[1 /*6*/] = { Global_21465[1 /*6*/] };
			Global_21491[0 /*6*/] = { Global_21517[0 /*6*/] };
			Global_21491[1 /*6*/] = { Global_21517[1 /*6*/] };
			Global_21452[0 /*6*/] = { Global_21478[0 /*6*/] };
			Global_21452[1 /*6*/] = { Global_21478[1 /*6*/] };
			Global_21504[0 /*6*/] = { Global_21530[0 /*6*/] };
			Global_21504[1 /*6*/] = { Global_21530[1 /*6*/] };
		}
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam3)
			{
				func_57();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_56())
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
					if (Global_21543 == 0)
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
			}
			if (func_55())
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
			}
			func_54();
			Global_21295 = bParam3;
		}
		Global_21287 = iParam2;
		if (Global_21281 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21281)
			{
				StringCopy(&(Global_20904.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20904.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20151 = 0;
		func_53();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21287 || iParam2 == Global_21287)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_60();
	}
	return 0;
}

void func_53()
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

void func_54()
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

int func_55()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_56()
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

void func_57()
{
	if (func_32(14))
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
		Global_19954 = func_37();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21282 = iParam0;
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_63(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_64(struct<3> Param0, struct<3> Param1)
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
	iVar0 = unk_0x9993EF7FDBCDB632();
	if (!unk_0xA6A089369417736E(iVar0))
	{
		unk_0x2D58A6131679D82C(iVar0, 1, 0);
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iVar0), &Var3, &Var4);
	unk_0x29579BC5971CA4B6(Param0, 3, &Var2, 1, 1077936128, 0);
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
				if (vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x1E4C19DC2AD86A18(Var10, Var11, 511, iVar0, 7);
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
				if (unk_0xB2D581BD7446BBE9(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
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
					else if (unk_0x987A5F1E1A67E3C0(Var1, Param0, 1) <= 5f || unk_0x987A5F1E1A67E3C0(Var1, Param1, 1) <= 5f)
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
				if (vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x1E4C19DC2AD86A18(Var10, Var11, 511, iVar0, 7);
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
				if (unk_0xB2D581BD7446BBE9(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
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
					else if (unk_0x987A5F1E1A67E3C0(Var1, Param0, 1) <= 5f || unk_0x987A5F1E1A67E3C0(Var1, Param1, 1) <= 5f)
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
				if (vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, (Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, -(Var4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x1E4C19DC2AD86A18(Var10, Var11, 511, iVar0, 7);
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
				if (unk_0xB2D581BD7446BBE9(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
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
					else if (unk_0x987A5F1E1A67E3C0(Var1, Param0, 1) <= 5f || unk_0x987A5F1E1A67E3C0(Var1, Param1, 1) <= 5f)
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
				if (vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0xCACAD935C0BEE14F(iVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, (Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0xCACAD935C0BEE14F(iVar0, -(Var4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x1E4C19DC2AD86A18(Var10, Var11, 511, iVar0, 7);
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
				if (unk_0xB2D581BD7446BBE9(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
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
					else if (unk_0x987A5F1E1A67E3C0(Var1, Param0, 1) <= 5f || unk_0x987A5F1E1A67E3C0(Var1, Param1, 1) <= 5f)
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

Vector3 func_65(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)
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

int func_66(int iParam0)
{
	if (func_110(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
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
	*uParam1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
	uParam2->f_2 = func_70(iParam0, unk_0xE2D3D51028F0428A(), 1);
	fVar3 = func_70(iParam0, unk_0xE2D3D51028F0428A(), 1);
	fVar4 = func_70(iParam0, unk_0xE2D3D51028F0428A(), 1);
	Var10 = { unk_0x6B62510F212526DC(iParam0, 0) - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
	if (unk_0x6F940C2636C076AD(sParam3))
	{
		Var9 = { unk_0x3DBAB8E11699EAEE(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_69(unk_0x6B62510F212526DC(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iParam0, 0), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x9D2C476A7D8D9385(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xB2D581BD7446BBE9(uVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
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
							*uParam1 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_69(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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

float func_69(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xC529D13129C03CF4(fVar1, fVar2);
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

float func_70(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	return func_69(Var0, Var1, iParam2);
}

void func_71(struct<3> Param0, float fParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - Param0 };
		fVar2 = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
		if (func_72(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		fVar2 = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
		if (func_72(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*uParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*uParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_72(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		fVar0 = unk_0x82FE2343F8BDFF0B(iParam0);
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

void func_73(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_77(0))
		{
			func_74(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_74(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_55())
	{
		Global_19954.f_1 = 3;
	}
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
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

bool func_76()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_77(int iParam0)
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

bool func_78()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_79()
{
	Global_20151 = 0;
	func_80();
}

void func_80()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

int func_81(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_82(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_82(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

void func_83(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_90(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_55())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_89(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_90(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_89(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_87(unk_0x9E2D6C50374FCFA9())) && !func_85(unk_0x9E2D6C50374FCFA9(), 0)) && !func_84()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_87(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_84()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_85(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_86(-1, 0) == 8;
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

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_87(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
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

bool func_88()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_89(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_90(int iParam0)
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

void func_91()
{
	Global_20151 = 0;
	func_60();
}

int func_92()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (func_92())
		{
			return 1;
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x410D46B709324B0F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (bParam0)
		{
			if (unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A())
				{
					return 0;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x90544F2E01A178CD(iVar0) < 0.95f || unk_0x90544F2E01A178CD(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

bool func_95(int iParam0)
{
	return func_96(func_97(iParam0));
}

bool func_96(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

char* func_97(int iParam0)
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

int func_98()
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_107();
		}
		else
		{
			if (!unk_0xF68107C40359970C(iLocal_55))
			{
				if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_55) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_55))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_117(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0x803592456AE579B3(uLocal_89))
				{
					func_50(joaat("rc_wallets_recovered"), 1);
					unk_0x61481F9FBB1C7EDD(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0xF7A14A1A76B6DD17(0, 200, 250);
					func_100(2);
					bLocal_95 = true;
				}
				else if (unk_0x12DD4A0B247D9B4D(iLocal_60))
				{
					if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uLocal_89)) > 150f)
					{
						if (unk_0xF68107C40359970C(iLocal_56))
						{
							func_276();
						}
						else if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_56, 1)) > 100f)
						{
							func_276();
						}
					}
				}
			}
		}
	}
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112915.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_101(func_97(iParam0), -1);
					Global_112915.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_101(func_97(iParam0), -1);
					Global_112915.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xE2D0C323A1AE5D85(Global_112911, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_101(func_97(iParam0), -1);
					Global_112915.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 2);
				}
			}
			break;
	}
}

void func_101(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_102(var uParam0)
{
	*uParam0 = -99;
}

int func_103(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_104(iParam0, bParam1, 145);
}

int func_104(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_105(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(iVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_105(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_106(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(iVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(iVar0, func_106(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(iVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(iVar0, func_106(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_107()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0xCED9E32812D6C7C7(&uVar1, 3);
		unk_0xCED9E32812D6C7C7(&uVar1, 4);
		unk_0xCED9E32812D6C7C7(&uVar1, 1);
		uLocal_89 = unk_0x1CD347D2BD906560(iVar0, unk_0x9B2F53F9CB82F448(iLocal_55, 1067030938, 1069547520), uVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_108(uLocal_89);
		func_120(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0x12DD4A0B247D9B4D(iLocal_59))
		{
			unk_0xFFD8EB5462B07B59(&iLocal_59);
		}
		if (func_110(iLocal_56))
		{
			unk_0x03A927199A2DFE46(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_180(iLocal_56, 242628503) && !unk_0xF68107C40359970C(iLocal_56))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_61);
				if (!unk_0x8F41785F110B0DA0(iLocal_56, Local_138, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0x13C3030981EA7C3B(0, Local_138, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
				unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_61);
				unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
				unk_0x7461D7C5BA953BC7(&uLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0xF68107C40359970C(iLocal_56))
				{
					if (unk_0xFCF559C8631ABED7(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0xD01FAFCE275C94F3(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0x2791155FB0769FE5(uLocal_89))
							{
								func_120(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0x451F33099166532A(uLocal_89);
								unk_0x62BDDA84CCCF90A9(iLocal_56, iLocal_133);
								unk_0x50274A7EACA3133A(iLocal_56, 0);
								unk_0xB3822DB3D538C8F3(&iLocal_56);
								func_294(1);
							}
						}
					}
					else if (unk_0x174CED88B97C78D9(iLocal_56, 242628503) == 7)
					{
						unk_0x03A927199A2DFE46(iLocal_56);
						unk_0xA888F8CC04F25CC8(&uLocal_61);
						unk_0x49D97B076E3590AC(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 3000, 2048, 2);
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 3000);
						unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
						unk_0xC963A45B50851768(uLocal_61);
						unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
						unk_0x7461D7C5BA953BC7(&uLocal_61);
						unk_0xABC2CA6F28903308(iLocal_56, 1);
					}
				}
			}
		}
		else if (!unk_0xF68107C40359970C(iLocal_56))
		{
			if (unk_0x2791155FB0769FE5(uLocal_89))
			{
				if (unk_0x8F41785F110B0DA0(iLocal_56, unk_0x70453F7DF40780A5(uLocal_89), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0x03A927199A2DFE46(iLocal_56);
					unk_0xA888F8CC04F25CC8(&uLocal_61);
					unk_0x7D1424753688EE7A(0, unk_0x70453F7DF40780A5(uLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0x1A96B8B416BC07D0(0, unk_0x70453F7DF40780A5(uLocal_89), 0);
					unk_0x49D97B076E3590AC(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 3000, 2048, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 3000);
					unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
					unk_0xC963A45B50851768(uLocal_61);
					unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
					unk_0x7461D7C5BA953BC7(&uLocal_61);
					unk_0xABC2CA6F28903308(iLocal_56, 1);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_108(var uParam0)
{
	return func_109(uParam0);
}

int func_109(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_106(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return iVar0;
}

int func_110(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0x0747E45CFF1F74AA(iLocal_55, unk_0xE2D3D51028F0428A(), 1))
			{
				unk_0xE68645525D451A8B(iLocal_55);
				bVar0 = true;
			}
			if (unk_0x55A0C756C4A8220C(iLocal_73, 0) && unk_0xF6F5D18EF8EAB859(iLocal_55, iLocal_73, 0))
			{
				if (unk_0x79A822779CC6508A(iLocal_73))
				{
					if (unk_0x66AA8BC9CA1BE26C(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0x55A0C756C4A8220C(iLocal_73, 0) || !func_180(iLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x51B334B227EC8042(iLocal_55))
			{
				if (unk_0x174CED88B97C78D9(iLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_55, iLocal_73, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_55, 242628503) != 1 && unk_0x174CED88B97C78D9(iLocal_55, 242628503) != 0)
						{
							unk_0xA888F8CC04F25CC8(&uLocal_62);
							unk_0xAB7639D658BBCCEE(0, 0, 0);
							unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
							unk_0xC963A45B50851768(uLocal_62);
							unk_0x8ACADA903FCAA42F(iLocal_55, uLocal_62);
							unk_0x7461D7C5BA953BC7(&uLocal_62);
						}
					}
					else if (unk_0x174CED88B97C78D9(iLocal_55, 242628503) != 1 && unk_0x174CED88B97C78D9(iLocal_55, 242628503) != 0)
					{
						unk_0xA888F8CC04F25CC8(&uLocal_62);
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
						unk_0xC963A45B50851768(uLocal_62);
						unk_0x8ACADA903FCAA42F(iLocal_55, uLocal_62);
						unk_0x7461D7C5BA953BC7(&uLocal_62);
					}
					iVar1 = unk_0xB02B2CD950B6BA04(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0x03A927199A2DFE46(iLocal_55);
						if (func_110(unk_0xE2D3D51028F0428A()))
						{
							unk_0xC1A74225341AA9FB(iLocal_55, unk_0xE2D3D51028F0428A(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_112()
{
	if (!unk_0xF68107C40359970C(iLocal_55))
	{
		if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0x4D21C9FB671ED18F(iLocal_55))
		{
			func_113(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_183(&Local_107, 2);
			}
			unk_0x05CB75C0837196F9(&iLocal_55);
			if (unk_0x55A0C756C4A8220C(iLocal_73, 0))
			{
				if (unk_0x4D21C9FB671ED18F(iLocal_73))
				{
					unk_0xD59CC8123FD1A789(&iLocal_73);
				}
			}
		}
	}
	else if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), unk_0x6B62510F212526DC(iLocal_55, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		if ((unk_0xE5965CDF24F93A9F(iParam1) && unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A())) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x04D9F44466CBF3CA(iParam1))
			{
				if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam1), 0))
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam1, 1), 1);
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
						unk_0x9705014C37E60003(iParam0, 1);
						unk_0xFBBD8F124403B0F5(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x9705014C37E60003(iParam0, 0);
						unk_0xFBBD8F124403B0F5(iParam0, 255);
					}
				}
			}
			else if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam1)))
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam1, 1), 1);
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
						unk_0x9705014C37E60003(iParam0, 1);
						unk_0xFBBD8F124403B0F5(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x9705014C37E60003(iParam0, 0);
						unk_0xFBBD8F124403B0F5(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(iParam0, sParam1, func_115(iParam2), 1);
}

int func_115(int iParam0)
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

float func_116(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

void func_117(int iParam0, var uParam1)
{
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		if (unk_0x320D1840B6DAA1CC() > *uParam1 + 500)
		{
			if (unk_0xCA3605134E97DB2B(iParam0) == 1)
			{
				unk_0xD809204F14EF9B68(iParam0, true);
			}
			else
			{
				unk_0xD809204F14EF9B68(iParam0, false);
				unk_0xA582EE8380437B1B(iParam0, 1);
			}
			*uParam1 = unk_0x320D1840B6DAA1CC();
		}
		if (!unk_0xF847447D4467709D() && func_118(0))
		{
			func_100(1);
		}
	}
}

bool func_118(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_112911, iParam0);
}

void func_119()
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0x55A0C756C4A8220C(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0x87B449F4C26E764A(iLocal_55, iLocal_73) || unk_0x174CED88B97C78D9(iLocal_55, -1273030092) == 1)
					{
						unk_0xFDB121077308E944(iLocal_55, iLocal_73, Local_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x79A822779CC6508A(iLocal_73))
					{
						unk_0x4CCFBA59B410315D(iLocal_73, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0xFDB121077308E944(iLocal_55, iLocal_73, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0xA888F8CC04F25CC8(&uLocal_61);
				unk_0x7D1424753688EE7A(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x7D1424753688EE7A(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
				unk_0xC963A45B50851768(uLocal_61);
				unk_0x8ACADA903FCAA42F(iLocal_55, uLocal_61);
				unk_0x7461D7C5BA953BC7(&uLocal_61);
			}
			else
			{
				unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0x987A5F1E1A67E3C0(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0x84918839A90C954C(iLocal_55, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 300f, -1, 0, 0);
				unk_0x7461D7C5BA953BC7(&uLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0x84918839A90C954C(iLocal_55, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0xF68107C40359970C(iLocal_55))
	{
		unk_0xABC2CA6F28903308(iLocal_55, 1);
	}
}

bool func_120(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_62(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_121(sParam2, iParam3, 0);
}

int func_121(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_55())
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
			func_54();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_53();
		func_122();
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
		func_60();
	}
	return 0;
}

void func_122()
{
	if (!func_123())
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

int func_123()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_126())
	{
		return 0;
	}
	if (func_124(unk_0x9E2D6C50374FCFA9()))
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

bool func_124(int iParam0)
{
	return func_125(iParam0, 20);
}

bool func_125(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_126()
{
	return -1;
}

bool func_127()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (!unk_0xF68107C40359970C(iLocal_56))
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (unk_0x9AC74C7EF847A074(unk_0x6EA486FF6D815B4B(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x6EA486FF6D815B4B(iLocal_56, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + unk_0x6EA486FF6D815B4B(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x6A1EDF18639D033E(unk_0x6EA486FF6D815B4B(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x89D0E0233F6E59A7(-1, unk_0x6EA486FF6D815B4B(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_129())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0x174CED88B97C78D9(iLocal_56, 474215631) != 1)
			{
				if (func_128(iLocal_56))
				{
					unk_0x402A537158A551BD(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_128(int iParam0)
{
	if (func_110(iParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129()
{
	if (func_110(iLocal_55))
	{
		if (func_116(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_130()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xE5965CDF24F93A9F(iLocal_56))
	{
		if (unk_0xF68107C40359970C(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_56, unk_0xE2D3D51028F0428A(), 1) && unk_0x32DCDA1B2F8A0694(iLocal_56))
			{
				bVar0 = true;
				unk_0xE68645525D451A8B(iLocal_56);
			}
			if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_56, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_131(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_129())
		{
			bVar0 = false;
			if (unk_0x174CED88B97C78D9(iLocal_56, 474215631) != 1)
			{
				if (func_128(iLocal_56))
				{
					unk_0x402A537158A551BD(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0xF68107C40359970C(iLocal_55))
		{
			if (unk_0x174CED88B97C78D9(iLocal_55, 1805844857) == 7)
			{
				unk_0xBC12D08EE7559CCD(iLocal_55, 17, 1);
				unk_0xBC12D08EE7559CCD(iLocal_55, 13, 0);
				unk_0x7734082B0EDB0BE0(iLocal_55, unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_131(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_110(unk_0xE2D3D51028F0428A()) && func_110(iParam0))
	{
		if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
		{
			return 1;
		}
		if (func_145(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
		{
			if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_144(unk_0xE2D3D51028F0428A(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_132(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_110(unk_0xE2D3D51028F0428A()) && func_110(iParam0))
	{
		if (func_143(iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
		{
			if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_133(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_133(int iParam0, float fParam1)
{
	return func_134(iParam0, unk_0xE2D3D51028F0428A(), fParam1, 1, 250, 7);
}

bool func_134(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_142(iParam0, iParam1);
	if (!func_110(iParam0) || !func_110(iParam1))
	{
		if (iVar2 != -1)
		{
			func_141(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_138(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_137();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_135(&(Local_49[iVar2 /*4*/]), Var1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x320D1840B6DAA1CC() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_135(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_110(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_136(iParam2, iParam5) };
		*uParam0 = unk_0x1E4C19DC2AD86A18(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xB2D581BD7446BBE9(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
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
	if (unk_0x9044EDB8A7BF67B4(iVar3))
	{
		func_110(iVar3);
		if (unk_0x28AA31872A651BC7(iVar3) == iParam2)
		{
			if (bLocal_50)
			{
				unk_0x8A66CDE1D3E54C3B(Param1, unk_0x6B62510F212526DC(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x320D1840B6DAA1CC();
			return 1;
		}
		return 0;
	}
	if (unk_0x04D9F44466CBF3CA(iVar3))
	{
		func_110(iVar3);
		if (unk_0xD5C6B5E3B93A5EDC(iParam2, 0))
		{
			if (unk_0x31EB55FAEEE9C0F5(iVar3) == unk_0xB3FF0049C1FD38EC(iParam2, 0))
			{
				if (bLocal_50)
				{
					unk_0x8A66CDE1D3E54C3B(Param1, unk_0x6B62510F212526DC(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x6B62510F212526DC(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x6B62510F212526DC(iParam0, 1);
}

int func_137()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_138(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_140(unk_0x6B62510F212526DC(iParam1, 1) - unk_0x6B62510F212526DC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x63BEA94AB58D4E6D(iParam0) };
	}
	else
	{
		Var1 = { func_140(unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 5f, 0f) - unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_139(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_139(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_140(struct<3> Param0)
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

void func_141(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_143(int iParam0)
{
	if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_144(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x63BEA94AB58D4E6D(iParam0) };
	Var1 = { unk_0x6B62510F212526DC(iParam1, 1) - unk_0x6B62510F212526DC(iParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_145(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_110(unk_0xE2D3D51028F0428A()) && func_110(iParam0))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_149(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_146(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x807D601FA146717A(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iParam0, 1), fVar0, 1))
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
				if (func_149(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_146(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_147(iParam0, fParam1))
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
			if (func_147(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x863026E0C5C2E52B(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x367885498C2037BD(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x367885498C2037BD(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_148(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_140(Param1 - unk_0x6B62510F212526DC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x63BEA94AB58D4E6D(iParam0) };
	}
	else
	{
		Var1 = { func_140(unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 5f, 0f) - unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_139(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	if (bLocal_90 || unk_0x55B23FE400FCEA6B(iLocal_55, 0))
	{
		func_178(&uLocal_152, 0, 0);
	}
	else
	{
		func_151(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_152(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_153(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_153(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		func_178(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_154(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_154(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4131052989DE1278())
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xE8F6C1F695B25B91(iVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_96(iVar0))
	{
		func_177();
	}
	if (func_176(iParam1) && unk_0x2B5F4FBAF644BEC8(iParam1))
	{
		iVar1 = 0;
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			unk_0xAD3E09D1957BB0DE(unk_0x28AA31872A651BC7(iParam1));
			unk_0x757E8ACDD0FCB0CA(unk_0x28AA31872A651BC7(iParam1), 1);
			if (unk_0x2CF76E57D8E46C1F(unk_0x28AA31872A651BC7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x04D9F44466CBF3CA(iParam1))
		{
			unk_0xE0A93E5ADBED87DE(unk_0x31EB55FAEEE9C0F5(iParam1));
			if (unk_0xE390839FC176621D(unk_0x31EB55FAEEE9C0F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam1))
		{
			unk_0x6E740265DB1F6EA1(unk_0x1AA24836EA881D77(iParam1));
			if (unk_0x3E04DE565F9095B8(unk_0x1AA24836EA881D77(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4131052989DE1278())
		{
			if (func_171(uParam0, bParam5, bParam7, 0))
			{
				func_168(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_158(iVar0))
				{
					if ((unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0)) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((iVar1 && !unk_0xF847447D4467709D()) && uParam6)
						{
							if (!func_96(iVar0))
							{
								func_101(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
								{
									func_157(1);
								}
							}
						}
					}
				}
			}
			else if (func_158(iVar0))
			{
				if (unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0))
				{
					if (((unk_0xBC7D3EDF3455BC35(iParam1) && iVar1) && !unk_0xF847447D4467709D()) && uParam6)
					{
						if (!func_96(iVar0))
						{
							func_101(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
							{
								func_157(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE8F6C1F695B25B91(sParam3))
			{
				if (func_96(sParam3))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
				{
					func_178(uParam0, iVar0, 1);
				}
			}
			if (!func_171(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_156(uParam0))
				{
					func_155(uParam0);
				}
			}
		}
	}
	else
	{
		func_178(uParam0, iVar0, 0);
	}
}

void func_155(var uParam0)
{
	if (func_176(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
		unk_0xBD1E8007D7DFA747(0);
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		unk_0x06A78BA0B756C754("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_156(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x320D1840B6DAA1CC()
		{
			return 1;
		}
	}
	return 0;
}

int func_157(bool bParam0)
{
	switch (Global_42596)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_112915.f_10049.f_100++;
			}
			return Global_112915.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_112915.f_10049.f_101++;
			}
			return Global_112915.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_112915.f_10049.f_102++;
			}
			return Global_112915.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_158(char* sParam0)
{
	if (!func_159(1, 1, 0))
	{
		if ((!unk_0xACC32B78196FBC2A(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x3410421C60BF7143(1);
		}
		return 0;
	}
	switch (Global_42596)
	{
		case 0:
		case 3:
			if (func_157(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_157(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_157(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x04458B4E5D9E466A())
	{
		return 0;
	}
	if (func_77(0))
	{
		return 0;
	}
	if (func_167())
	{
		return 0;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return 0;
	}
	if (Global_75021)
	{
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_59871)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
			{
				return 0;
			}
			if (unk_0x594CC97203485127())
			{
				return 0;
			}
		}
	}
	if ((func_166() || func_165(Global_4718592.f_138117)) || func_164())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = func_163(unk_0xE2D3D51028F0428A(), 0);
			if (((unk_0x38B74904557F43CC(iVar0, iVar1) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("riot2") && iVar1 == 0) && func_162(iVar0, 10)) && unk_0x0DD0BC46C4CFD6AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957935)
	{
		return 0;
	}
	if (func_160(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	if (iParam0 != func_126())
	{
		if (func_161(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_161(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_161(int iParam0, bool bParam1, bool bParam2)
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

int func_162(int iParam0, int iParam1)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x03AC3319D1B50189(iParam0) > 0)
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
					if (unk_0x6B83F5AE0478286F(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
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

var func_164()
{
	return Global_2714627.f_19;
}

bool func_165(int iParam0)
{
	return iParam0 == 51;
}

var func_166()
{
	return Global_2714627.f_18;
}

bool func_167()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

void func_168(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581344 == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		func_178(uParam0, 0, 0);
	}
	if (func_63(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			iVar0 = unk_0x28AA31872A651BC7(iParam1);
			if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					if (!func_169())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xECF091D7E67FF7F2(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(0);
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
	unk_0x56593357686570F4(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iParam1, -1, iVar3, iVar4);
	unk_0x9DCF157443EA30D6("FocusIn", 0, 0);
	unk_0x66B27A59829491D3("HINT_CAM_SCENE");
	unk_0x91DFC8F68F6D9B05(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x320D1840B6DAA1CC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_169()
{
	return func_170(unk_0x9E2D6C50374FCFA9());
}

int func_170(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_171(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_175(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_156(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (!func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x320D1840B6DAA1CC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
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
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (!func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_174(bParam1, bParam2, bParam3) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_175(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (func_173(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_172(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || func_172(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_173(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_156(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_159(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_177();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_172(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x51844F589D928A86(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_173(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x51844F589D928A86(0, 80))
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x04D9F44466CBF3CA(iParam0))
		{
			if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	unk_0xCED9E32812D6C7C7(&Global_7825, 4);
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
		{
			return;
		}
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(iParam2);
		unk_0x06A78BA0B756C754("FocusIn");
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE8F6C1F695B25B91(uParam0->f_3))
	{
		if (func_96(uParam0->f_3))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (!unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

float func_179(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam2);
}

int func_180(int iParam0, int iParam1)
{
	if (func_128(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_181(char* sParam0)
{
	func_182(sParam0);
}

void func_182(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, sParam0))
	{
	}
}

void func_183(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_184()
{
	unk_0xA888F8CC04F25CC8(&uLocal_61);
	unk_0x529D306014D3C29A(0, iLocal_55, 750);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x49D97B076E3590AC(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0xC963A45B50851768(uLocal_61);
	unk_0x8ACADA903FCAA42F(iLocal_56, uLocal_61);
	unk_0x7461D7C5BA953BC7(&uLocal_61);
	if (unk_0x12DD4A0B247D9B4D(iLocal_58))
	{
		unk_0xFFD8EB5462B07B59(&iLocal_58);
	}
	if (!unk_0x12DD4A0B247D9B4D(iLocal_59))
	{
		iLocal_59 = func_103(iLocal_55, 1, 0);
	}
	unk_0x3430966AC4550BB9(iLocal_59, 1);
	unk_0x3B8C20EF19A49C3E(0);
	unk_0x8576657A629C4B0A(0.1f);
	func_119();
	if ((vdist(unk_0x6B62510F212526DC(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x987A5F1E1A67E3C0(Local_53, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0x987A5F1E1A67E3C0(Local_53, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_116(unk_0xE2D3D51028F0428A(), iLocal_56, 1) < 50f)
		{
			func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0x320D1840B6DAA1CC();
	settimera(0);
	if (func_110(unk_0xE2D3D51028F0428A()))
	{
		unk_0x059473086913178C(unk_0xE2D3D51028F0428A(), 1);
	}
	func_185(1);
}

int func_185(int iParam0)
{
	if (func_187())
	{
		Global_112905 = 1;
		Global_112902 = unk_0x320D1840B6DAA1CC();
		if (func_186(Global_112904))
		{
			func_100(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_186(Global_112904))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
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

int func_187()
{
	switch (func_188(&Global_31565, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_192(0))
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_22691.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_42596 = iParam2;
		Global_42558 = *uParam0;
		Global_42559 = iParam4;
		Global_42557 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_42557 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_42557)
			{
				if (Global_42563[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_42558 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_190(iParam2))
		{
			return 0;
		}
		if (Global_42557 == 8)
		{
			return 0;
		}
		Global_42560++;
		*uParam0 = Global_42560;
		Global_42563[Global_42557 /*4*/] = Global_42560;
		Global_42563[Global_42557 /*4*/].f_1 = iParam1;
		Global_42563[Global_42557 /*4*/].f_2 = iParam2;
		Global_42563[Global_42557 /*4*/].f_3 = 0;
		Global_42557++;
		if (iParam4 != 0)
		{
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
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

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_42596);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_193()
{
	if (iLocal_134 == -1)
	{
		if (unk_0x28FF2C2261B6CBA1())
		{
			if (unk_0xBC7D3EDF3455BC35(iLocal_55))
			{
				iLocal_134 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
	else if (unk_0x320D1840B6DAA1CC() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0x89D0E0233F6E59A7(-1, Local_53, 50f))
	{
		return 1;
	}
	if ((unk_0x320D1840B6DAA1CC() - iLocal_135) > 30000)
	{
		if (!unk_0x4D21C9FB671ED18F(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_276();
		}
	}
	if (unk_0x12DD4A0B247D9B4D(iLocal_59))
	{
		if ((unk_0x987A5F1E1A67E3C0(Local_53, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0x987A5F1E1A67E3C0(Local_53, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0x987A5F1E1A67E3C0(Local_53, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(iLocal_55, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194()
{
	if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0x12DD4A0B247D9B4D(iLocal_59))
		{
			if (func_110(iLocal_56) && func_110(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_103(iLocal_55, 1, 0);
					unk_0x3430966AC4550BB9(iLocal_59, 0);
				}
			}
		}
		else
		{
			func_117(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0x12DD4A0B247D9B4D(iLocal_59))
	{
		if (func_110(iLocal_56) && func_110(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_103(iLocal_55, 1, 0);
				unk_0x3430966AC4550BB9(iLocal_59, 0);
			}
		}
	}
	else
	{
		func_117(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0x320D1840B6DAA1CC();
	}
}

int func_195()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	Var0 = { Local_53 };
	Var1 = { 0f, 0f, uLocal_54 };
	Var2 = { 10f, 10f, 5f };
	if (iLocal_65 == 1)
	{
		func_219();
		if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			Local_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xB5549EA4FCF75870("ATM_1");
			unk_0xD69A0C3662175E68(iLocal_106);
			while (!unk_0x0152AA00FA3130F1(iLocal_106))
			{
				if (func_206())
				{
					func_276();
				}
				wait(0);
			}
			unk_0x7CD708DEB04F8474(iLocal_106, 1);
		}
		else
		{
			Local_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			Local_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xD69A0C3662175E68(iLocal_106);
			while (!unk_0x0152AA00FA3130F1(iLocal_106))
			{
				if (func_206())
				{
					func_276();
				}
				wait(0);
			}
			unk_0x7CD708DEB04F8474(iLocal_106, 1);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_219();
		Local_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		Local_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		Local_136 = { 266.3643f, -1313.829f, 28.59103f };
		Local_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xD69A0C3662175E68(iLocal_106);
		while (!unk_0x0152AA00FA3130F1(iLocal_106))
		{
			if (func_206())
			{
				func_276();
			}
			wait(0);
		}
		unk_0x7CD708DEB04F8474(iLocal_106, 1);
	}
	else if (iLocal_65 == 3)
	{
		func_219();
		Local_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		Local_136 = { -1596.203f, -474.8844f, 32f };
		Local_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_219();
		Local_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		Local_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		Local_136 = { 178.1817f, 6660.375f, 31f };
		Local_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x97DF6DE511B1CC98(0);
		unk_0x84A65E2E9CFB6A77(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0xD69A0C3662175E68(iLocal_106);
		while (!unk_0x0152AA00FA3130F1(iLocal_106))
		{
			if (func_206())
			{
				func_276();
			}
			wait(0);
		}
		unk_0x7CD708DEB04F8474(iLocal_106, 1);
	}
	else if (iLocal_65 == 5)
	{
		func_219();
	}
	if (func_197())
	{
		unk_0x7A997A0A971D305F(Local_53, Var2.x, 0, 0, 0, 0);
		uLocal_63 = unk_0x2915D98110F23A29(Local_53 - Var2, Local_53 + Var2, 0, 1, 1, 1);
		iLocal_56 = unk_0xA8D58C3AADA2C41C(5, iLocal_105, Local_53, uLocal_54, 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_56, 13, 0);
		unk_0xBC12D08EE7559CCD(iLocal_56, 11, 1);
		unk_0xBC12D08EE7559CCD(iLocal_56, 17, 0);
		unk_0xE3752B10DC995E95(iLocal_56, 6, 1, 0, 0);
		unk_0x006574E87E6F1942(iLocal_56, 1, 1);
		unk_0x0407CF7EFEE35240(iLocal_56, 1);
		unk_0xA7266A50941DBAEA(iLocal_56, 0);
		unk_0xEEBC95A38CBDED42(iLocal_56, sLocal_147);
		unk_0x62BDDA84CCCF90A9(iLocal_56, 0);
		if (iLocal_71 == 1)
		{
			unk_0xE3752B10DC995E95(iLocal_56, 0, 0, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_56, 2, 0, 1, 0);
			unk_0xE3752B10DC995E95(iLocal_56, 3, 0, 1, 0);
			unk_0xE3752B10DC995E95(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0xA8D58C3AADA2C41C(22, iLocal_104, Local_53, 0, 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_55, 17, 1);
		unk_0xBC12D08EE7559CCD(iLocal_55, 13, 0);
		unk_0xBC12D08EE7559CCD(iLocal_55, 6, 1);
		unk_0xDC6110E0F8FF9DA0(iLocal_55, 128, 1);
		unk_0x006574E87E6F1942(iLocal_55, 1, 1);
		unk_0x50274A7EACA3133A(iLocal_55, 1);
		unk_0xD6A76BAB45A4B460(iLocal_55, 42, 1);
		unk_0xD6A76BAB45A4B460(iLocal_55, 281, 1);
		unk_0xD6A76BAB45A4B460(iLocal_55, 172, 0);
		unk_0xD6A76BAB45A4B460(iLocal_55, 137, 1);
		unk_0x5E15B2064A26E398(iLocal_55);
		unk_0xEEBC95A38CBDED42(iLocal_55, sLocal_146);
		unk_0x7DCB4594ACF18DA7(iLocal_55, 1);
		unk_0xA539EDE8DA5BBC22(iLocal_55, unk_0x3DBAB8E11699EAEE(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2), 0, 0, 1);
		Var3 = { unk_0x34AEDCEA59226CCB(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2) };
		unk_0xBBF86885619695CE(iLocal_55, Var3.f_2);
		if (func_110(iLocal_56))
		{
			if (unk_0xECF091D7E67FF7F2(iLocal_56))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_56, unk_0x3DBAB8E11699EAEE("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x34AEDCEA59226CCB("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2) };
			}
			else
			{
				unk_0xA539EDE8DA5BBC22(iLocal_56, unk_0x3DBAB8E11699EAEE("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x34AEDCEA59226CCB("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2) };
			}
			unk_0xBBF86885619695CE(iLocal_56, Var3.f_2);
		}
		unk_0x49D97B076E3590AC(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xECF091D7E67FF7F2(iLocal_56))
		{
			unk_0x49D97B076E3590AC(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xAFC1FBF3F6AE7B9A("random@atmrobberygen@female");
		}
		else
		{
			unk_0x49D97B076E3590AC(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xAFC1FBF3F6AE7B9A("random@atmrobberygen@male");
		}
		unk_0x80476B7F23BCBB1B(iLocal_55, 1);
		unk_0x50274A7EACA3133A(iLocal_56, 1);
		unk_0x9521FB98DB6DDF50(iLocal_55, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xCA8F055643A07C74(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x202B28FEABEC4034(iLocal_55, joaat("weapon_pistol"), 0);
		unk_0x06AF73D7E3DF7782(iLocal_55, 1, 0);
		switch (func_37())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_196(&Local_107, 0, unk_0xE2D3D51028F0428A(), sLocal_112, 0, 1);
		func_196(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_196(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			iLocal_73 = unk_0xBA715A7BEBA5A1F9(iLocal_106, Local_74, fLocal_76, 1, 1, 0);
			unk_0x371D594409A68A18(iLocal_73, 1, 1, 0);
			unk_0x66E36C5E6E28930C(iLocal_73);
			unk_0x11647D34B93A72EB(iLocal_73, 1);
			if (iLocal_65 == 2)
			{
				unk_0x2476BE9932670CAD(iLocal_73, 0, 0, 0);
			}
			else if (iLocal_65 == 1)
			{
				unk_0xA84812D8D6EE8D32(iLocal_55, 0);
				unk_0xB11C0CF5CCDFE10A(iLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				unk_0x3B2646B62E7BBE11(iLocal_73, 3);
			}
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
		return 1;
	}
	else if (func_206())
	{
		func_276();
	}
	return 0;
}

void func_196(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_197()
{
	unk_0x8FB472886552D737("random@atmrobberygen@male");
	unk_0x8FB472886552D737("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_205(&Local_164, 3);
		Local_164.f_146 = unk_0x8142A6539DDC180F();
		func_204(&Local_164, iLocal_104);
		func_204(&Local_164, iLocal_105);
		func_204(&Local_164, iLocal_101);
		func_204(&Local_164, iLocal_102);
		func_202(&Local_164, cLocal_92);
		func_202(&Local_164, cLocal_148);
		func_202(&Local_164, cLocal_142);
		func_202(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0x6F940C2636C076AD("random@atmrobberygen@male") && unk_0x6F940C2636C076AD("random@atmrobberygen@female")) && func_198(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_199(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_199(var uParam0)
{
	return func_200(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_200(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xE2D0C323A1AE5D85(iParam0, 30))
	{
		if (unk_0xE2D0C323A1AE5D85(iParam0, 29))
		{
			switch (func_201(iParam0))
			{
				case 0:
					return unk_0x0152AA00FA3130F1(iParam2);
					break;
				
				case 1:
					return unk_0x6F940C2636C076AD(sParam1);
					break;
				
				case 2:
					return unk_0xA7A5D14F877C9047(sParam1);
					break;
				
				case 3:
					return unk_0x9D4AFED2949F7082(sParam1);
					break;
				
				case 4:
					return unk_0xF777CAA43F4B281A(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBD3CEA9CD36E271E(sParam1);
					break;
				
				case 6:
					return unk_0x70F555A7CCF10659(sParam1, unk_0xE2D0C323A1AE5D85(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x095032C22DEE1587(iParam2);
					break;
				
				case 8:
					return unk_0x01896B71C5AC966E(iParam2);
					break;
				
				case 9:
					return unk_0x51B6C2EF8DBE2E1A();
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE2D0C323A1AE5D85(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_202(var uParam0, char* sParam1)
{
	func_203(uParam0, 1, -1, sParam1, 0);
}

void func_203(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x3C57C2F07FEE34D2(sParam3, "NULL"))
					{
						if (unk_0x3C57C2F07FEE34D2(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*18*/], iParam1);
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_204(var uParam0, int iParam1)
{
	func_203(uParam0, 0, iParam1, "NULL", 0);
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_206()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_51) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_218())
		{
			return 0;
		}
	}
	if (func_214())
	{
		return 1;
	}
	if (func_207(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207(float fParam0, bool bParam1)
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
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_39(func_37()))
		{
			iVar5 = func_213();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 2) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 3))
				{
					func_208(iVar1, &Var0);
					fVar4 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
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

void func_208(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_209(uParam1, "Abigail1", func_211(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 1:
			func_209(uParam1, "Abigail2", func_211(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 2:
			func_209(uParam1, "Barry1", func_211(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 3:
			func_209(uParam1, "Barry2", func_211(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 4:
			func_209(uParam1, "Barry3", func_211(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 5:
			func_209(uParam1, "Barry3A", func_211(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 6:
			func_209(uParam1, "Barry3C", func_211(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 7:
			func_209(uParam1, "Barry4", func_211(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_210(iParam0), 0, 0);
			break;
		
		case 8:
			func_209(uParam1, "Dreyfuss1", func_211(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 9:
			func_209(uParam1, "Epsilon1", func_211(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 10:
			func_209(uParam1, "Epsilon2", func_211(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 11:
			func_209(uParam1, "Epsilon3", func_211(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 12:
			func_209(uParam1, "Epsilon4", func_211(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 13:
			func_209(uParam1, "Epsilon5", func_211(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 14:
			func_209(uParam1, "Epsilon6", func_211(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 15:
			func_209(uParam1, "Epsilon7", func_211(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 16:
			func_209(uParam1, "Epsilon8", func_211(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 17:
			func_209(uParam1, "Extreme1", func_211(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 18:
			func_209(uParam1, "Extreme2", func_211(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 19:
			func_209(uParam1, "Extreme3", func_211(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 20:
			func_209(uParam1, "Extreme4", func_211(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 21:
			func_209(uParam1, "Fanatic1", func_211(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_210(iParam0), 1, 0);
			break;
		
		case 22:
			func_209(uParam1, "Fanatic2", func_211(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_210(iParam0), 1, 0);
			break;
		
		case 23:
			func_209(uParam1, "Fanatic3", func_211(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_210(iParam0), 0, 1);
			break;
		
		case 24:
			func_209(uParam1, "Hao1", func_211(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_210(iParam0), 0, 1);
			break;
		
		case 25:
			func_209(uParam1, "Hunting1", func_211(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 26:
			func_209(uParam1, "Hunting2", func_211(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 27:
			func_209(uParam1, "Josh1", func_211(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 28:
			func_209(uParam1, "Josh2", func_211(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 29:
			func_209(uParam1, "Josh3", func_211(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 30:
			func_209(uParam1, "Josh4", func_211(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 31:
			func_209(uParam1, "Maude1", func_211(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 32:
			func_209(uParam1, "Minute1", func_211(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 33:
			func_209(uParam1, "Minute2", func_211(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 34:
			func_209(uParam1, "Minute3", func_211(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 35:
			func_209(uParam1, "MrsPhilips1", func_211(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 36:
			func_209(uParam1, "MrsPhilips2", func_211(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 37:
			func_209(uParam1, "Nigel1", func_211(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 38:
			func_209(uParam1, "Nigel1A", func_211(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 39:
			func_209(uParam1, "Nigel1B", func_211(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 40:
			func_209(uParam1, "Nigel1C", func_211(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 41:
			func_209(uParam1, "Nigel1D", func_211(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 42:
			func_209(uParam1, "Nigel2", func_211(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 43:
			func_209(uParam1, "Nigel3", func_211(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 44:
			func_209(uParam1, "Omega1", func_211(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 45:
			func_209(uParam1, "Omega2", func_211(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 46:
			func_209(uParam1, "Paparazzo1", func_211(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 47:
			func_209(uParam1, "Paparazzo2", func_211(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 48:
			func_209(uParam1, "Paparazzo3", func_211(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 49:
			func_209(uParam1, "Paparazzo3A", func_211(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 50:
			func_209(uParam1, "Paparazzo3B", func_211(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 51:
			func_209(uParam1, "Paparazzo4", func_211(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 52:
			func_209(uParam1, "Rampage1", func_211(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 54:
			func_209(uParam1, "Rampage3", func_211(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 55:
			func_209(uParam1, "Rampage4", func_211(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 56:
			func_209(uParam1, "Rampage5", func_211(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 53:
			func_209(uParam1, "Rampage2", func_211(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 57:
			func_209(uParam1, "TheLastOne", func_211(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 58:
			func_209(uParam1, "Tonya1", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 59:
			func_209(uParam1, "Tonya2", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 60:
			func_209(uParam1, "Tonya3", func_211(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 61:
			func_209(uParam1, "Tonya4", func_211(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 62:
			func_209(uParam1, "Tonya5", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_209(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_210(int iParam0)
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

struct<2> func_211(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_212(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_212(int iParam0)
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

int func_213()
{
	func_38();
	switch (Global_112915.f_2363.f_539.f_4321)
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

int func_214()
{
	if (func_217() && !func_218())
	{
		return 1;
	}
	if (func_216() && func_215())
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	return Global_112633 > 0;
}

int func_216()
{
	if (Global_96896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_218()
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

void func_219()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = unk_0x5853B15F78E1A265(1, 5);
	}
	else if (iLocal_65 != 5)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_220();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_220();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_220();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0x987A5F1E1A67E3C0(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		Local_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		Local_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		Local_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		Local_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		Local_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		Local_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		Local_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		Local_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		Local_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		Local_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		Local_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		Local_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		Local_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		Local_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		Local_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (unk_0x987A5F1E1A67E3C0(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		Local_140 = { -2974.34f, 491.96f, 15f };
		fLocal_141 = 1.95f;
		iLocal_72 = 31;
	}
	else
	{
		Local_138 = { Local_53 };
	}
}

int func_220()
{
	if (unk_0xE2D0C323A1AE5D85(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_218())
		{
			return 0;
		}
	}
	if (func_207(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if ((Global_112904 == func_223() && unk_0xE3BBDB1C36703410()) && Global_112905)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar1 = func_224(Var0);
	return uVar1;
}

int func_224(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
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

void func_225(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x8142A6539DDC180F() >= (uParam0->f_146 + uParam0->f_147) || unk_0xE2D0C323A1AE5D85(Global_99974.f_20, 2)) || unk_0xE2D0C323A1AE5D85(Global_99974.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 29))
					{
						func_226(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x8142A6539DDC180F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(var uParam0)
{
	func_227(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_227(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xE2D0C323A1AE5D85(*uParam0, 30))
	{
		switch (func_201(*uParam0))
		{
			case 0:
				unk_0xD69A0C3662175E68(uParam2);
				break;
			
			case 1:
				unk_0x8FB472886552D737(uParam1);
				break;
			
			case 2:
				unk_0x511A0AF0E8B0BF9A(sParam1);
				break;
			
			case 3:
				unk_0xA9911C122B3210B5(sParam1, unk_0xE2D0C323A1AE5D85(*uParam0, 28));
				break;
			
			case 4:
				unk_0xB018BAA4ED9AA217(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x70F260358D1A42C4(sParam1);
				break;
			
			case 6:
				unk_0x70F555A7CCF10659(sParam1, unk_0xE2D0C323A1AE5D85(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x251C5C1DDC74D01D(iParam2);
				break;
			
			case 8:
				unk_0x249A0D3C5714BCF4(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E63031C188793E1();
				break;
			
			default:
				break;
		}
		unk_0xCED9E32812D6C7C7(uParam0, 29);
	}
}

void func_228(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x320D1840B6DAA1CC();
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		iVar0 = (unk_0x320D1840B6DAA1CC() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x6BABDF7A460158CE(iParam0) != 255)
				{
					unk_0xFBBD8F124403B0F5(iParam0, 255);
				}
			}
			else if (unk_0x6BABDF7A460158CE(iParam0) != 0)
			{
				unk_0xFBBD8F124403B0F5(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x6BABDF7A460158CE(iParam0) != 255)
			{
				unk_0xFBBD8F124403B0F5(iParam0, 255);
			}
		}
	}
}

void func_229()
{
}

void func_230()
{
}

void func_231(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_233(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112901 = 0;
	func_232();
}

void func_232()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

void func_233(int iParam0)
{
	Global_112904 = iParam0;
}

int func_234(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151499)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_223();
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
	Local_51 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_218())
			{
				return 0;
			}
		}
		if (!Global_112915.f_9085)
		{
			return 0;
		}
		if (func_274(0))
		{
			return 0;
		}
		if (func_214())
		{
			return 0;
		}
		if (func_273())
		{
			return 0;
		}
		if (Global_112904 != -1)
		{
			return 0;
		}
		if (func_39(func_37()))
		{
			if (func_207(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam4)
		{
			if ((Var1.f_2 - Local_51.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_272(iParam1))
		{
			return 0;
		}
		if (func_39(func_37()))
		{
			if (func_271(func_37()) == 4 || func_271(func_37()) == 5)
			{
				return 0;
			}
		}
		if (func_39(func_37()))
		{
			if (!func_270(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_269(Global_112915.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_112906) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_268())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_259(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_258(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_258(0, 0))
		{
			return 0;
		}
		if (Global_31652)
		{
			return 0;
		}
		if (func_272(30) && !func_258(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_39(func_37()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112915.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112915.f_2363.f_539.f_2296[iVar2];
				if (func_257(iVar4))
				{
					if (func_235(iVar2))
					{
						if (!func_63(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var3) < (210f * 210f))
							{
								if (func_37() != iVar2)
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

bool func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_236(iVar0);
}

int func_236(int iParam0)
{
	return func_237(iParam0, 1);
}

int func_237(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_257(iParam0))
	{
		return 0;
	}
	func_238(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_238(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_239(func_250(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_239(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_249(iParam0, iParam1))
	{
		iVar0 = func_248(iParam1);
		iVar1 = func_246(iParam0);
		iVar2 = (func_246(iParam0) - func_246(iParam1));
		iVar3 = (func_248(iParam0) - func_248(iParam1));
		iVar4 = (func_245(iParam0) - func_245(iParam1));
		iVar5 = (func_244(iParam0) - func_244(iParam1));
		iVar6 = (func_243(iParam0) - func_243(iParam1));
		iVar7 = (func_242(iParam0) - func_242(iParam1));
	}
	else
	{
		iVar0 = func_248(iParam0);
		iVar1 = func_246(iParam1);
		iVar2 = (func_246(iParam1) - func_246(iParam0));
		iVar3 = (func_248(iParam1) - func_248(iParam0));
		iVar4 = (func_245(iParam1) - func_245(iParam0));
		iVar5 = (func_244(iParam1) - func_244(iParam0));
		iVar6 = (func_243(iParam1) - func_243(iParam0));
		iVar7 = (func_242(iParam1) - func_242(iParam0));
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
		iVar4 = (iVar4 + func_241(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_240(to_float(iVar0 + 1), 0f, 12f));
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

float func_240(float fParam0, float fParam1, float fParam2)
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

int func_241(int iParam0, int iParam1)
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

int func_242(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_243(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_244(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_245(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_246(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_247(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_247(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_248(int iParam0)
{
	return iParam0 & 15;
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_257(iParam1) || !func_257(iParam0))
	{
		return 1;
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
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_250()
{
	var uVar0;
	
	func_256(&uVar0, unk_0xAA2844CAD88768B5());
	func_255(&uVar0, unk_0x80F97D7D29800A1A());
	func_254(&uVar0, unk_0x09FC827691DACE59());
	func_253(&uVar0, unk_0xD52BD97E61483713());
	func_252(&uVar0, unk_0x771485043FDC55DE());
	func_251(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_251(var uParam0, int iParam1)
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

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_248(*uParam0);
	iVar1 = func_246(*uParam0);
	if (iParam1 < 1 || iParam1 > func_241(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_257(int iParam0)
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
	iVar0 = func_242(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_243(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_244(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_246(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_248(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_245(iParam0);
	if (iVar5 < 1 || iVar5 > func_241(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_258(int iParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_267()) || Global_111962) || Global_31508) || func_266()) || func_59(8, -1)) || func_265()) || func_264()) || func_263()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_267()) || Global_31508) || func_266()) || func_59(8, -1)) || func_263()) || func_265()) || func_264()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_267()) || Global_111962) || Global_31508) || func_266()) || func_59(8, -1)) || func_263()) || func_265()) || func_264()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_267()) || Global_111962) || Global_31508) || func_266()) || func_59(8, -1)) || func_265()) || func_264()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_267() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_59(8, -1)) || func_262()) || func_261()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_265()) || func_264()) || func_261()) || func_260())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_267()) || Global_31508) || func_266()) || func_59(8, -1)) || func_264()) || func_263()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_267()) || func_264()) || Global_111962) || Global_31508) || func_266()) || Global_43774) || func_59(8, -1)) || func_263()) || func_261()) || func_262()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_267()) || Global_111962) || Global_31508) || func_266()) || func_59(8, -1)) || func_263()) || func_261()) || func_265()) || func_264()) || func_262())
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

var func_260()
{
	return Global_100013.f_1;
}

int func_261()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_262()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_263()
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

bool func_264()
{
	return Global_100026.f_376 > 0;
}

bool func_265()
{
	return Global_100026.f_375 > 0;
}

var func_266()
{
	return Global_1575046;
}

int func_267()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_268()
{
	func_57();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_269(int iParam0)
{
	return func_249(func_250(), iParam0);
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_37();
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

int func_271(int iParam0)
{
	if (!func_39(iParam0))
	{
		return 7;
	}
	return Global_112915.f_7688.f_919[iParam0];
}

bool func_272(int iParam0)
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
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_1, iVar0);
	}
	return bVar1;
}

int func_273()
{
	var uVar0;
	
	if (Global_31656)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_274(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

int func_275()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xCED9E32812D6C7C7(&iVar0, 2);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				unk_0xCED9E32812D6C7C7(&iVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (unk_0xE2D0C323A1AE5D85(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_276()
{
	if (bLocal_127)
	{
		if (unk_0x55A0C756C4A8220C(iLocal_73, 0))
		{
			if (unk_0x79A822779CC6508A(iLocal_73))
			{
				unk_0x64859F2B7F1E9459(iLocal_73);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_55))
	{
		unk_0xB3822DB3D538C8F3(&iLocal_55);
	}
	unk_0x828750F785B6A54D(0);
	if (iLocal_69 != 0)
	{
		unk_0x527AAB28DB255A95(iLocal_69);
	}
	unk_0x828750F785B6A54D(0);
	if (!unk_0xF68107C40359970C(iLocal_56))
	{
		unk_0x50274A7EACA3133A(iLocal_56, 0);
		unk_0xA7266A50941DBAEA(iLocal_56, 1);
		unk_0xB3822DB3D538C8F3(&iLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0x84A65E2E9CFB6A77(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_178(&uLocal_152, 0, 0);
	if (func_222())
	{
		unk_0x8576657A629C4B0A(1f);
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x059473086913178C(unk_0xE2D3D51028F0428A(), 0);
	}
	func_289(&Local_164, 0);
	func_277(-1);
	unk_0x97DF6DE511B1CC98(1);
	unk_0x7BACBB4C6A7B18B7(uLocal_63, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_277(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_222())
	{
		func_282(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112906 = unk_0x320D1840B6DAA1CC();
		func_281(30000);
		StringCopy(&cVar0, func_280(Global_112904, 1), 64);
		if (func_279(Global_112904) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112903, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_112901, (unk_0x320D1840B6DAA1CC() - Global_112902), 0);
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_112911, 0) && Global_112915.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_112911, 0);
	}
	func_278(&Global_31565);
	Global_112905 = 0;
	func_233(-1);
}

void func_278(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_42558)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_42557 = 0;
	Global_42559 = 0;
	Global_42596 = 15;
	Global_62687 = 0;
	Global_62688 = 0;
}

int func_279(int iParam0)
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

char* func_280(int iParam0, bool bParam1)
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

void func_281(int iParam0)
{
	Global_43147 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_282(int iParam0)
{
	func_283(iParam0, 0, func_288(iParam0));
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_250();
	func_286(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_285(iParam0, &uVar0);
	Var1 = { func_284(&uVar0) };
}

struct<16> func_284(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_248(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_246(*uParam0), 64);
	return Var0;
}

void func_285(int iParam0, var uParam1)
{
	Global_112915.f_24995.f_43[iParam0] = *uParam1;
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_248(*uParam0);
	iVar2 = func_245(*uParam0);
	iVar3 = func_244(*uParam0);
	iVar4 = func_243(*uParam0);
	iVar5 = func_242(*uParam0);
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
	iVar6 = func_241(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_241(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_287(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_256(uParam0, iParam1);
	func_255(uParam0, iParam2);
	func_254(uParam0, iParam3);
	func_252(uParam0, iParam5);
	func_253(uParam0, iParam4);
	func_251(uParam0, iParam6);
}

int func_288(int iParam0)
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

void func_289(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_291(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_290(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_290(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0 /*18*/], 30))
		{
			func_292(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_292(var uParam0)
{
	func_293(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_293(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xE2D0C323A1AE5D85(uParam0, 30))
	{
		switch (func_201(iParam0))
		{
			case 0:
				unk_0xF1A23B343DFEDFD0(uParam2);
				break;
			
			case 1:
				unk_0xAFC1FBF3F6AE7B9A(uParam1);
				break;
			
			case 2:
				unk_0x840DCE5F5F53D8E0(sParam1);
				break;
			
			case 3:
				unk_0x861D35D42CFD2991(sParam1);
				break;
			
			case 4:
				unk_0xA72858C94E70296C(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x10F7BFE3A88CB99B(sParam1);
				break;
			
			case 6:
				unk_0xECCDAE4E977BDA96();
				break;
			
			case 7:
				unk_0xD48AC12D763BBE7F(uParam2);
				break;
			
			case 8:
				unk_0xC511E7C272201CF7(uParam2, unk_0xE2D0C323A1AE5D85(iParam0, 26));
				break;
			
			case 9:
				unk_0xE6239CCB98B8AB66();
				break;
			
			default:
				break;
		}
	}
}

void func_294(bool bParam0)
{
	Global_112907 = { Local_53 };
	if (bParam0)
	{
		func_309(3);
	}
	func_298(1, 0);
	if (!bLocal_96)
	{
		func_297();
	}
	func_295();
	func_276();
}

void func_295()
{
	func_296();
}

int func_296()
{
	if (func_274(0))
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

int func_297()
{
	return 1;
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_279(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_213(), 0, 138, 0);
			func_303(51);
		}
		if (func_186(iParam0))
		{
			Global_112915.f_24995.f_2 = 3;
		}
		if (func_302(iParam0, iParam1) != 322)
		{
			func_299(func_302(iParam0, iParam1), Local_51.x, Local_51.f_1);
		}
		Global_112903 = iParam1;
		if (Global_112901 == 0)
		{
			if (((Global_112904 == 1 || Global_112904 == 5) || Global_112904 == 11) || Global_112904 == 25)
			{
				func_309(2);
			}
			else if ((Global_112904 == 26 || Global_112904 == 8) || Global_112904 == 17)
			{
				func_309(7);
			}
			else
			{
				func_309(1);
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
		func_13((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112915.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112915.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112915.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112915.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112915.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_112915.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_112651 = 0;
	Global_112652 = 0;
	Global_112653 = 0;
	Global_112654 = 0;
	Global_112655 = 0;
	Global_112656 = 0;
	Global_112657 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112915.f_10194.f_3853;
	Global_112915.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112915.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112915.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112651++;
					fVar1 = (fVar1 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112652++;
					fVar2 = (fVar2 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112653++;
					fVar3 = (fVar3 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112654++;
					fVar4 = (fVar4 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112655++;
					fVar5 = (fVar5 + (Global_112915.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112656++;
					fVar6 = (fVar6 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112657++;
					fVar7 = (fVar7 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112634 > 0)
	{
		if (Global_112651 == Global_112634)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112635 > 0)
	{
		if (Global_112652 == Global_112635)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112636 > 0)
	{
		if (Global_112653 == Global_112636)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112637 > 0)
	{
		if (Global_112654 == Global_112637)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112638 > 0)
	{
		if (((Global_112655 == Global_112638 || (Global_112638 * 10 / Global_112655) < 41) || Global_112655 > Global_112641) || Global_112655 == Global_112641)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_10194.f_3856, 14))
			{
				if (Global_112655 == Global_112638)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_112638, 0);
					unk_0xCED9E32812D6C7C7(&(Global_112915.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112639 > 0)
	{
		if (Global_112656 == Global_112639)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112640 > 0)
	{
		if (Global_112657 == Global_112640)
		{
			fVar7 = 5f;
		}
	}
	Global_112915.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112655 > Global_112641 || Global_112655 == Global_112641)
	{
		iVar9 = Global_112641;
	}
	else
	{
		iVar9 = Global_112655;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_112651, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_112634, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_112652, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_112635, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_112653, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_112636, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_112654, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_112637, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_112641, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_112657 + Global_112656), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_112640 + Global_112639), 1);
	Global_112658 = (Global_112651 * 100 / Global_112634);
	Global_112660 = ((Global_112653 + Global_112652) * 100 / (Global_112636 + Global_112635));
	Global_112659 = ((Global_112654 + iVar9) * 100 / (Global_112637 + Global_112641));
	Global_112661 = ((Global_112656 + Global_112657) * 100 / (Global_112639 + Global_112640));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_112915.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_112658, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_112659, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_112660, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_112915.f_10194.f_3853))
	{
		func_33(13, floor(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_301() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
				{
					func_296();
				}
			}
		}
	}
}

int func_301()
{
	return Global_31505;
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
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_306();
	}
}

void func_306()
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
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_308(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112915.f_24995.f_8[iParam0]), iParam1);
}

void func_309(int iParam0)
{
	Global_112901 = iParam0;
}

