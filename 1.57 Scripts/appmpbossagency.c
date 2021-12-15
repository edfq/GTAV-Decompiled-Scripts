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
	int iLocal_77 = 0;
	struct<2> Local_78 = { 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<2> Local_81 = { 0, 0 } ;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<2> Local_87 = { 0, 0 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> Local_90 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
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
	StringCopy(&Local_78, "CELL_206", 16);
	StringCopy(&Local_81, "CELL_214", 16);
	StringCopy(&Local_84, "CELL_243", 16);
	StringCopy(&Local_87, "CELL_244", 16);
	StringCopy(&Local_90, "CELL_265", 16);
	StringCopy(&Local_93, "CELL_300", 16);
	unk_0x5B2BDC877F7E8802();
	func_97(&uLocal_99);
	iLocal_96 = 0;
	func_95();
	func_94(Global_19779, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_84(0);
	while (true)
	{
		wait(0);
		func_83();
		func_82();
		if (!Global_19798.f_1 == 9 && Global_19798.f_1 > 3)
		{
			switch (iLocal_77)
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
			if (Global_19798.f_1 != 8)
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
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 3) || Global_19798.f_1 == 0) || Global_19742 == 1)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1627190.f_6 = 0;
	unk_0x4BFE89D21F9885DC();
}

int func_3()
{
	if (Global_8274 == 1 || Global_19798.f_1 < 7)
	{
		Global_19785 = 1;
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
	
	Global_1627190.f_6 = 1;
	if (iLocal_98)
	{
		if (unk_0x609EEF618F8CC869(2, Global_19767))
		{
			iLocal_98 = 0;
		}
		return;
	}
	if (unk_0x609EEF618F8CC869(2, 201))
	{
		iLocal_77 = 1;
		iVar0 = func_29(iLocal_96, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x609EEF618F8CC869(2, 202))
	{
		iLocal_77 = 1;
		return;
	}
	set_warning_message_with_header("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1627190.f_7[iParam0 /*8*/].f_2;
	if (Global_1627190.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_97 == iVar0)
	{
		func_26(iVar0, Global_1627190.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1627190.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19984)
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
	if (!func_8())
	{
		Global_19798.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
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

int func_10(int iParam0)
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

bool func_11()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_12()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1627190.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1627190.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1627190.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1627190.f_4 = (Global_1627190.f_4 - 1);
					if (Global_1627190.f_4 < 0)
					{
						Global_1627190.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_22), Global_1627190.f_7[iParam0 /*8*/].f_2);
			unk_0xAE77D1668DA754A8(Global_1627190.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1627190.f_7[iVar0 /*8*/] = { Global_1627190.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1627190.f_7[9 /*8*/].f_1 = 0;
		Global_1627190.f_7[9 /*8*/].f_2 = func_14();
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
		unk_0x191DDA30577F440A(&(Global_1627190.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1627190.f_3, iParam0);
}

void func_17()
{
	Global_1627190 = (Global_1627190 - 1);
}

void func_18()
{
	Global_22188 = (Global_22188 - 1);
	if (Global_22188 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_94(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_94(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
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
		if (func_23(14))
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
								func_22(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_22(&(Global_7675[iVar1 /*15*/]));
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
								func_22(&(Global_7675[iVar1 /*15*/]));
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
								func_22(&(Global_7675[iVar1 /*15*/]));
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
								func_22(&(Global_7675[iVar1 /*15*/]));
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
								func_22(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_22(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_22(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

bool func_23(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22188 != 0)
	{
		if (!unk_0xAB6A270F84A8781E(sParam0))
		{
		}
		Global_22188 = 0;
	}
}

void func_25()
{
	Global_1627190.f_1 = (Global_1627190.f_1 - 1);
	if (Global_1627190.f_1 < 0)
	{
		Global_1627190.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_26 == func_14())
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_26 = iParam0;
			Global_2544210.f_5191.f_224 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -25619296;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627190.f_7[iVar0 /*8*/].f_7 == iParam1)
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
	return Global_1627190;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_96, 0);
	if (iLocal_96 == -1)
	{
		func_84(1);
		return;
	}
	iVar1 = Global_1627190.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_97 != iVar1)
	{
		func_84(1);
		return;
	}
	func_41(&uLocal_99);
	if (func_39(&uLocal_99))
	{
		func_84(1);
		return;
	}
	if (func_38(&uLocal_99))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&uLocal_99))
	{
		if (func_33())
		{
			iLocal_98 = 1;
			iLocal_77 = 3;
		}
		else if (Global_1627190.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1627190.f_7[iVar0 /*8*/] == 1)
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
	unk_0x191DDA30577F440A(&Global_1573914, 15);
	func_13(iParam0);
	Global_1627190.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1312436;
}

int func_34(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 0))
	{
		return 0;
	}
	if (Global_19776)
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (!unk_0x86AF801D34E482FF(2, Global_19767))
	{
		return 0;
	}
	func_35();
	Global_19776 = 1;
	return 1;
}

void func_35()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

int func_37()
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

int func_38(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 1))
	{
		return 0;
	}
	if (Global_19776)
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (!unk_0x86AF801D34E482FF(2, Global_19770))
	{
		return 0;
	}
	func_35();
	Global_19776 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 2))
	{
		return 0;
	}
	if (Global_19776)
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (!unk_0x86AF801D34E482FF(2, Global_19768))
	{
		return 0;
	}
	func_40();
	Global_19776 = 1;
	return 1;
}

void func_40()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

void func_41(var uParam0)
{
	if (unk_0xDFB7BFA6482FEE1E() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return;
	}
	if (unk_0x86AF801D34E482FF(2, Global_19774) || unk_0x86AF801D34E482FF(2, 181))
	{
		func_44();
		uParam0->f_1 = unk_0xDFB7BFA6482FEE1E() + 50;
	}
	if (unk_0x86AF801D34E482FF(2, Global_19775) || unk_0x86AF801D34E482FF(2, 180))
	{
		func_42();
		uParam0->f_1 = unk_0xDFB7BFA6482FEE1E() + 50;
	}
}

void func_42()
{
	func_94(Global_19779, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_43();
}

void func_43()
{
	if (func_37())
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

void func_44()
{
	func_94(Global_19779, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_45();
}

void func_45()
{
	if (func_37())
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

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(uParam0))
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

void func_47()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&uLocal_99);
	}
	if (func_34(&uLocal_99))
	{
		unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x4E45F52E0261CADA();
		while (!unk_0xCCBB1074CAAE000A(uVar0))
		{
			wait(0);
		}
		iLocal_96 = unk_0x399B6D3F817B71F1(uVar0);
		iVar1 = func_29(iLocal_96, 0);
		switch (Global_1627190.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_19798.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_99))
	{
		unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x4E45F52E0261CADA();
		while (!unk_0xCCBB1074CAAE000A(uVar2))
		{
			wait(0);
		}
		iLocal_96 = unk_0x399B6D3F817B71F1(uVar2);
		iVar3 = func_29(iLocal_96, 0);
		switch (Global_1627190.f_7[iVar3 /*8*/].f_1)
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
		unk_0xC664C0067EEAB8D1(&(Global_1627190.f_3), iParam0);
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
	
	if (Global_19798.f_1 != 8)
	{
		Global_19798.f_1 = 8;
	}
	func_94(Global_19779, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_96, 0);
	iLocal_97 = Global_1627190.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1627190.f_7[iVar3 /*8*/].f_2;
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(26);
	unk_0x9E3D03981E2E9AD9(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_81(iVar4) };
		unk_0x35CA0C119E6A2A27("STRING");
		unk_0xB2A9BDF905DC5A51(func_75(iVar4));
		unk_0xA91D83F2CC1345A6(&Var5);
		unk_0xD4B2C39F7AD5A6A6();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1627190.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15139)
		{
			bVar7 = func_74(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1630816[iVar4 /*597*/].f_11.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1630816[iVar4 /*597*/].f_11.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1630816[iVar4 /*597*/].f_11.f_11[iVar8];
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
				unk_0x35CA0C119E6A2A27(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_81(uVar6[iVar8]) };
					unk_0xA91D83F2CC1345A6(&Var11);
					iVar8++;
				}
				unk_0xD4B2C39F7AD5A6A6();
			}
		}
		else
		{
			if (Global_1627190.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1627190.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1627190.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x35CA0C119E6A2A27(&cVar12);
			unk_0x38CD3C04C877C35F(Global_1627190.f_88[iVar3 /*5*/]);
			unk_0x38CD3C04C877C35F(func_73(iVar4));
			unk_0x38CD3C04C877C35F(Global_1627190.f_88[iVar3 /*5*/].f_3);
			unk_0x38CD3C04C877C35F(Global_1627190.f_88[iVar3 /*5*/].f_4);
			unk_0xD4B2C39F7AD5A6A6();
		}
	}
	else if (Global_1627190.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x35CA0C119E6A2A27("BA_APP_BODY_DM2");
		unk_0xB2A9BDF905DC5A51(func_75(Global_1627190.f_7[iVar3 /*8*/].f_2));
		unk_0xA91D83F2CC1345A6(func_61(Global_1627190.f_7[iVar3 /*8*/].f_2));
		unk_0xD4B2C39F7AD5A6A6();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1627190.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x05FCBB2D6BF4C399(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x386C67F2B8055D74(sVar1);
	}
	else
	{
		func_22(&Local_93);
	}
	unk_0x392841D58D2EED1D();
	func_94(Global_19779, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_90);
	func_50(13, &Local_84, 12, &Local_87, 4, &Local_78, &uLocal_99);
	iLocal_77 = 1;
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
		func_21(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_19786)
	{
		func_21(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x191DDA30577F440A(uParam4, iParam3);
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
		unk_0x191DDA30577F440A(&Global_7668, iParam0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_19779, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xAB6A270F84A8781E(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xAB6A270F84A8781E(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xAB6A270F84A8781E(sParam6))
	{
		func_22(sParam6);
	}
	unk_0x392841D58D2EED1D();
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
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
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
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
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
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEC92E04062037949(Global_1391551[iVar0 /*5*/].f_2) && unk_0x80B82FD1974E28E0(Global_1391551[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1391712)
	{
		Global_1391551[iVar2 /*5*/] = { Global_1391551[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

char* func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		uVar0 = func_72(&(Global_1630816[iParam0 /*597*/].f_11.f_105));
		return uVar0;
	}
	if (Global_1630816[iParam0 /*597*/].f_11.f_121 != Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_121)
	{
		uVar0 = func_67(iParam0, 0);
		return uVar0;
	}
	if (((func_66(iParam0, 28) || func_66(unk_0x1146A9AE09CE2B14(), 28)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x1146A9AE09CE2B14())
		{
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1630816[iVar1 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(uVar0))
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
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_14();
}

int func_63(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (unk_0x2322DD4FBF5E4E2F())
	{
		if (unk_0x68B90AB279E39C7B(0))
		{
			if (unk_0x94D4A49E53F5209A(&Var0))
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
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0xE22116C6D321FECA() || unk_0x3640D836D145B814())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				return 0;
			}
		}
		else if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				if (unk_0x94D4A49E53F5209A(&Var0))
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
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
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
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACC");
}

var func_68()
{
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACCM");
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
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_14() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_14())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
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
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

bool func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
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
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_62(iParam0)];
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
	return Global_1630816[iParam0 /*597*/].f_11 != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_14())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_81(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0xF04DBC0AC5A2AB23(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1627190.f_6)
	{
		if (iLocal_77 != 3)
		{
			if (!unk_0xD76BEAE1A33E3251())
			{
				Global_1627190.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	unk_0x203739B163D4D88E(0, 176);
	unk_0x203739B163D4D88E(0, 177);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_97 = func_14();
	if (!Global_19798.f_1 == 7)
	{
		Global_19798.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_96;
	}
	if (iVar0 >= Global_1390177)
	{
		iVar0 = 0;
	}
	if (Global_22185)
	{
		func_49();
		Global_22185 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(unk_0x1146A9AE09CE2B14(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19779, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_81, 12, &Local_87, 4, &Local_78, &uLocal_99);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_78, &uLocal_99);
	}
	iLocal_77 = 0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	func_94(Global_19779, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627190.f_7[iVar0 /*8*/].f_1 == 1 && Global_1627190.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1627190.f_7[iVar0 /*8*/])
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
	
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(25);
	unk_0x9E3D03981E2E9AD9(0);
	if (func_80(unk_0x1146A9AE09CE2B14()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x9E3D03981E2E9AD9(-1);
	unk_0x9E3D03981E2E9AD9(1);
	bVar0 = unk_0x02BFF15CAA701972();
	unk_0x9D7453DF8B7E9E0B(bVar0);
	unk_0x392841D58D2EED1D();
}

int func_87(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1627190.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1627190.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(25);
	unk_0x9E3D03981E2E9AD9(iParam1);
	Var0 = { func_81(Global_1627190.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	unk_0x35CA0C119E6A2A27("BA_APP_BODY_DM1");
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x9E3D03981E2E9AD9(-1);
	iVar1 = 1;
	iVar2 = func_78(Global_1627190.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_76(iVar2);
	}
	unk_0x9E3D03981E2E9AD9(iVar1);
	unk_0x9D7453DF8B7E9E0B(true);
	unk_0x392841D58D2EED1D();
	return 1;
}

void func_88(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

int func_89(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1627190.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1627190.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(25);
	unk_0x9E3D03981E2E9AD9(iParam1);
	Var0 = { func_81(Global_1627190.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	bVar1 = func_74(Global_1627190.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_73(Global_1627190.f_7[iParam0 /*8*/].f_2);
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
			unk_0x35CA0C119E6A2A27("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x35CA0C119E6A2A27("BA_APP_BODY_T3");
		}
		unk_0x38CD3C04C877C35F(iVar2);
		unk_0xD4B2C39F7AD5A6A6();
	}
	else
	{
		if (bVar1)
		{
			unk_0x35CA0C119E6A2A27("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x35CA0C119E6A2A27("BA_APP_BODY_T2");
		}
		unk_0x38CD3C04C877C35F(iVar2);
		unk_0xD4B2C39F7AD5A6A6();
	}
	unk_0x9E3D03981E2E9AD9(-1);
	iVar3 = 1;
	iVar4 = func_78(Global_1627190.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_76(iVar4);
	}
	unk_0x9E3D03981E2E9AD9(iVar3);
	unk_0x9D7453DF8B7E9E0B(true);
	unk_0x392841D58D2EED1D();
	return 1;
}

void func_90()
{
	func_94(Global_19779, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(26);
	unk_0x9E3D03981E2E9AD9(0);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xB2A9BDF905DC5A51(func_75(unk_0x1146A9AE09CE2B14()));
	unk_0xA91D83F2CC1345A6(func_91());
	unk_0xD4B2C39F7AD5A6A6();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0x392841D58D2EED1D();
	func_94(Global_19779, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_78, &uLocal_99);
	iLocal_77 = 2;
}

char* func_91()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_62(unk_0x1146A9AE09CE2B14());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0x1146A9AE09CE2B14())
		{
			if (((func_66(iVar0, 28) || func_66(unk_0x1146A9AE09CE2B14(), 28)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1630816[iVar0 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(uVar1))
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
	return func_69(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_93()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1627190.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_95()
{
	Global_1627190.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1627190.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

