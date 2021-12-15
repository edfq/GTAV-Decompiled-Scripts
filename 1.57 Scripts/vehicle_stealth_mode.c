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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_93(&uLocal_46))
	{
		while (!func_81())
		{
			func_69(&uLocal_46);
			if (func_59(&uLocal_46))
			{
			}
			else
			{
				func_17(&uLocal_46);
				wait(0);
			}
		}
	}
	func_1(&uLocal_46);
}

void func_1(var uParam0)
{
	func_16();
	if (func_10(uParam0))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	if (func_8(&uLocal_46))
	{
		func_4(&uLocal_46);
	}
	unk_0x20D884FB6567BAD5(5);
	func_3();
	unk_0xDB6F136202032BCD(unk_0x1146A9AE09CE2B14(), 0);
	func_2();
}

void func_2()
{
	unk_0x4BFE89D21F9885DC();
}

void func_3()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849), 3);
}

void func_4(var uParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1)
{
	unk_0xC664C0067EEAB8D1(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x4BE697D014536271(Global_2416162.f_1582) || Global_2416162.f_1582 == unk_0x62D18D65FE22FF39()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416162.f_1582 = unk_0x62D18D65FE22FF39();
			Global_2416162.f_1583 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			Global_2416162.f_1582 = -1;
		}
		Global_2416162.f_1585 = iParam1;
		Global_2416162.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x4BE697D014536271(Global_2416162.f_1598) || Global_2416162.f_1598 == unk_0x62D18D65FE22FF39()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416162.f_1598 = unk_0x62D18D65FE22FF39();
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_71.f_2), 23);
		}
		else
		{
			Global_2416162.f_1598 = -1;
			unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(var uParam0)
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

var func_12(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

var func_13(char* sParam0, var uParam1)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	return unk_0x0222F263F70347A8(0);
}

var func_14(char* sParam0, var uParam1, var uParam2)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x1896EC0B030A48A2(uParam2);
	return unk_0x0222F263F70347A8(0);
}

var func_15(int iParam0)
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return unk_0x3FCA3350E87E4DB8(iParam0);
}

void func_16()
{
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849), 1);
}

void func_17(var uParam0)
{
	func_56(uParam0);
	func_55(uParam0);
	if (func_54(uParam0))
	{
		if (((func_53(uParam0) && !func_52(uParam0)) && unk_0xA6BE8F025C6B653F(uParam0->f_1)) && !func_51())
		{
			func_50(uParam0, 1, 0);
			func_49(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_52(uParam0))
		{
			if (unk_0xA6BE8F025C6B653F(uParam0->f_1) && !func_51())
			{
				func_50(uParam0, 0, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}
	if (func_48(uParam0))
	{
		unk_0xDB6F136202032BCD(unk_0x1146A9AE09CE2B14(), 1);
		func_47();
		func_46(uParam0);
	}
	else if (func_45(uParam0))
	{
		unk_0xDB6F136202032BCD(unk_0x1146A9AE09CE2B14(), 0);
		func_16();
		func_46(uParam0);
		func_44(uParam0, 5);
	}
	if (func_52(uParam0) && !func_53(uParam0))
	{
		func_42(uParam0);
		func_41();
		func_44(uParam0, 2);
		if (func_38(uParam0))
		{
			func_36();
		}
	}
	else
	{
		func_18(uParam0);
	}
	func_3();
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849), 4);
}

void func_18(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2)) && !unk_0xE8FFE38E2BA32BD6()) && func_35(uParam0)) && !func_34(0)) && !func_33()) && func_31()) && unk_0x419E13582192CFEA(unk_0x27FC1B0077581B37(uParam0->f_1, -1, 0)))
	{
		func_25(uParam0, 1);
		func_24(&(uParam0->f_6), 3);
		uVar0 = func_23(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_54(uParam0))
		{
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		else
		{
			func_20(func_22(uParam0), func_15(uParam0->f_2), uVar0);
		}
		func_19(uParam0);
		func_24(&(uParam0->f_6), 0);
	}
}

void func_19(var uParam0)
{
	func_24(&(uParam0->f_6), 2);
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	unk_0xDDEC6D09154BA73A(uParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, uParam2);
}

void func_21(var uParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xDDEC6D09154BA73A(uParam0);
	unk_0x1896EC0B030A48A2(uParam1);
	unk_0x1896EC0B030A48A2(uParam2);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, uParam3);
}

