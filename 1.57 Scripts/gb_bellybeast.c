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
	char* sLocal_20 = NULL;
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
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87[4] = { 0, 0, 0, 0 };
	var uLocal_88[4] = { 0, 0, 0, 0 };
	var uLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	struct<59> Local_104 = { 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_105[32];
	var uLocal_106[4] = { 0, 0, 0, 0 };
	struct<2> Local_107[4];
	struct<21> Local_108 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_941(ScriptParam_108))
		{
			func_829(0);
		}
	}
	while (true)
	{
		func_828();
		if (func_820())
		{
			func_829(1);
		}
		func_813();
		switch (func_812(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if (func_811() == 1)
				{
					if (func_810())
					{
						func_809(unk_0xDD0E57E73E5C4BF6(), 1);
					}
				}
				else if (func_811() == 3)
				{
					func_809(unk_0xDD0E57E73E5C4BF6(), 3);
				}
				break;
			
			case 1:
				if (func_811() == 1)
				{
					if (!func_808())
					{
						func_117();
					}
					else
					{
						if (func_116())
						{
							func_109();
						}
						func_108();
					}
					if (func_49(1))
					{
						func_809(unk_0xDD0E57E73E5C4BF6(), 3);
					}
				}
				else if (func_811() == 3)
				{
					func_809(unk_0xDD0E57E73E5C4BF6(), 3);
				}
				break;
			
			case 3:
				func_829(0);
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			if (func_48())
			{
				func_47(3);
			}
			switch (func_811())
			{
				case 0:
					if (func_18())
					{
						func_47(1);
					}
					break;
				
				case 1:
					if (func_17() == 4)
					{
						func_47(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_829(0);
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_104.f_55)
	{
		case 0:
			if (func_16())
			{
				func_15(1);
			}
			func_9();
			break;
		
		case 1:
			func_9();
			func_5();
			func_2();
			break;
		
		case 2:
			func_9();
			func_5();
			func_2();
			break;
		
		case 3:
			if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 23))
			{
				func_15(4);
			}
			func_9();
			break;
		
		case 4:
			break;
	}
}

void func_2()
{
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 12) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, 17))
	{
		if (func_3(&(Local_104.f_53), 600000, 0))
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 24);
		}
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

void func_5()
{
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 19))
	{
		func_8(2);
		func_15(3);
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 22))
	{
		func_8(0);
		func_15(3);
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 21))
	{
		func_8(1);
		func_15(3);
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 16))
	{
		unk_0x191DDA30577F440A(&(Local_104.f_1), 22);
		func_8(3);
		func_15(3);
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 13))
	{
		func_8(0);
		func_15(3);
	}
	if (!func_6(func_7(), 0, 1))
	{
		unk_0x191DDA30577F440A(&(Local_104.f_1), 18);
		func_8(4);
		func_15(3);
	}
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
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

int func_7()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

void func_8(int iParam0)
{
	Local_104.f_56 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			if (func_17() < 3)
			{
				iVar2 = 0;
				while (iVar2 < func_14())
				{
					if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, iVar2) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2))
					{
						unk_0x191DDA30577F440A(&(Local_104.f_1), iVar2);
						Local_104.f_34++;
					}
					if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, iVar2 + 4) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2 + 4))
					{
						unk_0x191DDA30577F440A(&(Local_104.f_1), iVar2 + 4);
					}
					if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, iVar2 + 8) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2 + 8))
					{
						unk_0x191DDA30577F440A(&(Local_104.f_1), iVar2 + 8);
						Local_104.f_35++;
					}
					iVar2++;
				}
				if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, 14))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, 17))
					{
						func_11(unk_0xC502CD39B4994F3A(iVar1));
						unk_0x191DDA30577F440A(&(Local_104.f_1), 17);
					}
					iVar0++;
				}
			}
			else if (func_17() == 3)
			{
				if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, 21))
				{
					iVar0++;
				}
			}
			if (unk_0x234B68AC2E35ED5A(Local_105[iVar1 /*4*/].f_1, 12))
			{
				unk_0x191DDA30577F440A(&(Local_104.f_1), 12);
			}
		}
		iVar1++;
	}
	if (func_17() < 3)
	{
		if (iVar0 == (func_14() - (Local_104.f_34 + Local_104.f_35)))
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 14);
		}
		else if (iVar0 == 1 && unk_0x234B68AC2E35ED5A(Local_104.f_1, 15))
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 14);
		}
		else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 14))
		{
			unk_0xC664C0067EEAB8D1(&(Local_104.f_1), 14);
		}
		if (Local_104.f_34 + Local_104.f_35) == func_14()
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 22);
		}
		if ((func_14() - (Local_104.f_34 + Local_104.f_35)) == 1)
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 15);
		}
		if (Local_104.f_34 == func_14())
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 13);
		}
		if (Local_104.f_35 == func_14())
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 21);
		}
		if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 12))
		{
			if (func_3(&(Local_104.f_49), func_10(), 0))
			{
				unk_0x191DDA30577F440A(&(Local_104.f_1), 16);
			}
		}
	}
	else if (func_17() == 3)
	{
		if (iVar0 == unk_0xAB0F784335D14AC3())
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 20);
		}
		else if (func_3(&(Local_104.f_51), 15000, 0))
		{
			unk_0x191DDA30577F440A(&(Local_104.f_1), 23);
		}
	}
}

int func_10()
{
	return Global_262145.f_12641;
}

void func_11(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_11 = func_7();
	Var0.f_2 = -292797845;
	func_12(Var0, func_13(1));
}

