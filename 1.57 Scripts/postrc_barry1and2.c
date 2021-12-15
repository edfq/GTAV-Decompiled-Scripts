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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0x366E7F593105797F(0, 26, 1);
	if (func_25(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) != 0)
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
		}
	}
	if (unk_0x4210287E2833D44B(83))
	{
		func_22(0);
	}
	unk_0x068BDE31F7D112BB(sLocal_44);
	unk_0xBB3CDAB62C8773C8("BARY1", 7);
	while (!unk_0x0EC2B29D4172D225(sLocal_44) || !unk_0x080D38ACEC5DC1A2(7))
	{
		unk_0x366E7F593105797F(0, 26, 1);
		wait(0);
	}
	unk_0x366E7F593105797F(0, 26, 1);
	func_25(unk_0x7D2B9E6A64637269());
	iLocal_46 = unk_0xDFB7BFA6482FEE1E() + 13000;
	iLocal_47 = unk_0xB36B8558948EA7A8(0, 5);
	func_19();
	while (!func_13(&uLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		unk_0x366E7F593105797F(0, 26, 1);
		wait(0);
	}
	unk_0x366E7F593105797F(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xDFB7BFA6482FEE1E() + 1000;
	unk_0x366E7F593105797F(0, 26, 1);
	while (true)
	{
		func_25(unk_0x7D2B9E6A64637269());
		if (unk_0xDFB7BFA6482FEE1E() < iLocal_48)
		{
			unk_0x366E7F593105797F(0, 26, 1);
		}
		func_11();
		if (!func_25(uLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x7D2B9E6A64637269(), Local_50, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_22(0);
		}
		wait(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (unk_0xD79E16EA1337F8F9(*uParam0))
		{
			unk_0x3211C35423263392(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x39E572BDDBA714A2(uParam0);
		}
		else
		{
			unk_0xF0BD1DDC919E4BA7(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(uParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x7D2B9E6A64637269()) && func_10(uLocal_43)) && !func_9()) && unk_0xDFB7BFA6482FEE1E() > iLocal_46) && func_8(unk_0x7D2B9E6A64637269(), uLocal_43, 1) < 20f) && !unk_0x16371AB7527A7757())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xDFB7BFA6482FEE1E() + unk_0xB36B8558948EA7A8(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x191DDA30577F440A(&Global_19991, 0);
	Global_21128 = iParam3;
	StringCopy(&Global_21115, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(uParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(uParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(uParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(uParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(uParam1, 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD6E677FAD7521410(uParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var1, iParam2);
}

int func_9()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
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

void func_11()
{
	if (unk_0x16B4C536089C3CAD(-1, Local_50, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xA2C015B68CE01357(uLocal_43, 0);
			unk_0xD193745144D2934C(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			unk_0xA2C015B68CE01357(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xA2C015B68CE01357(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xEE1D92A39CF8E1E6(uLocal_43))
		{
			unk_0x4985CD0720AFD468(uLocal_43, 1, 0);
		}
		unk_0xC8749D706BBF16E1(uLocal_43, 1, 0, 0, 0);
		unk_0xBE91B077ADADE97F(uLocal_43, 1);
		unk_0xEC7D41CF790FC6FB(uLocal_43, 0);
		unk_0x1D7A4E9E23D306D6(uLocal_43, 0);
		unk_0x7A4EA1D3F050E568(uLocal_43, "POSTBARRY");
		unk_0x2271ED1E65FB75EE(uLocal_43, 1862763509);
		unk_0x3CBE9F07524C242D(uLocal_43, 0, 0);
		unk_0xA2C015B68CE01357(uLocal_43, 1);
		unk_0x78CDDD1E6367978D(uLocal_43, Local_50, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(uLocal_43, func_18(1.12f));
		unk_0xA2C015B68CE01357(uLocal_43, 1);
		unk_0x4261814A9A26E86F(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x8ADA462BC5F42FD8(uLocal_43, unk_0x7D2B9E6A64637269(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x16E516CA9C88FF48(iVar0);
		if (unk_0xA9C0BBFB9CBB66F1(iVar0))
		{
			if (unk_0x419E13582192CFEA(*uParam0))
			{
				unk_0xC606AE2A3209945E(uParam0);
			}
			*uParam0 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, Param2, uParam3, 0, 0);
			unk_0xB5BF3BBD2E785884(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x094C1D2DFE050D6E(*uParam0, 3) == 0)
				{
					unk_0x4170FE884DF7426D(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0x824F744352C8BC82(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_95204[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0xCC09B877A009E41F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xB219A5BFF547852F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(uLocal_41))
		{
			if (!unk_0xEE1D92A39CF8E1E6(uLocal_41))
			{
				unk_0x4985CD0720AFD468(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x78CDDD1E6367978D(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(uLocal_41, func_18(-2.01f));
			unk_0xA2C015B68CE01357(uLocal_41, 1);
		}
	}
	if (unk_0xCC09B877A009E41F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xB219A5BFF547852F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(uLocal_40))
		{
			if (!unk_0xEE1D92A39CF8E1E6(uLocal_40))
			{
				unk_0x4985CD0720AFD468(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x78CDDD1E6367978D(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(uLocal_40, func_18(-1.68f));
			unk_0xA2C015B68CE01357(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0x78CDDD1E6367978D(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(uLocal_40, func_18(-1.68f));
		unk_0xA2C015B68CE01357(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xCC09B877A009E41F(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xB219A5BFF547852F(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(uLocal_42))
		{
			if (!unk_0xEE1D92A39CF8E1E6(uLocal_42))
			{
				unk_0x4985CD0720AFD468(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x78CDDD1E6367978D(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x78CDDD1E6367978D(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(uLocal_42, 23.45f);
	}
}

void func_20(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_21(uParam0);
	*uParam0 = unk_0x795434E153F90E41(iParam1, Param2, 1, 1, 0);
	unk_0xCD37A28258D70638(*uParam0, fParam3);
}

void func_21(var uParam0)
{
	if (unk_0x419E13582192CFEA(*uParam0))
	{
		if (unk_0xD79E16EA1337F8F9(*uParam0))
		{
			unk_0x3211C35423263392(*uParam0, 1, 1);
		}
		unk_0x04F4D55F2C0C756D(uParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&uLocal_43);
	}
	else
	{
		func_23(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0xA2C015B68CE01357(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xA2C015B68CE01357(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_21(&uLocal_40);
		func_21(&uLocal_41);
		func_21(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0xF9135F131C423364(sLocal_44);
	unk_0xE498E37B41AEA1DF(7, 0);
	unk_0x4BFE89D21F9885DC();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_24(var uParam0)
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

bool func_25(var uParam0)
{
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	return !unk_0xE50EB54E0F21BED0(uParam0, 0);
}

