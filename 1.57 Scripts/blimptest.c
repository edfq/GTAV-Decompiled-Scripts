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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x8B6A925F148E0E94())
	{
		unk_0x6E1E3A5B1F9AB95B(500);
	}
	if (unk_0x4210287E2833D44B(18))
	{
		func_18();
	}
	unk_0x20D884FB6567BAD5(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x968AC0BD45D79791(255, 255, 255, 255);
		unk_0x9E8B548C035F223D(0.75f, 0.9f);
		unk_0x70D76B2EE444F0BD(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x968AC0BD45D79791(255, 255, 255, 255);
		unk_0x9E8B548C035F223D(0.4f, 0.45f);
		unk_0x70D76B2EE444F0BD(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x419E13582192CFEA(uLocal_40))
	{
		if ((unk_0xE50EB54E0F21BED0(uLocal_40, 0) || unk_0x5E7C0A485B91DB87(uLocal_40) <= 0) || unk_0x547F3E9F33EBE1F4(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xAB0BB1BDD76B67DC(uLocal_40))
			{
				unk_0x50B76EE36FBE865F(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xD6E677FAD7521410(uLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (unk_0xAB0BB1BDD76B67DC(uLocal_40))
		{
			unk_0xEA5C7C61843816D5(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		unk_0xE50EB54E0F21BED0(*uParam0, 0);
		if (unk_0xEE1D92A39CF8E1E6(*uParam0) && unk_0x9984C023D4E57C2E(*uParam0, 1))
		{
			unk_0x795957CD3A0042C8(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(*uParam0))
		{
			unk_0x46EDFC827DC67D89(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB154967CB3B9C1CF(*uParam0);
			}
			unk_0x504B26425DFF773C(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBE91B077ADADE97F(*uParam0, 0);
			}
		}
		unk_0x0F3BD19FF11738D3(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
		{
			unk_0x4985CD0720AFD468(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xEE1D92A39CF8E1E6(*uParam0) && unk_0x9984C023D4E57C2E(*uParam0, 1))
			{
				if (func_5(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam0, 0))
					{
						unk_0x795957CD3A0042C8(uParam0);
						return;
					}
				}
				unk_0x5420D0D520CF44D0(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *uParam0, 0))
				{
					unk_0x795957CD3A0042C8(uParam0);
					return;
				}
			}
			unk_0x5420D0D520CF44D0(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (unk_0xBFCE58B2B3249999(uParam0, 0))
		{
			if (!unk_0x2AB8EC6521549BAD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(*uParam0, 0))
		{
			unk_0x46EDFC827DC67D89(*uParam0, 0, 1);
		}
		if (!unk_0xEE1D92A39CF8E1E6(*uParam0))
		{
			unk_0x4985CD0720AFD468(*uParam0, 1, 0);
		}
		unk_0xC606AE2A3209945E(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x8B84CFCA87CEA22E(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x8B84CFCA87CEA22E(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		unk_0x13CC211F9F7ACE7F(*uParam0, 0);
		unk_0x1AD5BCFEC31BB8D9(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x16E516CA9C88FF48(iLocal_46);
	while (!unk_0xA9C0BBFB9CBB66F1(iLocal_46))
	{
		wait(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x170478CC84C8AE2F(iLocal_46, unk_0x9E695CE384C77EF0(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x4B43AFBD2CEE7724(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x7D2B9E6A64637269()))
		{
			unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), uLocal_45, -1);
			unk_0x3A13FD2813C8251F(0f, 1065353216);
			unk_0xDF23DCD7A3E1B7A5(0f);
			unk_0x6AF7EE4DD9F8B944(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x824F744352C8BC82(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xD6E677FAD7521410(uParam0, 1), unk_0xD6E677FAD7521410(uParam1, 1), 1);
	unk_0xCD37A28258D70638(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF0AE30F012D1FD8C(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xB20BB447C131B310(uParam0);
		unk_0xB592493CDC7124C3(iVar0, iParam1);
		unk_0xC5BBAB0F8336ECB7(iVar0, iParam2);
		unk_0xDD205B87CDFD0C1B(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x16E516CA9C88FF48(iLocal_44);
	while (!unk_0xA9C0BBFB9CBB66F1(iLocal_44))
	{
		wait(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x42F3C85A00B4FC7B(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xBE91B077ADADE97F(uLocal_43, 1);
			unk_0x7B28A83A0D3DD0F9(uLocal_43, 118, 0);
			unk_0x7B28A83A0D3DD0F9(uLocal_43, 29, 0);
			unk_0x7B28A83A0D3DD0F9(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x069557E67CC67C29(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x824F744352C8BC82(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xAB0BB1BDD76B67DC(uLocal_40))
	{
		unk_0x50B76EE36FBE865F(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x16E516CA9C88FF48(iLocal_41);
	unk_0x498685EB9132AF88(1, "Blimp_City");
	while (!unk_0xA9C0BBFB9CBB66F1(iLocal_41) || !unk_0x9CF7186A344D26A9(1, "Blimp_City"))
	{
		wait(0);
	}
	Var0 = { unk_0x9F3F28DE61C3AA82(unk_0xC4989A5366317AA4(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x170478CC84C8AE2F(iLocal_41, unk_0x40A7E0E65D62E5D2(unk_0xC4989A5366317AA4(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x824F744352C8BC82(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xAB0BB1BDD76B67DC(uLocal_40))
	{
		unk_0x50B76EE36FBE865F(uLocal_40);
	}
	unk_0x7B6B41ECBE4B733F(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x824F744352C8BC82(iLocal_44);
	unk_0x824F744352C8BC82(iLocal_41);
	unk_0x824F744352C8BC82(iLocal_46);
	unk_0x20D884FB6567BAD5(6);
	unk_0x4BFE89D21F9885DC();
}

