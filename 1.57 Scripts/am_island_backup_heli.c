#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (unk_0x02BFF15CAA701972())
	{
		func_99(ScriptParam_79);
	}
	while (true)
	{
		func_98();
		if (func_87())
		{
			func_84();
		}
		if (unk_0x443E2CA72E118E64())
		{
			if (Global_2544210.f_444)
			{
				Local_77.f_20 = 1;
				if (unk_0xAB0F784335D14AC3() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (unk_0x02BFF15CAA701972())
		{
			func_83();
			switch (func_82(unk_0xDD0E57E73E5C4BF6()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[unk_0xDD0E57E73E5C4BF6()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[unk_0xDD0E57E73E5C4BF6()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (unk_0x443E2CA72E118E64())
			{
				switch (func_81())
				{
					case 0:
						Local_77 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77 = 3;
	}
	if (func_6(&(Local_77.f_1.f_17)))
	{
		if (func_4(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77 = 3;
		}
	}
	if (func_3())
	{
		Local_77 = 3;
	}
	if (bLocal_62)
	{
		if (!unk_0xD09C9D030AFD3F25())
		{
			Local_77 = 3;
		}
	}
	else if (unk_0xD09C9D030AFD3F25())
	{
		Local_77 = 3;
	}
	if (func_2())
	{
		Local_77 = 3;
	}
}

bool func_2()
{
	return Global_1660866.f_3;
}

bool func_3()
{
	return Global_1312436;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_77.f_1.f_15)))
				{
					if (func_4(&(Local_77.f_1.f_15), Global_262145.f_10788, 0))
					{
						func_60(3);
					}
				}
				if (func_10(unk_0x1146A9AE09CE2B14(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(unk_0x1146A9AE09CE2B14(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_13(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xE50EB54E0F21BED0(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	Global_2544210.f_443 = iParam0;
}

bool func_15()
{
	return Global_2544210.f_443;
}

void func_16()
{
	if (Global_2441237.f_4126)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2441237.f_4125 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(int iParam0, int iParam1)
{
	if (Global_2441237.f_4009[iParam0] < iParam1)
	{
		Global_2441237.f_4009[iParam0] = iParam1;
	}
	unk_0x191DDA30577F440A(&(Global_2441237.f_4008), iParam0);
}

void func_18()
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_77.f_1)))
	{
		func_26(&(Local_77.f_1));
		iLocal_66++;
	}
	if (func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x159BC3DDA80D71AC(Local_77.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x159BC3DDA80D71AC(Local_77.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (unk_0xB99E3F8D18D17364(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			unk_0xCE293C7793B5EC3F(iLocal_66);
		}
	}
	if (unk_0x0481156B0E5C0340(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			unk_0x54BBD34B26EF27D9(iLocal_67);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(Global_1391771, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391771.f_1;
			break;
		
		case 1:
			return Global_1391771.f_2;
			break;
		
		case 2:
			return Global_1391771.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_218;
			}
			else
			{
				return unk_0x0481156B0E5C0340(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_219;
			}
			else
			{
				return unk_0xB99E3F8D18D17364(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8ED8428AB65B7367())
			{
				return Global_2426865[iVar0 /*449*/].f_220;
			}
			else
			{
				return unk_0x5E85B9A5E6984D7D(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1391779;
			break;
		
		case 1:
			return Global_1391780;
			break;
		
		case 2:
			return Global_1391781;
			break;
	}
	return 0;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

int func_27()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_77.f_1.f_1))
	{
		if (func_39(Local_77.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_77.f_1))
			{
				if (func_36(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					uVar1 = unk_0x854C404AEB476240(Local_77.f_1);
					if (unk_0xCF1FE5DEA3E2E135(uVar1) > 0)
					{
						unk_0x7D867CDA26E248C7(uVar1, 0);
					}
					unk_0xC612552622E74D36(uVar1, 127, 0);
					unk_0x4B43AFBD2CEE7724(uVar1);
					unk_0x89E171705EA920DA(uVar1, 1, 1, 0);
					unk_0x5C052A30B9FCA449(uVar1, 1);
					unk_0xC5DE9743D6DA2C15(uVar1);
					unk_0x0B87A8220B73252D(uVar1, 1);
					func_35(uVar1, 4);
					Global_2441237.f_4127 = uVar1;
					unk_0xC595907BB71C921D(uVar1, Global_262145.f_10789, 0);
					if (func_34(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						uVar2 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[0 /*2*/]);
						func_29(Local_77.f_1.f_3[0 /*2*/]);
						func_28(uVar2, 0, 0, 1);
						unk_0x871989750407EC02(uVar2, unk_0x1146A9AE09CE2B14());
						func_35(uVar2, 4);
						Global_2441237.f_4127.f_1[0] = uVar2;
						unk_0x4170FE884DF7426D(uVar2, 0, 1, 1, 0);
						unk_0x4170FE884DF7426D(uVar2, 2, 1, 1, 0);
						unk_0x4170FE884DF7426D(uVar2, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(uVar2, 4, 0, 0, 0);
						unk_0x4170FE884DF7426D(uVar2, 8, 0, 1, 0);
						unk_0xC8749D706BBF16E1(uVar2, 1, 0, 0, 0);
						unk_0xC8749D706BBF16E1(uVar2, 0, 0, 0, 0);
						if (func_34(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_77.f_1.f_3[1 /*2*/]);
							func_28(unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x871989750407EC02(unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]), unk_0x1146A9AE09CE2B14());
							func_35(unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2441237.f_4127.f_1[1] = unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]);
							unk_0x824F744352C8BC82(Local_77.f_1.f_3[1 /*2*/].f_1);
							unk_0x824F744352C8BC82(iVar0);
							unk_0x824F744352C8BC82(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0xFA13CA7EC498AD09(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xA415F00D0E0DFBCE(uParam0, 5, 1);
	unk_0xA415F00D0E0DFBCE(uParam0, 3, 0);
	unk_0xEA480A62F5D29812(uParam0, 2);
	unk_0x095503B9F1CAC814(uParam0, 2);
	unk_0x52261CF13B75FFA8(uParam0, 2);
	unk_0x2BDB866C1791F9D7(uParam0, 1);
	unk_0x7BC3A9305442B7FD(uParam0, 1);
	unk_0x1D7A4E9E23D306D6(uParam0, 1);
	unk_0x087B9DEC55AB5B29(uParam0, (fLocal_71[iParam1] + 100f));
	unk_0xF5B58EA504D56F28(uParam0, 400f);
	unk_0x817234E2BB671752(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xF8E5239A2E6E0754(uParam0, 250);
			unk_0xC595907BB71C921D(uParam0, 250, 0);
			unk_0x2BD4A25EBA9A42AD(uParam0, 250);
		}
	}
	else
	{
		unk_0x8F160110753EB17B(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	var uVar0;
	
	if (!func_31(unk_0x1146A9AE09CE2B14(), 0, 0) && !func_30())
	{
		uVar0 = Global_1575036[5];
	}
	else
	{
		uVar0 = unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269());
	}
	unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(uParam0), uVar0);
}

bool func_30()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_32(iParam0))
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

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

bool func_33(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_34(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(uParam1))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0x8A437068C87289B7(*uParam0), iParam7);
		if (unk_0x895470BB92940DC6(unk_0x8A437068C87289B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5B38E054B758C032(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x05351AF95891EE5C(uParam0, "AttributeDamage");
	}
	unk_0x191DDA30577F440A(&iVar0, iParam1);
	unk_0x6C9577C090944B92(uParam0, "AttributeDamage", iVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_37(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_38(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
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

int func_38(int iParam0, struct<3> Param1, int iParam2)
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

int func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_40()
{
	struct<3> Var0;
	
	if (func_59(Local_77.f_1.f_8))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Var0 = { func_57(func_58(unk_0x1146A9AE09CE2B14()), 0f, (-200f * sin((to_float(Local_77.f_1.f_13) * 30f))), (200f * cos((to_float(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = unk_0x241C904AE6C04171(Var0.x, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405077.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x95F3ABD15748A3D6(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x091D6114DC63264E(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam11)
	{
		if (unk_0x1009A332C2986B7C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam12 > 0f)
	{
		if (func_50(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_42(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_49(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_47(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_49(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_43(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x0BABEFEA577FCFA4(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam6 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x0BABEFEA577FCFA4(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1312763;
}

Vector3 func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1590908[iVar0 /*874*/].f_844) && !func_59(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_58(iParam0);
}

var func_48()
{
	return Global_2453009.f_19;
}

int func_49(int iParam0, bool bParam1, bool bParam2)
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

int func_50(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam6 == 0)
		{
			if (func_49(iVar1, bParam2, bParam3))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam5 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && uParam7) && bParam4) && func_51(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_58(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_56(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_55(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_52(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_53();
}

struct<13> func_55(var uParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(uParam0, &Var0, 13);
	return Var0;
}

int func_56(int iParam0, var uParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_55(iParam0) };
		Global_2518266 = { func_55(uParam1) };
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

Vector3 func_57(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

Vector3 func_58(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

int func_59(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()
{
	func_67();
	func_62();
}

void func_62()
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	if (unk_0x575B7C28D81C0B4D(uLocal_61))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_61);
	}
}

void func_64()
{
	var uVar0;
	
	uVar0 = unk_0x854C404AEB476240(Local_77.f_1);
	if (!unk_0x575B7C28D81C0B4D(uLocal_61) && unk_0x419E13582192CFEA(uVar0))
	{
		uLocal_61 = unk_0xB20BB447C131B310(iVar0);
		unk_0x252BE56DB93DF816(uLocal_61, 422);
		unk_0xB5E587F8B911573B(uLocal_61, 0);
		unk_0xDD944E3FD2028A48(uLocal_61, "MPCT_MERRY3");
		func_65(&uLocal_61, 1);
	}
}

void func_65(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		uVar0 = func_66(iParam1);
		unk_0xFA3E6ADC3E5D386E(*uParam0, uVar0);
	}
}

int func_66(int iParam0)
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

void func_67()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_77.f_1))
			{
				uVar1 = unk_0x854C404AEB476240(Local_77.f_1);
				func_64();
				if (func_80(Local_77.f_1))
				{
					if (unk_0xB364346471C3B028(Local_77.f_1))
					{
						if (unk_0x4A4AB27245D30BB1(uVar1))
						{
							if (func_79())
							{
								if (!unk_0xC77FD8F88190C5A5(uVar1))
								{
									unk_0x3D6C56487C41708E(uVar1, 1, 0);
								}
							}
							else if (unk_0xC77FD8F88190C5A5(uVar1))
							{
								unk_0x3D6C56487C41708E(uVar1, 0, 0);
							}
						}
					}
				}
				func_69();
				if (unk_0xB7D6400C89373777(Local_77.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[0 /*2*/]);
					if (!unk_0xECEC7528A52B4EE8(uVar0))
					{
						iVar2 = unk_0x95BE01470232BFD7(uVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0xB364346471C3B028(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									unk_0xBE91B077ADADE97F(uVar0, 1);
									func_28(uVar0, 0, 0, 0);
									unk_0x4B43AFBD2CEE7724(uVar1);
									unk_0x89E171705EA920DA(uVar1, 1, 1, 0);
									if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
									{
										if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
										{
											unk_0x040CCF00053DBCB0(uVar0, uVar1, 0, unk_0x7D2B9E6A64637269(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xB7D6400C89373777(Local_77.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]);
					if (!unk_0xECEC7528A52B4EE8(uVar0))
					{
						if (!unk_0x3D28F4F0775C6C2A(uVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0xB364346471C3B028(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									unk_0xBE91B077ADADE97F(uVar0, 0);
									func_28(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_77.f_1.f_17)))
			{
				func_5(&(Local_77.f_1.f_17), 0, 0);
			}
			if (func_12(Local_77.f_1))
			{
				uVar1 = unk_0x854C404AEB476240(Local_77.f_1);
				if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_77.f_1))
						{
							if (unk_0xB364346471C3B028(Local_77.f_1.f_3[0 /*2*/]))
							{
								unk_0xBE91B077ADADE97F(uVar0, 0);
								unk_0xCA089CD1A17D76DF(uVar0);
								unk_0x2271ED1E65FB75EE(uVar0, Global_1575021);
								if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
								{
									if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
									{
										unk_0x040CCF00053DBCB0(uVar0, uVar1, 0, unk_0x7D2B9E6A64637269(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x504B26425DFF773C(uVar0, 1);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]);
						if (func_80(Local_77.f_1))
						{
							if (unk_0xB364346471C3B028(Local_77.f_1.f_3[1 /*2*/]))
							{
								unk_0xCA089CD1A17D76DF(uVar0);
								unk_0xBE91B077ADADE97F(uVar0, 1);
								unk_0x504B26425DFF773C(uVar0, 1);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()
{
	var uVar0;
	
	if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (unk_0xB364346471C3B028(Local_77.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[0 /*2*/]);
				unk_0xC595907BB71C921D(uVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xB364346471C3B028(Local_77.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[1 /*2*/]);
				unk_0xC595907BB71C921D(uVar0, 0, 0);
			}
		}
	}
}

void func_69()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	
	if (!Global_1695721)
	{
		return;
	}
	if (!unk_0xB364346471C3B028(Local_77.f_1))
	{
		return;
	}
	uVar0 = unk_0x854C404AEB476240(Local_77.f_1);
	if (func_78(uVar0))
	{
		return;
	}
	if (!func_77(uVar0))
	{
		return;
	}
	if (iLocal_75 == func_53())
	{
		func_71();
		return;
	}
	uVar1 = unk_0xD56332194D622ECE(iLocal_75);
	if (!func_6(&uLocal_73))
	{
		if (iLocal_75 != func_53() && func_77(uVar1))
		{
			if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(uVar1, 1), unk_0xD6E677FAD7521410(uVar0, 1), 0) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_73, Global_1695720, 0))
	{
		return;
	}
	func_70(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		uVar5 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (func_77(uVar5) && unk_0x3D28F4F0775C6C2A(uVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_75 = func_53();
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	iVar1 = unk_0x1146A9AE09CE2B14();
	uVar3 = unk_0x8A437068C87289B7(Local_77.f_1.f_3[0 /*2*/]);
	uVar4 = unk_0x854C404AEB476240(Local_77.f_1);
	uVar5 = func_74(unk_0x1146A9AE09CE2B14());
	uVar6 = unk_0xD56332194D622ECE(uVar5);
	iLocal_75 = func_53();
	iLocal_76++;
	iLocal_76 = func_73(iLocal_76, 32);
	iVar0 = iLocal_76;
	if (iVar0 == func_53())
	{
		return;
	}
	if (iVar0 == iLocal_75)
	{
		return;
	}
	if (!func_49(iVar0, 1, 1))
	{
		return;
	}
	uVar2 = unk_0xD56332194D622ECE(iVar0);
	if (!func_77(uVar2))
	{
		return;
	}
	if (func_77(uVar6))
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(uVar6, 1), unk_0xD6E677FAD7521410(uVar2, 1), 0) > Global_1695722)
		{
			return;
		}
	}
	if (func_52(iVar1, iVar0) || func_72(iVar1, iVar0, -2, 0))
	{
		unk_0x040CCF00053DBCB0(uVar3, uVar4, 0, uVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1082130432, 0);
		iLocal_75 = iVar0;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_73(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return Global_1630816[func_54(iParam0) /*597*/].f_11.f_459;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_53();
}

int func_76(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_53())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (!unk_0x2AB8EC6521549BAD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	if (unk_0xCA86FAB7FADC8353() >= 22)
	{
		return 1;
	}
	if (unk_0xCA86FAB7FADC8353() <= 6 && unk_0xCA86FAB7FADC8353() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0)
{
	if (unk_0xE5AEA27726895658(uParam0))
	{
		return 1;
	}
	if (unk_0x443E2CA72E118E64())
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
	}
	return 0;
}

int func_81()
{
	return Local_77;
}

int func_82(int iParam0)
{
	return iLocal_78[iParam0];
}

void func_83()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(unk_0x1146A9AE09CE2B14()) };
		fLocal_68 = unk_0x241C904AE6C04171(Var1.x, Var1.f_1);
		if (fLocal_68 < Global_262145.f_10790)
		{
			fLocal_68 = Global_262145.f_10790;
		}
		func_70(&uLocal_69);
	}
}

void func_84()
{
	if (unk_0x419E13582192CFEA(Global_2441237.f_4127.f_1[0]))
	{
		unk_0xC606AE2A3209945E(&(Global_2441237.f_4127.f_1[0]));
	}
	if (unk_0x419E13582192CFEA(Global_2441237.f_4127.f_1[1]))
	{
		unk_0xC606AE2A3209945E(&(Global_2441237.f_4127.f_1[1]));
	}
	if (unk_0x419E13582192CFEA(Global_2441237.f_4127))
	{
		unk_0x5420D0D520CF44D0(&(Global_2441237.f_4127));
	}
	Global_2441237.f_4127.f_5 = 0f;
	Global_2441237.f_4127.f_6 = 0;
	Global_2441237.f_4127.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()
{
	unk_0x4BFE89D21F9885DC();
}

void func_86(int iParam0)
{
	Global_2544210.f_444 = iParam0;
}

int func_87()
{
	var uVar0;
	
	func_95(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()
{
	return Global_31345;
}

bool func_91()
{
	return Global_2453009.f_698;
}

int func_92(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2463497;
}

bool func_94()
{
	return Global_2453009.f_693;
}

void func_95(var uParam0)
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
					func_96(iVar0);
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

void func_96(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_49(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_97(uVar2, &bVar3))
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

int func_97(int iParam0, var uParam1)
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

void func_98()
{
	wait(0);
}

void func_99(struct<21> Param0)
{
	func_86(0);
	func_103(32, Param0);
	unk_0x54BBD34B26EF27D9(2);
	unk_0xCE293C7793B5EC3F(1);
	func_101(0, -1, 0);
	unk_0xF784CE07ED70869A(&Local_77, 21);
	unk_0xC84352B5E80ABF68(&iLocal_78, 33);
	unk_0x87F1904AB605184A(0);
	if (!func_100())
	{
		func_84();
	}
	if (unk_0xD09C9D030AFD3F25())
	{
		bLocal_62 = true;
	}
	iLocal_75 = unk_0x1146A9AE09CE2B14();
	iLocal_78[unk_0xDD0E57E73E5C4BF6()] = 0;
}

int func_100()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x02BFF15CAA701972())
		{
			return 0;
		}
		if (unk_0x50309A384D827846())
		{
			return 1;
		}
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_102())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
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
					func_85();
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
				func_85();
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
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_102()
{
	return Global_1312878;
}

void func_103(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x02BFF15CAA701972())
	{
		func_85();
	}
	unk_0x35BEDD7AFD26FCD5(iParam0, 0, Param1.f_16);
}