void func_12(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

int func_13(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_14()
{
	return Local_104.f_5;
}

void func_15(int iParam0)
{
	Local_104.f_55 = iParam0;
}

int func_16()
{
	return 1;
}

int func_17()
{
	return Local_104.f_55;
}

int func_18()
{
	if (func_19())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	unk_0x9FCD56F864077E14(&(Local_104.f_57), &(Local_104.f_58));
	if (!iLocal_85)
	{
		iLocal_84 = unk_0xB36B8558948EA7A8(0, 3);
		if (Global_2544210.f_5191.f_6 == -1)
		{
			func_47(3);
			return 0;
		}
		func_46(iLocal_84);
		func_45(Global_2544210.f_5191.f_6);
		func_31();
		iLocal_85 = 1;
	}
	if (func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_29(func_30(iVar0)))
		{
			if (!unk_0xB7D6400C89373777(func_28(iVar0)))
			{
				if (func_23(&(Local_104.f_6[iVar0]), func_30(iVar0), func_27(iVar0), func_26(iVar0), 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					func_22(unk_0x854C404AEB476240(func_28(iVar0)));
					func_21(unk_0x854C404AEB476240(func_28(iVar0)));
					unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0x8B58E7AC53EED9F1(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0xED4E91A1FC7ABBF6(unk_0x854C404AEB476240(func_28(iVar0)), 0);
					unk_0xD4DF29F3D7B97053(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0xAC2B08493719B297(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0x1F7ED1C13023483B(unk_0x854C404AEB476240(func_28(iVar0)), 0);
					unk_0x51D29810E2319A09(unk_0x854C404AEB476240(func_28(iVar0)), 0, 0);
					unk_0x84418AD4000B0403(unk_0x854C404AEB476240(func_28(iVar0)), 0);
					unk_0x78683FED1CF3DDE3(unk_0x854C404AEB476240(func_28(iVar0)), 0, 0);
					unk_0x1FAD7C59AB24A0FE(unk_0x854C404AEB476240(func_28(iVar0)));
					unk_0x9467B0584C318BAD(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0x410F7E904016F85F(unk_0x854C404AEB476240(func_28(iVar0)), 0, 0);
					unk_0x577BE43A512C41FE(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0x8F160110753EB17B(unk_0x854C404AEB476240(func_28(iVar0)), 1);
					unk_0xFC4706297CB9D7D2(unk_0x854C404AEB476240(func_28(iVar0)), 1, 1);
					if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x6C9577C090944B92(unk_0x854C404AEB476240(func_28(iVar0)), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
					{
						if (unk_0x5B38E054B758C032(unk_0x854C404AEB476240(func_28(iVar0)), "MPBitset"))
						{
							iVar2 = unk_0x05351AF95891EE5C(unk_0x854C404AEB476240(func_28(iVar0)), "MPBitset");
						}
						unk_0x191DDA30577F440A(&iVar2, 10);
						unk_0x191DDA30577F440A(&iVar2, 11);
						unk_0x6C9577C090944B92(unk_0x854C404AEB476240(func_28(iVar0)), "MPBitset", iVar2);
					}
					unk_0x824F744352C8BC82(func_30(iVar0));
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == func_14())
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x8F37B08BFE649B87(iParam0);
	iVar1 = unk_0x4FA5062424CA8F79(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = unk_0xB36B8558948EA7A8(0, iVar0);
		unk_0xF7E38415C6027209(iParam0, iVar3);
	}
	iVar2 = unk_0xB36B8558948EA7A8(0, iVar1);
	unk_0x473DA067A7AE5435(iParam0, iVar2);
}

void func_22(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x040C47F5DFA52DB2(iParam0, 0);
	}
}

int func_23(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F1DFD4C1BC6827A(iParam1))
	{
		return 0;
	}
	if (!unk_0xA8911798335DCDA2(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7D390F8F682127B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0x419E13582192CFEA(iVar1))
	{
		*uParam0 = unk_0x431E33F39AEFC4C4(iVar1);
		Global_2544210.f_6610 = iVar1;
		if (unk_0xB7D6400C89373777(*uParam0))
		{
			if (bParam13)
			{
				unk_0x6DA4D1FB7DCE9FD8(iVar1, 1);
			}
			unk_0x8B58E7AC53EED9F1(iVar1, iParam8);
			if (unk_0x895470BB92940DC6(iVar1))
			{
				if (bParam6)
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
				}
				else
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x84CE5E7CD3A7E197(*uParam0, unk_0x1146A9AE09CE2B14(), 1);
				}
			}
			unk_0x2AC1ECA957EB9158(iVar1, iParam7);
			unk_0xF4B0F1D16C5ECDB7(iVar1, 1);
			if (bParam10)
			{
				unk_0xD1A5295FE7ADF001(iVar1);
				unk_0x65FFB0A9D15E084E(iVar1, 5, 5, 1f);
			}
			func_24(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_24(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_25(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
	{
		if ((Global_2405077.f_2919[1 /*6*/].f_5 == iParam3 && Global_2405077.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2405077.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405077.f_2919[iVar0 /*6*/] = { Global_2405077.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405077.f_2919[1 /*6*/] = { Param0 };
		Global_2405077.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_25(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0BCA9ADE67DF9DD8((Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

var func_26(int iParam0)
{
	return Local_104.f_29[iParam0];
}

Vector3 func_27(int iParam0)
{
	return Local_104.f_16[iParam0 /*3*/];
}

var func_28(int iParam0)
{
	return Local_104.f_6[iParam0];
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_30(int iParam0)
{
	return Local_104.f_11[iParam0];
}

void func_31()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	func_44(2);
	switch (func_43())
	{
		case 0:
			Var0 = { -1039.623f, -855.3737f, 3.8758f };
			Var1 = { -1112.362f, -855.0657f, 12.531f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("pigalle"));
			func_37(0, 237.632f);
			func_38(1, joaat("rhapsody"));
			func_37(1, 218.751f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 1:
			Var0 = { 861.2779f, -1357.735f, 25.0962f };
			Var1 = { 833.7587f, -1414.288f, 25.1543f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("comet2"));
			func_37(0, 269.772f);
			func_38(1, joaat("banshee"));
			func_37(1, 332.369f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 2:
			Var0 = { 471.1763f, -1024.233f, 27.1807f };
			Var1 = { 407.7268f, -993.1101f, 28.2665f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("dominator"));
			func_37(0, 95.7556f);
			func_38(1, joaat("gauntlet"));
			func_37(1, 231.8613f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 3:
			Var0 = { 530.3759f, -29.6076f, 69.6295f };
			Var1 = { 628.4064f, 23.6166f, 86.6466f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("feltzer3"));
			func_37(0, 31.0119f);
			func_38(1, joaat("coquette3"));
			func_37(1, 71.2592f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 4:
			Var0 = { 1854.039f, 3675.524f, 32.7389f };
			Var1 = { 1867.226f, 3694.696f, 32.6526f };
			Var2 = { 1866.02f, 3682.976f, 32.7085f };
			Var3 = { 1861.596f, 3681.005f, 32.7102f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, joaat("blazer"));
			func_37(0, 30.2891f);
			func_38(1, joaat("blazer"));
			func_37(1, 209.6525f);
			func_38(2, joaat("blazer"));
			func_37(1, 19.0028f);
			func_38(3, joaat("blazer"));
			func_37(1, 209.3371f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
		
		case 5:
			Var0 = { -451.4124f, 5998.274f, 30.3405f };
			Var1 = { -461.0853f, 6047.062f, 30.3405f };
			Var2 = { -438.0848f, 5980.269f, 30.4901f };
			Var3 = { -434.6339f, 5983.896f, 30.4901f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, joaat("lectro"));
			func_37(0, 267.2382f);
			func_38(1, joaat("lectro"));
			func_37(1, 315.4168f);
			func_38(2, joaat("lectro"));
			func_37(1, 251.2614f);
			func_38(3, joaat("lectro"));
			func_37(1, 44.8117f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
	}
	if (func_14() == 2)
	{
		func_32(0, Var0);
		func_32(1, Var1);
	}
	else
	{
		func_32(0, Var0);
		func_32(1, Var1);
		func_32(2, Var2);
		func_32(3, Var3);
	}
}

void func_32(int iParam0, struct<3> Param1)
{
	Local_104.f_16[iParam0 /*3*/] = { Param1 };
}

void func_33(int iParam0, struct<3> Param1)
{
	Local_104.f_36[iParam0 /*3*/] = { Param1 };
}

Vector3 func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1685.737f, 6435.972f, 31.3601f;
				}
				return 255.4336f, -3057.406f, 4.7974f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1576.524f, 5159.825f, 18.7791f;
				}
				return -965.0558f, -2072.717f, 8.4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 756.7225f, 4179.839f, 39.6685f;
				}
				return -1209.318f, -1305.557f, 3.7185f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1682.386f, 6434.001f, 31.1545f;
				}
				return 248.4273f, -3064.162f, 4.7802f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1581.573f, 5159.565f, 18.5702f;
				}
				return -971.9658f, -2065.526f, 8.4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 762.5063f, 4179.577f, 39.6335f;
				}
				return -1207.275f, -1310.006f, 3.7944f;
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (func_36())
		{
			case 0:
				return 252.0648f, -3060.967f, 4.7768f;
				break;
			
			case 1:
				return -975.444f, -2061.842f, 8.4059f;
				break;
			
			case 2:
				return -1222.124f, -1309.285f, 3.5209f;
				break;
		}
	}
	else if (iParam0 == 3)
	{
		switch (func_36())
		{
			case 0:
				return 244.6635f, -3068.048f, 4.7864f;
				break;
			
			case 1:
				return -968.5905f, -2069.149f, 8.4059f;
				break;
			
			case 2:
				return -1229.652f, -1321.23f, 3.0921f;
				break;
			}
	}
	return 1685.737f, 6435.972f, 31.3601f;
}

bool func_35()
{
	return Local_104.f_4;
}

int func_36()
{
	return Local_104.f_3;
}

void func_37(int iParam0, float fParam1)
{
	Local_104.f_29[iParam0] = fParam1;
}

void func_38(int iParam0, int iParam1)
{
	Local_104.f_11[iParam0] = iParam1;
}

int func_39(int iParam0)
{
	if (func_41(iParam0) == func_40())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

int func_40()
{
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_40();
}

void func_42(int iParam0)
{
	Local_104.f_4 = iParam0;
}

int func_43()
{
	return Local_104.f_2;
}

void func_44(int iParam0)
{
	Local_104.f_5 = iParam0;
}

void func_45(var uParam0)
{
	Local_104.f_2 = uParam0;
}

void func_46(int iParam0)
{
	Local_104.f_3 = iParam0;
}

void func_47(int iParam0)
{
	Local_104 = iParam0;
}

int func_48()
{
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

int func_49(bool bParam0)
{
	if (!func_107(unk_0x1146A9AE09CE2B14(), 3) && func_59(1))
	{
		return 1;
	}
	if (Global_2544210.f_5191.f_42)
	{
		Global_2544210.f_5191.f_42 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_7() == func_40() || !func_6(func_7(), 0, 1))
		{
			return 1;
		}
	}
	if (func_107(unk_0x1146A9AE09CE2B14(), 1) && !func_57(unk_0x1146A9AE09CE2B14()))
	{
		if (func_50())
		{
			return 1;
		}
	}
	return 0;
}

int func_50()
{
	if (func_56(unk_0x1146A9AE09CE2B14()) && func_53())
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return func_52() == 1;
}

int func_52()
{
	return Global_1710155;
}

int func_53()
{
	switch (func_54(func_55(unk_0x1146A9AE09CE2B14())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_55(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0) != func_40())
	{
		return func_58(iParam0) == func_41(iParam0);
	}
	return 0;
}

int func_58(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_59(bool bParam0)
{
	bool bVar0;
	
	if (!func_106(1) && func_7() != unk_0x1146A9AE09CE2B14())
	{
		bVar0 = false;
		if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 != func_40())
		{
			if (func_6(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 4 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 8) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_103(func_104(unk_0x1146A9AE09CE2B14())) == 0 || func_103(func_104(unk_0x1146A9AE09CE2B14())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_102(31);
				if (func_101(func_104(unk_0x1146A9AE09CE2B14())))
				{
					func_102(81);
				}
				if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 != func_40() && unk_0x8CFC2F41A749E236(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57))
				{
					Global_1627034 = func_62(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_60(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57))
					{
						func_102(88);
					}
				}
				else
				{
					Global_1627034 = 1;
				}
				Global_1627018 = { Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_60(int iParam0)
{
	return func_61(iParam0, 1);
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 != func_40())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_40())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_96(unk_0x1146A9AE09CE2B14()) || (func_95() && func_94())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_93();
		if (unk_0x419E13582192CFEA(iVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_6(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_91(iParam1, iParam0, 0);
							}
							else
							{
								return func_75(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_75(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_91(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, -1, 0);
				}
			}
			else
			{
				return func_63(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_91(iParam1, iParam0, 0);
		}
		else
		{
			return func_75(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_75(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)
{
	return func_64(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_74() || (func_73() && func_71())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_70(iParam2, iVar0);
		}
		else
		{
			return func_70(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_69(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_68(1);
				}
				else
				{
					return func_68(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_65(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_65(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_4456448.f_85535, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_69(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_68(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_71()
{
	if (func_72())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_72()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_73()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_74()
{
	if (func_72() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_83())
			{
				iVar3 = func_80(iParam0);
				if (!iVar3 == -1)
				{
					return func_78(iVar3);
				}
			}
			if ((func_77(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_69(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_68(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_76(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_80(iParam0);
	if (!iVar4 == -1)
	{
		return func_78(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_79(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_79(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_40())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_40();
}

int func_82(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_40())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83()
{
	if (((((func_90() || func_89()) || func_88()) || func_87()) || func_86()) || func_84())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return func_85(Global_4456448.f_85535);
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_86()
{
	return Global_2453009.f_24;
}

var func_87()
{
	return Global_2453009.f_21;
}

bool func_88()
{
	return Global_2453009.f_19;
}

var func_89()
{
	return Global_2453009.f_18;
}

var func_90()
{
	return Global_2453009.f_17;
}

int func_91(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_83())
	{
		iVar2 = func_80(iParam1);
		if (!iVar2 == -1)
		{
			return func_78(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_40())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_92(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_69(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_76(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_93()
{
	return Global_2359302.f_2;
}

bool func_94()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_95()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

int func_96(int iParam0)
{
	if (func_98(iParam0, 0))
	{
		return 1;
	}
	if (func_97())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_97()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_98(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_99(-1, 0) == 8;
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

int func_99(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_100();
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

int func_100()
{
	return Global_1312763;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148 && func_61(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_106(bool bParam0)
{
	return func_81(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_107(int iParam0, int iParam1)
{
	if (func_105(iParam0, 0))
	{
		return func_103(Global_1630816[iParam0 /*597*/].f_11.f_33) == iParam1;
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	if (unk_0x575B7C28D81C0B4D(uLocal_89))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_89);
	}
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_88[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_88[iVar0]));
		}
		if (unk_0x575B7C28D81C0B4D(uLocal_87[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_87[iVar0]));
		}
		iVar0++;
	}
}

void func_109()
{
	if (!func_115())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_110();
}

void func_110()
{
	func_112();
	func_111(0);
}

void func_111(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x02BFF15CAA701972();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x551F46B3C7DFB654();
		Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_112()
{
	if (!func_114())
	{
	}
	if (func_115())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_113();
		unk_0xEDA1E269A9237146();
	}
}

void func_113()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			unk_0x38CD3C04C877C35F(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_114()
{
	if (!func_115())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_113();
	return unk_0xB4BAEA083E2652CB();
}

int func_115()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return func_115();
}

void func_117()
{
	switch (func_807())
	{
		case 0:
			if (func_806(func_7(), 1))
			{
				func_791(157, 1, -1, 0);
			}
			else
			{
				func_791(157, 0, -1, 0);
			}
			func_787();
			if (func_17() > 0)
			{
				if (func_806(func_7(), 1))
				{
					func_786(1);
					func_785(1);
				}
				else
				{
					func_785(2);
				}
			}
			break;
		
		case 2:
			if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 17) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 24))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_86, 3))
				{
					func_685();
				}
				func_679();
				func_668();
				func_666();
				func_662();
				func_661();
				func_658();
				func_657();
				func_614(157, Local_91, &uLocal_92, 1140457472, 1144750080, 0);
				if (func_17() > 1)
				{
					func_785(3);
				}
			}
			break;
		
		case 1:
			if (!unk_0x234B68AC2E35ED5A(iLocal_86, 3))
			{
				func_685();
			}
			func_679();
			func_668();
			func_658();
			func_613();
			func_666();
			func_662();
			func_661();
			func_612();
			func_609();
			func_595();
			func_657();
			func_614(157, Local_91, &uLocal_92, 1140457472, 1144750080, 0);
			func_478(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
			func_455(157);
			if (func_17() > 1)
			{
				func_785(3);
			}
			break;
		
		case 3:
			func_372();
			func_163();
			func_679();
			func_595();
			if (((unk_0x234B68AC2E35ED5A(iLocal_86, 11) && unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 20)) && !func_162()) && func_118(&uLocal_96, 1, 0))
			{
				unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 21);
			}
			if (func_17() > 3)
			{
				func_785(4);
			}
			break;
		
		case 4:
			break;
	}
}

int func_118(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_161(29);
	if ((*uParam0 > 0 && !func_162()) && func_144(unk_0x1146A9AE09CE2B14()) != 0)
	{
		if (!func_142())
		{
			func_141();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_140(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_3(&(uParam0->f_3), 1000, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 2);
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_139(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_140(&(uParam0->f_5)))
			{
				if (func_3(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_128(iParam2);
				func_139(uParam0, 2);
			}
			break;
		
		case 2:
			func_128(0);
			if (func_3(&(uParam0->f_1), 15000, 0))
			{
				if (func_119(func_120(0)))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_139(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_3(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
				func_139(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
			unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_119(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

char* func_120(int iParam0)
{
	if (((func_127(unk_0x1146A9AE09CE2B14()) || func_126(unk_0x1146A9AE09CE2B14())) || func_124()) || iParam0)
	{
		if (func_126(unk_0x1146A9AE09CE2B14()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_121(func_123()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_122(iParam0, 0);
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_123()
{
	return Global_1658176;
}

bool func_124()
{
	return (func_125() && func_60(func_7()));
}

bool func_125()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

bool func_126(int iParam0)
{
	return func_122(func_104(iParam0), 0);
}

bool func_127(int iParam0)
{
	return func_101(func_104(iParam0));
}

void func_128(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0))
	{
		if (((((((((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_6(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0x8B6A925F148E0E94()) && !func_138(unk_0x1146A9AE09CE2B14(), 22)) && func_144(unk_0x1146A9AE09CE2B14()) != 0) && !func_136(func_137())) && !func_127(unk_0x1146A9AE09CE2B14())) && !func_135(func_104(unk_0x1146A9AE09CE2B14()))) && !func_134(func_104(unk_0x1146A9AE09CE2B14())))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 1);
			func_133(func_120(iParam0), -1);
			func_129(1);
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_129(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_130(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_162())
	{
		unk_0x9B0169E27978C1A2(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_130(bool bParam0)
{
	return func_131(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_131(int iParam0, bool bParam1)
{
	return func_132(iParam0, bParam1, 1);
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_61(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_40() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_133(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_137()
{
	var uVar0;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_138(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_140(var uParam0)
{
	return uParam0->f_1;
}

void func_141()
{
	Global_2465049 = 1;
}

int func_142()
{
	if (((((((func_104(unk_0x1146A9AE09CE2B14()) == 170 || func_104(unk_0x1146A9AE09CE2B14()) == 219) || func_104(unk_0x1146A9AE09CE2B14()) == 221) || func_104(unk_0x1146A9AE09CE2B14()) == 220) || func_104(unk_0x1146A9AE09CE2B14()) == 216) || func_104(unk_0x1146A9AE09CE2B14()) == 215) || func_104(unk_0x1146A9AE09CE2B14()) == 214) || func_104(unk_0x1146A9AE09CE2B14()) == 218)
	{
		return 1;
	}
	if (func_143(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_160(iParam0) && !func_159(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_158(iParam0);
	uVar3 = func_157();
	bVar4 = func_149();
	if ((bVar1 && (func_148(iParam0) || func_147(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_146(iParam0)) && !func_145(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_145(int iParam0)
{
	return func_138(iParam0, 19);
}

int func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_138(iParam0, 9);
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_149()
{
	if ((func_138(unk_0x1146A9AE09CE2B14(), 21) || func_138(unk_0x1146A9AE09CE2B14(), 22)) || func_154())
	{
		return 1;
	}
	if (func_150())
	{
		func_161(22);
		return 1;
	}
	return 0;
}

int func_150()
{
	if (func_105(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (((func_157() && !func_153()) || func_152(unk_0x1146A9AE09CE2B14(), 21)) || func_152(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		else
		{
			func_151(27);
		}
	}
	return 0;
}

void func_151(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_152(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_153()
{
	return Global_1312436.f_1;
}

bool func_154()
{
	return func_155(390, -1);
}

int func_155(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_156(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_100();
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

bool func_157()
{
	return Global_1312436;
}

bool func_158(int iParam0)
{
	return func_138(iParam0, 20);
}

bool func_159(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

void func_161(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_162()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

void func_163()
{
	struct<20> Var0;
	int iVar1;
	var uVar2;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 20))
	{
		if (func_371())
		{
			unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 20);
			return;
		}
		if (func_149())
		{
			unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 20);
			return;
		}
		func_365(&Var0, &(Var0.f_1), 0, 0);
		if (func_806(func_7(), 1))
		{
			if (Local_104.f_34 > 0)
			{
				func_363(0, unk_0x1146A9AE09CE2B14());
				func_184(157, 1, &Var0, 0);
			}
			else
			{
				func_363(0, func_40());
				func_184(157, 0, &Var0, 0);
			}
		}
		else
		{
			func_184(157, func_181(0, 0) > 0, &Var0, 0);
			if (func_180() != func_40() && func_104(func_180()) != 157)
			{
				func_365(&iVar1, &uVar2, 0, 1);
				func_164(&iVar1, 1);
			}
		}
		unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 20);
	}
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_179())
		{
			if (func_106(0))
			{
				if (!func_130(0))
				{
					if (unk_0x8CFC2F41A749E236(func_180()))
					{
						if (func_178() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_178());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_176(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_169("GB_BCUT_TICK1", func_180(), iVar0, 0, 0, 1);
						}
						func_102(20);
						func_165(func_180(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_168(iParam0);
		func_167(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_166(iParam0));
	}
}

int func_166(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

void func_167(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_168(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

int func_169(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var1))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		unk_0xB2A9BDF905DC5A51(func_62(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_174(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_170(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_170(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_173() || !unk_0xE45310E861787FC2()) || !func_98(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_171(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_172(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_173()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

var func_174(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_175(&cVar0);
}

var func_175(char[4] cParam0)
{
	return cParam0;
}

void func_176(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_177(1);
	}
	else
	{
		iVar1 = func_177(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_177(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_178()
{
	return Global_262145.f_12567;
}

bool func_179()
{
	return func_82(unk_0x1146A9AE09CE2B14());
}

int func_180()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_181(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_106(1) && !bParam1)
	{
		if (iParam0 || func_179())
		{
			iVar0 = 0;
			while (iVar0 < unk_0x5E72DF7B8C03AA05())
			{
				uVar2 = unk_0x6750311806FF130A(iVar0);
				if (unk_0xF46EDF82CA845956(uVar2))
				{
					iVar3 = unk_0x539ED6DF32477DE0(iVar2);
					if (unk_0x8CFC2F41A749E236(iVar3))
					{
						if (func_182(iVar3, func_180(), 1))
						{
							iVar1 = (iVar1 + Local_105[iVar0 /*4*/].f_2);
						}
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2;
}

int func_182(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_40())
	{
		if (!bParam2)
		{
			if (func_183(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_40())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (iParam0 != func_40())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_40())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_184(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_361(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_360(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_359(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_356(iParam0))
	{
		if (bParam1)
		{
			if (func_355(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_354();
			}
			else
			{
				func_353();
			}
		}
		else
		{
			func_352();
		}
	}
	func_336(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_334(iParam0, uParam2, &iVar0, &iVar5);
	func_309(iParam0, uParam2, &iVar0, &iVar5);
	func_306(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_289(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = uVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_7();
	if (iVar8 != func_40() && iParam0 != 148)
	{
		if (func_81(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (!func_182(unk_0x1146A9AE09CE2B14(), iVar8, 1))
			{
				func_164(&iVar0, 1);
			}
		}
	}
	func_284(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_283();
		func_235(0, unk_0x7D2B9E6A64637269(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_213(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_212(iParam0, iVar0);
		if (func_211(iParam0))
		{
			if (func_210(iParam0) > -1)
			{
				func_209(func_210(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_208(&Global_2463963, 0, 0);
	}
	if (func_146(unk_0x1146A9AE09CE2B14()) || func_158(unk_0x1146A9AE09CE2B14()))
	{
		func_197(iParam0);
	}
	if (func_101(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_135(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_196(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_195(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_194(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_134(iParam0))
	{
		if (func_193(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_189(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_188(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_187(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_186(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_185(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_189(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_190(func_191(unk_0x1146A9AE09CE2B14()))))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_191(int iParam0)
{
	if (func_104(iParam0) == 237 || func_104(iParam0) == 250)
	{
		return func_192(iParam0);
	}
	return -1;
}

int func_192(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_193(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_197(int iParam0)
{
	if (func_207(unk_0x1146A9AE09CE2B14()) && func_206())
	{
		if (func_205(iParam0))
		{
			func_200(10571, -1);
		}
		else if (func_199(iParam0))
		{
			func_200(10573, -1);
		}
		else if (func_122(iParam0, 1))
		{
			func_200(10574, -1);
		}
		else if (func_198(iParam0))
		{
			func_200(10575, -1);
		}
	}
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_204(iParam0, func_156(iParam1), 0);
	iVar0++;
	if (!func_203(iParam0))
	{
		func_202(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_201(iParam0, iVar0, iParam1, 1);
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_156(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_156(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_156(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_156(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_156(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_156(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_156(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_156(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_156(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_156(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_156(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_156(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_156(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_156(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_156(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_156(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_156(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_156(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_156(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_156(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_156(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_156(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_156(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_156(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_156(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_156(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_156(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_156(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_156(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_156(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_156(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_156(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_156(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_156(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_156(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_156(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_156(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_156(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_156(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_156(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_156(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_156(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_156(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_156(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_156(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_156(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_156(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_156(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_156(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_156(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_156(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_156(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_156(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_156(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_156(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_203(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

int func_204(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_156(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_206()
{
	return func_60(unk_0x1146A9AE09CE2B14());
}

bool func_207(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

void func_208(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

void func_209(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!unk_0x3640D836D145B814() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_212(int iParam0, int iParam1)
{
	if (func_207(unk_0x1146A9AE09CE2B14()) && func_206())
	{
		if (func_205(iParam0) && iParam1 > 0)
		{
			func_202(10572, (func_204(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_180();
	if (iVar5 != func_40())
	{
		func_234(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_106(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_233())
			{
				unk_0x5770EF297A89065D(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_206())
			{
				if (!func_233())
				{
					Var7 = { func_232() };
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_231(Var7)), func_230(Var7), iParam4);
				}
			}
			else if (func_233())
			{
				func_219(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_179())
			{
				if (!func_233())
				{
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_231(func_218(unk_0x1146A9AE09CE2B14()))), 5, iParam4);
				}
			}
			else if (func_233())
			{
				func_219(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_179())
			{
				if (!func_233())
				{
					iVar2 = func_214(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xCC29ABFF6ADFDE69(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_233())
			{
				func_219(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x57338FC01D78BA44(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_233())
			{
				func_219(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5EDA486C8AECA356(iParam1);
			}
			break;
		
		case 237:
			if (func_179())
			{
				if (!func_233())
				{
					unk_0x624394FE858634D7(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_233())
			{
				func_219(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_233())
			{
				func_219(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xF31622289C134E5A(iParam1);
			}
			break;
		
		case 249:
			if (func_233())
			{
				func_219(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3A22644C8900D074(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_233())
			{
				func_219(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB91DFEF32DEB33DB(iParam1);
			}
			break;
		
		case 243:
			if (func_233())
			{
				func_219(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB4F8EBDFC90D5044(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_233())
				{
					func_219(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x6BB4249BA6AD63A1(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_233())
			{
				func_219(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x6BB4249BA6AD63A1(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_233())
			{
				func_219(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x08D3EECA50D3697F(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_214(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_217(iParam0, iParam1);
	fVar1 = (to_float(func_215(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_215(int iParam0, int iParam1)
{
	return (func_216(iParam0) * iParam1);
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22490;
		
		case 0:
			return Global_262145.f_22491;
		
		case 1:
			return Global_262145.f_22492;
		
		case 2:
			return Global_262145.f_22493;
		
		case 3:
			return Global_262145.f_22494;
		
		case 4:
			return Global_262145.f_22495;
		
		case 5:
			return Global_262145.f_22496;
		
		case 6:
			return Global_262145.f_22497;
		
		case 7:
			return Global_262145.f_22498;
		
		default:
	}
	return 0;
}

float func_217(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22500);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_218(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

void func_219(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_233())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_220(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_220(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_220(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			func_220(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_220(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_233())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_100()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_227(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_226(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_221(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_221(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_222(iParam0);
	}
}

void func_222(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_233())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_225(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_223(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_223(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_224(&(uParam0->f_14));
	func_224(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_224(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_225(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_226(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_227(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_233())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_228(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_228(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_166(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_229();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_229()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_231(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_232()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_194;
}

int func_233()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

void func_234(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_235(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_236(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_236(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				iVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_242(unk_0x885F3A431ECE75E3(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_237(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_237(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_240(iParam0, 1) };
	if (iParam0 == func_239(unk_0x7D2B9E6A64637269()))
	{
		func_238(1);
	}
	func_242(Var0, iParam1, 0, sParam2, iParam3);
}

void func_238(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_239(int iParam0)
{
	return iParam0;
}

Vector3 func_240(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var1 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_241(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar2 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_241(int iParam0)
{
	return iParam0;
}

void func_242(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_245(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam1;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam2;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_244();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_243();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam4);
		}
	}
}

int func_243()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_244()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_245(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_246(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_247(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_247(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_282(unk_0x1146A9AE09CE2B14()) || func_281(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_279() || func_278(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_277(uParam2))
	{
	}
	if (func_276())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_274(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_273(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_270(0, &iVar1);
					break;
				
				case 3:
					func_270(1, &iVar1);
					break;
				
				case 1:
					func_267(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_266(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_258((func_265(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_266(1166, iVar1, -1);
				}
				func_252(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_248((func_250(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_248((func_250(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_248(int iParam0)
{
	if (func_276())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_249(joaat("mpply_globalxp"), iParam0);
	}
}

void func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_250(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_251(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_251(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_252(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_257(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_255(func_256(&Var0));
			if (iVar1 == 0)
			{
				func_254(&Global_1390382, iParam0);
				func_253(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_254(&Global_1390383, iParam0);
				func_253(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_254(&Global_1390384, iParam0);
				func_253(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_254(&Global_1390385, iParam0);
				func_253(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_254(&Global_1390386, iParam0);
				func_253(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_254(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_255(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_256(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

struct<13> func_257(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

void func_258(int iParam0, int iParam1, int iParam2)
{
	if (func_276())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_156(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_156(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_264(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_262(iParam0, 1);
		}
		func_201(640, iParam0, -1, 1);
		func_202(641, func_262(iParam0, 1), -1, 1, 0);
		Global_1390527[func_156(-1)] = iParam0;
		func_259(-1109644434, 7, 0);
	}
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_261(iParam1, iParam2))
	{
		iVar0 = func_260();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_260()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_261(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_263(iParam0, 0);
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_264(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_265(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_156(-1)];
			}
			else if (func_264(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_156(-1)];
	}
	return 0;
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_204(iParam0, func_156(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_203(iParam0))
	{
		func_202(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_201(iParam0, iVar0, iParam2, 1);
	}
}

void func_267(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_69(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_269(unk_0x1146A9AE09CE2B14(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_268(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_268(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_268(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_269(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_257(iParam0) };
		Global_2518266 = { func_257(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_270(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_269(unk_0x1146A9AE09CE2B14(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_271(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_269(unk_0x1146A9AE09CE2B14(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_268(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_268(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_271(int iParam0, int iParam1)
{
	return vdist(func_272(iParam0), func_272(iParam1));
	return 0f;
}

Vector3 func_272(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_273(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_268(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_274(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_265(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_265(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_275(8000, 0, 0) > 0)
	{
		if (func_275(8000, 0, 0) < (iParam0 + func_265(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_275(8000, 0, 0) - func_265(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_275(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_293361[iParam0];
}

int func_276()
{
	return 1;
}

int func_277(var uParam0)
{
	if (unk_0x4030103C8B148AFC(uParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(uParam0, "") || unk_0xDA654EB115F9FF7D(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	return func_194(func_104(iParam0));
}

bool func_279()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_88();
	}
	return func_280(Global_4456448.f_85535);
}

int func_280(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_281(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_282(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_283()
{
	Global_2465048 = 1;
}

void func_284(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_288(7))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	iVar1 = func_286(iParam0);
	iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2544210.f_5191.f_268, unk_0x551F46B3C7DFB654()));
	if (func_285(iParam0) != -1)
	{
		if (iVar2 > func_285(iParam0))
		{
			iVar2 = func_285(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12573)
	{
		iVar2 = Global_262145.f_12573;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_285(int iParam0)
{
	if (func_122(iParam0, 0) || func_199(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_205(iParam0))
	{
		return Global_262145.f_18665;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18662;
		
		case 191:
			return Global_262145.f_18664;
		
		case 190:
			return Global_262145.f_18663;
		
		case 227:
			return Global_262145.f_21224;
		
		case 226:
			return Global_262145.f_21212;
		
		case 225:
			return Global_262145.f_21232;
		
		case 230:
			return Global_262145.f_22487;
		
		case 229:
			return Global_262145.f_22391;
		
		case 233:
			return Global_262145.f_22967;
		
		case 237:
			return Global_262145.f_24130;
		
		case 238:
			return Global_262145.f_24241;
		
		case 249:
			return Global_262145.f_24257;
		
		case 243:
			return Global_262145.f_26590;
		
		default:
	}
	return -1;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12664;
		
		case 152:
			return Global_262145.f_12699;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12687;
		
		case 157:
			return Global_262145.f_12654;
		
		case 159:
			return Global_262145.f_12637;
		
		case 164:
			return Global_262145.f_12677;
		
		case 160:
			return Global_262145.f_12727;
		
		case 162:
			return Global_262145.f_12747;
		
		case 163:
			return Global_262145.f_12712;
		
		case 154:
			return Global_262145.f_12782;
		
		case 155:
			return Global_262145.f_12772;
		
		case 153:
			return Global_262145.f_12736;
		
		case 170:
			return Global_262145.f_15174;
		
		case 171:
			return Global_262145.f_15233;
		
		case 172:
			return Global_262145.f_15251;
		
		case 173:
			return Global_262145.f_15192;
		
		case 166:
			return Global_262145.f_15207;
		
		case 167:
			return Global_262145.f_15298;
		
		case 169:
			return Global_262145.f_15270;
		
		case 168:
			return Global_262145.f_15263;
		
		case 179:
			return Global_262145.f_18545;
		
		case 180:
			return Global_262145.f_18323;
		
		case 182:
			return Global_262145.f_18323;
		
		case 183:
			return Global_262145.f_18323;
		
		case 185:
			return Global_262145.f_18323;
		
		case 186:
			return Global_262145.f_18323;
		
		case 189:
			return Global_262145.f_18545;
		
		case 190:
			return Global_262145.f_18199;
		
		case 191:
			return Global_262145.f_18290;
		
		case 192:
			return Global_262145.f_18084;
		
		case 193:
			return Global_262145.f_18545;
		
		case 194:
			return Global_262145.f_18545;
		
		case 195:
			return Global_262145.f_18323;
		
		case 197:
			return Global_262145.f_18323;
		
		case 198:
			return Global_262145.f_18323;
		
		case 199:
			return Global_262145.f_18545;
		
		case 200:
			return Global_262145.f_18545;
		
		case 201:
			return Global_262145.f_18545;
		
		case 205:
			return Global_262145.f_18545;
		
		case 207:
			return Global_262145.f_18323;
		
		case 208:
			return Global_262145.f_18323;
		
		case 209:
			return Global_262145.f_18323;
		
		case 210:
			return Global_262145.f_18545;
		
		case 211:
			return Global_262145.f_18545;
		
		case 214:
			return Global_262145.f_19395;
		
		case 215:
			return Global_262145.f_19397;
		
		case 216:
			return Global_262145.f_19399;
		
		case 217:
			return Global_262145.f_19401;
		
		case 218:
			return Global_262145.f_19403;
		
		case 219:
			return Global_262145.f_19405;
		
		case 220:
			return Global_262145.f_19407;
		
		case 221:
			return Global_262145.f_19409;
		
		case 225:
			if (!func_179())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_179())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_179())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_179())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_179())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_179())
			{
				return Global_262145.f_22966;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_179())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_179())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_179())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_179())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_179())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12663;
		
		case 152:
			return Global_262145.f_12698;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12686;
		
		case 157:
			return Global_262145.f_12653;
		
		case 159:
			return Global_262145.f_12636;
		
		case 164:
			return Global_262145.f_12676;
		
		case 160:
			return Global_262145.f_12726;
		
		case 162:
			return Global_262145.f_12746;
		
		case 163:
			return Global_262145.f_12711;
		
		case 154:
			return Global_262145.f_12781;
		
		case 155:
			return Global_262145.f_12771;
		
		case 153:
			return Global_262145.f_12735;
		
		case 170:
			return Global_262145.f_15173;
		
		case 171:
			return Global_262145.f_15232;
		
		case 172:
			return Global_262145.f_15250;
		
		case 173:
			return Global_262145.f_15191;
		
		case 166:
			return Global_262145.f_15206;
		
		case 179:
			return Global_262145.f_18544;
		
		case 180:
			return Global_262145.f_18322;
		
		case 182:
			return Global_262145.f_18322;
		
		case 183:
			return Global_262145.f_18322;
		
		case 185:
			return Global_262145.f_18322;
		
		case 186:
			return Global_262145.f_18322;
		
		case 189:
			return Global_262145.f_18544;
		
		case 193:
			return Global_262145.f_18544;
		
		case 194:
			return Global_262145.f_18544;
		
		case 195:
			return Global_262145.f_18322;
		
		case 197:
			return Global_262145.f_18322;
		
		case 198:
			return Global_262145.f_18322;
		
		case 199:
			return Global_262145.f_18544;
		
		case 200:
			return Global_262145.f_18544;
		
		case 201:
			return Global_262145.f_18544;
		
		case 205:
			return Global_262145.f_18544;
		
		case 207:
			return Global_262145.f_18322;
		
		case 208:
			return Global_262145.f_18322;
		
		case 209:
			return Global_262145.f_18322;
		
		case 210:
			return Global_262145.f_18544;
		
		case 211:
			return Global_262145.f_18544;
		
		case 190:
			if (func_130(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_130(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_130(0))
			{
				return Global_262145.f_18083;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19394;
		
		case 215:
			return Global_262145.f_19396;
		
		case 216:
			return Global_262145.f_19398;
		
		case 217:
			return Global_262145.f_19400;
		
		case 218:
			return Global_262145.f_19402;
		
		case 219:
			return Global_262145.f_19404;
		
		case 220:
			return Global_262145.f_19406;
		
		case 221:
			return Global_262145.f_19408;
		
		case 225:
			if (func_130(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_130(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_130(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_130(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_130(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_130(0))
			{
				return Global_262145.f_22968;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_130(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_130(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_130(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_130(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_288(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

void func_289(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_130(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_179())
		{
			iVar17 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar17 = func_180();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590908[iVar11 /*874*/].f_851.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590908[iVar11 /*874*/].f_851.f_2;
			}
			else
			{
				iVar2 = func_305(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_304(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x1146A9AE09CE2B14())
				{
					func_303("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == unk_0x1146A9AE09CE2B14())
			{
				if (iVar2 > 0)
				{
					func_302(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_300(*uParam3);
				}
				iVar6 = func_299(&uVar5);
				iVar7 = Global_262145.f_24161;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_24160));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_102(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x5E72DF7B8C03AA05())
						{
							iVar22 = iVar21;
							if (unk_0xF46EDF82CA845956(iVar22))
							{
								iVar23 = unk_0x539ED6DF32477DE0(iVar22);
								if (func_298(iVar23))
								{
									func_290(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24133;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24134;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_102(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_292(iParam0);
	func_291(iParam0, uVar0, iParam1, iParam2);
}

void func_291(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_168(iParam0);
	func_167(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_40())
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_166(iParam0));
		}
	}
}

int func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_297();
	iVar0 = func_295(iParam0, iVar0);
	iVar1 = Global_1630816[func_180() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_294())
	{
		iVar0 = func_294();
	}
	if (iVar0 > func_293())
	{
		iVar0 = func_293();
	}
	return iVar0;
}

int func_293()
{
	return Global_262145.f_15135;
}

int func_294()
{
	return Global_262145.f_16310;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_355(iParam0) * func_296());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_296()
{
	return Global_262145.f_16309;
}

var func_297()
{
	return Global_262145.f_12559;
}

int func_298(int iParam0)
{
	if (unk_0x8CFC2F41A749E236(iParam0))
	{
		if (iParam0 != unk_0x1146A9AE09CE2B14())
		{
			if (func_182(iParam0, unk_0x1146A9AE09CE2B14(), 0))
			{
				if (!func_138(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(iVar0)))
		{
			iVar2 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_98(iVar2, 0) && !func_182(iVar2, unk_0x1146A9AE09CE2B14(), 1))
			{
				iVar1++;
			}
			else if (func_98(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_300(int iParam0)
{
	func_301(iParam0, 7238);
}

void func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_204(iParam1, -1, 0);
	func_202(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_302(int iParam0)
{
	func_301(iParam0, 7233);
}

int func_303(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	if (bParam2)
	{
		func_170(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_170(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_304(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24162);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_305(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_306(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_130(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_179())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_180();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_215(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_214(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_308(*iParam2) > 0)
			{
				if (iVar15 == unk_0x1146A9AE09CE2B14())
				{
					func_303("SMTICK_RONCUT", func_308(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_308(*iParam2));
			}
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_307(iVar2, iVar9);
				iVar6 = func_299(&uVar5);
				iVar7 = Global_262145.f_22506;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22505));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_102(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_298(iVar20))
								{
									func_290(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22439;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22440;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_102(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_307(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_301(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_301(iParam1, 6119);
	}
}

int func_308(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22473);
	if (fVar1 > to_float(Global_262145.f_22474))
	{
		fVar1 = to_float(Global_262145.f_22474);
	}
	return round(fVar1);
}

void func_309(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_130(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_179())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_180();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_218(iVar15);
			iVar0 = (func_333(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_329(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21216));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21215));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_323(iVar16, iVar2);
				if (func_319(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_310(5);
				}
				iVar6 = func_299(&uVar5);
				iVar7 = round(Global_262145.f_21218);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21217));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_102(108);
					}
					else
					{
						func_102(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_298(iVar20))
								{
									func_290(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21219;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21220;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_102(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_312(Global_262145.f_20751))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_312(Global_262145.f_20753))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_312(Global_262145.f_20755))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_312(Global_262145.f_20757))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_312(Global_262145.f_20759))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_312(Global_262145.f_20761))
				{
					func_303("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_312(Global_262145.f_20764))
				{
					func_303("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_312(Global_262145.f_20767))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_312(Global_262145.f_20769))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_312(Global_262145.f_20771))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_312(Global_262145.f_20773))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_312(Global_262145.f_20775))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_312(Global_262145.f_20777))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_312(Global_262145.f_20779))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_312(Global_262145.f_20781))
				{
					func_311("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_311(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam3);
	}
	unk_0x1896EC0B030A48A2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
	}
	else
	{
		Global_2518253 = { func_257(unk_0x1146A9AE09CE2B14()) };
		if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
		{
			iVar1 = 0;
			if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2518183.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x05F3E4A6F62A5ACD(iVar2, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar1, 0, Global_2518183, unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
	}
	func_170(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_316(15417, -1, -1))
			{
				func_315(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_316(15418, -1, -1))
			{
				func_315(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_316(15425, -1, -1))
			{
				func_315(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_316(15405, -1, -1))
			{
				func_315(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_316(15393, -1, -1))
			{
				func_315(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_316(15409, -1, -1))
			{
				func_315(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_316(15396, -1, -1))
			{
				func_315(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_316(15412, -1, -1))
			{
				func_315(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_316(15403, -1, -1))
			{
				func_315(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_316(15389, -1, -1))
			{
				func_315(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_316(15398, -1, -1))
			{
				func_315(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_316(15400, -1, -1))
			{
				func_315(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_316(15408, -1, -1))
			{
				func_315(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_316(15411, -1, -1))
			{
				func_315(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_316(15397, -1, -1))
			{
				func_315(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_316(15413, -1, -1))
			{
				func_315(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_316(15391, -1, -1))
			{
				func_315(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_316(15388, -1, -1))
			{
				func_315(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_316(15401, -1, -1))
			{
				func_315(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_316(15394, -1, -1))
			{
				func_315(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_316(15406, -1, -1))
			{
				func_315(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_316(15395, -1, -1))
			{
				func_315(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_316(15410, -1, -1))
			{
				func_315(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_316(15407, -1, -1))
			{
				func_315(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_316(15414, -1, -1))
			{
				func_315(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_316(15415, -1, -1))
			{
				func_315(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_316(15399, -1, -1))
			{
				func_315(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_316(15404, -1, -1))
			{
				func_315(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_316(15392, -1, -1))
			{
				func_315(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_316(15390, -1, -1))
			{
				func_315(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_316(15402, -1, -1))
			{
				func_315(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_316(15416, -1, -1))
			{
				func_315(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_155(209, -1))
			{
				func_313(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_316(15426, -1, -1))
			{
				func_315(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_316(15422, -1, -1))
			{
				func_315(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_316(15423, -1, -1))
			{
				func_315(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_316(15421, -1, -1))
			{
				func_315(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_316(15427, -1, -1))
			{
				func_315(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_316(15419, -1, -1))
			{
				func_315(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_316(15420, -1, -1))
			{
				func_315(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_314())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_156(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_314()
{
	return 1;
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_100();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_100();
	}
	iVar1 = func_318(iParam0, iParam1);
	uVar2 = func_317(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_100();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = func_321(iParam0);
	return func_204(func_320(iVar0), -1, 0);
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3953;
		
		case 1:
			return 3954;
		
		case 2:
			return 3955;
		
		case 3:
			return 3956;
		
		case 4:
			return 3957;
		
		case 5:
			return 5458;
		
		default:
	}
	return 3953;
}

int func_321(int iParam0)
{
	int iVar0;
	
	if (func_322(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_322(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_321(iParam0);
	iVar1 = func_320(iVar0);
	iVar2 = (func_204(iVar1, -1, 0) + iParam1);
	func_202(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_326(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_320(iVar0);
				iVar3 = (iVar3 + func_204(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_325(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_324(9357, iVar5, -1, 1);
	}
}

var func_324(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_100();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_100();
	}
	iVar0 = 0;
	iVar1 = func_328(iParam0, iParam1);
	uVar2 = func_327(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_100();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_230(iParam1);
	if (func_322(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_330(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_330(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_330(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_332(iParam0, iParam1))
	{
		iVar0 = func_331(iParam0, iParam1);
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_322(iParam1) && iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_322(iParam1) && iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_333(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_322(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_334(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_206())
			{
				Var0 = { func_232() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_329(unk_0x1146A9AE09CE2B14(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18774);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18773);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_299(&uVar9);
				iVar11 = round(Global_262145.f_18764);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18763));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_102(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_130(0))
			{
				Var14 = { func_335(func_180()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_329(func_180(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18774));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18773));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18813;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18814;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_335(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_336(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_82(unk_0x1146A9AE09CE2B14()))
		{
			if (bParam1)
			{
				func_351();
			}
			func_350();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_82(unk_0x1146A9AE09CE2B14()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_342(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_341(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_299(&uVar2);
					iVar4 = Global_262145.f_16320;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15529));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_102(44);
					}
				}
				func_339(*iParam3);
				func_338();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x5E72DF7B8C03AA05())
				{
					iVar8 = iVar7;
					if (unk_0xF46EDF82CA845956(iVar8))
					{
						iVar9 = unk_0x539ED6DF32477DE0(iVar8);
						if (func_298(iVar9))
						{
							func_290(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_82(unk_0x1146A9AE09CE2B14()))
		{
			func_337();
		}
	}
}

void func_337()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_100()];
	iVar0++;
	func_201(3669, iVar0, -1, 1);
}

void func_338()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_100()];
	iVar0++;
	func_201(3668, iVar0, -1, 1);
}

void func_339(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_100()];
	iVar0 = (iVar0 + iParam0);
	func_201(3670, iVar0, -1, 1);
	if (func_326(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_340(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_324(7666, iVar2, -1, 1);
	}
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16453;
			break;
		
		case 2:
			return Global_262145.f_16454;
			break;
		
		case 3:
			return Global_262145.f_16455;
			break;
		
		case 4:
			return Global_262145.f_16456;
			break;
		
		case 5:
			return Global_262145.f_16457;
			break;
		
		case 6:
			return Global_262145.f_16458;
			break;
		
		case 7:
			return Global_262145.f_16459;
			break;
		
		case 8:
			return Global_262145.f_16460;
			break;
		
		case 9:
			return Global_262145.f_16461;
			break;
		
		case 10:
			return Global_262145.f_16462;
			break;
		
		case 11:
			return Global_262145.f_16463;
			break;
		
		case 12:
			return Global_262145.f_16464;
			break;
		
		case 13:
			return Global_262145.f_16465;
			break;
		
		case 14:
			return Global_262145.f_16466;
			break;
		
		case 15:
			return Global_262145.f_16467;
			break;
		
		case 16:
			return Global_262145.f_16468;
			break;
		
		case 17:
			return Global_262145.f_16469;
			break;
		
		case 18:
			return Global_262145.f_16470;
			break;
		
		case 19:
			return Global_262145.f_16471;
			break;
		
		case 20:
			return Global_262145.f_16472;
			break;
		
		case 21:
			return Global_262145.f_16473;
			break;
		
		case 22:
			return Global_262145.f_16474;
			break;
		
		case 23:
			return Global_262145.f_16475;
			break;
		
		case 24:
			return Global_262145.f_16476;
			break;
	}
	return 0;
}

var func_341(int iParam0)
{
	if (iParam0 >= Global_262145.f_15507)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 >= Global_262145.f_15506)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 >= Global_262145.f_15505)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 >= Global_262145.f_15504)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 >= Global_262145.f_15503)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 >= Global_262145.f_15502)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 >= Global_262145.f_15501)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 >= Global_262145.f_15500)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 >= Global_262145.f_15499)
	{
		return Global_262145.f_15520;
	}
	else if (iParam0 >= Global_262145.f_15498)
	{
		return Global_262145.f_15519;
	}
	else if (iParam0 >= Global_262145.f_15497)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 >= Global_262145.f_15496)
	{
		return Global_262145.f_15517;
	}
	else if (iParam0 >= Global_262145.f_15495)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 >= Global_262145.f_15494)
	{
		return Global_262145.f_15515;
	}
	else if (iParam0 >= Global_262145.f_15493)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 >= Global_262145.f_15492)
	{
		return Global_262145.f_15513;
	}
	else if (iParam0 >= Global_262145.f_15491)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 >= Global_262145.f_15490)
	{
		return Global_262145.f_15511;
	}
	else if (iParam0 >= Global_262145.f_15489)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 >= Global_262145.f_15488)
	{
		return Global_262145.f_15509;
	}
	return Global_262145.f_15508;
}

int func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_349(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_348(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_347(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_343(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_343(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_347(unk_0xB36B8558948EA7A8(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (func_346(iParam0))
	{
		iVar0 = func_344(func_345(iParam0));
		return func_204(iVar0, -1, 0);
	}
	return 0;
}

int func_344(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3648;
	}
	else if (iParam0 == 1)
	{
		return 3649;
	}
	else if (iParam0 == 2)
	{
		return 3650;
	}
	else if (iParam0 == 3)
	{
		return 3651;
	}
	else if (iParam0 == 4)
	{
		return 3652;
	}
	return 3648;
}

int func_345(int iParam0)
{
	int iVar0;
	
	if (func_346(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_346(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_347(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15707;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15705;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15709;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15703;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15701;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15711;
	}
	return 0;
}

int func_348(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_346(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1683674[iVar0] == iParam1 && Global_1683681[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	
	if (func_346(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_350()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_100()];
	iVar0++;
	Global_2595528[func_100()] = iVar0;
	func_201(3667, iVar0, -1, 1);
}

void func_351()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_100()];
	iVar1 = Global_2595534[func_100()];
	iVar0++;
	iVar1++;
	Global_2595525[func_100()] = iVar0;
	Global_2595534[func_100()] = iVar1;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_130 = iVar1;
	func_201(3665, iVar0, -1, 1);
	func_201(3666, iVar1, -1, 1);
}

void func_352()
{
	if (func_179())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_353()
{
	if (func_179())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_354()
{
	if (func_179())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_355(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_106(1) && !func_130(1))
			{
				if (func_358(func_180()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_357(iParam0) == 0)
	{
		if (func_106(1) && !func_130(1))
		{
			if (func_358(func_180()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

bool func_358(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

int func_359(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18460;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12689));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12634) * Global_262145.f_12639));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12661) * Global_262145.f_12665));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12674) * Global_262145.f_12678));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12696) * Global_262145.f_12701));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12858) * Global_262145.f_12859));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12864) * Global_262145.f_12865));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12862) * Global_262145.f_12863));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12856) * Global_262145.f_12857));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12860) * Global_262145.f_12861));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12854) * Global_262145.f_12855));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15230;
		
		case 172:
			return Global_262145.f_15246;
		
		case 173:
			return Global_262145.f_15189;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18468;
		
		case 180:
			return Global_262145.f_18343;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18351;
		
		case 185:
			return Global_262145.f_18360;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18556;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18573;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18420;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18604;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18482;
		
		case 205:
			return Global_262145.f_18591;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18449;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18586;
		
		case 211:
			return Global_262145.f_18550;
		
		case 214:
			return Global_262145.f_19144;
		
		case 215:
			return Global_262145.f_19154;
		
		case 216:
			return Global_262145.f_19164;
		
		case 217:
			return Global_262145.f_19173;
		
		case 218:
			return Global_262145.f_19182;
		
		case 219:
			return Global_262145.f_19198;
		
		case 241:
			return Global_262145.f_24278;
		
		case 242:
			return Global_262145.f_24274;
		
		case 248:
			return Global_262145.f_24277;
		
		case 244:
			return Global_262145.f_24275;
		
		case 239:
			return Global_262145.f_24279;
		
		case 240:
			return Global_262145.f_24280;
		
		case 243:
			return Global_262145.f_26588;
		
		default:
	}
	return 0;
}

int func_360(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18461;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12685) * Global_262145.f_12690));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12635) * Global_262145.f_12640));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12662) * Global_262145.f_12666));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12675) * Global_262145.f_12679));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12697) * Global_262145.f_12702));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12734) * Global_262145.f_12737));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12780) * Global_262145.f_12783));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12770) * Global_262145.f_12773));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12725) * Global_262145.f_12728));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12745) * Global_262145.f_12750));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12710) * Global_262145.f_12713));
		
		case 170:
			return Global_262145.f_15172;
		
		case 171:
			return Global_262145.f_15231;
		
		case 172:
			return Global_262145.f_15247;
		
		case 173:
			return Global_262145.f_15190;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17269;
		
		case 168:
			return Global_262145.f_17268;
		
		case 179:
			return Global_262145.f_18469;
		
		case 180:
			return Global_262145.f_18344;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18352;
		
		case 185:
			return Global_262145.f_18361;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18557;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18574;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18421;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18605;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18483;
		
		case 205:
			return Global_262145.f_18592;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18450;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18587;
		
		case 211:
			return Global_262145.f_18551;
		
		case 214:
			return Global_262145.f_19145;
		
		case 215:
			return Global_262145.f_19155;
		
		case 216:
			return Global_262145.f_19165;
		
		case 217:
			return Global_262145.f_19174;
		
		case 218:
			return Global_262145.f_19183;
		
		case 219:
			return Global_262145.f_19199;
		
		case 178:
			if (func_179())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_179())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_22963;
			}
			break;
		
		case 241:
			return Global_262145.f_24285;
		
		case 242:
			return Global_262145.f_24281;
		
		case 244:
			return Global_262145.f_24282;
		
		case 248:
			return Global_262145.f_24284;
		
		case 239:
			return Global_262145.f_24286;
		
		case 240:
			return Global_262145.f_24287;
		
		case 237:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_206())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_179() && !func_206())
			{
				if (func_358(unk_0x1146A9AE09CE2B14()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_206())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_361(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_362(iParam0))
	{
		if (!func_179())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12578;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_81(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (func_101(iParam0))
		{
			*uParam1 = (Global_262145.f_18320 / 100f);
			*uParam2 = (Global_262145.f_18320 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24288;
			*uParam2 = Global_262145.f_24288;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24289;
			*uParam2 = Global_262145.f_24289;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24291;
			*uParam2 = Global_262145.f_24291;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24292;
			*uParam2 = Global_262145.f_24292;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24293;
			*uParam2 = Global_262145.f_24293;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24294;
			*uParam2 = Global_262145.f_24294;
		}
		else
		{
			*uParam1 = Global_262145.f_12575;
			*uParam2 = Global_262145.f_12574;
		}
	}
	else if (func_101(iParam0))
	{
		*uParam1 = (Global_262145.f_18321 / 100f);
		*uParam2 = (Global_262145.f_18321 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24295;
		*uParam2 = Global_262145.f_24295;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24296;
		*uParam2 = Global_262145.f_24296;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24298;
		*uParam2 = Global_262145.f_24298;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24299;
		*uParam2 = Global_262145.f_24299;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24300;
		*uParam2 = Global_262145.f_24300;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24301;
		*uParam2 = Global_262145.f_24301;
	}
	else
	{
		*uParam1 = Global_262145.f_12577;
		*uParam2 = Global_262145.f_12576;
	}
	iVar0 = func_7();
	if (iVar0 != func_40())
	{
		if (func_182(unk_0x1146A9AE09CE2B14(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_363(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_40())
	{
		if (unk_0x8CFC2F41A749E236(iParam1))
		{
			if (iParam1 == unk_0x1146A9AE09CE2B14())
			{
				iVar0 = 1;
			}
			else if (func_364(iParam1, unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
			unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			Global_2544210.f_5191.f_386 = unk_0x666C16A4ED8F3098();
		}
	}
}

int func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_40() && iParam1 != func_40())
	{
		iVar0 = func_41(iParam0);
		if (iVar0 != func_40())
		{
			return iVar0 == func_41(iParam1);
		}
	}
	return 0;
}

void func_365(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_806(func_7(), 1))
	{
		if (func_35())
		{
			*uParam0 = (func_370() * Local_104.f_34);
			*uParam1 = (func_369() * Local_104.f_34);
		}
		else
		{
			*uParam0 = (func_368() * Local_104.f_34);
			*uParam1 = (func_367() * Local_104.f_34);
		}
	}
	else if (func_106(1))
	{
		if (func_179())
		{
			iVar4 = (func_181(iParam2, bParam3) - Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2);
		}
		else
		{
			iVar5 = unk_0x4645C707A0067CB6(func_180());
			if (iVar5 != -1)
			{
				iVar4 = (func_181(iParam2, bParam3) - Local_105[iVar5 /*4*/].f_2);
			}
		}
		if (func_35())
		{
			*uParam0 = (func_370() * func_181(iParam2, bParam3));
			*uParam1 = (func_369() * func_181(1, 0));
			iVar3 = (func_370() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		else
		{
			*uParam0 = (func_368() * func_181(iParam2, bParam3));
			*uParam1 = (func_367() * func_181(1, 0));
			iVar3 = (func_370() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		fVar0 = (to_float(*uParam0) * Global_262145.f_12575);
		fVar1 = (to_float(*uParam1) * Global_262145.f_12574);
		fVar2 = (to_float(iVar3) * Global_262145.f_12575);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
		iVar3 = round(fVar2);
		if (func_366() > 0)
		{
			func_176(&iVar3, 0);
		}
		*uParam0 = (*uParam0 + iVar3);
	}
	else
	{
		if (func_35())
		{
			*uParam0 = (func_370() * func_181(0, 0));
			*uParam1 = (func_369() * func_181(0, 0));
		}
		else
		{
			*uParam0 = (func_368() * func_181(0, 0));
			*uParam1 = (func_367() * func_181(0, 0));
		}
		fVar0 = ((to_float(*uParam0) * Global_262145.f_12577) * Global_262145.f_12656);
		fVar1 = ((to_float(*uParam1) * Global_262145.f_12576) * Global_262145.f_12657);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
	}
}

int func_366()
{
	if (func_180() == func_40())
	{
		return 0;
	}
	return func_39(func_180());
}

int func_367()
{
	return Global_262145.f_12651;
}

int func_368()
{
	return Global_262145.f_12649;
}

int func_369()
{
	return Global_262145.f_12652;
}

int func_370()
{
	return Global_262145.f_12650;
}

int func_371()
{
	return 0;
}

void func_372()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (func_402())
	{
		unk_0x191DDA30577F440A(&iLocal_86, 11);
	}
	if (func_116())
	{
		func_109();
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_86, 11))
	{
		return;
	}
	if (func_106(1))
	{
		sVar0 = func_401();
		iVar1 = func_62(unk_0x1146A9AE09CE2B14(), -2, 0, 0, 0);
	}
	if (func_806(func_7(), 1))
	{
		if (Local_104.f_34 != -1)
		{
			if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 22))
			{
				func_365(&iVar2, &uVar3, 0, 0);
				if (Local_104.f_34 == 1)
				{
					func_399(87, "GB_WINNER", "GB_BB_SS_DEL1", sVar0, iVar1, 0, iVar2, -1, -1, 2, -1);
				}
				else if (Local_104.f_34 > 1)
				{
					func_399(87, "GB_WINNER", "GB_BB_SS_DEL", sVar0, iVar1, 0, Local_104.f_34, iVar2, -1, 2, -1);
				}
				else if (Local_104.f_34 == 0)
				{
					if (Local_104.f_35 != func_14())
					{
						if (func_14() > 1)
						{
							func_399(88, "GB_WORK_OVER", "GB_BB_SS_DELL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_399(88, "GB_WORK_OVER", "GB_BB_SS_DELL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
					else if (Local_104.f_35 == func_14())
					{
						if (func_14() > 1)
						{
							func_398(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
						}
						else
						{
							func_398(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
						}
					}
				}
			}
			unk_0x191DDA30577F440A(&iLocal_86, 11);
		}
	}
	else
	{
		if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 22) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 16))
		{
			iVar4 = func_181(1, 0);
			func_365(&iVar5, &uVar6, 1, 0);
			if (iVar4 == 1)
			{
				if (func_106(1))
				{
					func_399(91, "GB_WORK_OVER", "GB_BB_SS_DES1", sVar0, iVar1, 0, iVar5, -1, -1, 2, -1);
				}
				else
				{
					func_379(91, iVar5, -1, "GB_BB_SS_SDES1", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 > 1)
			{
				if (func_106(1))
				{
					func_399(91, "GB_WORK_OVER", "GB_BB_SS_DES", sVar0, iVar1, 0, iVar4, iVar5, -1, 2, -1);
				}
				else
				{
					func_379(91, iVar4, iVar5, "GB_BB_SS_SDES", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 == 0)
			{
				if (Local_104.f_35 == 0)
				{
					if (Local_104.f_34 != func_14())
					{
						if (func_106(1))
						{
							if (func_14() > 1)
							{
								func_399(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_399(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
						}
						else if (func_14() > 1)
						{
							func_398(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
						}
						else
						{
							func_398(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
						}
					}
					else if (Local_104.f_34 == func_14())
					{
						sVar0 = func_373(func_7());
						iVar1 = func_62(func_7(), -2, 0, 0, 0);
						if (func_14() > 1)
						{
							func_399(88, "GB_WORK_OVER", "GB_BB_SS_DELIV", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_399(88, "GB_WORK_OVER", "GB_BB_SS_DELIV1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
				}
				else if (Local_104.f_35 == func_14())
				{
					if (func_14() > 1)
					{
						func_398(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
					}
					else
					{
						func_398(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
					}
				}
				else if (func_106(1))
				{
					if (func_14() > 1)
					{
						func_399(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
					else
					{
						func_399(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
				}
				else if (func_14() > 1)
				{
					func_398(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
				}
				else
				{
					func_398(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
				}
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 18))
		{
			func_398(88, "GB_WORK_OVER", "GB_BB_SS_FLEFT", 1, -1, 2, 1, 0);
		}
		func_108();
		unk_0x191DDA30577F440A(&iLocal_86, 11);
	}
}

char* func_373(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		uVar0 = func_378(&(Global_1630816[iParam0 /*597*/].f_11.f_105));
		return uVar0;
	}
	if (Global_1630816[iParam0 /*597*/].f_11.f_121 != Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_121)
	{
		uVar0 = func_376(iParam0, 0);
		return uVar0;
	}
	if (((func_138(iParam0, 28) || func_138(unk_0x1146A9AE09CE2B14(), 28)) || func_375(iParam0)) && !func_374(iParam0))
	{
		return func_376(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_40())
	{
		if (iVar1 != unk_0x1146A9AE09CE2B14())
		{
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_376(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_40())
	{
		uVar0 = func_378(&(Global_1630816[iVar1 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(uVar0))
		{
			return func_376(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_374(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_257(iParam0) };
	if (unk_0x2322DD4FBF5E4E2F())
	{
		if (unk_0x68B90AB279E39C7B(0))
		{
			if (unk_0x94D4A49E53F5209A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_40())
	{
		Var0 = { func_257(iParam0) };
		if (unk_0xE22116C6D321FECA() || unk_0x3640D836D145B814())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				return 0;
			}
		}
		else if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				if (unk_0x94D4A49E53F5209A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_376(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_131(iParam0, 1))
		{
			return func_377();
		}
	}
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACC");
}

var func_377()
{
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACCM");
}

var func_378(var uParam0)
{
	return uParam0;
}

int func_379(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return func_380(&Var0);
}

int func_380(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_396(uParam0, uParam0->f_17);
	func_393(uParam0);
	if (func_88())
	{
		func_393(uParam0);
	}
	if (func_392(uParam0->f_1))
	{
		func_385();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_384(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_385();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_382(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_384(uParam0->f_69, 128))
			{
				if (func_381(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_382(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_382(var uParam0, int iParam1)
{
	func_383(uParam0, iParam1);
}

void func_383(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_385()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_386();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_386()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_390(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_387(&(Global_2441237.f_3165.f_1), 1);
}

void func_387(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_389(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_388(0);
}

void func_388(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_389(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_390(var uParam0)
{
	func_391(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_391(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_392(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_393(var uParam0)
{
	if (func_395(uParam0->f_1))
	{
		uParam0->f_72 = func_394();
	}
}

int func_394()
{
	return 21;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_396(var uParam0, int iParam1)
{
	if (func_395(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_40() || !func_6(iParam1, 0, 1))
	{
		return;
	}
	if (func_381(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_62(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_397(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_40();
	uParam1->f_18 = func_40();
	uParam1->f_19 = func_40();
	uParam1->f_20 = func_40();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_398(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_382(&(Var0.f_69), iParam7);
	}
	return func_380(&Var0);
}

int func_399(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_40();
	iVar1 = func_40();
	iVar2 = func_40();
	return func_400(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_400(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_397(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_382(&(Var0.f_69), 4);
	return func_380(&Var0);
}

char* func_401()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_41(unk_0x1146A9AE09CE2B14());
	if (iVar0 != func_40())
	{
		if (iVar0 != unk_0x1146A9AE09CE2B14())
		{
			if (((func_138(iVar0, 28) || func_138(unk_0x1146A9AE09CE2B14(), 28)) || func_375(iVar0)) && !func_374(iVar0))
			{
				return func_376(iVar0, 0);
			}
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_376(iVar0, 0);
			}
		}
		sVar1 = func_378(&(Global_1630816[iVar0 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(sVar1))
		{
			return func_376(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_402()
{
	if ((!func_403(1, 1, 1, 0) || func_808()) || func_144(unk_0x1146A9AE09CE2B14()) == 0)
	{
		return 1;
	}
	return 0;
}

int func_403(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_454(unk_0x1146A9AE09CE2B14(), 29))
	{
		return 0;
	}
	if (func_152(unk_0x1146A9AE09CE2B14(), 21))
	{
		return 0;
	}
	if (func_152(unk_0x1146A9AE09CE2B14(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD09C9D030AFD3F25())
		{
			return 0;
		}
	}
	if (!func_453(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2D61488C347F8402())
		{
			return 0;
		}
	}
	if (func_451(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_450())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_445(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_443())
	{
		return 0;
	}
	if (func_152(unk_0x1146A9AE09CE2B14(), 0) || func_152(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if ((func_152(unk_0x1146A9AE09CE2B14(), 12) || func_152(unk_0x1146A9AE09CE2B14(), 14)) || func_152(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 0;
	}
	if (func_440(unk_0x1146A9AE09CE2B14(), 0, -1))
	{
		if (!func_413())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_412())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_411(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_410())
	{
		return 0;
	}
	if (func_409(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((func_408(unk_0x1146A9AE09CE2B14()) && func_55(unk_0x1146A9AE09CE2B14()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_407())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_406(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_405(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_158(unk_0x1146A9AE09CE2B14()))
	{
		if (func_404(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_51())
	{
		return 0;
	}
	return 1;
}

int func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_405(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_407()
{
	return Global_1683970.f_4477 != -1;
}

int func_408(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_411(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

bool func_412()
{
	return Global_99422.f_364 > 0;
}

int func_413()
{
	int iVar0;
	
	iVar0 = func_104(unk_0x1146A9AE09CE2B14());
	if (((func_439(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29) || func_438(unk_0x1146A9AE09CE2B14())) || func_437(unk_0x1146A9AE09CE2B14())) || func_432(unk_0x1146A9AE09CE2B14()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_430(unk_0x1146A9AE09CE2B14()))
	{
		if (func_205(iVar0) || func_429(iVar0))
		{
			return 1;
		}
	}
	if (func_143(unk_0x1146A9AE09CE2B14()))
	{
		if (func_429(iVar0))
		{
			return 1;
		}
	}
	if (func_428(unk_0x1146A9AE09CE2B14()))
	{
		if (func_196(iVar0))
		{
			return 1;
		}
	}
	if (func_427(unk_0x1146A9AE09CE2B14()))
	{
		if (func_195(iVar0))
		{
			return 1;
		}
	}
	if (func_426(unk_0x1146A9AE09CE2B14()))
	{
		if (func_194(iVar0))
		{
			return 1;
		}
	}
	if (func_425(unk_0x1146A9AE09CE2B14()))
	{
		if (func_424(iVar0))
		{
			return 1;
		}
	}
	if (func_423(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_422(iVar0))
		{
			if (func_57(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
		}
	}
	if (func_421(unk_0x1146A9AE09CE2B14()))
	{
		if (func_187(iVar0))
		{
			return 1;
		}
		if (func_186(iVar0))
		{
			return 1;
		}
		if (func_420())
		{
			return 1;
		}
	}
	if (func_419(unk_0x1146A9AE09CE2B14()))
	{
		if (func_418())
		{
			return 1;
		}
	}
	if (func_417(unk_0x1146A9AE09CE2B14()))
	{
		if (func_186(iVar0))
		{
			return 1;
		}
	}
	if (func_416(unk_0x1146A9AE09CE2B14()))
	{
		if (func_185(iVar0))
		{
			return 1;
		}
	}
	if (func_415(unk_0x1146A9AE09CE2B14()))
	{
		if (func_414(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_40())
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_418()
{
	return Global_2544210.f_6695;
}

int func_419(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_420()
{
	return Global_2544210.f_6694;
}

int func_421(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_423(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x6471F4759775FCA4(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_40())
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_430(int iParam0)
{
	if (func_431(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_432(int iParam0)
{
	if (func_433(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_434(unk_0x1146A9AE09CE2B14(), 0);
	}
	if (bParam1)
	{
		if (func_434(unk_0x1146A9AE09CE2B14(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_434(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_40())
	{
		if (!func_436(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x1146A9AE09CE2B14() != Global_1590744)
			{
				if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_435(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_435(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_436(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_437(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_438(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_440(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_54(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_441(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return iParam0;
	}
	if (func_442(iParam0) != -1)
	{
		iVar0 = func_54(func_442(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_81(iParam0, 0))
			{
				return func_41(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_40();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_40();
}

int func_442(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == unk_0x1146A9AE09CE2B14()) && func_6(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

int func_443()
{
	if (func_444() == 0)
	{
		return 1;
	}
	return 0;
}

int func_444()
{
	return Global_1312485.f_18;
}

bool func_445(int iParam0)
{
	return func_446(iParam0);
}

bool func_446(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_447()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_448()
{
	return Global_1312902;
}

bool func_449()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

bool func_450()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_451(int iParam0)
{
	if (func_452(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_452(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_445(iParam0))
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

bool func_453(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_454(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

void func_455(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	if (Global_1681708 != 0)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1681708, 1))
		{
			if (func_179())
			{
				if (func_456(82, "GB_INTTXT_YA", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0xC664C0067EEAB8D1(&Global_1681708, 1);
				}
			}
			else if (func_456(82, "GB_INTTXT_YA_2", 2, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0xC664C0067EEAB8D1(&Global_1681708, 1);
			}
		}
	}
}

int func_456(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_458(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			Global_8278[3 /*6*/] = { func_457(iParam0) };
			Global_8355 = iParam0;
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_457(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_458(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_471();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_470() == 0)
	{
		func_468();
		return 0;
	}
	func_467(Global_22192);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/]), sParam1, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_24 = iParam2;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_25 = iParam7;
	Global_112293.f_14139[Global_22192 /*104*/].f_26 = uParam8;
	Global_112293.f_14139[Global_22192 /*104*/].f_29 = uParam9;
	Global_112293.f_14139[Global_22192 /*104*/].f_30 = uParam12;
	Global_112293.f_14139[Global_22192 /*104*/].f_31 = uParam11;
	Global_112293.f_14139[Global_22192 /*104*/].f_28 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_33), sParam4, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_50), sParam5, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_83), sParam15, 64);
	if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
		Global_8374 = 4;
		func_466(0);
		func_466(2);
		func_466(1);
	}
	else
	{
		func_471();
		switch (iParam16)
		{
			case 3:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[Global_19798] = 1;
				break;
			
			case 0:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19798)
			{
				case 0:
					func_466(0);
					Global_8374 = 0;
					break;
				
				case 1:
					func_466(1);
					Global_8374 = 1;
					break;
				
				case 2:
					func_466(2);
					Global_8374 = 2;
					break;
				
				case 3:
					func_466(3);
					Global_8374 = 3;
					break;
				
				default:
					Global_8374 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
		{
			Global_112293.f_14049[0 /*20*/].f_17 = 1;
			Global_112293.f_14049[1 /*20*/].f_17 = 1;
			Global_112293.f_14049[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112293.f_14049[Global_19798 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112293.f_14049[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112293.f_14049[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112293.f_14049[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22194[Global_22192] = 0;
	if (bParam10)
	{
		func_471();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_448())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_465(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_461(1);
			func_465(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_459(uParam0, sParam1);
	return 1;
}

void func_459(var uParam0, char* sParam1)
{
	if (!func_460())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, 1654525105, unk_0x15173FB88ABC94F9(sParam1), 0);
}

int func_460()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_40())
	{
		return 0;
	}
	if (func_158(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

void func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_464(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_463(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_462(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_462(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xAB6A270F84A8781E(uParam7))
	{
		func_463(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_463(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_463(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_463(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_463(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_463(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

bool func_464(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_465(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_466(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112293.f_14049[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_467(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1947D86A2BB06F8D();
	uVar1 = unk_0x942C8DFFBBCB3EB4();
	uVar2 = unk_0xCA86FAB7FADC8353();
	uVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	uVar5 = unk_0x77D50D8E8FF785AC();
	Global_112293.f_14139[iParam0 /*104*/].f_18 = uVar0;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_469(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
		{
			Global_22192 = iVar2;
		}
		iVar2++;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_24 = 1;
}

int func_469(struct<6> Param0, struct<6> Param1)
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

int func_470()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0)
		{
			Global_22192 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0 || Global_112293.f_14139[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_469(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
			{
				Global_22192 = iVar2;
			}
		}
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22192 == 34)
	{
		return 0;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 0;
	return 1;
}

void func_471()
{
	if (func_464(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_472();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_472()
{
	func_473();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_473()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_476(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_475(unk_0x7D2B9E6A64637269());
			if (func_474(iVar0) && (!func_464(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_474(Global_112293.f_2361.f_539.f_4321))
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

bool func_474(int iParam0)
{
	return iParam0 < 3;
}

int func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_476(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_476(int iParam0)
{
	if (func_474(iParam0))
	{
		return func_477(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_477(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_478(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_594(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_592() || iParam2 == 28)
	{
		if (func_549(uParam1, iParam2, uParam3, Global_1574200, 0, func_590(), iParam7))
		{
			func_548(1);
			if ((!func_547() && !func_546()) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
			{
				if (func_545())
				{
					func_543();
				}
				else
				{
					unk_0x53CE6C5893F65093(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_542(1);
						Global_1574200 = 0;
						iVar19 = -1;
						if (Global_1574421 != 1)
						{
							func_541(uParam1, 0, 0);
							if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
							{
								unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_6(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
									if (!func_98(iVar3, 0))
									{
										if ((func_537(iVar3) || Global_2426865[iVar3 /*449*/].f_245 != -1) || func_536(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_535(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_534(unk_0x1146A9AE09CE2B14(), 0) && func_104(unk_0x1146A9AE09CE2B14()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_533())
							{
								if (func_6(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
								}
								else
								{
									iVar3 = func_40();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_532(iVar3) && func_529(iVar3, iParam2)) && func_6(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
								Var6 = { func_524(iVar3) };
								if (iVar3 == unk_0x1146A9AE09CE2B14())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xF04DBC0AC5A2AB23(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_257(iVar3) };
								iVar5 = func_518(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
								}
								Global_1574200++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_533())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_513(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_512(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_511(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_510(iParam5))
								{
									func_509(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_509(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x191DDA30577F440A(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							if (func_6(iVar3, 0, 1) && !unk_0x234B68AC2E35ED5A(iVar14, iVar3))
							{
								iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							}
							else
							{
								iVar3 = func_40();
							}
							if (func_532(iVar3))
							{
								if (func_6(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
									Var6 = { func_524(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_257(iVar3) };
									iVar5 = func_518(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
									}
									Global_1574200++;
									iVar16 = func_511(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_492(iVar3, unk_0xF04DBC0AC5A2AB23(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							func_489(uParam3, uParam1, iParam2);
						}
						func_488(&(uParam3->f_21));
						func_487();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
						{
							func_486(uParam3, uParam1);
							func_485(uParam1, 0, 1);
							unk_0x191DDA30577F440A(&(uParam3->f_33), 7);
						}
						func_486(uParam3, uParam1);
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							unk_0x191DDA30577F440A(&(uParam3->f_33), 11);
						}
						if (func_481(uParam3))
						{
							Global_1574421 = 1;
						}
						func_479(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xDAE4BC89A198A6AF(*uParam1))
					{
						unk_0x0F33095580A670CE(7);
						unk_0x43D93129BD1AD792(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0F33095580A670CE(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_487();
			func_542(0);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
			}
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 10))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x17552FF90A99ABEA();
}

void func_479(var uParam0)
{
	if (!func_140(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_488(&(uParam0->f_21));
		func_480(0);
	}
}

void func_480(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_481(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xC502CD39B4994F3A(uParam0->f_37);
	if (iVar3 != func_40() && func_6(iVar3, 0, 1))
	{
		Var2 = { func_257(iVar3) };
		iVar1 = func_484(uParam0, uParam0->f_37);
		if (func_483(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_482(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_482(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_482(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_482(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x9FA24EA712B9DC35(&Var2))
						{
							iVar4 = 1;
							func_482(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_482(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_482(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

var func_484(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_485(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x704F8697BB515627(*uParam0, "COLLAPSE"))
	{
		unk_0x9D7453DF8B7E9E0B(iParam1);
		unk_0x392841D58D2EED1D();
	}
	if (iParam2 == 1)
	{
		if (unk_0x704F8697BB515627(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_486(var uParam0, var uParam1)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_33, 10))
	{
		unk_0x704F8697BB515627(*uParam1, "SET_HIGHLIGHT");
		unk_0x9E3D03981E2E9AD9(uParam0->f_35);
		unk_0x392841D58D2EED1D();
		unk_0x191DDA30577F440A(&(uParam0->f_33), 10);
	}
}

void func_487()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_488(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_489(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar0);
		if (iVar2 != func_40())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_491(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_490(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_490(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		if (unk_0x704F8697BB515627(*uParam0, "SET_ICON"))
		{
			unk_0x9E3D03981E2E9AD9(iParam1);
			unk_0x9E3D03981E2E9AD9(iParam2);
			if (iParam2 == 65)
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

int func_491(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_492(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_508() && iParam4 < func_507())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x704F8697BB515627(*uParam2, sVar1))
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_506("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(iParam10);
			}
			func_506(sParam1);
			unk_0x9E3D03981E2E9AD9(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_506("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(65);
			}
			unk_0x9E3D03981E2E9AD9(-1);
			func_506("");
			if (uParam3->f_108 == 6)
			{
				func_506("");
			}
			else
			{
				func_506(&sParam5);
			}
			func_496(uParam3, iParam0);
			unk_0x386C67F2B8055D74(sParam9);
			unk_0x386C67F2B8055D74(sParam9);
			if (func_495(uParam3))
			{
				func_463("DPAD_FRIEND");
			}
			else if (func_494(uParam3))
			{
				func_463("DPAD_FRIEND");
			}
			else if (func_493(uParam3))
			{
				func_463("DPAD_CREW");
			}
			else
			{
				func_463("");
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

bool func_493(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 6);
}

bool func_494(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 5);
}

int func_495(var uParam0)
{
	if (func_494(uParam0) && func_493(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, int iParam1)
{
	if (func_505(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(121);
	}
	else if (func_500(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(122);
	}
	else if (((unk_0x234B68AC2E35ED5A(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x234B68AC2E35ED5A(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		unk_0x9E3D03981E2E9AD9(123);
	}
	else
	{
		if (func_497())
		{
			uParam0->f_36 = 0;
		}
		unk_0x9D7453DF8B7E9E0B(uParam0->f_36);
	}
}

int func_497()
{
	if (unk_0xE45310E861787FC2())
	{
		if (func_498() || func_90())
		{
			return 1;
		}
	}
	return 0;
}

int func_498()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_90();
	}
	return func_499(Global_4456448.f_85535);
}

int func_499(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_500(int iParam0)
{
	if ((func_6(iParam0, 0, 1) && func_501()) && func_131(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_501()
{
	if (func_160(unk_0x1146A9AE09CE2B14()) || func_504())
	{
		if (!func_502(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	return 1;
}

int func_502(int iParam0)
{
	if (func_503(iParam0) == 236 || func_503(iParam0) == 150)
	{
		return func_148(iParam0);
	}
	return 0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_504()
{
	switch (func_104(unk_0x1146A9AE09CE2B14()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_505(int iParam0)
{
	if (func_497())
	{
		if (func_6(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_6(iParam0, 0, 1) && func_501()) && func_61(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_506(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

int func_507()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_508()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_509(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_508() && iParam3 < func_507())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xDAE4BC89A198A6AF(*uParam1))
		{
			if (unk_0x704F8697BB515627(*uParam1, sVar1))
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
				if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_506("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					func_463(sParam16);
				}
				else
				{
					func_506(&(uParam2->f_1));
				}
				unk_0x9E3D03981E2E9AD9(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_506("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(65);
				}
				if (iParam12 == 1)
				{
					unk_0x9E3D03981E2E9AD9(iVar0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(-1);
				}
				if (func_533())
				{
					func_506("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_TWO_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21300A5159EC89B1(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x38CD3C04C877C35F(iParam10);
					}
					unk_0x1896EC0B030A48A2(&(uParam2->f_104));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x35CA0C119E6A2A27("FM_AE_CASH");
					unk_0xDA0C49A6D01B065C(iParam10, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x35CA0C119E6A2A27("FM_AE_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						unk_0x35CA0C119E6A2A27("FM_NG_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
					{
						func_463(&(uParam2->f_104));
					}
					else
					{
						func_506("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam14, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (fParam13 != -1f)
				{
					unk_0x35CA0C119E6A2A27("NUMBER");
					unk_0x21300A5159EC89B1(fParam13, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (iParam10 != -1)
				{
					unk_0x9E3D03981E2E9AD9(iParam10);
				}
				else
				{
					func_506("");
				}
				if (uParam2->f_108 == 6)
				{
					func_506("");
				}
				else
				{
					func_506(&sParam4);
				}
				func_496(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB6A270F84A8781E(sParam8))
				{
					func_506("");
					func_506("");
				}
				else
				{
					unk_0x386C67F2B8055D74(sParam8);
					unk_0x386C67F2B8055D74(sParam8);
				}
				if (func_495(uParam2))
				{
					func_463("DPAD_FRIEND");
				}
				else if (func_494(uParam2))
				{
					func_463("DPAD_FRIEND");
				}
				else if (func_493(uParam2))
				{
					func_463("DPAD_CREW");
				}
				else
				{
					func_463("");
				}
				unk_0x392841D58D2EED1D();
			}
		}
	}
}

int func_510(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_511(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_160(iParam0)) && !func_158(iParam0))
	{
		iVar0 = func_394();
	}
	iVar1 = func_80(iParam0);
	if (!iVar1 == -1)
	{
		return func_78(iVar1);
	}
	return iVar0;
}

char* func_512(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA700E2BE6F531543())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_513(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_517(iParam3))
	{
		*fParam1 = (func_514(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_510(iParam3))
	{
		*fParam1 = (func_514(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_516(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_515(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_515(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_516(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = func_521(iParam0);
	if (iVar0 == -1)
	{
		func_519(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_519(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_521(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_520(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_520(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_521(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEC92E04062037949(Global_1391551[iVar0 /*5*/].f_2) && unk_0x80B82FD1974E28E0(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_522(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_522(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1391712)
	{
		Global_1391551[iVar2 /*5*/] = { Global_1391551[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_523(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_523(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_40();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

struct<4> func_524(int iParam0)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Global_2518253 = { func_257(iParam0) };
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (func_483(Global_2518253))
			{
				if (!unk_0x94D4A49E53F5209A(&Global_2518253))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x68B90AB279E39C7B(0))
		{
			return Var0;
		}
		if (func_528(&Global_2518253))
		{
			Global_2518183 = { func_526(iParam0) };
			func_525(&Global_2518183, &Var0);
		}
	}
	return Var0;
}

void func_525(var uParam0, var uParam1)
{
	unk_0xDE25303DF0CA8E75(uParam0, 35, uParam1);
}

struct<35> func_526(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_527(iParam0))
	{
		return Global_1312934[unk_0x1146A9AE09CE2B14() /*35*/];
	}
	Var0 = { func_257(iParam0) };
	unk_0xEDDAF8F99F371228(&Var1, 35, &Var0);
	return Var1;
}

int func_527(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return 1;
	}
	return 0;
}

int func_528(var uParam0)
{
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_529(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_159(iParam0) || func_531(iParam0)) || func_530(iParam0))
		{
			return 0;
		}
	}
	if (!func_453(iParam0))
	{
		return 0;
	}
	if ((!func_537(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_536(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_530(int iParam0)
{
	if (func_159(iParam0))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8);
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 10) || unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

int func_532(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_98(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_533()
{
	switch (func_104(unk_0x1146A9AE09CE2B14()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_503(unk_0x1146A9AE09CE2B14()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_158(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_104(unk_0x1146A9AE09CE2B14()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_502(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_121(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_121(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_6(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_98(iVar1, 0))
			{
				if ((func_537(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_536(iVar1))
				{
					if (func_182(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_536(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_537(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_6(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		return 0;
	}
	if (!func_538(iParam0))
	{
		return 0;
	}
	if ((unk_0xEBB066F8EADD0C1F(iParam0, unk_0x1146A9AE09CE2B14()) || func_104(iParam0) == 233) || func_104(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_538(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_539(unk_0x1146A9AE09CE2B14());
	bVar1 = func_539(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_539(int iParam0)
{
	return func_540(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_540(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

void func_541(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x9E3D03981E2E9AD9(iParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x392841D58D2EED1D();
	}
}

void func_542(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_543()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
	{
		if (func_162())
		{
			func_544();
		}
	}
}

void func_544()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_382(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_545()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0) && func_162())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1) && func_162())
	{
		return 1;
	}
	return 0;
}

int func_546()
{
	if (func_162())
	{
		if (func_381(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_547()
{
	if (func_162())
	{
		if (func_395(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_548(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_549(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_589(iParam1);
	fVar4 = func_588();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_587())
		{
			if (func_586() > 0 && Global_1574202)
			{
				unk_0xD8A14DD983454D11();
				unk_0x643A5EAD42A4060C(fVar4);
				unk_0xEFD424FDD55A6EC7(18);
				if (unk_0xE8FFE38E2BA32BD6())
				{
					unk_0xBD35EB504610C23C();
				}
				unk_0xEFD424FDD55A6EC7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_576())
		{
			func_575(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
	{
		func_575(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_140(&(uParam2->f_19)))
	{
		if (func_586() == 1)
		{
			func_574(bVar3, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_575(uParam0, uParam2, 0);
			unk_0x191DDA30577F440A(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_140(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE8FFE38E2BA32BD6())
		{
			unk_0xBD35EB504610C23C();
		}
		unk_0xEFD424FDD55A6EC7(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_586() == 0 && !bParam5))
		{
			func_575(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_573();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD8A14DD983454D11();
				}
				unk_0xEFD424FDD55A6EC7(18);
			}
			if (!unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_573();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD8A14DD983454D11();
					}
					unk_0xEFD424FDD55A6EC7(18);
				}
				unk_0x643A5EAD42A4060C(fVar4);
				if (func_574(bVar3, uParam0, 0))
				{
					func_541(uParam0, 0, 0);
					uVar1 = func_571(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_569(iParam1) };
					if (bParam4)
					{
						func_566(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_559(uParam0, func_563(uParam2), func_560(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_557(uParam2);
						if (!unk_0xAB6A270F84A8781E(uParam6))
						{
							sVar6 = sParam6;
						}
						func_555(uParam0, sVar6, func_556(), -1);
					}
					else if (func_497())
					{
						uParam2->f_34 = Global_1574201;
						func_566(uParam0, uVar1, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_550(iParam1);
						uParam2->f_34 = Global_1574201;
						func_566(uParam0, uVar1, "", 0, iVar5, Global_1574201, 1);
					}
					else
					{
						iVar5 = func_550(iParam1);
						func_566(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x191DDA30577F440A(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				unk_0x643A5EAD42A4060C(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						unk_0xC664C0067EEAB8D1(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_554())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_553(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 20;
			}
			if (func_552(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_551(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = 2;
	}
	if (func_279())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_551(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_552(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_553(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_554()
{
	return Global_4456448.f_1 == 0;
}

void func_555(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_463(sParam1);
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_463("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_556()
{
	switch (func_104(unk_0x1146A9AE09CE2B14()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_557(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_104(unk_0x1146A9AE09CE2B14()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_124())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_130(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_130(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_558(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_559(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(uParam2))
		{
			func_463(uParam1);
		}
		else if (func_503(unk_0x1146A9AE09CE2B14()) == 133)
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT_C");
			unk_0x1896EC0B030A48A2(uParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_463("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_560(var uParam0)
{
	int iVar0;
	
	iVar0 = func_503(unk_0x1146A9AE09CE2B14());
	if (func_562())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_561())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_561()
{
	if (func_503(unk_0x1146A9AE09CE2B14()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

bool func_562()
{
	return Global_1590781;
}

char* func_563(var uParam0)
{
	int iVar0;
	
	iVar0 = func_503(unk_0x1146A9AE09CE2B14());
	if (func_562())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_565() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_565() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_561())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_564() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_564()
{
	return Global_2544210.f_5115;
}

int func_565()
{
	if (func_503(unk_0x1146A9AE09CE2B14()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_566(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_506(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x35CA0C119E6A2A27(uParam1);
			unk_0x38CD3C04C877C35F(iParam5);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_463(sParam1);
		}
		if (func_587() && iParam6)
		{
			if (func_568())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x35CA0C119E6A2A27("LBD_DPD_CNT");
			unk_0x38CD3C04C877C35F(iVar0);
			unk_0x38CD3C04C877C35F(iVar1);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_463(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (func_567(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x9E3D03981E2E9AD9(166);
			}
			else if (func_88())
			{
				unk_0x9E3D03981E2E9AD9(220);
			}
		}
		unk_0x392841D58D2EED1D();
	}
}

int func_567(int iParam0)
{
	if (func_553(iParam0) || func_552(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_568()
{
	return Global_1574202;
}

struct<4> func_569(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_570(unk_0x1146A9AE09CE2B14()) || func_551(unk_0x1146A9AE09CE2B14()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_497() && unk_0xE45310E861787FC2())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_570(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_571(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_497() || unk_0xAB6A270F84A8781E(uParam1)))
	{
		uVar0 = func_572();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_572()
{
	if (unk_0xC33B9889A311ABB0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5381ADE2AB48C34C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8E3B6139DCC5E397())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4FCCBCCCB1A46E9F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_573()
{
	Global_42937 = 1;
}

bool func_574(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_matchmaking_card");
	}
	return unk_0xDAE4BC89A198A6AF(*uParam1);
}

void func_575(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_487();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_140(&(uParam1->f_19)))
		{
			func_488(&(uParam1->f_19));
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 5);
		}
	}
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x3D9BC07C93913E04(uParam0);
	}
	if (unk_0x234B68AC2E35ED5A(uParam1->f_33, 0))
	{
		unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 0);
	}
	unk_0x643A5EAD42A4060C(0f);
}

int func_576()
{
	if (func_585())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (!func_583())
	{
		return 0;
	}
	if (!func_443())
	{
		return 0;
	}
	if (func_582(8, -1))
	{
		return 0;
	}
	if (func_586() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	else if (!func_452(unk_0x1146A9AE09CE2B14(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_581(1) || func_579(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (func_578() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_96(unk_0x1146A9AE09CE2B14()) && !func_578())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_288(0))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_577(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_577(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_578()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_579(bool bParam0)
{
	if (unk_0x4AA05D0E8631839E())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_580(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5C6675393464A814(0, 25) || unk_0x5C6675393464A814(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (unk_0x5C6675393464A814(0, 19) || (!bParam0 && unk_0x51794501073F0A33(0, 19)))
	{
		return 1;
	}
	if (unk_0x3640D836D145B814())
	{
		if (((unk_0x5C6675393464A814(0, 166) || unk_0x5C6675393464A814(0, 167)) || unk_0x5C6675393464A814(0, 168)) || unk_0x5C6675393464A814(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x51794501073F0A33(0, 166) || unk_0x51794501073F0A33(0, 167)) || unk_0x51794501073F0A33(0, 168)) || unk_0x51794501073F0A33(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_580(int iParam0)
{
	int iVar0;
	
	if (unk_0x8ACA9ACB93EC151E())
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_581(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

bool func_582(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

int func_583()
{
	if (func_584())
	{
		return 1;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB())
	{
		return 0;
	}
	if (unk_0xA2DFFBCD9CFB74A3())
	{
		return 0;
	}
	return 1;
}

bool func_584()
{
	return Global_1312458;
}

bool func_585()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_586()
{
	return Global_1379108.f_68;
}

int func_587()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_588()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x037D8E0CFB994CB5()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_590()
{
	if (func_591(unk_0x1146A9AE09CE2B14()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_591(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (func_98(iParam0, 0))
		{
			return unk_0x206C14525FF9EA88(iParam0);
		}
	}
	return 0;
}

int func_592()
{
	if (func_590())
	{
		return 1;
	}
	if (func_530(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_562())
	{
		return 1;
	}
	if (func_160(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_503(unk_0x1146A9AE09CE2B14()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_593(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_593(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_593(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_593(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_594(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_160(unk_0x1146A9AE09CE2B14()) && !func_158(unk_0x1146A9AE09CE2B14())) && !func_502(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_105(unk_0x1146A9AE09CE2B14(), 0) && func_158(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
		if (func_144(unk_0x1146A9AE09CE2B14()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_595()
{
	struct<14> Var0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xC664C0067EEAB8D1(&iLocal_86, 4);
		unk_0xC664C0067EEAB8D1(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 14);
		unk_0xC664C0067EEAB8D1(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 15);
	}
	iVar1 = 0;
	while (iVar1 < func_14())
	{
		if (unk_0x159BC3DDA80D71AC(func_28(iVar1)))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1) && !unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, iVar1))
			{
				if (func_17() < 3)
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(func_28(iVar1)), 0))
					{
						func_607();
						unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 15);
						if (unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(func_28(iVar1)), -1, 0) == unk_0x7D2B9E6A64637269())
						{
							unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 14);
						}
						if (!unk_0x234B68AC2E35ED5A(iLocal_86, 4))
						{
							if (unk_0x591190E69BE43117(unk_0x854C404AEB476240(func_28(iVar1)), func_27(iVar1), IntToFloat(func_606()), IntToFloat(func_606()), IntToFloat(func_606()), 0, 1, 0))
							{
								unk_0xC664C0067EEAB8D1(&iLocal_86, 8);
								unk_0x191DDA30577F440A(&iLocal_86, 4);
							}
						}
						iVar2 = 0;
						while (iVar2 < func_14())
						{
							if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2 + 4))
							{
								if (unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 16))
								{
									if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0 && unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(func_28(iVar1)), -1, 0) == unk_0x7D2B9E6A64637269())
									{
										if (unk_0x591190E69BE43117(unk_0x854C404AEB476240(func_28(iVar1)), func_605(iVar2), 2f, 1f, 2f, 1, 1, 0))
										{
											func_603(unk_0x854C404AEB476240(func_28(iVar1)), 4f, 1, 0.5f, 0, 0, 0);
											unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar1);
											unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar2 + 4);
											unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 18);
											unk_0xC664C0067EEAB8D1(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 14);
											unk_0xC664C0067EEAB8D1(&iLocal_86, 4);
											unk_0xC664C0067EEAB8D1(&iLocal_86, 8);
											Var0.f_10 = unk_0x1146A9AE09CE2B14();
											Var0.f_11 = func_7();
											Var0.f_2 = -1227143096;
											func_12(Var0, func_13(1));
											iVar2 = func_14();
										}
									}
								}
								else if (unk_0x591190E69BE43117(unk_0x854C404AEB476240(func_28(iVar1)), func_605(iVar2), IntToFloat(func_602()), IntToFloat(func_602()), IntToFloat(func_602()), 0, 1, 0))
								{
									unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
									if (func_35())
									{
										unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_601(), 0);
									}
									else
									{
										unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_600(), 0);
									}
									unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
									unk_0xC664C0067EEAB8D1(&iLocal_86, 4);
									unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 16);
									unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
								}
							}
							iVar2++;
						}
					}
				}
			}
			else
			{
				func_596(unk_0x854C404AEB476240(func_28(iVar1)), &(uLocal_106[iVar1]), 0, 1);
			}
		}
		iVar1++;
	}
}

int func_596(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_598(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0xC502CD39B4994F3A(iVar0);
				if (func_6(iVar1, 0, 1))
				{
					if (unk_0xF41EB7643E61A928(unk_0xD56332194D622ECE(iVar1), iParam0, 0))
					{
						func_597(func_166(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x551F46B3C7DFB654();
		}
	}
	else if (!unk_0xA6BE8F025C6B653F(iParam0))
	{
		unk_0x13F856602366FE17(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0xBB18EA5F1620FF5F(iParam0, 1);
		}
		unk_0xA2C015B68CE01357(iParam0, 0);
		if (bParam2)
		{
			unk_0x8F160110753EB17B(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_597(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = -1005623606;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x2053F6ACFD4ED4BC();
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 9, iParam0);
	}
}

int func_598(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3CF5ADE443D18312(uParam0) + 1;
	if (iParam4 || !unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_599(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x7D2B9E6A64637269())
				{
				}
				else if (bParam2)
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_40()) && func_6(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x6C9038EC46DA62DE(unk_0xCB567ED25393C1DF(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_599(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9B73EB6255D4AE81(uParam0, iParam1, uParam3))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, iParam1);
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x4E8DA737B686529A(iVar0, 451360105) == 1 || unk_0x4E8DA737B686529A(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xD6E677FAD7521410(iParam0, 0), unk_0xD6E677FAD7521410(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

var func_600()
{
	return Global_262145.f_12645;
}

var func_601()
{
	return Global_262145.f_12646;
}

int func_602()
{
	return Global_262145.f_12647;
}

int func_603(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam5)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 68, 1);
	}
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 138, 1);
	unk_0x366E7F593105797F(0, 136, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 107, 1);
	unk_0x366E7F593105797F(0, 110, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 87, 1);
	unk_0x366E7F593105797F(0, 88, 1);
	unk_0x366E7F593105797F(0, 113, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 117, 1);
	unk_0x366E7F593105797F(0, 118, 1);
	unk_0x366E7F593105797F(0, 119, 1);
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 131, 1);
	unk_0x366E7F593105797F(0, 132, 1);
	unk_0x366E7F593105797F(0, 123, 1);
	unk_0x366E7F593105797F(0, 126, 1);
	unk_0x366E7F593105797F(0, 129, 1);
	unk_0x366E7F593105797F(0, 130, 1);
	unk_0x366E7F593105797F(0, 133, 1);
	unk_0x366E7F593105797F(0, 134, 1);
	unk_0x042D3F56FFA48394();
	func_604(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDFB7BFA6482FEE1E();
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_604(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x45A445014B256CB5(iParam0))
		{
			if (unk_0x7FFAB542797E5F31(iParam0))
			{
				unk_0x4AE9893CBA452EC0(iParam0, 0);
			}
		}
	}
}

Vector3 func_605(int iParam0)
{
	return Local_104.f_36[iParam0 /*3*/];
}

int func_606()
{
	return Global_262145.f_12648;
}

void func_607()
{
	if (!func_608(unk_0x1146A9AE09CE2B14()))
	{
		func_161(25);
	}
}

bool func_608(int iParam0)
{
	return func_138(iParam0, 25);
}

void func_609()
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, 17))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 16))
	{
		if (func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (unk_0x8E9D6E2DA3B756D5() != func_611())
			{
				unk_0x20D884FB6567BAD5(func_611());
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_86, 8))
			{
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
				{
					if (func_35())
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_611(), 0);
					}
					else
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_610(), 0);
					}
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
					unk_0x191DDA30577F440A(&iLocal_86, 8);
				}
			}
			else
			{
				unk_0x60B6E503C771D350(unk_0x1146A9AE09CE2B14());
				unk_0xA4A022C8F062BB1D(unk_0x1146A9AE09CE2B14());
			}
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&iLocal_86, 8);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 17))
	{
		if (!func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			unk_0x191DDA30577F440A(&iLocal_86, 7);
		}
		else if (unk_0x234B68AC2E35ED5A(iLocal_86, 7))
		{
			if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				if (iLocal_93 > 0)
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), iLocal_93, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
				}
				unk_0xC664C0067EEAB8D1(&iLocal_86, 7);
			}
		}
		else
		{
			iVar0 = unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14());
			if (iVar0 == 0)
			{
				unk_0xC664C0067EEAB8D1(&iLocal_86, 8);
				unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 17);
			}
			else if (iVar0 != iLocal_93)
			{
				iLocal_93 = iVar0;
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(iLocal_86, 4) && !unk_0x234B68AC2E35ED5A(iLocal_86, 8))
	{
		if (func_35())
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_611(), 0);
		}
		else
		{
			unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), func_610(), 0);
		}
		unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x191DDA30577F440A(&iLocal_86, 8);
	}
}

var func_610()
{
	return Global_262145.f_12643;
}

int func_611()
{
	return Global_262145.f_12644;
}

void func_612()
{
	if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 13))
	{
		if (func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), func_27(0), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 13);
			}
		}
		if (unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 15) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 14))
		{
			unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 13);
		}
	}
}

void func_613()
{
	struct<2> Var0;
	
	if (!unk_0x234B68AC2E35ED5A(iLocal_86, 9))
	{
		switch (func_43())
		{
			case 0:
				StringCopy(&Var0, "GB_INTTXT_BOB0", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_INTTXT_BOB1", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_INTTXT_BOB2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_INTTXT_BOB3", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "GB_INTTXT_BOB4", 16);
				break;
			
			case 5:
				StringCopy(&Var0, "GB_INTTXT_BOB5", 16);
				break;
		}
		if (func_14() == 1)
		{
			StringConCat(&Var0, "1", 16);
		}
		if (func_456(82, &Var0, 2, 0, 0, 0, 0, 1, 0, 1))
		{
			unk_0x191DDA30577F440A(&iLocal_86, 9);
		}
	}
}

void func_614(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_160(unk_0x1146A9AE09CE2B14()) && !func_159(unk_0x1146A9AE09CE2B14())) && !unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 8)) && (func_148(unk_0x1146A9AE09CE2B14()) || func_147(unk_0x1146A9AE09CE2B14()))) || func_656(Param1))
	{
		return;
	}
	Global_1681713 = { Param1 };
	fVar0 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Param1);
	func_654(iParam0, fVar0);
	if (unk_0xA300BD5F71A8C704() && unk_0xC62ED852B1172A41() == 15)
	{
		if (func_146(unk_0x1146A9AE09CE2B14()) || func_653(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0xE7C97806E87E54EE(1344549371))
			{
				unk_0x8C07DE9C165DA375(1344549371);
			}
		}
		else if (unk_0xE7C97806E87E54EE(1344549371))
		{
			unk_0xDB94CFF813F20EA8(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_152(unk_0x1146A9AE09CE2B14(), 21) || func_152(unk_0x1146A9AE09CE2B14(), 25)))
		{
			func_652(Param1, 1, 0);
		}
		if (!*uParam2 && func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			*uParam2 = 1;
			if (func_651(iParam0))
			{
				unk_0x5E84945E26CAEF1F(func_650(iParam0));
				if (func_649(iParam0, -1))
				{
					unk_0x20D884FB6567BAD5(0);
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 1);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 1);
					}
					unk_0x191DDA30577F440A(&(Global_1681713.f_3), 0);
				}
			}
			if (func_648(iParam0))
			{
				fVar1 = func_647(iParam0);
				if (fVar1 != 1f)
				{
					func_643(fVar1);
					unk_0x191DDA30577F440A(&(Global_1681713.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_642(iParam0) && func_146(unk_0x1146A9AE09CE2B14()))
				{
					func_640(1);
					func_639(2);
				}
			}
			func_161(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_138(unk_0x1146A9AE09CE2B14(), 19))
			{
				func_151(19);
			}
		}
		if (*uParam2 && func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			*uParam2 = 0;
			if (func_651(iParam0))
			{
				if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 0))
				{
					unk_0x5E84945E26CAEF1F(1f);
					unk_0x20D884FB6567BAD5(5);
					unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 0);
				}
			}
			if (func_648(iParam0))
			{
				func_638();
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 1);
			}
			if (iParam5 && !func_160(unk_0x1146A9AE09CE2B14()))
			{
				if (func_104(unk_0x1146A9AE09CE2B14()) != 152)
				{
					func_616();
				}
			}
			if (func_288(2))
			{
				func_640(0);
				func_615(2);
			}
		}
	}
}

void func_615(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_616()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_24), &Global_2409343, 2);
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_26), &Global_2409345, 19);
	func_636();
	func_619(1, 1, 0);
	func_617();
}

void func_617()
{
	func_618(0, 0);
}

void func_618(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_619(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_635();
	}
	if (!bParam2)
	{
		func_622(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_621(0);
	func_620();
}

void func_620()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == unk_0x62D18D65FE22FF39())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_621(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_622(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_634())
		{
			func_633();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_631();
		func_626(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_623();
	}
}

void func_623()
{
	if (func_634() && !func_625())
	{
		func_633();
	}
	if (func_625())
	{
		func_624();
	}
	else
	{
		func_631();
		func_626(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_624()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_625()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_40())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_627())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_627()
{
	if ((((((func_104(unk_0x1146A9AE09CE2B14()) == 229 || func_104(unk_0x1146A9AE09CE2B14()) == 191) || func_630()) || func_629()) || func_405(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_628(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_628(int iParam0)
{
	if (func_148(iParam0))
	{
		return 1;
	}
	if (func_158(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_629()
{
	return Global_1574420;
}

int func_630()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_631()
{
	if (func_634() && !func_625())
	{
		func_633();
	}
	func_632();
	Global_2405077.f_713 = 0;
}

void func_632()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_633()
{
	if (func_625())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_634()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_635()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_636()
{
	func_637();
}

void func_637()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

void func_638()
{
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && Global_2544210.f_5186 < 1f)
		{
			return;
		}
	}
	Global_2544210.f_5187 = -1;
	Global_2544210.f_5186 = 1f;
}

void func_639(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_640(int iParam0)
{
	if (func_641() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_641()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_643(float fParam0)
{
	float fVar0;
	
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_644())
	{
		return;
	}
	fVar0 = (Global_2544210.f_5186 - fParam0);
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && unk_0x0BCA9ADE67DF9DD8(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2544210.f_5186 = fParam0;
	Global_2544210.f_5187 = unk_0x62D18D65FE22FF39();
}

int func_644()
{
	switch (func_646())
	{
		case 0:
			return func_645();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_645()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_646()
{
	return Global_31345;
}

float func_647(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	if (func_357(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_649(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_650(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_652(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405077.f_45.f_49 = { Param0 };
	Global_2405077.f_45.f_52 = iParam1;
	Global_2405077.f_45.f_53 = iParam2;
}

int func_653(int iParam0)
{
	if (func_82(iParam0))
	{
		if (func_146(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_654(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_655(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_607();
	}
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12700;
		
		case 142:
			return Global_262145.f_12688;
		
		case 157:
			return Global_262145.f_12655;
		
		case 159:
			return Global_262145.f_12638;
		
		case 162:
			return Global_262145.f_12749;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_656(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_657()
{
	struct<3> Var0;
	int iVar1;
	
	if (func_3(&uLocal_94, 5000, 0))
	{
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if (unk_0x159BC3DDA80D71AC(func_28(iVar1)) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1))
			{
				if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(func_28(iVar1))) && unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
				{
					if (func_6(unk_0x1146A9AE09CE2B14(), 1, 1))
					{
						Local_90 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
					}
					if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(func_28(iVar1)), 0))
					{
						if (func_656(Var0))
						{
							Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(func_28(iVar1)), 1) };
							Local_91 = { Var0 };
						}
						else if (vdist(Local_90, Var0) > vdist(Local_90, unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(func_28(iVar1)), 1)))
						{
							Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(func_28(iVar1)), 1) };
						}
					}
				}
			}
			iVar1++;
		}
		Local_91 = { Var0 };
		func_488(&uLocal_94);
	}
}

void func_658()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 13) && func_806(func_7(), 1))
	{
		if (!unk_0x575B7C28D81C0B4D(uLocal_89))
		{
			uLocal_89 = unk_0x27E44C95E1D1461C(func_27(0));
			func_660(&uLocal_89, 12);
			unk_0x13CC211F9F7ACE7F(uLocal_89, 1);
			unk_0x1EF92774F7B1187E(uLocal_89, func_659(12));
		}
	}
	else
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_89))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_89);
		}
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if ((((unk_0x159BC3DDA80D71AC(func_28(iVar1)) && !unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(func_28(iVar1)), 0)) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(func_28(iVar1)), 0)) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1)) && !func_402())
			{
				if (!unk_0x575B7C28D81C0B4D(uLocal_87[iVar1]))
				{
					uLocal_87[iVar1] = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(func_28(iVar1)));
					unk_0x252BE56DB93DF816(uLocal_87[iVar1], 461);
					if (func_806(func_7(), 1))
					{
						func_660(&(uLocal_87[iVar1]), 9);
					}
					else
					{
						func_660(&(uLocal_87[iVar1]), 6);
					}
					unk_0xAC4758C45E6AFF0D(uLocal_87[iVar1], 1);
					unk_0xC5BBAB0F8336ECB7(uLocal_87[iVar1], 12);
					unk_0xDD944E3FD2028A48(uLocal_87[iVar1], "GB_BB_B_VEH");
					unk_0xDD205B87CDFD0C1B(uLocal_87[iVar1], Global_262145.f_12533);
					if (!unk_0x234B68AC2E35ED5A(iLocal_86, 5))
					{
						unk_0x89936830A493350F(uLocal_87[iVar1], 1);
						unk_0xFABF45630A359B11(uLocal_87[iVar1], 7000);
						if (iVar1 == (func_14() - 1))
						{
							unk_0x191DDA30577F440A(&iLocal_86, 5);
						}
					}
				}
			}
			else if (unk_0x575B7C28D81C0B4D(uLocal_87[iVar1]))
			{
				unk_0x1AD5BCFEC31BB8D9(&(uLocal_87[iVar1]));
			}
			if (func_806(func_7(), 1))
			{
				if (((unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 15) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 14)) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1 + 4)) && !func_402())
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_88[iVar1]))
					{
						uLocal_88[iVar1] = unk_0x27E44C95E1D1461C(func_605(iVar1));
						func_660(&(uLocal_88[iVar1]), 12);
					}
					iVar0 = iVar1;
				}
				else if (unk_0x575B7C28D81C0B4D(uLocal_88[iVar1]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_88[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x575B7C28D81C0B4D(uLocal_88[iVar0]) && !unk_0xEDC8EB71BDF5815A(uLocal_88[iVar0]))
		{
			unk_0x13CC211F9F7ACE7F(uLocal_88[iVar0], 1);
			unk_0x1EF92774F7B1187E(uLocal_88[iVar0], func_659(12));
		}
	}
}

int func_659(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xB4D5E37C91862216(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_660(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		uVar0 = func_659(iParam1);
		unk_0xFA3E6ADC3E5D386E(*uParam0, uVar0);
	}
}

void func_661()
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 17) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 24))
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar0) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar0 + 8))
			{
				if (unk_0xB7D6400C89373777(func_28(iVar0)))
				{
					if (unk_0xB364346471C3B028(func_28(iVar0)))
					{
						unk_0x8F160110753EB17B(unk_0x854C404AEB476240(func_28(iVar0)), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_662()
{
	int iVar0;
	
	func_663();
	if (func_402() || func_144(unk_0x1146A9AE09CE2B14()) != 3)
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_86, 2))
	{
		if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 17) || unk_0x234B68AC2E35ED5A(Local_104.f_1, 24))
		{
			if (func_806(func_7(), 1))
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					func_133("GB_BB_ALERT", -1);
					unk_0x191DDA30577F440A(&iLocal_86, 2);
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&iLocal_86, 2);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_86, 12))
	{
		if (unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 16))
		{
			if (!unk_0xE8FFE38E2BA32BD6())
			{
				func_133("GB_BB_LOSE", -1);
				unk_0x191DDA30577F440A(&iLocal_86, 12);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_86, 10))
	{
		if (func_14() == 1)
		{
			unk_0x191DDA30577F440A(&iLocal_86, 10);
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar0 + 8))
			{
				if (!unk_0xE8FFE38E2BA32BD6())
				{
					if (func_806(func_7(), 1))
					{
						func_133("GB_BB_DES", -1);
					}
					else if (func_106(1))
					{
						if (func_179())
						{
							func_133("GB_BB_DESF", -1);
						}
						else
						{
							func_133("GB_BB_DESR", -1);
						}
					}
					else
					{
						func_133("GB_BB_DESF", -1);
					}
					func_129(1);
					unk_0x191DDA30577F440A(&iLocal_86, 10);
				}
			}
			iVar0++;
		}
	}
}

void func_663()
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1800, 22))
	{
		iVar0 = func_503(unk_0x1146A9AE09CE2B14());
		if (iVar0 != -1)
		{
			if (!func_665(0) && !func_665(func_664(iVar0)))
			{
				func_102(22);
			}
		}
	}
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23822;
}

bool func_665(int iParam0)
{
	int iVar0;
	
	iVar0 = func_204(2482, -1, 0);
	return unk_0x234B68AC2E35ED5A(iVar0, iParam0);
}

void func_666()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_402() || func_144(unk_0x1146A9AE09CE2B14()) != 3)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < func_14())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar4))
		{
			if (unk_0x159BC3DDA80D71AC(func_28(iVar4)))
			{
				if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && unk_0x419E13582192CFEA(unk_0x854C404AEB476240(func_28(iVar4))))
				{
					if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(func_28(iVar4)), 0))
					{
						if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(func_28(iVar4)), 0))
						{
							if (func_806(func_7(), 1))
							{
								unk_0xB4D5E37C91862216(9, &uVar0, &uVar1, &uVar2, &uVar3);
							}
							else
							{
								unk_0xB4D5E37C91862216(6, &uVar0, &uVar1, &uVar2, &uVar3);
							}
							func_667(unk_0x854C404AEB476240(func_28(iVar4)), uVar0, uVar1, uVar2, 0);
						}
					}
				}
			}
		}
		iVar4++;
	}
}

void func_667(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0x22B88F4BA785575E(2, unk_0xD6E677FAD7521410(iParam0, 1) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_668()
{
	if (func_402() || func_144(unk_0x1146A9AE09CE2B14()) != 3)
	{
		if (func_116())
		{
			func_109();
		}
		return;
	}
	if (func_806(func_7(), 1))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 13))
		{
			func_676("GB_BB_GT_GOTO", func_678(), 0, 0);
		}
		else if ((unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 16) && unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 15)) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
		{
			func_670("GB_BB_COPS", 0);
		}
		else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 15))
		{
			if (unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 15))
			{
				func_670("GB_BB_GT_UDLVR", 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 14))
			{
				func_670("GB_BB_GT_DLVR1", 0);
			}
			else
			{
				func_670("GB_BB_GT_STEAL1", 0);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1, 15))
		{
			func_670("GB_BB_GT_UDLVR", 0);
		}
		else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 14))
		{
			func_670("GB_BB_GT_DLVR", 0);
		}
		else
		{
			func_670("GB_BB_GT_STEAL", 0);
		}
	}
	else if (func_6(func_7(), 0, 1))
	{
		if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 15))
		{
			func_669("GB_BB_GT_DSTRY1", func_373(func_7()), 0, 0);
		}
		else
		{
			func_669("GB_BB_GT_DSTRY", func_373(func_7()), 0, 0);
		}
	}
}

void func_669(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_676(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 16;
		Global_1312603.f_56 = iParam2;
	}
}

void func_670(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_674(sParam0))
	{
		return;
	}
	func_110();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_673();
	func_672(bParam1);
	func_671();
}

void func_671()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_673()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

bool func_674(char* sParam0)
{
	if (!func_115())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_675(uParam0);
	}
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_675(char* sParam0)
{
	if (!func_115())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

int func_676(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam1))
	{
		return 0;
	}
	if (func_677(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_110();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = iParam3;
	Global_1312603.f_56 = iParam3;
	func_673();
	func_672(bParam2);
	func_671();
	return 1;
}

bool func_677(char* sParam0, char* sParam1)
{
	if (!func_115())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(uParam1))
	{
		return 0;
	}
	if (!unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam1) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

char* func_678()
{
	switch (func_43())
	{
		case 0:
			return "GB_BB_GT_PS0";
		
		case 1:
			return "GB_BB_GT_PS1";
		
		case 2:
			return "GB_BB_GT_PS2";
		
		case 3:
			return "GB_BB_GT_PS3";
		
		case 4:
			return "GB_BB_GT_PS4";
		
		case 5:
			return "GB_BB_GT_PS5";
		
		default:
	}
	return "GB_BB_GT_PS0";
}

void func_679()
{
	int iVar0;
	
	if (func_402() || func_144(unk_0x1146A9AE09CE2B14()) != 3)
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 12))
	{
		if (func_140(&(Local_104.f_49)))
		{
			if (func_17() < 3)
			{
				iLocal_103 = (func_10() - func_684(&(Local_104.f_49), 0, 0));
			}
			if (iLocal_103 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iLocal_103 = func_683(iLocal_103, 0);
			if (iLocal_103 > 0)
			{
				func_680(iLocal_103, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_680(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_680(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_682(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_681(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_681(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_682(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

int func_683(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_684(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

void func_685()
{
	if (func_402())
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_86, 0))
	{
		if (!func_162())
		{
			if (func_806(func_7(), 1))
			{
				if (unk_0x234B68AC2E35ED5A(iLocal_86, 1))
				{
					if (!unk_0xE8FFE38E2BA32BD6())
					{
						if (func_14() == 1)
						{
							func_133("GB_BB_WARN1", -1);
						}
						else
						{
							func_133("GB_BB_WARN", -1);
						}
						func_129(1);
						unk_0x191DDA30577F440A(&iLocal_86, 3);
					}
				}
				else
				{
					if (unk_0x1146A9AE09CE2B14() != func_7())
					{
						func_133("GB_BB_GSTART", -1);
					}
					else if (func_14() == 1)
					{
						func_133("GB_BB_BSTART1", -1);
					}
					else
					{
						func_133("GB_BB_BSTART", -1);
					}
					func_129(1);
					unk_0x191DDA30577F440A(&iLocal_86, 1);
				}
			}
			else
			{
				if (func_14() == 1)
				{
					func_784("GB_BB_FSTART1", func_373(func_7()), func_62(func_7(), -2, 0, 0, 0), -1);
				}
				else
				{
					func_784("GB_BB_FSTART", func_373(func_7()), func_62(func_7(), -2, 0, 0, 0), -1);
				}
				func_129(1);
				unk_0x191DDA30577F440A(&iLocal_86, 3);
			}
		}
	}
	else
	{
		if (func_806(func_7(), 1))
		{
			if (func_14() == 1)
			{
				func_398(86, "GB_BB_ST_START", "GB_BB_SS_START1", 1, -1, 2, 1, 0);
			}
			else
			{
				func_398(86, "GB_BB_ST_START", "GB_BB_SS_START", 1, -1, 2, 1, 0);
			}
		}
		else if (func_14() == 1)
		{
			func_399(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY1", func_373(func_7()), func_62(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		else
		{
			func_399(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY", func_373(func_7()), func_62(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		func_686(-1, 0, 0, -1, 0, 0);
		unk_0x191DDA30577F440A(&iLocal_86, 0);
		unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), 12);
	}
}

void func_686(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_503(unk_0x1146A9AE09CE2B14());
		Global_1682001 = iVar0;
		Global_1682001.f_1 = iParam0;
		if (func_180() != func_40())
		{
			Global_1682001.f_2 = func_783(func_180());
			Global_1682001.f_3 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1682001.f_2), &(Global_1682001.f_3));
		}
		Global_1682001.f_7 = unk_0x666C16A4ED8F3098();
		Global_1682001.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_13 = 0;
		Global_1682001.f_14 = 0;
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682001.f_23 = func_780(func_130(1));
		}
	}
	else
	{
		iVar0 = func_104(unk_0x1146A9AE09CE2B14());
	}
	if (iParam2 || func_101(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1681740 = iVar0;
		if (func_205(iVar0))
		{
			Global_1681740.f_1 = 4;
		}
		else if (func_429(iVar0))
		{
			Global_1681740.f_1 = 5;
		}
		else if (func_122(iVar0, 0))
		{
			Global_1681740.f_1 = 2;
			if (func_198(iVar0))
			{
				Global_1681740.f_1 = 3;
			}
		}
		else
		{
			Global_1681740.f_1 = 1;
		}
		if (func_180() != func_40())
		{
			Global_1681740.f_4 = func_783(func_180());
			Global_1681740.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1681740.f_6), &(Global_1681740.f_7));
		}
		Global_1681740.f_9 = unk_0x666C16A4ED8F3098();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1681740.f_27 = 1;
			Global_1681740.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1681740.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1681740.f_40 = func_230(iParam1);
			Global_1681740.f_41 = func_779();
			Global_1681740.f_42 = func_333(unk_0x1146A9AE09CE2B14(), iParam1);
			Global_1681740.f_44 = func_778(unk_0x1146A9AE09CE2B14(), iParam1);
		}
		if (!func_179() || iVar0 != 192)
		{
			Global_1681740.f_53 = 0;
		}
	}
	else if (func_196(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1681857 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1681857 = iParam0 + 1;
		}
		else
		{
			Global_1681857 = func_777(unk_0x1146A9AE09CE2B14());
		}
		switch (iVar0)
		{
			case 225:
				if (func_192(unk_0x1146A9AE09CE2B14()) == 0)
				{
					Global_1681857.f_1 = 0;
				}
				else
				{
					Global_1681857.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1681857.f_1 = 2;
				break;
			
			case 227:
				Global_1681857.f_1 = 3;
				break;
		}
		Global_1681857.f_21 = 1;
		Global_1681857.f_22 = 1;
		if (func_180() != func_40())
		{
			Global_1681857.f_4 = func_783(func_180());
			Global_1681857.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1681857.f_4), &(Global_1681857.f_5));
		}
		Global_1681857.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681857.f_20 = iParam0;
		}
	}
	else if (func_135(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1681794 = iVar0;
		Global_1681740.f_1 = 1;
		if (func_180() != func_40())
		{
			Global_1681794.f_4 = func_783(func_180());
			Global_1681794.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1681794.f_6), &(Global_1681794.f_7));
		}
		Global_1681794.f_9 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681794.f_21 = iParam0;
		}
	}
	else if (func_195(iVar0))
	{
		Global_1681901 = iVar0;
		Global_1681901.f_1 = iParam0;
		Global_1681901.f_21 = 1;
		Global_1681901.f_22 = 1;
		if (func_180() != func_40())
		{
			Global_1681901.f_4 = func_783(func_180());
			Global_1681901.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1681901.f_4), &(Global_1681901.f_5));
		}
		Global_1681901.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681901.f_20 = iParam0;
		}
		Global_1681901.f_27 = func_775(func_100(), 5);
		Global_1681901.f_28 = func_780(func_774(unk_0x1146A9AE09CE2B14()));
		Global_1681901.f_29 = func_204(6109, -1, 0);
		Global_1681901.f_30 = func_204(6105, -1, 0);
		Global_1681901.f_31 = func_204(6106, -1, 0);
		Global_1681901.f_32 = func_204(6108, -1, 0);
		Global_1681901.f_33 = func_204(6107, -1, 0);
		Global_1681901.f_34 = func_204(6110, -1, 0);
		Global_1681901.f_7 = func_772();
		Global_1681901.f_51 = func_780(bParam4);
	}
	else if (func_194(iVar0))
	{
		Global_1681955 = iVar0;
		Global_1681955.f_1 = iParam0;
		Global_1681955.f_21 = 1;
		Global_1681955.f_22 = 1;
		if (func_180() != func_40())
		{
			Global_1681955.f_4 = func_783(func_180());
			Global_1681955.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1681955.f_4), &(Global_1681955.f_5));
		}
		Global_1681955.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681955.f_20 = iParam0;
		}
		Global_1681955.f_24 = func_204(6159, -1, 0);
		Global_1681955.f_25 = func_204(6164, -1, 0);
		Global_1681955.f_26 = func_204(6165, -1, 0);
		Global_1681955.f_27 = func_780((((func_771() || func_770()) || func_769()) || func_768(unk_0x1146A9AE09CE2B14())));
		Global_1681955.f_28 = func_204(6166, -1, 0);
		Global_1681955.f_29 = func_780(func_767());
		Global_1681955.f_31 = 0;
		Global_1681955.f_30 = 0;
		Global_1681955.f_32 = 0;
		Global_1681955.f_33 = 0;
		Global_1681955.f_34 = 0;
		Global_1681955.f_16 = 0;
		Global_1681955.f_7 = func_772();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_190(func_191(unk_0x1146A9AE09CE2B14()))))
	{
		Global_1682091 = iVar0;
		Global_1682091.f_1 = iParam0;
		Global_1682091.f_21 = 1;
		Global_1682091.f_22 = 1;
		Global_1682091.f_7 = func_772();
		if (func_180() != func_40())
		{
			Global_1682091.f_4 = func_783(func_180());
			Global_1682091.f_5 = func_782(func_180());
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1682091.f_4), &(Global_1682091.f_5));
		}
		if (func_180() != -1)
		{
			Global_1682091.f_17 = func_766(func_180());
		}
		Global_1682091.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682091.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		Global_1682091.f_16 = 0;
		Global_1682091.f_24 = 0;
		Global_1682091.f_23 = 0;
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682091.f_33 = func_780(func_130(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1682037 = iVar0;
		Global_1682037.f_1 = iParam0;
		Global_1682037.f_21 = 1;
		Global_1682037.f_22 = 1;
		Global_1682037.f_7 = func_772();
		Global_1682037.f_24 = 0;
		Global_1682037.f_23 = 0;
		Global_1682037.f_16 = 0;
		if (func_180() != func_40())
		{
			Global_1682037.f_4 = func_783(func_180());
			Global_1682037.f_5 = func_782(func_180());
		}
		Global_1682037.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_765(unk_0x1146A9AE09CE2B14());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_749(unk_0x1146A9AE09CE2B14(), 4, -1);
		Global_1682037.f_31 = func_748(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_32 = func_780(func_747(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_33 = func_780(func_746(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_34 = func_780(func_745(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_35 = func_780(func_744(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_36 = func_743(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_37 = func_742(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_39 = func_741(unk_0x1146A9AE09CE2B14());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682037.f_41 = func_780(func_130(1));
		}
		if (func_7() != func_40())
		{
			func_234(func_7(), &(Global_1682037.f_4), &(Global_1682037.f_5));
		}
		Global_1682037.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682037.f_28 = func_781(unk_0x1146A9AE09CE2B14());
	}
	else if (func_188(iVar0))
	{
		Global_1682175 = iVar0;
		Global_1682175.f_1 = func_192(unk_0x1146A9AE09CE2B14());
		Global_1682175.f_2 = func_740();
		Global_1682175.f_3 = func_739();
		Global_1682175.f_4 = func_783(func_180());
		Global_1682175.f_5 = func_782(func_180());
		Global_1682175.f_7 = func_772();
		Global_1682175.f_8 = unk_0x666C16A4ED8F3098();
		if (func_180() != -1)
		{
			Global_1682175.f_17 = func_766(func_180());
		}
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = iParam0;
		Global_1682175.f_27 = func_780(func_738(unk_0x1146A9AE09CE2B14()));
		Global_1682175.f_28 = func_735(21, -1);
	}
	else if (func_187(iVar0))
	{
		Global_1682250 = Global_786547.f_1;
		Global_1682250.f_2 = Global_786547;
		Global_1682250.f_6 = func_783(func_180());
		Global_1682250.f_7 = func_782(func_180());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682250.f_8 = func_780(func_130(1));
		}
		if (func_180() != -1)
		{
			Global_1682250.f_9 = func_766(func_180());
		}
		Global_1682250.f_10 = func_772();
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		Global_1682250.f_21 = 0;
		Global_1682250.f_22 = 0;
		Global_1682250.f_23 = 0;
		Global_1710053 = unk_0x666C16A4ED8F3098();
	}
	else if (func_186(iVar0))
	{
		Global_1682337 = Global_786547.f_1;
		Global_1682337.f_3 = Global_786547;
		Global_1682337.f_6 = func_783(func_180());
		Global_1682337.f_7 = func_782(func_180());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682337.f_8 = func_780(func_130(1));
		}
		if (func_180() != -1)
		{
			Global_1682337.f_9 = func_766(func_180());
		}
		Global_1682337.f_10 = func_772();
		Global_1682337.f_21 = 0;
		Global_1682337.f_22 = 0;
		Global_1682337.f_23 = 0;
		Global_1682337.f_26 = func_717(1);
		Global_1682337.f_34 = func_717(0);
		Global_1682337.f_15 = !func_182(unk_0x1146A9AE09CE2B14(), func_7(), 1);
	}
	else if (func_716(iVar0))
	{
		Global_1682449 = iParam0;
		Global_1682449.f_1 = iVar0;
		Global_1682449.f_3 = func_783(func_180());
		Global_1682449.f_4 = func_782(func_180());
		Global_1682449.f_5 = func_780(func_130(1));
		Global_1682449.f_6 = func_772();
		Global_1682449.f_7 = func_766(func_180());
		Global_1682449.f_8 = 0;
	}
	else if (func_185(iVar0))
	{
		Global_1682470 = Global_786547.f_1;
		Global_1682470.f_27 = Global_786547;
		Global_1682470.f_5 = func_783(func_180());
		Global_1682470.f_6 = func_782(func_180());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682470.f_7 = func_780(func_130(1));
		}
		if (func_180() != -1)
		{
			Global_1682470.f_8 = func_766(func_180());
		}
		Global_1682470.f_9 = func_772();
		Global_1682470.f_18 = 1;
		Global_1682470.f_19 = 1;
		Global_1682470.f_20 = 0;
		Global_1682470.f_21 = 0;
		Global_1682470.f_22 = 0;
		Global_1682470.f_23 = func_717(1);
		Global_1682470.f_24 = func_717(0);
		Global_1682470.f_14 = !func_182(unk_0x1146A9AE09CE2B14(), func_7(), 1);
	}
	else
	{
		if (func_180() != func_40())
		{
			Global_1681722 = func_783(func_180());
			Global_1681722.f_1 = func_782(func_180());
		}
		Global_1681722.f_5 = unk_0x666C16A4ED8F3098();
		Global_1681722.f_13 = func_715();
		Global_1681722.f_15 = 0;
		if (func_106(1))
		{
			if (func_7() == func_180())
			{
				Global_1681722.f_15 = 1;
			}
		}
		if (func_714())
		{
			Global_1681857.f_28 = 1;
		}
		if (((((func_713() || func_712()) || func_711()) || func_710()) || func_709()) || func_708(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_30 = 1;
		}
		if (func_706(func_707(joaat("trailersmall2"))))
		{
			Global_1681857.f_32 = 1;
		}
		if (func_695(func_705(joaat("caddy"))))
		{
			Global_1681857.f_31 = 1;
		}
		if (func_694(unk_0x1146A9AE09CE2B14()) || func_693(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_29 = 1;
		}
		if (func_692(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_33 = 1;
			Global_1681857.f_34 = 1;
		}
		if (func_691(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_36 = 1;
		}
		if (func_690(0, unk_0x1146A9AE09CE2B14()) == 1)
		{
			Global_1681857.f_35 = 1;
		}
		if (func_689(unk_0x1146A9AE09CE2B14(), 3, &uVar1))
		{
			Global_1681857.f_37 = 1;
		}
		if (func_689(unk_0x1146A9AE09CE2B14(), 7, &uVar1))
		{
			Global_1681857.f_38 = 1;
		}
		if (func_688(unk_0x1146A9AE09CE2B14()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_687(unk_0x1146A9AE09CE2B14(), iVar2);
				if (func_330(unk_0x1146A9AE09CE2B14(), iVar3, 0))
				{
					Global_1681857.f_39 = 1;
				}
				if (func_330(unk_0x1146A9AE09CE2B14(), iVar3, 2))
				{
					Global_1681857.f_40 = 1;
				}
				if (func_330(unk_0x1146A9AE09CE2B14(), iVar3, 1))
				{
					Global_1681857.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_687(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_322(Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/]))
	{
		uVar0 = Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/];
	}
	return uVar0;
}

int func_688(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_689(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_690(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_690(int iParam0, int iParam1)
{
	if (iParam1 == func_40())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 0))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 3))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 6))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 9))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 12))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 15))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 18))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 21))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 1))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 4))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 7))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 10))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 13))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 16))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 19))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 22))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 2))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 5))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 8))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 11))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 14))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 17))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 20))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 23))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_691(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 7);
}

bool func_692(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 8);
}

bool func_693(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 11);
}

bool func_694(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 10);
}

int func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_735(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_703(11));
		func_702(iVar1, &iVar0, 1);
		iVar2 = func_735(func_697(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_204(func_696(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_696(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("mpsv_lp0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				case 307:
					return 9636;
				
				case 308:
					return 9643;
				
				case 309:
					return 9650;
				
				case 310:
					return 9657;
				
				case 311:
					return 9664;
				
				case 312:
					return 9671;
				
				case 313:
					return 9678;
				
				case 314:
					return 9685;
				
				case 315:
					return 9692;
				
				case 316:
					return 9699;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("mpsv_lp0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("mpsv_lp0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("mpsv_lp0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("mpsv_lp0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 65:
					return 3244;
				
				case 66:
					return 3252;
				
				case 67:
					return 3260;
				
				case 68:
					return 3268;
				
				case 69:
					return 3276;
				
				case 70:
					return 3284;
				
				case 71:
					return 3292;
				
				case 72:
					return 3300;
				
				case 73:
					return 3308;
				
				case 74:
					return 3316;
				
				case 75:
					return 3324;
				
				case 76:
					return 3332;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case joaat("mpsv_lp0_31"):
					return 3356;
				
				case 80:
					return 3364;
				
				case 81:
					return 3372;
				
				case 82:
					return 3380;
				
				case 83:
					return 3388;
				
				case 84:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4040;
				
				case 89:
					return 4048;
				
				case 90:
					return 4056;
				
				case 91:
					return 4064;
				
				case 92:
					return 4072;
				
				case 93:
					return 4080;
				
				case 94:
					return 4088;
				
				case 95:
					return 4096;
				
				case 96:
					return 4104;
				
				case 97:
					return 4112;
				
				case 98:
					return 4120;
				
				case 99:
					return 4128;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4152;
				
				case 103:
					return 4160;
				
				case 104:
					return 4168;
				
				case 105:
					return 4176;
				
				case 106:
					return 4184;
				
				case 107:
					return 4192;
				
				case 108:
					return 4200;
				
				case 109:
					return 4208;
				
				case 110:
					return 4216;
				
				case 111:
					return 4224;
				
				case 112:
					return 4232;
				
				case 113:
					return 4240;
				
				case 114:
					return 4248;
				
				case 115:
					return 4256;
				
				case 116:
					return 4264;
				
				case 117:
					return 4272;
				
				case 118:
					return 4280;
				
				case 119:
					return 4288;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4312;
				
				case 123:
					return 4320;
				
				case 124:
					return 4328;
				
				case 125:
					return 4336;
				
				case 126:
					return 4344;
				
				case 127:
					return 4352;
				
				case 128:
					return 4360;
				
				case 129:
					return 4368;
				
				case 130:
					return 4376;
				
				case 131:
					return 4384;
				
				case 132:
					return 4392;
				
				case 133:
					return 4400;
				
				case 134:
					return 4408;
				
				case 135:
					return 4416;
				
				case 136:
					return 4424;
				
				case 137:
					return 4432;
				
				case 138:
					return 4440;
				
				case 139:
					return 4448;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4472;
				
				case 143:
					return 4480;
				
				case 144:
					return 4488;
				
				case 145:
					return 4496;
				
				case 146:
					return 4504;
				
				case 147:
					return 4512;
				
				case 148:
					return 4520;
				
				case 149:
					return 4528;
				
				case 150:
					return 4536;
				
				case 151:
					return 4544;
				
				case 152:
					return 4552;
				
				case 153:
					return 4560;
				
				case 154:
					return 4568;
				
				case 155:
					return 4576;
				
				case 156:
					return 4584;
				
				case 157:
					return 4592;
				
				case 158:
					return 5485;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("mpsv_lp0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4135;
				
				case 101:
					return 4143;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4295;
				
				case 121:
					return 4303;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4455;
				
				case 141:
					return 4463;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_697(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 317)
	{
		iVar0 = 0;
		while (iVar0 < 26)
		{
			if (iParam0 >= func_703(iVar0) && iParam0 < func_698(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_698(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_701(iParam0);
		return func_700(iVar0);
	}
	return (func_699(iParam0, -1, 1) * iParam0 + 1);
}

int func_699(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_433(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_439(iParam1))
			{
				return 0;
			}
			else if (func_431(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 <= 127 && iParam1 > 0)
			{
				if (Global_1049961[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
	}
	return 0;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_701(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

void func_702(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10335)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1678528[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x2053F6ACFD4ED4BC() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_703(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_701(iParam0);
		return func_704(iVar0);
	}
	return (func_699(iParam0, -1, 1) * iParam0);
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

int func_705(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_706(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_702(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_204(func_696(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_708(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_341 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_709()
{
	return func_204(6544, -1, 0) != 0;
}

bool func_710()
{
	return func_204(6165, -1, 0) != 0;
}

bool func_711()
{
	return func_204(5382, -1, 0) != 0;
}

bool func_712()
{
	return func_204(3830, -1, 0) != 0;
}

bool func_713()
{
	return func_204(3225, -1, 0) != 0;
}

bool func_714()
{
	return func_204(5381, -1, 0) != 0;
}

int func_715()
{
	int iVar0;
	
	iVar0 = func_180();
	if (iVar0 != func_40())
	{
		return Global_1630816[iVar0 /*597*/].f_11.f_99;
	}
	return 0;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

var func_717(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0x1146A9AE09CE2B14();
	if (bParam0)
	{
		if (func_732(4, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 0);
		}
		if (func_732(5, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 1);
		}
		if (func_732(6, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 2);
		}
		if (func_732(1, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 3);
		}
		if (func_732(2, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 4);
		}
		if (func_732(3, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 5);
		}
		if ((((func_731(61) || func_731(62)) || func_731(63)) || func_731(64)) || func_731(65))
		{
			unk_0x191DDA30577F440A(&uVar0, 6);
		}
		if (func_358(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 7);
		}
		if (func_729(iVar1, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 8);
		}
		if (func_729(iVar1, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 9);
		}
		if (func_729(iVar1, 2))
		{
			unk_0x191DDA30577F440A(&uVar0, 10);
		}
		if (func_207(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 11);
		}
		if (func_725(iVar1, 3))
		{
			unk_0x191DDA30577F440A(&uVar0, 12);
		}
		if (func_725(iVar1, 4))
		{
			unk_0x191DDA30577F440A(&uVar0, 13);
		}
		if (func_725(iVar1, 2))
		{
			unk_0x191DDA30577F440A(&uVar0, 14);
		}
		if (func_725(iVar1, 6))
		{
			unk_0x191DDA30577F440A(&uVar0, 15);
		}
		if (func_725(iVar1, 5))
		{
			unk_0x191DDA30577F440A(&uVar0, 16);
		}
		if (func_723(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 17);
		}
		if (func_725(iVar1, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 18);
		}
		if (func_774(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 19);
		}
		if (func_768(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 20);
		}
		if (func_708(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 21);
		}
		if (func_781(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 22);
		}
		if (func_738(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 23);
		}
		if (func_722(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 24);
		}
		if (func_721(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 25);
		}
		if (func_691(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 26);
		}
		if (func_720(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 27);
		}
		if (func_748(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 28);
		}
		if (func_719(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 29);
		}
		if (func_718(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 30);
		}
	}
	return uVar0;
}

bool func_718(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_267.f_452 != 0;
}

bool func_719(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_445, 0);
}

int func_720(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_272, 1);
	}
	return 0;
}

bool func_721(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_270;
}

int func_722(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_395 != 0;
	}
	return 0;
}

bool func_723(int iParam0)
{
	return func_724(iParam0) != 0;
}

int func_724(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_136;
}

int func_725(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_728(iParam0);
		
		case 2:
			return func_727(iParam0, 4);
		
		case 3:
			return func_727(iParam0, 3);
		
		case 4:
			return func_727(iParam0, 1);
		
		case 5:
			return func_727(iParam0, 0);
		
		case 6:
			return func_727(iParam0, 2);
		
		case 0:
			if (func_774(iParam0) || func_726(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_726(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_727(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE45310E861787FC2())
	{
		return 1;
	}
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/];
			if (func_230(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_728(int iParam0)
{
	return func_218(iParam0) != 0;
}

int func_729(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			if (func_730(Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_730(int iParam0)
{
	if (func_346(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_731(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_732(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 1 || iParam0 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 127)
	{
		if (func_734(iVar0) == iParam0 && (!func_733(iVar0) || !bParam1))
		{
			if (func_731(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_735(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_100();
	}
	if (iParam0 == 7 && !Global_262145.f_17163)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_701(iParam0);
		if (iVar1 == 0 && func_204(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_737(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_781(unk_0x1146A9AE09CE2B14()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_736(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1390533[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2595490[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 26)
		{
			return 0;
		}
		return Global_2595335[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_736(int iParam0)
{
	return func_204(9516, iParam0, 0) != 0;
}

bool func_737(int iParam0)
{
	if (!Global_262145.f_23851)
	{
		return 0;
	}
	return func_204(7209, iParam0, 0) != 0;
}

int func_738(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_371 != 0;
	}
	return 0;
}

int func_739()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_740()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

int func_741(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 12);
	}
	return 0;
}

int func_742(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 10);
	}
	return 0;
}

int func_743(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 11);
	}
	return 0;
}

bool func_744(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 4);
}

bool func_745(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 3);
}

bool func_746(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 2);
}

bool func_747(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 1);
}

int func_748(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 31);
	}
	return 0;
}

int func_749(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_40() || !func_764(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_759(iParam0, iParam2);
		
		case 1:
			return func_757(iParam0, iParam2);
		
		case 3:
			return func_756(iParam0);
		
		case 2:
			return func_751(iParam0, iParam2);
		
		case 4:
			return func_750(iParam0);
		
		default:
	}
	return 0;
}

bool func_750(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 6);
	}
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 6);
}

int func_751(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_755(iParam0);
		
		case 11:
			return func_754(iParam0);
		
		case 12:
			return func_753(iParam0);
		
		case 13:
			return func_752(iParam0);
		
		default:
	}
	return 0;
}

bool func_752(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 15);
}

bool func_753(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 14);
}

bool func_754(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 13);
}

bool func_755(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 12);
}

bool func_756(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 11);
	}
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 5);
}

int func_757(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_758(iParam0);
		
		case 6:
			return func_747(iParam0);
		
		case 7:
			return func_746(iParam0);
		
		case 8:
			return func_745(iParam0);
		
		case 9:
			return func_744(iParam0);
		
		default:
	}
	return 0;
}

bool func_758(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 0);
}

int func_759(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_763(iParam0);
		
		case 1:
			return func_762(iParam0);
		
		case 2:
			return func_761(iParam0);
		
		case 3:
			return func_760(iParam0);
		
		case 4:
			return func_748(iParam0);
		
		default:
	}
	return 0;
}

bool func_760(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 10);
}

bool func_761(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 9);
}

bool func_762(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 8);
}

bool func_763(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 7);
}

bool func_764(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_765(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_749(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_749(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_749(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_749(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_766(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_205.f_6;
}

bool func_767()
{
	return func_204(6158, -1, 0) != 0;
}

int func_768(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_273 != 0;
	}
	return 0;
}

bool func_769()
{
	return func_204(6166, -1, 0) == 3;
}

bool func_770()
{
	return func_204(6166, -1, 0) == 2;
}

bool func_771()
{
	return func_204(6166, -1, 0) == 1;
}

int func_772()
{
	int iVar0;
	
	if (func_206())
	{
		return 4;
	}
	else if (func_179())
	{
		if (func_358(unk_0x1146A9AE09CE2B14()))
		{
			return 8;
		}
		return 6;
	}
	if (func_130(1))
	{
		iVar0 = func_773(unk_0x1146A9AE09CE2B14());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_106(1))
	{
		if (func_358(func_180()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_773(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_426;
	}
	return -1;
}

int func_774(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_266 != 0;
	}
	return 0;
}

int func_775(int iParam0, int iParam1)
{
	return func_204(func_776(iParam1), iParam0, 0);
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

int func_777(int iParam0)
{
	if (func_104(iParam0) == 225 || func_104(iParam0) == 226)
	{
		return func_192(iParam0);
	}
	return -1;
}

int func_778(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_322(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_779()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_332(unk_0x1146A9AE09CE2B14(), iVar0))
		{
			unk_0x191DDA30577F440A(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_780(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_781(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_324 != 0;
	}
	return 0;
}

int func_782(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_783(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

void func_784(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	unk_0xA91D83F2CC1345A6(uParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam3);
}

void func_785(int iParam0)
{
	Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3 = iParam0;
}

void func_786(bool bParam0)
{
	if (bParam0)
	{
		if (!func_138(unk_0x1146A9AE09CE2B14(), 9))
		{
			if (func_144(unk_0x1146A9AE09CE2B14()) != 0)
			{
				func_161(9);
			}
		}
	}
	else if (func_138(unk_0x1146A9AE09CE2B14(), 9))
	{
		func_151(9);
	}
}

void func_787()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x159BC3DDA80D71AC(func_28(iVar0)))
		{
			if (unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(func_28(iVar0)), 0))
			{
				if (unk_0xA6BE8F025C6B653F(unk_0x854C404AEB476240(func_28(iVar0))))
				{
					if (func_6(unk_0x1146A9AE09CE2B14(), 0, 1))
					{
						func_788(unk_0x854C404AEB476240(func_28(iVar0)));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_788(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xC502CD39B4994F3A(iVar0);
		if (func_6(iVar1, 0, 1))
		{
			if (func_182(iVar1, func_7(), 1) || func_790(iVar1, func_7()))
			{
				unk_0xFF9949B46A7C6F95(iParam0, iVar1, 0);
			}
			else
			{
				func_789(iVar1, iParam0);
				unk_0xFF9949B46A7C6F95(iParam0, iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_789(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0xD56332194D622ECE(iParam0);
	if (unk_0xBFCE58B2B3249999(iParam1, 0))
	{
		if (unk_0xF41EB7643E61A928(uVar0, iParam1, 1))
		{
			func_597(func_166(iParam0), 0, 0f, 0, 0, 0, -1);
		}
	}
}

int func_790(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (Global_1630816[iParam0 /*597*/].f_11.f_26 != func_40())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11.f_26;
		}
	}
	return 0;
}

void func_791(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 != iParam0)
	{
		func_805(-1);
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 = iParam0;
		if (func_804() != -1)
		{
			func_803(-1);
		}
		if (func_802() != -1)
		{
			func_801(-1);
		}
		func_800(iParam2);
		func_798(iParam0);
		if (!func_648(iParam0))
		{
			fVar0 = func_647(iParam0);
			if (fVar0 != 1f)
			{
				func_643(fVar0);
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 1);
			}
		}
		if (!func_651(iParam0) || iParam3)
		{
			if (func_649(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x20D884FB6567BAD5(0);
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
				}
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 0);
			}
			else if (unk_0x8E9D6E2DA3B756D5() < 5)
			{
				unk_0x5E84945E26CAEF1F(1f);
				unk_0x20D884FB6567BAD5(5);
			}
		}
		if (func_157())
		{
			func_161(27);
		}
		if (bParam1)
		{
			if (!func_149())
			{
				func_640(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 1) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 4)) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 0))
			{
				func_102(6);
			}
			func_797();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xE63D792F88BFF242(3, 0);
			unk_0xE63D792F88BFF242(5, 0);
		}
		if (func_160(unk_0x1146A9AE09CE2B14()) && func_146(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 8);
		}
		func_793();
		if (func_792(iParam0))
		{
			unk_0xE63D792F88BFF242(3, 0);
			unk_0xE63D792F88BFF242(5, 0);
			unk_0x191DDA30577F440A(&(Global_1681713.f_3), 6);
		}
		Global_2544210.f_6682 = 0;
	}
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_793()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_796();
	iVar2 = func_41(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xC502CD39B4994F3A(iVar0);
		if (unk_0x8CFC2F41A749E236(iVar1))
		{
			if (func_182(iVar1, iVar2, 1) || func_794(iVar1, unk_0x1146A9AE09CE2B14()))
			{
				unk_0xAA7E522FFB31B2B3(unk_0x1146A9AE09CE2B14(), iVar1, uVar3);
				unk_0xAA7E522FFB31B2B3(iVar1, unk_0x1146A9AE09CE2B14(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_794(int iParam0, int iParam1)
{
	if (func_81(iParam0, 1) && func_81(iParam1, 1))
	{
		return (func_795(iParam0) == func_41(iParam1) || func_795(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_795(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		return Global_1630816[func_41(iParam0) /*597*/].f_11.f_459;
	}
	return func_40();
}

int func_796()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180();
	if (iVar0 != func_40())
	{
		if (func_6(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x234B68AC2E35ED5A(Global_1630816[iVar1 /*597*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_797()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 1);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 4))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 4);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 6))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 6);
	}
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 0);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 2);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 17);
	if (Global_2544210.f_4624 > 0)
	{
		unk_0x20D884FB6567BAD5(Global_2544210.f_4624);
	}
	Global_2544210.f_4623 = 0;
}

void func_798(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(3793, -1, 0);
	iVar1 = func_799(iParam0);
	if (iVar1 != -1)
	{
		unk_0x191DDA30577F440A(&iVar0, iVar1);
		func_202(3793, iVar0, -1, 1, 0);
	}
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_800(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (Global_1630816[iVar0 /*597*/].f_11.f_182 != iParam0)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_182 = iParam0;
	}
}

void func_801(int iParam0)
{
	if (Global_2544210.f_5191.f_343 != iParam0)
	{
		Global_2544210.f_5191.f_343 = iParam0;
	}
}

int func_802()
{
	return Global_2544210.f_5191.f_343;
}

void func_803(int iParam0)
{
	if (Global_2544210.f_5191.f_342 != iParam0)
	{
		Global_2544210.f_5191.f_342 = iParam0;
	}
}

int func_804()
{
	return Global_2544210.f_5191.f_342;
}

void func_805(int iParam0)
{
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_32 = iParam0;
}

bool func_806(int iParam0, bool bParam1)
{
	return func_182(unk_0x1146A9AE09CE2B14(), iParam0, bParam1);
}

int func_807()
{
	return Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_3;
}

int func_808()
{
	if (func_149())
	{
		return 1;
	}
	return 0;
}

void func_809(int iParam0, int iParam1)
{
	Local_105[iParam0 /*4*/] = iParam1;
}

int func_810()
{
	return 1;
}

int func_811()
{
	return Local_104;
}

int func_812(int iParam0)
{
	return Local_105[iParam0 /*4*/];
}

void func_813()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_814(iVar0);
				break;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < func_14())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar2 + 8))
		{
			if (unk_0x1146A9AE09CE2B14() == func_7())
			{
				if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 12))
				{
					if (unk_0x159BC3DDA80D71AC(func_28(iVar2)))
					{
						if (unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(func_28(iVar2)), 0))
						{
							if ((unk_0x0297E633EADA2182(unk_0x854C404AEB476240(func_28(iVar2))) && !unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(func_28(iVar2)), 0)) && unk_0x9B73EB6255D4AE81(unk_0x854C404AEB476240(func_28(iVar2)), -1, 0))
							{
								unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar2 + 8);
							}
							else if (func_3(&(Local_107[iVar2 /*2*/]), 60000, 0))
							{
								unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar2 + 8);
							}
						}
						else if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(func_28(iVar2)), 0))
						{
							if (func_3(&(Local_107[iVar2 /*2*/]), 60000, 0))
							{
								unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar2 + 8);
							}
						}
					}
					else if (func_3(&(Local_107[iVar2 /*2*/]), 60000, 0))
					{
						unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar2 + 8);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_814(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 13))
	{
		if (unk_0x419E13582192CFEA(Var0))
		{
			if (unk_0x55F5BD4ABD80B211(Var0))
			{
				iVar1 = 0;
				while (iVar1 < func_14())
				{
					if (!unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1) && !unk_0x234B68AC2E35ED5A(Local_104.f_1, iVar1 + 8))
					{
						if (unk_0x611CD1312FD3CA66(Var0) == unk_0x854C404AEB476240(func_28(iVar1)))
						{
							if (unk_0x159BC3DDA80D71AC(func_28(iVar1)) && unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(func_28(iVar1)), 0))
							{
								if ((unk_0x0297E633EADA2182(unk_0x854C404AEB476240(func_28(iVar1))) && !unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(func_28(iVar1)), 0)) && unk_0x9B73EB6255D4AE81(unk_0x854C404AEB476240(func_28(iVar1)), -1, 0))
								{
									return;
								}
							}
							if (unk_0x419E13582192CFEA(Var0.f_1) && unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
							{
								if (unk_0xFAA5505029C4B5A6(Var0.f_1) == unk_0x7D2B9E6A64637269())
								{
									if (func_149())
									{
										if (Var0.f_5)
										{
											unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar1 + 8);
											func_819(func_40());
										}
									}
									else if (!func_182(unk_0x1146A9AE09CE2B14(), func_7(), 1))
									{
										func_607();
										if (!func_138(unk_0x1146A9AE09CE2B14(), 20))
										{
											func_815(0);
										}
										if (Var0.f_5)
										{
											Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_2++;
											unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar1 + 8);
											func_819(unk_0x1146A9AE09CE2B14());
										}
									}
									else if (Var0.f_5)
									{
										unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar1 + 8);
										func_819(func_40());
									}
								}
								else if (!unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0.f_1)))
								{
									if (Var0.f_5)
									{
										unk_0x191DDA30577F440A(&(Local_105[unk_0xDD0E57E73E5C4BF6() /*4*/].f_1), iVar1 + 8);
										func_819(func_40());
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
			else if ((!func_149() && unk_0xA2CCAAC7F5CA3F49(Var0)) && unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0)))
			{
				if (!func_608(unk_0x1146A9AE09CE2B14()) && !func_138(unk_0x1146A9AE09CE2B14(), 20))
				{
					iVar2 = unk_0xCB567ED25393C1DF(unk_0xFAA5505029C4B5A6(Var0));
					if (func_6(iVar2, 0, 1))
					{
						if (func_182(iVar2, func_7(), 1))
						{
							if (unk_0x419E13582192CFEA(Var0.f_1) && unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
							{
								if (unk_0xFAA5505029C4B5A6(Var0.f_1) == unk_0x7D2B9E6A64637269())
								{
									func_607();
									if (!func_138(unk_0x1146A9AE09CE2B14(), 20))
									{
										func_815(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_815(int iParam0)
{
	if (!func_158(unk_0x1146A9AE09CE2B14()))
	{
		if (iParam0 || func_144(unk_0x1146A9AE09CE2B14()) != 0)
		{
			func_161(20);
			func_816(func_818());
			if (func_160(unk_0x1146A9AE09CE2B14()))
			{
				if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 8))
				{
					unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 8);
				}
			}
		}
	}
}

void func_816(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_817() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_817()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_818()
{
	int iVar0;
	
	iVar0 = func_104(unk_0x1146A9AE09CE2B14());
	if (func_103(iVar0) == 0 || func_103(iVar0) == 3)
	{
		return -1;
	}
	if (func_199(iVar0))
	{
		return 65;
	}
	if (func_205(iVar0))
	{
		return 66;
	}
	if (func_422(iVar0))
	{
		return 63;
	}
	return 64;
}

void func_819(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_2 = 52835320;
	func_12(Var0, func_13(1));
}

int func_820()
{
	var uVar0;
	
	func_825(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_824())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_823())
	{
		return 1;
	}
	if (func_822(159))
	{
		if (!func_821())
		{
			return 1;
		}
	}
	if (func_822(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_644() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_644()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_821()
{
	return Global_2453009.f_698;
}

int func_822(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_823()
{
	return Global_2463497;
}

bool func_824()
{
	return Global_2453009.f_693;
}

void func_825(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_826(iVar0);
					break;
				
				case -1320260596:
					unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 4);
					if (Var3.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_826(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_827(uVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_827(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iParam0))
		{
			if (unk_0x456C91FDAFEEF560(iParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(iParam0)))
				{
					unk_0x4985CD0720AFD468(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(iParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_828()
{
	wait(0);
}

void func_829(bool bParam0)
{
	func_109();
	if (unk_0x8E9D6E2DA3B756D5() < 5)
	{
		unk_0x20D884FB6567BAD5(5);
	}
	func_108();
	func_878(bParam0);
	func_875();
	if (unk_0xAB0F784335D14AC3() > 1)
	{
		func_874();
		func_831(1, 0);
		unk_0x4BFE89D21F9885DC();
	}
	else if (func_830())
	{
		func_831(1, 0);
		unk_0x4BFE89D21F9885DC();
	}
}

int func_830()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x159BC3DDA80D71AC(func_28(iVar0)))
		{
			uVar1 = unk_0xD93F965CFAC1D06A(func_28(iVar0));
			if (!unk_0xE50EB54E0F21BED0(uVar1, 0))
			{
				if (func_596(unk_0x854C404AEB476240(func_28(iVar0)), &(uLocal_106[iVar0]), 0, 1))
				{
					unk_0x75E3AAA7D01DEDC8(&iVar1);
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_831(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1368721.f_1.f_108 != 0)
	{
		Global_1368721.f_1.f_108 = 0;
	}
	Global_1368721.f_1.f_109 = -1;
	Global_1368721.f_1.f_110 = -1;
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 167 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 168)
	{
		func_872();
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 4);
	}
	if ((func_206() && iParam1 != 0) && Global_262145.f_17160)
	{
		if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 190 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 192)
		{
			func_854(unk_0x1146A9AE09CE2B14(), iParam1, 1, 0);
		}
	}
	if (((Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 164 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 208) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 250) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 237)
	{
		unk_0xE63D792F88BFF242(3, 1);
		unk_0xE63D792F88BFF242(5, 1);
	}
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 != -1)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 = -1;
		if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 14) && !func_160(unk_0x1146A9AE09CE2B14()))
		{
			func_640(0);
		}
	}
	else if (func_852(unk_0x1146A9AE09CE2B14()) != -1)
	{
		func_805(-1);
	}
	func_851(func_40());
	if (func_288(16))
	{
		func_615(16);
	}
	func_848(0);
	func_800(-1);
	func_847();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_844(iVar0);
		iVar0++;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 0))
	{
		unk_0x5E84945E26CAEF1F(1f);
		unk_0x20D884FB6567BAD5(5);
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 0);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 5))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 5);
	}
	iVar1 = func_137();
	if ((func_121(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_843(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_205(iVar1))
	{
		func_840(-1, 1);
	}
	else if (((((func_136(iVar1) || func_839(iVar1)) || func_838(iVar1)) || func_196(iVar1)) || func_195(iVar1)) || func_194(iVar1))
	{
	}
	else
	{
		func_840(-1, 1);
	}
	func_151(19);
	func_151(20);
	func_151(21);
	func_151(22);
	func_151(27);
	func_615(3);
	func_615(4);
	func_615(7);
	func_837();
	if (func_146(unk_0x1146A9AE09CE2B14()))
	{
		func_786(0);
	}
	func_151(29);
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 = func_40();
	if (Global_2544210.f_5191.f_42 != 0)
	{
		Global_2544210.f_5191.f_42 = 0;
	}
	if (bParam0)
	{
		func_616();
	}
	if (!func_160(unk_0x1146A9AE09CE2B14()))
	{
		func_638();
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 1);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 6))
	{
		unk_0xE63D792F88BFF242(3, 1);
		unk_0xE63D792F88BFF242(5, 1);
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 6);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 7))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 7);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 8))
	{
		func_836("IMPEXP_SELFDES", 0);
		func_834("IMPEXP_SELFDES");
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 8);
	}
	func_832(iVar1, 0);
}

void func_832(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 9))
		{
			unk_0xB84B43B766630B5C(func_833(iParam0));
			unk_0x191DDA30577F440A(&(Global_1681713.f_3), 9);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 9))
	{
		unk_0xC0BBE340BE2AA02D(func_833(iParam0));
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 9);
	}
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_834(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_471();
					Global_112293.f_14139[iVar0 /*104*/].f_99[Global_19798] = 0;
					if (func_835(iVar0))
					{
					}
					else
					{
						Global_112293.f_14139[iVar0 /*104*/].f_24 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xAE77D1668DA754A8(Global_112293.f_14139[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_835(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_836(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112293.f_14139[iVar0 /*104*/].f_24 = 1;
				if (Global_112293.f_14139[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112293.f_14049[0 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112293.f_14049[1 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112293.f_14049[2 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112293.f_14049[3 /*20*/].f_17 = 0;
					}
					Global_112293.f_14139[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112293.f_14139[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_837()
{
	if (func_608(unk_0x1146A9AE09CE2B14()))
	{
		func_151(25);
	}
}

int func_838(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_839(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_840(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_137();
	}
	if (iParam0 > 0)
	{
		if (func_180() != func_40())
		{
			if (func_58(unk_0x1146A9AE09CE2B14()) == unk_0x1146A9AE09CE2B14())
			{
				Global_2519724.f_93[func_842(iParam0)] = 1;
			}
		}
		iVar0 = func_842(159);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(157);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(148);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(164);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(142);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(152);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(166);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(170);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(173);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(179);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(200);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(201);
		if (func_841(iVar0, Global_262145.f_12784, bParam1))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(182);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(183);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(185);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(186);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(180);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(195);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(197);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(198);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(207);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(208);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(209);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(214);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(215);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(216);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(217);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(218);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(219);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(220);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(221);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_841(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_138(unk_0x1146A9AE09CE2B14(), 19) && !func_138(unk_0x1146A9AE09CE2B14(), 20)) && !func_138(unk_0x1146A9AE09CE2B14(), 9))
		{
			return 0;
		}
	}
	if (Global_2519724.f_93[iParam0] == 1 && func_140(&(Global_2519724[iParam0 /*2*/])))
	{
		if (func_684(&(Global_2519724[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2519724.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_842(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_843(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_137();
	}
	if (iParam0 > 0)
	{
		if (func_180() != func_40())
		{
			Global_2519724.f_93[func_842(iParam0)] = 1;
		}
		iVar0 = func_842(155);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(163);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(160);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(153);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(162);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(154);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(171);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(172);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(199);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(194);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(193);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(210);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(205);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(189);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_842(211);
		if (func_841(iVar0, Global_262145.f_12785, 0))
		{
			func_488(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_844(int iParam0)
{
	if (!func_845(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/], func_846(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/] = { func_846() };
	}
	if (!func_845(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/], func_846(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/] = { func_846() };
	}
}

bool func_845(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_846()
{
	struct<3> Var0;
	
	return Var0;
}

void func_847()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573914 = { Var0 };
	Global_1573914.f_13 = func_40();
	if (unk_0x234B68AC2E35ED5A(Global_1573348, 3))
	{
		unk_0xC664C0067EEAB8D1(&Global_1573348, 3);
	}
}

void func_848(bool bParam0)
{
	if (bParam0)
	{
		if (!func_454(unk_0x1146A9AE09CE2B14(), 14))
		{
			func_850(14);
		}
	}
	else if (func_454(unk_0x1146A9AE09CE2B14(), 14))
	{
		func_849(14);
	}
}

void func_849(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

void func_850(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

void func_851(int iParam0)
{
	if (func_82(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x1146A9AE09CE2B14() != iParam0)
		{
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_459 != iParam0)
			{
				Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_459 = iParam0;
				if (iParam0 != func_40())
				{
				}
			}
		}
	}
}

int func_852(int iParam0)
{
	if (func_853(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_32;
	}
	return -1;
}

int func_853(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_32 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_854(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_332(iParam0, iParam1) && func_871(iParam0, iParam1))
	{
		iVar0 = func_331(iParam0, iParam1);
		func_858(iVar0, bParam2, bParam3);
		func_855(iVar0, 1);
	}
}

void func_855(int iParam0, int iParam1)
{
	if (!func_857(iParam0))
	{
		return;
	}
	func_315(func_856(iParam0), iParam1, -1, 1);
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_6 = iParam1;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_857(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_858(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_687(unk_0x1146A9AE09CE2B14(), iParam0);
	if (!bParam1)
	{
		func_870(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2518510[iParam0];
		iVar0 = func_869(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1683820 = -1;
		}
		func_868(iParam0, 0, bParam2);
	}
	else if (func_866(iParam0, bParam2))
	{
		iVar0 = func_865(iVar2, 0);
		iVar3 = func_778(unk_0x1146A9AE09CE2B14(), iVar2);
		iVar4 = func_864(iVar2, bParam2);
		iVar5 = func_865(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_863(iVar2) && func_862(unk_0x1146A9AE09CE2B14(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_870(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_861(unk_0x1146A9AE09CE2B14(), iVar2) > 0)
		{
			func_860(iParam0, (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 - (func_864(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_865(iVar2, bParam2) / func_861(unk_0x1146A9AE09CE2B14(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_863(iVar2) && func_862(unk_0x1146A9AE09CE2B14(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_859(unk_0x1146A9AE09CE2B14(), iVar2, iVar0, bParam2);
}

void func_859(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return;
	}
	if (func_322(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590908[iParam0 /*874*/].f_267.f_259 = iParam2;
				}
				else
				{
					Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_860(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2)
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_861(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_322(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_862(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_322(iParam1) && func_863(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_863(int iParam0)
{
	return func_230(iParam0) == 5;
}

int func_864(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_230(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17129;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17134;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_17128;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17133;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_17127;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17132;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_17125;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17130;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_17126;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17131;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21255;
				if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21256;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21239;
				if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21240;
				}
			}
			break;
	}
	return uVar0;
}

int func_865(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_230(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17110;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17119);
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17124);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_17111;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17118);
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17123);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_17112;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17117);
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17122);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_17113;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17115);
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17120);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_17114;
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17116);
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17121);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21252;
			}
			else
			{
				iVar0 = Global_262145.f_21236;
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21253);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21237);
				}
			}
			if (func_330(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21254);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21238);
				}
			}
			if (func_862(unk_0x1146A9AE09CE2B14(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_866(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_316(15384, -1, -1);
	}
	return func_316(func_867(iParam0), -1, -1);
}

int func_867(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_868(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_315(15384, iParam1, -1, 1);
		return;
	}
	func_315(func_867(iParam0), iParam1, -1, 1);
}

int func_869(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2518510[iParam0];
	iVar1 = func_687(unk_0x1146A9AE09CE2B14(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2518517;
	}
	if (func_863(iVar1))
	{
		if (func_862(unk_0x1146A9AE09CE2B14(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_870(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2518517 = iParam1;
		return;
	}
	Global_2518510[iParam0] = iParam1;
}

int func_871(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_332(iParam0, iParam1))
	{
		iVar0 = func_331(iParam0, iParam1);
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_4 > 0 && Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_872()
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1800), 28);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1800), 29);
	func_873(24);
}

void func_873(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

void func_874()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x159BC3DDA80D71AC(func_28(iVar0)))
		{
			uVar1 = unk_0x854C404AEB476240(func_28(iVar0));
			if (!unk_0xE50EB54E0F21BED0(uVar1, 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iVar1, 0))
				{
					func_597(func_166(unk_0x1146A9AE09CE2B14()), 0, 0f, 0, 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_875()
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_35())
	{
		iVar0 = 1;
	}
	Global_1681722.f_2 = Local_104.f_57;
	Global_1681722.f_3 = Local_104.f_58;
	func_876(iVar0, func_43(), func_36(), -1082130432);
}

void func_876(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	Var1 = Global_1681722;
	Var1.f_1 = Global_1681722.f_1;
	Var1.f_2 = Global_1681722.f_2;
	Var1.f_3 = Global_1681722.f_3;
	Var1.f_4 = Global_1681722.f_4;
	Var1.f_5 = Global_1681722.f_5;
	Var1.f_6 = Global_1681722.f_6;
	Var1.f_7 = Global_1681722.f_7;
	Var1.f_8 = Global_1681722.f_8;
	Var1.f_9 = Global_1681722.f_9;
	Var1.f_10 = Global_1681722.f_10;
	Var1.f_11 = Global_1681722.f_11;
	Var1.f_12 = Global_1681722.f_12;
	Var1.f_13 = Global_1681722.f_14;
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0xDA654EB115F9FF7D(uVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1681722.f_15;
			Var2.f_15 = Global_1681722.f_16;
			Var2.f_16 = Global_1681722.f_17;
			unk_0x250ED94701FCE892(&Var2);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1681722.f_15;
			Var3.f_15 = iParam0;
			Var3.f_16 = uParam1;
			unk_0x577BCA44D01C75F4(&Var3);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1681722.f_15;
			Var4.f_15 = iParam0;
			unk_0x1BD4DD9392DC8315(&Var4);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1681722.f_15;
			Var5.f_15 = iParam0;
			Var5.f_16 = uParam1;
			unk_0x5BCF1911DE29E0A0(&Var5);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1681722.f_15;
			Var6.f_15 = iParam0;
			unk_0x7F0217434D87D6A7(&Var6);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1681722.f_15;
			Var7.f_15 = iParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = uParam2;
			unk_0x21191EBAB2A13D65(&Var7);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = iParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = uParam2;
			Var8.f_17 = Global_1681722.f_15;
			unk_0x1D0A9129C236EFCF(&Var8);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = iParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = uParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1681722.f_15;
			unk_0x264CC3ACB3E22302(&Var9);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = iParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = uParam2;
			Var10.f_17 = Global_1681722.f_15;
			unk_0x9EC494C67ED8E15F(&Var10);
		}
	}
	func_877();
}

void func_877()
{
	struct<18> Var0;
	
	Global_1681722 = { Var0 };
}

void func_878(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 2;
	if (func_806(func_7(), 1))
	{
		if (Local_104.f_34 > 0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
	}
	else if (func_181(1, 0) > 0)
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 18))
	{
		iVar1 = 8;
	}
	else if (unk_0x234B68AC2E35ED5A(Local_104.f_1, 16))
	{
		iVar1 = 7;
	}
	if (bParam0)
	{
		iVar1 = 4;
	}
	func_879(bVar0, iVar1, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_879(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_503(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_4 = func_740();
		Global_1682001.f_5 = func_739();
		if (func_147(unk_0x1146A9AE09CE2B14()) || func_148(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682001.f_6 = 1;
		}
		else
		{
			Global_1682001.f_6 = 0;
		}
		Global_1682001.f_1 = func_935(bParam9);
		Global_1682001.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682001.f_9 = func_780(bParam0);
		Global_1682001.f_10 = iParam1;
		Global_1682001.f_17 = Global_1682001.f_2;
		Global_1682001.f_18 = Global_1682001.f_2;
		Global_1682001.f_19 = func_772();
		Global_1682001.f_21 = (Global_1682001.f_8 - Global_1682001.f_7);
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682001.f_23 = func_780(func_130(1));
		}
		Global_1682001.f_24 = func_39(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		if (Global_1682001.f_24 > 2)
		{
			Global_1682001.f_24 = 2;
		}
		func_933(iVar0);
	}
	else
	{
		iVar0 = func_104(unk_0x1146A9AE09CE2B14());
	}
	if (func_101(iVar0))
	{
		Global_1681740.f_2 = func_740();
		Global_1681740.f_3 = func_739();
		Global_1681740.f_50 = iParam4;
		Global_1681740.f_51 = iParam5;
		Global_1681740.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681740.f_20 = (Global_1681740.f_10 - Global_1681740.f_9);
		Global_1681740.f_12 = iParam1;
		Global_1681740.f_19 = func_929(iVar0, bParam0, func_932(bParam3));
		if (bParam0)
		{
			Global_1681740.f_11 = 1;
		}
		else
		{
			Global_1681740.f_11 = 0;
		}
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681740.f_8 = 1;
		}
		else
		{
			Global_1681740.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1681740.f_43 = 0;
			Global_1681740.f_45 = func_778(func_180(), iParam2);
			Global_1681740.f_47 = iParam7;
			Global_1681740.f_46 = iParam6;
			Global_1681740.f_52 = func_928(func_180(), iParam2);
		}
		func_926(iVar0);
	}
	else if (func_135(iVar0))
	{
		Global_1681794.f_2 = func_740();
		Global_1681794.f_3 = func_739();
		Global_1681794.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681794.f_19 = (Global_1681794.f_10 - Global_1681794.f_9);
		Global_1681794.f_12 = iParam1;
		if (bParam0)
		{
			Global_1681794.f_11 = 1;
		}
		else
		{
			Global_1681794.f_11 = 0;
		}
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681794.f_8 = 1;
		}
		else
		{
			Global_1681794.f_8 = 0;
		}
		func_924(iVar0);
	}
	else if (func_196(iVar0))
	{
		Global_1681857.f_2 = func_740();
		Global_1681857.f_3 = func_739();
		Global_1681857.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681857.f_18 = (Global_1681857.f_9 - Global_1681857.f_8);
		Global_1681857.f_11 = iParam1;
		Global_1681857.f_7 = func_772();
		Global_1681857.f_42 = func_775(func_100(), 5);
		iVar1 = unk_0x1146A9AE09CE2B14();
		iVar2 = func_218(iVar1);
		Global_1681857.f_28 = iVar2;
		Global_1681857.f_29 = func_780((func_694(iVar1) || func_693(iVar1)));
		Global_1681857.f_30 = func_780(func_923(iVar1));
		Global_1681857.f_32 = func_780(func_691(iVar1));
		Global_1681857.f_33 = func_780(func_692(iVar1));
		Global_1681857.f_34 = func_780(func_922(iVar1));
		Global_1681857.f_35 = func_780(func_690(0, iVar1) == 1);
		Global_1681857.f_36 = func_780(func_921(iVar1));
		Global_1681857.f_37 = func_780(func_920(iVar1));
		Global_1681857.f_38 = func_780(func_919(iVar1));
		Global_1681857.f_39 = func_780(func_330(iVar1, iVar2, 0));
		Global_1681857.f_40 = func_780(func_330(iVar1, iVar2, 2));
		Global_1681857.f_41 = func_780(func_330(iVar1, iVar2, 1));
		if (func_918(iVar1))
		{
			Global_1681857.f_31 = 2;
		}
		else if (func_917(iVar1))
		{
			Global_1681857.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1681857.f_10 = 1;
		}
		else
		{
			Global_1681857.f_10 = 0;
		}
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_6 = 1;
		}
		else
		{
			Global_1681857.f_6 = 0;
		}
		Global_1681857.f_21 = -2;
		Global_1681857.f_22 = -2;
		func_915(iVar0);
	}
	else if (func_195(iVar0))
	{
		Global_1681901.f_2 = func_740();
		Global_1681901.f_3 = func_739();
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681901.f_6 = 1;
		}
		else
		{
			Global_1681901.f_6 = 0;
		}
		Global_1681901.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681901.f_10 = func_780(bParam0);
		Global_1681901.f_11 = iParam1;
		Global_1681901.f_17 = func_773(func_7());
		Global_1681901.f_18 = (Global_1681901.f_9 - Global_1681901.f_8);
		Global_1681901.f_20 = iParam8;
		Global_1681901.f_21 = -2;
		Global_1681901.f_22 = -2;
		Global_1681901.f_27 = func_914();
		Global_1681901.f_29 = func_204(6109, -1, 0);
		Global_1681901.f_30 = func_204(6105, -1, 0);
		Global_1681901.f_31 = func_204(6106, -1, 0);
		Global_1681901.f_32 = func_204(6108, -1, 0);
		Global_1681901.f_33 = func_204(6107, -1, 0);
		Global_1681901.f_34 = func_204(6110, -1, 0);
		Global_1681901.f_36 = func_780(func_130(1));
		Global_1681901.f_37 = func_912();
		func_902();
		func_900(iVar0);
	}
	else if (func_194(iVar0))
	{
		Global_1681955.f_2 = func_740();
		Global_1681955.f_3 = func_739();
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681955.f_6 = 1;
		}
		else
		{
			Global_1681955.f_6 = 0;
		}
		Global_1681955.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681955.f_10 = func_780(bParam0);
		Global_1681955.f_11 = iParam1;
		Global_1681955.f_18 = (Global_1681955.f_9 - Global_1681955.f_8);
		Global_1681955.f_20 = iParam8;
		Global_1681955.f_23 = Global_786547;
		Global_1681955.f_36 = Global_786547.f_1;
		Global_1681955.f_24 = func_204(6159, -1, 0);
		Global_1681955.f_25 = func_204(6164, -1, 0);
		Global_1681955.f_26 = func_204(6165, -1, 0);
		Global_1681955.f_27 = func_780((((func_771() || func_770()) || func_769()) || func_768(unk_0x1146A9AE09CE2B14())));
		Global_1681955.f_28 = func_204(6166, -1, 0);
		Global_1681955.f_29 = func_780(func_767());
		Global_1681955.f_35 = -1;
		Global_1681955.f_38 = -1;
		Global_1681955.f_39 = Global_1681955.f_4;
		Global_1681955.f_40 = Global_1681955.f_5;
		Global_1681955.f_41 = func_740();
		Global_1681955.f_42 = func_780(func_130(1));
		Global_1681955.f_44 = Global_1681955.f_18;
		func_898(iVar0);
	}
	else if (func_189(iVar0))
	{
		if (Global_1682091.f_2 == -1)
		{
			Global_1682091.f_2 = func_740();
		}
		if (Global_1682091.f_3 == -1)
		{
			Global_1682091.f_3 = func_739();
		}
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682091.f_6 = 1;
		}
		else
		{
			Global_1682091.f_6 = 0;
		}
		Global_1682091.f_1 = func_935(0);
		Global_1682091.f_7 = func_772();
		Global_1682091.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682091.f_10 = func_780(bParam0);
		Global_1682091.f_11 = iParam1;
		if (func_180() != -1)
		{
			Global_1682091.f_17 = func_766(func_180());
		}
		Global_1682091.f_18 = (Global_1682091.f_9 - Global_1682091.f_8);
		Global_1682091.f_19 = Global_2544210.f_6682;
		Global_1682091.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		Global_1682091.f_29 = func_780(func_897(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_30 = func_780(func_896(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_31 = func_748(unk_0x1146A9AE09CE2B14());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682091.f_33 = func_780(func_130(1));
		}
		if (Global_1682091.f_34 > 2)
		{
			Global_1682091.f_34 = 2;
		}
		func_894(iVar0);
	}
	else if (func_193(iVar0))
	{
		Global_1682037.f_2 = func_740();
		Global_1682037.f_3 = func_739();
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682037.f_6 = 1;
		}
		else
		{
			Global_1682037.f_6 = 0;
		}
		Global_1682037.f_1 = func_935(0);
		Global_1682037.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682037.f_10 = func_780(bParam0);
		Global_1682037.f_11 = iParam1;
		Global_1682037.f_18 = (Global_1682037.f_9 - Global_1682037.f_8);
		Global_1682037.f_28 = func_781(unk_0x1146A9AE09CE2B14());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_765(unk_0x1146A9AE09CE2B14());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_749(unk_0x1146A9AE09CE2B14(), 4, -1);
		Global_1682037.f_31 = func_748(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_32 = func_780(func_747(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_33 = func_780(func_746(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_34 = func_780(func_745(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_35 = func_780(func_744(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_36 = func_743(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_37 = func_742(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_39 = func_741(unk_0x1146A9AE09CE2B14());
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682037.f_41 = func_780(func_130(1));
		}
		if (Global_1682037.f_42 > 2)
		{
			Global_1682037.f_42 = 2;
		}
		func_892(iVar0);
	}
	else if (func_188(iVar0))
	{
		Global_1682175.f_2 = func_740();
		Global_1682175.f_3 = func_739();
		Global_1682175.f_4 = func_783(func_180());
		Global_1682175.f_5 = func_782(func_180());
		if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682175.f_6 = 1;
		}
		else
		{
			Global_1682175.f_6 = 0;
		}
		Global_1682175.f_7 = func_772();
		Global_1682175.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682175.f_10 = func_780(bParam0);
		Global_1682175.f_11 = iParam1;
		if (func_7() != -1)
		{
			Global_1682175.f_17 = func_766(func_7());
		}
		Global_1682175.f_18 = (Global_1682175.f_9 - Global_1682175.f_8);
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = func_891(unk_0x1146A9AE09CE2B14());
		Global_1682175.f_27 = func_780(func_738(unk_0x1146A9AE09CE2B14()));
		Global_1682175.f_28 = func_735(21, -1);
		Global_1682175.f_29 = func_780(func_890(unk_0x1146A9AE09CE2B14()));
		func_888(iVar0);
	}
	else if (func_187(iVar0))
	{
		if (func_180() != -1)
		{
			Global_1682250.f_6 = func_783(func_180());
			Global_1682250.f_7 = func_782(func_180());
		}
		if (func_81(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682250.f_8 = func_780(func_130(1));
		}
		Global_1682250.f_10 = func_772();
		Global_1682250.f_11 = 1;
		Global_1682250.f_13 = (unk_0x666C16A4ED8F3098() - Global_1710053);
		Global_1682250.f_14 = iParam1;
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		func_886(iVar0);
	}
	else if (func_186(iVar0))
	{
		Global_1682337.f_2 = func_740();
		if (func_180() != -1)
		{
			Global_1682337.f_6 = func_783(func_180());
			Global_1682337.f_7 = func_782(func_180());
		}
		Global_1682337.f_8 = func_780(func_130(1));
		Global_1682337.f_10 = func_772();
		Global_1682337.f_11 = 1;
		Global_1682337.f_14 = iParam1;
		func_884(iVar0);
	}
	else if (func_716(iVar0))
	{
		Global_1682449.f_2 = func_740();
		Global_1682449.f_9 = 1;
		Global_1682449.f_10 = bParam0;
		Global_1682449.f_11 = iParam1;
		func_882(iVar0);
	}
	else if (func_185(iVar0))
	{
		if (func_180() != -1)
		{
			Global_1682470.f_5 = func_783(func_180());
			Global_1682470.f_6 = func_782(func_180());
		}
		Global_1682470.f_7 = func_780(func_130(1));
		Global_1682470.f_9 = func_772();
		Global_1682470.f_10 = 1;
		Global_1682470.f_13 = iParam1;
		func_880(iVar0);
	}
	else
	{
		Global_1681722.f_6 = unk_0x666C16A4ED8F3098();
		if (bParam0)
		{
			Global_1681722.f_7 = 1;
		}
		else
		{
			Global_1681722.f_7 = 0;
		}
		Global_1681722.f_8 = iParam1;
		if (Global_1681722.f_4 == 0)
		{
			if ((func_146(unk_0x1146A9AE09CE2B14()) || func_145(unk_0x1146A9AE09CE2B14())) || func_158(unk_0x1146A9AE09CE2B14()))
			{
				Global_1681722.f_4 = 1;
			}
		}
	}
}

void func_880(int iParam0)
{
	unk_0x1A67DFBF1F5C3835(&Global_1682470);
	func_881();
}

void func_881()
{
	struct<32> Var0;
	
	Global_1682470 = { Var0 };
}

void func_882(int iParam0)
{
	unk_0x47F6F4E3A427902C(&Global_1682449);
	func_883();
}

void func_883()
{
	struct<21> Var0;
	
	Global_1682449 = { Var0 };
}

void func_884(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E1CF9E6DC044F6E(&Global_1682337);
	func_885();
}

void func_885()
{
	struct<35> Var0;
	
	Global_1682337 = { Var0 };
	Global_1682337.f_23 = 0;
	Global_1682337.f_22 = 0;
	Global_1682337.f_21 = 0;
}

void func_886(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE895584921D5DCB3(&Global_1682250);
	func_887();
}

void func_887()
{
	struct<36> Var0;
	
	Global_1682250 = { Var0 };
	Global_1682250.f_23 = 0;
	Global_1682250.f_22 = 0;
	Global_1682250.f_21 = 0;
}

void func_888(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x75C657917FB4003B(&Global_1682175);
	func_889();
}

void func_889()
{
	struct<31> Var0;
	
	Global_1682175 = { Var0 };
}

int func_890(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_371.f_2, 6);
	}
	return 0;
}

int func_891(int iParam0)
{
	if (func_104(iParam0) == 243)
	{
		return func_192(iParam0);
	}
	return -1;
}

void func_892(int iParam0)
{
	unk_0xB1E79F9A1E81311C(&Global_1682037);
	func_893();
}

void func_893()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1682037 = { Var0 };
}

void func_894(int iParam0)
{
	unk_0x63C4B5C08A6803B2(&Global_1682091);
	func_895();
}

void func_895()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1682091 = { Var0 };
}

bool func_896(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 0);
}

bool func_897(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 5);
	}
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 19);
}

void func_898(int iParam0)
{
	unk_0x347A83B3F61970C7(&Global_1681955);
	func_899();
}

void func_899()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1681955 = { Var0 };
	Global_1681955.f_16 = 0;
}

void func_900(int iParam0)
{
	unk_0x1CB9689363D61451(&Global_1681901);
	func_901();
}

void func_901()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1681901 = { Var0 };
	Global_1681901.f_23 = 0;
	Global_1681901.f_24 = 0;
	Global_1681901.f_16 = 0;
}

void func_902()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_703(12));
		func_702(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323703[iVar1 /*142*/].f_66 != 0 && func_904(Global_1323703[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2544210.f_958 != iVar1)
				{
					if (func_903(Global_1323703[iVar1 /*142*/].f_66))
					{
						if (Global_1323703[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1323703[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1681901.f_38 = iVar3;
								break;
							
							case 1:
								Global_1681901.f_39 = iVar3;
								break;
							
							case 2:
								Global_1681901.f_40 = iVar3;
								break;
							
							case 3:
								Global_1681901.f_41 = iVar3;
								break;
							
							case 4:
								Global_1681901.f_42 = iVar3;
								break;
							
							case 5:
								Global_1681901.f_43 = iVar3;
								break;
							
							case 6:
								Global_1681901.f_44 = iVar3;
								break;
							
							case 7:
								Global_1681901.f_45 = iVar3;
								break;
							
							case 8:
								Global_1681901.f_46 = iVar3;
								break;
							
							case 9:
								Global_1681901.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_904(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_911())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_910() && !func_909()) && !func_908()) && !func_907()) && !func_911())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_908())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_906(iParam0))
		{
			return 0;
		}
	}
	if (!func_905(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_905(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_233())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_906(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_907()
{
	return 0;
}

int func_908()
{
	return 1;
}

int func_909()
{
	return 1;
}

int func_910()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_911()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_912()
{
	var uVar0;
	
	uVar0 = func_913();
	if (!func_179())
	{
		if (func_180() != func_40())
		{
			uVar0 = func_39(func_180()) + 1;
		}
	}
	return uVar0;
}

int func_913()
{
	return func_39(unk_0x1146A9AE09CE2B14()) + 1;
}

int func_914()
{
	return func_204(6115, -1, 0);
}

void func_915(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x25A7052BD3A74454(&Global_1681857);
	func_916();
}

void func_916()
{
	struct<44> Var0;
	
	Global_1681857 = { Var0 };
	Global_1681857.f_23 = 0;
	Global_1681857.f_24 = 0;
	Global_1681857.f_16 = 0;
}

bool func_917(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 12);
}

bool func_918(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 13);
}

int func_919(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 12) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 13)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_920(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_921(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (((((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_922(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 6) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 7)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_923(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 9);
}

void func_924(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x23BA98A349F4B91D(&Global_1681794);
	func_925();
}

void func_925()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1681794 = { Var0 };
	Global_1681794.f_24 = 0;
	Global_1681794.f_25 = 0;
	Global_1681794.f_17 = 0;
}

void func_926(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE68A21B882B190D2(&Global_1681740);
	func_927();
}

void func_927()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1681740 = { Var0 };
	Global_1681740.f_29 = 0;
	Global_1681740.f_30 = 0;
	Global_1681740.f_17 = 0;
}

int func_928(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_330(iParam0, iParam1, 2);
	bVar1 = func_330(iParam0, iParam1, 1);
	bVar2 = func_330(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_929(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_205(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 19;
	}
	else if (func_429(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_122(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17858;
			iVar1 = 20;
		}
	}
	else if (func_101(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x271E26F00E8A6125(func_783(func_180()), func_782(func_180()), func_740(), func_739(), iVar1, iVar0);
	}
	func_931(iVar0);
	func_930(iVar0);
	return iVar0;
}

void func_930(int iParam0)
{
	int iVar0;
	
	iVar0 = func_204(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_465 = iVar0;
	func_202(3970, iVar0, -1, 1, 0);
}

void func_931(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	Global_1630816[iVar0 /*597*/].f_11.f_464 = (Global_1630816[iVar0 /*597*/].f_11.f_464 + iParam0);
	if (Global_1630816[iVar0 /*597*/].f_11.f_464 < -9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
	else if (Global_1630816[iVar0 /*597*/].f_11.f_464 > 9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
}

int func_932(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_146(unk_0x1146A9AE09CE2B14()) || func_158(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

void func_933(var uParam0)
{
	unk_0x091644086E892B74(&Global_1682001);
	func_934();
}

void func_934()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1682001 = { Var0 };
}

int func_935(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_503(unk_0x1146A9AE09CE2B14());
	}
	else
	{
		iVar0 = func_104(unk_0x1146A9AE09CE2B14());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_940(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_938(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_937(unk_0x1146A9AE09CE2B14());
			if (func_190(func_191(unk_0x1146A9AE09CE2B14())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_937(unk_0x1146A9AE09CE2B14());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_936(unk_0x1146A9AE09CE2B14());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_936(unk_0x1146A9AE09CE2B14());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_936(int iParam0)
{
	if (func_104(unk_0x1146A9AE09CE2B14()) == 238 || func_104(unk_0x1146A9AE09CE2B14()) == 249)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_474;
	}
	return -1;
}

int func_937(int iParam0)
{
	if (func_104(unk_0x1146A9AE09CE2B14()) == 237 || func_104(unk_0x1146A9AE09CE2B14()) == 250)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_473;
	}
	return -1;
}

int func_938(int iParam0)
{
	return func_939(iParam0, 150);
}

int func_939(int iParam0, int iParam1)
{
	if (func_503(iParam0) == iParam1)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_471;
	}
	return -1;
}

int func_940(int iParam0)
{
	return func_939(iParam0, 236);
}

int func_941(struct<21> Param0)
{
	func_1056(func_1057(Param0), Param0);
	unk_0x71E63FA8638D90D9(0);
	unk_0xCE293C7793B5EC3F(func_989(157, -1, 1, -1, -1, -1));
	func_986(0, -1, 0);
	unk_0xF784CE07ED70869A(&Local_104, 59);
	unk_0xC84352B5E80ABF68(&Local_105, 129);
	unk_0x87F1904AB605184A(0);
	func_942(157, 0, 0);
	return 1;
}

void func_942(int iParam0, int iParam1, bool bParam2)
{
	func_985();
	if (func_57(unk_0x1146A9AE09CE2B14()))
	{
		func_944(1);
	}
	if ((iParam0 != 0 && unk_0x8CFC2F41A749E236(iParam1)) && func_806(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x191DDA30577F440A(&Global_1681708, 0);
				break;
			}
	}
	if (!func_179() && !func_81(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (func_154())
		{
			func_639(3);
		}
	}
	func_639(4);
	if (func_106(0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 = func_180();
	}
	if (func_101(iParam0))
	{
		func_927();
		Global_1681740.f_18 = func_773(func_7());
	}
	else if (func_135(func_852(unk_0x1146A9AE09CE2B14())))
	{
		func_925();
		Global_1681794.f_18 = func_773(func_7());
	}
	if (bParam2)
	{
		if (!func_149())
		{
			func_640(1);
		}
	}
	func_943();
}

void func_943()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1368721.f_534[iVar0 /*42*/].f_1 = func_40();
		Global_1368721.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_944(bool bParam0)
{
	int iVar0;
	
	func_873(33);
	func_873(34);
	func_873(35);
	func_873(36);
	func_873(37);
	func_873(38);
	func_873(39);
	func_873(40);
	func_873(43);
	func_873(41);
	func_873(54);
	func_873(42);
	func_873(47);
	func_984(23);
	func_984(24);
	func_873(92);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1800), 2);
	func_983();
	func_978();
	func_973();
	func_968();
	func_957();
	func_953();
	func_949();
	func_946();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_945(3))
	{
		func_984(3);
	}
	else if (func_945(4))
	{
		func_984(4);
	}
	else if (func_945(5))
	{
		func_984(5);
	}
	else if (func_945(6))
	{
		func_984(6);
	}
	else if (func_945(7))
	{
		func_984(7);
	}
	else if (((((((((((((((((func_945(0) || func_945(1)) || func_945(2)) || func_945(8)) || func_945(9)) || func_945(10)) || func_945(11)) || func_945(12)) || func_945(13)) || func_945(14)) || func_945(15)) || func_945(16)) || func_945(17)) || func_945(18)) || func_945(19)) || func_945(20)) || func_945(21)) || func_945(22))
	{
		func_984(8);
		func_984(0);
		func_984(1);
		func_984(2);
		func_984(9);
		func_984(10);
		func_984(11);
		func_984(12);
		func_984(13);
		func_984(14);
		func_984(15);
		func_984(16);
		func_984(17);
		func_984(18);
		func_984(19);
		func_984(20);
		func_984(21);
		func_984(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_945(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_14[iVar0], iVar1);
}

void func_946()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_948(iVar0))
		{
			func_947(iVar0);
		}
		iVar0++;
	}
}

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_35[iVar0]), iVar1);
}

bool func_948(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_35[iVar0], iVar1);
}

void func_949()
{
	if (func_951())
	{
		func_950(0);
		func_950(1);
		func_950(2);
		func_950(3);
	}
}

void func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_33[iVar0]), iVar1);
}

int func_951()
{
	if (((func_952(0) || func_952(1)) || func_952(2)) || func_952(3))
	{
		return 1;
	}
	return 0;
}

bool func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_33[iVar0], iVar1);
}

void func_953()
{
	if (func_955())
	{
		func_954(4);
		func_954(5);
		func_954(6);
		func_954(7);
	}
}

void func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_31[iVar0]), iVar1);
}

int func_955()
{
	if (((func_956(4) || func_956(5)) || func_956(6)) || func_956(7))
	{
		return 1;
	}
	return 0;
}

bool func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_31[iVar0], iVar1);
}

void func_957()
{
	var uVar0;
	
	if (func_967())
	{
		func_966(8);
		func_966(9);
		func_966(10);
		func_966(12);
		func_966(13);
		func_966(14);
		func_966(19);
		func_966(20);
		func_966(21);
		func_966(22);
		func_966(23);
		func_966(24);
		func_966(25);
		func_966(26);
		func_966(15);
		func_966(16);
		func_966(17);
		func_966(18);
		func_966(35);
		func_966(45);
		func_966(46);
		if (func_965(11))
		{
			func_966(11);
			uVar0 = func_204(7228, -1, 0);
			unk_0x191DDA30577F440A(&uVar0, 2);
			func_202(7228, uVar0, -1, 1, 0);
		}
	}
	if (func_965(48))
	{
		if (func_963(151, 3))
		{
			func_961(151, 3);
		}
		func_966(48);
	}
	if (func_965(49))
	{
		if (func_963(152, 3))
		{
			func_961(152, 3);
		}
		func_966(49);
	}
	if (func_965(50))
	{
		if (func_963(153, 3))
		{
			func_961(153, 3);
		}
		func_966(50);
	}
	if (func_965(51))
	{
		if (func_963(func_958(), 3))
		{
			func_961(func_958(), 3);
		}
		func_966(51);
	}
}

int func_958()
{
	if (func_960())
	{
		func_959(154, Global_19798, 1);
	}
	return 154;
}

void func_959(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_960()
{
	int iVar0;
	
	iVar0 = func_41(unk_0x1146A9AE09CE2B14());
	if (((iVar0 != unk_0x1146A9AE09CE2B14() && iVar0 != func_40()) && unk_0x8CFC2F41A749E236(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_961(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_962(iParam0, iVar0, 0);
			func_959(iParam0, iVar0, 0);
		}
	}
}

void func_962(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_963(int iParam0, int iParam1)
{
	if (func_964(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_964(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

bool func_965(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_26[iVar0], iVar1);
}

void func_966(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_26[iVar0]), iVar1);
}

int func_967()
{
	if (((((((((((((((((((((func_965(8) || func_965(9)) || func_965(10)) || func_965(12)) || func_965(11)) || func_965(13)) || func_965(14)) || func_965(19)) || func_965(20)) || func_965(21)) || func_965(22)) || func_965(23)) || func_965(24)) || func_965(25)) || func_965(26)) || func_965(15)) || func_965(16)) || func_965(17)) || func_965(18)) || func_965(35)) || func_965(45)) || func_965(46))
	{
		return 1;
	}
	return 0;
}

void func_968()
{
	if (func_972())
	{
		func_971(0);
		func_971(1);
		func_971(2);
		func_971(3);
		func_971(4);
		func_971(5);
		if (func_970(32))
		{
			if (func_963(func_969(), 3))
			{
				func_961(func_969(), 3);
			}
			func_971(32);
		}
	}
}

int func_969()
{
	if (func_960())
	{
		func_959(12, Global_19798, 1);
	}
	return 12;
}

bool func_970(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_23[iVar0], iVar1);
}

void func_971(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_23[iVar0]), iVar1);
}

int func_972()
{
	if ((((func_970(1) || func_970(0)) || func_970(2)) || func_970(4)) || func_970(5))
	{
		return 1;
	}
	return 0;
}

void func_973()
{
	if (func_977())
	{
		func_976(0);
		func_976(1);
		func_976(2);
		func_976(3);
		func_976(4);
		func_976(5);
		func_976(6);
		func_976(7);
		if (func_975(8))
		{
			func_976(8);
		}
		if (func_975(15))
		{
			if (func_963(func_974(), 3))
			{
				func_961(func_974(), 3);
			}
			func_976(15);
		}
	}
}

int func_974()
{
	if (func_960())
	{
		func_959(20, Global_19798, 1);
	}
	return 20;
}

bool func_975(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_21[iVar0], iVar1);
}

void func_976(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_21[iVar0]), iVar1);
}

int func_977()
{
	if ((((((((func_975(0) || func_975(1)) || func_975(2)) || func_975(3)) || func_975(4)) || func_975(5)) || func_975(6)) || func_975(7)) || func_975(8))
	{
		return 1;
	}
	return 0;
}

void func_978()
{
	if (func_982())
	{
		func_981(0);
		func_981(1);
		func_981(2);
		func_981(3);
		func_981(4);
		func_981(5);
		func_981(6);
		func_981(7);
		func_981(8);
		func_981(9);
		func_981(10);
		func_981(11);
		func_981(12);
		if (func_980(13))
		{
			if (func_963(func_979(), 3))
			{
				func_961(func_979(), 3);
			}
			func_981(13);
		}
	}
}

int func_979()
{
	if (func_960())
	{
		func_959(76, Global_19798, 1);
	}
	return 76;
}

bool func_980(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_19[iVar0], iVar1);
}

void func_981(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_19[iVar0]), iVar1);
}

int func_982()
{
	if ((((((((((((func_980(0) || func_980(1)) || func_980(2)) || func_980(3)) || func_980(4)) || func_980(5)) || func_980(6)) || func_980(7)) || func_980(8)) || func_980(9)) || func_980(10)) || func_980(11)) || func_980(12))
	{
		return 1;
	}
	return 0;
}

void func_983()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2544210.f_5191.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_984(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_14[iVar0]), iVar1);
}

void func_985()
{
	struct<14> Var0;
	
	Global_1681722 = { Var0 };
	Global_1681722.f_14 = 0;
	Global_1681722.f_15 = 0;
}

int func_986(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_988();
			}
			else
			{
				return 0;
			}
		}
		if (!func_987())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_988();
					}
					else
					{
						return 0;
					}
				}
				if (func_824())
				{
					if (!bParam2)
					{
						func_988();
					}
					else
					{
						return 0;
					}
				}
				if (func_822(157))
				{
					if (!bParam2)
					{
						func_988();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x930F75DAF7DE892B())
			{
				if (!bParam2)
				{
					func_988();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x41BB6B0BDB7933FF();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (!bParam2)
			{
				func_988();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x930F75DAF7DE892B())
	{
		if (!bParam2)
		{
			func_988();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_987()
{
	return Global_1312878;
}

void func_988()
{
	unk_0x4BFE89D21F9885DC();
}

int func_989(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_1055(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_1051(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_1044(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_1029(iParam1, iParam3, iParam4, unk_0xC502CD39B4994F3A(iParam5), 0, 0, 0);
		
		case 233:
			return func_1019(iParam1, iParam3, iParam4, unk_0xC502CD39B4994F3A(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_1014(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_1012(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_1011(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_1003(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_996(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_990(iParam1, iParam3, unk_0xC502CD39B4994F3A(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_990(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_995(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_994(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_993(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_992(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_991(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_991(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_992(int iParam0, int iParam1)
{
	return func_991(iParam0, iParam1) > 0;
}

int func_993(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_994(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_995(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_996(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_1002(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_1001(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_999(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_998(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_997(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_997(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_998(int iParam0, int iParam1)
{
	return func_997(iParam0, iParam1) > 0;
}

int func_999(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_40())
			{
				if (func_81(iParam2, 1))
				{
					Var0 = { func_1000(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

Vector3 func_1000(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_304;
}

int func_1001(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_1002(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_1003(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1010(iParam0))
		{
			iVar0 = (iVar0 + func_1009(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_1008(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_1007(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_1006(func_39(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_1005(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_1004(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_1004(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1005(int iParam0, int iParam1)
{
	return func_1004(iParam0, iParam1) > 0;
}

int func_1006(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1007(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_1008(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_1009(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_39(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1010(int iParam0)
{
	return 0;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_1012(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_1013(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1013(int iParam0)
{
	return 1;
}

int func_1014(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_1018(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_1015(iParam0, func_366() + 1));
	}
	return iVar0;
}

int func_1015(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_558(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_1017(iParam0, iParam1);
			iVar2 = func_1016(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_1018(iParam0))
		{
			if (iVar0 > Global_262145.f_18093)
			{
				iVar0 = Global_262145.f_18093;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18092)
			{
				iVar0 = Global_262145.f_18092;
			}
			if (iVar0 > Global_262145.f_18091)
			{
				iVar0 = Global_262145.f_18091;
			}
		}
	}
	return iVar0;
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18130;
		
		case 10:
			return Global_262145.f_18155;
		
		default:
	}
	return 1;
}

int func_1017(int iParam0, int iParam1)
{
	if (func_1018(iParam0))
	{
		if (iParam1 >= Global_262145.f_18094)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18131;
		
		case 10:
			return Global_262145.f_18156;
		
		default:
	}
	return 8;
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_1019(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_1028(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1025(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_1024(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1023(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1022(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1021(iParam0))
		{
			iVar0 = (iVar0 + func_1020(iParam0));
		}
	}
	return iVar0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1021(int iParam0)
{
	return func_1020(iParam0) > 0;
}

int func_1022(var uParam0, int iParam1)
{
	return 2;
}

int func_1023(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1024(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_204(5328, -1, 0);
			if (unk_0x234B68AC2E35ED5A(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_1025(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_1028(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_1027(iParam0))
	{
		iVar0 = func_1027(iParam0);
	}
	else if (iVar0 < func_1026(iParam0))
	{
		iVar0 = func_1026(iParam0);
	}
	return iVar0;
}

int func_1026(int iParam0)
{
	return 1;
}

int func_1027(int iParam0)
{
	return 4;
}

int func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1029(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1043(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1036(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_1035(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1034(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1032(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1031(iParam0))
		{
			iVar0 = (iVar0 + func_1030(iParam0));
		}
	}
	return iVar0;
}

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1031(int iParam0)
{
	return func_1030(iParam0) > 0;
}

int func_1032(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_1033(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1033(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_1033(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_1034(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1035(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_1036(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_1042(iParam0))
	{
		iVar1 = func_1041(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_1040(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_1039(iParam2))
		{
			iVar0 = func_1039(iParam2);
		}
	}
	if (iVar0 > func_1038(iParam0))
	{
		iVar0 = func_1038(iParam0);
	}
	else if (iVar0 < func_1037(iParam0))
	{
		iVar0 = func_1037(iParam0);
	}
	return iVar0;
}

int func_1037(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_1038(int iParam0)
{
	if (!func_1042(iParam0))
	{
		if (func_1043(iParam0))
		{
			if (func_1033(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_1039(int iParam0)
{
	if (iParam0 == func_40() || Global_1590908[iParam0 /*874*/].f_267.f_266 == 0)
	{
		return 50;
	}
	return (50 - Global_1590908[iParam0 /*874*/].f_267.f_266.f_3);
}

int func_1040(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_1041(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_1042(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_1043(int iParam0)
{
	if (func_1042(iParam0) || func_1040(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1044(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_1049(iParam0, func_366() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_1048(iParam0))
		{
			iVar0 = (iVar0 + func_1049(iParam0, func_366() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_1047(iParam0, func_366() + 1));
	}
	if (!bParam3)
	{
		if (func_1046(iParam0))
		{
			iVar0 = (iVar0 + func_1045(iParam0));
		}
	}
	return iVar0;
}

int func_1045(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1046(int iParam0)
{
	return func_1045(iParam0) > 0;
}

int func_1047(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_1049(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_1050(iParam0))
	{
		if (iParam2 <= Global_262145.f_21387)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21388)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_1048(iParam0))
	{
		if (iParam1 < Global_262145.f_21347)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_1051(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_1054(iParam0, func_366() + 1, iParam2));
	iVar0 = (iVar0 + func_1052(iParam0));
	return iVar0;
}

int func_1052(int iParam0)
{
	if (func_1053(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_1053(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1054(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1055(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

void func_1056(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x02BFF15CAA701972())
	{
		func_988();
	}
	unk_0x35BEDD7AFD26FCD5(uParam0, 0, Param1.f_16);
}

int func_1057(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 153:
			return 32;
		
		case 154:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 32;
		
		case 148:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 155:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 2;
		
		case 164:
			return 1;
		
		case 160:
			return 2;
		
		case 161:
			return 4;
		
		case 162:
			return 2;
		
		case 163:
			return 2;
		
		case 145:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 0;
		
		case 187:
			return 1;
		
		case 172:
			return 4;
		
		case 175:
			return 4;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 183:
			return 1;
		
		case 179:
			return 2;
		
		case 184:
			return 1;
		
		case 180:
			return 1;
		
		case 178:
			return 2;
		
		case 181:
			return 8;
		
		case 182:
			return 8;
		
		case 185:
			return 1;
		
		case 186:
			return 2;
		
		case 173:
			return 16;
		
		case 174:
			return 32;
		
		default:
	}
	switch (func_357(func_1058(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_1058(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 159:
			return 15;
		
		case 166:
			return 8;
		
		case 160:
			return 14;
		
		case 164:
			return 122;
		
		case 167:
			return 1;
		
		case 165:
			return 5;
		
		case 168:
			return 6;
		
		case 161:
			return 11;
		
		case 169:
			return 0;
		
		case 170:
			return 2;
		
		case 162:
			return 13;
		
		case 171:
			return 3;
		
		case 163:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 269;
		
		case 139:
			return 270;
		
		case 140:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 281;
}

