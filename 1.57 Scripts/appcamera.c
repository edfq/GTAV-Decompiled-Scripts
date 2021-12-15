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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
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
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0x5B2BDC877F7E8802();
	if (unk_0xFA1A73C829B8839F() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_170())
	{
		Global_4271203 = 99;
		Global_4271204 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4271203 = 0;
		Global_4271204 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_169();
	if (func_168(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_167();
	iLocal_63 = unk_0x5AD02BBC63E31E46();
	if (Global_19743 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22158 = 0;
	Global_22159 = 0;
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xF05D6BD44DA210C7(unk_0x7D2B9E6A64637269()))
		{
			Global_22158 = 1;
		}
		if (unk_0xCC9187BE146DCE4F())
		{
			Global_22158 = 1;
		}
		if (unk_0xBFCE58B2B3249999(unk_0xC96B0C85BE0E0287(unk_0x7D2B9E6A64637269()), 0))
		{
			Global_22158 = 1;
		}
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
		{
			Global_22158 = 1;
		}
		if (unk_0x6AFD64BDD2C5FBD7(unk_0x7D2B9E6A64637269()))
		{
			Global_22158 = 1;
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_22158 = 1;
			}
			uLocal_99 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if ((((unk_0x6471F4759775FCA4(uLocal_99) == joaat("rhino") || unk_0x6471F4759775FCA4(iLocal_99) == joaat("cutter")) || unk_0x6471F4759775FCA4(iLocal_99) == joaat("submersible")) || unk_0x6471F4759775FCA4(iLocal_99) == joaat("khanjali")) || (unk_0x6471F4759775FCA4(iLocal_99) == joaat("barrage") && unk_0xCA5702B560C1A812(iLocal_99, func_166(unk_0x7D2B9E6A64637269(), 1))))
			{
				Global_22158 = 1;
			}
			else if (unk_0x27FC1B0077581B37(iLocal_99, -1, 0) == unk_0x7D2B9E6A64637269())
			{
				if (unk_0xAB53B3829B28E5B8(iLocal_99) > 0f)
				{
					if (!Global_77248)
					{
						if (!func_165())
						{
							unk_0x5501AD171E63CFEB(unk_0x7D2B9E6A64637269(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_77248)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 0);
		}
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 21);
	func_164(0);
	unk_0x191DDA30577F440A(&Global_7668, 17);
	if (Global_19740 == 0)
	{
		func_163();
	}
	else
	{
		uLocal_91 = unk_0x42AA2CCF0B61DCD8("camera_gallery");
		uLocal_92 = unk_0x42AA2CCF0B61DCD8("instructional_buttons");
		while (!unk_0xDAE4BC89A198A6AF(uLocal_91) || !unk_0xDAE4BC89A198A6AF(uLocal_92))
		{
			wait(0);
			unk_0xDA81FB7770247CC0();
			unk_0x366E7F593105797F(0, 25, 1);
		}
		if (Global_77248)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_162())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_161(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_160(uLocal_91, "CLOSE_SHUTTER");
		unk_0x704F8697BB515627(Global_19779, "DISPLAY_VIEW");
		unk_0x9E3D03981E2E9AD9(16);
		unk_0x392841D58D2EED1D();
	}
	Local_41 = { Global_19758 };
	Local_42 = { Global_19751[Global_19743 /*3*/] };
	Global_22159 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0xC664C0067EEAB8D1(&Global_7670, 3);
	}
	func_158();
	unk_0x0F33095580A670CE(4);
	if (unk_0x84070F79DE396386())
	{
	}
	if (Global_4456448.f_128335)
	{
	}
	if (Global_4456448.f_128337 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		wait(0);
		unk_0x203739B163D4D88E(0, Global_19767);
		unk_0x203739B163D4D88E(0, 186);
		unk_0xDA81FB7770247CC0();
		unk_0x366E7F593105797F(0, 25, 1);
		unk_0x366E7F593105797F(0, 0, 1);
		if (func_157())
		{
			if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
			{
				unk_0x191DDA30577F440A(&Global_4272479, 2);
				func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_112293.f_14049.f_81)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_4272479, 13))
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					if (!unk_0x234B68AC2E35ED5A(Global_7669, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_157())
						{
							unk_0x191DDA30577F440A(&Global_4272479, 13);
							Global_112293.f_14049.f_81 = 1;
							func_156("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xA300BD5F71A8C704())
		{
			if (Global_4456448.f_128334 == 0 && Global_4456448.f_128335 == 0)
			{
				unk_0x1F2C4D3A741ED5AD(15, 0f, -0.0375f);
			}
			unk_0xEFD424FDD55A6EC7(7);
			func_155();
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 200, 1);
			}
			unk_0x366E7F593105797F(0, 44, 1);
			unk_0x366E7F593105797F(0, 47, 1);
			unk_0x366E7F593105797F(0, 91, 1);
			unk_0x366E7F593105797F(0, 92, 1);
			unk_0x366E7F593105797F(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0x203739B163D4D88E(0, Global_19771);
			}
			unk_0x203739B163D4D88E(0, Global_19768);
			if ((unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A()) && !func_157())
			{
				iLocal_81 = 1;
				Global_19798.f_1 = 3;
				unk_0x543F5B2D3F90CA6D(0);
			}
			if (unk_0xF3C5658991970A49())
			{
				Global_19798.f_1 = 3;
				unk_0x543F5B2D3F90CA6D(0);
			}
			if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
			{
				Global_19798.f_1 = 3;
				unk_0x543F5B2D3F90CA6D(0);
			}
			if (unk_0x02BFF15CAA701972())
			{
				if (func_144())
				{
					Global_19798.f_1 = 3;
					unk_0x543F5B2D3F90CA6D(0);
				}
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
				{
					Global_19798.f_1 = 3;
					unk_0x543F5B2D3F90CA6D(0);
				}
				if ((unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0xB590A8673D04F7DA(unk_0x1146A9AE09CE2B14()))
				{
					if (func_143())
					{
					}
					else
					{
						Global_19798.f_1 = 3;
						unk_0x543F5B2D3F90CA6D(0);
					}
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					if (Global_77248 == 1)
					{
						Global_19798.f_1 = 3;
					}
				}
				if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x36F15E322F9C149E(unk_0x7D2B9E6A64637269()) > 0.3f)
					{
						Global_19798.f_1 = 3;
					}
				}
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					func_142();
					iLocal_99 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0xAB53B3829B28E5B8(iLocal_99) < 0f)
					{
						func_139(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0x8078E78E0BCB685F())
							{
								func_139(0);
							}
						}
						else if (!unk_0x8078E78E0BCB685F())
						{
							iLocal_67 = 1;
							wait(0);
							unk_0xDA81FB7770247CC0();
						}
					}
				}
				else if (Global_77248 == 0)
				{
					if (unk_0x234B68AC2E35ED5A(Global_7668, 18))
					{
						func_138();
						if ((Global_19798 == 0 || Global_19798 == 1) || Global_19798 == 2)
						{
							if (!unk_0x697CE202EE472EF8(unk_0x7D2B9E6A64637269()))
							{
								if (unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
								{
								}
								else
								{
									Global_19798.f_1 = 3;
									unk_0x543F5B2D3F90CA6D(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_137();
			}
			if (Global_19798.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_19798.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_135();
									if (Global_22163 == 0 && Global_22160 == 6)
									{
										unk_0x57A7F754B6B8906E(0, 1);
										unk_0x83C4A7EF0169D5FD();
										iLocal_100 = 0;
										func_134();
										if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
										{
											Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
										}
										func_133();
										iLocal_60++;
										if (func_170())
										{
											func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_124();
									}
									if (Global_22160 == 0)
									{
										iLocal_100 = 0;
										unk_0x83C4A7EF0169D5FD();
										if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
										{
											Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
										}
										func_123();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_124();
										if (func_170())
										{
											if (Global_4271204 == 0)
											{
												if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
												{
													func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
										{
											func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_122();
										func_121(1);
									}
								}
								else if (Global_19798.f_1 != 9)
								{
									if (Global_22159 == 1)
									{
										if (Global_22158 == 0)
										{
											func_120();
										}
									}
									else if ((Global_8276 - Global_8275) > Global_8277)
									{
										if (unk_0x8B6A925F148E0E94() && func_119())
										{
											if (func_118() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x543F5B2D3F90CA6D(0);
												unk_0x791B4C3811D53DFA(iLocal_63);
												iLocal_94 = 0;
												if (Global_22158 == 0)
												{
													func_133();
													Global_22158 = 1;
													unk_0x57A7F754B6B8906E(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_117(0, 0);
													func_121(0);
													iLocal_66 = 0;
													func_112(1);
													iLocal_93 = 0;
													func_110(0, 1);
													func_161(Global_19779, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_108(1);
												}
											}
										}
										if (func_107(2, Global_19766, 0))
										{
											if (func_157())
											{
												if (((Global_1669334 || Global_1312809) || Global_22161) || unk_0x234B68AC2E35ED5A(Global_7668, 21))
												{
												}
												else if (func_118() && iLocal_78)
												{
												}
												else if (!func_119())
												{
													if (iLocal_78 == 0)
													{
														unk_0x8BA9BCDD56AA7115(500);
														iLocal_94 = 0;
														func_110(1, 1);
														func_106(1);
													}
												}
											}
											else if (func_118() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x543F5B2D3F90CA6D(0);
												unk_0x791B4C3811D53DFA(iLocal_63);
												iLocal_94 = 0;
												if (Global_22158 == 0)
												{
													func_133();
													Global_22158 = 1;
													unk_0x57A7F754B6B8906E(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_117(0, 0);
													func_121(0);
													iLocal_66 = 0;
													func_112(1);
													iLocal_93 = 0;
													func_110(0, 1);
													func_161(Global_19779, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0xE8FFE38E2BA32BD6())
										{
											func_105();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0xE8FFE38E2BA32BD6())
									{
										func_105();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
										{
											func_105();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0x234B68AC2E35ED5A(Global_7668, 28))
									{
										func_105();
										iLocal_53 = 0;
									}
									if (Global_22158 == 1)
									{
										func_94();
									}
									else if (Global_19798.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_90();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_123();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
												{
													if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
													{
														func_160(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0xDFB7BFA6482FEE1E();
														while (unk_0xDFB7BFA6482FEE1E() < (iLocal_86 + iLocal_88) && Global_19798.f_1 > 3)
														{
															func_155();
															func_137();
															func_89();
															unk_0xDA81FB7770247CC0();
															wait(0);
														}
													}
												}
												if (func_170())
												{
													if (Global_4271204 == 0)
													{
														if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
														{
															func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
												{
													func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_137();
												func_155();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_124();
												iLocal_87 = 0;
												func_160(uLocal_91, "OPEN_SHUTTER");
											}
											func_122();
											func_121(1);
											func_88();
										}
									}
									if (iLocal_94 == 1)
									{
										func_85();
									}
									if (iLocal_80)
									{
										if (timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0x191DDA30577F440A(&Global_7668, 18);
											if (Global_22158 == 0)
											{
												func_110(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22158 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22161 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_89();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19798.f_1 > 3)
					{
						if (Global_22159 == 1)
						{
							if (Global_22158 == 0)
							{
								func_120();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x3640D836D145B814())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0xF496BF8D9348EB34();
					switch (iVar0)
					{
						case -1:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						default:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0x86AF801D34E482FF(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_110(0, 1);
					}
					if (unk_0x86AF801D34E482FF(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x609EEF618F8CC869(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_110(0, 1);
							iLocal_104 = 0;
							unk_0x6217A44F745D15E6("Gallery");
							unk_0x2F5C1E9CBB254D00();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0xE22116C6D321FECA())
					{
						if (unk_0x86AF801D34E482FF(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_110(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0x86AF801D34E482FF(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_110(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0xE22116C6D321FECA())
					{
						if (unk_0x86AF801D34E482FF(2, Global_19770))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_110(0, 1);
							if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0xDFB7BFA6482FEE1E();
							unk_0xEFE8081075F37187(1);
						}
					}
				}
				else if (unk_0x86AF801D34E482FF(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_110(0, 1);
				}
			}
		}
		iLocal_59 = unk_0xDFB7BFA6482FEE1E();
		if (func_157())
		{
			if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
			{
				unk_0x191DDA30577F440A(&Global_4272479, 2);
				func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_117(0, 0);
			func_121(0);
			iLocal_66 = 0;
			func_112(1);
			Global_22158 = 0;
			Global_22159 = 0;
			Global_22161 = 0;
			unk_0x3D9BC07C93913E04(&uLocal_91);
			unk_0x3D9BC07C93913E04(&uLocal_92);
			unk_0x543F5B2D3F90CA6D(0);
			if (Global_19986 == 1)
			{
				unk_0x191DDA30577F440A(&Global_7668, 17);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			unk_0x57A7F754B6B8906E(0, 1);
			unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 1);
			unk_0xC664C0067EEAB8D1(&Global_7670, 3);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 3);
			unk_0x956EB3331C33B055(15);
			Global_22162 = 1;
			unk_0x791B4C3811D53DFA(iLocal_63);
			unk_0xBAB6F7501A822416(iLocal_63);
			unk_0x83C4A7EF0169D5FD();
			func_112(1);
			unk_0xB9B02277BF796C35(0);
			unk_0x0A3938C08965000F(0);
			unk_0xB7E0C2B8718FE8DB(1f);
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), "Mood_Normal_1", 0);
				unk_0xB3099507583713CA(unk_0x7D2B9E6A64637269());
			}
			if (Global_4271204 > 0 && Global_4271204 < 13)
			{
				unk_0xB5F867E143F78583(sLocal_20[Global_4271204]);
			}
			unk_0xC664C0067EEAB8D1(&Global_7668, 18);
			if (func_157())
			{
				func_110(1, 1);
			}
			else
			{
				func_110(0, 1);
			}
			if (func_168(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0x4BFE89D21F9885DC();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xFEA9B1B11A8D68FF(1);
		}
		else if (Global_19798.f_1 > 3)
		{
			unk_0xFEA9B1B11A8D68FF(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4272757 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 3) || Global_19798.f_1 == 0) || Global_19742 == 1)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = unk_0xA51D13BAA974BAAF(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0x82119F44D396133A();
			iLocal_61 = unk_0x9859EF5E826A0C49();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0xDAE4BC89A198A6AF(uLocal_91))
					{
						if (func_170())
						{
							if (Global_4271204 == 0)
							{
								if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
								{
									func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
							{
								func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xDAE4BC89A198A6AF(uLocal_91))
				{
					func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0x83C4A7EF0169D5FD();
			break;
		
		case 1:
			if (!unk_0xD4B214349C8E8AE1())
			{
				unk_0xFFBE12D059373A24("CELL_SPINNER2");
				unk_0x2DFA0FE2AE5529AD(1);
			}
			break;
		
		case 2:
			if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_19798.f_1 = 3;
				Global_22162 = 1;
			}
			unk_0x83C4A7EF0169D5FD();
			break;
	}
}

void func_5()
{
	if (func_107(2, Global_19767, 0))
	{
		func_1(0);
		if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
		{
			unk_0x543F5B2D3F90CA6D(0);
			settimerb(0);
			func_134();
			iLocal_78 = 0;
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			func_133();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0x234B68AC2E35ED5A(Global_7669, 14))
			{
				func_156("CELL_299", -1);
			}
			else
			{
				func_133();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_110(1, 1);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_7668, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_155();
			unk_0xDA81FB7770247CC0();
			func_89();
			func_142();
			func_137();
		}
		unk_0x543F5B2D3F90CA6D(0);
		func_134();
		settimerb(0);
		iLocal_78 = 0;
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		}
		func_124();
		func_133();
	}
	if (func_107(2, Global_19771, 0))
	{
		func_1(0);
		if (func_118() || unk_0x234B68AC2E35ED5A(Global_7669, 28))
		{
		}
		else
		{
			unk_0x543F5B2D3F90CA6D(0);
			settimerb(0);
			iLocal_87 = 1;
			func_134();
			iLocal_78 = 0;
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			func_133();
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
	{
		if (func_107(2, Global_19770, 0))
		{
			func_1(0);
			unk_0x543F5B2D3F90CA6D(0);
			unk_0x09B576C6F15481A9(0, 0);
			wait(0);
			unk_0xDA81FB7770247CC0();
			func_155();
			wait(0);
			unk_0xDA81FB7770247CC0();
			func_155();
			unk_0x3711369E6CE3291A();
			unk_0xCEADF02ABEE1B4F9();
			Global_22162 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_110(0, 1);
			Global_22158 = 1;
			unk_0x57A7F754B6B8906E(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			func_117(0, 0);
			func_121(0);
			iLocal_66 = 0;
			func_112(1);
			if (!Global_2544210.f_6620)
			{
				unk_0x191DDA30577F440A(&Global_7668, 9);
			}
			iLocal_93 = 0;
			func_161(Global_19779, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_22163 = 1;
	unk_0x57A7F754B6B8906E(0, 1);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_19798.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_80();
		func_76();
		func_75();
		fLocal_36 = unk_0x10643A357794B3BD();
		fLocal_37 = unk_0x6719F2C27E4D132C();
		if (iLocal_84 == 0)
		{
			if (unk_0x5C6675393464A814(2, iVar0) && !unk_0x5C6675393464A814(2, iVar1))
			{
				iLocal_84 = 1;
				func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
					func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
					func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
				unk_0x82D42F43BE26EB72(fLocal_40);
				unk_0x392841D58D2EED1D();
				func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x5C6675393464A814(2, iVar0) || unk_0x5C6675393464A814(2, iVar1))
		{
			iLocal_84 = 0;
			func_124();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0x5C6675393464A814(2, iVar1) && !unk_0x5C6675393464A814(2, iVar0))
			{
				iLocal_85 = 1;
				func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
					func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
				}
				else if (!func_157())
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
					func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
				}
				else
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
					func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
				}
				func_63();
				unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
				unk_0x82D42F43BE26EB72(fLocal_40);
				unk_0x392841D58D2EED1D();
				func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x5C6675393464A814(2, iVar1) || unk_0x5C6675393464A814(2, iVar0))
		{
			iLocal_85 = 0;
			func_124();
		}
	}
	else
	{
		unk_0x681AE3DAF3A73058(0, 2, 1);
		unk_0x681AE3DAF3A73058(0, 1, 1);
	}
	if (unk_0x0C7C436873368EDB(2))
	{
		func_124();
	}
	func_142();
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 200, 1);
	}
	if (func_157())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
		{
			unk_0x191DDA30577F440A(&Global_4272479, 2);
			func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x86AF801D34E482FF(2, 183) && iLocal_106 == 0) && !func_157())
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4272479, 2))
				{
					unk_0xC664C0067EEAB8D1(&Global_4272479, 2);
					if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
					{
						func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x191DDA30577F440A(&Global_4272479, 2);
					func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0x704F8697BB515627(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x9D7453DF8B7E9E0B(0);
			func_62("CELL_FOCUS");
			unk_0x9D7453DF8B7E9E0B(1);
			unk_0x392841D58D2EED1D();
		}
		if (!func_61(14))
		{
			if (unk_0x234B68AC2E35ED5A(Global_4272479, 10))
			{
				if ((Global_77248 == 0 && unk_0x636F1F53CC61D2C9(joaat("pi_menu")) > 0) && func_60())
				{
					unk_0x704F8697BB515627(uLocal_91, "SET_FOCUS_LOCK");
					unk_0x9D7453DF8B7E9E0B(1);
					unk_0x35CA0C119E6A2A27("CELL_ACTTL");
					unk_0xA91D83F2CC1345A6(unk_0x3A2A8DAFDBEC4CFE(&Global_4273464));
					unk_0xD4B2C39F7AD5A6A6();
					unk_0x9D7453DF8B7E9E0B(0);
					unk_0x392841D58D2EED1D();
					unk_0xC664C0067EEAB8D1(&Global_4272479, 10);
				}
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_4272479, 10))
		{
			unk_0xC664C0067EEAB8D1(&Global_4272479, 10);
		}
		iLocal_33 = unk_0xDFB7BFA6482FEE1E();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Local_35 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				if (unk_0x0BABEFEA577FCFA4(Local_35, Local_34, 1) > 5f)
				{
					Global_19798.f_1 = 3;
					unk_0x543F5B2D3F90CA6D(0);
				}
				iLocal_32 = unk_0xDFB7BFA6482FEE1E();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x5C6675393464A814(0, 182) && !func_157())
		{
			unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
			iLocal_83 = 0;
			unk_0x704F8697BB515627(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x9D7453DF8B7E9E0B(0);
			func_62("CELL_FOCUS");
			unk_0x9D7453DF8B7E9E0B(1);
			unk_0x392841D58D2EED1D();
		}
	}
	else if (unk_0x5C6675393464A814(0, 182) && !func_157())
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
		iLocal_83 = 1;
		if (!func_61(14))
		{
			unk_0x704F8697BB515627(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x9D7453DF8B7E9E0B(1);
			func_62("CELL_FOCUS");
			unk_0x9D7453DF8B7E9E0B(1);
			unk_0x392841D58D2EED1D();
		}
	}
	if (func_170())
	{
		if ((unk_0x86AF801D34E482FF(2, 186) && iLocal_106 == 0) && !func_157())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
					{
						unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
						unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), "Mood_Normal_1", 0);
						unk_0xB3099507583713CA(unk_0x7D2B9E6A64637269());
						if (Global_19798 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x228A4ED518554B3F(unk_0x7D2B9E6A64637269(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x228A4ED518554B3F(unk_0x7D2B9E6A64637269(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
					{
						unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), "Mood_Normal_1", 0);
						unk_0xB3099507583713CA(unk_0x7D2B9E6A64637269());
						unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
					}
				}
			}
		}
		if ((unk_0x86AF801D34E482FF(2, 185) && iLocal_106 == 0) && !func_157())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0xDA654EB115F9FF7D(sLocal_19[Global_4271203], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xB9B02277BF796C35(1);
							unk_0x0A3938C08965000F(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0xB9B02277BF796C35(0);
						unk_0x0A3938C08965000F(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0xB9B02277BF796C35(1);
					unk_0x0A3938C08965000F(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0xB9B02277BF796C35(0);
					unk_0x0A3938C08965000F(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_157())
	{
		if (unk_0x86AF801D34E482FF(0, 172) && iLocal_106 == 0)
		{
			if (func_170())
			{
				Global_4271204++;
				unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
			}
			if (Global_4271204 == 13)
			{
				func_121(0);
				unk_0xB7E0C2B8718FE8DB(1f);
				unk_0xB5F867E143F78583(sLocal_20[(Global_4271204 - 1)]);
				Global_4271204 = 0;
				func_59();
				if (iLocal_21 == 1)
				{
					unk_0xC664C0067EEAB8D1(&Global_4272479, 2);
					iLocal_21 = 0;
					func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4271204 > 0 && Global_4271204 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0xA08F3C300F9E3468(sLocal_20[Global_4271204], 0);
			}
		}
	}
	if (Global_4271204 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0xAD9D75DD073BF477(sLocal_20[Global_4271204]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xF0783EAFA8892870())
				{
					func_121(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0x191DDA30577F440A(&Global_4272479, 2);
				func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xB7E0C2B8718FE8DB(0.25f);
				unk_0x91501E532C60D30D(sLocal_20[Global_4271204], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4271204 == 1 || Global_4271204 == 3)
			{
			}
			if (Global_4271204 == 2 || Global_4271204 == 4)
			{
			}
		}
	}
	if ((unk_0x86AF801D34E482FF(0, 173) && iLocal_106 == 0) && !func_157())
	{
		if (func_170())
		{
			func_112(0);
			Global_4271203++;
			unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
		}
		if (Global_4271203 == 13)
		{
			Global_4271203 = 0;
		}
		if (Global_4271203 == 0)
		{
			if (func_170())
			{
				func_112(0);
			}
		}
		else
		{
			func_122();
		}
		func_58();
	}
	if ((unk_0x96DF114B59E81B9C(0, 184) && iLocal_106 == 0) && !func_157())
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
			{
				Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
				func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_160(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0xDFB7BFA6482FEE1E();
				while (unk_0xDFB7BFA6482FEE1E() < (iLocal_86 + iLocal_90) && Global_19798.f_1 > 3)
				{
					func_155();
					func_137();
					func_89();
					unk_0xDA81FB7770247CC0();
					wait(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0x791B4C3811D53DFA(iLocal_63);
					iLocal_82 = 1;
					func_57(1);
					func_56();
					unk_0x191DDA30577F440A(&Global_7670, 3);
					iLocal_32 = unk_0xDFB7BFA6482FEE1E();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_57(0);
					iLocal_82 = 0;
					unk_0xC664C0067EEAB8D1(&Global_7670, 3);
				}
				iLocal_86 = unk_0xDFB7BFA6482FEE1E();
				while (unk_0xDFB7BFA6482FEE1E() < (iLocal_86 + iLocal_88) && Global_19798.f_1 > 3)
				{
					func_155();
					func_137();
					func_89();
					unk_0xDA81FB7770247CC0();
					wait(0);
				}
				func_160(uLocal_91, "OPEN_SHUTTER");
				if (func_170())
				{
					if (Global_4271204 == 0)
					{
						if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
						{
							func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
				{
					func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_137();
				func_155();
				if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0x86AF801D34E482FF(0, 40) || unk_0x86AF801D34E482FF(0, 41))
			{
				fLocal_65 = unk_0x1957A6389047831E();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x964C4D363AF812CB(iLocal_63))
					{
						unk_0x9B0169E27978C1A2(iLocal_63, "Camera_Zoom", &Global_19787, 1);
					}
				}
				else
				{
					unk_0x791B4C3811D53DFA(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0x5C6675393464A814(0, 40) || unk_0x5C6675393464A814(0, 41))
		{
			fLocal_65 = unk_0x1957A6389047831E();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x964C4D363AF812CB(iLocal_63))
				{
					unk_0x9B0169E27978C1A2(iLocal_63, "Camera_Zoom", &Global_19787, 1);
				}
			}
			else
			{
				unk_0x791B4C3811D53DFA(iLocal_63);
			}
		}
		else
		{
			unk_0x791B4C3811D53DFA(iLocal_63);
		}
	}
	if ((func_107(2, Global_19767, 0) && !func_119()) && !func_107(2, Global_19766, 0))
	{
		fLocal_38 = unk_0x10643A357794B3BD();
		fLocal_39 = unk_0x6719F2C27E4D132C();
		unk_0x09B576C6F15481A9(0, 0);
		unk_0x191DDA30577F440A(&Global_7668, 21);
		unk_0x791B4C3811D53DFA(iLocal_63);
		iLocal_78 = 1;
		func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_161(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x9B0169E27978C1A2(-1, "Camera_Shoot", &Global_19787, 1);
		func_160(uLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		unk_0x544677934225FF04(Local_43, 0);
		if (!func_170())
		{
			func_112(1);
		}
		Global_22161 = 1;
		unk_0x57A7F754B6B8906E(0, 1);
		while (Global_22160 < 6 && Global_19798.f_1 > 3)
		{
			func_155();
			func_137();
			func_89();
			func_142();
			unk_0xDA81FB7770247CC0();
			wait(0);
		}
		unk_0xEB9D3AE49A59372C(0, 0);
		if (Global_19740)
		{
			func_1(1);
		}
		iLocal_86 = unk_0xDFB7BFA6482FEE1E();
		while (unk_0xDFB7BFA6482FEE1E() < (iLocal_86 + iLocal_89) && Global_19798.f_1 > 3)
		{
			func_155();
			func_137();
			func_89();
			unk_0xDA81FB7770247CC0();
			wait(0);
		}
		settimera(0);
		func_160(uLocal_91, "OPEN_SHUTTER");
		unk_0xC664C0067EEAB8D1(&Global_7668, 21);
		func_124();
		if (Global_19798.f_1 > 3)
		{
			if (Global_77248)
			{
				func_21(1087, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x39255E004257D303(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x39255E004257D303(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x39255E004257D303(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_121(0);
		}
		func_137();
	}
	if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
	{
		if (func_107(2, Global_19770, 0))
		{
			unk_0x09B576C6F15481A9(0, 0);
			wait(0);
			unk_0xDA81FB7770247CC0();
			func_155();
			wait(0);
			unk_0xDA81FB7770247CC0();
			func_155();
			unk_0x3711369E6CE3291A();
			unk_0xCEADF02ABEE1B4F9();
			Global_22162 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22158 = 1;
			unk_0x57A7F754B6B8906E(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			func_117(0, 0);
			func_121(0);
			iLocal_66 = 0;
			func_112(1);
			if (!Global_2544210.f_6620)
			{
				unk_0x191DDA30577F440A(&Global_7668, 9);
			}
			unk_0x543F5B2D3F90CA6D(0);
			iLocal_93 = 0;
			func_161(Global_19779, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_15(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_14(unk_0x7D2B9E6A64637269());
			if (func_13(iVar0) && (!func_61(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_13(Global_112293.f_2361.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_18()
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

int func_19(int iParam0, var uParam1)
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

void func_20()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_19735 = { Global_19751[Global_19743 /*3*/] };
	func_110(0, 1);
	func_117(0, 0);
	func_121(0);
	iLocal_66 = 0;
	func_112(1);
	if (!unk_0x234B68AC2E35ED5A(Global_7669, 28))
	{
		if (unk_0x84070F79DE396386() == 0)
		{
			if (unk_0x60FF5ED57C36A351())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_26(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_26(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_26(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_26(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_26(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_26(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_26(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_26(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_26(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_26(uParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_26(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_26(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_26(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_26(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_26(uParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_26(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_26(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_26(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_26(uParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_26(uParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_26(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_26(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_26(uParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_26(uParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
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

int func_25(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_26(uParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

var func_27()
{
	return Global_1312763;
}

void func_28()
{
	if (iLocal_106 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_157())
		{
			func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
			func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
		}
		else
		{
			func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
			func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_77248 == 0 && unk_0x636F1F53CC61D2C9(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
					func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_73(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 7f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
			{
				if (!unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
				{
					if (!func_157())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
						func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
						func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
						if (!unk_0x0D901EFDFD7EF9D5(0))
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 210, 1), "CELL_284");
						}
						else
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xD895F953C52A8886(0, 29, 1), "CELL_284");
						}
					}
					if (!func_157())
					{
						if (func_170())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 182, 1), "CELL_FOCUS");
							}
							func_73(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						func_50(3f);
						func_49(4f);
						func_73(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_157())
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
				{
					if (!func_157())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
						func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
						if (!unk_0x0D901EFDFD7EF9D5(0))
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 210, 1), "CELL_284");
						}
						else
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xD895F953C52A8886(0, 29, 1), "CELL_284");
						}
					}
					if (!func_157())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
					}
					if (!func_157())
					{
						if (func_170())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 182, 1), "CELL_FOCUS");
							}
							func_73(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						func_50(3f);
						func_49(4f);
						func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
		unk_0x82D42F43BE26EB72(fLocal_40);
		unk_0x392841D58D2EED1D();
		func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_73(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x908D1ACF42DAF9B8(0, 174, 1), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x7D2B9E6A64637269(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 6;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_39(iParam0);
			if (!iVar3 == -1)
			{
				if (func_38(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_37(iParam0);
			if (!iVar4 == -1)
			{
				if (func_35(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x02BFF15CAA701972())
		{
			iVar5 = func_34(iParam0);
			if (!iVar5 == 0)
			{
				if (func_33(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x094C1D2DFE050D6E(iParam0, 1);
	return uVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x228A4ED518554B3F(iParam0, 0);
	return uVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x228A4ED518554B3F(iParam0, 0);
	return uVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 59:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 60:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 62:
				case 63:
				case 64:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_40(2, 58, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xC664C0067EEAB8D1(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xC664C0067EEAB8D1(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
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
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_73(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x908D1ACF42DAF9B8(0, 172, 1), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1679387)
	{
		fParam0 = -1f;
	}
	func_73(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x908D1ACF42DAF9B8(0, 173, 1), "CELL_FILTER");
}

void func_51()
{
	if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 183, 1), "CELL_GRID");
	func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_77248 == 0 && unk_0x636F1F53CC61D2C9(joaat("pi_menu")) > 0) && func_60())
		{
			unk_0x704F8697BB515627(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x9D7453DF8B7E9E0B(1);
			unk_0x35CA0C119E6A2A27("CELL_ACTTL");
			unk_0xA91D83F2CC1345A6(unk_0x3A2A8DAFDBEC4CFE(&Global_4273464));
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_52(float fParam0)
{
	func_73(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x908D1ACF42DAF9B8(0, 175, 1), "CELL_ACCYC");
}

void func_53()
{
	func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
	func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
	func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
	func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_280");
	unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
	unk_0x82D42F43BE26EB72(fLocal_40);
	unk_0x392841D58D2EED1D();
	func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
		func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
		if (iLocal_82)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_170())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_77248 == 0 && unk_0x636F1F53CC61D2C9(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
					func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_73(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 7f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
			{
				if (!unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
					func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
					if (func_170())
					{
						func_50(6f);
						func_49(7f);
						func_73(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						func_50(3f);
						func_49(4f);
						func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) == 2)
			{
				if (!func_157())
				{
					if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x908D1ACF42DAF9B8(2, 183, 1), "CELL_GRID");
				func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
				func_73(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
				if (func_170())
				{
					if (!func_157())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 182, 1), "CELL_FOCUS");
						}
						func_73(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_157())
					{
						if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
					if (func_170())
					{
						if (!func_157())
						{
							func_50(4f);
							func_49(5f);
							func_73(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x908D1ACF42DAF9B8(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
		unk_0x82D42F43BE26EB72(fLocal_40);
		unk_0x392841D58D2EED1D();
		func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_284");
	func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_285");
	func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
	func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 177, 1), "CELL_281");
	unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
	unk_0x82D42F43BE26EB72(fLocal_40);
	unk_0x392841D58D2EED1D();
	func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_82)
	{
		unk_0x3A13FD2813C8251F(fLocal_36, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_128334 == 1)
	{
	}
	else if (Global_4456448.f_128335 == 1)
	{
	}
	else
	{
		unk_0x75D6926F4F0071F0(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 1)
	{
		if (unk_0xDA654EB115F9FF7D(sLocal_19[Global_4271203], "phone_cam12DUMMY"))
		{
			unk_0xB9B02277BF796C35(0);
			unk_0x0A3938C08965000F(0);
		}
		else
		{
			unk_0xB9B02277BF796C35(1);
			unk_0x0A3938C08965000F(1);
		}
	}
}

void func_59()
{
	func_161(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_170())
	{
		if (!Global_1679387)
		{
			unk_0x81498BC667997F2F("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if ((unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/] || unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/]) || unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
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
	return 1;
}

bool func_61(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_63()
{
	if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 30, 1), "CELL_RT_RSTICK");
		func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 1, 1), "CELL_RT_RSTICK");
		func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0x0D901EFDFD7EF9D5(2) || unk_0xE22116C6D321FECA())
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x908D1ACF42DAF9B8(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_73(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xD895F953C52A8886(0, 1, 1), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x908D1ACF42DAF9B8(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x908D1ACF42DAF9B8(0, 39, 1), "CELL_LT_LSTICKZ");
		func_73(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x908D1ACF42DAF9B8(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_72())
	{
		return "FHHUD_SENDLES";
	}
	if (func_70())
	{
		return "CSH_PHONEC";
	}
	switch (func_66(unk_0x1146A9AE09CE2B14()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO";
		
		default:
	}
	return "CELL_287";
}

int func_66(int iParam0)
{
	if (func_69(iParam0) == 271)
	{
		return func_67(iParam0);
	}
	return -1;
}

int func_67(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_70()
{
	switch (func_71(unk_0x1146A9AE09CE2B14()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_69(iParam0) == 256)
	{
		return func_67(iParam0);
	}
	return -1;
}

int func_72()
{
	switch (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33)
	{
		case 233:
			switch (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1710054)
	{
		return 1;
	}
	return 0;
}

void func_73(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (!unk_0xAB6A270F84A8781E(uParam3))
	{
		func_74(uParam3);
	}
	if (!unk_0xAB6A270F84A8781E(sParam4))
	{
		func_62(sParam4);
	}
	unk_0x392841D58D2EED1D();
}

void func_74(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

void func_75()
{
	if (Global_77248)
	{
		switch (Global_22242)
		{
			case 0:
				if (unk_0x0D901EFDFD7EF9D5(2))
				{
					func_156("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_156("CELL_CAM_SELFIE_0", -1);
				}
				Global_22242++;
				break;
			
			case 1:
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					if (unk_0x0D901EFDFD7EF9D5(2))
					{
						func_156("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_156("CELL_CAM_SELFIE_1", -1);
					}
					Global_22242++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22241)
		{
			case 0:
				if (unk_0x0D901EFDFD7EF9D5(2))
				{
					func_156("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_156("CELL_CAM_SELFIE_0", -1);
				}
				Global_22241++;
				break;
			
			case 1:
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					if (unk_0x0D901EFDFD7EF9D5(2))
					{
						func_156("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_156("CELL_CAM_SELFIE_1", -1);
					}
					Global_22241++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x5C6675393464A814(2, iVar10) && !unk_0x5C6675393464A814(2, iVar9))
	{
		unk_0x366E7F593105797F(0, 2, 1);
		unk_0x366E7F593105797F(0, 1, 1);
		iVar0 = floor(unk_0xA1108F381688010B(0, 30)) * 127;
		iVar1 = floor(unk_0xA1108F381688010B(0, 31)) * 127;
		iVar2 = floor(unk_0xA1108F381688010B(0, 1)) * 127;
		iVar3 = floor(unk_0xA1108F381688010B(0, 2)) * 127;
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			if (unk_0x909F156FC4077611(iVar0) > 28 || unk_0x909F156FC4077611(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0x909F156FC4077611(iVar2) > 28 || unk_0x909F156FC4077611(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			fVar7 = unk_0xA1108F381688010B(0, 290);
			fVar8 = unk_0xA1108F381688010B(0, 291);
			if (unk_0xA65C4F563B7CF68E())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x909F156FC4077611(iVar0) > 28 || unk_0x909F156FC4077611(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_79(fVar5);
		func_78(fVar6);
		func_77(fVar4);
	}
	else if (!unk_0x5C6675393464A814(2, iVar9))
	{
		unk_0x681AE3DAF3A73058(0, 2, 1);
		unk_0x681AE3DAF3A73058(0, 1, 1);
	}
}

void func_77(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0x91C0C081C79E8F3D(fLocal_111);
}

void func_78(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0x3826166E8F5C2A2E(fLocal_112);
}

void func_79(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x04E20025A2336736(fLocal_113);
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x5C6675393464A814(2, iVar10))
		{
			if (unk_0x86AF801D34E482FF(2, 178) && !func_157())
			{
				unk_0xDD7194F34583240D(0.5f);
				unk_0x6818D70197C8EDD4(0.85f);
				unk_0x3C06ADE9C0AB03AF(0.5f);
				unk_0x0BCD7FC862B1ADB9(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x5C6675393464A814(2, iVar10) && !unk_0x5C6675393464A814(2, iVar11))
	{
		if (unk_0x86AF801D34E482FF(2, 178) && !func_157())
		{
			unk_0xDD7194F34583240D(0.5f);
			unk_0x6818D70197C8EDD4(0.85f);
			unk_0x3C06ADE9C0AB03AF(0.5f);
			unk_0x0BCD7FC862B1ADB9(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0x366E7F593105797F(0, 2, 1);
		unk_0x366E7F593105797F(0, 1, 1);
		iVar0 = floor(unk_0xA1108F381688010B(0, 30)) * 127;
		iVar1 = floor(unk_0xA1108F381688010B(0, 31)) * 127;
		iVar2 = floor(unk_0xA1108F381688010B(0, 1)) * 127;
		iVar3 = floor(unk_0xA1108F381688010B(0, 2)) * 127;
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			iVar1 = floor(unk_0xA1108F381688010B(0, 39)) * 127;
			fVar8 = unk_0xA1108F381688010B(0, 290);
			fVar9 = unk_0xA1108F381688010B(0, 291);
			if (unk_0xA65C4F563B7CF68E())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x909F156FC4077611(iVar2) > 15 || unk_0x909F156FC4077611(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x909F156FC4077611(iVar0) > 28 || unk_0x909F156FC4077611(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_84(fVar6);
		func_83(fVar7);
		func_82(fVar4);
		if (!func_61(14))
		{
			func_81(fVar5);
		}
	}
	else if (!unk_0x51794501073F0A33(2, iVar11))
	{
		unk_0x681AE3DAF3A73058(0, 2, 1);
		unk_0x681AE3DAF3A73058(0, 1, 1);
	}
	if (!unk_0x51794501073F0A33(2, iVar10) && !unk_0x51794501073F0A33(2, iVar11))
	{
		iVar0 = floor(unk_0xA1108F381688010B(0, 30)) * 127;
		iVar1 = floor(unk_0xA1108F381688010B(0, 31)) * 127;
		iVar2 = floor(unk_0xA1108F381688010B(0, 290)) * 127;
		iVar3 = floor(unk_0xA1108F381688010B(0, 291)) * 127;
		iVar2 = floor(unk_0xA1108F381688010B(0, 294)) * 127;
		iVar2 = floor(unk_0xA1108F381688010B(0, 295)) * 127;
		iVar3 = floor(unk_0xA1108F381688010B(0, 292)) * 127;
		iVar3 = floor(unk_0xA1108F381688010B(0, 293)) * 127;
		if (unk_0x909F156FC4077611(iVar2) > 28 || unk_0x909F156FC4077611(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x909F156FC4077611(iVar0) > 28 || unk_0x909F156FC4077611(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(14))
		{
			func_81(fVar5);
		}
	}
}

void func_81(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0x3C06ADE9C0AB03AF(fLocal_109);
}

void func_82(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x0BCD7FC862B1ADB9(fLocal_110);
}

void func_83(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x6818D70197C8EDD4(fLocal_108);
}

void func_84(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0xDD7194F34583240D(fLocal_107);
}

void func_85()
{
	if (Global_77508 || Global_77509)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_128334 == 0 && Global_4456448.f_128335 == 0)
			{
				unk_0x44EF5678D6916481(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_19740)
		{
			if (Global_19984)
			{
				if (iLocal_100 == 0)
				{
					if (Global_19798.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_87(255, 255, 255, 255);
			func_86(0.059f, 0.644f, "CELL_284", 0);
			func_87(255, 255, 255, 255);
			func_86(0.165f, 0.644f, "CELL_285", 0);
			func_87(255, 255, 255, 255);
			func_86(0.275f, 0.75f, "CELL_280", 0);
			func_87(255, 255, 255, 255);
			func_86(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19740)
	{
	}
	else
	{
		func_87(255, 255, 255, 255);
		func_86(0.275f, 0.75f, func_65(), 0);
		func_87(255, 255, 255, 255);
		func_86(0.275f, 0.79f, "CELL_286", 0);
		func_87(255, 255, 255, 255);
		func_86(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_86(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, iParam3);
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x9E8B548C035F223D(0.4f, 0.4f);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(1, 0, 0, 0, 205);
	unk_0x00DEC68C32788DCD(1);
	unk_0x57BF57F8A1C8167A(0);
	unk_0x968AC0BD45D79791(iParam0, iParam1, iParam2, iParam3);
}

void func_88()
{
	unk_0x3A13FD2813C8251F(fLocal_38, 1065353216);
	unk_0xDF23DCD7A3E1B7A5(fLocal_39);
}

void func_89()
{
	unk_0x366E7F593105797F(0, 25, 1);
	unk_0x366E7F593105797F(0, 44, 1);
	unk_0x366E7F593105797F(0, 3, 1);
	unk_0x366E7F593105797F(0, 4, 1);
	unk_0x366E7F593105797F(0, 5, 1);
	unk_0x366E7F593105797F(0, 6, 1);
	unk_0x366E7F593105797F(0, 1, 1);
	unk_0x366E7F593105797F(0, 2, 1);
	unk_0x366E7F593105797F(0, 39, 1);
	unk_0x366E7F593105797F(0, 47, 1);
	unk_0x366E7F593105797F(0, 56, 1);
}

void func_90()
{
	Local_44 = { Global_19751[Global_19743 /*3*/] };
	if (Global_19740)
	{
		if (func_93())
		{
			unk_0x3AEC124A3999B3D1(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			Local_42.x = (Local_42.x + 12f);
		}
		if (Local_42.x > Local_44.x || Local_42.x == Local_44.x)
		{
			Local_42.x = Local_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (unk_0x234B68AC2E35ED5A(Global_7670, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (func_93() == 0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7670, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.x = (Local_44.x - 14f);
		}
		else
		{
			Local_44 = { Global_19744[Global_19743 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0xA48FA5CE681A5230(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			unk_0x544677934225FF04(Local_43, 0);
			if (!unk_0x234B68AC2E35ED5A(Global_7668, 22))
			{
				if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_92();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_91();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_91()
{
	func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_286");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 178, 1), "CELL_277");
		func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
	unk_0x82D42F43BE26EB72(fLocal_40);
	unk_0x392841D58D2EED1D();
	func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_92()
{
	func_161(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_161(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
		func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_286");
	}
	else
	{
		func_73(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x908D1ACF42DAF9B8(2, 179, 1), func_65());
		func_73(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x908D1ACF42DAF9B8(2, 178, 1), "CELL_277");
		func_73(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x908D1ACF42DAF9B8(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x704F8697BB515627(uLocal_92, "SET_MAX_WIDTH");
	unk_0x82D42F43BE26EB72(fLocal_40);
	unk_0x392841D58D2EED1D();
	func_161(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			if (Global_19741 == 0)
			{
				if (Global_6983 != 128)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (Global_21125 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return 0;
		}
		if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			return 0;
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xEF482630D7014464())
			{
				if (unk_0x0297E633EADA2182(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()) || unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269())) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || (unk_0x14EE58C04CEAE6C4(unk_0x7D2B9E6A64637269()) && !(unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 17) && (unk_0xE45310E861787FC2() || Global_1660795))))
		{
			return 0;
		}
		if (Global_111341)
		{
			return 0;
		}
	}
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEF482630D7014464()))
	{
		iVar2 = 1;
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if ((((((((unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar3)) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iVar3))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(iVar3))) || unk_0x6471F4759775FCA4(iVar3) == joaat("seashark")) || unk_0x6471F4759775FCA4(iVar3) == joaat("seashark2")) || unk_0x6471F4759775FCA4(iVar3) == joaat("rhino")) || unk_0x6471F4759775FCA4(iVar3) == joaat("submersible")) || unk_0x6471F4759775FCA4(iVar3) == joaat("submersible2")) || unk_0x6471F4759775FCA4(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4272757 || iVar2 == 1)
	{
		if (unk_0x636F1F53CC61D2C9(joaat("apptrackify")) > 0 || Global_112293.f_14049.f_89)
		{
			if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_94()
{
	unk_0x366E7F593105797F(0, 47, 1);
	unk_0x203739B163D4D88E(0, Global_19768);
	Local_43 = { Global_19758 };
	Local_44 = { Global_19751[Global_19743 /*3*/] };
	if (func_93())
	{
		unk_0xAEC698CEDC543F39(&Local_45, 0);
		Local_43 = { Local_45 };
		unk_0x3AEC124A3999B3D1(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_19740)
	{
		func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_82 = 0;
		if (unk_0x234B68AC2E35ED5A(Global_7668, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_95();
		}
		if (iLocal_72)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
			{
				Local_42.x = (Local_42.x + 2f);
			}
			else
			{
				Local_42.x = (Local_42.x + 12f);
			}
		}
		if (Local_42.x > Local_44.x || Local_42.x == Local_44.x)
		{
			Local_42.x = Local_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.x = (Local_41.x + 1f);
			}
			if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
			{
				Local_41.x = Local_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_93() == 0)
			{
				unk_0x544677934225FF04(Local_41, 0);
				unk_0xA48FA5CE681A5230(Local_42);
			}
			func_110(0, 1);
		}
		else if (func_93() == 0)
		{
			unk_0x544677934225FF04(Local_41, 0);
			unk_0xA48FA5CE681A5230(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_95();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x + 1f);
		}
		if (Local_41.x > Local_43.x || Local_41.x == Local_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_95();
		}
	}
	unk_0x544677934225FF04(Local_41, 0);
}

void func_95()
{
	func_1(0);
	if (func_93() == 0)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 30))
		{
			unk_0xA48FA5CE681A5230(Global_19744[Global_19743 /*3*/]);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19751[Global_19743 /*3*/]);
		}
		Local_41 = { Local_43 };
		unk_0x544677934225FF04(Local_41, 0);
	}
	Global_22158 = 0;
	func_117(0, 0);
	func_121(0);
	iLocal_66 = 0;
	func_112(1);
	Global_19785 = 1;
	Global_22161 = 0;
	if (Global_19798.f_1 > 4)
	{
		Global_19798.f_1 = 6;
		Global_19776 = 1;
		func_96();
	}
	if (unk_0xDAE4BC89A198A6AF(uLocal_91))
	{
		func_160(uLocal_91, "SHUTDOWN_MOVIE");
	}
	wait(0);
	unk_0xDA81FB7770247CC0();
	unk_0x3D9BC07C93913E04(&uLocal_92);
	unk_0x3D9BC07C93913E04(&uLocal_91);
	if (Global_19986 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 17);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 18);
	unk_0xC664C0067EEAB8D1(&Global_7668, 21);
	unk_0x57A7F754B6B8906E(0, 1);
	unk_0xC664C0067EEAB8D1(&Global_7670, 3);
	unk_0xC664C0067EEAB8D1(&Global_4272479, 3);
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x58DF9C9B7E628ADD(unk_0x1146A9AE09CE2B14(), 1);
	unk_0x956EB3331C33B055(15);
	Global_22162 = 1;
	unk_0x791B4C3811D53DFA(iLocal_63);
	unk_0xBAB6F7501A822416(iLocal_63);
	unk_0x83C4A7EF0169D5FD();
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), "Mood_Normal_1", 0);
		unk_0xB3099507583713CA(unk_0x7D2B9E6A64637269());
	}
	func_112(1);
	unk_0xB9B02277BF796C35(0);
	unk_0x0A3938C08965000F(0);
	unk_0xB7E0C2B8718FE8DB(1f);
	if (Global_4271204 > 0 && Global_4271204 < 13)
	{
		unk_0xB5F867E143F78583(sLocal_20[Global_4271204]);
	}
	func_110(0, 1);
	if (func_168(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0x4BFE89D21F9885DC();
}

void func_96()
{
	struct<3> Var0;
	
	if (Global_19781 == 1)
	{
		return;
	}
	if (Global_19798.f_1 < 4)
	{
		return;
	}
	while (!unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		if (Global_77248)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19798.f_1)
	{
		case 6:
			func_161(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_104(Global_8273);
			if (Global_8273 == 1)
			{
				func_161(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19802;
			}
			else
			{
				func_161(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19803), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19803;
			}
			if (Global_19786)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19986 == 0)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (Global_77248)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else
			{
				if (Global_19985 == 1)
				{
					if (Global_19786)
					{
						func_103(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_103(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19786)
				{
					func_103(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_103(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x191DDA30577F440A(&Global_7668, 17);
			}
			if (Global_77248)
			{
				func_101();
				unk_0xC664C0067EEAB8D1(&Global_7670, 9);
				func_161(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_161(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_103(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19797 == 1)
			{
				func_100();
				func_161(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0x392841D58D2EED1D();
				}
				else if (func_99(Global_6983, Global_19798) == 0)
				{
					func_103(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_103(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_217", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
				func_161(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21125 == 4 || Global_21125 == 3)
			{
				func_161(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_100();
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0x392841D58D2EED1D();
				}
				else
				{
					if (Global_21383)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_99(Global_6983, Global_19798) == 0)
					{
						func_161(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_103(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_161(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_103(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), &Var0, &(Global_1878[Global_6983 /*29*/].f_3), 0);
					}
				}
				func_161(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_97();
			break;
		
		default:
			break;
	}
}

void func_97()
{
	if (unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		func_98();
		if (Global_19797 == 1)
		{
			if (Global_19786)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21172)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
		else
		{
			func_103(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_103(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_98()
{
	if (Global_77248)
	{
		func_103(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	}
}

int func_99(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

void func_100()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798 == 0)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 1)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 2)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 3)
		{
			switch (Global_4272755)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_101()
{
	if (Global_77248)
	{
		if (func_102() == 0)
		{
			return;
		}
		func_103(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(&Global_7668, 17);
	}
}

int func_102()
{
	return 0;
}

void func_103(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_62(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_62(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_62(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_62(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_104(int iParam0)
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
		if (func_61(14))
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
								func_62(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_62(&(Global_7675[iVar1 /*15*/]));
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
								func_62(&(Global_7675[iVar1 /*15*/]));
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
								func_62(&(Global_7675[iVar1 /*15*/]));
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
								func_62(&(Global_7675[iVar1 /*15*/]));
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
								func_62(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_103(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_105()
{
	switch (iLocal_51)
	{
		case 1:
			unk_0x57A7F754B6B8906E(0, 1);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!unk_0x234B68AC2E35ED5A(Global_7668, 22))
			{
				unk_0x57A7F754B6B8906E(0, 1);
				if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_92();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_91();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
		if (!func_119())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 17);
		}
	}
	else if (func_119())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 17);
	}
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x86AF801D34E482FF(iParam0, uParam1) || (iParam2 == 1 && unk_0x96DF114B59E81B9C(iParam0, iParam1)))
	{
		if (unk_0x3640D836D145B814())
		{
			if (unk_0x4793CFF25F0D14B5() == 0 || (unk_0xFEABE4F1525A0A08() && unk_0x0D901EFDFD7EF9D5(2)))
			{
				return 0;
			}
		}
		if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		if (!func_109())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 18);
		}
	}
	else if (func_109())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 18);
	}
}

bool func_109()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 18);
}

void func_110(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_111(0))
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

int func_111(int iParam0)
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

void func_112(int iParam0)
{
	if ((Global_4456448.f_128334 == 0 && Global_4456448.f_128335 == 0) && !Global_1679387)
	{
		if (func_113(unk_0x1146A9AE09CE2B14()) && iParam0)
		{
			Global_1710126 = 1;
		}
		else
		{
			unk_0x53DE24D8A6C88A9A();
		}
	}
}

int func_113(int iParam0)
{
	if (iParam0 != func_116())
	{
		if (func_115(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_114(Global_2426865[iParam0 /*449*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
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

int func_115(int iParam0, bool bParam1, bool bParam2)
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

int func_116()
{
	return -1;
}

void func_117(int iParam0, int iParam1)
{
	if (Global_4456448.f_128334 == 1)
	{
	}
	else if (Global_4456448.f_128335 == 1)
	{
	}
	else
	{
		unk_0xEB9D3AE49A59372C(iParam0, iParam1);
	}
}

int func_118()
{
	if (unk_0x234B68AC2E35ED5A(Global_7668, 15))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 17);
}

void func_120()
{
	if (Global_19740)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_93())
		{
			unk_0xAEC698CEDC543F39(&Local_45, 0);
			Local_43 = { Local_45 };
			unk_0x3AEC124A3999B3D1(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.x = (Local_42.x - 14f);
			}
			if (Local_42.x < Local_44.x || Local_42.x == Local_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x - 1f);
		}
		if (Local_41.x < Local_43.x || Local_41.x == Local_43.x)
		{
			Local_41.x = Local_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (func_93() == 0)
		{
			unk_0x544677934225FF04(Local_41, 0);
			unk_0xA48FA5CE681A5230(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.x = (Local_41.x - 1f);
		}
		if (Local_41.x < Local_43.x || Local_41.x == Local_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		unk_0x544677934225FF04(Local_41, 0);
	}
	if (Global_19740)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_93())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				unk_0x544677934225FF04(Local_41, 0);
				Local_42 = { Local_44 };
				unk_0xA48FA5CE681A5230(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22159 = 0;
				func_117(1, 1);
				iLocal_66 = 1;
				func_121(1);
				func_59();
				func_122();
				func_57(0);
				settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_137();
				func_161(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
				{
					func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_163();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		unk_0x544677934225FF04(Local_41, 0);
		Global_22159 = 0;
	}
}

void func_121(bool bParam0)
{
	if (func_170())
	{
		if (bParam0)
		{
			if (!unk_0xF0783EAFA8892870())
			{
				unk_0x3E42526AC8977816(1);
				if (Global_4271204 > 0 && Global_4271204 < 99)
				{
					unk_0x91501E532C60D30D(sLocal_20[Global_4271204], 0);
					unk_0xB7E0C2B8718FE8DB(0.25f);
				}
			}
		}
		else if (unk_0xF0783EAFA8892870())
		{
			unk_0x3E42526AC8977816(0);
		}
	}
}

void func_122()
{
	if (Global_4271203 > 0 && Global_4271203 < 99)
	{
		if (!Global_1679387)
		{
			unk_0x81498BC667997F2F(sLocal_19[Global_4271203]);
		}
	}
}

void func_123()
{
	if (Global_19740)
	{
		iLocal_76 = 0;
		func_59();
		func_110(1, 1);
		func_117(1, 1);
		iLocal_66 = 1;
		Global_22162 = 1;
	}
}

void func_124()
{
	if (Global_4456448.f_128334 == 1 && func_125())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (unk_0xDA654EB115F9FF7D(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_125()
{
	if (((((func_132() || func_131()) || func_130()) || func_129()) || func_128()) || func_126())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	return func_127(Global_4456448.f_85535);
}

int func_127(int iParam0)
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

var func_128()
{
	return Global_2453009.f_24;
}

var func_129()
{
	return Global_2453009.f_21;
}

var func_130()
{
	return Global_2453009.f_19;
}

var func_131()
{
	return Global_2453009.f_18;
}

var func_132()
{
	return Global_2453009.f_17;
}

void func_133()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

void func_134()
{
	unk_0x09B576C6F15481A9(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_135()
{
	func_136();
}

void func_136()
{
	if (iLocal_101)
	{
		if (timera() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_137()
{
	if (Global_19798.f_1 > 3)
	{
		if (!unk_0xA300BD5F71A8C704())
		{
			unk_0x43D93129BD1AD792(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_138()
{
	if (func_61(14))
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
		Global_19798 = func_11();
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

void func_139(int iParam0)
{
	if (func_141())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_157())
		{
			func_110(1, 1);
		}
		else
		{
			func_110(0, 0);
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
	if (!func_140())
	{
		Global_19798.f_1 = 3;
	}
}

int func_140()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_142()
{
	unk_0x366E7F593105797F(0, 0, 1);
	unk_0x366E7F593105797F(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0x203739B163D4D88E(0, Global_19771);
		unk_0x203739B163D4D88E(0, Global_19768);
		unk_0x366E7F593105797F(0, 278, 1);
		unk_0x366E7F593105797F(0, 279, 1);
		unk_0x366E7F593105797F(0, 280, 1);
		unk_0x366E7F593105797F(0, 281, 1);
		unk_0x366E7F593105797F(0, 282, 1);
		unk_0x366E7F593105797F(0, 282, 1);
		unk_0x366E7F593105797F(0, 284, 1);
		unk_0x366E7F593105797F(0, 285, 1);
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 114, 1);
		unk_0x366E7F593105797F(0, 71, 1);
		unk_0x366E7F593105797F(0, 72, 1);
		unk_0x366E7F593105797F(0, 74, 1);
		unk_0x366E7F593105797F(0, 75, 1);
		unk_0x366E7F593105797F(0, 76, 1);
		unk_0x366E7F593105797F(0, 73, 1);
		unk_0x366E7F593105797F(0, 77, 1);
		unk_0x366E7F593105797F(0, 78, 1);
		unk_0x366E7F593105797F(0, 286, 1);
		unk_0x366E7F593105797F(0, 287, 1);
		unk_0x366E7F593105797F(0, 79, 1);
		unk_0x366E7F593105797F(0, 80, 1);
		unk_0x366E7F593105797F(0, 81, 1);
		unk_0x366E7F593105797F(0, 82, 1);
		unk_0x366E7F593105797F(0, 86, 1);
		unk_0x366E7F593105797F(0, 59, 1);
		unk_0x366E7F593105797F(0, 60, 1);
		unk_0x366E7F593105797F(0, 61, 1);
		unk_0x366E7F593105797F(0, 62, 1);
		unk_0x366E7F593105797F(0, 63, 1);
		unk_0x366E7F593105797F(0, 64, 1);
		unk_0x366E7F593105797F(0, 87, 1);
		unk_0x366E7F593105797F(0, 88, 1);
		unk_0x366E7F593105797F(0, 89, 1);
		unk_0x366E7F593105797F(0, 90, 1);
		unk_0x366E7F593105797F(0, 107, 1);
		unk_0x366E7F593105797F(0, 108, 1);
		unk_0x366E7F593105797F(0, 109, 1);
		unk_0x366E7F593105797F(0, 110, 1);
		unk_0x366E7F593105797F(0, 111, 1);
		unk_0x366E7F593105797F(0, 112, 1);
		unk_0x366E7F593105797F(0, 113, 1);
		unk_0x366E7F593105797F(0, 114, 1);
		unk_0x366E7F593105797F(0, 91, 1);
		unk_0x366E7F593105797F(0, 92, 1);
		unk_0x366E7F593105797F(0, 68, 1);
		unk_0x366E7F593105797F(0, 102, 1);
		unk_0x366E7F593105797F(0, 136, 1);
		unk_0x366E7F593105797F(0, 137, 1);
		unk_0x366E7F593105797F(0, 138, 1);
		unk_0x366E7F593105797F(0, 139, 1);
		unk_0x366E7F593105797F(0, 102, 1);
	}
}

int func_143()
{
	var uVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x9B73EB6255D4AE81(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x27FC1B0077581B37(uVar0, -1, 0) == unk_0x7D2B9E6A64637269())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_144()
{
	var uVar0;
	
	func_152(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_151())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (func_149(159))
	{
		if (!func_148())
		{
			return 1;
		}
	}
	if (func_149(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_145() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_145()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	switch (func_147())
	{
		case 0:
			return func_146();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_146()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_147()
{
	return Global_31345;
}

bool func_148()
{
	return Global_2453009.f_698;
}

int func_149(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_150()
{
	return Global_2463497;
}

bool func_151()
{
	return Global_2453009.f_693;
}

void func_152(var uParam0)
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
					func_153(iVar0);
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

void func_153(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_115(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(iVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(iVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_154(iVar2, &bVar3))
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

int func_154(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(iParam0))
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

void func_155()
{
	if (iLocal_106 == 1)
	{
		unk_0xEFD424FDD55A6EC7(7);
		unk_0xEFD424FDD55A6EC7(1);
		unk_0xEFD424FDD55A6EC7(3);
		unk_0xEFD424FDD55A6EC7(4);
		unk_0xEFD424FDD55A6EC7(6);
		unk_0xEFD424FDD55A6EC7(8);
		unk_0xEFD424FDD55A6EC7(9);
		unk_0xEFD424FDD55A6EC7(2);
	}
	else
	{
		unk_0xAF98B1BA240CE3DB();
	}
}

void func_156(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

bool func_157()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

void func_158()
{
	if (func_159())
	{
		unk_0x0442C8191F96301B();
		if (unk_0x546A7040214736BA(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22162 = 1;
			Global_19798.f_1 = 3;
			unk_0x83C4A7EF0169D5FD();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0xDAE4BC89A198A6AF(uLocal_91))
				{
					if (func_170())
					{
						if (Global_4271204 == 0)
						{
							if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
							{
								func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
						{
							func_161(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xDAE4BC89A198A6AF(uLocal_91))
			{
				func_161(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_161(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0x83C4A7EF0169D5FD();
	}
}

int func_159()
{
	if (Global_4456448.f_128334 == 1)
	{
		if (Global_77248)
		{
			return 0;
		}
	}
	if (Global_4456448.f_128335 == 1)
	{
		if (Global_77248)
		{
			return 0;
		}
	}
	if (unk_0x60FF5ED57C36A351() || unk_0xDC39E4D9D73B0D14())
	{
		if (unk_0x234B68AC2E35ED5A(Global_7669, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_160(var uParam0, char* sParam1)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x392841D58D2EED1D();
}

void func_161(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_162()
{
	if (Global_77248)
	{
		Global_19798 = 3;
	}
	else
	{
		Global_19798 = func_11();
	}
	if (Global_19798 > 3)
	{
		Global_19798 = 3;
	}
	return Global_112293.f_14049[Global_19798 /*20*/].f_7;
}

void func_163()
{
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 8;
	}
	Global_22161 = 0;
	iLocal_78 = 0;
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		Local_34 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	}
	if (Global_19740)
	{
		while (timera() < iLocal_88)
		{
			wait(0);
			func_137();
			func_89();
			unk_0xDA81FB7770247CC0();
		}
		func_160(uLocal_91, "OPEN_SHUTTER");
		func_155();
		func_124();
		iLocal_80 = 1;
		settimerb(0);
	}
	else
	{
		func_117(1, 1);
		func_121(1);
		func_59();
		func_122();
		func_57(0);
		iLocal_66 = 1;
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 15);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 15);
	}
}

bool func_165()
{
	return Global_1312878;
}

int func_166(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xC49311A2A500FF09(iParam0, iParam1))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(iParam0, iParam1);
			if (unk_0x419E13582192CFEA(uVar0))
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

void func_167()
{
}

int func_168(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && bParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_169()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xB9B9B15BD0EA06BE(unk_0x7D2B9E6A64637269()))
		{
			unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
			unk_0xDD7194F34583240D(fLocal_107);
			unk_0x6818D70197C8EDD4(fLocal_108);
			unk_0x3C06ADE9C0AB03AF(fLocal_109);
		}
		else
		{
			unk_0xDD7194F34583240D(fLocal_107);
			unk_0x6818D70197C8EDD4(fLocal_108);
			unk_0x3C06ADE9C0AB03AF(fLocal_109);
		}
	}
	unk_0x0BCD7FC862B1ADB9(fLocal_110);
	unk_0x91C0C081C79E8F3D(fLocal_111);
	unk_0x3826166E8F5C2A2E(fLocal_112);
	unk_0x04E20025A2336736(fLocal_113);
	func_56();
}

int func_170()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

