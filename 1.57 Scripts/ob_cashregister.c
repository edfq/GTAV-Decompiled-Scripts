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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
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
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_1391771, 1))
		{
			func_29();
		}
		else
		{
			unk_0x35BEDD7AFD26FCD5(32, 0, -1);
			func_26(0, -1, 0);
			unk_0x87F1904AB605184A(0);
			iLocal_20 = 1;
		}
	}
	else if (unk_0x4210287E2833D44B(2))
	{
		func_29();
	}
	while (true)
	{
		wait(0);
		if (iLocal_20 == 1)
		{
			if (func_14())
			{
				func_29();
			}
		}
		if (unk_0x419E13582192CFEA(uScriptParam_21))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x1861D54BAC877B58(uScriptParam_21))
						{
							Local_19 = { unk_0xD6E677FAD7521410(uScriptParam_21, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x9EE168DA5EB62BF3(uScriptParam_21, 0) && unk_0x1F9D47D45E125FA6(uScriptParam_21)) && !unk_0xEE1D92A39CF8E1E6(uScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_29();
			}
		}
		else
		{
			func_29();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0xB36B8558948EA7A8(70, 121);
	if (unk_0x02BFF15CAA701972())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0xB36B8558948EA7A8(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	unk_0x191DDA30577F440A(&iVar2, 3);
	unk_0x191DDA30577F440A(&iVar2, 4);
	unk_0x16E516CA9C88FF48(iVar0);
	while (!unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		wait(0);
	}
	if (unk_0x02BFF15CAA701972())
	{
		func_2(iVar1, unk_0xEFC7485122683888(Local_19, 1067030938, 1069547520), iVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0x3A63BEB7A1E25FB1(iVar1, unk_0xEFC7485122683888(Local_19, 1067030938, 1069547520), iVar2, iVar3, 0, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<5> Var0;
	
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, iParam2, iParam3, iParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = unk_0xD4D9128A76AEFA14(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, iParam6);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar1 = func_9(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2 = iParam0;
	Var2.f_1 = { Param1 };
	if (func_4(&Var2) != -1)
	{
		return Var0;
	}
	unk_0x191DDA30577F440A(&iParam2, 5);
	Var2.f_4 = unk_0x9C93764223E29C50(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, 0);
	iVar3 = unk_0x61BE49A80917237B();
	if (bParam5)
	{
		Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_12 = unk_0xC34DC2DC2423B647();
		Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_13 = unk_0x257ED0FADF750BCF();
		if (Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_13 == 0)
		{
			Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_13 = unk_0xC9D88F06B228AD40();
			Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_11 = 2;
		}
	}
	Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/] = { Var2 };
	Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_5 = { Param1 };
	Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_8 = iParam2;
	Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_9 = iParam3;
	Global_1649982[iVar3 /*256*/].f_94.f_21[iVar1 /*14*/].f_10 = iParam4;
	return Var2;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2421635.f_2386[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = unk_0x61BE49A80917237B();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1649982[iParam0 /*256*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2421635.f_2386[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30416;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	var uVar0;
	
	func_22(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_31345;
}

bool func_18()
{
	return Global_2453009.f_698;
}

int func_19(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2463497;
}

bool func_21()
{
	return Global_2453009.f_693;
}

void func_22(var uParam0)
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
					func_23(iVar0);
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

void func_23(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_25(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(uVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(uVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_24(uVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_24(var uParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(uParam0))
		{
			if (unk_0x456C91FDAFEEF560(uParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(uParam0)))
				{
					unk_0x4985CD0720AFD468(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(uParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(uParam0))
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

int func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
		if (!func_27())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x930F75DAF7DE892B())
			{
				if (!bParam2)
				{
					func_28();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x41BB6B0BDB7933FF();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x930F75DAF7DE892B())
	{
		if (!bParam2)
		{
			func_28();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_27()
{
	return Global_1312878;
}

void func_28()
{
	unk_0x4BFE89D21F9885DC();
}

void func_29()
{
	unk_0x4BFE89D21F9885DC();
}

