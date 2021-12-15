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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	struct<4> Local_91 = { 0, 0, 0, 0 } ;
	struct<16> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_96 = -1;
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	unk_0x3F57BEDBC381CBC7();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_43522 = 0;
	func_39();
	StringCopy(&Global_43523, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_77852;
	while (true)
	{
		if (Global_77852)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_77852 != iVar8)
		{
			func_25();
			func_39();
			iVar2 = -1;
			iVar8 = Global_77852;
			while (unk_0x04458B4E5D9E466A())
			{
				wait(2000);
			}
		}
		if (Global_43528)
		{
			if (Global_43530 > -1)
			{
				if (!Global_43328[Global_43530 /*32*/].f_6)
				{
					if (!func_23(Global_43530, 1))
					{
						Global_43530 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_43528)
			{
				if (Global_43530 != iVar2)
				{
					if (func_18(Global_43530))
					{
						func_25();
						if (!Global_43328[iVar2 /*32*/].f_5 && Global_43328[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_43328[iVar2 /*32*/].f_7)
								{
									if (!Global_43328[iVar2 /*32*/].f_6)
									{
										if (!Global_43328[iVar2 /*32*/].f_12)
										{
											func_17(Global_43328[iVar2 /*32*/].f_8, Global_43328[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_43328[iVar2 /*32*/].f_8, Global_43328[iVar2 /*32*/].f_13, Global_43328[iVar2 /*32*/].f_3, Global_43328[iVar2 /*32*/].f_30);
										}
										Global_43530 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x98E8B3FFCEDA25A5(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0xF09A4F413B0D30EB(2, 51))
						{
							Global_43328[iVar2 /*32*/].f_4 = 1;
							Global_43328[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_43328[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_43521 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0xE63474311C6E3825(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 1))
						{
							if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 0))
							{
								if (unk_0xF98FF61CD2D3500D(0, 101))
								{
									bVar5 = true;
									unk_0x7653D561C9574763(0, 101, 1);
								}
								if (unk_0xF98FF61CD2D3500D(0, 74))
								{
									bVar4 = true;
									unk_0x7653D561C9574763(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x5089DD830FA61D71(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x5089DD830FA61D71(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_43328[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_43328[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_43328[iVar2 /*32*/].f_7 || Global_43328[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_43521)
				{
					func_25();
				}
				if (unk_0xF09A4F413B0D30EB(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_43328[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_43522)
				{
					Global_43522 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_43328[iVar2 /*32*/].f_4 || Global_43328[iVar2 /*32*/].f_7))
					{
						Global_43522 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_43328[iVar2 /*32*/].f_7 || Global_43328[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x7653D561C9574763(0, 46, 1);
			unk_0x7653D561C9574763(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_43527 = 0;
		Global_43528 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_88)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_93 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_89)
	{
		if (bLocal_90)
		{
			unk_0x4976AB7D95C4657E(0);
		}
		unk_0xA83426F7CEDED182(&Local_91);
		if (bLocal_90)
		{
			unk_0x76DB21247AE4E4E2(&Local_92);
		}
		else
		{
			unk_0x26C23BE14F66F202(&Global_43523);
			unk_0x26C23BE14F66F202(&Local_92);
		}
		unk_0x89B545A74F93B1DD(0, 0, iVar0, 50);
	}
	else
	{
		unk_0xA83426F7CEDED182(&Local_91);
		unk_0x26C23BE14F66F202(&Global_43523);
		unk_0x89B545A74F93B1DD(0, 0, iVar0, 50);
	}
	switch (iLocal_93)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_8() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_8())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0xAD8BF87DDDACF427(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/] && Global_43328[iVar0 /*32*/].f_4)
		{
			if (Global_43328[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x87C0DA419F19FF57(Global_43328[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_43328[iVar0 /*32*/] = 0;
					Global_43328[iVar0 /*32*/].f_31 = 0;
					Global_43328[iVar0 /*32*/] = 0;
					Global_43328[iVar0 /*32*/].f_4 = 0;
					Global_43328[iVar0 /*32*/].f_5 = 0;
					Global_43328[iVar0 /*32*/].f_2 = 0;
					Global_43328[iVar0 /*32*/].f_7 = 0;
					Global_43328[iVar0 /*32*/].f_6 = 0;
					Global_43328[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_43530 != -1 || bLocal_88)
	{
		bLocal_88 = false;
		Global_43530 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_43530)
			{
				func_25();
			}
			Global_43328[iVar0 /*32*/].f_31 = 0;
			Global_43328[iVar0 /*32*/] = 0;
			Global_43328[iVar0 /*32*/].f_4 = 0;
			Global_43328[iVar0 /*32*/].f_5 = 0;
			Global_43328[iVar0 /*32*/].f_2 = 0;
			Global_43328[iVar0 /*32*/].f_7 = 0;
			Global_43328[iVar0 /*32*/].f_6 = 0;
			Global_43328[iVar0 /*32*/].f_1 = -1;
			Global_43328[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_43328[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/] == 1)
		{
			if (Global_43328[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/])
		{
			if (Global_43328[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_43328[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_91 = { Param0 };
	Local_92 = { Param1 };
	bLocal_88 = true;
	bLocal_89 = true;
	iLocal_93 = uParam2;
	bLocal_90 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_91 = { Param0 };
	bLocal_88 = true;
	bLocal_89 = false;
	iLocal_93 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_96903 && Global_96902)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_88)
		{
			return 1;
		}
	}
	if (unk_0xF847447D4467709D() && !unk_0x697282ECBFD7B449())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_75021)
	{
		return 1;
	}
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 1;
	}
	if (Global_43527)
	{
		return 1;
	}
	if (unk_0x1EC008858F146889(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x04458B4E5D9E466A())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

int func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_43328[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_43328[iVar0 /*32*/].f_12)
	{
		unk_0xB65782D82090BB33(&(Global_43328[iVar0 /*32*/].f_8));
		unk_0x26C23BE14F66F202(&Global_43523);
		iVar1 = unk_0x73CB3406A86A3A02(0);
	}
	else
	{
		unk_0xB65782D82090BB33(&(Global_43328[iVar0 /*32*/].f_8));
		unk_0x26C23BE14F66F202(&Global_43523);
		if (Global_43328[iVar0 /*32*/].f_30)
		{
			unk_0x76DB21247AE4E4E2(&(Global_43328[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x26C23BE14F66F202(&(Global_43328[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x73CB3406A86A3A02(0);
	}
	return iVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_43530 = -1;
}

void func_26()
{
	if (!unk_0x04458B4E5D9E466A() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_2714627.f_784.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_75134 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_75134)
	{
		case 3:
			Global_75132 = 0;
			break;
		
		case 4:
			Global_75132 = 3;
			break;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_77852 && func_29())
	{
		return 0;
	}
	if (!Global_77852 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0xF79F112CE5999680("appSecuroServ"))
		{
			unk_0xAF76A37C80EFD1D8("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xF79F112CE5999680("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0xD195D79715508EFA("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0xF79F112CE5999680("appBikerBusiness"))
		{
			unk_0xAF76A37C80EFD1D8("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xF79F112CE5999680("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0xD195D79715508EFA("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0xF79F112CE5999680("appImportExport"))
		{
			unk_0xAF76A37C80EFD1D8("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xF79F112CE5999680("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0xD195D79715508EFA("appImportExport");
		return 1;
	}
	if (!unk_0xF79F112CE5999680("appInternet"))
	{
		unk_0xAF76A37C80EFD1D8("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0xF79F112CE5999680("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0xD195D79715508EFA("appInternet");
	return 1;
}

var func_28()
{
	return Global_75022;
}

var func_29()
{
	return Global_1932662;
}

void func_30()
{
	Global_2714627.f_784.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2714627.f_784.f_28 && unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_2714627.f_784.f_31);
	}
	return Global_2714627.f_784.f_28;
}

bool func_32()
{
	return Global_75021;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_59864[iVar1] < 0)
		{
			Global_59864[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_59864[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1835455 != -1)
	{
		Var0[0 /*13*/] = Global_1835456[0];
		Var0[0 /*13*/].f_1 = Global_1835456[1];
		Var0[0 /*13*/].f_2 = Global_1835456[2];
		Var0[0 /*13*/].f_3 = Global_1835456[3];
		Var0[0 /*13*/].f_4 = Global_1835456[4];
		Var0[0 /*13*/].f_5 = Global_1835456[5];
		Var0[0 /*13*/].f_6 = Global_1835456[6];
		Var0[0 /*13*/].f_7 = Global_1835456[7];
		Var0[0 /*13*/].f_8 = Global_1835456[8];
		Var0[0 /*13*/].f_9 = Global_1835456[9];
		Var0[0 /*13*/].f_10 = Global_1835456[10];
		Var0[0 /*13*/].f_11 = Global_1835456[11];
		Var0[0 /*13*/].f_12 = Global_1835456[12];
		if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
		{
			if (!iLocal_94)
			{
				if (unk_0x5F0A7B7235C6ABED(&(Var0[0 /*13*/])))
				{
					iLocal_94 = 1;
				}
			}
			if (iLocal_94)
			{
				if (unk_0x1C80838DC24F06D0())
				{
				}
				else
				{
					if (unk_0x38D0EB5A1B7E5EF3())
					{
						StringCopy(&(Global_2359296[func_38() /*5559*/].f_5382.f_18[Global_1835455 /*6*/]), unk_0x84A4C35DF8AB2EDF(&(Var0[0 /*13*/])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_95)
				{
					case 0:
						iLocal_96 = unk_0x750877EFC42C7771(&Var0, 1);
						if (iLocal_96 >= 0)
						{
							iLocal_95++;
						}
						break;
					
					case 1:
						iVar2 = unk_0xED9701B5BB864FE4(iLocal_96, &Var1, 1);
						switch (iVar2)
						{
							case -1:
								func_37();
								break;
							
							case 0:
								MemCopy(&(Global_2359296[func_38() /*5559*/].f_5382.f_18[Global_1835455 /*6*/]), {Var1[0 /*16*/]}, 6);
								func_37();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2359296[func_38() /*5559*/].f_5382.f_18[Global_1835455 /*6*/]), unk_0xFD09A4ADC15CAAE9(&(Var0[0 /*13*/])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

void func_37()
{
	Global_1835455 = -1;
	iLocal_94 = 0;
	iLocal_96 = -1;
	iLocal_95 = 0;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	Global_43521 = 0;
	Global_43527 = 0;
	Global_43528 = 0;
	Global_43529 = 1;
	Global_43530 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_43328[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

