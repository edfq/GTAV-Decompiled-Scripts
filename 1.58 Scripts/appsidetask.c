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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0.72f;
	fLocal_24 = 0.42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	unk_0x3F57BEDBC381CBC7();
	Global_22351 = 0;
	Global_20143 = 0;
	func_18();
	Global_19954.f_1 = 7;
	func_17(Global_19935, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_19935, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		wait(0);
		if (Global_19954.f_1 != 9)
		{
			switch (Global_19954.f_1)
			{
				case 7:
					if (Global_22351 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_22351 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0xAFBDF6A5E54114C1();
					break;
				
				default:
					break;
			}
			if (Global_22351 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_19922, 0))
			{
				Global_19932 = 1;
				Global_22351 = 0;
				Global_19954.f_1 = 7;
				func_18();
				func_17(Global_19935, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_19935, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
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

int func_2(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, iParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, iParam1)))
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

void func_3()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_4()
{
	if (Global_8430 == 1 || Global_19954.f_1 < 7)
	{
		Global_19941 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	unk_0xCA4C0AD3CAFF651E(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_25, fLocal_26, &(Global_1918[Global_22573[iLocal_21 /*9*/] /*29*/].f_3), 0);
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_22573[iLocal_21 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_25, fLocal_26, "CELL_506", Global_22573[iLocal_21 /*9*/].f_2.f_2, Global_22573[iLocal_21 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_25, fLocal_26, "CELL_503", Global_22573[iLocal_21 /*9*/].f_2.f_2, Global_22573[iLocal_21 /*9*/].f_2.f_1);
	}
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_25, fLocal_26, "CELL_505", Global_22573[iLocal_21 /*9*/].f_2.f_3, Global_22573[iLocal_21 /*9*/].f_2.f_4);
	fLocal_25 = fLocal_23;
	func_10(255, 255, 255, 205);
	fLocal_26 = (fLocal_26 + 0.02f);
	if (Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	unk_0xE835F806BE49C67B(0f, 0.93f);
	func_8(fLocal_25, fLocal_26, &(Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_26 = (fLocal_26 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_26 = (fLocal_26 + 0.04f);
		if (Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_25, fLocal_26, &(Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, &(Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_27[iVar0], Global_22404[Global_22573[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xCDDA0C58B818F6B2(uParam2);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0x3F03C2D4EFA888BC(0.4f, 0.4f);
	unk_0x71F4002CB1A0B451(255, 128, 0, 255);
	unk_0xE570B77D940667FF(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x3F03C2D4EFA888BC(0.3f, 0.3f);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(1, 0, 0, 0, 205);
	unk_0x0365AB5B6DB2F6E3(1);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x71F4002CB1A0B451(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_19923, 0))
	{
		iLocal_21 = iLocal_18[iLocal_20];
		Global_22351 = 1;
		func_12(Global_19935, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_19935, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_19935, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_19954.f_1 = 8;
		Global_22351 = 1;
	}
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
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
		func_13(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_13(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_13(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_13(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_13(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_14()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_2(2, Global_19930, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_2(2, Global_19931, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	iLocal_22 = iLocal_19;
	while (iVar0 < iLocal_22)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		func_8(fLocal_25, fLocal_26, &(Global_1918[Global_22573[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_25, fLocal_26, "CELL_506", Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, "CELL_503", Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_25, fLocal_26, "CELL_505", Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_22573[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_25 = fLocal_23;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		fLocal_26 = (fLocal_26 + 0.02f);
		unk_0xE835F806BE49C67B(0f, 0.93f);
		func_8(fLocal_25, fLocal_26, &(Global_22404[Global_22573[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_26 = (fLocal_26 + 0.05f);
		iVar0++;
	}
}

void func_16(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_13(sParam2);
	if (!unk_0xACC32B78196FBC2A(iParam3))
	{
		func_13(iParam3);
	}
	if (!unk_0xACC32B78196FBC2A(iParam4))
	{
		func_13(iParam4);
	}
	if (!unk_0xACC32B78196FBC2A(iParam5))
	{
		func_13(iParam5);
	}
	if (!unk_0xACC32B78196FBC2A(iParam6))
	{
		func_13(iParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_17(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_18()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar3 = 3;
		Global_22573[iVar3 /*9*/].f_2 = -1;
		Global_22573[iVar3 /*9*/].f_2.f_1 = 0;
		Global_22573[iVar3 /*9*/].f_2.f_2 = 0;
		Global_22573[iVar3 /*9*/].f_2.f_3 = 0;
		Global_22573[iVar3 /*9*/].f_2.f_5 = 0;
		while (iVar2 < 4)
		{
			if (iVar0[iVar2] == 0)
			{
				if (Global_22573[iVar2 /*9*/].f_8 != 0)
				{
					if (func_19(Global_22573[iVar2 /*9*/].f_2, Global_22573[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_22573[iVar1 /*9*/].f_8 != 0)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_12(Global_19935, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