char* func_22(var uParam0)
{
	if (func_54(uParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(var uParam0, int iParam1)
{
	unk_0x191DDA30577F440A(uParam0, iParam1);
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_54(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (func_28(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_26(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_26(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_27()
{
	return Global_1312763;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_30(iParam0, iParam1);
	uVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

bool func_31()
{
	return (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849, 4) && !func_32());
}

bool func_32()
{
	return ((Global_4456448.f_76587 == 6 || Global_4456448.f_76587 == 7) && Global_4456448.f_2 == 20);
}

bool func_33()
{
	return Global_74428;
}

int func_34(int iParam0)
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

int func_35(var uParam0)
{
	if (func_54(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_36()
{
	if (!unk_0xE8FFE38E2BA32BD6())
	{
		func_37("STEALTH_WARN", 3000);
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_38(var uParam0)
{
	int iVar0;
	
	if (func_34(0) || func_33())
	{
		return 0;
	}
	iVar0 = func_39(uParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0x96DF114B59E81B9C(0, 114) || unk_0x96DF114B59E81B9C(0, 99)) || unk_0x96DF114B59E81B9C(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x96DF114B59E81B9C(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x96DF114B59E81B9C(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x96DF114B59E81B9C(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_39(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 4;
	}
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_40(var uParam0)
{
	return (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0));
}

void func_41()
{
	unk_0x366E7F593105797F(0, 24, 1);
	unk_0x366E7F593105797F(0, 66, 1);
	unk_0x366E7F593105797F(0, 67, 1);
	unk_0x366E7F593105797F(0, 68, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 69, 1);
	unk_0x366E7F593105797F(0, 70, 1);
	unk_0x366E7F593105797F(0, 91, 1);
	unk_0x366E7F593105797F(0, 92, 1);
	unk_0x366E7F593105797F(0, 99, 1);
	unk_0x366E7F593105797F(0, 100, 1);
	unk_0x366E7F593105797F(0, 37, 1);
}

void func_42(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1)) && !unk_0xE8FFE38E2BA32BD6()) && func_9(&(uParam0->f_6), 3)) && !func_34(0)) && !func_33()) && func_31()) && unk_0x419E13582192CFEA(unk_0x27FC1B0077581B37(uParam0->f_1, -1, 0)))
	{
		uVar0 = func_23(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_54(uParam0))
		{
			func_37(func_43(uParam0), uVar0);
		}
		else
		{
			func_21(func_43(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		func_49(uParam0);
		func_24(&(uParam0->f_6), 0);
	}
}

char* func_43(var uParam0)
{
	if (func_54(uParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_44(var uParam0, int iParam1)
{
	if (func_53(uParam0))
	{
		return;
	}
	if (unk_0x8E9D6E2DA3B756D5() != iParam1)
	{
		unk_0x20D884FB6567BAD5(iParam1);
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > iParam1)
	{
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), iParam1, 0);
	}
}

bool func_45(var uParam0)
{
	return (!func_9(uParam0, 0) && func_9(uParam0, 1));
}

void func_46(var uParam0)
{
	func_5(&(uParam0->f_6), 0);
	if (func_10(uParam0))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	if (!func_54(uParam0))
	{
		if (func_52(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		}
	}
}

void func_47()
{
	unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849), 1);
}

bool func_48(var uParam0)
{
	return (func_9(uParam0, 0) && !func_9(uParam0, 1));
}

void func_49(var uParam0)
{
	func_24(&(uParam0->f_6), 1);
}

void func_50(var uParam0, bool bParam1, int iParam2)
{
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			unk_0xD75F380668C5172A(uParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_51()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849, 3);
}

bool func_52(var uParam0)
{
	return func_9(uParam0, 0);
}

bool func_53(var uParam0)
{
	return func_9(uParam0, 2);
}

bool func_54(var uParam0)
{
	return ((func_40(uParam0) && uParam0->f_3 == unk_0x7D2B9E6A64637269()) || unk_0x27FC1B0077581B37(uParam0->f_1, -1, 0) == unk_0x7D2B9E6A64637269());
}

void func_55(var uParam0)
{
	if (func_10(uParam0) && (func_34(0) || func_33()))
	{
		uParam0->f_6.f_2 = 1;
		unk_0x66AE54CE92457FEE(1);
		func_5(&(uParam0->f_6), 0);
		if (func_52(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
			if (func_54(uParam0))
			{
				func_25(uParam0, -1);
			}
		}
	}
}

void func_56(var uParam0)
{
	if (func_52(uParam0))
	{
		if (func_8(uParam0))
		{
			if (func_58())
			{
				func_4(uParam0);
			}
		}
		else if (!func_58())
		{
			func_57(uParam0);
		}
	}
	else if (func_8(uParam0))
	{
		func_4(uParam0);
	}
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849), 2);
}

void func_57(var uParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(uParam0->f_6), 5);
}

bool func_58()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849, 2);
}

int func_59(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 1;
	}
	if (!func_68(uParam0))
	{
		return 1;
	}
	if (!func_67(uParam0->f_2))
	{
		return 1;
	}
	if (func_66(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		return 1;
	}
	if (func_65(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_62(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_60(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2426865[iParam0 /*449*/].f_245 > -1)
		{
			if (func_61(Global_2426865[iParam0 /*449*/].f_245) == 4)
			{
				return 1;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
	}
	return 6;
}

int func_62(int iParam0)
{
	if (iParam0 != func_64() && func_63(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_63(int iParam0, bool bParam1, bool bParam2)
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

int func_64()
{
	return -1;
}

int func_65(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_68(var uParam0)
{
	return (unk_0x419E13582192CFEA(uParam0->f_1) && unk_0xBFCE58B2B3249999(uParam0->f_1, 0));
}

void func_69(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_80(uParam0);
	if (bVar0)
	{
		func_24(uParam0, 3);
	}
	else
	{
		func_5(uParam0, 3);
	}
	if (bVar1)
	{
		func_24(uParam0, 1);
	}
	else
	{
		func_5(uParam0, 1);
	}
	if (func_40(uParam0))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uParam0->f_1 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			if (func_68(uParam0))
			{
				uParam0->f_2 = unk_0x6471F4759775FCA4(uParam0->f_1);
				if (unk_0x986C539B536E0ED2(unk_0x7D2B9E6A64637269(), 2))
				{
					func_24(uParam0, 2);
				}
			}
		}
	}
	if (func_68(uParam0))
	{
		if (!unk_0x9B73EB6255D4AE81(uParam0->f_1, -1, 0))
		{
			iVar2 = unk_0x27FC1B0077581B37(uParam0->f_1, -1, 0);
			if ((unk_0x419E13582192CFEA(iVar2) && !unk_0xE50EB54E0F21BED0(iVar2, 0)) && unk_0x72D30262CF8C8603(iVar2))
			{
				uParam0->f_3 = iVar2;
				if (iVar2 == unk_0x7D2B9E6A64637269())
				{
					func_24(uParam0, 4);
					if (!func_9(uParam0, 3))
					{
						func_24(&(uParam0->f_6), 6);
					}
				}
			}
		}
		if (func_40(uParam0))
		{
			uParam0->f_4 = func_79(unk_0x7D2B9E6A64637269(), 0);
		}
		if (func_54(uParam0))
		{
			if (func_78() && func_72(uParam0))
			{
				func_24(uParam0, 0);
			}
		}
		else
		{
			func_70(uParam0);
		}
	}
	if (func_48(uParam0))
	{
		uParam0->f_6.f_3 = unk_0x551F46B3C7DFB654();
	}
}

void func_70(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0->f_3) && func_71(unk_0xCB567ED25393C1DF(uParam0->f_3)))
	{
		func_24(uParam0, 0);
	}
	else
	{
		func_5(uParam0, 0);
	}
}

bool func_71(int iParam0)
{
	return (iParam0 != -1 && unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_849, 1));
}

bool func_72(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_77();
	if (unk_0xA6BE8F025C6B653F(uParam0->f_1))
	{
		func_76(uParam0);
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !unk_0x10768D2535A136FD(uParam0->f_1);
				break;
		}
	}
	else if (func_75(uParam0))
	{
		if (func_74(uParam0))
		{
			unk_0x13F856602366FE17(uParam0->f_1);
		}
	}
	else
	{
		func_73(uParam0);
	}
	return bVar0;
}

void func_73(var uParam0)
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0xDFB7BFA6482FEE1E();
}

bool func_74(var uParam0)
{
	return (unk_0xDFB7BFA6482FEE1E() - uParam0->f_6.f_1) >= 200;
}

bool func_75(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_76(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

bool func_77()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_849, 1);
}

bool func_78()
{
	return !func_32();
}

int func_79(int iParam0, int iParam1)
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

void func_80(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_81()
{
	if (func_82())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	var uVar0;
	
	func_90(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_89())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_88())
	{
		return 1;
	}
	if (func_87(159))
	{
		if (!func_86())
		{
			return 1;
		}
	}
	if (func_87(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_83() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_83()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	switch (func_85())
	{
		case 0:
			return func_84();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_84()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_85()
{
	return Global_31345;
}

bool func_86()
{
	return Global_2453009.f_698;
}

int func_87(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return Global_2463497;
}

bool func_89()
{
	return Global_2453009.f_693;
}

void func_90(var uParam0)
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
					func_91(iVar0);
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

void func_91(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_63(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_92(uVar2, &bVar3))
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

int func_92(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
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

int func_93(var uParam0)
{
	func_69(uParam0);
	if (func_68(uParam0))
	{
		if (func_54(uParam0))
		{
			if (unk_0xA6BE8F025C6B653F(uParam0->f_1))
			{
				if (!func_51())
				{
					func_50(uParam0, 0, 0);
				}
				else
				{
					func_24(&(uParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(uParam0->f_6), 3);
		}
	}
	return 1;
}

