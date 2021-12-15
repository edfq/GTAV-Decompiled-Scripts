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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	char cLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	char cLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	var uLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x3F57BEDBC381CBC7();
	while (true)
	{
		wait(0);
		if (unk_0xE2D0C323A1AE5D85(Global_7825, 1))
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				if (unk_0xA3329B7A7520670E())
				{
					if (Global_19942)
					{
						func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19897)
						{
							func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xB0550BC91B0159D6(&Global_7825, 1);
				}
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_20151, 0))
		{
			if (!func_118())
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_20151, 1))
				{
					unk_0xCED9E32812D6C7C7(&Global_20151, 1);
					if (unk_0x9315DBF7D972F07A())
					{
						uLocal_89 = unk_0x0A89FDFA763DCAED();
					}
					else
					{
						iLocal_85 = unk_0x320D1840B6DAA1CC();
					}
				}
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_91 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x320D1840B6DAA1CC();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_111(&Global_20739, &Global_21355, &Global_21275, Global_21288, Global_22270, Global_22271, 0))
					{
						Global_20151 = 0;
					}
				}
				else
				{
					Global_20151 = 0;
				}
			}
		}
		if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_17, 4)) && !func_110()) && unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21285 != 0)
			{
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_21285)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21291)
				{
					if (Global_21281 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_21281 == 0)
				{
					func_92();
				}
				else
				{
					func_102();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21291)
				{
					if (Global_21293)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21295 = 0;
	Global_19953 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21296 = 0;
	Global_21297 = 0;
	Global_21298 = 0;
	Global_21299 = 0;
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
	Global_21289 = 0;
	Global_21290 = 0;
	Global_21332 = 0;
	Global_21333 = 0;
	Global_21336 = 0;
	Global_21338 = 0;
	Global_21337 = 0;
	Global_21340 = 0;
	Global_21339 = 0;
	Global_22302 = 0;
	Global_21342 = 0;
	if (Global_19954.f_1 == 10)
	{
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_7824, 11))
	{
		func_3();
	}
	Global_21291 = 0;
	Global_21292 = 0;
	Global_21293 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22275 = 0;
	Global_22282 = 0;
	Global_22281 = 0;
	Global_22278 = 0;
	Global_22277 = 0;
	Global_22279 = 0;
	Global_22280 = 0;
	Global_21281 = 0;
	Global_21282 = 0;
	Global_21283 = 0;
	Global_21284 = 0;
	Global_21543 = 0;
	Global_22306 = 5000;
	Global_19937 = 0;
	unk_0xB0550BC91B0159D6(&Global_7824, 20);
	unk_0xB0550BC91B0159D6(&Global_7824, 24);
	unk_0xB0550BC91B0159D6(&Global_7825, 23);
	unk_0xB0550BC91B0159D6(&Global_7826, 0);
	unk_0xB0550BC91B0159D6(&Global_7825, 9);
	unk_0xB0550BC91B0159D6(&Global_7825, 31);
	unk_0xB0550BC91B0159D6(&Global_7825, 17);
	unk_0xB0550BC91B0159D6(&Global_7826, 5);
	Global_22269 = 0;
	Global_22268 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		Global_21285 = 4;
	}
	else
	{
		Global_21285 = 0;
		Global_22296 = 0;
		Global_22307 = unk_0x320D1840B6DAA1CC();
	}
}

void func_3()
{
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 11))
			{
				if (!Global_19897)
				{
					unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 0, 1);
				}
				if (Global_77852)
				{
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 1);
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 1);
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 1);
				}
				unk_0xB0550BC91B0159D6(&Global_7824, 11);
			}
		}
	}
}

void func_4()
{
	Global_21295 = 0;
	Global_19953 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
		{
			if (Global_21341 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_22277 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22296 == 1)
			{
				unk_0x1195A02D3676E6AF(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_22296 == 0)
		{
			unk_0x82B0661A78CC39CF();
			iLocal_31 = 0;
		}
	}
	else if (Global_22279 > 0)
	{
		iLocal_37 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_37 - iLocal_36) > Global_22279)
		{
			unk_0xFED65F7C525B4505();
			Global_22277 = 0;
		}
	}
	if (Global_22296 == 0)
	{
		if (!unk_0x2E5F8A288A954523())
		{
			Global_21285 = 6;
		}
	}
}

