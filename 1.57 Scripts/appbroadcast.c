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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char cLocal_30[16] = "";
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[16] = "";
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	char cLocal_36[16] = "";
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	char cLocal_39[16] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[16] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[16] = "";
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&cLocal_30, "CELL_212", 16);
	StringCopy(&cLocal_33, "CELL_213", 16);
	StringCopy(&cLocal_36, "CELL_39", 16);
	StringCopy(&cLocal_39, "CELL_MP_300", 16);
	StringCopy(&cLocal_42, "CELL_MP_301", 16);
	StringCopy(&cLocal_45, "CELL_MP_302", 16);
	unk_0x5B2BDC877F7E8802();
	func_44(&uLocal_28);
	func_35();
	while (true)
	{
		wait(0);
		if (!unk_0x930F75DAF7DE892B())
		{
			func_33(1);
			func_32();
		}
		if (!Global_19798.f_1 == 9 && Global_19798.f_1 > 3)
		{
			func_3();
			if (Global_19798.f_1 != 8)
			{
				if (func_2())
				{
					func_32();
				}
			}
		}
		if (func_1())
		{
			func_32();
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

int func_2()
{
	if (Global_8274 == 1 || Global_19798.f_1 < 7)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_28(&uLocal_28))
	{
		if (func_16())
		{
			if (Global_2463437)
			{
				unk_0xE7473EFB02569964(0);
				func_10(1337820848, func_11(1, 1));
				Global_2463437 = 0;
			}
			else
			{
				unk_0xE7473EFB02569964(1);
				func_10(-272926713, func_11(1, 1));
				Global_2463437 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19798.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

bool func_8()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_9()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = -1320260596;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0xB36B8558948EA7A8(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x02BFF15CAA701972())
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312763;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	if (!func_22(unk_0x1146A9AE09CE2B14(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_18(120, -1);
}

int func_18(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_19(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

bool func_20()
{
	return Global_1312890;
}

bool func_21()
{
	return Global_1312892;
}

bool func_22(int iParam0, bool bParam1)
{
	if (func_27() != 0)
	{
		return func_26(iParam0) != 0;
	}
	return func_23(iParam0, bParam1, 0);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_24(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_24(int iParam0)
{
	return func_25(iParam0);
}

bool func_25(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_26(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_27()
{
	return Global_31345;
}

int func_28(var uParam0)
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
	func_29();
	Global_19776 = 1;
	return 1;
}

void func_29()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_30();
	}
}

void func_30()
{
	if (func_31())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

int func_31()
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

void func_32()
{
	unk_0x4BFE89D21F9885DC();
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_34();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_34()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

void func_35()
{
	if (!Global_19798.f_1 == 7)
	{
		Global_19798.f_1 = 7;
	}
	func_43(Global_19779, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2463437)
		{
			func_42(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
		else
		{
			func_42(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_42(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
	}
	func_43(Global_19779, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_39(&cLocal_36);
	if (func_16())
	{
		func_36(13, &cLocal_30, 1, "", 4, &cLocal_33, &uLocal_28);
	}
	else
	{
		func_36(1, "", 1, "", 4, &cLocal_33, &uLocal_28);
	}
}

void func_36(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_37(2, iParam0, cParam1, 0, uParam6, -1);
	func_37(1, iParam2, cParam3, 1, uParam6, 17);
	func_37(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_37(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_42(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(uParam4, iParam3);
		func_38(iParam5, 0);
		return;
	}
	if (Global_19786)
	{
		func_42(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(uParam4, iParam3);
		func_38(iParam5, 1);
		return;
	}
	func_42(Global_19779, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x191DDA30577F440A(uParam4, iParam3);
	func_38(iParam5, 1);
}

void func_38(int iParam0, bool bParam1)
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

void func_39(char[4] cParam0)
{
	func_40(Global_19779, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_40(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_41(uParam2);
	if (!unk_0xAB6A270F84A8781E(iParam3))
	{
		func_41(iParam3);
	}
	if (!unk_0xAB6A270F84A8781E(iParam4))
	{
		func_41(iParam4);
	}
	if (!unk_0xAB6A270F84A8781E(iParam5))
	{
		func_41(iParam5);
	}
	if (!unk_0xAB6A270F84A8781E(iParam6))
	{
		func_41(iParam6);
	}
	unk_0x392841D58D2EED1D();
}

void func_41(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_42(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xAB6A270F84A8781E(cParam7))
	{
		func_41(cParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_41(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_41(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_41(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_41(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_44(var uParam0)
{
	*uParam0 = 0;
}

