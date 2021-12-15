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
	unk_0x3F57BEDBC381CBC7();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_19954.f_1 != 9)
		{
			switch (Global_19954.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						unk_0xEA5DEA46C3EE64D3(Global_19935, "APP_FUNCTION");
						unk_0x4F47E317C74C543B(1);
						unk_0x6F06CF0E9AB02847();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						unk_0xEA5DEA46C3EE64D3(Global_19935, "APP_FUNCTION");
						unk_0x4F47E317C74C543B(1);
						unk_0x6F06CF0E9AB02847();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_19922, 0))
					{
						func_5();
						Global_19932 = 1;
						func_10();
						func_7();
						if (Global_19954.f_1 > 3)
						{
							Global_19954.f_1 = 7;
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
			Global_19956 = 6;
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
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 3) || Global_19954.f_1 == 0) || Global_19898 == 1)
	{
		Global_19941 = 1;
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
	unk_0xB0550BC91B0159D6(&Global_7825, 22);
	unk_0xAFBDF6A5E54114C1();
}

void func_3(int iParam0, int iParam1)
{
	Global_4535580[iParam0] = iParam1;
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
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_19943, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, uParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, uParam1)))
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

void func_7()
{
	if (Global_19942)
	{
		func_8(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xB0550BC91B0159D6(&Global_7824, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_9(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			Local_20 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			fLocal_21 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
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
				unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(23);
				unk_0x4F47E317C74C543B(0);
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 30))
				{
					unk_0x4F47E317C74C543B(-99);
					unk_0x4F47E317C74C543B(0);
				}
				else
				{
					unk_0x4F47E317C74C543B(floor(fLocal_25));
					unk_0x4F47E317C74C543B(floor(fLocal_26));
				}
				unk_0x4F47E317C74C543B(100);
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 22))
				{
					unk_0x4F47E317C74C543B(1);
				}
				else
				{
					unk_0x4F47E317C74C543B(0);
				}
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 29))
				{
					unk_0xD7D6BA6E36AEC182(0);
				}
				else
				{
					unk_0xD7D6BA6E36AEC182(1);
				}
				if (unk_0xE2D0C323A1AE5D85(Global_7826, 1))
				{
					unk_0xCA5D23E5F0F0306F(fLocal_28);
				}
				unk_0x6F06CF0E9AB02847();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19935, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Local_20 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		fLocal_21 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
		if (Global_4535602 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4535602)
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
				unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(23);
				unk_0x4F47E317C74C543B(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xE2D0C323A1AE5D85(Global_4535327, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xE2D0C323A1AE5D85(Global_4535327, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xE2D0C323A1AE5D85(Global_4535327, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xE2D0C323A1AE5D85(Global_4535327, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x4F47E317C74C543B(-99);
					unk_0x4F47E317C74C543B(0);
				}
				else
				{
					unk_0x4F47E317C74C543B(floor(fLocal_25));
					unk_0x4F47E317C74C543B(floor(fLocal_26));
				}
				unk_0x4F47E317C74C543B(100);
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 22))
				{
					unk_0xD7D6BA6E36AEC182(1);
				}
				else
				{
					unk_0xD7D6BA6E36AEC182(1);
				}
				if (unk_0xE2D0C323A1AE5D85(Global_7825, 29))
				{
					unk_0xD7D6BA6E36AEC182(0);
				}
				else
				{
					unk_0xD7D6BA6E36AEC182(1);
				}
				unk_0xCA5D23E5F0F0306F(fLocal_28);
				unk_0x4F47E317C74C543B(Global_4535580[iVar0]);
				unk_0x6F06CF0E9AB02847();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19935, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4535516[iParam0 /*3*/] - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_4535516[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = unk_0xC529D13129C03CF4(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4535516[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4535516[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4535516[iParam0 /*3*/] - Local_20.x) * (Global_4535516[iParam0 /*3*/] - Local_20.x)) + ((Global_4535516[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4535516[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_22391 - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_22391.f_1 - Local_20.f_1));
	fLocal_25 = unk_0xC529D13129C03CF4(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_22391, Local_20));
	fLocal_28 = (Global_22391.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_22391 - Local_20.x) * (Global_22391 - Local_20.x)) + ((Global_22391.f_1 - Local_20.f_1) * (Global_22391.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()
{
	if (Global_77852 == 1)
	{
		return 1;
	}
	return 0;
}

