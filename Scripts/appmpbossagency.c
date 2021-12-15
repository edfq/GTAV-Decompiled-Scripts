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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	float fLocal_47 = 0f;
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
	var uLocal_60 = 0;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	struct<2> Local_82 = { 0, 0 } ;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<2> Local_88 = { 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<2> Local_94 = { 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	struct<2> Local_97 = { 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_82, "CELL_206", 16);
	StringCopy(&Local_85, "CELL_214", 16);
	StringCopy(&Local_88, "CELL_243", 16);
	StringCopy(&Local_91, "CELL_244", 16);
	StringCopy(&Local_94, "CELL_265", 16);
	StringCopy(&Local_97, "CELL_300", 16);
	unk_0x3F57BEDBC381CBC7();
	func_97(&uLocal_103);
	iLocal_100 = 0;
	func_95();
	func_94(Global_19935, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_84(0);
	while (true)
	{
		wait(0);
		func_83();
		func_82();
		if (!Global_19954.f_1 == 9 && Global_19954.f_1 > 3)
		{
			switch (iLocal_81)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_19954.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 3) || Global_19954.f_1 == 0) || Global_19898 == 1)
	{
		Global_19941 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1889922.f_6 = 0;
	unk_0xAFBDF6A5E54114C1();
}

int func_3()
{
	if (Global_8430 == 1 || Global_19954.f_1 < 7)
	{
		Global_19941 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1889922.f_6 = 1;
	if (iLocal_102)
	{
		if (unk_0x26009F50A14AD073(2, Global_19923))
		{
			iLocal_102 = 0;
		}
		return;
	}
	if (unk_0x26009F50A14AD073(2, 201))
	{
		iLocal_81 = 1;
		iVar0 = func_29(iLocal_100, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x26009F50A14AD073(2, 202))
	{
		iLocal_81 = 1;
		return;
	}
	set_warning_message_with_header("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1889922.f_7[iParam0 /*8*/].f_2;
	if (Global_1889922.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_101 == iVar0)
	{
		func_26(iVar0, Global_1889922.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1889922.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19954.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_12()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1889922.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1889922.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1889922.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1889922.f_4 = (Global_1889922.f_4 - 1);
					if (Global_1889922.f_4 < 0)
					{
						Global_1889922.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_22), Global_1889922.f_7[iParam0 /*8*/].f_2);
			unk_0x35A0954FC4DC4CAD(Global_1889922.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1889922.f_7[iVar0 /*8*/] = { Global_1889922.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1889922.f_7[9 /*8*/].f_1 = 0;
		Global_1889922.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0xCED9E32812D6C7C7(&(Global_1889922.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1889922.f_3, iParam0);
}

void func_17()
{
	Global_1889922 = (Global_1889922 - 1);
}

void func_18()
{
	Global_22348 = (Global_22348 - 1);
	if (Global_22348 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_94(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_94(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
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
		if (func_23(14))
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
								func_22(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_22(&(Global_7831[iVar1 /*15*/]));
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
								func_22(&(Global_7831[iVar1 /*15*/]));
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
								func_22(&(Global_7831[iVar1 /*15*/]));
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
								func_22(&(Global_7831[iVar1 /*15*/]));
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
								func_22(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xACC32B78196FBC2A(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xACC32B78196FBC2A(sParam11))
	{
		func_22(sParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_22(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

bool func_23(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22348 != 0)
	{
		if (!unk_0xACC32B78196FBC2A(sParam0))
		{
		}
		Global_22348 = 0;
	}
}

void func_25()
{
	Global_1889922.f_1 = (Global_1889922.f_1 - 1);
	if (Global_1889922.f_1 < 0)
	{
		Global_1889922.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_26 == func_14())
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_26 = iParam0;
			Global_2810287.f_5193.f_225 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 1890624026;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam0 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1889922.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1889922;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_100, 0);
	if (iLocal_100 == -1)
	{
		func_84(1);
		return;
	}
	iVar1 = Global_1889922.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_101 != iVar1)
	{
		func_84(1);
		return;
	}
	func_41(&uLocal_103);
	if (func_39(&uLocal_103))
	{
		func_84(1);
		return;
	}
	if (func_38(&uLocal_103))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&uLocal_103))
	{
		if (func_33())
		{
			iLocal_102 = 1;
			iLocal_81 = 3;
		}
		else if (Global_1889922.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1889922.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_1836066, 15);
	func_13(iParam0);
	Global_1889922.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1574580;
}

int func_34(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 0))
	{
		return 0;
	}
	if (Global_19932)
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return 0;
	}
	if (!unk_0xF09A4F413B0D30EB(2, Global_19923))
	{
		return 0;
	}
	func_35();
	Global_19932 = 1;
	return 1;
}

void func_35()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_19943, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

int func_37()
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

int func_38(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 1))
	{
		return 0;
	}
	if (Global_19932)
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return 0;
	}
	if (!unk_0xF09A4F413B0D30EB(2, Global_19926))
	{
		return 0;
	}
	func_35();
	Global_19932 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(*uParam0, 2))
	{
		return 0;
	}
	if (Global_19932)
	{
		return 0;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return 0;
	}
	if (!unk_0xF09A4F413B0D30EB(2, Global_19924))
	{
		return 0;
	}
	func_40();
	Global_19932 = 1;
	return 1;
}

void func_40()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_19943, 1);
	}
}

void func_41(var uParam0)
{
	if (unk_0x320D1840B6DAA1CC() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return;
	}
	if (unk_0xF09A4F413B0D30EB(2, Global_19930) || unk_0xF09A4F413B0D30EB(2, 181))
	{
		func_44();
		uParam0->f_1 = unk_0x320D1840B6DAA1CC() + 50;
	}
	if (unk_0xF09A4F413B0D30EB(2, Global_19931) || unk_0xF09A4F413B0D30EB(2, 180))
	{
		func_42();
		uParam0->f_1 = unk_0x320D1840B6DAA1CC() + 50;
	}
}

void func_42()
{
	func_94(Global_19935, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
	func_43();
}

void func_43()
{
	if (func_37())
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

void func_44()
{
	func_94(Global_19935, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
	func_45();
}

void func_45()
{
	if (func_37())
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

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(uParam0))
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

void func_47()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&uLocal_103);
	}
	if (func_34(&uLocal_103))
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "GET_CURRENT_SELECTION");
		uVar0 = unk_0xD452B47F164A4D79();
		while (!unk_0x17E14239FB53CCE3(uVar0))
		{
			wait(0);
		}
		iLocal_100 = unk_0xC2F770299DFFA794(uVar0);
		iVar1 = func_29(iLocal_100, 0);
		switch (Global_1889922.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_19954.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_103))
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "GET_CURRENT_SELECTION");
		uVar2 = unk_0xD452B47F164A4D79();
		while (!unk_0x17E14239FB53CCE3(uVar2))
		{
			wait(0);
		}
		iLocal_100 = unk_0xC2F770299DFFA794(uVar2);
		iVar3 = func_29(iLocal_100, 0);
		switch (Global_1889922.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_84(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_84(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0xB0550BC91B0159D6(&(Global_1889922.f_3), iParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_19954.f_1 != 8)
	{
		Global_19954.f_1 = 8;
	}
	func_94(Global_19935, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_100, 0);
	iLocal_101 = Global_1889922.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1889922.f_7[iVar3 /*8*/].f_2;
	unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(26);
	unk_0x4F47E317C74C543B(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_81(iVar4) };
		unk_0x4ADC8B166E139423("STRING");
		unk_0x138506D6C7564EF1(func_75(iVar4));
		unk_0x76DB21247AE4E4E2(&Var5);
		unk_0xD1D4F8D5470AFA4C();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1889922.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15226)
		{
			bVar7 = func_74(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1893548[iVar4 /*600*/].f_11.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1893548[iVar4 /*600*/].f_11.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1893548[iVar4 /*600*/].f_11.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x4ADC8B166E139423(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_81(uVar6[iVar8]) };
					unk_0x76DB21247AE4E4E2(&Var11);
					iVar8++;
				}
				unk_0xD1D4F8D5470AFA4C();
			}
		}
		else
		{
			if (Global_1889922.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1889922.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1889922.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x4ADC8B166E139423(&cVar12);
			unk_0x2AE954BA77A66307(Global_1889922.f_88[iVar3 /*5*/]);
			unk_0x2AE954BA77A66307(func_73(iVar4));
			unk_0x2AE954BA77A66307(Global_1889922.f_88[iVar3 /*5*/].f_3);
			unk_0x2AE954BA77A66307(Global_1889922.f_88[iVar3 /*5*/].f_4);
			unk_0xD1D4F8D5470AFA4C();
		}
	}
	else if (Global_1889922.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x4ADC8B166E139423("BA_APP_BODY_DM2");
		unk_0x138506D6C7564EF1(func_75(Global_1889922.f_7[iVar3 /*8*/].f_2));
		unk_0x76DB21247AE4E4E2(func_61(Global_1889922.f_7[iVar3 /*8*/].f_2));
		unk_0xD1D4F8D5470AFA4C();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1889922.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0xE1AFE5E1E834BBF0(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x35395E05C7DB18D0(sVar1);
	}
	else
	{
		func_22(&Local_97);
	}
	unk_0x6F06CF0E9AB02847();
	func_94(Global_19935, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_94);
	func_50(13, &Local_88, 12, &Local_91, 4, &Local_82, &uLocal_103);
	iLocal_81 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_51(2, iParam0, sParam1, 0, uParam6, -1);
	func_51(1, iParam2, sParam3, 1, uParam6, 17);
	func_51(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_19935, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_19942)
	{
		func_21(Global_19935, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_19935, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCED9E32812D6C7C7(uParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, iParam0);
		return;
	}
	unk_0xB0550BC91B0159D6(&Global_7824, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_19935, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xACC32B78196FBC2A(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xACC32B78196FBC2A(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xACC32B78196FBC2A(sParam6))
	{
		func_22(sParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1656815)
	{
		if (iParam0 == Global_1656815.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1656853 >= 32)
	{
		return;
	}
	Global_1656820[Global_1656853] = iParam0;
	Global_1656853++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656853)
	{
		if (Global_1656820[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656813 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656813)
	{
		if (Global_1656652[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1656652[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1656652[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1656813)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1656652[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656652[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xE1AFE5E1E834BBF0(Global_1656652[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1656652[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1656813)
	{
		Global_1656652[iVar2 /*5*/] = { Global_1656652[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

char* func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		uVar0 = func_72(&(Global_1893548[iParam0 /*600*/].f_11.f_105));
		return uVar0;
	}
	if (Global_1893548[iParam0 /*600*/].f_11.f_121 != Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_121)
	{
		uVar0 = func_67(iParam0, 0);
		return uVar0;
	}
	if (((func_66(iParam0, 28) || func_66(unk_0x9E2D6C50374FCFA9(), 28)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x9E2D6C50374FCFA9())
		{
			if (!unk_0x3EBD3AF4E5D7A08C() && !unk_0x3EE42535A14BA719(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1893548[iVar1 /*600*/].f_11.f_105));
		if (unk_0xACC32B78196FBC2A(uVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_62(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_14();
}

int func_63(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (unk_0x3EBD3AF4E5D7A08C())
	{
		if (unk_0x818F829545200020(0))
		{
			if (unk_0x3984FBEFE07835D4(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_64(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0xA7384DAD7CF469DA() || unk_0x8FE9914D4872D601())
		{
			if (unk_0x818F829545200020(0))
			{
				return 0;
			}
		}
		else if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0x818F829545200020(0))
			{
				if (unk_0x3984FBEFE07835D4(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

var func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return unk_0xAEF70623D03F7B02("GB_REST_ACC");
}

var func_68()
{
	return unk_0xAEF70623D03F7B02("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_14() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_14())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

int func_73(int iParam0)
{
	if (func_62(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_19;
}

bool func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 26);
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = func_78(iParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
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

var func_77(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

bool func_79(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_14())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_81(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0x61042CA2A97BBB69(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1889922.f_6)
	{
		if (iLocal_81 != 3)
		{
			if (!unk_0x3E6C9DAD84CEFED1())
			{
				Global_1889922.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	unk_0x07899AAA5D680386(0, 176);
	unk_0x07899AAA5D680386(0, 177);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_101 = func_14();
	if (!Global_19954.f_1 == 7)
	{
		Global_19954.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_100;
	}
	if (iVar0 >= Global_1655278)
	{
		iVar0 = 0;
	}
	if (Global_22345)
	{
		func_49();
		Global_22345 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(unk_0x9E2D6C50374FCFA9(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19935, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_85, 12, &Local_91, 4, &Local_82, &uLocal_103);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_82, &uLocal_103);
	}
	iLocal_81 = 0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	func_94(Global_19935, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1889922.f_7[iVar0 /*8*/].f_1 == 1 && Global_1889922.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1889922.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_89(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_86();
}

void func_86()
{
	bool bVar0;
	
	unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(25);
	unk_0x4F47E317C74C543B(0);
	if (func_80(unk_0x9E2D6C50374FCFA9()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x4F47E317C74C543B(-1);
	unk_0x4F47E317C74C543B(1);
	bVar0 = unk_0x9315DBF7D972F07A();
	unk_0xD7D6BA6E36AEC182(bVar0);
	unk_0x6F06CF0E9AB02847();
}

int func_87(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1889922.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1889922.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(25);
	unk_0x4F47E317C74C543B(iParam1);
	Var0 = { func_81(Global_1889922.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	unk_0x4ADC8B166E139423("BA_APP_BODY_DM1");
	unk_0xD1D4F8D5470AFA4C();
	unk_0x4F47E317C74C543B(-1);
	iVar1 = 1;
	iVar2 = func_78(Global_1889922.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_76(iVar2);
	}
	unk_0x4F47E317C74C543B(iVar1);
	unk_0xD7D6BA6E36AEC182(true);
	unk_0x6F06CF0E9AB02847();
	return 1;
}

void func_88(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

int func_89(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1889922.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1889922.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(25);
	unk_0x4F47E317C74C543B(iParam1);
	Var0 = { func_81(Global_1889922.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	bVar1 = func_74(Global_1889922.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_73(Global_1889922.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			unk_0x4ADC8B166E139423("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x4ADC8B166E139423("BA_APP_BODY_T3");
		}
		unk_0x2AE954BA77A66307(iVar2);
		unk_0xD1D4F8D5470AFA4C();
	}
	else
	{
		if (bVar1)
		{
			unk_0x4ADC8B166E139423("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x4ADC8B166E139423("BA_APP_BODY_T2");
		}
		unk_0x2AE954BA77A66307(iVar2);
		unk_0xD1D4F8D5470AFA4C();
	}
	unk_0x4F47E317C74C543B(-1);
	iVar3 = 1;
	iVar4 = func_78(Global_1889922.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_76(iVar4);
	}
	unk_0x4F47E317C74C543B(iVar3);
	unk_0xD7D6BA6E36AEC182(true);
	unk_0x6F06CF0E9AB02847();
	return 1;
}

void func_90()
{
	func_94(Global_19935, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(26);
	unk_0x4F47E317C74C543B(0);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x138506D6C7564EF1(func_75(unk_0x9E2D6C50374FCFA9()));
	unk_0x76DB21247AE4E4E2(func_91());
	unk_0xD1D4F8D5470AFA4C();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0x6F06CF0E9AB02847();
	func_94(Global_19935, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_82, &uLocal_103);
	iLocal_81 = 2;
}

char* func_91()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_62(unk_0x9E2D6C50374FCFA9());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0x9E2D6C50374FCFA9())
		{
			if (((func_66(iVar0, 28) || func_66(unk_0x9E2D6C50374FCFA9(), 28)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!unk_0x3EBD3AF4E5D7A08C() && !unk_0x3EE42535A14BA719(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1893548[iVar0 /*600*/].f_11.f_105));
		if (unk_0xACC32B78196FBC2A(uVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_92(bool bParam0)
{
	return func_69(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_93()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1889922.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_95()
{
	Global_1889922.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1889922.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

