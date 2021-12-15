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
	unk_0x5B2BDC877F7E8802();
	while (true)
	{
		wait(0);
		if (unk_0x234B68AC2E35ED5A(Global_7669, 1))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				if (unk_0x8820F6FCD373F9F7())
				{
					if (Global_19786)
					{
						func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19741)
						{
							func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xC664C0067EEAB8D1(&Global_7669, 1);
				}
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_19991, 0))
		{
			if (!func_118())
			{
				if (!unk_0x234B68AC2E35ED5A(Global_19991, 1))
				{
					unk_0x191DDA30577F440A(&Global_19991, 1);
					if (unk_0x02BFF15CAA701972())
					{
						uLocal_89 = unk_0x551F46B3C7DFB654();
					}
					else
					{
						iLocal_85 = unk_0xDFB7BFA6482FEE1E();
					}
				}
				if (unk_0x02BFF15CAA701972())
				{
					iLocal_91 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_89);
				}
				else
				{
					iLocal_86 = unk_0xDFB7BFA6482FEE1E();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_111(&Global_20579, &Global_21195, &Global_21115, Global_21128, Global_22110, Global_22111, 0))
					{
						Global_19991 = 0;
					}
				}
				else
				{
					Global_19991 = 0;
				}
			}
		}
		if (((!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_17, 4)) && !func_110()) && unk_0x636F1F53CC61D2C9(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21125 != 0)
			{
				if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_21125)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21131)
				{
					if (Global_21121 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_21121 == 0)
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
				if (Global_21131)
				{
					if (Global_21133)
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
	Global_21135 = 0;
	Global_19797 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_21136 = 0;
	Global_21137 = 0;
	Global_21138 = 0;
	Global_21139 = 0;
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
	Global_21129 = 0;
	Global_21130 = 0;
	Global_21172 = 0;
	Global_21173 = 0;
	Global_21176 = 0;
	Global_21178 = 0;
	Global_21177 = 0;
	Global_21180 = 0;
	Global_21179 = 0;
	Global_22142 = 0;
	Global_21182 = 0;
	if (Global_19798.f_1 == 10)
	{
	}
	else if (unk_0x234B68AC2E35ED5A(Global_7668, 11))
	{
		func_3();
	}
	Global_21131 = 0;
	Global_21132 = 0;
	Global_21133 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22115 = 0;
	Global_22122 = 0;
	Global_22121 = 0;
	Global_22118 = 0;
	Global_22117 = 0;
	Global_22119 = 0;
	Global_22120 = 0;
	Global_21121 = 0;
	Global_21122 = 0;
	Global_21123 = 0;
	Global_21124 = 0;
	Global_21383 = 0;
	Global_22146 = 5000;
	Global_19781 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7668, 20);
	unk_0xC664C0067EEAB8D1(&Global_7668, 24);
	unk_0xC664C0067EEAB8D1(&Global_7669, 23);
	unk_0xC664C0067EEAB8D1(&Global_7670, 0);
	unk_0xC664C0067EEAB8D1(&Global_7669, 9);
	unk_0xC664C0067EEAB8D1(&Global_7669, 31);
	unk_0xC664C0067EEAB8D1(&Global_7669, 17);
	unk_0xC664C0067EEAB8D1(&Global_7670, 5);
	Global_22109 = 0;
	Global_22108 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		Global_21125 = 4;
	}
	else
	{
		Global_21125 = 0;
		Global_22136 = 0;
		Global_22147 = unk_0xDFB7BFA6482FEE1E();
	}
}

void func_3()
{
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 11))
			{
				if (!Global_19741)
				{
					unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 0, 1);
				}
				if (Global_77248)
				{
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 1);
				}
				unk_0xC664C0067EEAB8D1(&Global_7668, 11);
			}
		}
	}
}

void func_4()
{
	Global_21135 = 0;
	Global_19797 = 0;
	func_2();
}

void func_5()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
		{
			if (Global_21181 == 0)
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
	if (Global_22117 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22136 == 1)
			{
				unk_0x5535F005DD8AE6E4(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_22136 == 0)
		{
			unk_0xBA3738C78262143F();
			iLocal_31 = 0;
		}
	}
	else if (Global_22119 > 0)
	{
		iLocal_37 = unk_0xDFB7BFA6482FEE1E();
		if ((iLocal_37 - iLocal_36) > Global_22119)
		{
			unk_0x12559ADDF0906A98();
			Global_22117 = 0;
		}
	}
	if (Global_22136 == 0)
	{
		if (!unk_0x6C2F471E0CF8D4CF())
		{
			Global_21125 = 6;
		}
	}
}

