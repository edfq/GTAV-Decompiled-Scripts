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
	int iLocal_19 = 0;
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
	if (unk_0x4210287E2833D44B(2) || unk_0x8875237855302F87())
	{
		unk_0x4BFE89D21F9885DC();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar1;
	
	while (!func_9(&iLocal_20))
	{
		wait(0);
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_20))
	{
		if (!Global_95865)
		{
			unk_0x4985CD0720AFD468(iLocal_20, 1, 1);
			if (unk_0x4E8DA737B686529A(iLocal_20, 1435919172) != 7)
			{
				unk_0xCA089CD1A17D76DF(iLocal_20);
			}
			Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
			unk_0xBE91B077ADADE97F(iLocal_20, 1);
			unk_0x5C679902079A7E80(&uVar1);
			if (!unk_0xC49311A2A500FF09(iLocal_20, 0))
			{
				if (!unk_0x3D28F4F0775C6C2A(iLocal_20, 0) && !unk_0xC49311A2A500FF09(iLocal_20, 0))
				{
					unk_0xFBF1F1BE9D437D22(0, Var0, 6000);
				}
			}
			unk_0xDDFB0D5F3D3B74AA(0, Var0, 6000, 0, 2);
			unk_0x1BBD0A5729AB1226(uVar1);
			unk_0x8A1AC8EBC73850C8(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x8B6A925F148E0E94())
	{
		wait(0);
	}
	if (unk_0x419E13582192CFEA(iLocal_20))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_20))
		{
			unk_0x504B26425DFF773C(iLocal_20, 1);
		}
		unk_0x0F3BD19FF11738D3(&iLocal_20);
	}
	Global_95865 = 0;
	unk_0x4BFE89D21F9885DC();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDFB7BFA6482FEE1E() + 1000;
	while (unk_0xDFB7BFA6482FEE1E() < iVar0 && !unk_0x8B6A925F148E0E94())
	{
		wait(0);
	}
	if (!unk_0xECEC7528A52B4EE8(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x7D2B9E6A64637269()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x7D2B9E6A64637269()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x7D2B9E6A64637269()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(uParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96739[iLocal_18]) && !unk_0xECEC7528A52B4EE8(Global_96739[iLocal_18]))
		{
			if (Global_96739[iLocal_18] != unk_0x7D2B9E6A64637269())
			{
				if (!unk_0xEE1D92A39CF8E1E6(Global_96739[iLocal_18]))
				{
					if (unk_0xC49311A2A500FF09(Global_96739[iLocal_18], 0) || !unk_0x5976053523EA16C8(Global_96739[iLocal_18]))
					{
						if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(Global_96739[iLocal_18], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_96739[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0x895779B17E5AA5FE(Global_96739[iLocal_18], unk_0x7D2B9E6A64637269(), 17))
									{
										if (unk_0xC49311A2A500FF09(Global_96739[iLocal_18], 0))
										{
											iVar0 = unk_0x75B58B38E45C6F9A(Global_96739[iLocal_18], 0);
										}
										if ((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) || !unk_0x419E13582192CFEA(iVar0))
										{
											*uParam0 = Global_96739[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_6(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_5(unk_0x7D2B9E6A64637269());
			if (func_8(iVar0) && (!func_12(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_8(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_12(int iParam0)
{
	return Global_42009 == iParam0;
}

