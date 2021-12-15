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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	unk_0x5B2BDC877F7E8802();
	if (unk_0x4210287E2833D44B(32))
	{
		func_32();
	}
	while (true)
	{
		wait(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (Global_43148)
	{
		return 1;
	}
	if (unk_0x0E8572B08CEB6A11(Global_43149))
	{
		return 1;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_42941 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_43148)
	{
		return;
	}
	iVar1 = unk_0xDFB7BFA6482FEE1E();
	if (Global_43150 > iVar1 || Global_43150 == -1)
	{
		if (unk_0xF471787D45ADC2C1())
		{
			return;
		}
		iVar2 = func_14();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_9();
		if (Global_43153 != Global_43154)
		{
			fVar6 = (Global_43154 - Global_43153);
			Global_43153 = (Global_43153 + (fVar6 * 0.1f));
			if (unk_0x0BCA9ADE67DF9DD8((Global_43153 - Global_43154)) < 0.01f)
			{
				Global_43153 = Global_43154;
			}
		}
		if (!unk_0xC89296DD6818BE01() && !func_8(unk_0x1146A9AE09CE2B14()))
		{
			unk_0xB694862A9439EFF2("DRUNK_SHAKE", ((Global_43153 * fVar3) * fVar5));
		}
		if ((unk_0xDFB7BFA6482FEE1E() % 100) == 0)
		{
			if (Global_43150 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				unk_0xE3CDBC717F3A17ED(((Global_43153 * fVar3) * fVar5));
				unk_0x791FA2C27A7A2BC5(((Global_43152 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_43152 * fVar3) * fVar5) < 1f)
		{
			unk_0x4D96A42366D2FBE1(((Global_43152 * fVar3) * fVar5));
		}
		else
		{
			unk_0x4D96A42366D2FBE1(1f);
		}
		if (!unk_0x6A6C88201B15D7EA())
		{
			unk_0xF0AD0F5559C2EB4C("DRUNK_SHAKE", (((Global_43153 * Global_43147) * fVar3) * fVar5));
		}
		unk_0x10A0C871D59F8003((((Global_43153 * Global_43147) * fVar3) * fVar5));
		if (unk_0x0E8572B08CEB6A11(Global_43149))
		{
			if (unk_0x92685F7745983649(Global_43149))
			{
				unk_0xD3693FDC4A25CD24(Global_43149, ((Global_43153 * fVar3) * fVar5));
			}
		}
		if (!unk_0xAB6A270F84A8781E(&Global_43176) && !unk_0xAB6A270F84A8781E(&Global_43160))
		{
			unk_0xB84B43B766630B5C(&Global_43160);
			StringCopy(&Global_43176, "", 16);
		}
		unk_0x00501E90C3DEF64D();
		if (Global_43155 > 0f)
		{
			if (fLocal_16 != Global_43155)
			{
				if (unk_0xBC240866AA8ED57C() != -1)
				{
				}
				else if (!unk_0xF4E9E5E4909D05A9())
				{
					unk_0x9D8193D2F71A2E2E(&Global_43156, 15f);
					fLocal_16 = Global_43155;
				}
			}
			else
			{
				if (unk_0xBC240866AA8ED57C() != -1 && unk_0xE7C79E1B8D592E06() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0x547724EA136B58B9(2);
				iVar7 = (Global_43150 - iVar1);
				if (iVar7 <= (Global_43151 / 2) && Global_43150 != -1)
				{
					bVar8 = false;
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						if (unk_0xC25830F0A5BDB298(unk_0x7D2B9E6A64637269()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0x7D2B9E6A64637269()))
					{
						Global_43150 += 1000;
					}
					else if (bVar8)
					{
						Global_43150 += 1000;
					}
					else if (unk_0xBC240866AA8ED57C() != -1)
					{
						Global_43150 += 1000;
					}
					else if (func_5())
					{
						Global_43150 += 1000;
					}
					else
					{
						if (unk_0xE7C79E1B8D592E06() != -1)
						{
							unk_0xF88028E143C04565((to_float((Global_43151 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_43155 = 0f;
						StringCopy(&Global_43156, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	unk_0x791FA2C27A7A2BC5(0f);
	unk_0x4D96A42366D2FBE1(0f);
	unk_0xE3CDBC717F3A17ED(0f);
	unk_0x27D1524D8F8AB27C(1);
	unk_0x10A0C871D59F8003(0f);
	unk_0xFB0F840BB90F1EB6(1);
	unk_0x547724EA136B58B9(0);
	if (unk_0xB30CD10E2CD1B67D("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC0BBE340BE2AA02D("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xAB6A270F84A8781E(&Global_43160))
	{
		if (unk_0xB30CD10E2CD1B67D(&Global_43160))
		{
			unk_0xC0BBE340BE2AA02D(&Global_43160);
		}
	}
	if (unk_0x0E8572B08CEB6A11(Global_43149))
	{
		if (unk_0x92685F7745983649(Global_43149))
		{
			unk_0xD3693FDC4A25CD24(Global_43149, 0f);
			unk_0x111FCF62A4BA857D(Global_43149, 1);
		}
	}
	if (unk_0x3141A840BD2418CD())
	{
		unk_0xA085ACB00B1A8A1D(0);
	}
	if (bParam0)
	{
		if (unk_0xE7C79E1B8D592E06() != -1 || unk_0xBC240866AA8ED57C() != -1)
		{
			unk_0x53DE24D8A6C88A9A();
		}
		else if (unk_0xF471787D45ADC2C1())
		{
			unk_0x53DE24D8A6C88A9A();
		}
	}
	Global_43155 = 0f;
	StringCopy(&Global_43156, "", 16);
	StringCopy(&Global_43160, "", 64);
	StringCopy(&Global_43176, "", 16);
	func_4();
}

void func_4()
{
	Global_43148 = 0;
	Global_43149 = 0;
	Global_43150 = 0;
	Global_43151 = 30000;
	Global_43152 = 0f;
	Global_43154 = 0f;
	Global_43153 = 0f;
	Global_43155 = 0f;
	StringCopy(&Global_43156, "", 16);
}

bool func_5()
{
	return Global_2520122;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42969[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42969[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_8(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_13(unk_0x7D2B9E6A64637269());
	iVar2 = func_10(unk_0x7D2B9E6A64637269());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (to_float(iVar1) / to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (to_float(iVar2) / to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42969[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42969[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42969[iVar0 /*5*/].f_1)
		{
			return Global_42969[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42969[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xDFB7BFA6482FEE1E();
	fVar1 = 1f;
	iVar2 = (Global_43150 - iVar0);
	if (iVar2 <= Global_43151)
	{
		if (Global_43150 != -1)
		{
			fVar1 = (to_float(iVar2) / to_float(Global_43151));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_42943[iLocal_15 /*5*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0xE50EB54E0F21BED0(Global_42943[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_42943[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!unk_0x79CDCC8ABB331B8C("drunk"))
	{
		unk_0xA7988ABD4140D469("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_42969[iVar0 /*5*/] = func_17();
	Global_42969[iVar0 /*5*/].f_1 = Global_42943[iParam0 /*5*/].f_1;
	Global_42969[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_42943[iParam0 /*5*/] };
	start_new_script_with_args("drunk", &Var1, 5, 1424);
	unk_0xFC3890D22570A26E("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_42940;
	Global_42940++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42969[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42943[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42943[iParam0 /*5*/].f_1 == unk_0x7D2B9E6A64637269())
		{
			Global_43180 = 0;
		}
	}
	Global_42943[iParam0 /*5*/] = 13;
	Global_42943[iParam0 /*5*/].f_1 = 0;
	Global_42943[iParam0 /*5*/].f_2 = 0;
	Global_42943[iParam0 /*5*/].f_3 = 0;
	Global_42943[iParam0 /*5*/].f_4 = 0;
	Global_42941 = (Global_42941 - 1);
	if (Global_42941 < 0)
	{
		Global_42941 = 0;
	}
}

void func_20()
{
	if (!Global_43050[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_43050[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}
}

void func_21(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_43050[iParam0 /*6*/] = -1;
	Global_43050[iParam0 /*6*/].f_1 = -1;
	Global_43050[iParam0 /*6*/].f_2 = 6;
	Global_43050[iParam0 /*6*/].f_3 = 0;
	Global_43050[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_43050[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_42969[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_42969[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_42969[iLocal_14 /*5*/]);
		}
		else
		{
			func_21(iVar0);
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	func_27(iParam0);
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_25(iVar0);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42969[iParam0 /*5*/] = -1;
	Global_42969[iParam0 /*5*/].f_1 = 0;
	Global_42969[iParam0 /*5*/].f_2 = -1;
	Global_42969[iParam0 /*5*/].f_3 = 0;
	Global_42969[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42969[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43050[iVar0 /*6*/].f_1)
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_43050[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_43050[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()
{
	if (Global_43050[iLocal_13 /*6*/] == 1)
	{
		Global_43050[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43050[iVar0 /*6*/])
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_33();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_43181 = 0;
	Global_43180 = 0;
	Global_42941 = 0;
	unk_0xC9126A88F0FAC28F("drunk");
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_21(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(iVar0);
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_19(iVar0);
		iVar0++;
	}
}