void func_6()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x8820F6FCD373F9F7())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_7668, 11))
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (Global_77248 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
			{
				if (Global_77248 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_77248 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22136 == 1)
		{
			if (Global_22137 == 1)
			{
				unk_0x5535F005DD8AE6E4(1);
				iLocal_31 = 1;
				Global_22137 = 0;
			}
		}
	}
	else if (Global_22136 == 0)
	{
		if (Global_22137 == 1)
		{
			unk_0xBA3738C78262143F();
			iLocal_31 = 0;
			Global_22137 = 0;
		}
	}
	if (Global_21178 == 0)
	{
		if (!Global_21138)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_7669, 31))
			{
				if (!unk_0x234B68AC2E35ED5A(Global_7669, 27))
				{
					if (func_54())
					{
						if (Global_19798.f_1 > 6)
						{
							unk_0x191DDA30577F440A(&Global_7669, 24);
							unk_0x191DDA30577F440A(&Global_7669, 27);
							unk_0xC664C0067EEAB8D1(&Global_7669, 26);
							unk_0xC664C0067EEAB8D1(&Global_7669, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x8820F6FCD373F9F7() == 0 && Global_21138 == 0)
	{
		if (Global_21178 == 1)
		{
			unk_0x191DDA30577F440A(&Global_7669, 23);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&Global_7669, 23);
		}
		if (Global_21182)
		{
			if (Global_21178 == 0)
			{
				Global_20744 = { Global_21183 };
				Global_21201 = { Global_21189 };
				Global_21135 = 0;
				Global_22142 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21180)
		{
			while (Global_21178 == 1)
			{
				wait(0);
				if (Global_19798.f_1 < 6)
				{
					Global_21178 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21180)
						{
							iLocal_30 = 1;
							Global_22140 = 1;
							func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21267, &(Global_1878[Global_6983 /*29*/].f_7), &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_3), 0);
							func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19786)
							{
								func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x191DDA30577F440A(&Global_7668, 17);
								func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x191DDA30577F440A(&Global_7668, 17);
								func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22138 = 1;
							if (func_50(Global_6983, Global_19798) == 0)
							{
								func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21267, "CELL_300", &(Global_117[Global_6983 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21267, &(Global_1878[Global_6983 /*29*/].f_7), &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_3), 0);
								func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19786)
							{
								func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xC664C0067EEAB8D1(&Global_7668, 17);
						}
					}
					if (func_49(2, Global_19767, 0))
					{
						func_47();
						Global_19724 = 0.19f;
						Global_21178 = 0;
						func_45();
						if (Global_21180)
						{
							Global_20744 = { Global_21261 };
							Global_22142 = 5;
						}
						else if (Global_21123 > 0)
						{
							Global_21383 = 1;
							Global_21125 = 0;
							Global_22146 = 0;
							if (unk_0x234B68AC2E35ED5A(Global_7669, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22109 + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_21384[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_21746[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22109, &Global_20414, Global_6983, &Global_21201, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21123 == 2)
							{
								func_25(&Global_20414, Global_6983, &Global_21201, &(Global_21279[0 /*6*/]), &(Global_21331[0 /*6*/]), &(Global_21279[1 /*6*/]), &(Global_21331[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22142 = 1;
							Global_22138 = 0;
							Global_22140 = 0;
							Global_21135 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20744 = { Global_21219 };
							Global_22142 = 1;
						}
						Global_22138 = 0;
						Global_22140 = 0;
						Global_21135 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19768, 0) || unk_0x234B68AC2E35ED5A(Global_7668, 24))
					{
						func_47();
						Global_19724 = 0.19f;
						Global_21178 = 0;
						func_45();
						if (Global_21180)
						{
							Global_20744 = { Global_21255 };
							Global_22142 = 4;
						}
						else if (Global_21123 > 0)
						{
							Global_21383 = 1;
							Global_21125 = 0;
							Global_22146 = 0;
							if (unk_0x234B68AC2E35ED5A(Global_7669, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22108 + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_21565[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_21927[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22108, &Global_20414, Global_6983, &Global_21201, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21123 == 2)
							{
								func_25(&Global_20414, Global_6983, &Global_21201, &(Global_21292[0 /*6*/]), &(Global_21344[0 /*6*/]), &(Global_21292[1 /*6*/]), &(Global_21344[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22142 = 2;
							Global_22138 = 0;
							Global_22140 = 0;
							Global_21135 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20744 = { Global_21225 };
							Global_22142 = 2;
						}
						Global_22138 = 0;
						Global_22140 = 0;
						Global_21135 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19770, 0))
					{
						if (Global_21180)
						{
							Global_19724 = 0.19f;
							Global_21178 = 0;
							func_45();
							func_47();
							Global_20744 = { Global_21249 };
							Global_22142 = 3;
							Global_22138 = 0;
							Global_22140 = 0;
							Global_21135 = 0;
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
			while (Global_21178)
			{
				wait(0);
				if (Global_19798.f_1 < 6)
				{
					Global_21178 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19779, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19779, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19779, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19786)
						{
							func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xC664C0067EEAB8D1(&Global_7668, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19767, 0))
					{
						func_47();
						Global_21178 = 0;
						func_45();
						unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
						uLocal_99 = unk_0x4E45F52E0261CADA();
						while (!unk_0xCCBB1074CAAE000A(uLocal_99))
						{
							wait(0);
						}
						iVar2 = unk_0x399B6D3F817B71F1(uLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_20744 = { Global_21255 };
								Global_22142 = 4;
								break;
							
							case 1:
								Global_20744 = { Global_21249 };
								Global_22142 = 3;
								break;
							
							case 2:
								Global_20744 = { Global_21261 };
								Global_22142 = 5;
								break;
						}
						Global_22138 = 0;
						Global_22140 = 0;
						Global_21135 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19768, 0))
					{
						Global_21178 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21126 == 0)
		{
			unk_0x75B41F5020877259(0);
			settimera(0);
			while (timera() < 900 && Global_19798.f_1 == 9)
			{
				wait(0);
			}
			Global_21125 = 6;
		}
		if (!Global_1312827)
		{
			unk_0x9B0169E27978C1A2(-1, "Hang_Up", &Global_19787, 1);
		}
		func_15();
		Global_19798.f_1 = Global_19800;
		func_8();
	}
	else if (Global_19984 == 0)
	{
		if (func_49(2, Global_19766, 0))
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
				{
					if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
					{
					}
					else
					{
						Global_19776 = 1;
						func_45();
						unk_0x75B41F5020877259(0);
						Global_21174 = 1;
						Global_21175 = 1;
						Global_21125 = 6;
						func_15();
						Global_19798.f_1 = Global_19800;
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
			func_51(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8273);
			if (Global_8273 == 1)
			{
				func_51(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19802;
			}
			else
			{
				func_51(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19803), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19803;
			}
			if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19986 == 0)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (Global_77248)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else
			{
				if (Global_19985 == 1)
				{
					if (Global_19786)
					{
						func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19786)
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x191DDA30577F440A(&Global_7668, 17);
			}
			if (Global_77248)
			{
				func_11();
				unk_0xC664C0067EEAB8D1(&Global_7670, 9);
				func_51(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_119(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19797 == 1)
			{
				func_10();
				func_51(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x392841D58D2EED1D();
				}
				else if (func_50(Global_6983, Global_19798) == 0)
				{
					func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_217", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
				func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21125 == 4 || Global_21125 == 3)
			{
				func_51(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
					if (func_50(Global_6983, Global_19798) == 0)
					{
						func_51(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), &Var0, &(Global_1878[Global_6983 /*29*/].f_3), 0);
					}
				}
				func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_10()
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

void func_11()
{
	if (Global_77248)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(&Global_7668, 17);
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
		if (func_14(14))
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
								func_9(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_9(&(Global_7675[iVar1 /*15*/]));
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
								func_9(&(Global_7675[iVar1 /*15*/]));
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
								func_9(&(Global_7675[iVar1 /*15*/]));
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
								func_9(&(Global_7675[iVar1 /*15*/]));
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
								func_9(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_15()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return;
	}
	switch (Global_19800)
	{
		case 5:
			Global_19800 = 6;
			break;
		
		case 6:
			if (unk_0x234B68AC2E35ED5A(Global_7669, 5))
			{
				Global_19800 = 6;
				unk_0xC664C0067EEAB8D1(&Global_7669, 5);
			}
			else
			{
				Global_19800 = 3;
			}
			break;
		
		case 7:
			Global_19800 = 3;
			break;
		
		case 3:
			if (unk_0x234B68AC2E35ED5A(Global_7669, 5))
			{
				Global_19800 = 6;
				unk_0xC664C0067EEAB8D1(&Global_7669, 5);
			}
			else
			{
				Global_19800 = 3;
			}
			break;
		
		default:
			Global_19800 = 3;
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
		if (func_49(2, Global_19774, 0) || unk_0x86AF801D34E482FF(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_49(2, Global_19775, 0) || unk_0x86AF801D34E482FF(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_51(Global_19779, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
	}
}

int func_19()
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

void func_20()
{
	func_51(Global_19779, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
	}
}

void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xAB6A270F84A8781E(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xAB6A270F84A8781E(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xAB6A270F84A8781E(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x392841D58D2EED1D();
}

void func_23()
{
	if (unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		func_24();
		if (Global_19797 == 1)
		{
			if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21172)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
		else
		{
			func_119(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_77248)
	{
		func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
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
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
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
		func_53();
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
		func_109();
	}
	return 0;
}

void func_27()
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

int func_28()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
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

void func_30()
{
	if (func_14(14))
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
		Global_19798 = func_31();
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

var func_31()
{
	func_32();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_35(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_34(unk_0x7D2B9E6A64637269());
			if (func_33(iVar0) && (!func_14(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_33(Global_112293.f_2361.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
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
	return Global_1878[iParam0 /*29*/];
}

void func_37()
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

bool func_38(int iParam0, int iParam1)
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
	Global_21122 = uParam0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
}

void func_41()
{
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_21139 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
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
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (!Global_19741)
				{
					if (!unk_0x234B68AC2E35ED5A(Global_7668, 11))
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
		if (func_14(14))
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
				uVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if ((((((((unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(uVar3)) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(uVar3))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(uVar3))) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark")) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("rhino")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("toro"))
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

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (!Global_19741)
				{
					if (unk_0x234B68AC2E35ED5A(Global_7668, 11))
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
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

int func_54()
{
	if (unk_0x02BFF15CAA701972())
	{
		iLocal_91 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_90);
	}
	else
	{
		iLocal_88 = unk_0xDFB7BFA6482FEE1E();
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
	if (Global_19984)
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
	if (!func_28())
	{
		Global_19798.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_59()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_60()
{
	if (func_49(2, Global_19775, 0))
	{
		if (Global_22136 == 0)
		{
			if (Global_21131)
			{
				if (unk_0x234B68AC2E35ED5A(Global_7669, 17))
				{
				}
				else
				{
					unk_0xAD12B613280ABFFF();
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
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_62() && unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && iVar1 == 0)
		{
			iVar2 = unk_0x228A4ED518554B3F(unk_0x7D2B9E6A64637269(), 0);
			if (Global_77248)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = 1;
			}
			if (!Global_19741)
			{
				if (Global_6983 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
						{
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
							}
							else
							{
								if (Global_77248)
								{
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 0);
								}
								unk_0x191DDA30577F440A(&Global_7668, 11);
								unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 1, 1);
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
	
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_77248 == 0)
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
		Global_22138 = 1;
		if (func_50(Global_6983, Global_19798) == 0)
		{
			func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21267, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21267, &(Global_1878[Global_6983 /*29*/].f_7), &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_3), 0);
			func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19724 = 0.2f;
		if (Global_19786)
		{
			func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	}
	if (Global_21178 == 1)
	{
		if (Global_19798.f_1 < 6)
		{
			Global_21178 = 0;
		}
		else
		{
			if (Global_19738 == 0)
			{
				if (func_49(2, Global_19767, 0))
				{
					Global_19724 = 0.19f;
					Global_21178 = 0;
					func_45();
					Global_22143 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19768, 0))
			{
				Global_19724 = 0.19f;
				Global_21178 = 0;
				func_45();
				Global_22143 = 2;
			}
		}
	}
	else if (Global_22143 == 2)
	{
		if (Global_21126 == 0)
		{
			unk_0x75B41F5020877259(0);
			Global_21125 = 6;
		}
		func_15();
		Global_19798.f_1 = Global_19800;
		func_8();
	}
	else if (!unk_0x8820F6FCD373F9F7())
	{
		iLocal_32 = 0;
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		unk_0x9B0169E27978C1A2(-1, "Hang_Up", &Global_19787, 1);
		func_15();
		Global_19798.f_1 = Global_19800;
		func_8();
	}
}

void func_64()
{
	if (Global_19992 == 1)
	{
		if (unk_0x8820F6FCD373F9F7())
		{
			if (unk_0x442386ED177F9C74())
			{
				Global_19992 = 0;
			}
		}
		if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			Global_19992 = 0;
			unk_0x75B41F5020877259(0);
			Global_21125 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_19992 == 1)
		{
			Global_19992 = 0;
		}
	}
	if (timera() < Global_22146 || Global_19992 == 1)
	{
		if (func_49(2, Global_19766, 0))
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
				{
					if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
					{
					}
					else
					{
						Global_19776 = 1;
						func_45();
						unk_0x75B41F5020877259(0);
						Global_21174 = 1;
						Global_21125 = 6;
						unk_0xC664C0067EEAB8D1(&Global_7668, 27);
						if (!Global_21136)
						{
							unk_0x191DDA30577F440A(&Global_7669, 5);
						}
						func_15();
						Global_19798.f_1 = Global_19800;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 27);
		Global_21125 = 4;
		Global_21182 = 0;
		func_67();
		func_66();
		if (!Global_21138)
		{
			if (Global_22142 == 0)
			{
				if (!unk_0x234B68AC2E35ED5A(Global_7670, 5))
				{
					unk_0x12559ADDF0906A98();
				}
				unk_0xC664C0067EEAB8D1(&Global_7670, 5);
			}
			else
			{
				unk_0x0EDEF7978CB99169(Global_20744.f_368, Global_20744.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x02BFF15CAA701972())
	{
		uLocal_90 = unk_0x551F46B3C7DFB654();
	}
	else
	{
		iLocal_87 = unk_0xDFB7BFA6482FEE1E();
	}
}

void func_66()
{
	if (Global_21138)
	{
		if (Global_77248)
		{
			if (unk_0xDAE4BC89A198A6AF(Global_19779))
			{
				if (!unk_0x3640D836D145B814())
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&(Global_2544210.f_1795), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		if (!Global_21133)
		{
			func_119(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21138)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(4);
				unk_0x9E3D03981E2E9AD9(0);
				unk_0x9E3D03981E2E9AD9(2);
				unk_0x35CA0C119E6A2A27("CELL_CONDFON");
				unk_0xA91D83F2CC1345A6(&Global_21140);
				unk_0xD4B2C39F7AD5A6A6();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x392841D58D2EED1D();
			}
			else if (func_50(Global_6983, Global_19798) == 0)
			{
				func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_219", &(Global_1878[Global_6983 /*29*/].f_3), 0);
			}
		}
		func_51(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (unk_0x02BFF15CAA701972())
	{
		iLocal_92 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_78);
		iLocal_93 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_81);
	}
	else
	{
		iLocal_77 = unk_0xDFB7BFA6482FEE1E();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0xDFB7BFA6482FEE1E();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21172 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
				{
					if (unk_0xDAE4BC89A198A6AF(Global_19779))
					{
						func_45();
						Global_19797 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
			{
				if (unk_0xDAE4BC89A198A6AF(Global_19779))
				{
					func_45();
					Global_19797 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_19797 = 3;
	}
	if (Global_19797 == 2)
	{
		iLocal_30 = 0;
		Global_21125 = 4;
		func_61();
		Global_21182 = 0;
		func_67();
		func_66();
		if (!Global_21138)
		{
			if (Global_22142 == 0)
			{
				unk_0x12559ADDF0906A98();
			}
			else
			{
				unk_0x0EDEF7978CB99169(Global_20744.f_368, Global_20744.f_369);
			}
		}
		func_65();
		Global_22141 = 0;
	}
	if (Global_21172 == 0)
	{
		if (Global_19797 == 3)
		{
			if (Global_21138)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22141 = 1;
				unk_0x75B41F5020877259(0);
				Global_21125 = 6;
				func_15();
				Global_19798.f_1 = Global_19800;
				func_8();
			}
		}
	}
	else if (Global_19797 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2550920.f_2 = 1;
	Global_2550920.f_38 = 1;
	if (unk_0x0B4295B1608BB934())
	{
		if (unk_0x0AC576C57F4675DF())
		{
			while (unk_0xAD2A40A210A89D47())
			{
				wait(0);
			}
			unk_0x158BE4DA604B8CE3();
			Global_2550920 = 0;
			Global_2550920.f_2 = 0;
		}
		else if (func_73(Global_2550920.f_20))
		{
			if (unk_0x9B050CE2036A4DAD(&(Global_2550920.f_20)))
			{
				if (!unk_0x6B8C9C1D64326EAE(&(Global_2550920.f_20)))
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
	if (Global_2550920.f_37)
	{
		func_55(0);
	}
	Global_2550920.f_37 = 0;
	Global_2550920.f_3 = 0;
}

void func_71()
{
	Global_2550920.f_1 = 0;
	Global_2550920 = 0;
	Global_2550920.f_2 = 0;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	StringCopy(&(Global_2550920.f_4), "", 64);
	StringCopy(&(Global_2550920.f_39[0 /*16*/]), "", 64);
	Global_2550920.f_38 = 0;
	Global_2550920.f_56 = 0;
	Global_2550920.f_57 = 0;
	Global_2550920.f_58 = -2;
	Global_2550920.f_3 = 0;
	func_72(&(Global_2550920.f_20));
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
	return unk_0x3699D36B67CC8836(&uParam0, 13);
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
	while (iLocal_75 < Global_21121)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_20744.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_19993[iVar2 /*6*/] = { Global_20744.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_19993[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_19993[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_19993[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x49875FC4498CDA9A(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0x3A2A8DAFDBEC4CFE(&cLocal_38), 64);
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
				if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar2 /*6*/])))
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_19993[iVar2 /*6*/]), &(Global_20744.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x488B94C6752B342B(iVar3, &cLocal_46, &(Global_19993[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x49875FC4498CDA9A(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x3A2A8DAFDBEC4CFE(&cLocal_42), 64);
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
				unk_0x488B94C6752B342B(iVar3, &cLocal_46, &(Global_20744.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_19993[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19993[iVar2 /*6*/]), "END", 24);
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
	if (Global_21131 == 0)
	{
		unk_0xED7CF0445832FAEE(uLocal_68);
		unk_0x050A8AC3F0C8C211(uLocal_69);
		unk_0x68C57F5DB4F92876(Global_20744.f_368, Global_20744.f_369, Global_20744.f_370, uLocal_67);
		Global_21125 = 4;
	}
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0xDA654EB115F9FF7D(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0xDA654EB115F9FF7D(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0xDA654EB115F9FF7D(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0xDA654EB115F9FF7D(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 2, 3);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 1, 2);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 0, 1);
	if (unk_0xDA654EB115F9FF7D(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(uVar0);
}

int func_86(var uParam0)
{
	if (unk_0xDA654EB115F9FF7D(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xDA654EB115F9FF7D(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(uVar0);
}

int func_88(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(uVar0);
}

void func_89()
{
	cLocal_70 = { Global_20744.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_70))
	{
		sLocal_74 = unk_0x3A2A8DAFDBEC4CFE(&cLocal_70);
		if (unk_0x4030103C8B148AFC(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_20744.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_60))
	{
		sLocal_64 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 0, 1);
		if (unk_0x4030103C8B148AFC(sLocal_64))
		{
		}
		sLocal_65 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 1, 2);
		if (unk_0x4030103C8B148AFC(sLocal_65))
		{
		}
		sLocal_66 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 2, 3);
		if (unk_0x4030103C8B148AFC(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_20744.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_55))
	{
		sLocal_59 = unk_0x3A2A8DAFDBEC4CFE(&cLocal_55);
		if (unk_0x4030103C8B148AFC(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0xED7CF0445832FAEE(uLocal_68);
	unk_0x050A8AC3F0C8C211(uLocal_69);
	if (Global_22117)
	{
		unk_0x4257A5C2A5815772(Global_20744.f_368, Global_20744.f_369, Global_20744.f_370, uLocal_67);
		iLocal_36 = unk_0xDFB7BFA6482FEE1E();
	}
	else
	{
		unk_0x68C57F5DB4F92876(Global_20744.f_368, Global_20744.f_369, Global_20744.f_370, uLocal_67);
	}
	Global_21125 = 4;
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
	if (unk_0xB743E5764FA5B809(&Global_21201))
	{
		if (unk_0xDA654EB115F9FF7D(&Global_21201, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0xE22116C6D321FECA() || unk_0x2322DD4FBF5E4E2F())
		{
			if (Global_1573352 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_77248 || func_101())
		{
			if (Global_1573352 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x15173FB88ABC94F9(&Global_21201)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_21127 < 5 || Global_21127 == 10) || Global_21127 == 12) || Global_21127 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0xBB3CDAB62C8773C8(&Global_21201, 7);
				while (!unk_0x080D38ACEC5DC1A2(7))
				{
					wait(0);
				}
			}
			else
			{
				unk_0x5C1A8A424CBD7EC6(&Global_21201, 15);
				while (!unk_0x080D38ACEC5DC1A2(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0xBB3CDAB62C8773C8(&Global_21201, 6);
			while (!unk_0x080D38ACEC5DC1A2(6))
			{
				wait(0);
			}
		}
		else if (unk_0x636F1F53CC61D2C9(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0x5C1A8A424CBD7EC6(&Global_21201, 14);
			while (!unk_0x080D38ACEC5DC1A2(14))
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
	unk_0xE739127DDCFFD880();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22135 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_20744 };
		StringConCat(&cLocal_42, "A", 24);
		Global_19993[iVar2 /*6*/] = { Global_20744 };
		StringConCat(&(Global_19993[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_19993[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_19993[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x49875FC4498CDA9A(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0x3A2A8DAFDBEC4CFE(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4272667 == 0)
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
			if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar2 /*6*/])))
			{
				if (Global_22115 == 0 && Global_22121 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x488B94C6752B342B(iVar3, &cLocal_46, &(Global_19993[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0xDA654EB115F9FF7D(&(Global_19993[iVar2 /*6*/]), &Global_22123))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x488B94C6752B342B(iVar3, &cLocal_46, &(Global_19993[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_22135 = iVar2;
					if (Global_22121 == 1)
					{
						Global_22121 = 0;
					}
				}
			}
			else if (Global_22121 == 0 && Global_22115 == 0)
			{
				unk_0x488B94C6752B342B(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x49875FC4498CDA9A(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x3A2A8DAFDBEC4CFE(&cLocal_42), 64);
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
				unk_0x488B94C6752B342B(iVar3, &cLocal_46, &Global_20744, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
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
		if (Global_20414[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x419E13582192CFEA(Global_20414[iVar0 /*10*/]) || Global_20414[iVar0 /*10*/] == 0)
			{
				unk_0xC1DF1475AF167C08(iVar0, Global_20414[iVar0 /*10*/], &(Global_20414[iVar0 /*10*/].f_1));
			}
			if (Global_20414.f_161 == iVar0)
			{
				if ((Global_20414.f_162 != 0f && Global_20414.f_162.f_1 != 0f) && Global_20414.f_162.f_2 != 0f)
				{
					wait(0);
					unk_0x5A1619993190DFD5(Global_20414.f_161, Global_20414.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4272667 == 1)
	{
		Global_4272667 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4272486[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x419E13582192CFEA(Global_4272486[iVar0 /*9*/]) || Global_4272486[iVar0 /*9*/] == 0)
				{
					unk_0xC1DF1475AF167C08(Global_4272486[iVar0 /*9*/].f_8, Global_4272486[iVar0 /*9*/], &(Global_4272486[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_20744 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_70))
	{
		sLocal_74 = unk_0x3A2A8DAFDBEC4CFE(&cLocal_70);
		if (unk_0x4030103C8B148AFC(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_20744 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_60))
	{
		sLocal_64 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 0, 1);
		if (unk_0x4030103C8B148AFC(sLocal_64))
		{
		}
		sLocal_65 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 1, 2);
		if (unk_0x4030103C8B148AFC(sLocal_65))
		{
		}
		sLocal_66 = unk_0xE803430E29ABF0DE(unk_0x3A2A8DAFDBEC4CFE(&cLocal_60), 2, 3);
		if (unk_0x4030103C8B148AFC(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_20744 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x49875FC4498CDA9A(&cLocal_55))
	{
		sLocal_59 = unk_0x3A2A8DAFDBEC4CFE(&cLocal_55);
		if (unk_0x4030103C8B148AFC(sLocal_59))
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
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2621550)
	{
		if (func_14(0))
		{
			if (Global_3145728 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_14(0))
		{
			if (Global_3670016 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

var func_101()
{
	return Global_1312878;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xE22116C6D321FECA() || unk_0x2322DD4FBF5E4E2F())
	{
		if (Global_1573352 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_77248)
	{
		if (Global_1573352 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0xB743E5764FA5B809(&Global_21201))
	{
		if (unk_0xDA654EB115F9FF7D(&Global_21201, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_98(unk_0x15173FB88ABC94F9(&Global_21201)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_21127 < 5 || Global_21127 == 10) || Global_21127 == 12) || Global_21127 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0xBB3CDAB62C8773C8(&Global_21201, 7);
			while (!unk_0x080D38ACEC5DC1A2(7))
			{
				wait(0);
			}
		}
		else
		{
			unk_0x5C1A8A424CBD7EC6(&Global_21201, 15);
			while (!unk_0x080D38ACEC5DC1A2(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0xBB3CDAB62C8773C8(&Global_21201, 6);
		while (!unk_0x080D38ACEC5DC1A2(6))
		{
			wait(0);
		}
	}
	else
	{
		unk_0x5C1A8A424CBD7EC6(&Global_21201, 14);
		while (!unk_0x080D38ACEC5DC1A2(14))
		{
			wait(0);
		}
	}
	unk_0xE739127DDCFFD880();
	func_94();
}

void func_103()
{
	while (Global_19781 == 1 && unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_19781 = 0;
	if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
	{
		unk_0x191DDA30577F440A(&Global_7669, 1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7669, 1);
	}
	Global_19782 = 0;
	if (Global_21121 == 0)
	{
		if (!Global_21138)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_19992 = 0;
	if (Global_21135)
	{
		if (Global_22142 == 0)
		{
			if (Global_21138 == 0)
			{
				iLocal_34 = 5000;
				unk_0x9740F9C648B27B1F(Global_20744.f_368, Global_20744.f_369);
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
		Global_19992 = 1;
		settimerb(0);
		while ((Global_19992 == 1 && Global_21125 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				Global_19992 = 0;
				unk_0x75B41F5020877259(0);
				Global_21125 = 6;
			}
			if (unk_0x8820F6FCD373F9F7())
			{
				if (unk_0x442386ED177F9C74())
				{
					Global_19992 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_21125 != 1)
		{
		}
		if (Global_19992 == 0)
		{
		}
	}
	Global_19992 = 0;
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 0) || Global_21125 != 1) || Global_19764 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
	else
	{
		if (Global_21133)
		{
			Global_22143 = 0;
			iLocal_32 = 0;
		}
		if (Global_21135 == 0)
		{
			if (Global_21176 == 0)
			{
				Global_19800 = Global_19798.f_1;
				Global_21176 = 1;
			}
			iLocal_30 = 0;
			if (Global_22142 == 0)
			{
				unk_0x9740F9C648B27B1F(Global_20744.f_368, Global_20744.f_369);
				wait(0);
				Global_21125 = 3;
				Global_19992 = 1;
				settimerb(0);
				unk_0x191DDA30577F440A(&Global_7668, 27);
				settimera(0);
			}
			else
			{
				Global_19992 = 0;
				Global_21125 = 4;
			}
			Global_19797 = 0;
			if (Global_21136 == 1)
			{
				if (Global_19798.f_1 == 10)
				{
				}
				if (!Global_19798.f_1 == 9)
				{
					if (Global_19798.f_1 > 4)
					{
						if (Global_19781 == 0)
						{
							Global_19798.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19798.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19798.f_1 == 4)
				{
					wait(0);
					if (Global_19992 == 1)
					{
						if (unk_0x8820F6FCD373F9F7())
						{
							if (unk_0x442386ED177F9C74())
							{
								Global_19992 = 0;
							}
						}
					}
				}
				if (Global_19798.f_1 == 6)
				{
				}
				if (Global_19798.f_1 == 10)
				{
				}
				if (Global_19798.f_1 == 3)
				{
					unk_0x75B41F5020877259(0);
					Global_21125 = 6;
					Global_19782 = 1;
					return;
				}
				Global_19798.f_1 = 9;
				func_8();
			}
			if (unk_0x02BFF15CAA701972())
			{
				uLocal_84 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				iLocal_82 = unk_0xDFB7BFA6482FEE1E();
			}
			while (Global_19798.f_1 != 9 && Global_19781 == 0)
			{
				wait(0);
				if (Global_19992 == 1)
				{
					if (unk_0x8820F6FCD373F9F7())
					{
						if (unk_0x442386ED177F9C74())
						{
							Global_19992 = 0;
						}
					}
				}
				if (unk_0x02BFF15CAA701972())
				{
					iLocal_91 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0xDFB7BFA6482FEE1E();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22141 = 1;
						Global_19781 = 1;
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Global_7668, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19781 == 0)
			{
				if (!Global_22142 == 0)
				{
					Global_21182 = 0;
					func_67();
					func_66();
					if (!Global_21138)
					{
						if (Global_22142 == 0)
						{
							unk_0x12559ADDF0906A98();
						}
						else
						{
							unk_0x0EDEF7978CB99169(Global_20744.f_368, Global_20744.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_19782 = 1;
			}
		}
		else
		{
			Global_19797 = 1;
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (Global_19798.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xC664C0067EEAB8D1(&Global_7669, 21);
				}
			}
			if (Global_21176 == 0)
			{
				Global_19800 = Global_19798.f_1;
				Global_21176 = 1;
			}
			if (Global_19798.f_1 == 3)
			{
				Global_19798.f_1 = 4;
			}
			else
			{
				while (Global_19798.f_1 == 4)
				{
					wait(0);
				}
				if (Global_19798.f_1 == 6)
				{
				}
				Global_19798.f_1 = 9;
				func_8();
			}
			if (unk_0x02BFF15CAA701972())
			{
				uLocal_84 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				iLocal_82 = unk_0xDFB7BFA6482FEE1E();
			}
			while (Global_19798.f_1 != 9 && Global_19781 == 0)
			{
				wait(0);
				if (unk_0x02BFF15CAA701972())
				{
					iLocal_91 = unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0xDFB7BFA6482FEE1E();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22141 = 1;
						Global_19781 = 1;
						unk_0xC664C0067EEAB8D1(&Global_7669, 21);
					}
				}
			}
			if (Global_19781 == 0)
			{
				Global_21125 = 2;
			}
			else
			{
				func_104();
				Global_19782 = 1;
			}
			if (unk_0x02BFF15CAA701972())
			{
				uLocal_78 = unk_0x551F46B3C7DFB654();
				uLocal_81 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				iLocal_76 = unk_0xDFB7BFA6482FEE1E();
				iLocal_79 = unk_0xDFB7BFA6482FEE1E();
			}
		}
	}
}

void func_104()
{
	Global_19991 = 0;
	func_109();
}

void func_105()
{
	float fVar0;
	
	fVar0 = func_106(Global_19751[Global_19743 /*3*/], Global_19744[Global_19743 /*3*/], Global_19758, Global_19729, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22139 == 0)
		{
			unk_0xDD7C2F9844E745B1(1);
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
	
	if (Global_4272758 == 0)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 14) && Global_19798.f_1 < 4)
		{
			unk_0x3AEC124A3999B3D1(&Var0);
			if (Global_19751[Global_19743 /*3*/].f_1 == Var0.f_1)
			{
				Global_4272758 = 1;
			}
		}
	}
	if (func_48() && Global_4272758 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0xDFB7BFA6482FEE1E();
	}
	fVar1 = func_108((to_float((unk_0xDFB7BFA6482FEE1E() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_19726 = { func_107(Param0, Param1, fVar2) };
		Global_19729 = { func_107(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19726 = { Param1 };
		Global_19729 = { Param3 };
	}
	unk_0xA48FA5CE681A5230(Global_19726);
	unk_0x544677934225FF04(Global_19729, 0);
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

bool func_110()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
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
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
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
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_53();
		func_113();
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
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_114()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_117())
	{
		return 0;
	}
	if (func_115(unk_0x1146A9AE09CE2B14()))
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

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_117()
{
	return -1;
}

int func_118()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

