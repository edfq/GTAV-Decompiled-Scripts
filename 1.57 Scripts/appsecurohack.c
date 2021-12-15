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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
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
	unk_0x5B2BDC877F7E8802();
	if (iLocal_20 == 0)
	{
		func_10();
		iLocal_20 = 1;
	}
	while (true)
	{
		wait(0);
		if (Global_19798.f_1 != 9)
		{
			switch (Global_19798.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_19766, 0))
					{
						func_4();
						Global_19776 = 1;
						if (Global_19798.f_1 > 3)
						{
							Global_19798.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19800 = 6;
			func_2();
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
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x86AF801D34E482FF(iParam0, uParam1) || (iParam2 == 1 && unk_0x96DF114B59E81B9C(iParam0, uParam1)))
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

void func_6()
{
	func_7();
	unk_0x366E7F593105797F(0, 80, 1);
}

void func_7()
{
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(27);
	unk_0x9E3D03981E2E9AD9(0);
	unk_0x9E3D03981E2E9AD9(Global_4272767);
	unk_0x9E3D03981E2E9AD9(Global_4272766);
	func_9("");
	func_9(&Global_4272768);
	unk_0x392841D58D2EED1D();
	unk_0x704F8697BB515627(Global_19779, "DISPLAY_VIEW");
	unk_0x9E3D03981E2E9AD9(27);
	unk_0x392841D58D2EED1D();
	if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 30))
	{
		func_8(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	}
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_9(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_10()
{
	func_7();
	func_8(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
}

