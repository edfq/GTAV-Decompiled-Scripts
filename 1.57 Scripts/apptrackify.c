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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x5B2BDC877F7E8802();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_19798.f_1 != 9)
		{
			switch (Global_19798.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						unk_0x704F8697BB515627(Global_19779, "APP_FUNCTION");
						unk_0x9E3D03981E2E9AD9(1);
						unk_0x392841D58D2EED1D();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						unk_0x704F8697BB515627(Global_19779, "APP_FUNCTION");
						unk_0x9E3D03981E2E9AD9(1);
						unk_0x392841D58D2EED1D();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_19766, 0))
					{
						func_5();
						Global_19776 = 1;
						func_10();
						func_7();
						if (Global_19798.f_1 > 3)
						{
							Global_19798.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0xC664C0067EEAB8D1(&Global_7669, 22);
	unk_0x4BFE89D21F9885DC();
}

void func_3(int iParam0, int iParam1)
{
	Global_4272732[iParam0] = iParam1;
}

int func_4()
{
	if (Global_8274 == 1 || Global_19798.f_1 < 7)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
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

void func_7()
{
	if (Global_19786)
	{
		func_8(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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

void func_9(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			Local_20 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			fLocal_21 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(23);
				unk_0x9E3D03981E2E9AD9(0);
				if (unk_0x234B68AC2E35ED5A(Global_7669, 30))
				{
					unk_0x9E3D03981E2E9AD9(-99);
					unk_0x9E3D03981E2E9AD9(0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(floor(fLocal_25));
					unk_0x9E3D03981E2E9AD9(floor(fLocal_26));
				}
				unk_0x9E3D03981E2E9AD9(100);
				if (unk_0x234B68AC2E35ED5A(Global_7669, 22))
				{
					unk_0x9E3D03981E2E9AD9(1);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(0);
				}
				if (unk_0x234B68AC2E35ED5A(Global_7669, 29))
				{
					unk_0x9D7453DF8B7E9E0B(0);
				}
				else
				{
					unk_0x9D7453DF8B7E9E0B(1);
				}
				if (unk_0x234B68AC2E35ED5A(Global_7670, 1))
				{
					unk_0x82D42F43BE26EB72(fLocal_28);
				}
				unk_0x392841D58D2EED1D();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19779, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		Local_20 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		fLocal_21 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
		if (Global_4272754 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4272754)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(23);
				unk_0x9E3D03981E2E9AD9(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x234B68AC2E35ED5A(Global_4272479, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x234B68AC2E35ED5A(Global_4272479, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x234B68AC2E35ED5A(Global_4272479, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x234B68AC2E35ED5A(Global_4272479, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x9E3D03981E2E9AD9(-99);
					unk_0x9E3D03981E2E9AD9(0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(floor(fLocal_25));
					unk_0x9E3D03981E2E9AD9(floor(fLocal_26));
				}
				unk_0x9E3D03981E2E9AD9(100);
				if (unk_0x234B68AC2E35ED5A(Global_7669, 22))
				{
					unk_0x9D7453DF8B7E9E0B(1);
				}
				else
				{
					unk_0x9D7453DF8B7E9E0B(1);
				}
				if (unk_0x234B68AC2E35ED5A(Global_7669, 29))
				{
					unk_0x9D7453DF8B7E9E0B(0);
				}
				else
				{
					unk_0x9D7453DF8B7E9E0B(1);
				}
				unk_0x82D42F43BE26EB72(fLocal_28);
				unk_0x9E3D03981E2E9AD9(Global_4272732[iVar0]);
				unk_0x392841D58D2EED1D();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19779, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4272668[iParam0 /*3*/] - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_4272668[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = unk_0xF0AE30F012D1FD8C(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4272668[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4272668[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4272668[iParam0 /*3*/] - Local_20.x) * (Global_4272668[iParam0 /*3*/] - Local_20.x)) + ((Global_4272668[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4272668[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_22231 - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_22231.f_1 - Local_20.f_1));
	fLocal_25 = unk_0xF0AE30F012D1FD8C(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_22231, Local_20));
	fLocal_28 = (Global_22231.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_22231 - Local_20.x) * (Global_22231 - Local_20.x)) + ((Global_22231.f_1 - Local_20.f_1) * (Global_22231.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()
{
	if (Global_77248 == 1)
	{
		return 1;
	}
	return 0;
}

