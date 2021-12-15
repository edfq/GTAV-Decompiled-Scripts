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
	unk_0x3F57BEDBC381CBC7();
	if (unk_0xE2F2D76A4AA269FF() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_173())
	{
		Global_4534051 = 99;
		Global_4534052 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4534051 = 0;
		Global_4534052 = 0;
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
	func_172();
	if (func_171(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_170();
	iLocal_63 = unk_0xA9ADCC8D104AA552();
	if (Global_19899 == 0)
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
	Global_22318 = 0;
	Global_22319 = 0;
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0xA476005B8C3EEAEB(unk_0xE2D3D51028F0428A()))
		{
			Global_22318 = 1;
		}
		if (unk_0xBF97536EEDB58CBD())
		{
			Global_22318 = 1;
		}
		if (unk_0x55A0C756C4A8220C(unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()), 0))
		{
			Global_22318 = 1;
		}
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			Global_22318 = 1;
		}
		if (unk_0x2852E016E0AC134C(unk_0xE2D3D51028F0428A()))
		{
			Global_22318 = 1;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_22318 = 1;
			}
			uLocal_99 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if ((((unk_0x15CAA6D7B11F1A7C(uLocal_99) == joaat("rhino") || unk_0x15CAA6D7B11F1A7C(iLocal_99) == joaat("cutter")) || unk_0x15CAA6D7B11F1A7C(iLocal_99) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(iLocal_99) == joaat("khanjali")) || (unk_0x15CAA6D7B11F1A7C(iLocal_99) == joaat("barrage") && unk_0x38B74904557F43CC(iLocal_99, func_169(unk_0xE2D3D51028F0428A(), 1))))
			{
				Global_22318 = 1;
			}
			else if (unk_0xAB793EA186AB8DAA(iLocal_99, -1, 0) == unk_0xE2D3D51028F0428A())
			{
				if (unk_0x90544F2E01A178CD(iLocal_99) > 0f)
				{
					if (!Global_77852)
					{
						if (!func_168())
						{
							unk_0xCD41D6F721CB9C3A(unk_0xE2D3D51028F0428A(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_77852)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 0);
		}
	}
	unk_0xB0550BC91B0159D6(&Global_7824, 21);
	func_167(0);
	unk_0xCED9E32812D6C7C7(&Global_7824, 17);
	if (Global_19896 == 0)
	{
		func_166();
	}
	else
	{
		uLocal_91 = unk_0x528279F3F1EEF869("camera_gallery");
		uLocal_92 = unk_0x528279F3F1EEF869("instructional_buttons");
		while (!unk_0x0347CCBD719C8ADC(uLocal_91) || !unk_0x0347CCBD719C8ADC(uLocal_92))
		{
			wait(0);
			unk_0x16E09CCC0BD508DA();
			unk_0x7653D561C9574763(0, 25, 1);
		}
		if (Global_77852)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_165())
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
		func_164(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_163(uLocal_91, "CLOSE_SHUTTER");
		unk_0xEA5DEA46C3EE64D3(Global_19935, "DISPLAY_VIEW");
		unk_0x4F47E317C74C543B(16);
		unk_0x6F06CF0E9AB02847();
	}
	Local_41 = { Global_19914 };
	Local_42 = { Global_19907[Global_19899 /*3*/] };
	Global_22319 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_19954.f_1 > 3)
	{
		Global_19954.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0xB0550BC91B0159D6(&Global_7826, 3);
	}
	func_161();
	unk_0x2E04B7B46A3670E5(4);
	if (unk_0x07A5E5231705659C())
	{
	}
	if (Global_4718592.f_132413)
	{
	}
	if (Global_4718592.f_132415 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		wait(0);
		unk_0x07899AAA5D680386(0, Global_19923);
		unk_0x07899AAA5D680386(0, 186);
		unk_0x16E09CCC0BD508DA();
		unk_0x7653D561C9574763(0, 25, 1);
		unk_0x7653D561C9574763(0, 0, 1);
		if (func_160())
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
			{
				unk_0xCED9E32812D6C7C7(&Global_4535327, 2);
				func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_112915.f_14051.f_81)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 13))
			{
				if (!unk_0xF847447D4467709D())
				{
					if (!unk_0xE2D0C323A1AE5D85(Global_7825, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_160())
						{
							unk_0xCED9E32812D6C7C7(&Global_4535327, 13);
							Global_112915.f_14051.f_81 = 1;
							func_159("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xF1EC2C71FD1371B8())
		{
			if (Global_4718592.f_132412 == 0 && Global_4718592.f_132413 == 0)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
			}
			unk_0xAC765EF46E85A446(7);
			func_158();
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 200, 1);
			}
			unk_0x7653D561C9574763(0, 44, 1);
			unk_0x7653D561C9574763(0, 47, 1);
			unk_0x7653D561C9574763(0, 91, 1);
			unk_0x7653D561C9574763(0, 92, 1);
			unk_0x7653D561C9574763(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0x07899AAA5D680386(0, Global_19927);
			}
			unk_0x07899AAA5D680386(0, Global_19924);
			if ((unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C()) && !func_160())
			{
				iLocal_81 = 1;
				Global_19954.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (unk_0xBF6119A4AD89EF09())
			{
				Global_19954.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
			{
				Global_19954.f_1 = 3;
				unk_0x27F66B7FE7DB7C3A(0);
			}
			if (unk_0x9315DBF7D972F07A())
			{
				if (func_147())
				{
					Global_19954.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
				{
					Global_19954.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
				if ((unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_146())
					{
					}
					else
					{
						Global_19954.f_1 = 3;
						unk_0x27F66B7FE7DB7C3A(0);
					}
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					if (Global_77852 == 1)
					{
						Global_19954.f_1 = 3;
					}
				}
				if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x1CC29FEB3B8D48E8(unk_0xE2D3D51028F0428A()) > 0.3f)
					{
						Global_19954.f_1 = 3;
					}
				}
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					func_145();
					iLocal_99 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x90544F2E01A178CD(iLocal_99) < 0f)
					{
						func_142(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0xFB59E5247FB6B7F9())
							{
								func_142(0);
							}
						}
						else if (!unk_0xFB59E5247FB6B7F9())
						{
							iLocal_67 = 1;
							wait(0);
							unk_0x16E09CCC0BD508DA();
						}
					}
				}
				else if (Global_77852 == 0)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_7824, 18))
					{
						func_141();
						if ((Global_19954 == 0 || Global_19954 == 1) || Global_19954 == 2)
						{
							if (!unk_0xE7B380B27E19C446(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
								{
								}
								else
								{
									Global_19954.f_1 = 3;
									unk_0x27F66B7FE7DB7C3A(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_140();
			}
			if (Global_19954.f_1 < 4)
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
							if (Global_19954.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_138();
									if (Global_22323 == 0 && Global_22320 == 6)
									{
										unk_0xD4DF0F443B8FD284(0, 1);
										unk_0xBE3AC6D6682E4A5E();
										iLocal_100 = 0;
										func_137();
										if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
										{
											Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
										}
										func_136();
										iLocal_60++;
										if (func_173())
										{
											func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_125();
									}
									if (Global_22320 == 0)
									{
										iLocal_100 = 0;
										unk_0xBE3AC6D6682E4A5E();
										if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
										{
											Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
										}
										func_124();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_125();
										if (func_173())
										{
											if (Global_4534052 == 0)
											{
												if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
												{
													func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
										{
											func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_123();
										func_122(1);
									}
								}
								else if (Global_19954.f_1 != 9)
								{
									if (Global_22319 == 1)
									{
										if (Global_22318 == 0)
										{
											func_121();
										}
									}
									else if ((Global_8432 - Global_8431) > Global_8433)
									{
										if (unk_0xA829C9A2767AC8EF() && func_120())
										{
											if (func_119() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x27F66B7FE7DB7C3A(0);
												unk_0xF889BDFCC181BA9F(iLocal_63);
												iLocal_94 = 0;
												if (Global_22318 == 0)
												{
													func_136();
													Global_22318 = 1;
													unk_0xD4DF0F443B8FD284(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_118(0, 0);
													func_122(0);
													iLocal_66 = 0;
													func_113(1);
													iLocal_93 = 0;
													func_111(0, 1);
													func_164(Global_19935, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_109(1);
												}
											}
										}
										if (func_108(2, Global_19922, 0))
										{
											if (func_160())
											{
												if (((Global_1932192 || Global_1574953) || Global_22321) || unk_0xE2D0C323A1AE5D85(Global_7824, 21))
												{
												}
												else if (func_119() && iLocal_78)
												{
												}
												else if (!func_120())
												{
													if (iLocal_78 == 0)
													{
														unk_0x859006DB870314C5(500);
														iLocal_94 = 0;
														func_111(1, 1);
														func_107(1);
													}
												}
											}
											else if (func_119() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x27F66B7FE7DB7C3A(0);
												unk_0xF889BDFCC181BA9F(iLocal_63);
												iLocal_94 = 0;
												if (Global_22318 == 0)
												{
													func_136();
													Global_22318 = 1;
													unk_0xD4DF0F443B8FD284(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_118(0, 0);
													func_122(0);
													iLocal_66 = 0;
													func_113(1);
													iLocal_93 = 0;
													func_111(0, 1);
													func_164(Global_19935, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0xF847447D4467709D())
										{
											func_106();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0xF847447D4467709D())
									{
										func_106();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
										{
											func_106();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0xE2D0C323A1AE5D85(Global_7824, 28))
									{
										func_106();
										iLocal_53 = 0;
									}
									if (Global_22318 == 1)
									{
										func_95();
									}
									else if (Global_19954.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_91();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_124();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
												{
													if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
													{
														func_163(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x320D1840B6DAA1CC();
														while (unk_0x320D1840B6DAA1CC() < (iLocal_86 + iLocal_88) && Global_19954.f_1 > 3)
														{
															func_158();
															func_140();
															func_90();
															unk_0x16E09CCC0BD508DA();
															wait(0);
														}
													}
												}
												if (func_173())
												{
													if (Global_4534052 == 0)
													{
														if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
														{
															func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
												{
													func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_140();
												func_158();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_125();
												iLocal_87 = 0;
												func_163(uLocal_91, "OPEN_SHUTTER");
											}
											func_123();
											func_122(1);
											func_89();
										}
									}
									if (iLocal_94 == 1)
									{
										func_86();
									}
									if (iLocal_80)
									{
										if (timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0xCED9E32812D6C7C7(&Global_7824, 18);
											if (Global_22318 == 0)
											{
												func_111(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22318 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22321 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_90();
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
					if (Global_19954.f_1 > 3)
					{
						if (Global_22319 == 1)
						{
							if (Global_22318 == 0)
							{
								func_121();
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
					if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x8FE9914D4872D601())
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
					iVar0 = unk_0xF715B6DB99DB6ACC();
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
					if (unk_0xF09A4F413B0D30EB(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_111(0, 1);
					}
					if (unk_0xF09A4F413B0D30EB(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x26009F50A14AD073(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_111(0, 1);
							iLocal_104 = 0;
							unk_0x6E6999B535C86055("Gallery");
							unk_0x7BFF54DBEAD33DA7();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0xA7384DAD7CF469DA())
					{
						if (unk_0xF09A4F413B0D30EB(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_111(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0xF09A4F413B0D30EB(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_111(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0xA7384DAD7CF469DA())
					{
						if (unk_0xF09A4F413B0D30EB(2, Global_19926))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_111(0, 1);
							if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x320D1840B6DAA1CC();
							unk_0x7EE945726AFADACF(1);
						}
					}
				}
				else if (unk_0xF09A4F413B0D30EB(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_111(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x320D1840B6DAA1CC();
		if (func_160())
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
			{
				unk_0xCED9E32812D6C7C7(&Global_4535327, 2);
				func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_118(0, 0);
			func_122(0);
			iLocal_66 = 0;
			func_113(1);
			Global_22318 = 0;
			Global_22319 = 0;
			Global_22321 = 0;
			unk_0x705B098546DEB18A(&uLocal_91);
			unk_0x705B098546DEB18A(&uLocal_92);
			unk_0x27F66B7FE7DB7C3A(0);
			if (Global_20146 == 1)
			{
				unk_0xCED9E32812D6C7C7(&Global_7824, 17);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			unk_0xD4DF0F443B8FD284(0, 1);
			unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xB0550BC91B0159D6(&Global_7826, 3);
			unk_0xB0550BC91B0159D6(&Global_4535327, 3);
			unk_0x4FEF096D3AB4AA8C(15);
			Global_22322 = 1;
			unk_0xF889BDFCC181BA9F(iLocal_63);
			unk_0xCDBCC1BC1184B002(iLocal_63);
			unk_0xBE3AC6D6682E4A5E();
			func_113(1);
			unk_0x3CDDEB389E6F7E65(0);
			unk_0x78D4941E4DBEDF3C(0);
			unk_0x3DF0D49DDCC957A5(1f);
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
				unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
			}
			if (Global_4534052 > 0 && Global_4534052 < 13)
			{
				unk_0x861D35D42CFD2991(sLocal_20[Global_4534052]);
			}
			unk_0xB0550BC91B0159D6(&Global_7824, 18);
			if (func_160())
			{
				func_111(1, 1);
			}
			else
			{
				func_111(0, 1);
			}
			if (func_171(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0xAFBDF6A5E54114C1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x2374AA601C2C4709(1);
		}
		else if (Global_19954.f_1 > 3)
		{
			unk_0x2374AA601C2C4709(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4535605 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 3) || Global_19954.f_1 == 0) || Global_19898 == 1)
	{
		Global_19941 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = unk_0x78BB5808602D08AA(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0x08B0CE958E38AC0D();
			iLocal_61 = unk_0x468404757B8A82C2();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0x0347CCBD719C8ADC(uLocal_91))
					{
						if (func_173())
						{
							if (Global_4534052 == 0)
							{
								if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
								{
									func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
							{
								func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x0347CCBD719C8ADC(uLocal_91))
				{
					func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0xBE3AC6D6682E4A5E();
			break;
		
		case 1:
			if (!unk_0xABF37173278F2C66())
			{
				unk_0x65F03588435FE39B("CELL_SPINNER2");
				unk_0xA22CDE353F373A10(1);
			}
			break;
		
		case 2:
			if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_19954.f_1 = 3;
				Global_22322 = 1;
			}
			unk_0xBE3AC6D6682E4A5E();
			break;
	}
}

void func_5()
{
	if (func_108(2, Global_19923, 0))
	{
		func_1(0);
		if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
		{
			unk_0x27F66B7FE7DB7C3A(0);
			settimerb(0);
			func_137();
			iLocal_78 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_136();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7825, 14))
			{
				func_159("CELL_299", -1);
			}
			else
			{
				func_136();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_111(1, 1);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_158();
			unk_0x16E09CCC0BD508DA();
			func_90();
			func_145();
			func_140();
		}
		unk_0x27F66B7FE7DB7C3A(0);
		func_137();
		settimerb(0);
		iLocal_78 = 0;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
		func_125();
		func_136();
	}
	if (func_108(2, Global_19927, 0))
	{
		func_1(0);
		if (func_119() || unk_0xE2D0C323A1AE5D85(Global_7825, 28))
		{
		}
		else
		{
			unk_0x27F66B7FE7DB7C3A(0);
			settimerb(0);
			iLocal_87 = 1;
			func_137();
			iLocal_78 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_136();
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
	{
		if (func_108(2, Global_19926, 0))
		{
			func_1(0);
			unk_0x27F66B7FE7DB7C3A(0);
			unk_0x3DE812D5BE11533E(0, 0);
			wait(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			wait(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0xEE35B1932EE60B67();
			unk_0x2CF943308FEFB496();
			Global_22322 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_111(0, 1);
			Global_22318 = 1;
			unk_0xD4DF0F443B8FD284(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_118(0, 0);
			func_122(0);
			iLocal_66 = 0;
			func_113(1);
			if (!Global_2810287.f_6645)
			{
				unk_0xCED9E32812D6C7C7(&Global_7824, 9);
			}
			iLocal_93 = 0;
			func_164(Global_19935, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_19943, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_22323 = 1;
	unk_0xD4DF0F443B8FD284(0, 1);
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
	if (Global_19954.f_1 < 4)
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
	
	if (unk_0x3A76A0944BE2C291(2))
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
		func_81();
		func_77();
		func_76();
		fLocal_36 = unk_0xD5B0BDC980EEB92F();
		fLocal_37 = unk_0x02AC46BF770385C4();
		if (iLocal_84 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, iVar0) && !unk_0x4C1B8C5717647539(2, iVar1))
			{
				iLocal_84 = 1;
				func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
				unk_0xCA5D23E5F0F0306F(fLocal_40);
				unk_0x6F06CF0E9AB02847();
				func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x4C1B8C5717647539(2, iVar0) || unk_0x4C1B8C5717647539(2, iVar1))
		{
			iLocal_84 = 0;
			func_125();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, iVar1) && !unk_0x4C1B8C5717647539(2, iVar0))
			{
				iLocal_85 = 1;
				func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
					func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
				}
				else if (!func_160())
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
				}
				else
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
					func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
				}
				func_63();
				unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
				unk_0xCA5D23E5F0F0306F(fLocal_40);
				unk_0x6F06CF0E9AB02847();
				func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x4C1B8C5717647539(2, iVar1) || unk_0x4C1B8C5717647539(2, iVar0))
		{
			iLocal_85 = 0;
			func_125();
		}
	}
	else
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
	if (unk_0xB1C1E679BD17A4F0(2))
	{
		func_125();
	}
	func_145();
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 200, 1);
	}
	if (func_160())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
		{
			unk_0xCED9E32812D6C7C7(&Global_4535327, 2);
			func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0xF09A4F413B0D30EB(2, 183) && iLocal_106 == 0) && !func_160())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
				{
					unk_0xB0550BC91B0159D6(&Global_4535327, 2);
					if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
					{
						func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&Global_4535327, 2);
					func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0xEA5DEA46C3EE64D3(uLocal_91, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(0);
			func_62("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
		if (!func_61(14))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_4535327, 10))
			{
				if ((Global_77852 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_60())
				{
					unk_0xEA5DEA46C3EE64D3(uLocal_91, "SET_FOCUS_LOCK");
					unk_0xD7D6BA6E36AEC182(1);
					unk_0x4ADC8B166E139423("CELL_ACTTL");
					unk_0x76DB21247AE4E4E2(unk_0xAEF70623D03F7B02(&Global_4536312));
					unk_0xD1D4F8D5470AFA4C();
					unk_0xD7D6BA6E36AEC182(0);
					unk_0x6F06CF0E9AB02847();
					unk_0xB0550BC91B0159D6(&Global_4535327, 10);
				}
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_4535327, 10))
		{
			unk_0xB0550BC91B0159D6(&Global_4535327, 10);
		}
		iLocal_33 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_35 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				if (unk_0x987A5F1E1A67E3C0(Local_35, Local_34, 1) > 5f)
				{
					Global_19954.f_1 = 3;
					unk_0x27F66B7FE7DB7C3A(0);
				}
				iLocal_32 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x4C1B8C5717647539(0, 182) && !func_160())
		{
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
			iLocal_83 = 0;
			unk_0xEA5DEA46C3EE64D3(uLocal_91, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(0);
			func_62("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
	}
	else if (unk_0x4C1B8C5717647539(0, 182) && !func_160())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
		iLocal_83 = 1;
		if (!func_61(14))
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_91, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(1);
			func_62("CELL_FOCUS");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x6F06CF0E9AB02847();
		}
	}
	if (func_173())
	{
		if ((unk_0xF09A4F413B0D30EB(2, 186) && iLocal_106 == 0) && !func_160())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
						unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
						unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
						if (Global_19954 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 1);
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
											unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
						unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
						unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
					}
				}
			}
		}
		if ((unk_0xF09A4F413B0D30EB(2, 185) && iLocal_106 == 0) && !func_160())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x3C57C2F07FEE34D2(sLocal_19[Global_4534051], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x3CDDEB389E6F7E65(1);
							unk_0x78D4941E4DBEDF3C(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0x3CDDEB389E6F7E65(0);
						unk_0x78D4941E4DBEDF3C(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0x3CDDEB389E6F7E65(1);
					unk_0x78D4941E4DBEDF3C(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0x3CDDEB389E6F7E65(0);
					unk_0x78D4941E4DBEDF3C(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_160())
	{
		if (unk_0xF09A4F413B0D30EB(0, 172) && iLocal_106 == 0)
		{
			if (func_173())
			{
				Global_4534052++;
				unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
			}
			if (Global_4534052 == 13)
			{
				func_122(0);
				unk_0x3DF0D49DDCC957A5(1f);
				unk_0x861D35D42CFD2991(sLocal_20[(Global_4534052 - 1)]);
				Global_4534052 = 0;
				func_59();
				if (iLocal_21 == 1)
				{
					unk_0xB0550BC91B0159D6(&Global_4535327, 2);
					iLocal_21 = 0;
					func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4534052 > 0 && Global_4534052 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0xA9911C122B3210B5(sLocal_20[Global_4534052], 0);
			}
		}
	}
	if (Global_4534052 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0x9D4AFED2949F7082(sLocal_20[Global_4534052]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0x8CD81CDAF32D145A())
				{
					func_122(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0xCED9E32812D6C7C7(&Global_4535327, 2);
				func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x3DF0D49DDCC957A5(0.25f);
				unk_0xB7BF883D5036C603(sLocal_20[Global_4534052], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4534052 == 1 || Global_4534052 == 3)
			{
			}
			if (Global_4534052 == 2 || Global_4534052 == 4)
			{
			}
		}
	}
	if ((unk_0xF09A4F413B0D30EB(0, 173) && iLocal_106 == 0) && !func_160())
	{
		if (func_173())
		{
			func_113(0);
			Global_4534051++;
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
		}
		if (Global_4534051 == 13)
		{
			Global_4534051 = 0;
		}
		if (Global_4534051 == 0)
		{
			if (func_173())
			{
				func_113(0);
			}
		}
		else
		{
			func_123();
		}
		func_58();
	}
	if ((unk_0xF01464D7AF0B7347(0, 184) && iLocal_106 == 0) && !func_160())
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
				func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_163(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x320D1840B6DAA1CC();
				while (unk_0x320D1840B6DAA1CC() < (iLocal_86 + iLocal_90) && Global_19954.f_1 > 3)
				{
					func_158();
					func_140();
					func_90();
					unk_0x16E09CCC0BD508DA();
					wait(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0xF889BDFCC181BA9F(iLocal_63);
					iLocal_82 = 1;
					func_57(1);
					func_56();
					unk_0xCED9E32812D6C7C7(&Global_7826, 3);
					iLocal_32 = unk_0x320D1840B6DAA1CC();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_57(0);
					iLocal_82 = 0;
					unk_0xB0550BC91B0159D6(&Global_7826, 3);
				}
				iLocal_86 = unk_0x320D1840B6DAA1CC();
				while (unk_0x320D1840B6DAA1CC() < (iLocal_86 + iLocal_88) && Global_19954.f_1 > 3)
				{
					func_158();
					func_140();
					func_90();
					unk_0x16E09CCC0BD508DA();
					wait(0);
				}
				func_163(uLocal_91, "OPEN_SHUTTER");
				if (func_173())
				{
					if (Global_4534052 == 0)
					{
						if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
						{
							func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
				{
					func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_140();
				func_158();
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
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
			if (unk_0xF09A4F413B0D30EB(0, 40) || unk_0xF09A4F413B0D30EB(0, 41))
			{
				fLocal_65 = unk_0x8E277EF62B1E0BDF();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x78D9ADD511FEAD8B(iLocal_63))
					{
						unk_0x91DFC8F68F6D9B05(iLocal_63, "Camera_Zoom", &Global_19943, 1);
					}
				}
				else
				{
					unk_0xF889BDFCC181BA9F(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0x4C1B8C5717647539(0, 40) || unk_0x4C1B8C5717647539(0, 41))
		{
			fLocal_65 = unk_0x8E277EF62B1E0BDF();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x78D9ADD511FEAD8B(iLocal_63))
				{
					unk_0x91DFC8F68F6D9B05(iLocal_63, "Camera_Zoom", &Global_19943, 1);
				}
			}
			else
			{
				unk_0xF889BDFCC181BA9F(iLocal_63);
			}
		}
		else
		{
			unk_0xF889BDFCC181BA9F(iLocal_63);
		}
	}
	if ((func_108(2, Global_19923, 0) && !func_120()) && !func_108(2, Global_19922, 0))
	{
		fLocal_38 = unk_0xD5B0BDC980EEB92F();
		fLocal_39 = unk_0x02AC46BF770385C4();
		unk_0x3DE812D5BE11533E(0, 0);
		unk_0xCED9E32812D6C7C7(&Global_7824, 21);
		unk_0xF889BDFCC181BA9F(iLocal_63);
		iLocal_78 = 1;
		func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x91DFC8F68F6D9B05(-1, "Camera_Shoot", &Global_19943, 1);
		func_163(uLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		unk_0x6447DA2F47A963E9(Local_43, 0);
		if (!func_173())
		{
			func_113(1);
		}
		Global_22321 = 1;
		unk_0xD4DF0F443B8FD284(0, 1);
		while (Global_22320 < 6 && Global_19954.f_1 > 3)
		{
			func_158();
			func_140();
			func_90();
			func_145();
			unk_0x16E09CCC0BD508DA();
			wait(0);
		}
		unk_0x13AD5FB4A6E050F1(0, 0);
		if (Global_19896)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x320D1840B6DAA1CC();
		while (unk_0x320D1840B6DAA1CC() < (iLocal_86 + iLocal_89) && Global_19954.f_1 > 3)
		{
			func_158();
			func_140();
			func_90();
			unk_0x16E09CCC0BD508DA();
			wait(0);
		}
		settimera(0);
		func_163(uLocal_91, "OPEN_SHUTTER");
		unk_0xB0550BC91B0159D6(&Global_7824, 21);
		func_125();
		if (Global_19954.f_1 > 3)
		{
			if (Global_77852)
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
						unk_0xFA38CF6FFD2BF050(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xFA38CF6FFD2BF050(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xFA38CF6FFD2BF050(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_122(0);
		}
		func_140();
	}
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
	{
		if (func_108(2, Global_19926, 0))
		{
			unk_0x3DE812D5BE11533E(0, 0);
			wait(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			wait(0);
			unk_0x16E09CCC0BD508DA();
			func_158();
			unk_0xEE35B1932EE60B67();
			unk_0x2CF943308FEFB496();
			Global_22322 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22318 = 1;
			unk_0xD4DF0F443B8FD284(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			func_118(0, 0);
			func_122(0);
			iLocal_66 = 0;
			func_113(1);
			if (!Global_2810287.f_6645)
			{
				unk_0xCED9E32812D6C7C7(&Global_7824, 9);
			}
			unk_0x27F66B7FE7DB7C3A(0);
			iLocal_93 = 0;
			func_164(Global_19935, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_15(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_14(unk_0xE2D3D51028F0428A());
			if (func_13(iVar0) && (!func_61(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_13(Global_112915.f_2363.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1918[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
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
		if (Global_2725118[iVar1] == 0)
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
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_19891 = { Global_19907[Global_19899 /*3*/] };
	func_111(0, 1);
	func_118(0, 0);
	func_122(0);
	iLocal_66 = 0;
	func_113(1);
	if (!unk_0xE2D0C323A1AE5D85(Global_7825, 28))
	{
		if (unk_0x07A5E5231705659C() == 0)
		{
			if (unk_0xDFC67688F9088B45())
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
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_26(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_26(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_26(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_26(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_26(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_26(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_26(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_26(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_26(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_26(uParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_26(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_26(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_26(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_26(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_26(uParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_26(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_26(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_26(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_26(uParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_26(uParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_26(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_26(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_26(uParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_26(uParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_26(uParam2)] = iParam1;
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
	iVar0 = Global_2821895[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
{
	if (Global_1655477)
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
			case 10890:
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
			case 9912:
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
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_26(uParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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

var func_27()
{
	return Global_1574907;
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
		func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_160())
		{
			func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
			func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
		}
		else
		{
			func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
			func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_77852 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_74(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 7f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (!func_160())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
						func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						if (!unk_0x3A76A0944BE2C291(0))
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 210, 1), "CELL_284");
						}
						else
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x19214818F925D149(0, 29, 1), "CELL_284");
						}
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
							}
							func_74(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_50(3f);
						func_49(4f);
						func_74(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_160())
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (!func_160())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
						func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
						if (!unk_0x3A76A0944BE2C291(0))
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 210, 1), "CELL_284");
						}
						else
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x19214818F925D149(0, 29, 1), "CELL_284");
						}
					}
					if (!func_160())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					}
					if (!func_160())
					{
						if (func_173())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
							}
							func_74(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_50(3f);
						func_49(4f);
						func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fLocal_40);
		unk_0x6F06CF0E9AB02847();
		func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_74(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 174, 1), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_48(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_31(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0xE2D3D51028F0428A(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
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
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_freemode_01"))
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
		if (unk_0x9315DBF7D972F07A())
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
	if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x5355BAA621C153CF(iParam0, 1);
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
	if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF2BC143F97765619(iParam0, 0);
	return uVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF2BC143F97765619(iParam0, 0);
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
		unk_0xCED9E32812D6C7C7(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0xCED9E32812D6C7C7(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4516656.f_943 > -1)
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
	func_74(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 172, 1), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1942285)
	{
		fParam0 = -1f;
	}
	func_74(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 173, 1), "CELL_FILTER");
}

void func_51()
{
	if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 183, 1), "CELL_GRID");
	func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_77852 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_60())
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_91, "SET_FOCUS_LOCK");
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x4ADC8B166E139423("CELL_ACTTL");
			unk_0x76DB21247AE4E4E2(unk_0xAEF70623D03F7B02(&Global_4536312));
			unk_0xD1D4F8D5470AFA4C();
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_52(float fParam0)
{
	func_74(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0x2018949B2C9FD96A(0, 175, 1), "CELL_ACCYC");
}

void func_53()
{
	func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
	func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
	func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_280");
	unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_40);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
		func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
		if (iLocal_82)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_173())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_77852 == 0 && unk_0xB4C854DD86E40FDA(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_74(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 7f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
					func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
					if (func_173())
					{
						func_50(6f);
						func_49(7f);
						func_74(uLocal_92, "SET_DATA_SLOT", 8f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						func_50(3f);
						func_49(4f);
						func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A()) == 2)
			{
				if (!func_160())
				{
					if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x2018949B2C9FD96A(2, 183, 1), "CELL_GRID");
				func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
				func_74(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
				if (func_173())
				{
					if (!func_160())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 182, 1), "CELL_FOCUS");
						}
						func_74(uLocal_92, "SET_DATA_SLOT", 9f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_160())
					{
						if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
					if (func_173())
					{
						if (!func_160())
						{
							func_50(4f);
							func_49(5f);
							func_74(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fLocal_40);
		unk_0x6F06CF0E9AB02847();
		func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_284");
	func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x19214818F925D149(0, 1, 1), "CELL_285");
	func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
	func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 177, 1), "CELL_281");
	unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_40);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_82)
	{
		unk_0x080C97B891E2F3AA(fLocal_36, 1065353216);
		unk_0x94953C3FF0664F66(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4718592.f_132412 == 1)
	{
	}
	else if (Global_4718592.f_132413 == 1)
	{
	}
	else
	{
		unk_0x041ACBE09A018963(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 1)
	{
		if (unk_0x3C57C2F07FEE34D2(sLocal_19[Global_4534051], "phone_cam12DUMMY"))
		{
			unk_0x3CDDEB389E6F7E65(0);
			unk_0x78D4941E4DBEDF3C(0);
		}
		else
		{
			unk_0x3CDDEB389E6F7E65(1);
			unk_0x78D4941E4DBEDF3C(1);
		}
	}
}

void func_59()
{
	func_164(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_173())
	{
		if (!Global_1942285)
		{
			unk_0x5C3549D308EC0B7F("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if ((unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/] || unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/]) || unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
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
	return Global_42596 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_63()
{
	if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 30, 1), "CELL_RT_RSTICK");
		func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 1, 1), "CELL_RT_RSTICK");
		func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0x3A76A0944BE2C291(2) || unk_0xA7384DAD7CF469DA())
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x2018949B2C9FD96A(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_74(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x19214818F925D149(0, 1, 1), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x2018949B2C9FD96A(0, 39, 1), "CELL_LT_LSTICKZ");
		func_74(uLocal_92, "SET_DATA_SLOT", 6f, unk_0x2018949B2C9FD96A(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_73())
	{
		return "FHHUD_SENDLES";
	}
	if (func_71())
	{
		return "CSH_PHONEC";
	}
	switch (func_70(unk_0x9E2D6C50374FCFA9()))
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
	switch (func_66(unk_0x9E2D6C50374FCFA9()))
	{
		case 3:
			return "FXR_FRAN_PHTO";
		
		case 2:
			return "FXR_IMAN_PHTO";
		
		default:
	}
	return "CELL_287";
}

int func_66(int iParam0)
{
	if (func_69(iParam0) == 264)
	{
		return func_67(iParam0);
	}
	return -1;
}

int func_67(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_70(int iParam0)
{
	if (func_69(iParam0) == 271)
	{
		return func_67(iParam0);
	}
	return -1;
}

int func_71()
{
	switch (func_72(unk_0x9E2D6C50374FCFA9()))
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

int func_72(int iParam0)
{
	if (func_69(iParam0) == 256)
	{
		return func_67(iParam0);
	}
	return -1;
}

int func_73()
{
	switch (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_33)
	{
		case 233:
			switch (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1973259)
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (!unk_0xACC32B78196FBC2A(uParam3))
	{
		func_75(uParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_62(sParam4);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_75(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

void func_76()
{
	if (Global_77852)
	{
		switch (Global_22402)
		{
			case 0:
				if (unk_0x3A76A0944BE2C291(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22402++;
				break;
			
			case 1:
				if (!unk_0xF847447D4467709D())
				{
					if (unk_0x3A76A0944BE2C291(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22402++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22401)
		{
			case 0:
				if (unk_0x3A76A0944BE2C291(2))
				{
					func_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_22401++;
				break;
			
			case 1:
				if (!unk_0xF847447D4467709D())
				{
					if (unk_0x3A76A0944BE2C291(2))
					{
						func_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_22401++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_77()
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
	
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x4C1B8C5717647539(2, iVar10) && !unk_0x4C1B8C5717647539(2, iVar9))
	{
		unk_0x7653D561C9574763(0, 2, 1);
		unk_0x7653D561C9574763(0, 1, 1);
		iVar0 = floor(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = floor(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = floor(unk_0x1EC2077A4D963881(0, 1)) * 127;
		iVar3 = floor(unk_0x1EC2077A4D963881(0, 2)) * 127;
		if (unk_0x3A76A0944BE2C291(2))
		{
			if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0x07141611FD632B59(iVar2) > 28 || unk_0x07141611FD632B59(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x3A76A0944BE2C291(2))
		{
			fVar7 = unk_0x1EC2077A4D963881(0, 290);
			fVar8 = unk_0x1EC2077A4D963881(0, 291);
			if (unk_0x2ED671F67654FD28())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_80(fVar5);
		func_79(fVar6);
		func_78(fVar4);
	}
	else if (!unk_0x4C1B8C5717647539(2, iVar9))
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
}

void func_78(float fParam0)
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
	unk_0x707BC059B4839126(fLocal_111);
}

void func_79(float fParam0)
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
	unk_0xAA8B9D1D78A7DB5A(fLocal_112);
}

void func_80(float fParam0)
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
	unk_0xB385B6BD5599FEE4(fLocal_113);
}

void func_81()
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
	
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x4C1B8C5717647539(2, iVar10))
		{
			if (unk_0xF09A4F413B0D30EB(2, 178) && !func_160())
			{
				unk_0x8ECF6C4A4045833D(0.5f);
				unk_0x5C34E45CA45F7A49(0.85f);
				unk_0xBFC33DDACAEC2532(0.5f);
				unk_0x45209E14B5251BD9(-0.25f);
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
	if (unk_0x4C1B8C5717647539(2, iVar10) && !unk_0x4C1B8C5717647539(2, iVar11))
	{
		if (unk_0xF09A4F413B0D30EB(2, 178) && !func_160())
		{
			unk_0x8ECF6C4A4045833D(0.5f);
			unk_0x5C34E45CA45F7A49(0.85f);
			unk_0xBFC33DDACAEC2532(0.5f);
			unk_0x45209E14B5251BD9(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0x7653D561C9574763(0, 2, 1);
		unk_0x7653D561C9574763(0, 1, 1);
		iVar0 = floor(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = floor(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = floor(unk_0x1EC2077A4D963881(0, 1)) * 127;
		iVar3 = floor(unk_0x1EC2077A4D963881(0, 2)) * 127;
		if (unk_0x3A76A0944BE2C291(2))
		{
			iVar1 = floor(unk_0x1EC2077A4D963881(0, 39)) * 127;
			fVar8 = unk_0x1EC2077A4D963881(0, 290);
			fVar9 = unk_0x1EC2077A4D963881(0, 291);
			if (unk_0x2ED671F67654FD28())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x07141611FD632B59(iVar2) > 15 || unk_0x07141611FD632B59(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_85(fVar6);
		func_84(fVar7);
		func_83(fVar4);
		if (!func_61(14))
		{
			func_82(fVar5);
		}
	}
	else if (!unk_0x0DBA73788F6E3C5F(2, iVar11))
	{
		unk_0x5089DD830FA61D71(0, 2, 1);
		unk_0x5089DD830FA61D71(0, 1, 1);
	}
	if (!unk_0x0DBA73788F6E3C5F(2, iVar10) && !unk_0x0DBA73788F6E3C5F(2, iVar11))
	{
		iVar0 = floor(unk_0x1EC2077A4D963881(0, 30)) * 127;
		iVar1 = floor(unk_0x1EC2077A4D963881(0, 31)) * 127;
		iVar2 = floor(unk_0x1EC2077A4D963881(0, 290)) * 127;
		iVar3 = floor(unk_0x1EC2077A4D963881(0, 291)) * 127;
		iVar2 = floor(unk_0x1EC2077A4D963881(0, 294)) * 127;
		iVar2 = floor(unk_0x1EC2077A4D963881(0, 295)) * 127;
		iVar3 = floor(unk_0x1EC2077A4D963881(0, 292)) * 127;
		iVar3 = floor(unk_0x1EC2077A4D963881(0, 293)) * 127;
		if (unk_0x07141611FD632B59(iVar2) > 28 || unk_0x07141611FD632B59(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x07141611FD632B59(iVar0) > 28 || unk_0x07141611FD632B59(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(14))
		{
			func_82(fVar5);
		}
	}
}

void func_82(float fParam0)
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
	unk_0xBFC33DDACAEC2532(fLocal_109);
}

void func_83(float fParam0)
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
	unk_0x45209E14B5251BD9(fLocal_110);
}

void func_84(float fParam0)
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
	unk_0x5C34E45CA45F7A49(fLocal_108);
}

void func_85(float fParam0)
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
	unk_0x8ECF6C4A4045833D(fLocal_107);
}

void func_86()
{
	if (Global_78112 || Global_78113)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4718592.f_132412 == 0 && Global_4718592.f_132413 == 0)
			{
				unk_0xC4353D240DCE9533(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_19896)
		{
			if (Global_20144)
			{
				if (iLocal_100 == 0)
				{
					if (Global_19954.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_88(255, 255, 255, 255);
			func_87(0.059f, 0.644f, "CELL_284", 0);
			func_88(255, 255, 255, 255);
			func_87(0.165f, 0.644f, "CELL_285", 0);
			func_88(255, 255, 255, 255);
			func_87(0.275f, 0.75f, "CELL_280", 0);
			func_88(255, 255, 255, 255);
			func_87(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19896)
	{
	}
	else
	{
		func_88(255, 255, 255, 255);
		func_87(0.275f, 0.75f, func_65(), 0);
		func_88(255, 255, 255, 255);
		func_87(0.275f, 0.79f, "CELL_286", 0);
		func_88(255, 255, 255, 255);
		func_87(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam3);
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x3F03C2D4EFA888BC(0.4f, 0.4f);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(1, 0, 0, 0, 205);
	unk_0x0365AB5B6DB2F6E3(1);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x71F4002CB1A0B451(iParam0, iParam1, iParam2, iParam3);
}

void func_89()
{
	unk_0x080C97B891E2F3AA(fLocal_38, 1065353216);
	unk_0x94953C3FF0664F66(fLocal_39);
}

void func_90()
{
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7653D561C9574763(0, 44, 1);
	unk_0x7653D561C9574763(0, 3, 1);
	unk_0x7653D561C9574763(0, 4, 1);
	unk_0x7653D561C9574763(0, 5, 1);
	unk_0x7653D561C9574763(0, 6, 1);
	unk_0x7653D561C9574763(0, 1, 1);
	unk_0x7653D561C9574763(0, 2, 1);
	unk_0x7653D561C9574763(0, 39, 1);
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x7653D561C9574763(0, 56, 1);
}

void func_91()
{
	Local_44 = { Global_19907[Global_19899 /*3*/] };
	if (Global_19896)
	{
		if (func_94())
		{
			unk_0xC81489026785778A(&Local_46);
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
		if (unk_0xE2D0C323A1AE5D85(Global_7826, 4))
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
		if (func_94() == 0)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7826, 4))
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
			Local_44 = { Global_19900[Global_19899 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x31636F0193379566(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			unk_0x6447DA2F47A963E9(Local_43, 0);
			if (!unk_0xE2D0C323A1AE5D85(Global_7824, 22))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_93();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_92();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_92()
{
	func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_286");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_277");
		func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_40);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_93()
{
	func_164(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_164(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
		func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_286");
	}
	else
	{
		func_74(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x2018949B2C9FD96A(2, 179, 1), func_65());
		func_74(uLocal_92, "SET_DATA_SLOT", 1f, unk_0x2018949B2C9FD96A(2, 178, 1), "CELL_277");
		func_74(uLocal_92, "SET_DATA_SLOT", 0f, unk_0x2018949B2C9FD96A(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEA5DEA46C3EE64D3(uLocal_92, "SET_MAX_WIDTH");
	unk_0xCA5D23E5F0F0306F(fLocal_40);
	unk_0x6F06CF0E9AB02847();
	func_164(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			if (Global_19897 == 0)
			{
				if (Global_7139 != 128)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (Global_21285 != 2)
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
		if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x94398B6170DCA18C())
			{
				if (unk_0xD8F9DF94CD871327(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()) || unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || (unk_0xED99779C40AEE6C4(unk_0xE2D3D51028F0428A()) && !(unk_0xE2D0C323A1AE5D85(Global_4718592.f_37, 17) && (unk_0x44859561F653DD4E() || Global_1923652))))
		{
			return 0;
		}
		if (Global_111963)
		{
			return 0;
		}
	}
	if (Global_77852)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x94398B6170DCA18C()))
	{
		iVar2 = 1;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if ((((((((unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar3)) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iVar3))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(iVar3))) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("seashark")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("seashark2")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("rhino")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("submersible2")) || unk_0x15CAA6D7B11F1A7C(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4535605 || iVar2 == 1)
	{
		if (unk_0xB4C854DD86E40FDA(joaat("apptrackify")) > 0 || Global_112915.f_14051.f_89)
		{
			if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
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

void func_95()
{
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x07899AAA5D680386(0, Global_19924);
	Local_43 = { Global_19914 };
	Local_44 = { Global_19907[Global_19899 /*3*/] };
	if (func_94())
	{
		unk_0xDE866220FC1119FA(&Local_45, 0);
		Local_43 = { Local_45 };
		unk_0xC81489026785778A(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_19896)
	{
		func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_82 = 0;
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_96();
		}
		if (iLocal_72)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 9))
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
			if (func_94() == 0)
			{
				unk_0x6447DA2F47A963E9(Local_41, 0);
				unk_0x31636F0193379566(Local_42);
			}
			func_111(0, 1);
		}
		else if (func_94() == 0)
		{
			unk_0x6447DA2F47A963E9(Local_41, 0);
			unk_0x31636F0193379566(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_96();
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
			func_96();
		}
	}
	unk_0x6447DA2F47A963E9(Local_41, 0);
}

void func_96()
{
	func_1(0);
	if (func_94() == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 30))
		{
			unk_0x31636F0193379566(Global_19900[Global_19899 /*3*/]);
		}
		else
		{
			unk_0x31636F0193379566(Global_19907[Global_19899 /*3*/]);
		}
		Local_41 = { Local_43 };
		unk_0x6447DA2F47A963E9(Local_41, 0);
	}
	Global_22318 = 0;
	func_118(0, 0);
	func_122(0);
	iLocal_66 = 0;
	func_113(1);
	Global_19941 = 1;
	Global_22321 = 0;
	if (Global_19954.f_1 > 4)
	{
		Global_19954.f_1 = 6;
		Global_19932 = 1;
		func_97();
	}
	if (unk_0x0347CCBD719C8ADC(uLocal_91))
	{
		func_163(uLocal_91, "SHUTDOWN_MOVIE");
	}
	wait(0);
	unk_0x16E09CCC0BD508DA();
	unk_0x705B098546DEB18A(&uLocal_92);
	unk_0x705B098546DEB18A(&uLocal_91);
	if (Global_20146 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 17);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 17);
	}
	unk_0xB0550BC91B0159D6(&Global_7824, 18);
	unk_0xB0550BC91B0159D6(&Global_7824, 21);
	unk_0xD4DF0F443B8FD284(0, 1);
	unk_0xB0550BC91B0159D6(&Global_7826, 3);
	unk_0xB0550BC91B0159D6(&Global_4535327, 3);
	unk_0x27F66B7FE7DB7C3A(0);
	unk_0xF82507EBD42C6070(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0x4FEF096D3AB4AA8C(15);
	Global_22322 = 1;
	unk_0xF889BDFCC181BA9F(iLocal_63);
	unk_0xCDBCC1BC1184B002(iLocal_63);
	unk_0xBE3AC6D6682E4A5E();
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "Mood_Normal_1", 0);
		unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
	}
	func_113(1);
	unk_0x3CDDEB389E6F7E65(0);
	unk_0x78D4941E4DBEDF3C(0);
	unk_0x3DF0D49DDCC957A5(1f);
	if (Global_4534052 > 0 && Global_4534052 < 13)
	{
		unk_0x861D35D42CFD2991(sLocal_20[Global_4534052]);
	}
	func_111(0, 1);
	if (func_171(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_97()
{
	struct<3> Var0;
	
	if (Global_19937 == 1)
	{
		return;
	}
	if (Global_19954.f_1 < 4)
	{
		return;
	}
	while (!unk_0x0347CCBD719C8ADC(Global_19935))
	{
		if (Global_77852)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19954.f_1)
	{
		case 6:
			func_164(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(Global_8429);
			if (Global_8429 == 1)
			{
				func_164(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19958;
			}
			else
			{
				func_164(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19959), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19959;
			}
			if (Global_19942)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20146 == 0)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else if (Global_77852)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else
			{
				if (Global_20145 == 1)
				{
					if (Global_19942)
					{
						func_104(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_104(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19942)
				{
					func_104(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(&Global_7824, 17);
			}
			if (Global_77852)
			{
				func_102();
				unk_0xB0550BC91B0159D6(&Global_7826, 9);
				func_164(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_164(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_104(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19953 == 1)
			{
				func_101();
				func_164(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0x6F06CF0E9AB02847();
				}
				else if (func_100(Global_7139, Global_19954) == 0)
				{
					func_104(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_104(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_217", &(Global_1918[Global_7139 /*29*/].f_3), 0);
				}
				func_164(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21285 == 4 || Global_21285 == 3)
			{
				func_164(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_101();
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					if (Global_21543)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_100(Global_7139, Global_19954) == 0)
					{
						func_164(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_164(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), &Var0, &(Global_1918[Global_7139 /*29*/].f_3), 0);
					}
				}
				func_164(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_98();
			break;
		
		default:
			break;
	}
}

void func_98()
{
	if (unk_0x0347CCBD719C8ADC(Global_19935))
	{
		func_99();
		if (Global_19953 == 1)
		{
			if (Global_19942)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21332)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
		}
		else
		{
			func_104(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_99()
{
	if (Global_77852)
	{
		func_104(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_7824, 17);
	}
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

void func_101()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_19954 == 0)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 1)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 2)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 3)
		{
			switch (Global_4535603)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_102()
{
	if (Global_77852)
	{
		if (func_103() == 0)
		{
			return;
		}
		func_104(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(&Global_7824, 17);
	}
}

int func_103()
{
	return 0;
}

void func_104(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_62(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_62(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_62(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_62(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_105(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112915.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112915.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112915.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77852)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43785;
											break;
										
										case 1:
											iVar6 = Global_43786;
											break;
										
										case 2:
											iVar6 = Global_43787;
											break;
										
										default:
											break;
									}
									func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_7830);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xE2D0C323A1AE5D85(Global_7825, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_62(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_104(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_106()
{
	switch (iLocal_51)
	{
		case 1:
			unk_0xD4DF0F443B8FD284(0, 1);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
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
			if (!unk_0xE2D0C323A1AE5D85(Global_7824, 22))
			{
				unk_0xD4DF0F443B8FD284(0, 1);
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_93();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_92();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		if (!func_120())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958920, 17);
		}
	}
	else if (func_120())
	{
		unk_0xB0550BC91B0159D6(&Global_1958920, 17);
	}
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, uParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, iParam1)))
	{
		if (unk_0x8FE9914D4872D601())
		{
			if (unk_0x9417F1137725B4B3() == 0 || (unk_0xD199EE48D2842EB1() && unk_0x3A76A0944BE2C291(2)))
			{
				return 0;
			}
		}
		if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
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

void func_109(bool bParam0)
{
	if (bParam0)
	{
		if (!func_110())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958920, 18);
		}
	}
	else if (func_110())
	{
		unk_0xB0550BC91B0159D6(&Global_1958920, 18);
	}
}

bool func_110()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 18);
}

void func_111(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_112(0))
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

int func_112(int iParam0)
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

void func_113(int iParam0)
{
	if ((Global_4718592.f_132412 == 0 && Global_4718592.f_132413 == 0) && !Global_1942285)
	{
		if (func_114(unk_0x9E2D6C50374FCFA9()) && iParam0)
		{
			Global_1973332 = 1;
		}
		else
		{
			unk_0xDEABC7EC7DA2B48E();
		}
	}
}

int func_114(int iParam0)
{
	if (iParam0 != func_117())
	{
		if (func_116(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_115(Global_2689156[iParam0 /*453*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
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

int func_117()
{
	return -1;
}

void func_118(int iParam0, int iParam1)
{
	if (Global_4718592.f_132412 == 1)
	{
	}
	else if (Global_4718592.f_132413 == 1)
	{
	}
	else
	{
		unk_0x13AD5FB4A6E050F1(iParam0, iParam1);
	}
}

int func_119()
{
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 15))
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 17);
}

void func_121()
{
	if (Global_19896)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_94())
		{
			unk_0xDE866220FC1119FA(&Local_45, 0);
			Local_43 = { Local_45 };
			unk_0xC81489026785778A(&Local_46);
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
		if (func_94() == 0)
		{
			unk_0x6447DA2F47A963E9(Local_41, 0);
			unk_0x31636F0193379566(Local_42);
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
		unk_0x6447DA2F47A963E9(Local_41, 0);
	}
	if (Global_19896)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_94())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				unk_0x6447DA2F47A963E9(Local_41, 0);
				Local_42 = { Local_44 };
				unk_0x31636F0193379566(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22319 = 0;
				func_118(1, 1);
				iLocal_66 = 1;
				func_122(1);
				func_59();
				func_123();
				func_57(0);
				settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_140();
				func_164(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
				{
					func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_166();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		unk_0x6447DA2F47A963E9(Local_41, 0);
		Global_22319 = 0;
	}
}

void func_122(bool bParam0)
{
	if (func_173())
	{
		if (bParam0)
		{
			if (!unk_0x8CD81CDAF32D145A())
			{
				unk_0x3ED60EDDC1A35365(1);
				if (Global_4534052 > 0 && Global_4534052 < 99)
				{
					unk_0xB7BF883D5036C603(sLocal_20[Global_4534052], 0);
					unk_0x3DF0D49DDCC957A5(0.25f);
				}
			}
		}
		else if (unk_0x8CD81CDAF32D145A())
		{
			unk_0x3ED60EDDC1A35365(0);
		}
	}
}

void func_123()
{
	if (Global_4534051 > 0 && Global_4534051 < 99)
	{
		if (!Global_1942285)
		{
			unk_0x5C3549D308EC0B7F(sLocal_19[Global_4534051]);
		}
	}
}

void func_124()
{
	if (Global_19896)
	{
		iLocal_76 = 0;
		func_59();
		func_111(1, 1);
		func_118(1, 1);
		iLocal_66 = 1;
		Global_22322 = 1;
	}
}

void func_125()
{
	if (Global_4718592.f_132412 == 1 && func_126())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (unk_0x3C57C2F07FEE34D2(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_126()
{
	if ((((((func_135() || func_134()) || func_133()) || func_132()) || func_131()) || func_129()) || func_127())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	return func_128(Global_4718592.f_86750);
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129()
{
	return func_130(Global_4718592.f_86750);
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_131()
{
	return Global_2714627.f_24;
}

var func_132()
{
	return Global_2714627.f_21;
}

var func_133()
{
	return Global_2714627.f_19;
}

var func_134()
{
	return Global_2714627.f_18;
}

var func_135()
{
	return Global_2714627.f_17;
}

void func_136()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_19943, 1);
	}
}

void func_137()
{
	unk_0x3DE812D5BE11533E(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_138()
{
	func_139();
}

void func_139()
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

void func_140()
{
	if (Global_19954.f_1 > 3)
	{
		if (!unk_0xF1EC2C71FD1371B8())
		{
			unk_0x694170BB080C08FF(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_141()
{
	if (func_61(14))
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
		Global_19954 = func_11();
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

void func_142(int iParam0)
{
	if (func_144())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_160())
		{
			func_111(1, 1);
		}
		else
		{
			func_111(0, 0);
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
	if (!func_143())
	{
		Global_19954.f_1 = 3;
	}
}

int func_143()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_145()
{
	unk_0x7653D561C9574763(0, 0, 1);
	unk_0x7653D561C9574763(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0x07899AAA5D680386(0, Global_19927);
		unk_0x07899AAA5D680386(0, Global_19924);
		unk_0x7653D561C9574763(0, 278, 1);
		unk_0x7653D561C9574763(0, 279, 1);
		unk_0x7653D561C9574763(0, 280, 1);
		unk_0x7653D561C9574763(0, 281, 1);
		unk_0x7653D561C9574763(0, 282, 1);
		unk_0x7653D561C9574763(0, 282, 1);
		unk_0x7653D561C9574763(0, 284, 1);
		unk_0x7653D561C9574763(0, 285, 1);
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 114, 1);
		unk_0x7653D561C9574763(0, 71, 1);
		unk_0x7653D561C9574763(0, 72, 1);
		unk_0x7653D561C9574763(0, 74, 1);
		unk_0x7653D561C9574763(0, 75, 1);
		unk_0x7653D561C9574763(0, 76, 1);
		unk_0x7653D561C9574763(0, 73, 1);
		unk_0x7653D561C9574763(0, 77, 1);
		unk_0x7653D561C9574763(0, 78, 1);
		unk_0x7653D561C9574763(0, 286, 1);
		unk_0x7653D561C9574763(0, 287, 1);
		unk_0x7653D561C9574763(0, 79, 1);
		unk_0x7653D561C9574763(0, 80, 1);
		unk_0x7653D561C9574763(0, 81, 1);
		unk_0x7653D561C9574763(0, 82, 1);
		unk_0x7653D561C9574763(0, 86, 1);
		unk_0x7653D561C9574763(0, 59, 1);
		unk_0x7653D561C9574763(0, 60, 1);
		unk_0x7653D561C9574763(0, 61, 1);
		unk_0x7653D561C9574763(0, 62, 1);
		unk_0x7653D561C9574763(0, 63, 1);
		unk_0x7653D561C9574763(0, 64, 1);
		unk_0x7653D561C9574763(0, 87, 1);
		unk_0x7653D561C9574763(0, 88, 1);
		unk_0x7653D561C9574763(0, 89, 1);
		unk_0x7653D561C9574763(0, 90, 1);
		unk_0x7653D561C9574763(0, 107, 1);
		unk_0x7653D561C9574763(0, 108, 1);
		unk_0x7653D561C9574763(0, 109, 1);
		unk_0x7653D561C9574763(0, 110, 1);
		unk_0x7653D561C9574763(0, 111, 1);
		unk_0x7653D561C9574763(0, 112, 1);
		unk_0x7653D561C9574763(0, 113, 1);
		unk_0x7653D561C9574763(0, 114, 1);
		unk_0x7653D561C9574763(0, 91, 1);
		unk_0x7653D561C9574763(0, 92, 1);
		unk_0x7653D561C9574763(0, 68, 1);
		unk_0x7653D561C9574763(0, 102, 1);
		unk_0x7653D561C9574763(0, 136, 1);
		unk_0x7653D561C9574763(0, 137, 1);
		unk_0x7653D561C9574763(0, 138, 1);
		unk_0x7653D561C9574763(0, 139, 1);
		unk_0x7653D561C9574763(0, 102, 1);
	}
}

int func_146()
{
	var uVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x7158135695FAE89D(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0xAB793EA186AB8DAA(uVar0, -1, 0) == unk_0xE2D3D51028F0428A())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147()
{
	var uVar0;
	
	func_155(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_153())
	{
		return 1;
	}
	if (func_152(159))
	{
		if (!func_151())
		{
			return 1;
		}
	}
	if (func_152(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_148() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_148()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_148()
{
	switch (func_150())
	{
		case 0:
			return func_149();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_149()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_150()
{
	return Global_31505;
}

bool func_151()
{
	return Global_2714627.f_698;
}

int func_152(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	return Global_2725224;
}

bool func_154()
{
	return Global_2714627.f_693;
}

void func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_156(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_116(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(iVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					iVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(iVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_157(iVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_157(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_158()
{
	if (iLocal_106 == 1)
	{
		unk_0xAC765EF46E85A446(7);
		unk_0xAC765EF46E85A446(1);
		unk_0xAC765EF46E85A446(3);
		unk_0xAC765EF46E85A446(4);
		unk_0xAC765EF46E85A446(6);
		unk_0xAC765EF46E85A446(8);
		unk_0xAC765EF46E85A446(9);
		unk_0xAC765EF46E85A446(2);
	}
	else
	{
		unk_0xC43E67C9BA871ECB();
	}
}

void func_159(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_160()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

void func_161()
{
	if (func_162())
	{
		unk_0xB74730632FB72AE5();
		if (unk_0x04B354BE7E7B0632(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22322 = 1;
			Global_19954.f_1 = 3;
			unk_0xBE3AC6D6682E4A5E();
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
				if (unk_0x0347CCBD719C8ADC(uLocal_91))
				{
					if (func_173())
					{
						if (Global_4534052 == 0)
						{
							if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
							{
								func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 2))
						{
							func_164(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x0347CCBD719C8ADC(uLocal_91))
			{
				func_164(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0xBE3AC6D6682E4A5E();
	}
}

int func_162()
{
	if (Global_4718592.f_132412 == 1)
	{
		if (Global_77852)
		{
			return 0;
		}
	}
	if (Global_4718592.f_132413 == 1)
	{
		if (Global_77852)
		{
			return 0;
		}
	}
	if (unk_0xDFC67688F9088B45() || unk_0x527312C0DF85960A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7825, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_163(var uParam0, char* sParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_164(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

int func_165()
{
	if (Global_77852)
	{
		Global_19954 = 3;
	}
	else
	{
		Global_19954 = func_11();
	}
	if (Global_19954 > 3)
	{
		Global_19954 = 3;
	}
	return Global_112915.f_14051[Global_19954 /*20*/].f_7;
}

void func_166()
{
	if (Global_19954.f_1 > 3)
	{
		Global_19954.f_1 = 8;
	}
	Global_22321 = 0;
	iLocal_78 = 0;
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Local_34 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	if (Global_19896)
	{
		while (timera() < iLocal_88)
		{
			wait(0);
			func_140();
			func_90();
			unk_0x16E09CCC0BD508DA();
		}
		func_163(uLocal_91, "OPEN_SHUTTER");
		func_158();
		func_125();
		iLocal_80 = 1;
		settimerb(0);
	}
	else
	{
		func_118(1, 1);
		func_122(1);
		func_59();
		func_123();
		func_57(0);
		iLocal_66 = 1;
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 15);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 15);
	}
}

bool func_168()
{
	return Global_1575022;
}

int func_169(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(uVar0))
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

void func_170()
{
}

int func_171(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && bParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_172()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x6ABFD2A0B56D6940(unk_0xE2D3D51028F0428A()))
		{
			unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
			unk_0x8ECF6C4A4045833D(fLocal_107);
			unk_0x5C34E45CA45F7A49(fLocal_108);
			unk_0xBFC33DDACAEC2532(fLocal_109);
		}
		else
		{
			unk_0x8ECF6C4A4045833D(fLocal_107);
			unk_0x5C34E45CA45F7A49(fLocal_108);
			unk_0xBFC33DDACAEC2532(fLocal_109);
		}
	}
	unk_0x45209E14B5251BD9(fLocal_110);
	unk_0x707BC059B4839126(fLocal_111);
	unk_0xAA8B9D1D78A7DB5A(fLocal_112);
	unk_0xB385B6BD5599FEE4(fLocal_113);
	func_56();
}

int func_173()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

