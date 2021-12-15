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
	var uLocal_47 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	struct<4> Local_87 = { 0, 0, 0, 0 } ;
	struct<16> Local_88 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_92 = -1;
	if (unk_0x636F1F53CC61D2C9(joaat("context_controller")) > 1)
	{
		unk_0x4BFE89D21F9885DC();
	}
	unk_0x5B2BDC877F7E8802();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_42931 = 0;
	func_39();
	StringCopy(&Global_42932, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_77248;
	while (true)
	{
		if (Global_77248)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_77248 != iVar8)
		{
			func_25();
			func_39();
			iVar2 = -1;
			iVar8 = Global_77248;
			while (unk_0xF471787D45ADC2C1())
			{
				wait(2000);
			}
		}
		if (Global_42937)
		{
			if (Global_42939 > -1)
			{
				if (!Global_42737[Global_42939 /*32*/].f_6)
				{
					if (!func_23(Global_42939, 1))
					{
						Global_42939 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_42937)
			{
				if (Global_42939 != iVar2)
				{
					if (func_18(Global_42939))
					{
						func_25();
						if (!Global_42737[iVar2 /*32*/].f_5 && Global_42737[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_42737[iVar2 /*32*/].f_7)
								{
									if (!Global_42737[iVar2 /*32*/].f_6)
									{
										if (!Global_42737[iVar2 /*32*/].f_12)
										{
											func_17(Global_42737[iVar2 /*32*/].f_8, Global_42737[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_42737[iVar2 /*32*/].f_8, Global_42737[iVar2 /*32*/].f_13, Global_42737[iVar2 /*32*/].f_3, Global_42737[iVar2 /*32*/].f_30);
										}
										Global_42939 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x73EB60E7645EAF45(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x86AF801D34E482FF(2, 51))
						{
							Global_42737[iVar2 /*32*/].f_4 = 1;
							Global_42737[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_42737[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_42930 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0xC6D04E4B28753F77(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), 1))
						{
							if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), 0))
							{
								if (unk_0x7739A311341A5999(0, 101))
								{
									bVar5 = true;
									unk_0x366E7F593105797F(0, 101, 1);
								}
								if (unk_0x7739A311341A5999(0, 74))
								{
									bVar4 = true;
									unk_0x366E7F593105797F(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x681AE3DAF3A73058(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x681AE3DAF3A73058(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_42737[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_42737[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_42737[iVar2 /*32*/].f_7 || Global_42737[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_42930)
				{
					func_25();
				}
				if (unk_0x86AF801D34E482FF(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_42737[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_42931)
				{
					Global_42931 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_42737[iVar2 /*32*/].f_4 || Global_42737[iVar2 /*32*/].f_7))
					{
						Global_42931 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_42737[iVar2 /*32*/].f_7 || Global_42737[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x366E7F593105797F(0, 46, 1);
			unk_0x366E7F593105797F(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_42936 = 0;
		Global_42937 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_84)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_89 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_85)
	{
		if (bLocal_86)
		{
			unk_0x8A90955C39C9044C(0);
		}
		unk_0xDDEC6D09154BA73A(&Local_87);
		if (bLocal_86)
		{
			unk_0xA91D83F2CC1345A6(&Local_88);
		}
		else
		{
			unk_0x1896EC0B030A48A2(&Global_42932);
			unk_0x1896EC0B030A48A2(&Local_88);
		}
		unk_0x4A5DC2FF6E0B609F(0, 0, iVar0, 50);
	}
	else
	{
		unk_0xDDEC6D09154BA73A(&Local_87);
		unk_0x1896EC0B030A48A2(&Global_42932);
		unk_0x4A5DC2FF6E0B609F(0, 0, iVar0, 50);
	}
	switch (iLocal_89)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x9B0169E27978C1A2(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_8() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_8())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0xC4EF004220364D2F(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x9B0169E27978C1A2(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/] && Global_42737[iVar0 /*32*/].f_4)
		{
			if (Global_42737[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x4BE697D014536271(Global_42737[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_42737[iVar0 /*32*/] = 0;
					Global_42737[iVar0 /*32*/].f_31 = 0;
					Global_42737[iVar0 /*32*/] = 0;
					Global_42737[iVar0 /*32*/].f_4 = 0;
					Global_42737[iVar0 /*32*/].f_5 = 0;
					Global_42737[iVar0 /*32*/].f_2 = 0;
					Global_42737[iVar0 /*32*/].f_7 = 0;
					Global_42737[iVar0 /*32*/].f_6 = 0;
					Global_42737[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_42939 != -1 || bLocal_84)
	{
		bLocal_84 = false;
		Global_42939 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_42939)
			{
				func_25();
			}
			Global_42737[iVar0 /*32*/].f_31 = 0;
			Global_42737[iVar0 /*32*/] = 0;
			Global_42737[iVar0 /*32*/].f_4 = 0;
			Global_42737[iVar0 /*32*/].f_5 = 0;
			Global_42737[iVar0 /*32*/].f_2 = 0;
			Global_42737[iVar0 /*32*/].f_7 = 0;
			Global_42737[iVar0 /*32*/].f_6 = 0;
			Global_42737[iVar0 /*32*/].f_1 = -1;
			Global_42737[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_42737[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/] == 1)
		{
			if (Global_42737[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			if (Global_42737[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_42737[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_87 = { Param0 };
	Local_88 = { Param1 };
	bLocal_84 = true;
	bLocal_85 = true;
	iLocal_89 = uParam2;
	bLocal_86 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_87 = { Param0 };
	bLocal_84 = true;
	bLocal_85 = false;
	iLocal_89 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_96299 && Global_96298)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_84)
		{
			return 1;
		}
	}
	if (unk_0xE8FFE38E2BA32BD6() && !unk_0xF3A5A9B3C619EC98())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_74428)
	{
		return 1;
	}
	if (!unk_0xCAD1755E530A6012(unk_0x638BDC79E655C1C2()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x2CA4B93E310C1860())
	{
		return 1;
	}
	if (Global_42936)
	{
		return 1;
	}
	if (unk_0x184AACD856873F4C(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
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

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42737[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_42737[iVar0 /*32*/].f_12)
	{
		unk_0x4A4799828818A508(&(Global_42737[iVar0 /*32*/].f_8));
		unk_0x1896EC0B030A48A2(&Global_42932);
		iVar1 = unk_0x0222F263F70347A8(0);
	}
	else
	{
		unk_0x4A4799828818A508(&(Global_42737[iVar0 /*32*/].f_8));
		unk_0x1896EC0B030A48A2(&Global_42932);
		if (Global_42737[iVar0 /*32*/].f_30)
		{
			unk_0xA91D83F2CC1345A6(&(Global_42737[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x1896EC0B030A48A2(&(Global_42737[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x0222F263F70347A8(0);
	}
	return iVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_42939 = -1;
}

void func_26()
{
	if (!unk_0xF471787D45ADC2C1() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_2453009.f_784.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_74541 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_74541)
	{
		case 3:
			Global_74539 = 0;
			break;
		
		case 4:
			Global_74539 = 3;
			break;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_77248 && func_29())
	{
		return 0;
	}
	if (!Global_77248 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x79CDCC8ABB331B8C("appSecuroServ"))
		{
			unk_0xA7988ABD4140D469("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x79CDCC8ABB331B8C("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0xFC3890D22570A26E("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x79CDCC8ABB331B8C("appBikerBusiness"))
		{
			unk_0xA7988ABD4140D469("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x79CDCC8ABB331B8C("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0xFC3890D22570A26E("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x79CDCC8ABB331B8C("appImportExport"))
		{
			unk_0xA7988ABD4140D469("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x79CDCC8ABB331B8C("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0xFC3890D22570A26E("appImportExport");
		return 1;
	}
	if (!unk_0x79CDCC8ABB331B8C("appInternet"))
	{
		unk_0xA7988ABD4140D469("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x79CDCC8ABB331B8C("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0xFC3890D22570A26E("appInternet");
	return 1;
}

var func_28()
{
	return Global_74429;
}

var func_29()
{
	return Global_1669804;
}

void func_30()
{
	Global_2453009.f_784.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2453009.f_784.f_28 && unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_2453009.f_784.f_31);
	}
	return Global_2453009.f_784.f_28;
}

bool func_32()
{
	return Global_74428;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_59272[iVar1] < 0)
		{
			Global_59272[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1573310 != -1)
	{
		Var0[0 /*13*/] = Global_1573311[0];
		Var0[0 /*13*/].f_1 = Global_1573311[1];
		Var0[0 /*13*/].f_2 = Global_1573311[2];
		Var0[0 /*13*/].f_3 = Global_1573311[3];
		Var0[0 /*13*/].f_4 = Global_1573311[4];
		Var0[0 /*13*/].f_5 = Global_1573311[5];
		Var0[0 /*13*/].f_6 = Global_1573311[6];
		Var0[0 /*13*/].f_7 = Global_1573311[7];
		Var0[0 /*13*/].f_8 = Global_1573311[8];
		Var0[0 /*13*/].f_9 = Global_1573311[9];
		Var0[0 /*13*/].f_10 = Global_1573311[10];
		Var0[0 /*13*/].f_11 = Global_1573311[11];
		Var0[0 /*13*/].f_12 = Global_1573311[12];
		if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
		{
			if (!iLocal_90)
			{
				if (unk_0x2758917A814C20F8(&(Var0[0 /*13*/])))
				{
					iLocal_90 = 1;
				}
			}
			if (iLocal_90)
			{
				if (unk_0xEA6E45901A12B311())
				{
				}
				else
				{
					if (unk_0xA63E80C5933E74F0())
					{
						StringCopy(&(Global_2097152[func_38() /*5557*/].f_5380.f_18[Global_1573310 /*6*/]), unk_0x2866F13E46EAAE03(&(Var0[0 /*13*/])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_91)
				{
					case 0:
						iLocal_92 = unk_0x4AA9B591F7C133EB(&Var0, 1);
						if (iLocal_92 >= 0)
						{
							iLocal_91++;
						}
						break;
					
					case 1:
						iVar2 = unk_0xC43919AB44F8EB1D(iLocal_92, &Var1, 1);
						switch (iVar2)
						{
							case -1:
								func_37();
								break;
							
							case 0:
								MemCopy(&(Global_2097152[func_38() /*5557*/].f_5380.f_18[Global_1573310 /*6*/]), {Var1[0 /*16*/]}, 6);
								func_37();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2097152[func_38() /*5557*/].f_5380.f_18[Global_1573310 /*6*/]), unk_0x6B7C0BD5B0CEDC41(&(Var0[0 /*13*/])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

void func_37()
{
	Global_1573310 = -1;
	iLocal_90 = 0;
	iLocal_92 = -1;
	iLocal_91 = 0;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	Global_42930 = 0;
	Global_42936 = 0;
	Global_42937 = 0;
	Global_42938 = 1;
	Global_42939 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_42737[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

