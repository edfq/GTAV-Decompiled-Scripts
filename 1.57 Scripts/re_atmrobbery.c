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
	uLocal_46 = unk_0xB967AFE724ADAEB1();
	uLocal_47 = unk_0x7EA43B6762051EA2();
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
	if (unk_0x4210287E2833D44B(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_296(0);
		}
		else
		{
			func_278();
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
	if (func_236(Local_53, 1, iLocal_65, 1, 0))
	{
		func_233(-1);
	}
	else
	{
		unk_0x4BFE89D21F9885DC();
	}
	settimera(0);
	func_232();
	while (true)
	{
		wait(0);
		func_231();
		func_230(uLocal_58, &uLocal_64);
		func_227(&Local_164);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
		}
		if (!func_224())
		{
			if (func_223())
			{
				func_278();
			}
			if (unk_0xCC7E6EA219FD8BAC())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_197())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_196();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0x24CBDE4C2EEE441C(101, Local_53, 30000f);
						}
						if (unk_0x419E13582192CFEA(iLocal_55))
						{
						}
						if (unk_0x419E13582192CFEA(iLocal_56))
						{
						}
						if (!unk_0xECEC7528A52B4EE8(iLocal_55))
						{
							if (unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								unk_0xE668BF9946D414D8(iLocal_55, Local_53, 200f, -1, 0, 0);
								unk_0x504B26425DFF773C(iLocal_55, 1);
								wait(0);
								func_278();
							}
							if (!unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								if (unk_0x3D6C3476988DE6E1(Local_53, 2.5f))
								{
									if (iLocal_65 == 2)
									{
										if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_195())
											{
												func_186();
											}
										}
										else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0x0BABEFEA577FCFA4(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0x0BABEFEA577FCFA4(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_195())
										{
											func_186();
										}
									}
									else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_195())
									{
										func_186();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_185(&Local_107, 2);
							}
							if (!unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								unk_0xE668BF9946D414D8(iLocal_56, Local_53, 200f, -1, 0, 0);
								unk_0x504B26425DFF773C(iLocal_56, 1);
								wait(0);
							}
							func_278();
						}
						break;
				}
			}
			else
			{
				func_183("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_278();
			}
		}
		else
		{
			if (unk_0x419E13582192CFEA(iLocal_55))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_55))
				{
					if (func_182(iLocal_55, -251125078))
					{
						if (func_181(iLocal_55, Local_53, 1) >= 190f)
						{
							unk_0xCA089CD1A17D76DF(iLocal_55);
							unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
						}
					}
					else if (func_182(iLocal_55, -982327190))
					{
						unk_0xCA089CD1A17D76DF(iLocal_55);
						unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_56))
			{
			}
			if (unk_0xDFB7BFA6482FEE1E() > iLocal_66 + 3000)
			{
				func_152();
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!func_132() && !func_129())
				{
					unk_0xC8ADE97D5EA74CC8(unk_0x1146A9AE09CE2B14());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0x419E13582192CFEA(iLocal_56))
						{
							if (vdist(unk_0xD6E677FAD7521410(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x0BABEFEA577FCFA4(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x0BABEFEA577FCFA4(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0x575B7C28D81C0B4D(iLocal_59))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0xD406352E21A7E1D0(iLocal_55, unk_0x7D2B9E6A64637269(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0xC49311A2A500FF09(iLocal_55, 0))
									{
										if (timera() > 1000)
										{
											if (unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_55))
											{
												fLocal_132 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_55, 1));
												fLocal_132 = (fLocal_132 * 1.5f);
												settimera(0);
											}
											unk_0xA415F00D0E0DFBCE(iLocal_55, 17, 0);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0xC49311A2A500FF09(iLocal_55, 0))
										{
											unk_0xA415F00D0E0DFBCE(iLocal_55, 17, 1);
											unk_0xA415F00D0E0DFBCE(iLocal_55, 13, 0);
											func_121();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_55) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_55)) || unk_0xA6E8FBD68548675F(iLocal_55, unk_0x7D2B9E6A64637269(), 0))
								{
									func_122(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									settimera(0);
									fLocal_132 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_55, 1));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0xBFCE58B2B3249999(iLocal_73, 0))
								{
									if (unk_0xA6E8FBD68548675F(iLocal_73, unk_0x7D2B9E6A64637269(), 1))
									{
										unk_0xA415F00D0E0DFBCE(iLocal_55, 17, 0);
										if (unk_0x530FB711AE9CF518(iLocal_55))
										{
											unk_0x5B1F7232B835EC44(iLocal_55, iLocal_73, unk_0x7D2B9E6A64637269(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
										}
										func_122(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										settimera(0);
										fLocal_132 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_55, 1));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0x575B7C28D81C0B4D(iLocal_59))
								{
									if (unk_0xFBC6C2D539FEBE5D(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0xB592493CDC7124C3(iLocal_59, 0);
										unk_0xFA3E6ADC3E5D386E(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_121();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0x3D28F4F0775C6C2A(iLocal_55, unk_0x7D2B9E6A64637269()))
								{
									bLocal_130 = true;
								}
								func_119(iLocal_59, &uLocal_70);
							}
							if (unk_0x419E13582192CFEA(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_122(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0x5C679902079A7E80(&uLocal_61);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x1BBD0A5729AB1226(uLocal_61);
											unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
											unk_0x8D5B447F21217223(&uLocal_61);
											settimera(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_55) && !unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_55)) && !unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269())) && func_118(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_122(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												settimera(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0xC25830F0A5BDB298(iLocal_56))
								{
									func_116(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_114())
							{
								func_113();
								if (unk_0x419E13582192CFEA(iLocal_56))
								{
									Var0 = { unk_0xD6E677FAD7521410(iLocal_56, 1) };
								}
								if (!unk_0x591190E69BE43117(iLocal_55, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (timera() > 20000)
									{
										if (func_112(iLocal_55) && !unk_0x6B9E71121F5B8154(iLocal_55))
										{
											if (func_122(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												settimera(0);
											}
										}
									}
								}
							}
							else if (func_112(iLocal_56))
							{
								if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, Global_19, 0, 1, 0))
								{
									if (func_122(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0x5C679902079A7E80(&uLocal_61);
										unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 3000);
										unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
										unk_0x1BBD0A5729AB1226(uLocal_61);
										unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
										unk_0x8D5B447F21217223(&uLocal_61);
										bLocal_127 = true;
										func_278();
									}
								}
								else if (bLocal_130)
								{
									if (func_122(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0x4B770B4D8C1A469B(iLocal_56, 1193033728, 0);
										unk_0xEE90D1369E1800A2(iLocal_56, -668482597, 0, 0, 0);
										bLocal_127 = true;
										func_278();
									}
								}
								else
								{
									unk_0x4B770B4D8C1A469B(iLocal_56, 1193033728, 0);
									unk_0xEE90D1369E1800A2(iLocal_56, -668482597, 0, 0, 0);
									bLocal_127 = true;
									func_278();
								}
							}
							else
							{
								bLocal_127 = true;
								func_278();
							}
						}
						else if (func_114())
						{
							if ((unk_0xECEC7528A52B4EE8(iLocal_55) || unk_0xC6D04E4B28753F77(iLocal_55, 1)) || func_182(iLocal_55, -1899872703))
							{
								func_122(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_109();
								func_185(&Local_107, 2);
								unk_0x1AD5BCFEC31BB8D9(&iLocal_59);
							}
						}
					}
					else if (!unk_0x575B7C28D81C0B4D(uLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0x575B7C28D81C0B4D(iLocal_60))
							{
								unk_0x1AD5BCFEC31BB8D9(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
							iLocal_58 = func_105(iLocal_56, 0, 0);
							func_104(&uLocal_64);
							if (unk_0x419E13582192CFEA(iLocal_56))
							{
								fLocal_82 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_56, 0));
								unk_0xA5030CC1B9A0FDA6(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_296(0);
							}
						}
						else
						{
							func_101();
						}
					}
					else
					{
						if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
						{
							if (bLocal_95)
							{
								func_296(0);
							}
							else
							{
								func_278();
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
							if (!unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_56, 0)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_296(0);
									}
									else
									{
										unk_0x1DC2BF231DE6A016(iLocal_56, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
										func_278();
									}
								}
								else if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_56, 0)) < fLocal_82)
								{
									fLocal_82 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_56, 0));
								}
								if (unk_0xA6E8FBD68548675F(iLocal_56, unk_0x7D2B9E6A64637269(), 1))
								{
									if (bLocal_95)
									{
										func_296(0);
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
	if (!unk_0xECEC7528A52B4EE8(iLocal_56))
	{
		unk_0x1DC2BF231DE6A016(iLocal_56, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
		func_116(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x504B26425DFF773C(iLocal_56, 1);
		unk_0xBE91B077ADADE97F(iLocal_56, 0);
		unk_0x1D7A4E9E23D306D6(iLocal_56, 1);
		unk_0x0F3BD19FF11738D3(&iLocal_56);
	}
	func_101();
	if (bLocal_90)
	{
		if (unk_0x575B7C28D81C0B4D(iLocal_60))
		{
			if (unk_0xC2EBFA0B77E6B2D4(uLocal_89))
			{
				if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(uLocal_89)) > 100f)
				{
					func_278();
				}
			}
		}
		else if (bLocal_95)
		{
			func_296(0);
		}
		else if (unk_0xECEC7528A52B4EE8(iLocal_55))
		{
			func_278();
		}
	}
	if (unk_0x575B7C28D81C0B4D(iLocal_59))
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_55))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_59);
		}
		else if (!func_114())
		{
			func_278();
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
	
	if (!unk_0xECEC7528A52B4EE8(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_116(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0x0BABEFEA577FCFA4(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0x0BABEFEA577FCFA4(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_100())
				{
					if (func_97(2))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					if (!func_129())
					{
						if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
						{
							if (func_96(1, 0, 1))
							{
								if (!unk_0x234B68AC2E35ED5A(Global_7668, 11) || func_95())
								{
									if (!unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
									{
										unk_0x66AE54CE92457FEE(1);
										if (func_94())
										{
											func_93();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x795434E153F90E41(iLocal_102, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_57 = unk_0x795434E153F90E41(iLocal_101, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1, 1, 0);
										}
										if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
										{
											unk_0x0F1058706D5A58B4(iLocal_57, unk_0x7D2B9E6A64637269(), unk_0xA79DFB802C09F5F5(unk_0x7D2B9E6A64637269(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0x4603196EEEA2355C(iLocal_57, 0, 0);
										func_85(1, 1, 1, 0, 0, 0, 0);
										if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
										{
											if (unk_0x419E13582192CFEA(iLocal_57))
											{
												while ((!func_83(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), uLocal_84, 1, 1056964608, 0, 1, 0) || func_94()) || !unk_0x1861D54BAC877B58(iLocal_57))
												{
													if (!func_83(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), uLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_94())
													{
													}
													if (!unk_0x1861D54BAC877B58(iLocal_57))
													{
													}
													wait(0);
												}
												if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
												{
													unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
												}
											}
										}
										else if (unk_0x419E13582192CFEA(iLocal_57))
										{
											while (func_94() || !unk_0x1861D54BAC877B58(iLocal_57))
											{
												wait(0);
											}
										}
										unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
										if (!unk_0xECEC7528A52B4EE8(iLocal_56))
										{
											unk_0xF5143FB7B9EC876D(iLocal_56, 0);
										}
										unk_0xAE8E6284A6D09C87(0);
										unk_0x3E5BA73CEA34D768(iLocal_69);
										unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
										func_81();
										func_75(0);
										wait(0);
										if (func_112(iLocal_56))
										{
											if (unk_0x9B9082138A642C14(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x5590FBCD51709DFE(sLocal_94);
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
					func_73(unk_0xD6E677FAD7521410(iLocal_56, 1), &fLocal_83, &uLocal_84);
					if (!func_100())
					{
						if (!func_182(iLocal_56, 1227113341) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
						{
							unk_0xCA089CD1A17D76DF(iLocal_56);
							unk_0xF0ED372419FE0E70(iLocal_56, unk_0x7D2B9E6A64637269(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_182(iLocal_56, 1227113341))
					{
						unk_0xCA089CD1A17D76DF(iLocal_56);
						unk_0x8D5B447F21217223(&uLocal_61);
						unk_0x5C679902079A7E80(&uLocal_61);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
						unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_61);
						unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
						unk_0x8D5B447F21217223(&uLocal_61);
						unk_0xE37EB80DFB0D31FB(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_100())
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
					{
						unk_0xCA089CD1A17D76DF(iLocal_56);
						unk_0x8D5B447F21217223(&uLocal_61);
						unk_0x5C679902079A7E80(&uLocal_61);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
						unk_0xF0ED372419FE0E70(0, unk_0x7D2B9E6A64637269(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x1BBD0A5729AB1226(uLocal_61);
						unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
						unk_0x8D5B447F21217223(&uLocal_61);
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
					if (((!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) && !unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) && !unk_0x28E91B800C85243D(unk_0x7D2B9E6A64637269())) && !unk_0x674642CC58396437(unk_0x7D2B9E6A64637269()))
					{
						if (bLocal_80)
						{
							if (unk_0x0BABEFEA577FCFA4(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_78 = { -710.1279f, -821.3084f, 22.6169f };
								Local_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								Var7 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
								func_70(iLocal_56, &Local_78, &Local_79, cLocal_142, sLocal_144);
								if ((Local_78.f_2 - Var7.f_2) > 20f)
								{
									Local_78 = { Var7 };
								}
								Local_78.f_2 = (Local_78.f_2 + 2f);
								unk_0x7956E831D8C0C17C(Local_78, &(Local_78.f_2), 0, 0);
								if (Local_78.f_2 == 0f)
								{
									Local_78 = { Local_138 };
									Local_79.f_2 = fLocal_139;
								}
								if (unk_0x0BABEFEA577FCFA4(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
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
								else if (unk_0x0BABEFEA577FCFA4(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x09C4C80EA1D5B2F7(Local_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_78 = { -814.0593f, -1082.483f, 10.0671f };
									Local_79.f_2 = 275.5752f;
								}
								else if (unk_0x0BABEFEA577FCFA4(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x09C4C80EA1D5B2F7(Local_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_78 = { -375.0627f, 6030.533f, 30.5313f };
									Local_79.f_2 = 222.9049f;
								}
								else if (unk_0x0BABEFEA577FCFA4(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x09C4C80EA1D5B2F7(Local_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_78 = { -379.7835f, 6029.472f, 30.5014f };
									Local_79.f_2 = 213.2611f;
								}
								else if (unk_0x0BABEFEA577FCFA4(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
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
								else if (unk_0x0BABEFEA577FCFA4(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 244.444f && Local_79.f_2 < 326.2103f)
										{
											Local_79.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0x0BABEFEA577FCFA4(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var4 = { unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
								Var5 = { Var4 - Local_78 };
								Var5.f_2 = 0f;
								fVar10 = vmag(Var5);
								unk_0x7956E831D8C0C17C(Var4, &(Var4.f_2), 0, 0);
								fVar9 = (Local_78.f_2 - Var4.f_2);
								Local_79.x = unk_0xF0AE30F012D1FD8C(fVar9, fVar10);
								if (Local_79.x > 20f || Local_79.x < -330f)
								{
									Local_78 = { Local_138 };
									Local_79.x = 0f;
									Local_79.f_2 = fLocal_139;
									Var4 = { unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
									Var5 = { Var4 - Local_78 };
									Var5.f_2 = 0f;
									fVar10 = vmag(Var5);
									unk_0x7956E831D8C0C17C(Var4, &(Var4.f_2), 0, 0);
									fVar9 = (Local_78.f_2 - Var4.f_2);
								}
							}
							if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x09C4C80EA1D5B2F7(Local_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
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
							if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 183.6065f, 6636.653f, 30.6299f) < vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 172.2291f, 6631.007f, 30.7398f))
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
							Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
							if (!unk_0xECEC7528A52B4EE8(iLocal_56))
							{
								Var2 = { unk_0xD6E677FAD7521410(iLocal_56, 1) };
							}
							Var3 = { Var1 - Var2 };
							Local_78 = { Var1 };
							Local_78 = { Local_78.x, Local_78.f_1, (Local_78.f_2 - 1f) };
							Local_79 = { 0f, 0f, unk_0x832AD84AA258AE80(Var3.x, Var3.f_1) };
						}
						if (unk_0x0BABEFEA577FCFA4(Local_78, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_78 = { -521.475f, -1210.47f, 17.1848f };
							Local_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0xBFCE58B2B3249999(iLocal_73, 0))
						{
							unk_0x795957CD3A0042C8(&iLocal_73);
						}
						if (unk_0xBFCE58B2B3249999(unk_0x0BF0F8F3AD0993F6(), 0))
						{
							if (!unk_0xBFCE58B2B3249999(iVar0, 0))
							{
								iVar0 = unk_0x0BF0F8F3AD0993F6();
								unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iVar0), &Local_136, &Local_137);
								if (unk_0x591190E69BE43117(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0) || unk_0x591190E69BE43117(iVar0, unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0xA612B061C0F9114D(iVar0, 0, 1, 1, 1);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
									else if (unk_0x0BABEFEA577FCFA4(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
									else if (unk_0x0BABEFEA577FCFA4(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
									else if (unk_0x0BABEFEA577FCFA4(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
									else if ((unk_0x0BABEFEA577FCFA4(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x8954E9D0A9F6F8CF(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
									else
									{
										Var6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0xA8D713A937F31250(iVar0);
										Local_75 = { func_66(Local_78, unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2)) };
										if (func_65(0f, 0f, 0f, Local_75, 0))
										{
											Local_75 = { unk_0xD6E677FAD7521410(iVar0, 1) };
										}
										if (unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(iVar0)))
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
											if (func_68(iVar0))
											{
												unk_0x78CDDD1E6367978D(iVar0, Local_75, 1, 0, 0, 1);
												unk_0xCD37A28258D70638(iVar0, fLocal_77);
												unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
											}
										}
										else if (unk_0x419E13582192CFEA(iVar0))
										{
											if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar0, 0))
											{
												unk_0x5420D0D520CF44D0(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_68(iVar0))
						{
							unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iVar0), &Local_136, &Local_137);
							if (unk_0x591190E69BE43117(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0) || unk_0x591190E69BE43117(iVar0, unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0x78CDDD1E6367978D(iVar0, Local_140, 1, 0, 0, 1);
								unk_0xCD37A28258D70638(iVar0, fLocal_141);
								unk_0x47D0DDD8833C5E5F(iVar0, 1084227584);
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_57))
						{
							unk_0x4603196EEEA2355C(iLocal_57, 1, 0);
						}
						unk_0x016587321D096AED(Local_78 - Vector(10f, 10f, 10f), Local_78 + Vector(10f, 10f, 10f), 0);
						unk_0xAA464864BA733E26(Local_78, 20f, 0);
						unk_0x91F94D2287684BDB(Local_78, 10f, 0);
						unk_0x6AF7EE4DD9F8B944(Local_78, (Local_137.f_1 + 1f), 1, 0, 0, 0);
						unk_0x8BE64A4794BF87FA(Local_78, 25f);
						unk_0x4E06EA55E2B40658(unk_0x7D2B9E6A64637269(), 1);
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
						uLocal_68 = unk_0xD955F1CC0BCABC78(Local_78, Local_79, 2);
						unk_0x1C6FA6A93BF99EA4(uLocal_68, 0);
						uLocal_97 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xEF20E9A7B745D17A(uLocal_97, 15f);
						unk_0x47554D1FFAB68B45(uLocal_97, uLocal_68, sLocal_145, cLocal_142);
						unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						unk_0x880C7B361C9651EE(unk_0x7D2B9E6A64637269());
						unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
						if (!unk_0xECEC7528A52B4EE8(iLocal_56))
						{
							unk_0x16D66F11FE644901(iLocal_56);
							unk_0xAD844C8843FC405C(iLocal_56, uLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x6FA8221C9D2ECB46(uLocal_97, 1);
						unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_53(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						settimera(0);
						unk_0xAE8E6284A6D09C87(0);
						func_52(joaat("rc_wallets_returned"), 1);
						unk_0xD885BEFA31A18D47(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
						{
						}
						if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
						{
						}
						if (unk_0x28E91B800C85243D(unk_0x7D2B9E6A64637269()))
						{
						}
						if (unk_0x674642CC58396437(unk_0x7D2B9E6A64637269()))
						{
						}
					}
					unk_0xAF98B1BA240CE3DB();
					break;
				
				case 1:
					if ((unk_0xEEC203A73BC92E7E(uLocal_68) && unk_0x0BC8768247440B3A(uLocal_68) == 1f) || func_49())
					{
						unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
						unk_0xCBB53772CFBF62B8(unk_0x1146A9AE09CE2B14(), 0, 0);
						if (!unk_0xECEC7528A52B4EE8(iLocal_56))
						{
							unk_0xEC7D41CF790FC6FB(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0xBE91B077ADADE97F(iLocal_56, 0);
							unk_0xC63C967EC1D348E4(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0x8B6A925F148E0E94())
						{
							unk_0x16D66F11FE644901(iLocal_56);
							Var4 = { unk_0xBF480D363C51CDF8(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0x7956E831D8C0C17C(Var4, &(Var4.f_2), 0, 0);
							unk_0x78CDDD1E6367978D(iLocal_56, Var4, 1, 0, 0, 1);
							Var4 = { unk_0x04F690ADA8C71424(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0xCD37A28258D70638(iLocal_56, Var4.f_2);
						}
						Var4 = { unk_0x04F690ADA8C71424(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
						if (func_69(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_48(unk_0x7D2B9E6A64637269(), 215.68f, 60f))
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x45B1B4E55BF15523(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
							else if (func_48(unk_0x7D2B9E6A64637269(), 122.0371f, 60f))
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x45B1B4E55BF15523(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
							else
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
						}
						else if (unk_0x0BABEFEA577FCFA4(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_48(unk_0x7D2B9E6A64637269(), 200.8887f, 60f))
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x45B1B4E55BF15523(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
							else if (func_48(unk_0x7D2B9E6A64637269(), 347.8599f, 60f))
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x45B1B4E55BF15523(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
							else
							{
								unk_0x5C679902079A7E80(&uLocal_61);
								unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
								unk_0x1BBD0A5729AB1226(uLocal_61);
								unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
								unk_0x8D5B447F21217223(&uLocal_61);
							}
						}
						else
						{
							unk_0x5C679902079A7E80(&uLocal_61);
							unk_0x45B1B4E55BF15523(0, unk_0x9E695CE384C77EF0(iLocal_56, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0x4B770B4D8C1A469B(0, unk_0xA8D713A937F31250(iLocal_56), 1);
							unk_0x1BBD0A5729AB1226(uLocal_61);
							unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
							unk_0x8D5B447F21217223(&uLocal_61);
						}
						unk_0xEE90D1369E1800A2(iLocal_56, -668482597, 1, 0, 0);
						unk_0xF5143FB7B9EC876D(iLocal_56, 1);
						unk_0x504B26425DFF773C(iLocal_56, 1);
						func_47(&iLocal_73);
						settimerb(0);
						unk_0xD20D31BC4E3A72D3(0);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
							if (!func_46())
							{
								unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
							}
						}
						if (unk_0x419E13582192CFEA(iLocal_57))
						{
							unk_0x04F4D55F2C0C756D(&iLocal_57);
						}
						if (!unk_0xECEC7528A52B4EE8(iLocal_56))
						{
							unk_0xEC7D41CF790FC6FB(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x4E06EA55E2B40658(unk_0x7D2B9E6A64637269(), 0);
						unk_0xDF23DCD7A3E1B7A5(0f);
						unk_0x6FA8221C9D2ECB46(uLocal_97, 0);
						func_45();
						unk_0xFE1DEC9C5734D0C0(uLocal_97, 0);
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
						if (unk_0x8B6A925F148E0E94())
						{
							unk_0x6E1E3A5B1F9AB95B(500);
							while (unk_0x07BE48DF95787FCB())
							{
								wait(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						wait(0);
						unk_0xE5AC37B329B31F82(0, 0, 3, 0);
						func_85(0, 1, 1, 0, 0, 0, 0);
						func_3(func_39(), 1, iVar14);
						func_296(1);
					}
					else
					{
						unk_0xAF98B1BA240CE3DB();
						if (unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), -3856156))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_56) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0xDA872572A987B2AD(iLocal_57, unk_0x7D2B9E6A64637269()))
								{
									unk_0x3211C35423263392(iLocal_57, 0, 1);
									if (unk_0x9B9082138A642C14(iLocal_56))
									{
										unk_0x0F1058706D5A58B4(iLocal_57, iLocal_56, unk_0xA79DFB802C09F5F5(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x0F1058706D5A58B4(iLocal_57, iLocal_56, unk_0xA79DFB802C09F5F5(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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
	if (func_38(iParam0) == 3)
	{
		return 0;
	}
	if (func_38(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_38(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_37();
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
					func_36(99, 1);
					func_52(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_52(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_52(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
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
							func_52(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_52(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_52(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_52(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_52(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_52(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_52(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_52(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_52(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_52(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_52(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_52(joaat("sp2_money_spent_property"), iParam3);
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
									func_52(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_52(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_52(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_52(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_52(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_52(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_52(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_52(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_52(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_52(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_52(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_36(95, iParam3);
					break;
				
				case 1:
					func_36(97, iParam3);
					break;
				
				case 2:
					func_36(96, iParam3);
					break;
			}
			func_36(98, iParam3);
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
					func_52(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_52(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_52(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_42009 == 15)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
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
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_9() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_9() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_8(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
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
		
		default:
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
	iVar0 = Global_2555716[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
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

int func_12()
{
	return Global_1312763;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_16(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_16(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_16(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_16(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_16(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_16(8276, -1, 0);
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
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_9() /*5557*/].f_675.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4272779))
	{
		if (func_30(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4272779, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4272778 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
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

void func_37()
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

int func_38(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_39()
{
	func_40();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_40()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_43(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_42(unk_0x7D2B9E6A64637269());
			if (func_41(iVar0) && (!func_34(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_41(Global_112293.f_2361.f_539.f_4321))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_45()
{
	var uVar0;
	
	uVar0 = unk_0x1CA878DB277C6DF0(26379945, unk_0x9E695CE384C77EF0(unk_0x7D2B9E6A64637269(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269()), 1115815936, 1, 2);
	unk_0x6FA8221C9D2ECB46(uVar0, 1);
}

int func_46()
{
	if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0)
{
	if (unk_0x419E13582192CFEA(*iParam0))
	{
		unk_0xE50EB54E0F21BED0(*iParam0, 0);
		if (unk_0xEE1D92A39CF8E1E6(*iParam0) && unk_0x9984C023D4E57C2E(*iParam0, 1))
		{
			unk_0x795957CD3A0042C8(iParam0);
		}
	}
}

int func_48(int iParam0, float fParam1, float fParam2)
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
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xA8D713A937F31250(iParam0) < fVar0 && unk_0xA8D713A937F31250(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0xA8D713A937F31250(iParam0) < fVar0 || unk_0xA8D713A937F31250(iParam0) > fVar1)
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

int func_49()
{
	if (func_50(1000))
	{
		unk_0x8BA9BCDD56AA7115(500);
		while (unk_0x4E38E404B98F3D9A())
		{
			unk_0xAF98B1BA240CE3DB();
			wait(0);
		}
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
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
			if (func_51())
			{
				Global_27 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
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

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

int func_53(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_64(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_63(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_54(&uVar0, &uVar1, iParam6, 0);
}

int func_54(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam2 > Global_21127)
			{
				if (bParam3 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_60();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22121 = Global_22122;
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_20744.f_370 = Global_22114;
		Global_21121 = Global_21122;
		Global_21123 = Global_21124;
		if (Global_21383 == 0)
		{
			Global_21279[0 /*6*/] = { Global_21305[0 /*6*/] };
			Global_21279[1 /*6*/] = { Global_21305[1 /*6*/] };
			Global_21331[0 /*6*/] = { Global_21357[0 /*6*/] };
			Global_21331[1 /*6*/] = { Global_21357[1 /*6*/] };
			Global_21292[0 /*6*/] = { Global_21318[0 /*6*/] };
			Global_21292[1 /*6*/] = { Global_21318[1 /*6*/] };
			Global_21344[0 /*6*/] = { Global_21370[0 /*6*/] };
			Global_21344[1 /*6*/] = { Global_21370[1 /*6*/] };
		}
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam3)
			{
				func_59();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_58())
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
					if (Global_21383 == 0)
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
			}
			if (func_57())
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
			}
			func_56();
			Global_21135 = bParam3;
		}
		Global_21127 = iParam2;
		if (Global_21121 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21121)
			{
				StringCopy(&(Global_20744.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20744.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19991 = 0;
		func_55();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21127 || iParam2 == Global_21127)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_62();
	}
	return 0;
}

void func_55()
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

void func_56()
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

int func_57()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()
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

void func_59()
{
	if (func_34(14))
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
		Global_19798 = func_39();
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

void func_60()
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

bool func_61(int iParam0, int iParam1)
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

void func_63(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21122 = iParam0;
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
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

void func_64(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_65(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_66(struct<3> Param0, struct<3> Param1)
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
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
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
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
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
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
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
						Var10 = { func_67(Var1, 0f, Var4) };
						Var11 = { func_67(Var1, 0f, Var3) };
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

Vector3 func_67(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)
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

int func_68(int iParam0)
{
	if (func_112(iParam0))
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

int func_69(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_70(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
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
	uParam2->f_2 = func_72(iParam0, unk_0x7D2B9E6A64637269(), 1);
	fVar3 = func_72(iParam0, unk_0x7D2B9E6A64637269(), 1);
	fVar4 = func_72(iParam0, unk_0x7D2B9E6A64637269(), 1);
	Var10 = { unk_0xD6E677FAD7521410(iParam0, 0) - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
	if (unk_0x0EC2B29D4172D225(sParam3))
	{
		Var9 = { unk_0xBF480D363C51CDF8(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
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
					uParam2->f_2 = func_71(unk_0xD6E677FAD7521410(iParam0, 0), *uParam1, 1);
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
							uParam2->f_2 = func_71(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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

float func_71(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4)
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

float func_72(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	return func_71(Var0, Var1, iParam2);
}

void func_73(struct<3> Param0, float fParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - Param0 };
		fVar2 = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
		if (func_74(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		fVar2 = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
		if (func_74(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 10f)
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

int func_74(int iParam0, float fParam1, float fParam2)
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

void func_75(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_79(0))
		{
			func_76(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_76(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_78())
		{
			func_77(1, 1);
		}
		else
		{
			func_77(0, 0);
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
	if (!func_57())
	{
		Global_19798.f_1 = 3;
	}
}

void func_77(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
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

bool func_78()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_79(int iParam0)
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

bool func_80()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_81()
{
	Global_19991 = 0;
	func_82();
}

void func_82()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

int func_83(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_84(iParam0);
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

void func_84(int iParam0)
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

void func_85(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_92(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_57())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_91(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_92(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_91(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_89(unk_0x1146A9AE09CE2B14())) && !func_87(unk_0x1146A9AE09CE2B14(), 0)) && !func_86()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_89(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_86()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_88(-1, 0) == 8;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_89(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return 1;
	}
	if (func_90())
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

bool func_90()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_91(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_92(int iParam0)
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

void func_93()
{
	Global_19991 = 0;
	func_62();
}

int func_94()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
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

bool func_97(int iParam0)
{
	return func_98(func_99(iParam0));
}

bool func_98(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

char* func_99(int iParam0)
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

int func_100()
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_109();
		}
		else
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_55))
			{
				if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_55) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_55))
				{
					if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_119(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0x21C88062F3ECEF83(uLocal_89))
				{
					func_52(joaat("rc_wallets_recovered"), 1);
					unk_0xD885BEFA31A18D47(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x8543AEC08F877EE9(0, 200, 250);
					func_102(2);
					bLocal_95 = true;
				}
				else if (unk_0x575B7C28D81C0B4D(iLocal_60))
				{
					if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(uLocal_89)) > 150f)
					{
						if (unk_0xECEC7528A52B4EE8(iLocal_56))
						{
							func_278();
						}
						else if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_56, 1)) > 100f)
						{
							func_278();
						}
					}
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112293.f_24993.f_2 < 3)
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_103(func_99(iParam0), -1);
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
					func_103(func_99(iParam0), -1);
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
					func_103(func_99(iParam0), -1);
					Global_112293.f_24993.f_4++;
					unk_0x191DDA30577F440A(&Global_112289, 2);
				}
			}
			break;
	}
}

void func_103(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_104(var uParam0)
{
	*uParam0 = -99;
}

int func_105(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_106(iParam0, bParam1, 145);
}

int func_106(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_107(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(iVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_108(unk_0x02BFF15CAA701972(), 1f, 1f));
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
		unk_0xDD205B87CDFD0C1B(iVar0, func_108(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(iVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(iVar0, func_108(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0x191DDA30577F440A(&uVar1, 3);
		unk_0x191DDA30577F440A(&uVar1, 4);
		unk_0x191DDA30577F440A(&uVar1, 1);
		uLocal_89 = unk_0x3A63BEB7A1E25FB1(iVar0, unk_0x4A94160BCA2AA1B0(iLocal_55, 1067030938, 1069547520), uVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_110(uLocal_89);
		func_122(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0x575B7C28D81C0B4D(iLocal_59))
		{
			unk_0x1AD5BCFEC31BB8D9(&iLocal_59);
		}
		if (func_112(iLocal_56))
		{
			unk_0xCA089CD1A17D76DF(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_182(iLocal_56, 242628503) && !unk_0xECEC7528A52B4EE8(iLocal_56))
			{
				unk_0x5C679902079A7E80(&uLocal_61);
				if (!unk_0x591190E69BE43117(iLocal_56, Local_138, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0x28A5BAF912B4E14D(0, Local_138, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
				unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_61);
				unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
				unk_0x8D5B447F21217223(&uLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_56))
				{
					if (unk_0x698F51FB33ADAF7B(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0x4598B7969D5B0A28(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0xC2EBFA0B77E6B2D4(uLocal_89))
							{
								func_122(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0xDB5C5980B9AE89B9(uLocal_89);
								unk_0xEC7D41CF790FC6FB(iLocal_56, iLocal_133);
								unk_0xBE91B077ADADE97F(iLocal_56, 0);
								unk_0x0F3BD19FF11738D3(&iLocal_56);
								func_296(1);
							}
						}
					}
					else if (unk_0x4E8DA737B686529A(iLocal_56, 242628503) == 7)
					{
						unk_0xCA089CD1A17D76DF(iLocal_56);
						unk_0x5C679902079A7E80(&uLocal_61);
						unk_0x4261814A9A26E86F(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 3000, 2048, 2);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 3000);
						unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
						unk_0x1BBD0A5729AB1226(uLocal_61);
						unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
						unk_0x8D5B447F21217223(&uLocal_61);
						unk_0x504B26425DFF773C(iLocal_56, 1);
					}
				}
			}
		}
		else if (!unk_0xECEC7528A52B4EE8(iLocal_56))
		{
			if (unk_0xC2EBFA0B77E6B2D4(uLocal_89))
			{
				if (unk_0x591190E69BE43117(iLocal_56, unk_0xCA4950AD4AC0DAD8(uLocal_89), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0xCA089CD1A17D76DF(iLocal_56);
					unk_0x5C679902079A7E80(&uLocal_61);
					unk_0x45B1B4E55BF15523(0, unk_0xCA4950AD4AC0DAD8(uLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0xFBF1F1BE9D437D22(0, unk_0xCA4950AD4AC0DAD8(uLocal_89), 0);
					unk_0x4261814A9A26E86F(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), 3000, 2048, 2);
					unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 3000);
					unk_0x4B770B4D8C1A469B(0, 1193033728, 0);
					unk_0x1BBD0A5729AB1226(uLocal_61);
					unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
					unk_0x8D5B447F21217223(&uLocal_61);
					unk_0x504B26425DFF773C(iLocal_56, 1);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_110(var uParam0)
{
	return func_111(uParam0);
}

int func_111(var uParam0)
{
	var uVar0;
	
	if (!unk_0xC2EBFA0B77E6B2D4(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x214E857DC196E5F9(uParam0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_108(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	return iVar0;
}

int func_112(int iParam0)
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

void func_113()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xA6E8FBD68548675F(iLocal_55, unk_0x7D2B9E6A64637269(), 1))
			{
				unk_0xA5030CC1B9A0FDA6(iLocal_55);
				bVar0 = true;
			}
			if (unk_0xBFCE58B2B3249999(iLocal_73, 0) && unk_0xF41EB7643E61A928(iLocal_55, iLocal_73, 0))
			{
				if (unk_0x966155156C573F75(iLocal_73))
				{
					if (unk_0x14048B1C509BDE11(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xBFCE58B2B3249999(iLocal_73, 0) || !func_182(iLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x11DBA82F76F3C4C2(iLocal_55))
			{
				if (unk_0x4E8DA737B686529A(iLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xF41EB7643E61A928(iLocal_55, iLocal_73, 0))
					{
						if (unk_0x4E8DA737B686529A(iLocal_55, 242628503) != 1 && unk_0x4E8DA737B686529A(iLocal_55, 242628503) != 0)
						{
							unk_0x5C679902079A7E80(&uLocal_62);
							unk_0xCC5ED49CF9C9215F(0, 0, 0);
							unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
							unk_0x1BBD0A5729AB1226(uLocal_62);
							unk_0x8A1AC8EBC73850C8(iLocal_55, uLocal_62);
							unk_0x8D5B447F21217223(&uLocal_62);
						}
					}
					else if (unk_0x4E8DA737B686529A(iLocal_55, 242628503) != 1 && unk_0x4E8DA737B686529A(iLocal_55, 242628503) != 0)
					{
						unk_0x5C679902079A7E80(&uLocal_62);
						unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_62);
						unk_0x8A1AC8EBC73850C8(iLocal_55, uLocal_62);
						unk_0x8D5B447F21217223(&uLocal_62);
					}
					iVar1 = unk_0x9212422878EDEF69(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0xCA089CD1A17D76DF(iLocal_55);
						if (func_112(unk_0x7D2B9E6A64637269()))
						{
							unk_0x9DA29013F33252A6(iLocal_55, unk_0x7D2B9E6A64637269(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_114()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_55))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0x98E18969B1D0C4AB(iLocal_55))
		{
			func_115(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_185(&Local_107, 2);
			}
			unk_0xC606AE2A3209945E(&iLocal_55);
			if (unk_0xBFCE58B2B3249999(iLocal_73, 0))
			{
				if (unk_0x98E18969B1D0C4AB(iLocal_73))
				{
					unk_0x5420D0D520CF44D0(&iLocal_73);
				}
			}
		}
	}
	else if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), unk_0xD6E677FAD7521410(iLocal_55, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_116(int iParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(iParam0, sParam1, func_117(iParam2), 1);
}

int func_117(int iParam0)
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

float func_118(int iParam0, int iParam1, int iParam2)
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

void func_119(int iParam0, var uParam1)
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
		if (!unk_0xE8FFE38E2BA32BD6() && func_120(0))
		{
			func_102(1);
		}
	}
}

bool func_120(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112289, iParam0);
}

void func_121()
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xBFCE58B2B3249999(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0x2C10A11A684CFE96(iLocal_55, iLocal_73) || unk_0x4E8DA737B686529A(iLocal_55, -1273030092) == 1)
					{
						unk_0xA0F8D741F5D8E7E4(iLocal_55, iLocal_73, Local_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x966155156C573F75(iLocal_73))
					{
						unk_0xBA1F9FEE8D489B84(iLocal_73, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0xA0F8D741F5D8E7E4(iLocal_55, iLocal_73, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0x5C679902079A7E80(&uLocal_61);
				unk_0x45B1B4E55BF15523(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x45B1B4E55BF15523(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_61);
				unk_0x8A1AC8EBC73850C8(iLocal_55, uLocal_61);
				unk_0x8D5B447F21217223(&uLocal_61);
			}
			else
			{
				unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0x0BABEFEA577FCFA4(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0xE668BF9946D414D8(iLocal_55, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 300f, -1, 0, 0);
				unk_0x8D5B447F21217223(&uLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0xE668BF9946D414D8(iLocal_55, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_55))
	{
		unk_0x504B26425DFF773C(iLocal_55, 1);
	}
}

bool func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_64(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
		if (func_61(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_60();
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
				func_59();
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
				if (func_58())
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
			if (func_57())
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
			func_56();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_55();
		func_124();
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

void func_124()
{
	if (!func_125())
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

int func_125()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_128())
	{
		return 0;
	}
	if (func_126(unk_0x1146A9AE09CE2B14()))
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

bool func_126(int iParam0)
{
	return func_127(iParam0, 20);
}

bool func_127(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_128()
{
	return -1;
}

bool func_129()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (!unk_0xECEC7528A52B4EE8(iLocal_56))
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_56))
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
		if (unk_0x3E72EB0926A107F9(unk_0x885F3A431ECE75E3(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x885F3A431ECE75E3(iLocal_56, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + unk_0x885F3A431ECE75E3(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0x93B9F446C9E48692(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x93B9F446C9E48692(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0x93B9F446C9E48692(Var2, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x80F28BAD1826C85F(unk_0x885F3A431ECE75E3(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x16B4C536089C3CAD(-1, unk_0x885F3A431ECE75E3(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_131())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0x4E8DA737B686529A(iLocal_56, 474215631) != 1)
			{
				if (func_130(iLocal_56))
				{
					unk_0x37DE87D06B5C195D(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_130(int iParam0)
{
	if (func_112(iParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (func_112(iLocal_55))
	{
		if (func_118(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_132()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x419E13582192CFEA(iLocal_56))
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xA6E8FBD68548675F(iLocal_56, unk_0x7D2B9E6A64637269(), 1) && unk_0x6B9E71121F5B8154(iLocal_56))
			{
				bVar0 = true;
				unk_0xA5030CC1B9A0FDA6(iLocal_56);
			}
			if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iLocal_56, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_133(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_131())
		{
			bVar0 = false;
			if (unk_0x4E8DA737B686529A(iLocal_56, 474215631) != 1)
			{
				if (func_130(iLocal_56))
				{
					unk_0x37DE87D06B5C195D(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0xECEC7528A52B4EE8(iLocal_55))
		{
			if (unk_0x4E8DA737B686529A(iLocal_55, 1805844857) == 7)
			{
				unk_0xA415F00D0E0DFBCE(iLocal_55, 17, 1);
				unk_0xA415F00D0E0DFBCE(iLocal_55, 13, 0);
				unk_0x1DC2BF231DE6A016(iLocal_55, unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_133(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_112(unk_0x7D2B9E6A64637269()) && func_112(iParam0))
	{
		if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
		{
			return 1;
		}
		if (func_147(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_146(unk_0x7D2B9E6A64637269(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_134(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_112(unk_0x7D2B9E6A64637269()) && func_112(iParam0))
	{
		if (func_145(iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
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
				if (func_135(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_135(int iParam0, float fParam1)
{
	return func_136(iParam0, unk_0x7D2B9E6A64637269(), fParam1, 1, 250, 7);
}

bool func_136(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_144(iParam0, iParam1);
	if (!func_112(iParam0) || !func_112(iParam1))
	{
		if (iVar2 != -1)
		{
			func_143(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_140(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_139();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_137(&(Local_49[iVar2 /*4*/]), Var1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xDFB7BFA6482FEE1E() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_137(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_112(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_138(iParam2, iParam5) };
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
		func_112(iVar3);
		if (unk_0xFAA5505029C4B5A6(iVar3) == iParam2)
		{
			if (bLocal_50)
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
		func_112(iVar3);
		if (unk_0xC49311A2A500FF09(iParam2, 0))
		{
			if (unk_0x611CD1312FD3CA66(iVar3) == unk_0x75B58B38E45C6F9A(iParam2, 0))
			{
				if (bLocal_50)
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

Vector3 func_138(int iParam0, int iParam1)
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

int func_139()
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

int func_140(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_142(unk_0xD6E677FAD7521410(iParam1, 1) - unk_0xD6E677FAD7521410(iParam0, 1)) };
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
		Var1 = { func_142(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_141(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_142(struct<3> Param0)
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

void func_143(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_144(int iParam0, int iParam1)
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

int func_145(int iParam0)
{
	if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_146(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x557C9CA8FCC667DF(iParam0) };
	Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) - unk_0xD6E677FAD7521410(iParam0, 1) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_112(unk_0x7D2B9E6A64637269()) && func_112(iParam0))
	{
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_151(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_148(iParam0, fVar1, bParam3, bParam4))
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
				if (func_151(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_148(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
				if (func_149(iParam0, fParam1))
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
			if (func_149(iParam0, fParam1))
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

int func_149(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_150(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_142(Param1 - unk_0xD6E677FAD7521410(iParam0, 1)) };
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
		Var1 = { func_142(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_141(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_151(int iParam0, bool bParam1, float fParam2, float fParam3)
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

void func_152()
{
	if (bLocal_90 || unk_0xE50EB54E0F21BED0(iLocal_55, 0))
	{
		func_180(&uLocal_152, 0, 0);
	}
	else
	{
		func_153(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_154(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_154(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_155(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_155(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		func_180(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_156(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_156(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_98(iVar0))
	{
		func_179();
	}
	if (func_178(iParam1) && unk_0x1F9D47D45E125FA6(iParam1))
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
			if (func_173(uParam0, bParam5, bParam7, 0))
			{
				func_170(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_160(iVar0))
				{
					if ((unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0)) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if ((iVar1 && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
						{
							if (!func_98(iVar0))
							{
								func_103(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
								{
									func_159(1);
								}
							}
						}
					}
				}
			}
			else if (func_160(iVar0))
			{
				if (unk_0x4030103C8B148AFC(uParam0->f_3) && !unk_0x4030103C8B148AFC(iVar0))
				{
					if (((unk_0xB4E725A8915BDF60(iParam1) && iVar1) && !unk_0xE8FFE38E2BA32BD6()) && uParam6)
					{
						if (!func_98(iVar0))
						{
							func_103(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xDA654EB115F9FF7D("CMN_HINT", iVar0))
							{
								func_159(1);
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
				if (func_98(sParam3))
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
						func_180(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(6) == 3 || unk_0x5F95E51ABC3FC59A(6) == 4)
					{
						func_180(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(4) == 3 || unk_0x5F95E51ABC3FC59A(4) == 4)
					{
						func_180(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x44FBC864916E75D4(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(5) == 3 || unk_0x5F95E51ABC3FC59A(5) == 4)
					{
						func_180(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57605ED0D405D759(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x5F95E51ABC3FC59A(2) == 3 || unk_0x5F95E51ABC3FC59A(2) == 4)
					{
						func_180(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x84BDC1D2DDA37898() == 3 || unk_0x84BDC1D2DDA37898() == 4)
				{
					func_180(uParam0, iVar0, 1);
				}
			}
			if (!func_173(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_158(uParam0))
				{
					func_157(uParam0);
				}
			}
		}
	}
	else
	{
		func_180(uParam0, iVar0, 0);
	}
}

void func_157(var uParam0)
{
	if (func_178(unk_0x7D2B9E6A64637269()))
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

int func_158(var uParam0)
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

int func_159(bool bParam0)
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

int func_160(char* sParam0)
{
	if (!func_161(1, 1, 0))
	{
		if ((!unk_0xAB6A270F84A8781E(sParam0) && func_98(sParam0)) || func_98("CMN_HINT"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return 0;
	}
	switch (Global_42009)
	{
		case 0:
		case 3:
			if (func_159(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_159(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_159(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_79(0))
	{
		return 0;
	}
	if (func_169())
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
	if ((func_168() || func_167(Global_4456448.f_133963)) || func_166())
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = func_165(unk_0x7D2B9E6A64637269(), 0);
			if (((unk_0xCA5702B560C1A812(iVar0, iVar1) || (unk_0x6471F4759775FCA4(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6471F4759775FCA4(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6471F4759775FCA4(iVar0) == joaat("riot2") && iVar1 == 0) && func_164(iVar0, 10)) && unk_0xB51972B58BF40F96(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1694746)
	{
		return 0;
	}
	if (func_162(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_163(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_163(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_163(int iParam0, bool bParam1, bool bParam2)
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

int func_164(int iParam0, int iParam1)
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

int func_165(int iParam0, int iParam1)
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

var func_166()
{
	return Global_2453009.f_19;
}

bool func_167(int iParam0)
{
	return iParam0 == 51;
}

var func_168()
{
	return Global_2453009.f_18;
}

bool func_169()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

void func_170(var uParam0, int iParam1, struct<3> Param2, int iParam3)
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
		func_180(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam1))
		{
			iVar0 = unk_0xFAA5505029C4B5A6(iParam1);
			if (!unk_0xC49311A2A500FF09(iVar0, 0))
			{
				if (unk_0x72D30262CF8C8603(iVar0))
				{
					if (!func_171())
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

bool func_171()
{
	return func_172(unk_0x1146A9AE09CE2B14());
}

int func_172(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_177(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_158(uParam0))
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
						if (!func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_177(bParam1, bParam2, bParam3))
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
					if (!func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_176(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_176(bParam1, bParam2, bParam3) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
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
				else if (!func_177(bParam1, bParam2, bParam3))
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
						if (func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_174(bParam1, bParam2, bParam3))
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
					else if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_158(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_161(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_179();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_161(bParam0, bParam1, bParam2))
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

int func_178(int iParam0)
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

void func_179()
{
	unk_0x191DDA30577F440A(&Global_7669, 4);
}

void func_180(var uParam0, int iParam1, int iParam2)
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
		if (func_98(uParam0->f_3))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
	if (!unk_0x4030103C8B148AFC(sVar0))
	{
		if (func_98(sVar0))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

float func_181(int iParam0, struct<3> Param1, int iParam2)
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

int func_182(int iParam0, int iParam1)
{
	if (func_130(iParam0))
	{
		if (unk_0x4E8DA737B686529A(iParam0, iParam1) == 1 || unk_0x4E8DA737B686529A(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(char* sParam0)
{
	func_184(sParam0);
}

void func_184(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(sParam0, sParam0))
	{
	}
}

void func_185(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_186()
{
	unk_0x5C679902079A7E80(&uLocal_61);
	unk_0xB0C1A43193C25F7A(0, iLocal_55, 750);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x4261814A9A26E86F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x1BBD0A5729AB1226(uLocal_61);
	unk_0x8A1AC8EBC73850C8(iLocal_56, uLocal_61);
	unk_0x8D5B447F21217223(&uLocal_61);
	if (unk_0x575B7C28D81C0B4D(iLocal_58))
	{
		unk_0x1AD5BCFEC31BB8D9(&iLocal_58);
	}
	if (!unk_0x575B7C28D81C0B4D(iLocal_59))
	{
		iLocal_59 = func_105(iLocal_55, 1, 0);
	}
	unk_0xB5E587F8B911573B(iLocal_59, 1);
	unk_0x817486F19ADBF54A(0);
	unk_0x5E84945E26CAEF1F(0.1f);
	func_121();
	if ((vdist(unk_0xD6E677FAD7521410(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x0BABEFEA577FCFA4(Local_53, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0x0BABEFEA577FCFA4(Local_53, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_118(unk_0x7D2B9E6A64637269(), iLocal_56, 1) < 50f)
		{
			func_122(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0xDFB7BFA6482FEE1E();
	settimera(0);
	if (func_112(unk_0x7D2B9E6A64637269()))
	{
		unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 1);
	}
	func_187(1);
}

int func_187(int iParam0)
{
	if (func_189())
	{
		Global_112283 = 1;
		Global_112280 = unk_0xDFB7BFA6482FEE1E();
		if (func_188(Global_112282))
		{
			func_102(0);
		}
		unk_0xB4D080997F77F539(1, "RE_TITLE");
		if (iParam0 && func_188(Global_112282))
		{
			unk_0xC5CEFC62F3637652();
		}
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
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

int func_189()
{
	switch (func_190(&Global_31405, 0, 5, 0, unk_0x62D18D65FE22FF39()))
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

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_194(0))
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
		if (!func_192(iParam2))
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
			func_191(uParam0, iParam4);
		}
	}
	return 2;
}

void func_191(var uParam0, int iParam1)
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

bool func_192(int iParam0)
{
	return func_193(iParam0, Global_42009);
}

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_192(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195()
{
	if (iLocal_134 == -1)
	{
		if (unk_0x8ACA9ACB93EC151E())
		{
			if (unk_0xB4E725A8915BDF60(iLocal_55))
			{
				iLocal_134 = unk_0xDFB7BFA6482FEE1E();
			}
		}
	}
	else if (unk_0xDFB7BFA6482FEE1E() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0x16B4C536089C3CAD(-1, Local_53, 50f))
	{
		return 1;
	}
	if ((unk_0xDFB7BFA6482FEE1E() - iLocal_135) > 30000)
	{
		if (!unk_0x98E18969B1D0C4AB(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_278();
		}
	}
	if (unk_0x575B7C28D81C0B4D(iLocal_59))
	{
		if ((unk_0x0BABEFEA577FCFA4(Local_53, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0x0BABEFEA577FCFA4(Local_53, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0x0BABEFEA577FCFA4(Local_53, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x3D6C3476988DE6E1(unk_0xD6E677FAD7521410(iLocal_55, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_196()
{
	if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0x575B7C28D81C0B4D(iLocal_59))
		{
			if (func_112(iLocal_56) && func_112(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_105(iLocal_55, 1, 0);
					unk_0xB5E587F8B911573B(iLocal_59, 0);
				}
			}
		}
		else
		{
			func_119(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0x575B7C28D81C0B4D(iLocal_59))
	{
		if (func_112(iLocal_56) && func_112(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_105(iLocal_55, 1, 0);
				unk_0xB5E587F8B911573B(iLocal_59, 0);
			}
		}
	}
	else
	{
		func_119(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0xDFB7BFA6482FEE1E();
	}
}

int func_197()
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
		func_221();
		if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			Local_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xFC552788374D7693("ATM_1");
			unk_0x16E516CA9C88FF48(iLocal_106);
			while (!unk_0xA9C0BBFB9CBB66F1(iLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				wait(0);
			}
			unk_0x16C6E55F8C91ED24(iLocal_106, 1);
		}
		else
		{
			Local_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			Local_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0x16E516CA9C88FF48(iLocal_106);
			while (!unk_0xA9C0BBFB9CBB66F1(iLocal_106))
			{
				if (func_208())
				{
					func_278();
				}
				wait(0);
			}
			unk_0x16C6E55F8C91ED24(iLocal_106, 1);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_221();
		Local_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		Local_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		Local_136 = { 266.3643f, -1313.829f, 28.59103f };
		Local_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0x16E516CA9C88FF48(iLocal_106);
		while (!unk_0xA9C0BBFB9CBB66F1(iLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			wait(0);
		}
		unk_0x16C6E55F8C91ED24(iLocal_106, 1);
	}
	else if (iLocal_65 == 3)
	{
		func_221();
		Local_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		Local_136 = { -1596.203f, -474.8844f, 32f };
		Local_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_221();
		Local_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		Local_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		Local_136 = { 178.1817f, 6660.375f, 31f };
		Local_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x1B77A75DE179E7FC(0);
		unk_0x86DA8A407ED8A381(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0x16E516CA9C88FF48(iLocal_106);
		while (!unk_0xA9C0BBFB9CBB66F1(iLocal_106))
		{
			if (func_208())
			{
				func_278();
			}
			wait(0);
		}
		unk_0x16C6E55F8C91ED24(iLocal_106, 1);
	}
	else if (iLocal_65 == 5)
	{
		func_221();
	}
	if (func_199())
	{
		unk_0x6AF7EE4DD9F8B944(Local_53, Var2.x, 0, 0, 0, 0);
		uLocal_63 = unk_0x0823FA7465392E20(Local_53 - Var2, Local_53 + Var2, 0, 1, 1, 1);
		iLocal_56 = unk_0x0FDCFECB2EF2BC1C(5, iLocal_105, Local_53, uLocal_54, 1, 1);
		unk_0xA415F00D0E0DFBCE(iLocal_56, 13, 0);
		unk_0xA415F00D0E0DFBCE(iLocal_56, 11, 1);
		unk_0xA415F00D0E0DFBCE(iLocal_56, 17, 0);
		unk_0x4170FE884DF7426D(iLocal_56, 6, 1, 0, 0);
		unk_0x46EDFC827DC67D89(iLocal_56, 1, 1);
		unk_0x1B0723EFE914C031(iLocal_56, 1);
		unk_0x1D7A4E9E23D306D6(iLocal_56, 0);
		unk_0x90517F1BF9113FB8(iLocal_56, sLocal_147);
		unk_0xEC7D41CF790FC6FB(iLocal_56, 0);
		if (iLocal_71 == 1)
		{
			unk_0x4170FE884DF7426D(iLocal_56, 0, 0, 0, 0);
			unk_0x4170FE884DF7426D(iLocal_56, 2, 0, 1, 0);
			unk_0x4170FE884DF7426D(iLocal_56, 3, 0, 1, 0);
			unk_0x4170FE884DF7426D(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0x0FDCFECB2EF2BC1C(22, iLocal_104, Local_53, 0, 1, 1);
		unk_0xA415F00D0E0DFBCE(iLocal_55, 17, 1);
		unk_0xA415F00D0E0DFBCE(iLocal_55, 13, 0);
		unk_0xA415F00D0E0DFBCE(iLocal_55, 6, 1);
		unk_0x82D2BB48A39F1E88(iLocal_55, 128, 1);
		unk_0x46EDFC827DC67D89(iLocal_55, 1, 1);
		unk_0xBE91B077ADADE97F(iLocal_55, 1);
		unk_0x7B28A83A0D3DD0F9(iLocal_55, 42, 1);
		unk_0x7B28A83A0D3DD0F9(iLocal_55, 281, 1);
		unk_0x7B28A83A0D3DD0F9(iLocal_55, 172, 0);
		unk_0x7B28A83A0D3DD0F9(iLocal_55, 137, 1);
		unk_0xB4B9948C675E52DA(iLocal_55);
		unk_0x90517F1BF9113FB8(iLocal_55, sLocal_146);
		unk_0x2BDB866C1791F9D7(iLocal_55, 1);
		unk_0xDB8D6815E13996A9(iLocal_55, unk_0xBF480D363C51CDF8(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2), 0, 0, 1);
		Var3 = { unk_0x04F690ADA8C71424(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2) };
		unk_0xCD37A28258D70638(iLocal_55, Var3.f_2);
		if (func_112(iLocal_56))
		{
			if (unk_0x9B9082138A642C14(iLocal_56))
			{
				unk_0xDB8D6815E13996A9(iLocal_56, unk_0xBF480D363C51CDF8("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x04F690ADA8C71424("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2) };
			}
			else
			{
				unk_0xDB8D6815E13996A9(iLocal_56, unk_0xBF480D363C51CDF8("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x04F690ADA8C71424("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2) };
			}
			unk_0xCD37A28258D70638(iLocal_56, Var3.f_2);
		}
		unk_0x4261814A9A26E86F(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0x9B9082138A642C14(iLocal_56))
		{
			unk_0x4261814A9A26E86F(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF9135F131C423364("random@atmrobberygen@female");
		}
		else
		{
			unk_0x4261814A9A26E86F(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF9135F131C423364("random@atmrobberygen@male");
		}
		unk_0x15EEBCDA5164F71B(iLocal_55, 1);
		unk_0xBE91B077ADADE97F(iLocal_56, 1);
		unk_0xD82D50E4AC0D46B9(iLocal_55, joaat("weapon_pistol"), -1, 1, 1);
		unk_0xE63C77B605D7BE3D(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x2FF622571073AA69(iLocal_55, joaat("weapon_pistol"), 0);
		unk_0xEA44C65D5434D223(iLocal_55, 1, 0);
		switch (func_39())
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
		func_198(&Local_107, 0, unk_0x7D2B9E6A64637269(), sLocal_112, 0, 1);
		func_198(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_198(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			iLocal_73 = unk_0x170478CC84C8AE2F(iLocal_106, Local_74, fLocal_76, 1, 1, 0);
			unk_0x89E171705EA920DA(iLocal_73, 1, 1, 0);
			unk_0xD3B638D46BF908EE(iLocal_73);
			unk_0xADB056FF4873632E(iLocal_73, 1);
			if (iLocal_65 == 2)
			{
				unk_0x94F15E506D091111(iLocal_73, 0, 0, 0);
			}
			else if (iLocal_65 == 1)
			{
				unk_0xF1A4298C3391F2DD(iLocal_55, 0);
				unk_0x5249BC3946DCDA75(iLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				unk_0x5C052A30B9FCA449(iLocal_73, 3);
			}
		}
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
		return 1;
	}
	else if (func_208())
	{
		func_278();
	}
	return 0;
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_199()
{
	unk_0x068BDE31F7D112BB("random@atmrobberygen@male");
	unk_0x068BDE31F7D112BB("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_207(&Local_164, 3);
		Local_164.f_146 = unk_0x2053F6ACFD4ED4BC();
		func_206(&Local_164, iLocal_104);
		func_206(&Local_164, iLocal_105);
		func_206(&Local_164, iLocal_101);
		func_206(&Local_164, iLocal_102);
		func_204(&Local_164, cLocal_92);
		func_204(&Local_164, cLocal_148);
		func_204(&Local_164, cLocal_142);
		func_204(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0x0EC2B29D4172D225("random@atmrobberygen@male") && unk_0x0EC2B29D4172D225("random@atmrobberygen@female")) && func_200(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_201(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_201(var uParam0)
{
	return func_202(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_202(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(iParam0, 30))
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, 29))
		{
			switch (func_203(iParam0))
			{
				case 0:
					return unk_0xA9C0BBFB9CBB66F1(iParam2);
					break;
				
				case 1:
					return unk_0x0EC2B29D4172D225(sParam1);
					break;
				
				case 2:
					return unk_0x472AC3055A188881(sParam1);
					break;
				
				case 3:
					return unk_0xAD9D75DD073BF477(sParam1);
					break;
				
				case 4:
					return unk_0x9CF7186A344D26A9(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x9745FAC5B3E4C8B8(sParam1);
					break;
				
				case 6:
					return unk_0x952AB441FA24BF16(sParam1, unk_0x234B68AC2E35ED5A(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xD3419C924F3692F7(iParam2);
					break;
				
				case 8:
					return unk_0x080D38ACEC5DC1A2(iParam2);
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

int func_203(int iParam0)
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

void func_204(var uParam0, char* sParam1)
{
	func_205(uParam0, 1, -1, sParam1, 0);
}

void func_205(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
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

void func_206(var uParam0, int iParam1)
{
	func_205(uParam0, 0, iParam1, "NULL", 0);
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_208()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_51) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_216())
	{
		return 1;
	}
	if (func_209(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_209(float fParam0, bool bParam1)
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
		if (func_41(func_39()))
		{
			iVar5 = func_215();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar1 /*6*/], 2) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar1 /*6*/], 3))
				{
					func_210(iVar1, &Var0);
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

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 1:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 2:
			func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 3:
			func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 4:
			func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 5:
			func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 6:
			func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 7:
			func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
			break;
		
		case 8:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 9:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 10:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 11:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 12:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 13:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 14:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 15:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 16:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 17:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 18:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 19:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 20:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 21:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 22:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 23:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
			break;
		
		case 24:
			func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
			break;
		
		case 25:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 26:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 27:
			func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 28:
			func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 29:
			func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 30:
			func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 31:
			func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 32:
			func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 33:
			func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 34:
			func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 35:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 36:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 37:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 38:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 39:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 40:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 41:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 42:
			func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 43:
			func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 44:
			func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 45:
			func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 46:
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 47:
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 48:
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 49:
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 50:
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 51:
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 52:
			func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 54:
			func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 55:
			func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 56:
			func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 53:
			func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 57:
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 58:
			func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 59:
			func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 60:
			func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 61:
			func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 62:
			func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_212(int iParam0)
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

struct<2> func_213(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_214(iParam0) };
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

struct<2> func_214(int iParam0)
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

int func_215()
{
	func_40();
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

int func_216()
{
	if (func_219() && !func_220())
	{
		return 1;
	}
	if (func_218() && func_217())
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return Global_112011 > 0;
}

int func_218()
{
	if (Global_96292 != -1)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

int func_220()
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

void func_221()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = unk_0xB36B8558948EA7A8(1, 5);
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
			switch (func_39())
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
				iVar0 = unk_0xB36B8558948EA7A8(0, 3);
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
					bVar1 = func_222();
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
			switch (func_39())
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
			switch (func_39())
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
				iVar0 = unk_0xB36B8558948EA7A8(0, 3);
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
					bVar2 = func_222();
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
			switch (func_39())
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
				iVar0 = unk_0xB36B8558948EA7A8(0, 3);
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
					bVar3 = func_222();
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
	if (unk_0x0BABEFEA577FCFA4(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		Local_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		Local_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		Local_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		Local_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		Local_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		Local_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		Local_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		Local_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		Local_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		Local_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		Local_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		Local_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		Local_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		Local_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		Local_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (unk_0x0BABEFEA577FCFA4(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f)
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

int func_222()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (!func_192(5))
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_220())
		{
			return 0;
		}
	}
	if (func_209(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_112282 == func_225() && unk_0x5E9AD12CB585F23D()) && Global_112283)
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x471C98FD94C0A5FD(), 64);
	uVar1 = func_226(Var0);
	return uVar1;
}

int func_226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_227(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x2053F6ACFD4ED4BC() >= (uParam0->f_146 + uParam0->f_147) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2)) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x2053F6ACFD4ED4BC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(var uParam0)
{
	func_229(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_229(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 30))
	{
		switch (func_203(*uParam0))
		{
			case 0:
				unk_0x16E516CA9C88FF48(uParam2);
				break;
			
			case 1:
				unk_0x068BDE31F7D112BB(uParam1);
				break;
			
			case 2:
				unk_0x5590FBCD51709DFE(sParam1);
				break;
			
			case 3:
				unk_0xA08F3C300F9E3468(sParam1, unk_0x234B68AC2E35ED5A(*uParam0, 28));
				break;
			
			case 4:
				unk_0x498685EB9132AF88(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x1594E542FF3D23EF(sParam1);
				break;
			
			case 6:
				unk_0x952AB441FA24BF16(sParam1, unk_0x234B68AC2E35ED5A(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x5B99C7B716657782(iParam2);
				break;
			
			case 8:
				unk_0xBB3CDAB62C8773C8(sParam1, iParam2);
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

void func_230(int iParam0, var uParam1)
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

void func_231()
{
}

void func_232()
{
}

void func_233(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_235(iParam0);
	unk_0xA87835FA95542DD6(0);
	unk_0xD72603E43F4527D1(1);
	Global_112279 = 0;
	func_234();
}

void func_234()
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

void func_235(int iParam0)
{
	Global_112282 = iParam0;
}

int func_236(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_225();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_277())
		{
			return 0;
		}
	}
	Local_51 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			if (vmag2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_220())
			{
				return 0;
			}
		}
		if (!Global_112293.f_9083)
		{
			return 0;
		}
		if (func_276(0))
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (func_275())
		{
			return 0;
		}
		if (Global_112282 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_209(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !bParam4)
		{
			if ((Var1.f_2 - Local_51.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_274(iParam1))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_273(func_39()) == 4 || func_273(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_272(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_271(Global_112293.f_24993.f_43[iParam1]))
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
		if (func_270())
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
		if (!func_261(4))
		{
			return 0;
		}
		if (!func_192(5))
		{
			return 0;
		}
		if (func_260(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_260(0, 0))
		{
			return 0;
		}
		if (Global_31492)
		{
			return 0;
		}
		if (func_274(30) && !func_260(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112293.f_2361.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112293.f_2361.f_539.f_2296[iVar2];
				if (func_259(iVar4))
				{
					if (func_237(iVar2))
					{
						if (!func_65(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var3) < (210f * 210f))
							{
								if (func_39() != iVar2)
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

bool func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112293.f_2361.f_539.f_2296[iParam0];
	return func_238(iVar0);
}

int func_238(int iParam0)
{
	return func_239(iParam0, 1);
}

int func_239(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_259(iParam0))
	{
		return 0;
	}
	func_240(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_240(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_241(func_252(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_241(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_251(iParam0, iParam1))
	{
		iVar0 = func_250(iParam1);
		iVar1 = func_248(iParam0);
		iVar2 = (func_248(iParam0) - func_248(iParam1));
		iVar3 = (func_250(iParam0) - func_250(iParam1));
		iVar4 = (func_247(iParam0) - func_247(iParam1));
		iVar5 = (func_246(iParam0) - func_246(iParam1));
		iVar6 = (func_245(iParam0) - func_245(iParam1));
		iVar7 = (func_244(iParam0) - func_244(iParam1));
	}
	else
	{
		iVar0 = func_250(iParam0);
		iVar1 = func_248(iParam1);
		iVar2 = (func_248(iParam1) - func_248(iParam0));
		iVar3 = (func_250(iParam1) - func_250(iParam0));
		iVar4 = (func_247(iParam1) - func_247(iParam0));
		iVar5 = (func_246(iParam1) - func_246(iParam0));
		iVar6 = (func_245(iParam1) - func_245(iParam0));
		iVar7 = (func_244(iParam1) - func_244(iParam0));
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
		iVar4 = (iVar4 + func_243(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_242(to_float(iVar0 + 1), 0f, 12f));
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

float func_242(float fParam0, float fParam1, float fParam2)
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

int func_243(int iParam0, int iParam1)
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

int func_244(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_245(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_246(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_247(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_248(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_249(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_249(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_250(int iParam0)
{
	return iParam0 & 15;
}

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_259(iParam1) || !func_259(iParam0))
	{
		return 1;
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
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_252()
{
	var uVar0;
	
	func_258(&uVar0, unk_0x1947D86A2BB06F8D());
	func_257(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_256(&uVar0, unk_0xCA86FAB7FADC8353());
	func_255(&uVar0, unk_0x9E6858A319A1F6F2());
	func_254(&uVar0, unk_0xA91C851005050418());
	func_253(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_253(var uParam0, int iParam1)
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

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_250(*uParam0);
	iVar1 = func_248(*uParam0);
	if (iParam1 < 1 || iParam1 > func_243(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_259(int iParam0)
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
	iVar0 = func_244(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_245(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_246(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_248(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_250(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_247(iParam0);
	if (iVar5 < 1 || iVar5 > func_243(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_269()) || Global_111340) || Global_31348) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_265()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1) || func_269()) || Global_31348) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_269()) || Global_111340) || Global_31348) || func_268()) || func_61(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5) || Global_42556 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_269()) || Global_111340) || Global_31348) || func_268()) || func_61(8, -1)) || func_267()) || func_266()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_269() || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || func_61(8, -1)) || func_264()) || func_263()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_61(8, -1) || func_267()) || func_266()) || func_263()) || func_262())
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
							if ((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_269()) || Global_31348) || func_268()) || func_61(8, -1)) || func_266()) || func_265()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || func_269()) || func_266()) || Global_111340) || Global_31348) || func_268()) || Global_43182) || func_61(8, -1)) || func_265()) || func_263()) || func_264()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0)) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_269()) || Global_111340) || Global_31348) || func_268()) || func_61(8, -1)) || func_265()) || func_263()) || func_267()) || func_266()) || func_264())
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

var func_262()
{
	return Global_99409.f_1;
}

int func_263()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

int func_264()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_265()
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

bool func_266()
{
	return Global_99422.f_364 > 0;
}

bool func_267()
{
	return Global_99422.f_363 > 0;
}

var func_268()
{
	return Global_1312902;
}

int func_269()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_270()
{
	func_59();
	if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_271(int iParam0)
{
	return func_251(func_252(), iParam0);
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_273(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_112293.f_7686.f_919[iParam0];
}

bool func_274(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_277())
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

int func_275()
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

bool func_276(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_277()
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

void func_278()
{
	if (bLocal_127)
	{
		if (unk_0xBFCE58B2B3249999(iLocal_73, 0))
		{
			if (unk_0x966155156C573F75(iLocal_73))
			{
				unk_0x945FBB15AF3D1A75(iLocal_73);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_55))
	{
		unk_0x0F3BD19FF11738D3(&iLocal_55);
	}
	unk_0xAE8E6284A6D09C87(0);
	if (iLocal_69 != 0)
	{
		unk_0x3E5BA73CEA34D768(iLocal_69);
	}
	unk_0xAE8E6284A6D09C87(0);
	if (!unk_0xECEC7528A52B4EE8(iLocal_56))
	{
		unk_0xBE91B077ADADE97F(iLocal_56, 0);
		unk_0x1D7A4E9E23D306D6(iLocal_56, 1);
		unk_0x0F3BD19FF11738D3(&iLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0x86DA8A407ED8A381(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_180(&uLocal_152, 0, 0);
	if (func_224())
	{
		unk_0x5E84945E26CAEF1F(1f);
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0x05D0B763CEEA9ABD(unk_0x7D2B9E6A64637269(), 0);
	}
	func_291(&Local_164, 0);
	func_279(-1);
	unk_0x1B77A75DE179E7FC(1);
	unk_0xE6B53A6E51AAA49F(uLocal_63, 0);
	unk_0x4BFE89D21F9885DC();
}

void func_279(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_284(iParam0);
		unk_0xB4D080997F77F539(0, 0);
		Global_112284 = unk_0xDFB7BFA6482FEE1E();
		func_283(30000);
		StringCopy(&cVar0, func_282(Global_112282, 1), 64);
		if (func_281(Global_112282) > 0)
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
	func_280(&Global_31405);
	Global_112283 = 0;
	func_235(-1);
}

void func_280(var uParam0)
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

int func_281(int iParam0)
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

char* func_282(int iParam0, bool bParam1)
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

void func_283(int iParam0)
{
	Global_42560 = (unk_0xDFB7BFA6482FEE1E() + iParam0);
}

void func_284(int iParam0)
{
	func_285(iParam0, 0, func_290(iParam0));
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_252();
	func_288(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_287(iParam0, &uVar0);
	Var1 = { func_286(&uVar0) };
}

struct<16> func_286(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_247(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_250(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_248(*uParam0), 64);
	return Var0;
}

void func_287(int iParam0, var uParam1)
{
	Global_112293.f_24993.f_43[iParam0] = *uParam1;
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_248(*uParam0);
	iVar1 = func_250(*uParam0);
	iVar2 = func_247(*uParam0);
	iVar3 = func_246(*uParam0);
	iVar4 = func_245(*uParam0);
	iVar5 = func_244(*uParam0);
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
	iVar6 = func_243(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_243(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_289(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_258(uParam0, iParam1);
	func_257(uParam0, iParam2);
	func_256(uParam0, iParam3);
	func_254(uParam0, iParam5);
	func_255(uParam0, iParam4);
	func_253(uParam0, iParam6);
}

int func_290(int iParam0)
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

void func_291(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_293(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_292(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*18*/], 30))
		{
			func_294(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_294(var uParam0)
{
	func_295(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_295(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x234B68AC2E35ED5A(uParam0, 30))
	{
		switch (func_203(iParam0))
		{
			case 0:
				unk_0x824F744352C8BC82(uParam2);
				break;
			
			case 1:
				unk_0xF9135F131C423364(uParam1);
				break;
			
			case 2:
				unk_0x88718F88EB6B8FD5(sParam1);
				break;
			
			case 3:
				unk_0xB5F867E143F78583(sParam1);
				break;
			
			case 4:
				unk_0x7B6B41ECBE4B733F(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xD0AC51DF5D1C2659(sParam1);
				break;
			
			case 6:
				unk_0xE76ABB7DC1AD1626();
				break;
			
			case 7:
				unk_0x41BE3F722FC386CD(uParam2);
				break;
			
			case 8:
				unk_0xE498E37B41AEA1DF(uParam2, unk_0x234B68AC2E35ED5A(iParam0, 26));
				break;
			
			case 9:
				unk_0x4D2B6680250EFCC8();
				break;
			
			default:
				break;
		}
	}
}

void func_296(bool bParam0)
{
	Global_112285 = { Local_53 };
	if (bParam0)
	{
		func_311(3);
	}
	func_300(1, 0);
	if (!bLocal_96)
	{
		func_299();
	}
	func_297();
	func_278();
}

void func_297()
{
	func_298();
}

int func_298()
{
	if (func_276(0))
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

int func_299()
{
	return 1;
}

void func_300(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_225();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_281(iParam0))
	{
		func_310(iParam0, iParam1);
		if (!func_309(51))
		{
			func_306("RE_REWARD", 1, 0, 4000, 10000, func_215(), 0, 138, 0);
			func_305(51);
		}
		if (func_188(iParam0))
		{
			Global_112293.f_24993.f_2 = 3;
		}
		if (func_304(iParam0, iParam1) != 322)
		{
			func_301(func_304(iParam0, iParam1), Local_51.x, Local_51.f_1);
		}
		Global_112281 = iParam1;
		if (Global_112279 == 0)
		{
			if (((Global_112282 == 1 || Global_112282 == 5) || Global_112282 == 11) || Global_112282 == 25)
			{
				func_311(2);
			}
			else if ((Global_112282 == 26 || Global_112282 == 8) || Global_112282 == 17)
			{
				func_311(7);
			}
			else
			{
				func_311(1);
			}
		}
	}
}

void func_301(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_302();
	}
}

void func_302()
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
		func_35(13, floor(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_303() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_298();
				}
			}
		}
	}
}

int func_303()
{
	return Global_31345;
}

int func_304(int iParam0, int iParam1)
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

void func_305(int iParam0)
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

void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_307(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_308();
	}
}

void func_308()
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

int func_309(int iParam0)
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

void func_310(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_112293.f_24993.f_8[iParam0]), iParam1);
}

void func_311(int iParam0)
{
	Global_112279 = iParam0;
}