void func_6()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xA3329B7A7520670E())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_7824, 11))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (Global_77852 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				if (Global_77852 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_77852 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22296 == 1)
		{
			if (Global_22297 == 1)
			{
				unk_0x1195A02D3676E6AF(1);
				iLocal_31 = 1;
				Global_22297 = 0;
			}
		}
	}
	else if (Global_22296 == 0)
	{
		if (Global_22297 == 1)
		{
			unk_0x82B0661A78CC39CF();
			iLocal_31 = 0;
			Global_22297 = 0;
		}
	}
	if (Global_21338 == 0)
	{
		if (!Global_21298)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_7825, 31))
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_7825, 27))
				{
					if (func_54())
					{
						if (Global_19954.f_1 > 6)
						{
							unk_0xCED9E32812D6C7C7(&Global_7825, 24);
							unk_0xCED9E32812D6C7C7(&Global_7825, 27);
							unk_0xB0550BC91B0159D6(&Global_7825, 26);
							unk_0xB0550BC91B0159D6(&Global_7825, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xA3329B7A7520670E() == 0 && Global_21298 == 0)
	{
		if (Global_21338 == 1)
		{
			unk_0xCED9E32812D6C7C7(&Global_7825, 23);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&Global_7825, 23);
		}
		if (Global_21342)
		{
			if (Global_21338 == 0)
			{
				Global_20904 = { Global_21343 };
				Global_21361 = { Global_21349 };
				Global_21295 = 0;
				Global_22302 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21340)
		{
			while (Global_21338 == 1)
			{
				wait(0);
				if (Global_19954.f_1 < 6)
				{
					Global_21338 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21340)
						{
							iLocal_30 = 1;
							Global_22300 = 1;
							func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
							func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19942)
							{
								func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xCED9E32812D6C7C7(&Global_7824, 17);
								func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xCED9E32812D6C7C7(&Global_7824, 17);
								func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22298 = 1;
							if (func_50(Global_7139, Global_19954) == 0)
							{
								func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21427, "CELL_300", &(Global_117[Global_7139 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
								func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19942)
							{
								func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xB0550BC91B0159D6(&Global_7824, 17);
						}
					}
					if (func_49(2, Global_19923, 0))
					{
						func_47();
						Global_19880 = 0.19f;
						Global_21338 = 0;
						func_45();
						if (Global_21340)
						{
							Global_20904 = { Global_21421 };
							Global_22302 = 5;
						}
						else if (Global_21283 > 0)
						{
							Global_21543 = 1;
							Global_21285 = 0;
							Global_22306 = 0;
							if (unk_0xE2D0C323A1AE5D85(Global_7825, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22269 + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_21544[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_21906[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22269, &Global_20574, Global_7139, &Global_21361, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21283 == 2)
							{
								func_25(&Global_20574, Global_7139, &Global_21361, &(Global_21439[0 /*6*/]), &(Global_21491[0 /*6*/]), &(Global_21439[1 /*6*/]), &(Global_21491[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22302 = 1;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20904 = { Global_21379 };
							Global_22302 = 1;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19924, 0) || unk_0xE2D0C323A1AE5D85(Global_7824, 24))
					{
						func_47();
						Global_19880 = 0.19f;
						Global_21338 = 0;
						func_45();
						if (Global_21340)
						{
							Global_20904 = { Global_21415 };
							Global_22302 = 4;
						}
						else if (Global_21283 > 0)
						{
							Global_21543 = 1;
							Global_21285 = 0;
							Global_22306 = 0;
							if (unk_0xE2D0C323A1AE5D85(Global_7825, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22268 + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_21725[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_22087[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22268, &Global_20574, Global_7139, &Global_21361, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21283 == 2)
							{
								func_25(&Global_20574, Global_7139, &Global_21361, &(Global_21452[0 /*6*/]), &(Global_21504[0 /*6*/]), &(Global_21452[1 /*6*/]), &(Global_21504[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22302 = 2;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20904 = { Global_21385 };
							Global_22302 = 2;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19926, 0))
					{
						if (Global_21340)
						{
							Global_19880 = 0.19f;
							Global_21338 = 0;
							func_45();
							func_47();
							Global_20904 = { Global_21409 };
							Global_22302 = 3;
							Global_22298 = 0;
							Global_22300 = 0;
							Global_21295 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21338)
			{
				wait(0);
				if (Global_19954.f_1 < 6)
				{
					Global_21338 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19935, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_19935, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_19935, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19935, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19935, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19942)
						{
							func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xB0550BC91B0159D6(&Global_7824, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19923, 0))
					{
						func_47();
						Global_21338 = 0;
						func_45();
						unk_0xEA5DEA46C3EE64D3(Global_19935, "GET_CURRENT_SELECTION");
						uLocal_99 = unk_0xD452B47F164A4D79();
						while (!unk_0x17E14239FB53CCE3(uLocal_99))
						{
							wait(0);
						}
						iVar2 = unk_0xC2F770299DFFA794(uLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_20904 = { Global_21415 };
								Global_22302 = 4;
								break;
							
							case 1:
								Global_20904 = { Global_21409 };
								Global_22302 = 3;
								break;
							
							case 2:
								Global_20904 = { Global_21421 };
								Global_22302 = 5;
								break;
						}
						Global_22298 = 0;
						Global_22300 = 0;
						Global_21295 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19924, 0))
					{
						Global_21338 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21286 == 0)
		{
			unk_0xD681CC2BC1084DB6(0);
			settimera(0);
			while (timera() < 900 && Global_19954.f_1 == 9)
			{
				wait(0);
			}
			Global_21285 = 6;
		}
		if (!Global_1574971)
		{
			unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", &Global_19943, 1);
		}
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
	else if (Global_20144 == 0)
	{
		if (func_49(2, Global_19922, 0))
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
					{
					}
					else
					{
						Global_19932 = 1;
						func_45();
						unk_0xD681CC2BC1084DB6(0);
						Global_21334 = 1;
						Global_21335 = 1;
						Global_21285 = 6;
						func_15();
						Global_19954.f_1 = Global_19956;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8429);
			if (Global_8429 == 1)
			{
				func_51(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19958;
			}
			else
			{
				func_51(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19959), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19959;
			}
			if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20146 == 0)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else if (Global_77852)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else
			{
				if (Global_20145 == 1)
				{
					if (Global_19942)
					{
						func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19942)
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(&Global_7824, 17);
			}
			if (Global_77852)
			{
				func_11();
				unk_0xB0550BC91B0159D6(&Global_7826, 9);
				func_51(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_119(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19953 == 1)
			{
				func_10();
				func_51(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x6F06CF0E9AB02847();
				}
				else if (func_50(Global_7139, Global_19954) == 0)
				{
					func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_217", &(Global_1918[Global_7139 /*29*/].f_3), 0);
				}
				func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21285 == 4 || Global_21285 == 3)
			{
				func_51(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
					if (func_50(Global_7139, Global_19954) == 0)
					{
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), &Var0, &(Global_1918[Global_7139 /*29*/].f_3), 0);
					}
				}
				func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_10()
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

void func_11()
{
	if (Global_77852)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(&Global_7824, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
		if (func_14(14))
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
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
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
								func_9(&(Global_7831[iVar1 /*15*/]));
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
								func_9(&(Global_7831[iVar1 /*15*/]));
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
								func_9(&(Global_7831[iVar1 /*15*/]));
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
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_15()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return;
	}
	switch (Global_19956)
	{
		case 5:
			Global_19956 = 6;
			break;
		
		case 6:
			if (unk_0xE2D0C323A1AE5D85(Global_7825, 5))
			{
				Global_19956 = 6;
				unk_0xB0550BC91B0159D6(&Global_7825, 5);
			}
			else
			{
				Global_19956 = 3;
			}
			break;
		
		case 7:
			Global_19956 = 3;
			break;
		
		case 3:
			if (unk_0xE2D0C323A1AE5D85(Global_7825, 5))
			{
				Global_19956 = 6;
				unk_0xB0550BC91B0159D6(&Global_7825, 5);
			}
			else
			{
				Global_19956 = 3;
			}
			break;
		
		default:
			Global_19956 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_49(2, Global_19930, 0) || unk_0xF09A4F413B0D30EB(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_49(2, Global_19931, 0) || unk_0xF09A4F413B0D30EB(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_51(Global_19935, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20149 == 0)
		{
			unk_0xBCA3FA8D0984A7D3(2);
		}
		else
		{
			unk_0xBCA3FA8D0984A7D3(1);
		}
	}
}

int func_19()
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

void func_20()
{
	func_51(Global_19935, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20149 == 0)
		{
			unk_0xBCA3FA8D0984A7D3(1);
		}
		else
		{
			unk_0xBCA3FA8D0984A7D3(2);
		}
	}
}

void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xACC32B78196FBC2A(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xACC32B78196FBC2A(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xACC32B78196FBC2A(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_23()
{
	if (unk_0x0347CCBD719C8ADC(Global_19935))
	{
		func_24();
		if (Global_19953 == 1)
		{
			if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21332)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
		}
		else
		{
			func_119(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_77852)
	{
		func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_7824, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21297 = 1;
	}
	else
	{
		Global_21297 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
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
		func_109();
	}
	return 0;
}

void func_27()
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

int func_28()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
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

void func_30()
{
	if (func_14(14))
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
		Global_19954 = func_31();
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

var func_31()
{
	func_32();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_35(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_34(unk_0xE2D3D51028F0428A());
			if (func_33(iVar0) && (!func_14(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_33(Global_112915.f_2363.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_37()
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

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
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

void func_40(var uParam0)
{
	Global_21282 = uParam0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
}

void func_41()
{
	Global_21333 = 0;
	Global_21292 = 1;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_21299 = 0;
	Global_22282 = 0;
	Global_21290 = 0;
	Global_21337 = 0;
	Global_21339 = 0;
	Global_2883585 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21297 = 1;
	}
	else
	{
		Global_21297 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_19943, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!Global_19897)
				{
					if (!unk_0xE2D0C323A1AE5D85(Global_7824, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
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
		if (func_14(14))
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
				uVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if ((((((((unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(uVar3)) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("rhino")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("toro"))
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

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!Global_19897)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_7824, 11))
					{
						func_3();
					}
				}
			}
		}
	}
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

int func_54()
{
	if (unk_0x9315DBF7D972F07A())
	{
		iLocal_91 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x320D1840B6DAA1CC();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_19954.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_59()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_60()
{
	if (func_49(2, Global_19931, 0))
	{
		if (Global_22296 == 0)
		{
			if (Global_21291)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 17))
				{
				}
				else
				{
					unk_0x26A09F012CC86E43();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_62() && unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && iVar1 == 0)
		{
			iVar2 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 0);
			if (Global_77852)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = 1;
			}
			if (!Global_19897)
			{
				if (Global_7139 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
						{
							if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
							}
							else
							{
								if (Global_77852)
								{
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 0);
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 0);
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 0);
								}
								unk_0xCED9E32812D6C7C7(&Global_7824, 11);
								unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_77852 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22298 = 1;
		if (func_50(Global_7139, Global_19954) == 0)
		{
			func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21427, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21427, &(Global_1918[Global_7139 /*29*/].f_7), &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_3), 0);
			func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19880 = 0.2f;
		if (Global_19942)
		{
			func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_7824, 17);
	}
	if (Global_21338 == 1)
	{
		if (Global_19954.f_1 < 6)
		{
			Global_21338 = 0;
		}
		else
		{
			if (Global_19894 == 0)
			{
				if (func_49(2, Global_19923, 0))
				{
					Global_19880 = 0.19f;
					Global_21338 = 0;
					func_45();
					Global_22303 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19924, 0))
			{
				Global_19880 = 0.19f;
				Global_21338 = 0;
				func_45();
				Global_22303 = 2;
			}
		}
	}
	else if (Global_22303 == 2)
	{
		if (Global_21286 == 0)
		{
			unk_0xD681CC2BC1084DB6(0);
			Global_21285 = 6;
		}
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
	else if (!unk_0xA3329B7A7520670E())
	{
		iLocal_32 = 0;
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
		unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", &Global_19943, 1);
		func_15();
		Global_19954.f_1 = Global_19956;
		func_8();
	}
}

void func_64()
{
	if (Global_20152 == 1)
	{
		if (unk_0xA3329B7A7520670E())
		{
			if (unk_0xD973AA641A1CF78A())
			{
				Global_20152 = 0;
			}
		}
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			Global_20152 = 0;
			unk_0xD681CC2BC1084DB6(0);
			Global_21285 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_20152 == 1)
		{
			Global_20152 = 0;
		}
	}
	if (timera() < Global_22306 || Global_20152 == 1)
	{
		if (func_49(2, Global_19922, 0))
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
					{
					}
					else
					{
						Global_19932 = 1;
						func_45();
						unk_0xD681CC2BC1084DB6(0);
						Global_21334 = 1;
						Global_21285 = 6;
						unk_0xB0550BC91B0159D6(&Global_7824, 27);
						if (!Global_21296)
						{
							unk_0xCED9E32812D6C7C7(&Global_7825, 5);
						}
						func_15();
						Global_19954.f_1 = Global_19956;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 27);
		Global_21285 = 4;
		Global_21342 = 0;
		func_67();
		func_66();
		if (!Global_21298)
		{
			if (Global_22302 == 0)
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_7826, 5))
				{
					unk_0xFED65F7C525B4505();
				}
				unk_0xB0550BC91B0159D6(&Global_7826, 5);
			}
			else
			{
				unk_0x0C42FE4000B56A73(Global_20904.f_368, Global_20904.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x9315DBF7D972F07A())
	{
		uLocal_90 = unk_0x0A89FDFA763DCAED();
	}
	else
	{
		iLocal_87 = unk_0x320D1840B6DAA1CC();
	}
}

void func_66()
{
	if (Global_21298)
	{
		if (Global_77852)
		{
			if (unk_0x0347CCBD719C8ADC(Global_19935))
			{
				if (!unk_0x8FE9914D4872D601())
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1795), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0x0347CCBD719C8ADC(Global_19935))
	{
		if (!Global_21293)
		{
			func_119(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21298)
			{
				unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(4);
				unk_0x4F47E317C74C543B(0);
				unk_0x4F47E317C74C543B(2);
				unk_0x4ADC8B166E139423("CELL_CONDFON");
				unk_0x76DB21247AE4E4E2(&Global_21300);
				unk_0xD1D4F8D5470AFA4C();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x6F06CF0E9AB02847();
			}
			else if (func_50(Global_7139, Global_19954) == 0)
			{
				func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_219", &(Global_1918[Global_7139 /*29*/].f_3), 0);
			}
		}
		func_51(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (unk_0x9315DBF7D972F07A())
	{
		iLocal_92 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_78);
		iLocal_93 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x320D1840B6DAA1CC();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x320D1840B6DAA1CC();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21332 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
				{
					if (unk_0x0347CCBD719C8ADC(Global_19935))
					{
						func_45();
						Global_19953 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
			{
				if (unk_0x0347CCBD719C8ADC(Global_19935))
				{
					func_45();
					Global_19953 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_19953 = 3;
	}
	if (Global_19953 == 2)
	{
		iLocal_30 = 0;
		Global_21285 = 4;
		func_61();
		Global_21342 = 0;
		func_67();
		func_66();
		if (!Global_21298)
		{
			if (Global_22302 == 0)
			{
				unk_0xFED65F7C525B4505();
			}
			else
			{
				unk_0x0C42FE4000B56A73(Global_20904.f_368, Global_20904.f_369);
			}
		}
		func_65();
		Global_22301 = 0;
	}
	if (Global_21332 == 0)
	{
		if (Global_19953 == 3)
		{
			if (Global_21298)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22301 = 1;
				unk_0xD681CC2BC1084DB6(0);
				Global_21285 = 6;
				func_15();
				Global_19954.f_1 = Global_19956;
				func_8();
			}
		}
	}
	else if (Global_19953 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2817051.f_2 = 1;
	Global_2817051.f_38 = 1;
	if (unk_0x20E4972CBF3DBE1B())
	{
		if (unk_0xEE03516F1F1A249B())
		{
			while (unk_0x8D9B0AD025E894AD())
			{
				wait(0);
			}
			unk_0x39FC9DEDBEF0B2CE();
			Global_2817051 = 0;
			Global_2817051.f_2 = 0;
		}
		else if (func_73(Global_2817051.f_20))
		{
			if (unk_0x106C9EE9D83F20DF(&(Global_2817051.f_20)))
			{
				if (!unk_0x98E8458382A8BD60(&(Global_2817051.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2817051.f_37)
	{
		func_55(0);
	}
	Global_2817051.f_37 = 0;
	Global_2817051.f_3 = 0;
}

void func_71()
{
	Global_2817051.f_1 = 0;
	Global_2817051 = 0;
	Global_2817051.f_2 = 0;
	Global_2817051.f_33 = -1;
	Global_2817051.f_34 = -1;
	StringCopy(&(Global_2817051.f_4), "", 64);
	StringCopy(&(Global_2817051.f_39[0 /*16*/]), "", 64);
	Global_2817051.f_38 = 0;
	Global_2817051.f_56 = 0;
	Global_2817051.f_57 = 0;
	Global_2817051.f_58 = -2;
	Global_2817051.f_3 = 0;
	func_72(&(Global_2817051.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_21281)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_20904.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_20153[iVar2 /*6*/] = { Global_20904.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_20153[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20153[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20153[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xE73671E3D37CF79E(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0xAEF70623D03F7B02(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (unk_0xE73671E3D37CF79E(&(Global_20153[iVar2 /*6*/])))
				{
					if (unk_0x3C57C2F07FEE34D2(&(Global_20153[iVar2 /*6*/]), &(Global_20904.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &(Global_20153[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xE73671E3D37CF79E(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xAEF70623D03F7B02(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &(Global_20904.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_20153[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20153[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21291 == 0)
	{
		unk_0x524B5FC84F413CA8(uLocal_68);
		unk_0x91700CAD9F55AC58(uLocal_69);
		unk_0x71C95EBA363BDEAE(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, uLocal_67);
		Global_21285 = 4;
	}
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 2, 3);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 1, 2);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 0, 1);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(uVar0);
}

int func_86(var uParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(uVar0);
}

int func_88(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(uVar0);
}

void func_89()
{
	cLocal_70 = { Global_20904.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_70))
	{
		sLocal_74 = unk_0xAEF70623D03F7B02(&cLocal_70);
		if (unk_0xE8F6C1F695B25B91(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_20904.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_60))
	{
		sLocal_64 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 0, 1);
		if (unk_0xE8F6C1F695B25B91(sLocal_64))
		{
		}
		sLocal_65 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 1, 2);
		if (unk_0xE8F6C1F695B25B91(sLocal_65))
		{
		}
		sLocal_66 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 2, 3);
		if (unk_0xE8F6C1F695B25B91(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_20904.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_55))
	{
		sLocal_59 = unk_0xAEF70623D03F7B02(&cLocal_55);
		if (unk_0xE8F6C1F695B25B91(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0x524B5FC84F413CA8(uLocal_68);
	unk_0x91700CAD9F55AC58(uLocal_69);
	if (Global_22277)
	{
		unk_0x3A8253262437BA02(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, uLocal_67);
		iLocal_36 = unk_0x320D1840B6DAA1CC();
	}
	else
	{
		unk_0x71C95EBA363BDEAE(Global_20904.f_368, Global_20904.f_369, Global_20904.f_370, uLocal_67);
	}
	Global_21285 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x7B32AFE3B3F7D5EB(&Global_21361))
	{
		if (unk_0x3C57C2F07FEE34D2(&Global_21361, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (unk_0xA7384DAD7CF469DA() || unk_0x3EBD3AF4E5D7A08C())
		{
			if (Global_1835497 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_77852 || func_101())
		{
			if (Global_1835497 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x2E87280918B16506(&Global_21361)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21287 < 5 || Global_21287 == 10) || Global_21287 == 12) || Global_21287 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				unk_0x249A0D3C5714BCF4(&Global_21361, 7);
				while (!unk_0x01896B71C5AC966E(7))
				{
					wait(0);
				}
			}
			else
			{
				unk_0xC5BF49FEF70EBF12(&Global_21361, 15);
				while (!unk_0x01896B71C5AC966E(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			unk_0x249A0D3C5714BCF4(&Global_21361, 6);
			while (!unk_0x01896B71C5AC966E(6))
			{
				wait(0);
			}
		}
		else if (unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0xC5BF49FEF70EBF12(&Global_21361, 14);
			while (!unk_0x01896B71C5AC966E(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0x59B217A592638F61();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22295 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_20904 };
		StringConCat(&cLocal_42, "A", 24);
		Global_20153[iVar2 /*6*/] = { Global_20904 };
		StringConCat(&(Global_20153[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20153[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20153[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xE73671E3D37CF79E(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0xAEF70623D03F7B02(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4535515 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_67 = func_84();
			uLocal_68 = func_83();
			uLocal_69 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (unk_0xE73671E3D37CF79E(&(Global_20153[iVar2 /*6*/])))
			{
				if (Global_22275 == 0 && Global_22281 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &(Global_20153[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x3C57C2F07FEE34D2(&(Global_20153[iVar2 /*6*/]), &Global_22283))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &(Global_20153[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_22295 = iVar2;
					if (Global_22281 == 1)
					{
						Global_22281 = 0;
					}
				}
			}
			else if (Global_22281 == 0 && Global_22275 == 0)
			{
				unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xE73671E3D37CF79E(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xAEF70623D03F7B02(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				unk_0x532C5782EA6BC972(iVar3, &cLocal_46, &Global_20904, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20574[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xE5965CDF24F93A9F(Global_20574[iVar0 /*10*/]) || Global_20574[iVar0 /*10*/] == 0)
			{
				unk_0x5EC2D166433A9AA4(iVar0, Global_20574[iVar0 /*10*/], &(Global_20574[iVar0 /*10*/].f_1));
			}
			if (Global_20574.f_161 == iVar0)
			{
				if ((Global_20574.f_162 != 0f && Global_20574.f_162.f_1 != 0f) && Global_20574.f_162.f_2 != 0f)
				{
					wait(0);
					unk_0x71995CC4A2EFFFBF(Global_20574.f_161, Global_20574.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4535515 == 1)
	{
		Global_4535515 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4535334[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xE5965CDF24F93A9F(Global_4535334[iVar0 /*9*/]) || Global_4535334[iVar0 /*9*/] == 0)
				{
					unk_0x5EC2D166433A9AA4(Global_4535334[iVar0 /*9*/].f_8, Global_4535334[iVar0 /*9*/], &(Global_4535334[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_20904 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_70))
	{
		sLocal_74 = unk_0xAEF70623D03F7B02(&cLocal_70);
		if (unk_0xE8F6C1F695B25B91(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_20904 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_60))
	{
		sLocal_64 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 0, 1);
		if (unk_0xE8F6C1F695B25B91(sLocal_64))
		{
		}
		sLocal_65 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 1, 2);
		if (unk_0xE8F6C1F695B25B91(sLocal_65))
		{
		}
		sLocal_66 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_60), 2, 3);
		if (unk_0xE8F6C1F695B25B91(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_20904 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_55))
	{
		sLocal_59 = unk_0xAEF70623D03F7B02(&cLocal_55);
		if (unk_0xE8F6C1F695B25B91(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case -1508790734:
		case 1751613877:
		case 502358067:
		case -701873518:
		case -387856564:
		case -342942601:
		case -450026770:
		case -2121613853:
		case 1192484316:
		case -839727634:
		case 700260812:
		case -1133857112:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case 368696214:
		case -519616352:
		case 718322585:
		case 1295831246:
		case -12653036:
		case -768557360:
		case -31194878:
		case -1352319498:
		case -1778740544:
		case 972121350:
		case 342937602:
		case 1546600067:
		case 504458761:
		case -1176094125:
		case 2088767998:
		case -2090807707:
		case -1452261483:
		case 1863087954:
		case 1824767511:
		case -295088776:
		case -650178123:
		case 717392335:
		case -2003600127:
		case -855291381:
		case -1346657670:
		case -2127380210:
		case -407018317:
		case 377179274:
		case 1846630598:
		case 1189722080:
		case 2060867368:
		case 755151809:
		case 999726434:
		case 1784376108:
		case -954494704:
		case -216515191:
		case -733016344:
		case 141855421:
		case -1334558826:
		case 466915412:
		case -2139147773:
		case 49883587:
		case -1566063990:
		case 2116454097:
		case -204827863:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2883694)
	{
		if (func_14(0))
		{
			if (Global_3407872 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_14(0))
		{
			if (Global_3932160 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

var func_101()
{
	return Global_1575022;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xA7384DAD7CF469DA() || unk_0x3EBD3AF4E5D7A08C())
	{
		if (Global_1835497 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_77852)
	{
		if (Global_1835497 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0x7B32AFE3B3F7D5EB(&Global_21361))
	{
		if (unk_0x3C57C2F07FEE34D2(&Global_21361, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(unk_0x2E87280918B16506(&Global_21361)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21287 < 5 || Global_21287 == 10) || Global_21287 == 12) || Global_21287 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			unk_0x249A0D3C5714BCF4(&Global_21361, 7);
			while (!unk_0x01896B71C5AC966E(7))
			{
				wait(0);
			}
		}
		else
		{
			unk_0xC5BF49FEF70EBF12(&Global_21361, 15);
			while (!unk_0x01896B71C5AC966E(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		unk_0x249A0D3C5714BCF4(&Global_21361, 6);
		while (!unk_0x01896B71C5AC966E(6))
		{
			wait(0);
		}
	}
	else
	{
		unk_0xC5BF49FEF70EBF12(&Global_21361, 14);
		while (!unk_0x01896B71C5AC966E(14))
		{
			wait(0);
		}
	}
	unk_0x59B217A592638F61();
	func_94();
}

void func_103()
{
	while (Global_19937 == 1 && unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_19937 = 0;
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7825, 1);
	}
	Global_19938 = 0;
	if (Global_21281 == 0)
	{
		if (!Global_21298)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20152 = 0;
	if (Global_21295)
	{
		if (Global_22302 == 0)
		{
			if (Global_21298 == 0)
			{
				iLocal_34 = 5000;
				unk_0xB4CAA90C9DD83932(Global_20904.f_368, Global_20904.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20152 = 1;
		settimerb(0);
		while ((Global_20152 == 1 && Global_21285 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				Global_20152 = 0;
				unk_0xD681CC2BC1084DB6(0);
				Global_21285 = 6;
			}
			if (unk_0xA3329B7A7520670E())
			{
				if (unk_0xD973AA641A1CF78A())
				{
					Global_20152 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_21285 != 1)
		{
		}
		if (Global_20152 == 0)
		{
		}
	}
	Global_20152 = 0;
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 0) || Global_21285 != 1) || Global_19920 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
	else
	{
		if (Global_21293)
		{
			Global_22303 = 0;
			iLocal_32 = 0;
		}
		if (Global_21295 == 0)
		{
			if (Global_21336 == 0)
			{
				Global_19956 = Global_19954.f_1;
				Global_21336 = 1;
			}
			iLocal_30 = 0;
			if (Global_22302 == 0)
			{
				unk_0xB4CAA90C9DD83932(Global_20904.f_368, Global_20904.f_369);
				wait(0);
				Global_21285 = 3;
				Global_20152 = 1;
				settimerb(0);
				unk_0xCED9E32812D6C7C7(&Global_7824, 27);
				settimera(0);
			}
			else
			{
				Global_20152 = 0;
				Global_21285 = 4;
			}
			Global_19953 = 0;
			if (Global_21296 == 1)
			{
				if (Global_19954.f_1 == 10)
				{
				}
				if (!Global_19954.f_1 == 9)
				{
					if (Global_19954.f_1 > 4)
					{
						if (Global_19937 == 0)
						{
							Global_19954.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19954.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19954.f_1 == 4)
				{
					wait(0);
					if (Global_20152 == 1)
					{
						if (unk_0xA3329B7A7520670E())
						{
							if (unk_0xD973AA641A1CF78A())
							{
								Global_20152 = 0;
							}
						}
					}
				}
				if (Global_19954.f_1 == 6)
				{
				}
				if (Global_19954.f_1 == 10)
				{
				}
				if (Global_19954.f_1 == 3)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_21285 = 6;
					Global_19938 = 1;
					return;
				}
				Global_19954.f_1 = 9;
				func_8();
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_84 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_82 = unk_0x320D1840B6DAA1CC();
			}
			while (Global_19954.f_1 != 9 && Global_19937 == 0)
			{
				wait(0);
				if (Global_20152 == 1)
				{
					if (unk_0xA3329B7A7520670E())
					{
						if (unk_0xD973AA641A1CF78A())
						{
							Global_20152 = 0;
						}
					}
				}
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_91 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x320D1840B6DAA1CC();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22301 = 1;
						Global_19937 = 1;
					}
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(Global_7824, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19937 == 0)
			{
				if (!Global_22302 == 0)
				{
					Global_21342 = 0;
					func_67();
					func_66();
					if (!Global_21298)
					{
						if (Global_22302 == 0)
						{
							unk_0xFED65F7C525B4505();
						}
						else
						{
							unk_0x0C42FE4000B56A73(Global_20904.f_368, Global_20904.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_19938 = 1;
			}
		}
		else
		{
			Global_19953 = 1;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (Global_19954.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xB0550BC91B0159D6(&Global_7825, 21);
				}
			}
			if (Global_21336 == 0)
			{
				Global_19956 = Global_19954.f_1;
				Global_21336 = 1;
			}
			if (Global_19954.f_1 == 3)
			{
				Global_19954.f_1 = 4;
			}
			else
			{
				while (Global_19954.f_1 == 4)
				{
					wait(0);
				}
				if (Global_19954.f_1 == 6)
				{
				}
				Global_19954.f_1 = 9;
				func_8();
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_84 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_82 = unk_0x320D1840B6DAA1CC();
			}
			while (Global_19954.f_1 != 9 && Global_19937 == 0)
			{
				wait(0);
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_91 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x320D1840B6DAA1CC();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22301 = 1;
						Global_19937 = 1;
						unk_0xB0550BC91B0159D6(&Global_7825, 21);
					}
				}
			}
			if (Global_19937 == 0)
			{
				Global_21285 = 2;
			}
			else
			{
				func_104();
				Global_19938 = 1;
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_78 = unk_0x0A89FDFA763DCAED();
				uLocal_81 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_76 = unk_0x320D1840B6DAA1CC();
				iLocal_79 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
}

void func_104()
{
	Global_20151 = 0;
	func_109();
}

void func_105()
{
	float fVar0;
	
	fVar0 = func_106(Global_19907[Global_19899 /*3*/], Global_19900[Global_19899 /*3*/], Global_19914, Global_19885, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22299 == 0)
		{
			unk_0xB60709BD0E075903(1);
		}
		iLocal_32 = 0;
	}
}

float func_106(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4535606 == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 14) && Global_19954.f_1 < 4)
		{
			unk_0xC81489026785778A(&Var0);
			if (Global_19907[Global_19899 /*3*/].f_1 == Var0.f_1)
			{
				Global_4535606 = 1;
			}
		}
	}
	if (func_48() && Global_4535606 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x320D1840B6DAA1CC();
	}
	fVar1 = func_108((to_float((unk_0x320D1840B6DAA1CC() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_19882 = { func_107(Param0, Param1, fVar2) };
		Global_19885 = { func_107(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19882 = { Param1 };
		Global_19885 = { Param3 };
	}
	unk_0x31636F0193379566(Global_19882);
	unk_0x6447DA2F47A963E9(Global_19885, 0);
	return fVar1;
}

Vector3 func_107(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_108(float fParam0, float fParam1, float fParam2)
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

void func_109()
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

bool func_110()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
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
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_53();
		func_113();
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
		func_109();
	}
	return 0;
}

void func_113()
{
	if (!func_114())
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

int func_114()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_117())
	{
		return 0;
	}
	if (func_115(unk_0x9E2D6C50374FCFA9()))
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

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_117()
{
	return -1;
}

int func_118()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

